/*
 * motor_model_updated_private.h
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

#ifndef RTW_HEADER_motor_model_updated_private_h_
#define RTW_HEADER_motor_model_updated_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "motor_model_updated.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

extern real_T rt_roundd_snf(real_T u);
void MW_ISR_2(void);
void MW_ISR_3(void);
extern void motor_model_upd_MotorDirection1(real_T *rty_IN1, real_T *rty_IN2,
  P_MotorDirection1_motor_model_T *localP);

/* private model entry point functions */
extern void motor_model_updated_derivatives(void);

#endif                           /* RTW_HEADER_motor_model_updated_private_h_ */
