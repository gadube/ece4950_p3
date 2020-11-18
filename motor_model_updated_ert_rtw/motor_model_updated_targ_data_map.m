  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (motor_model_updated_P)
    ;%
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% motor_model_updated_P.Chart_count
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_P.MotorPositionCmd_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% motor_model_updated_P.gain_Gain
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% motor_model_updated_P.angular_positionrelative_countC
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% motor_model_updated_P.Kd_Gain
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% motor_model_updated_P.Integrator1_IC
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% motor_model_updated_P.Ki_Gain
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% motor_model_updated_P.Kp_Gain
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% motor_model_updated_P.Saturation_UpperSat
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% motor_model_updated_P.Saturation_LowerSat
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% motor_model_updated_P.Gain_Gain
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% motor_model_updated_P.MotorDirection2.Constant_Value
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_P.MotorDirection2.Constant1_Value
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% motor_model_updated_P.MotorDirection1.Constant_Value
	  section.data(1).logicalSrcIdx = 13;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_P.MotorDirection1.Constant1_Value
	  section.data(2).logicalSrcIdx = 14;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (motor_model_updated_B)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% motor_model_updated_B.angular_positionrelative_countC
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_B.ErrorSignal
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% motor_model_updated_B.Kp
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% motor_model_updated_B.count
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% motor_model_updated_B.RateTransition
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_B.RateTransition1
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% motor_model_updated_B.val
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 2;
	
	  ;% motor_model_updated_B.val_l
	  section.data(4).logicalSrcIdx = 7;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 12;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (motor_model_updated_DW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.obj
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.gobj_1
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_DW.gobj_2
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% motor_model_updated_DW.gobj_3
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% motor_model_updated_DW.gobj_4
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.obj_l
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_DW.obj_f
	  section.data(2).logicalSrcIdx = 6;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.TimeStampA
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_DW.LastUAtTimeA
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1;
	
	  ;% motor_model_updated_DW.TimeStampB
	  section.data(3).logicalSrcIdx = 9;
	  section.data(3).dtTransOffset = 2;
	
	  ;% motor_model_updated_DW.LastUAtTimeB
	  section.data(4).logicalSrcIdx = 10;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.Scope1_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_DW.Scope_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.sfEvent
	  section.data(1).logicalSrcIdx = 13;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.is_c4_motor_model_updated
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.ChooseDirection_ActiveSubsystem
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_DW.FunctionCallSubsystem1_SubsysRa
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 1;
	
	  ;% motor_model_updated_DW.FunctionCallSubsystem_SubsysRan
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.is_active_c4_motor_model_update
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.objisempty
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_model_updated_DW.objisempty_b
	  section.data(2).logicalSrcIdx = 20;
	  section.data(2).dtTransOffset = 1;
	
	  ;% motor_model_updated_DW.objisempty_e
	  section.data(3).logicalSrcIdx = 21;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.MotorDirection2.MotorDirection1_SubsysRanBC
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% motor_model_updated_DW.MotorDirection1.MotorDirection1_SubsysRanBC
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3903547573;
  targMap.checksum1 = 2976383319;
  targMap.checksum2 = 2715975663;
  targMap.checksum3 = 4131815086;

