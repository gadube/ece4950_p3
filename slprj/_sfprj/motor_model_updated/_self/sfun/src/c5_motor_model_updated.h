#ifndef __c5_motor_model_updated_h__
#define __c5_motor_model_updated_h__

/* Type Definitions */
#ifdef __has_include
#if __has_include("MW_SVD.h")
#include "MW_SVD.h"
#else
#error Cannot find header file MW_SVD.h for imported type MW_Handle_Type.\
 Supply the missing header file or turn on Simulation Target -> Generate typedefs\
 for imported bus and enumeration types.
#endif

#else
#include "MW_SVD.h"
#endif

#ifndef struct_tag_hNRvEDxDSc9X6cDQ3gk5iB
#define struct_tag_hNRvEDxDSc9X6cDQ3gk5iB

struct tag_hNRvEDxDSc9X6cDQ3gk5iB
{
  MW_Handle_Type MW_I2C_HANDLE;
};

#endif                                 /*struct_tag_hNRvEDxDSc9X6cDQ3gk5iB*/

#ifndef typedef_c5_arduinodriver_ArduinoI2C
#define typedef_c5_arduinodriver_ArduinoI2C

typedef struct tag_hNRvEDxDSc9X6cDQ3gk5iB c5_arduinodriver_ArduinoI2C;

#endif                                 /*typedef_c5_arduinodriver_ArduinoI2C*/

#ifndef struct_tag_E7ZjpEHEQzzHgi4oOkm0RC
#define struct_tag_E7ZjpEHEQzzHgi4oOkm0RC

struct tag_E7ZjpEHEQzzHgi4oOkm0RC
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_E7ZjpEHEQzzHgi4oOkm0RC*/

#ifndef typedef_c5_arduinodriver_ArduinoDigitalIO
#define typedef_c5_arduinodriver_ArduinoDigitalIO

typedef struct tag_E7ZjpEHEQzzHgi4oOkm0RC c5_arduinodriver_ArduinoDigitalIO;

#endif                                 /*typedef_c5_arduinodriver_ArduinoDigitalIO*/

#ifndef struct_tag_lA2ufjODGtOLFTzvSTX20B
#define struct_tag_lA2ufjODGtOLFTzvSTX20B

struct tag_lA2ufjODGtOLFTzvSTX20B
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_lA2ufjODGtOLFTzvSTX20B*/

#ifndef typedef_c5_arduinodriver_ArduinoAnalogInput
#define typedef_c5_arduinodriver_ArduinoAnalogInput

typedef struct tag_lA2ufjODGtOLFTzvSTX20B c5_arduinodriver_ArduinoAnalogInput;

#endif                                 /*typedef_c5_arduinodriver_ArduinoAnalogInput*/

#ifndef struct_tag_vPJtg9P8tfffiE63TyLPZG
#define struct_tag_vPJtg9P8tfffiE63TyLPZG

struct tag_vPJtg9P8tfffiE63TyLPZG
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_vPJtg9P8tfffiE63TyLPZG*/

#ifndef typedef_c5_codertarget_arduinobase_internal_ArduinoPWM
#define typedef_c5_codertarget_arduinobase_internal_ArduinoPWM

typedef struct tag_vPJtg9P8tfffiE63TyLPZG
  c5_codertarget_arduinobase_internal_ArduinoPWM;

#endif                                 /*typedef_c5_codertarget_arduinobase_internal_ArduinoPWM*/

#ifndef struct_tag_sthwAuwzgDLTjcNLiG2MSH
#define struct_tag_sthwAuwzgDLTjcNLiG2MSH

struct tag_sthwAuwzgDLTjcNLiG2MSH
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_sthwAuwzgDLTjcNLiG2MSH*/

#ifndef typedef_c5_arduinodriver_ArduinoSPI
#define typedef_c5_arduinodriver_ArduinoSPI

typedef struct tag_sthwAuwzgDLTjcNLiG2MSH c5_arduinodriver_ArduinoSPI;

#endif                                 /*typedef_c5_arduinodriver_ArduinoSPI*/

#ifndef struct_tag_fDV14rTmNanbY2VVaZMBuD
#define struct_tag_fDV14rTmNanbY2VVaZMBuD

struct tag_fDV14rTmNanbY2VVaZMBuD
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_fDV14rTmNanbY2VVaZMBuD*/

#ifndef typedef_c5_codertarget_arduinobase_internal_pinMaps_Mega
#define typedef_c5_codertarget_arduinobase_internal_pinMaps_Mega

