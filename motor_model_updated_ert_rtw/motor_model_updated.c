/*
 * motor_model_updated.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "motor_model_updated".
 *
 * Model version              : 1.242
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Tue Nov 17 20:54:51 2020
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "motor_model_updated.h"
#include "motor_model_updated_private.h"
#include "motor_model_updated_dt.h"

/* Named constants for Chart: '<S6>/Chart' */
#define motor_model_updated_CALL_EVENT (-1L)
#define motor_model_updated_IN_State00 (1UL)
#define motor_model_updated_IN_State01 (2UL)
#define motor_model_updated_IN_State10 (3UL)
#define motor_model_updated_IN_State11 (4UL)

/* Block signals (default storage) */
B_motor_model_updated_T motor_model_updated_B;

/* Continuous states */
X_motor_model_updated_T motor_model_updated_X;

/* Block states (default storage) */
DW_motor_model_updated_T motor_model_updated_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_motor_model_updated_T motor_model_updated_Y;

/* Real-time model */
RT_MODEL_motor_model_updated_T motor_model_updated_M_;
RT_MODEL_motor_model_updated_T *const motor_model_updated_M =
  &motor_model_updated_M_;

/* Forward declaration for local functions */
static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_inter_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0);
static void motor_model__SystemCore_release(codertarget_arduinobase_inter_T *obj);
static void motor_mode_SystemCore_delete_cg(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHandle_matlabCo_cg(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_block_T *obj);

/* Callback for Hardware Interrupt Block: '<S2>/External Interrupt2' */
void MW_ISR_2(void)
{
  /* Call the system: <S3>/Function-Call Subsystem */
  {
    /* Reset subsysRan breadcrumbs */
    srClearBC(motor_model_updated_DW.FunctionCallSubsystem_SubsysRan);

    /* S-Function (arduinoextint_sfcn): '<S2>/External Interrupt2' */

    /* Output and update for function-call system: '<S3>/Function-Call Subsystem' */

    /* Asynchronous task (with no priority assigned)
     * reads absolute time */
    switch (motor_model_updated_M->Timing.rtmDbBufWriteBuf2) {
     case 0:
      motor_model_updated_M->Timing.rtmDbBufReadBuf2 = 1;
      break;

     case 1:
      motor_model_updated_M->Timing.rtmDbBufReadBuf2 = 0;
      break;

     default:
      motor_model_updated_M->Timing.rtmDbBufReadBuf2 =
        motor_model_updated_M->Timing.rtmDbBufLastBufWr2;
      break;
    }

    motor_model_updated_M->Timing.clockTick2 =
      motor_model_updated_M->Timing.rtmDbBufClockTick2
      [motor_model_updated_M->Timing.rtmDbBufReadBuf2];
    motor_model_updated_M->Timing.clockTickH2 =
      motor_model_updated_M->Timing.rtmDbBufClockTickH2
      [motor_model_updated_M->Timing.rtmDbBufReadBuf2];
    motor_model_updated_M->Timing.rtmDbBufReadBuf2 = 0xFF;

    /* MATLAB Function: '<S7>/MATLAB Function' */
    motor_model_updated_B.val_l = readDigitalPin(2);
    motor_model_updated_DW.FunctionCallSubsystem_SubsysRan = 4;

    /* End of Outputs for S-Function (arduinoextint_sfcn): '<S2>/External Interrupt2' */
  }
}

/* Callback for Hardware Interrupt Block: '<S2>/External Interrupt3' */
void MW_ISR_3(void)
{
  /* Call the system: <S3>/Function-Call Subsystem1 */
  {
    /* Reset subsysRan breadcrumbs */
    srClearBC(motor_model_updated_DW.FunctionCallSubsystem1_SubsysRa);

    /* S-Function (arduinoextint_sfcn): '<S2>/External Interrupt3' */

    /* Output and update for function-call system: '<S3>/Function-Call Subsystem1' */

    /* Asynchronous task (with no priority assigned)
     * reads absolute time */
    switch (motor_model_updated_M->Timing.rtmDbBufWriteBuf3) {
     case 0:
      motor_model_updated_M->Timing.rtmDbBufReadBuf3 = 1;
      break;

     case 1:
      motor_model_updated_M->Timing.rtmDbBufReadBuf3 = 0;
      break;

     default:
      motor_model_updated_M->Timing.rtmDbBufReadBuf3 =
        motor_model_updated_M->Timing.rtmDbBufLastBufWr3;
      break;
    }

    motor_model_updated_M->Timing.clockTick3 =
      motor_model_updated_M->Timing.rtmDbBufClockTick3
      [motor_model_updated_M->Timing.rtmDbBufReadBuf3];
    motor_model_updated_M->Timing.clockTickH3 =
      motor_model_updated_M->Timing.rtmDbBufClockTickH3
      [motor_model_updated_M->Timing.rtmDbBufReadBuf3];
    motor_model_updated_M->Timing.rtmDbBufReadBuf3 = 0xFF;

    /* MATLAB Function: '<S8>/MATLAB Function' */
    motor_model_updated_B.val = readDigitalPin(3);
    motor_model_updated_DW.FunctionCallSubsystem1_SubsysRa = 4;

    /* End of Outputs for S-Function (arduinoextint_sfcn): '<S2>/External Interrupt3' */
  }
}

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 1;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  motor_model_updated_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for action system:
 *    '<S2>/Motor Direction1'
 *    '<S2>/Motor Direction 2'
 */
void motor_model_upd_MotorDirection1(real_T *rty_IN1, real_T *rty_IN2,
  P_MotorDirection1_motor_model_T *localP)
{
  if (1) {
    /* Constant: '<S5>/Constant' */
    *rty_IN1 = localP->Constant_Value;

    /* Constant: '<S5>/Constant1' */
    *rty_IN2 = localP->Constant1_Value;
  }
}

static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_inter_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0)
{
  iobj_0->AvailablePwmPinNames.f1 = '2';
  iobj_0->AvailablePwmPinNames.f2 = '3';
  iobj_0->AvailablePwmPinNames.f3 = '4';
  iobj_0->AvailablePwmPinNames.f4 = '5';
  iobj_0->AvailablePwmPinNames.f5 = '6';
  iobj_0->AvailablePwmPinNames.f6 = '7';
  iobj_0->AvailablePwmPinNames.f7 = '8';
  iobj_0->AvailablePwmPinNames.f8 = '9';
  iobj_0->AvailablePwmPinNames.f9[0] = '1';
  iobj_0->AvailablePwmPinNames.f9[1] = '0';
  iobj_0->AvailablePwmPinNames.f10[0] = '1';
  iobj_0->AvailablePwmPinNames.f10[1] = '1';
  iobj_0->AvailablePwmPinNames.f11[0] = '1';
  iobj_0->AvailablePwmPinNames.f11[1] = '2';
  iobj_0->AvailablePwmPinNames.f12[0] = '1';
  iobj_0->AvailablePwmPinNames.f12[1] = '3';
  obj->Hw = iobj_0;
  obj->PinPWM = 5UL;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void motor_model__SystemCore_release(codertarget_arduinobase_inter_T *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_SetDutyCycle(obj->MW_PWM_HANDLE, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void motor_mode_SystemCore_delete_cg(codertarget_arduinobase_inter_T *obj)
{
  motor_model__SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCo_cg(codertarget_arduinobase_inter_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    motor_mode_SystemCore_delete_cg(obj);
  }
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_block_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void motor_model_updated_step(void)
{
  /* local block i/o variables */
  real_T rtb_Merge1;
  real_T rtb_Merge2;
  if (rtmIsMajorTimeStep(motor_model_updated_M)) {
    /* set solver stop time */
    if (!(motor_model_updated_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&motor_model_updated_M->solverInfo,
                            ((motor_model_updated_M->Timing.clockTickH0 + 1) *
        motor_model_updated_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&motor_model_updated_M->solverInfo,
                            ((motor_model_updated_M->Timing.clockTick0 + 1) *
        motor_model_updated_M->Timing.stepSize0 +
        motor_model_updated_M->Timing.clockTickH0 *
        motor_model_updated_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(motor_model_updated_M)) {
    motor_model_updated_M->Timing.t[0] = rtsiGetT
      (&motor_model_updated_M->solverInfo);
  }

  {
    real_T *lastU;
    real_T lastTime;
    codertarget_arduinobase_inter_T *obj;
    real_T rtb_Setpoint;
    uint8_T tmp;

    /* Reset subsysRan breadcrumbs */
    srClearBC(motor_model_updated_DW.MotorDirection1.MotorDirection1_SubsysRanBC);
    if (rtmIsMajorTimeStep(motor_model_updated_M)) {
      /* Gain: '<Root>/gain' incorporates:
       *  Constant: '<Root>/MotorPositionCmd'
       */
      rtb_Setpoint = motor_model_updated_P.gain_Gain *
        motor_model_updated_P.MotorPositionCmd_Value;

      /* RateTransition: '<S3>/Rate Transition' */
      motor_model_updated_B.RateTransition = motor_model_updated_B.val_l;

      /* RateTransition: '<S3>/Rate Transition1' */
      motor_model_updated_B.RateTransition1 = motor_model_updated_B.val;

      /* Chart: '<S6>/Chart' */
      motor_model_updated_DW.sfEvent = motor_model_updated_CALL_EVENT;
      if (motor_model_updated_DW.is_active_c4_motor_model_update == 0U) {
        motor_model_updated_DW.is_active_c4_motor_model_update = 1U;
        motor_model_updated_DW.is_c4_motor_model_updated =
          motor_model_updated_IN_State00;
      } else {
        switch (motor_model_updated_DW.is_c4_motor_model_updated) {
         case motor_model_updated_IN_State00:
          if (motor_model_updated_B.RateTransition1) {
            motor_model_updated_B.count--;
            motor_model_updated_DW.is_c4_motor_model_updated =
              motor_model_updated_IN_State10;
          } else {
            if (motor_model_updated_B.RateTransition) {
              motor_model_updated_B.count++;
              motor_model_updated_DW.is_c4_motor_model_updated =
                motor_model_updated_IN_State01;
            }
          }
          break;

         case motor_model_updated_IN_State01:
          if (!motor_model_updated_B.RateTransition) {
            motor_model_updated_B.count--;
            motor_model_updated_DW.is_c4_motor_model_updated =
              motor_model_updated_IN_State00;
          } else {
            if (motor_model_updated_B.RateTransition1) {
              motor_model_updated_B.count++;
              motor_model_updated_DW.is_c4_motor_model_updated =
                motor_model_updated_IN_State11;
            }
          }
          break;

         case motor_model_updated_IN_State10:
          if (!motor_model_updated_B.RateTransition1) {
            motor_model_updated_B.count++;
            motor_model_updated_DW.is_c4_motor_model_updated =
              motor_model_updated_IN_State00;
          } else {
            if (motor_model_updated_B.RateTransition) {
              motor_model_updated_B.count--;
              motor_model_updated_DW.is_c4_motor_model_updated =
                motor_model_updated_IN_State11;
            }
          }
          break;

         default:
          /* case IN_State11: */
          if (!motor_model_updated_B.RateTransition1) {
            motor_model_updated_B.count--;
            motor_model_updated_DW.is_c4_motor_model_updated =
              motor_model_updated_IN_State01;
          } else {
            if (!motor_model_updated_B.RateTransition) {
              motor_model_updated_B.count++;
              motor_model_updated_DW.is_c4_motor_model_updated =
                motor_model_updated_IN_State10;
            }
          }
          break;
        }
      }

      /* End of Chart: '<S6>/Chart' */

      /* Gain: '<S2>/angular_position =  [relative_count//COUNTS_PER_REV] *360 degrees' */
      motor_model_updated_B.angular_positionrelative_countC =
        motor_model_updated_P.angular_positionrelative_countC *
        motor_model_updated_B.count;

      /* Sum: '<Root>/Sum1' */
      motor_model_updated_B.ErrorSignal = rtb_Setpoint
        - motor_model_updated_B.angular_positionrelative_countC;
    }

    /* Derivative: '<S1>/Derivative1' */
    rtb_Setpoint = motor_model_updated_M->Timing.t[0];
    if ((motor_model_updated_DW.TimeStampA >= rtb_Setpoint) &&
        (motor_model_updated_DW.TimeStampB >= rtb_Setpoint)) {
      rtb_Setpoint = 0.0;
    } else {
      lastTime = motor_model_updated_DW.TimeStampA;
      lastU = &motor_model_updated_DW.LastUAtTimeA;
      if (motor_model_updated_DW.TimeStampA < motor_model_updated_DW.TimeStampB)
      {
        if (motor_model_updated_DW.TimeStampB < rtb_Setpoint) {
          lastTime = motor_model_updated_DW.TimeStampB;
          lastU = &motor_model_updated_DW.LastUAtTimeB;
        }
      } else {
        if (motor_model_updated_DW.TimeStampA >= rtb_Setpoint) {
          lastTime = motor_model_updated_DW.TimeStampB;
          lastU = &motor_model_updated_DW.LastUAtTimeB;
        }
      }

      rtb_Setpoint = (motor_model_updated_B.ErrorSignal - *lastU) /
        (rtb_Setpoint - lastTime);
    }

    /* End of Derivative: '<S1>/Derivative1' */
    if (rtmIsMajorTimeStep(motor_model_updated_M)) {
      /* Gain: '<S1>/Kp' */
      motor_model_updated_B.Kp = motor_model_updated_P.Kp_Gain *
        motor_model_updated_B.ErrorSignal;
    }

    /* Sum: '<S1>/Sum4' incorporates:
     *  Gain: '<S1>/Kd'
     *  Gain: '<S1>/Ki'
     *  Integrator: '<S1>/Integrator1'
     */
    rtb_Setpoint = (motor_model_updated_P.Kd_Gain * rtb_Setpoint
                    + motor_model_updated_B.Kp) + motor_model_updated_P.Ki_Gain *
      motor_model_updated_X.Integrator1_CSTATE;

    /* Saturate: '<S2>/Saturation' */
    if (rtb_Setpoint > motor_model_updated_P.Saturation_UpperSat) {
      rtb_Setpoint = motor_model_updated_P.Saturation_UpperSat;
    } else {
      if (rtb_Setpoint < motor_model_updated_P.Saturation_LowerSat) {
        rtb_Setpoint = motor_model_updated_P.Saturation_LowerSat;
      }
    }

    /* End of Saturate: '<S2>/Saturation' */

    /* If: '<S2>/Choose Direction' */
    if (rtmIsMajorTimeStep(motor_model_updated_M)) {
      motor_model_updated_DW.ChooseDirection_ActiveSubsystem = (int8_T)
        !(rtb_Setpoint > 0.0);
    }

    switch (motor_model_updated_DW.ChooseDirection_ActiveSubsystem) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S2>/Motor Direction1' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      motor_model_upd_MotorDirection1(&rtb_Merge1, &rtb_Merge2,
        &motor_model_updated_P.MotorDirection1);
      if (rtmIsMajorTimeStep(motor_model_updated_M)) {
        srUpdateBC
          (motor_model_updated_DW.MotorDirection1.MotorDirection1_SubsysRanBC);
      }

      /* End of Outputs for SubSystem: '<S2>/Motor Direction1' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S2>/Motor Direction 2' incorporates:
       *  ActionPort: '<S4>/Action Port'
       */
      motor_model_upd_MotorDirection1(&rtb_Merge1, &rtb_Merge2,
        &motor_model_updated_P.MotorDirection2);
      if (rtmIsMajorTimeStep(motor_model_updated_M)) {
        srUpdateBC
          (motor_model_updated_DW.MotorDirection2.MotorDirection1_SubsysRanBC);
      }

      /* End of Outputs for SubSystem: '<S2>/Motor Direction 2' */
      break;
    }

    /* End of If: '<S2>/Choose Direction' */

    /* Abs: '<S2>/Abs' */
    rtb_Setpoint = fabs(rtb_Setpoint);

    /* MATLABSystem: '<S2>/Enable' */
    obj = &motor_model_updated_DW.obj;
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(motor_model_updated_DW.obj.PinPWM);

    /* Gain: '<S2>/Gain' */
    rtb_Setpoint *= motor_model_updated_P.Gain_Gain;

    /* MATLABSystem: '<S2>/Enable' */
    if (!(rtb_Setpoint < 255.0)) {
      rtb_Setpoint = 255.0;
    }

    if (!(rtb_Setpoint > 0.0)) {
      rtb_Setpoint = 0.0;
    }

    MW_PWM_SetDutyCycle(motor_model_updated_DW.obj.MW_PWM_HANDLE, rtb_Setpoint);
    if (rtmIsMajorTimeStep(motor_model_updated_M)) {
      /* Outport: '<Root>/MotorPositionActual' */
      motor_model_updated_Y.MotorPositionActual =
        motor_model_updated_B.angular_positionrelative_countC;

      /* MATLABSystem: '<S2>/Driver In1' */
      rtb_Setpoint = rt_roundd_snf(rtb_Merge1);
      if (rtb_Setpoint < 256.0) {
        if (rtb_Setpoint >= 0.0) {
          tmp = (uint8_T)rtb_Setpoint;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint8_T;
      }

      writeDigitalPin(30, tmp);

      /* End of MATLABSystem: '<S2>/Driver In1' */

      /* MATLABSystem: '<S2>/Driver In2' */
      rtb_Setpoint = rt_roundd_snf(rtb_Merge2);
      if (rtb_Setpoint < 256.0) {
        if (rtb_Setpoint >= 0.0) {
          tmp = (uint8_T)rtb_Setpoint;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint8_T;
      }

      writeDigitalPin(31, tmp);

      /* End of MATLABSystem: '<S2>/Driver In2' */
    }
  }

  if (rtmIsMajorTimeStep(motor_model_updated_M)) {
    real_T *lastU;

    /* Update for Derivative: '<S1>/Derivative1' */
    if (motor_model_updated_DW.TimeStampA == (rtInf)) {
      motor_model_updated_DW.TimeStampA = motor_model_updated_M->Timing.t[0];
      lastU = &motor_model_updated_DW.LastUAtTimeA;
    } else if (motor_model_updated_DW.TimeStampB == (rtInf)) {
      motor_model_updated_DW.TimeStampB = motor_model_updated_M->Timing.t[0];
      lastU = &motor_model_updated_DW.LastUAtTimeB;
    } else if (motor_model_updated_DW.TimeStampA <
               motor_model_updated_DW.TimeStampB) {
      motor_model_updated_DW.TimeStampA = motor_model_updated_M->Timing.t[0];
      lastU = &motor_model_updated_DW.LastUAtTimeA;
    } else {
      motor_model_updated_DW.TimeStampB = motor_model_updated_M->Timing.t[0];
      lastU = &motor_model_updated_DW.LastUAtTimeB;
    }

    *lastU = motor_model_updated_B.ErrorSignal;

    /* End of Update for Derivative: '<S1>/Derivative1' */

    /* External mode */
    rtExtModeUploadCheckTrigger(2);

    {                                  /* Sample time: [0.0s, 0.0s] */
      rtExtModeUpload(0, (real_T)motor_model_updated_M->Timing.t[0]);
    }

    if (rtmIsMajorTimeStep(motor_model_updated_M)) {/* Sample time: [0.0001s, 0.0s] */
      rtExtModeUpload(1, (real_T)(((motor_model_updated_M->Timing.clockTick1+
        motor_model_updated_M->Timing.clockTickH1* 4294967296.0)) * 0.0001));
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(motor_model_updated_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(motor_model_updated_M)!=-1) &&
          !((rtmGetTFinal(motor_model_updated_M)-
             (((motor_model_updated_M->Timing.clockTick1+
                motor_model_updated_M->Timing.clockTickH1* 4294967296.0)) *
              0.0001)) > (((motor_model_updated_M->Timing.clockTick1+
                            motor_model_updated_M->Timing.clockTickH1*
                            4294967296.0)) * 0.0001) * (DBL_EPSILON))) {
        rtmSetErrorStatus(motor_model_updated_M, "Simulation finished");
      }

      if (rtmGetStopRequested(motor_model_updated_M)) {
        rtmSetErrorStatus(motor_model_updated_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&motor_model_updated_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++motor_model_updated_M->Timing.clockTick0)) {
      ++motor_model_updated_M->Timing.clockTickH0;
    }

    motor_model_updated_M->Timing.t[0] = rtsiGetSolverStopTime
      (&motor_model_updated_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.0001s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.0001, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      motor_model_updated_M->Timing.clockTick1++;
      if (!motor_model_updated_M->Timing.clockTick1) {
        motor_model_updated_M->Timing.clockTickH1++;
      }
    }

    switch (motor_model_updated_M->Timing.rtmDbBufReadBuf2) {
     case 0:
      motor_model_updated_M->Timing.rtmDbBufWriteBuf2 = 1;
      break;

     case 1:
      motor_model_updated_M->Timing.rtmDbBufWriteBuf2 = 0;
      break;

     default:
      motor_model_updated_M->Timing.rtmDbBufWriteBuf2 =
        !motor_model_updated_M->Timing.rtmDbBufLastBufWr2;
      break;
    }

    motor_model_updated_M->Timing.rtmDbBufClockTick2
      [motor_model_updated_M->Timing.rtmDbBufWriteBuf2] =
      motor_model_updated_M->Timing.clockTick0;
    motor_model_updated_M->Timing.rtmDbBufClockTickH2
      [motor_model_updated_M->Timing.rtmDbBufWriteBuf2] =
      motor_model_updated_M->Timing.clockTickH0;
    motor_model_updated_M->Timing.rtmDbBufLastBufWr2 =
      motor_model_updated_M->Timing.rtmDbBufWriteBuf2;
    motor_model_updated_M->Timing.rtmDbBufWriteBuf2 = 0xFF;
    switch (motor_model_updated_M->Timing.rtmDbBufReadBuf3) {
     case 0:
      motor_model_updated_M->Timing.rtmDbBufWriteBuf3 = 1;
      break;

     case 1:
      motor_model_updated_M->Timing.rtmDbBufWriteBuf3 = 0;
      break;

     default:
      motor_model_updated_M->Timing.rtmDbBufWriteBuf3 =
        !motor_model_updated_M->Timing.rtmDbBufLastBufWr3;
      break;
    }

    motor_model_updated_M->Timing.rtmDbBufClockTick3
      [motor_model_updated_M->Timing.rtmDbBufWriteBuf3] =
      motor_model_updated_M->Timing.clockTick0;
    motor_model_updated_M->Timing.rtmDbBufClockTickH3
      [motor_model_updated_M->Timing.rtmDbBufWriteBuf3] =
      motor_model_updated_M->Timing.clockTickH0;
    motor_model_updated_M->Timing.rtmDbBufLastBufWr3 =
      motor_model_updated_M->Timing.rtmDbBufWriteBuf3;
    motor_model_updated_M->Timing.rtmDbBufWriteBuf3 = 0xFF;
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void motor_model_updated_derivatives(void)
{
  XDot_motor_model_updated_T *_rtXdot;
  _rtXdot = ((XDot_motor_model_updated_T *) motor_model_updated_M->derivs);

  /* Derivatives for Integrator: '<S1>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = motor_model_updated_B.ErrorSignal;
}

/* Model initialize function */
void motor_model_updated_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)motor_model_updated_M, 0,
                sizeof(RT_MODEL_motor_model_updated_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&motor_model_updated_M->solverInfo,
                          &motor_model_updated_M->Timing.simTimeStep);
    rtsiSetTPtr(&motor_model_updated_M->solverInfo, &rtmGetTPtr
                (motor_model_updated_M));
    rtsiSetStepSizePtr(&motor_model_updated_M->solverInfo,
                       &motor_model_updated_M->Timing.stepSize0);
    rtsiSetdXPtr(&motor_model_updated_M->solverInfo,
                 &motor_model_updated_M->derivs);
    rtsiSetContStatesPtr(&motor_model_updated_M->solverInfo, (real_T **)
                         &motor_model_updated_M->contStates);
    rtsiSetNumContStatesPtr(&motor_model_updated_M->solverInfo,
      &motor_model_updated_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&motor_model_updated_M->solverInfo,
      &motor_model_updated_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&motor_model_updated_M->solverInfo,
      &motor_model_updated_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&motor_model_updated_M->solverInfo,
      &motor_model_updated_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&motor_model_updated_M->solverInfo,
                          (&rtmGetErrorStatus(motor_model_updated_M)));
    rtsiSetRTModelPtr(&motor_model_updated_M->solverInfo, motor_model_updated_M);
  }

  rtsiSetSimTimeStep(&motor_model_updated_M->solverInfo, MAJOR_TIME_STEP);
  motor_model_updated_M->intgData.f[0] = motor_model_updated_M->odeF[0];
  motor_model_updated_M->contStates = ((X_motor_model_updated_T *)
    &motor_model_updated_X);
  rtsiSetSolverData(&motor_model_updated_M->solverInfo, (void *)
                    &motor_model_updated_M->intgData);
  rtsiSetSolverName(&motor_model_updated_M->solverInfo,"ode1");
  rtmSetTPtr(motor_model_updated_M, &motor_model_updated_M->Timing.tArray[0]);
  rtmSetTFinal(motor_model_updated_M, -1);
  motor_model_updated_M->Timing.stepSize0 = 0.0001;

  /* External mode info */
  motor_model_updated_M->Sizes.checksums[0] = (3903547573U);
  motor_model_updated_M->Sizes.checksums[1] = (2976383319U);
  motor_model_updated_M->Sizes.checksums[2] = (2715975663U);
  motor_model_updated_M->Sizes.checksums[3] = (4131815086U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[11];
    motor_model_updated_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = (sysRanDType *)
      &motor_model_updated_DW.FunctionCallSubsystem_SubsysRan;
    systemRan[6] = (sysRanDType *)
      &motor_model_updated_DW.FunctionCallSubsystem_SubsysRan;
    systemRan[7] = (sysRanDType *)
      &motor_model_updated_DW.FunctionCallSubsystem1_SubsysRa;
    systemRan[8] = (sysRanDType *)
      &motor_model_updated_DW.FunctionCallSubsystem1_SubsysRa;
    systemRan[9] = (sysRanDType *)
      &motor_model_updated_DW.MotorDirection2.MotorDirection1_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &motor_model_updated_DW.MotorDirection1.MotorDirection1_SubsysRanBC;
    rteiSetModelMappingInfoPtr(motor_model_updated_M->extModeInfo,
      &motor_model_updated_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(motor_model_updated_M->extModeInfo,
                        motor_model_updated_M->Sizes.checksums);
    rteiSetTPtr(motor_model_updated_M->extModeInfo, rtmGetTPtr
                (motor_model_updated_M));
  }

  /* block I/O */
  (void) memset(((void *) &motor_model_updated_B), 0,
                sizeof(B_motor_model_updated_T));

  /* states (continuous) */
  {
    (void) memset((void *)&motor_model_updated_X, 0,
                  sizeof(X_motor_model_updated_T));
  }

  /* states (dwork) */
  (void) memset((void *)&motor_model_updated_DW, 0,
                sizeof(DW_motor_model_updated_T));

  /* external outputs */
  motor_model_updated_Y.MotorPositionActual = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    motor_model_updated_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for S-Function (arduinoextint_sfcn): '<S2>/External Interrupt2' */
    pinMode(2, INPUT_PULLUP);

    /* Attach callback function */
    /* Changes made wrt g2141701, this change was needed to make the
     * architecture simpler for adding new boards.
     */
    attachInterrupt(digitalPinToInterrupt(2), &MW_ISR_2, CHANGE);

    /* End of Start for S-Function (arduinoextint_sfcn): '<S2>/External Interrupt2' */

    /* Start for S-Function (arduinoextint_sfcn): '<S2>/External Interrupt3' */
    pinMode(3, INPUT_PULLUP);

    /* Attach callback function */
    /* Changes made wrt g2141701, this change was needed to make the
     * architecture simpler for adding new boards.
     */
    attachInterrupt(digitalPinToInterrupt(3), &MW_ISR_3, CHANGE);

    /* End of Start for S-Function (arduinoextint_sfcn): '<S2>/External Interrupt3' */

    /* Start for If: '<S2>/Choose Direction' */
    motor_model_updated_DW.ChooseDirection_ActiveSubsystem = -1;

    /* Start for MATLABSystem: '<S2>/Enable' */
    motor_model_updated_DW.obj.matlabCodegenIsDeleted = true;
    motor_model_updated_DW.obj.isInitialized = 0L;
    motor_model_updated_DW.obj.matlabCodegenIsDeleted = false;
    motor_model_updated_DW.objisempty = true;
    arduino_PWMOutput_set_pinNumber(&motor_model_updated_DW.obj,
      &motor_model_updated_DW.gobj_2);
    obj = &motor_model_updated_DW.obj;
    motor_model_updated_DW.obj.isSetupComplete = false;
    motor_model_updated_DW.obj.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(motor_model_updated_DW.obj.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(motor_model_updated_DW.obj.PinPWM);
    MW_PWM_Start(motor_model_updated_DW.obj.MW_PWM_HANDLE);
    motor_model_updated_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/Driver In1' */
    motor_model_updated_DW.obj_l.matlabCodegenIsDeleted = true;
    motor_model_updated_DW.obj_l.isInitialized = 0L;
    motor_model_updated_DW.obj_l.matlabCodegenIsDeleted = false;
    motor_model_updated_DW.objisempty_b = true;
    motor_model_updated_DW.obj_l.isSetupComplete = false;
    motor_model_updated_DW.obj_l.isInitialized = 1L;
    digitalIOSetup(30, 1);
    motor_model_updated_DW.obj_l.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/Driver In2' */
    motor_model_updated_DW.obj_f.matlabCodegenIsDeleted = true;
    motor_model_updated_DW.obj_f.isInitialized = 0L;
    motor_model_updated_DW.obj_f.matlabCodegenIsDeleted = false;
    motor_model_updated_DW.objisempty_e = true;
    motor_model_updated_DW.obj_f.isSetupComplete = false;
    motor_model_updated_DW.obj_f.isInitialized = 1L;
    digitalIOSetup(31, 1);
    motor_model_updated_DW.obj_f.isSetupComplete = true;
  }

  motor_model_updated_M->Timing.rtmDbBufReadBuf2 = 0xFF;
  motor_model_updated_M->Timing.rtmDbBufWriteBuf2 = 0xFF;
  motor_model_updated_M->Timing.rtmDbBufLastBufWr2 = 0;
  motor_model_updated_M->Timing.rtmDbBufReadBuf3 = 0xFF;
  motor_model_updated_M->Timing.rtmDbBufWriteBuf3 = 0xFF;
  motor_model_updated_M->Timing.rtmDbBufLastBufWr3 = 0;

  /* InitializeConditions for Derivative: '<S1>/Derivative1' */
  motor_model_updated_DW.TimeStampA = (rtInf);
  motor_model_updated_DW.TimeStampB = (rtInf);

  /* InitializeConditions for Integrator: '<S1>/Integrator1' */
  motor_model_updated_X.Integrator1_CSTATE =
    motor_model_updated_P.Integrator1_IC;

  /* SystemInitialize for Chart: '<S6>/Chart' */
  motor_model_updated_DW.sfEvent = motor_model_updated_CALL_EVENT;
  motor_model_updated_DW.is_active_c4_motor_model_update = 0U;
  motor_model_updated_DW.is_c4_motor_model_updated = 0UL;
  motor_model_updated_B.count = motor_model_updated_P.Chart_count;
}

/* Model terminate function */
void motor_model_updated_terminate(void)
{
  /* Terminate for MATLABSystem: '<S2>/Enable' */
  matlabCodegenHandle_matlabCo_cg(&motor_model_updated_DW.obj);

  /* Terminate for MATLABSystem: '<S2>/Driver In1' */
  matlabCodegenHandle_matlabCodeg(&motor_model_updated_DW.obj_l);

  /* Terminate for MATLABSystem: '<S2>/Driver In2' */
  matlabCodegenHandle_matlabCodeg(&motor_model_updated_DW.obj_f);
}
