/*
 * motor_model_updated_dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(codertarget_arduinobase_block_T),
  sizeof(codertarget_arduinobase_inter_T),
  sizeof(j_codertarget_arduinobase_int_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "codertarget_arduinobase_block_T",
  "codertarget_arduinobase_inter_T",
  "j_codertarget_arduinobase_int_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&motor_model_updated_B.angular_positionrelative_countC), 0, 0, 4
  },

  { (char_T *)(&motor_model_updated_B.RateTransition), 8, 0, 4 }
  ,

  { (char_T *)(&motor_model_updated_DW.obj), 15, 0, 1 },

  { (char_T *)(&motor_model_updated_DW.gobj_1), 16, 0, 4 },

  { (char_T *)(&motor_model_updated_DW.obj_l), 14, 0, 2 },

  { (char_T *)(&motor_model_updated_DW.TimeStampA), 0, 0, 4 },

  { (char_T *)(&motor_model_updated_DW.Scope1_PWORK.LoggedData), 11, 0, 2 },

  { (char_T *)(&motor_model_updated_DW.sfEvent), 6, 0, 1 },

  { (char_T *)(&motor_model_updated_DW.is_c4_motor_model_updated), 7, 0, 1 },

  { (char_T *)(&motor_model_updated_DW.ChooseDirection_ActiveSubsystem), 2, 0, 3
  },

  { (char_T *)(&motor_model_updated_DW.is_active_c4_motor_model_update), 3, 0, 1
  },

  { (char_T *)(&motor_model_updated_DW.objisempty), 8, 0, 3 },

  { (char_T *)
    (&motor_model_updated_DW.MotorDirection2.MotorDirection1_SubsysRanBC), 2, 0,
    1 },

  { (char_T *)
    (&motor_model_updated_DW.MotorDirection1.MotorDirection1_SubsysRanBC), 2, 0,
    1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  14U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&motor_model_updated_P.Chart_count), 0, 0, 11 },

  { (char_T *)(&motor_model_updated_P.MotorDirection2.Constant_Value), 0, 0, 2 },

  { (char_T *)(&motor_model_updated_P.MotorDirection1.Constant_Value), 0, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] motor_model_updated_dt.h */
