function [ard, encoder] = init(portName)
    ppr = 2800;
    ard = arduino(portName,'Mega2560','Libraries','rotaryEncoder','BaudRate',115200);

    configurePin(ard,'D5','PWM');
    configurePin(ard,'D6','PWM');

    encoder = rotaryEncoder(ard,'D2','D3',ppr);
end




function toPos(ard, encoder, pos)
    ppr = 2800;
    threshold = 5;
    
    % PID Parameters
    Kp = 1;
    Ki = 0;
    Kd = 0;

    % Initial Coniditions
    target = pos;
    [pos, time] = readCount(encoder);
    swingTime = 10;
    
    timeStart = time;

    lastError = target - pos * 360 / ppr;
    lastTime = time;
    
    Int = 0;

    % Preallocation
    dp = 50 * swingTime;
    t = zeros(1, dp);
    p = zeros(1, dp);

    targets = zeros(1, dp);
    errors = zeros(1, dp);
    controls = zeros(1, dp);

    placeholder = 1;

    while (time - timeStart < swingTime)
        [pos, time] = readCount(encoder);
        
        if (1==2)
            if (time - timeStart < 1)
                target = 360 * (time - timeStart);
            elseif (time - timeStart < pi)
                target = 360;
            else
                target = sin(3 * (time - timeStart) - pi / 2) * 180 + 180;
            end
        end
        
        error = target - pos * 360 / ppr;
        
    % PID Calculation
        Prop = error;
        Der = (error - lastError) / (time - lastTime);
        Int = Int + (error) * (time - lastTime);
        
        control = Kp * Prop + Kd * Der + Ki * Int;
        
    % Control Saturation
        if control > threshold
            control = threshold;
        elseif control < -threshold
            control = -threshold;
        end

    % CW/CCW Control Logic
        if control > 0
            writePWMVoltage(ard,'D5',control);
            writePWMVoltage(ard,'D6',0);
        else
            writePWMVoltage(ard,'D5', 0);
            writePWMVoltage(ard,'D6',-control);
        end

        

    % Save State
        lastError = error;

        t(placeholder) = time - timeStart;
        p(placeholder) = pos * 360 / ppr;
        targets(placeholder) = target;
        errors(placeholder) = error;
        controls(placeholder) = control;

        if placeholder == dp
            placeholder = 0;
        end
        placeholder = placeholder + 1;
    end

 

    % Turn off motor at the end
    writePWMVoltage(ard,'D5',0);
    writePWMVoltage(ard,'D6',0);

 

    

    % Signal plotting
    active = t > 0;

    figure('Position', [50 100 1200 500])
    subplot(1,2,1)
    plot(t(active), p(active),t(active), targets(active),t(active), errors(active));
    subplot(1,2,2)
    plot(t(active), controls(active));
end


