#ifndef __c6_motor_model_updated_h__
#define __c6_motor_model_updated_h__

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

#ifndef typedef_c6_arduinodriver_ArduinoI2C
#define typedef_c6_arduinodriver_ArduinoI2C

typedef struct tag_hNRvEDxDSc9X6cDQ3gk5iB c6_arduinodriver_ArduinoI2C;

#endif                                 /*typedef_c6_arduinodriver_ArduinoI2C*/

#ifndef struct_tag_E7ZjpEHEQzzHgi4oOkm0RC
#define struct_tag_E7ZjpEHEQzzHgi4oOkm0RC

struct tag_E7ZjpEHEQzzHgi4oOkm0RC
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_E7ZjpEHEQzzHgi4oOkm0RC*/

#ifndef typedef_c6_arduinodriver_ArduinoDigitalIO
#define typedef_c6_arduinodriver_ArduinoDigitalIO

typedef struct tag_E7ZjpEHEQzzHgi4oOkm0RC c6_arduinodriver_ArduinoDigitalIO;

#endif                                 /*typedef_c6_arduinodriver_ArduinoDigitalIO*/

#ifndef struct_tag_lA2ufjODGtOLFTzvSTX20B
#define struct_tag_lA2ufjODGtOLFTzvSTX20B

struct tag_lA2ufjODGtOLFTzvSTX20B
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_lA2ufjODGtOLFTzvSTX20B*/

#ifndef typedef_c6_arduinodriver_ArduinoAnalogInput
#define typedef_c6_arduinodriver_ArduinoAnalogInput

typedef struct tag_lA2ufjODGtOLFTzvSTX20B c6_arduinodriver_ArduinoAnalogInput;

#endif                                 /*typedef_c6_arduinodriver_ArduinoAnalogInput*/

#ifndef struct_tag_vPJtg9P8tfffiE63TyLPZG
#define struct_tag_vPJtg9P8tfffiE63TyLPZG

struct tag_vPJtg9P8tfffiE63TyLPZG
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_vPJtg9P8tfffiE63TyLPZG*/

#ifndef typedef_c6_codertarget_arduinobase_internal_ArduinoPWM
#define typedef_c6_codertarget_arduinobase_internal_ArduinoPWM

typedef struct tag_vPJtg9P8tfffiE63TyLPZG
  c6_codertarget_arduinobase_internal_ArduinoPWM;

#endif                                 /*typedef_c6_codertarget_arduinobase_internal_ArduinoPWM*/

#ifndef struct_tag_sthwAuwzgDLTjcNLiG2MSH
#define struct_tag_sthwAuwzgDLTjcNLiG2MSH

struct tag_sthwAuwzgDLTjcNLiG2MSH
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_sthwAuwzgDLTjcNLiG2MSH*/

#ifndef typedef_c6_arduinodriver_ArduinoSPI
#define typedef_c6_arduinodriver_ArduinoSPI

typedef struct tag_sthwAuwzgDLTjcNLiG2MSH c6_arduinodriver_ArduinoSPI;

#endif                                 /*typedef_c6_arduinodriver_ArduinoSPI*/

#ifndef struct_tag_fDV14rTmNanbY2VVaZMBuD
#define struct_tag_fDV14rTmNanbY2VVaZMBuD

struct tag_fDV14rTmNanbY2VVaZMBuD
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_fDV14rTmNanbY2VVaZMBuD*/

#ifndef typedef_c6_codertarget_arduinobase_internal_pinMaps_Mega
#define typedef_c6_codertarget_arduinobase_internal_pinMaps_Mega

typedef struct tag_fDV14rTmNanbY2VVaZMBuD
  c6_codertarget_arduinobase_internal_pinMaps_Mega;

#endif                                 /*typedef_c6_codertarget_arduinobase_internal_pinMaps_Mega*/

#ifndef struct_tag_EB8KeT4kk1DmavRiAn11KH
#define struct_tag_EB8KeT4kk1DmavRiAn11KH