typedef struct tag_fDV14rTmNanbY2VVaZMBuD
  c5_codertarget_arduinobase_internal_pinMaps_Mega;

#endif                                 /*typedef_c5_codertarget_arduinobase_internal_pinMaps_Mega*/

#ifndef struct_tag_EB8KeT4kk1DmavRiAn11KH
#define struct_tag_EB8KeT4kk1DmavRiAn11KH

struct tag_EB8KeT4kk1DmavRiAn11KH
{
  c5_codertarget_arduinobase_internal_pinMaps_Mega pinMapObj;
};

#endif                                 /*struct_tag_EB8KeT4kk1DmavRiAn11KH*/

#ifndef typedef_c5_codertarget_arduinobase_internal_ArduinoPinMap
#define typedef_c5_codertarget_arduinobase_internal_ArduinoPinMap

typedef struct tag_EB8KeT4kk1DmavRiAn11KH
  c5_codertarget_arduinobase_internal_ArduinoPinMap;

#endif                                 /*typedef_c5_codertarget_arduinobase_internal_ArduinoPinMap*/

#ifndef struct_tag_xLh3IilKGVYjG3WHxL8deC
#define struct_tag_xLh3IilKGVYjG3WHxL8deC

struct tag_xLh3IilKGVYjG3WHxL8deC
{
  c5_arduinodriver_ArduinoDigitalIO DigitalIODriverObj;
  c5_arduinodriver_ArduinoAnalogInput AnalogObj;
  c5_codertarget_arduinobase_internal_ArduinoPWM PWMobj;
  c5_arduinodriver_ArduinoI2C *I2CDriverObj[1];
  c5_arduinodriver_ArduinoSPI SPIDriverObj;
  c5_codertarget_arduinobase_internal_ArduinoPinMap PinMap;
  real_T Aref;
};

#endif                                 /*struct_tag_xLh3IilKGVYjG3WHxL8deC*/

#ifndef typedef_c5_coder_arduino
#define typedef_c5_coder_arduino

typedef struct tag_xLh3IilKGVYjG3WHxL8deC c5_coder_arduino;

#endif                                 /*typedef_c5_coder_arduino*/

#ifndef typedef_c5_matlabshared_coder_internal_CodegenID
#define typedef_c5_matlabshared_coder_internal_CodegenID

typedef uint8_T c5_matlabshared_coder_internal_CodegenID;

#endif                                 /*typedef_c5_matlabshared_coder_internal_CodegenID*/

#ifndef matlabshared_coder_internal_CodegenID_constants
#define matlabshared_coder_internal_CodegenID_constants

/* enum matlabshared_coder_internal_CodegenID */
#define c5_matlabshared_coder_internal_CodegenID_BusIDNotFound ((c5_matlabshared_coder_internal_CodegenID)253U)
#define c5_matlabshared_coder_internal_CodegenID_DefaultTimerPin ((c5_matlabshared_coder_internal_CodegenID)254U)
#define c5_matlabshared_coder_internal_CodegenID_PinNotFound (MAX_uint8_T)
#endif                                 /*matlabshared_coder_internal_CodegenID_constants*/

#ifndef typedef_SFc5_motor_model_updatedInstanceStruct
#define typedef_SFc5_motor_model_updatedInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c5_sfEvent;
  boolean_T c5_doneDoubleBufferReInit;
  uint8_T c5_is_active_c5_motor_model_updated;
  uint8_T c5_JITStateAnimation[1];
  uint8_T c5_JITTransitionAnimation[1];
  int32_T c5_IsDebuggerActive;
  int32_T c5_IsSequenceViewerPresent;
  int32_T c5_SequenceViewerOptimization;
  void *c5_RuntimeVar;
  uint32_T c5_mlFcnLineNumber;
  void *c5_fcnDataPtrs[2];
  char_T *c5_dataNames[2];
  uint32_T c5_numFcnVars;
  uint32_T c5_ssIds[2];
  uint32_T c5_statuses[2];
  void *c5_outMexFcns[2];
  void *c5_inMexFcns[2];
  CovrtStateflowInstance *c5_covrtInstance;
  void *c5_fEmlrtCtx;
  boolean_T *c5_val;
} SFc5_motor_model_updatedInstanceStruct;

#endif                                 /*typedef_SFc5_motor_model_updatedInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c5_motor_model_updated_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c5_motor_model_updated_get_check_sum(mxArray *plhs[]);
extern void c5_motor_model_updated_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
