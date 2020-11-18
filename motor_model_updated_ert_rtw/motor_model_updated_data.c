/*
 * motor_model_updated_data.c
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

/* Block parameters (default storage) */
P_motor_model_updated_T motor_model_updated_P = {
  /* Expression: 0
   * Referenced by: '<S6>/Chart'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/MotorPositionCmd'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/gain'
   */
  1.0,

  /* Expression: 360/2797
   * Referenced by: '<S2>/angular_position =  [relative_count//COUNTS_PER_REV] *360 degrees'
   */
  0.12870933142652843,

  /* Expression: 3.75
   * Referenced by: '<S1>/Kd'
   */
  3.75,

  /* Expression: 0
   * Referenced by: '<S1>/Integrator1'
   */
  0.0,

  /* Expression: 1.25
   * Referenced by: '<S1>/Ki'
   */
  1.25,

  /* Expression: 6
   * Referenced by: '<S1>/Kp'
   */
  6.0,

  /* Expression: 5
   * Referenced by: '<S2>/Saturation'
   */
  5.0,

  /* Expression: -5
   * Referenced by: '<S2>/Saturation'
   */
  -5.0,

  /* Expression: 255/5
   * Referenced by: '<S2>/Gain'
   */
  51.0,

  /* Start of '<S2>/Motor Direction 2' */
  {
    /* Expression: 1
     * Referenced by: '<S4>/Constant'
     */
    1.0,

    /* Expression: 0
     * Referenced by: '<S4>/Constant1'
     */
    0.0
  }
  ,

  /* End of '<S2>/Motor Direction 2' */

  /* Start of '<S2>/Motor Direction1' */
  {
    /* Expression: 0
     * Referenced by: '<S5>/Constant'
     */
    0.0,

    /* Expression: 1
     * Referenced by: '<S5>/Constant1'
     */
    1.0
  }
  /* End of '<S2>/Motor Direction1' */
};