struct tag_EB8KeT4kk1DmavRiAn11KH
{
  c6_codertarget_arduinobase_internal_pinMaps_Mega pinMapObj;
};

#endif                                 /*struct_tag_EB8KeT4kk1DmavRiAn11KH*/

#ifndef typedef_c6_codertarget_arduinobase_internal_ArduinoPinMap
#define typedef_c6_codertarget_arduinobase_internal_ArduinoPinMap

typedef struct tag_EB8KeT4kk1DmavRiAn11KH
  c6_codertarget_arduinobase_internal_ArduinoPinMap;

#endif                                 /*typedef_c6_codertarget_arduinobase_internal_ArduinoPinMap*/

#ifndef struct_tag_xLh3IilKGVYjG3WHxL8deC
#define struct_tag_xLh3IilKGVYjG3WHxL8deC

struct tag_xLh3IilKGVYjG3WHxL8deC
{
  c6_arduinodriver_ArduinoDigitalIO DigitalIODriverObj;
  c6_arduinodriver_ArduinoAnalogInput AnalogObj;
  c6_codertarget_arduinobase_internal_ArduinoPWM PWMobj;
  c6_arduinodriver_ArduinoI2C *I2CDriverObj[1];
  c6_arduinodriver_ArduinoSPI SPIDriverObj;
  c6_codertarget_arduinobase_internal_ArduinoPinMap PinMap;
  real_T Aref;
};

#endif                                 /*struct_tag_xLh3IilKGVYjG3WHxL8deC*/

#ifndef typedef_c6_coder_arduino
#define typedef_c6_coder_arduino

typedef struct tag_xLh3IilKGVYjG3WHxL8deC c6_coder_arduino;

#endif                                 /*typedef_c6_coder_arduino*/

#ifndef typedef_c6_matlabshared_coder_internal_CodegenID
#define typedef_c6_matlabshared_coder_internal_CodegenID

typedef uint8_T c6_matlabshared_coder_internal_CodegenID;

#endif                                 /*typedef_c6_matlabshared_coder_internal_CodegenID*/

#ifndef matlabshared_coder_internal_CodegenID_constants
#define matlabshared_coder_internal_CodegenID_constants

/* enum matlabshared_coder_internal_CodegenID */
#define c6_matlabshared_coder_internal_CodegenID_BusIDNotFound ((c6_matlabshared_coder_internal_CodegenID)253U)
#define c6_matlabshared_coder_internal_CodegenID_DefaultTimerPin ((c6_matlabshared_coder_internal_CodegenID)254U)
#define c6_matlabshared_coder_internal_CodegenID_PinNotFound (MAX_uint8_T)
#endif                                 /*matlabshared_coder_internal_CodegenID_constants*/

#ifndef typedef_SFc6_motor_model_updatedInstanceStruct
#define typedef_SFc6_motor_model_updatedInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c6_sfEvent;
  boolean_T c6_doneDoubleBufferReInit;
  uint8_T c6_is_active_c6_motor_model_updated;
  uint8_T c6_JITStateAnimation[1];
  uint8_T c6_JITTransitionAnimation[1];
  int32_T c6_IsDebuggerActive;
  int32_T c6_IsSequenceViewerPresent;
  int32_T c6_SequenceViewerOptimization;
  void *c6_RuntimeVar;
  uint32_T c6_mlFcnLineNumber;
  void *c6_fcnDataPtrs[2];
  char_T *c6_dataNames[2];
  uint32_T c6_numFcnVars;
  uint32_T c6_ssIds[2];
  uint32_T c6_statuses[2];
  void *c6_outMexFcns[2];
  void *c6_inMexFcns[2];
  CovrtStateflowInstance *c6_covrtInstance;
  void *c6_fEmlrtCtx;
  boolean_T *c6_val;
} SFc6_motor_model_updatedInstanceStruct;

#endif                                 /*typedef_SFc6_motor_model_updatedInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c6_motor_model_updated_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c6_motor_model_updated_get_check_sum(mxArray *plhs[]);
extern void c6_motor_model_updated_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
