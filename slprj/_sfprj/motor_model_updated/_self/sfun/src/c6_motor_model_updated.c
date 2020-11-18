/* Include files */

#include "motor_model_updated_sfun.h"
#include "c6_motor_model_updated.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtRSInfo c6_emlrtRSI = { 4,  /* lineNo */
  "Motor/Counter1/Function-Call Subsystem1/MATLAB Function",/* fcnName */
  "#motor_model_updated:308"           /* pathName */
};

static emlrtRSInfo c6_b_emlrtRSI = { 3,/* lineNo */
  "Motor/Counter1/Function-Call Subsystem1/MATLAB Function",/* fcnName */
  "#motor_model_updated:308"           /* pathName */
};

static emlrtRSInfo c6_c_emlrtRSI = { 25,/* lineNo */
  "arduino",                           /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\arduinoio\\+coder\\arduino.m"/* pathName */
};

static emlrtRSInfo c6_d_emlrtRSI = { 30,/* lineNo */
  "arduino",                           /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\arduinoio\\+coder\\arduino.m"/* pathName */
};

static emlrtRSInfo c6_e_emlrtRSI = { 31,/* lineNo */
  "arduino",                           /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\arduinoio\\+coder\\arduino.m"/* pathName */
};

static emlrtRSInfo c6_f_emlrtRSI = { 32,/* lineNo */
  "arduino",                           /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\arduinoio\\+coder\\arduino.m"/* pathName */
};

static emlrtRSInfo c6_g_emlrtRSI = { 33,/* lineNo */
  "arduino",                           /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\arduinoio\\+coder\\arduino.m"/* pathName */
};

static emlrtRSInfo c6_h_emlrtRSI = { 41,/* lineNo */
  "arduino",                           /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\arduinoio\\+coder\\arduino.m"/* pathName */
};

static emlrtRSInfo c6_i_emlrtRSI = { 58,/* lineNo */
  "arduino",                           /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\arduinoio\\+coder\\arduino.m"/* pathName */
};

static emlrtRSInfo c6_j_emlrtRSI = { 1,/* lineNo */
  "master",                            /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\shared\\hwsdk\\+matlabshared\\+coder\\+hwsdk\\master.m"/* pathName */
};

static emlrtRSInfo c6_k_emlrtRSI = { 1,/* lineNo */
  "master",                            /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\shared\\hwsdk\\+matlabshared\\+coder\\+dio\\master.m"/* pathName */
};

static emlrtRSInfo c6_l_emlrtRSI = { 1,/* lineNo */
  "master",                            /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\shared\\hwsdk\\+matlabshared\\+coder\\+adc\\master.m"/* pathName */
};

static emlrtRSInfo c6_m_emlrtRSI = { 1,/* lineNo */
  "master",                            /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\shared\\hwsdk\\+matlabshared\\+coder\\+pwm\\master.m"/* pathName */
};

static emlrtRSInfo c6_n_emlrtRSI = { 1,/* lineNo */
  "master",                            /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\shared\\hwsdk\\+matlabshared\\+coder\\+i2c\\master.m"/* pathName */
};

static emlrtRSInfo c6_o_emlrtRSI = { 1,/* lineNo */
  "master_base",                       /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\shared\\hwsdk\\+matlabshared\\+coder\\+i2c\\master_base.m"/* pathName */
};

static emlrtRSInfo c6_p_emlrtRSI = { 1,/* lineNo */
  "master",                            /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\shared\\hwsdk\\+matlabshared\\+coder\\+spi\\master.m"/* pathName */
};

static emlrtRSInfo c6_q_emlrtRSI = { 1,/* lineNo */
  "ArduinoDigitalIO",                  /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\sharedarduino\\+arduinodriver\\ArduinoDigital"
  "IO.p"                               /* pathName */
};

static emlrtRSInfo c6_r_emlrtRSI = { 1,/* lineNo */
  "DigitalIO",                         /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\shared\\devicedrivers\\+matlabshared\\+devicedrivers\\+coder\\DigitalIO.p"/* pathName */
};

static emlrtRSInfo c6_s_emlrtRSI = { 1,/* lineNo */
  "ArduinoAnalogInput",                /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\sharedarduino\\+arduinodriver\\ArduinoAnalogI"
  "nput.p"                             /* pathName */
};

static emlrtRSInfo c6_t_emlrtRSI = { 1,/* lineNo */
  "AnalogInSingle",                    /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\shared\\devicedrivers\\+matlabshared\\+devicedrivers\\+coder\\AnalogInSin"
  "gle.p"                              /* pathName */
};

static emlrtRSInfo c6_u_emlrtRSI = { 1,/* lineNo */
  "ArduinoPWM",                        /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\arduinobase\\+codertarget\\+arduinobase\\+internal\\Ardu"
  "inoPWM.p"                           /* pathName */
};

static emlrtRSInfo c6_v_emlrtRSI = { 1,/* lineNo */
  "PWM",                               /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\shared\\devicedrivers\\+matlabshared\\+devicedrivers\\+coder\\PWM.p"/* pathName */
};

static emlrtRSInfo c6_w_emlrtRSI = { 1,/* lineNo */
  "ArduinoSPI",                        /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\sharedarduino\\+arduinodriver\\ArduinoSPI.p"/* pathName */
};

static emlrtRSInfo c6_x_emlrtRSI = { 1,/* lineNo */
  "SPI",                               /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\shared\\devicedrivers\\+matlabshared\\+devicedrivers\\+coder\\SPI.p"/* pathName */
};

static emlrtRSInfo c6_y_emlrtRSI = { 1,/* lineNo */
  "ArduinoPinMap",                     /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\arduinobase\\+codertarget\\+arduinobase\\+internal\\Ardu"
  "inoPinMap.p"                        /* pathName */
};

static emlrtRSInfo c6_ab_emlrtRSI = { 1,/* lineNo */
  "Mega",                              /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\arduinobase\\+codertarget\\+arduinobase\\+internal\\+pin"
  "Maps\\Mega.p"                       /* pathName */
};

static emlrtRSInfo c6_bb_emlrtRSI = { 1,/* lineNo */
  "ArduinoI2C",                        /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\supportpackages\\sharedarduino\\+arduinodriver\\ArduinoI2C.p"/* pathName */
};

static emlrtRSInfo c6_cb_emlrtRSI = { 1,/* lineNo */
  "I2C",                               /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\shared\\devicedrivers\\+matlabshared\\+devicedrivers\\+coder\\I2C.p"/* pathName */
};

static emlrtRSInfo c6_db_emlrtRSI = { 19,/* lineNo */
  "master",                            /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\shared\\hwsdk\\+matlabshared\\+coder\\+dio\\master.m"/* pathName */
};

static emlrtRSInfo c6_eb_emlrtRSI = { 34,/* lineNo */
  "master",                            /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\matlab\\hardware\\shared\\hwsdk\\+matlabshared\\+coder\\+dio\\master.m"/* pathName */
};

/* Function Declarations */
static void initialize_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void initialize_params_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void enable_c6_motor_model_updated(SFc6_motor_model_updatedInstanceStruct
  *chartInstance);
static void disable_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void c6_update_jit_animation_state_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void c6_do_animation_call_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void ext_mode_exec_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void set_sim_state_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance, const mxArray *c6_st);
static void sf_gateway_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void mdl_start_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void mdl_terminate_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static void initSimStructsc6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance);
static boolean_T c6_emlrt_marshallIn(SFc6_motor_model_updatedInstanceStruct
  *chartInstance, const mxArray *c6_b_val, const char_T *c6_identifier);
static boolean_T c6_b_emlrt_marshallIn(SFc6_motor_model_updatedInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static uint8_T c6_c_emlrt_marshallIn(SFc6_motor_model_updatedInstanceStruct
  *chartInstance, const mxArray *c6_b_is_active_c6_motor_model_updated, const
  char_T *c6_identifier);
static uint8_T c6_d_emlrt_marshallIn(SFc6_motor_model_updatedInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static const mxArray *c6_chart_data_browse_helper
  (SFc6_motor_model_updatedInstanceStruct *chartInstance, int32_T c6_ssIdNumber);
static void init_dsm_address_info(SFc6_motor_model_updatedInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc6_motor_model_updatedInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_is_active_c6_motor_model_updated = 0U;
}

static void initialize_params_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c6_motor_model_updated(SFc6_motor_model_updatedInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c6_update_jit_animation_state_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c6_do_animation_call_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellmatrix(2, 1), false);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", chartInstance->c6_val, 11, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y",
    &chartInstance->c6_is_active_c6_motor_model_updated, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  sf_mex_assign(&c6_st, c6_y, false);
  return c6_st;
}

static void set_sim_state_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance, const mxArray *c6_st)
{
  const mxArray *c6_u;
  chartInstance->c6_doneDoubleBufferReInit = true;
  c6_u = sf_mex_dup(c6_st);
  *chartInstance->c6_val = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 0)), "val");
  chartInstance->c6_is_active_c6_motor_model_updated = c6_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 1)),
     "is_active_c6_motor_model_updated");
  sf_mex_destroy(&c6_u);
  sf_mex_destroy(&c6_st);
}

static void sf_gateway_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  c6_coder_arduino *c6_obj;
  c6_coder_arduino c6_a;
  c6_arduinodriver_ArduinoI2C *c6_iobj_0;
  c6_arduinodriver_ArduinoI2C c6_lobj_1;
  c6_coder_arduino *c6_b_obj;
  c6_coder_arduino *c6_c_obj;
  c6_coder_arduino *c6_this;
  c6_coder_arduino *c6_d_obj;
  c6_coder_arduino *c6_b_this;
  c6_coder_arduino *c6_e_obj;
  c6_coder_arduino *c6_c_this;
  c6_coder_arduino *c6_f_obj;
  c6_coder_arduino *c6_d_this;
  c6_coder_arduino *c6_g_obj;
  c6_coder_arduino *c6_h_obj;
  c6_coder_arduino *c6_e_this;
  c6_coder_arduino *c6_i_obj;
  c6_coder_arduino *c6_f_this;
  c6_arduinodriver_ArduinoI2C *c6_j_obj;
  c6_arduinodriver_ArduinoI2C *c6_r;
  c6_arduinodriver_ArduinoI2C *c6_k_obj;
  c6_arduinodriver_ArduinoI2C *c6_g_this;
  c6_arduinodriver_ArduinoI2C *c6_rv[1];
  boolean_T c6_u;
  boolean_T c6_b_val;
  chartInstance->c6_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c6_covrtInstance, 4U, 0, 0);
  c6_obj = &c6_a;
  c6_iobj_0 = &c6_lobj_1;
  c6_b_obj = c6_obj;
  c6_c_obj = c6_b_obj;
  c6_b_obj = c6_c_obj;
  c6_this = c6_b_obj;
  c6_b_obj = c6_this;
  c6_d_obj = c6_b_obj;
  c6_b_obj = c6_d_obj;
  c6_b_this = c6_b_obj;
  c6_b_obj = c6_b_this;
  c6_e_obj = c6_b_obj;
  c6_b_obj = c6_e_obj;
  c6_c_this = c6_b_obj;
  c6_b_obj = c6_c_this;
  c6_f_obj = c6_b_obj;
  c6_b_obj = c6_f_obj;
  c6_d_this = c6_b_obj;
  c6_b_obj = c6_d_this;
  c6_g_obj = c6_b_obj;
  c6_b_obj = c6_g_obj;
  c6_h_obj = c6_b_obj;
  c6_b_obj = c6_h_obj;
  c6_e_this = c6_b_obj;
  c6_b_obj = c6_e_this;
  c6_i_obj = c6_b_obj;
  c6_b_obj = c6_i_obj;
  c6_f_this = c6_b_obj;
  c6_b_obj = c6_f_this;
  c6_b_obj->Aref = 5.0;
  c6_j_obj = c6_iobj_0;
  c6_r = c6_j_obj;
  c6_k_obj = c6_r;
  c6_r = c6_k_obj;
  c6_g_this = c6_r;
  c6_r = c6_g_this;
  c6_r->MW_I2C_HANDLE = NULL;
  c6_rv[0] = c6_r;
  c6_b_obj->I2CDriverObj[0] = c6_rv[0];
  c6_u = readDigitalPin(3);
  c6_b_val = c6_u;
  *chartInstance->c6_val = c6_b_val;
  c6_do_animation_call_c6_motor_model_updated(chartInstance);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 0U, (real_T)
                    *chartInstance->c6_val);
}

static void mdl_start_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  static const uint32_T c6_decisionTxtStartIdx = 0U;
  static const uint32_T c6_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c6_chart_data_browse_helper);
  chartInstance->c6_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c6_RuntimeVar,
    &chartInstance->c6_IsDebuggerActive,
    &chartInstance->c6_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c6_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c6_covrtInstance, 1U, 0U, 1U,
    11U);
  covrtChartInitFcn(chartInstance->c6_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c6_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c6_decisionTxtStartIdx, &c6_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c6_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c6_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 83);
}

static void mdl_cleanup_runtime_resources_c6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c6_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c6_covrtInstance);
}

static void initSimStructsc6_motor_model_updated
  (SFc6_motor_model_updatedInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c6_motor_model_updated_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  const char * c6_data[18] = {
    "789ced9ddb6fdb6414c0dda968bc0093b888097111829755e49ea645425a93e6b6365727cdda09112776132f8e9d3a4e9a14d82ab487314d1a126f08f18cf807"
    "78e7618f808490e06d0209f18284044f6312b8b14fea98b8cee2f44be37c47aa9a2f27f6b9d8fe9d93931bb1104f2c1004f134a148f153e5ff53f25fe81c415c",
    "50ef3f470c8a5ebfa0febfa859dfd13cfe096291787853d90ef447dbdf53d7658197988ea42c78aacef4b7a4853acb53bc94eb361842649a02d766e89e6697e5"
    "981c5b6748ed2279b4aa4734aafee24875743b5465ca35b25527c46af3d8434ebbe8e7e3274dbcffdc3c8e7771483eb47ac84753b706b9a0c60ffa6bf1d0bba1",
    "b79d6951a888547d9d922867622db7b9167492ad464310a53455ae5115a6e9cc7a5c1e17e59404812b091d679d9238aae4ac5222bd4f898cb3a93cbc010f97ef"
    "6fb1bcc00acea5b2403322dce1a8f7e33cf2e3d0629caf9ac4097ac5dda6ec2e433b7a0e39aafb4dbae6a8534d8911fbfe142dfa73ded09ff3bdfdb7f81a2fec",
    "f37d7b0f2cda3b30891ff4933bcebd143a7bc9732e69d30a077a49d12989550fb7697e9f19315efdffe3c73fd9bbce93dffeb86064efa189bd8763d823befefc"
    "7ba4f6549996bd8ec1fe869dafc3ecbd60600fce57d047230ccfb6f6f60ba237c052fe505cf45281f0b11f69133b667e10066b54fbd7f27d9c3cce22dfc789f3",
    "659338413f84ef342b00ddcdaf9751fd795cbe5b3dce1ddd5a1f3fe851f25d4e6c9feea83894fc022dd70f2ffef6124a7b2076e77ab8b693db08a7d883e6a68b"
    "4f30557a8d94f6a398eb98eb83719ec0758a2e63ae9f06d7e5c4a2e73aeed74fd51e2aaeaf8b57dda9b5a6874a75d3becd4e8e137722f575cc75ccf5c1384fe0",
    "7a63bf8eb97e1a5c97138bfbf509db03b13bd70364271f4817dad544a67b2598ce5fddcb56f770bf7ea6af77d6f3ff3eeeb6c5385f378913f443b82ebba372fd"
    "bd12d56406f35fb4e8979579fb38f63e34c903e8a773bc7b09ee5574545cfaa68cb87fffe3ef04527baacc2ae79f37b007e72be833fc06c9e55dd7639bf94898",
    "af46485f96df2130e771ff3e18e709fdfb31e709dcbf9f763d37ca2beedf47b30732ab5c1fb57f6f93c1ecae4407c3fed5eb918d4cbd733558be825f47c55cd7"
    "c57902d79b0d1673fd34b82e2716737dc2f640ecce75a17e10ab6dc6625c7735d75c26dba960cc2fc6ecc3f5a2c1f66679d48b511ef5f61a63da5bd0dc7f923d",
    "d0ab2f612a8c276697a7b352378df23aa9ebffd1cf8879fae8972d94f640ecced364a9bcbccbaf97aba10097c979c27469bdb961a33977d160fbd3e2e9b8f646"
    "e51910745af6acf2b365684fd93fe811f0f3b27a7380a0a8aef7f6af88f9f9fe8d6751da03b13b3f370b818da8547147681f4757bcecf65630e9b2d1fb3f8a06",
    "dbcf3b3fc78d0ff373b438313f15c1fc3cd98e991f84c11ad5fe7f37d87ed43cded6ad41208fa03fb5eb5d99ddc1a5bea4dea045b62d3ff75c5356eb6c859528"
    "2e9e723420ee4f2cc67dc9246ed00fcc6d69a6cd9619c5b7a63ac5edfb36785c8a16fd7bdcb983d5f3e096493e403ff6792051628591607c3b9049fd1857a754",
    "c6109a7360943c4f8a5b5ffe80b80e5cbefb1c4a7b2076af03295f86644399f84ed8bf4c7ab222c74a5c23649f3a302f7ddfa1c5385f318913f40375c8a1af43"
    "d37bfe32aff5be6810d7ac729ef8ea2fa4fdfeb45f9f44c57976d5b51de8a683ed5a245388a6c85081ceacda88f37f1a6c3f6a1eefe8d6209047d04ff5fa5fe3",
    "294ea8c4f9464b52babde3f8adf6fd4e93f8416fdaf7838f24cb5738666a7dbfd5f3e163937c807e6a7dff609ee174c0fdff84ec81d8bdff1792257f6377998d"
    "66dbfe0c9d21e314b9dc0adaa72ee0fe7fb4385f338913f443fb7f4d5d9a56ff3feff5bf68101fe6fd68f6a6fdbd00a878df8d093c9b8fc5c2b95c877147135d",
    "cecd50367a7fb6550edc35d83fe411f496fbbee1983ffa3c9ddae1a90f5c1ad0b0bcc48832058008e9426270ee6bf573976f98c40f7ad3e701b2675abf8a16fd"
    "42fdb9cb1b267900fdd4fa7ff5c863fe4fc61e88ddfbfde574be562855ab7b956aa0c66fe5257776b561a3d77de7a5dfb73aef59328913f49a52e4d054220714",
    "22c771211a380ec531fdd30baafe7fd6eb7ed120be59e53ff1c13b3791da53c5eefc8f6e6d2453be95b558b2bd72e0e3a2a4d717b5d3ebbd565f07fcc860ff90"
    "47d04f750e40a6e3fae7ff67a6ef977dd3fa55b4e817eefb757dbf7aecedca7ddcf72b32e9ef5bd9ce773dec7ecc9f4e3064d89dab25ddebbb3c611feecf4bdf",
    "6ff57c79d1244ed00f9df3cbec99d5f7f7cc6a5d2f1ac435ab7c47fdfe9e4bf711c797faee5fad3d547dbd375fdb0d643cd10cb3cb25b6851895ae6782369aeb"
    "cf0bdfadce751c2671827ee4b90ecb27a811facd51fd5bd4ad8ffd5becedbf2c2790202637d7b9a75bebf301fab332d7e9a55b2e02b6e53f9eebf464d2fc7785",
    "b63cdc7eabd00eefb46afe5a64b55af13236fa7e9679e780d5baf09649fca037ad0b8d9e674d4782a95084f5baa01754f3fe59391f96d47c3b8ff26de3ba7078"
    "ffb35b28ed81d8bd2e08a1ed2c57b81e16458f2b204a0764a5b052b2515d988bb940dc133ab3f37ed937ad5f458b7ee179bf6edeaf1e7bdb721fcffb7b3269ee",
    "173c6d7135df58a931c215b7df9bdef6a6773b781e3473f3a0a9cefb65f6e0793fdaba5e34880bf37d347bf3f2795ece13de596957bd4caebd5cf7f903d96e3b"
    "eeb5d1fb78e6e5f9bdd1bcc76a7fffa649fca01ff6bb1a30ea09c9cb0ac3c7d789e9cd791e8c690ff67f68620ff4d7e24974bfaf0107bf9f60fc7decb8bf5764",
    "64fe57cbd552822bc7b6b2b53d2ebb924807ddad887df83f2fdf178e398f398f398f390f8239afc82cffce0e2d437fd2bf878a39afc8a1893dd063ce63ce63ce"
    "4f9ff3ff015b2d5bde", "" };

  c6_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c6_data[0], 37752U, &c6_nameCaptureInfo);
  return c6_nameCaptureInfo;
}

static boolean_T c6_emlrt_marshallIn(SFc6_motor_model_updatedInstanceStruct
  *chartInstance, const mxArray *c6_b_val, const char_T *c6_identifier)
{
  boolean_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = (const char *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_val), &c6_thisId);
  sf_mex_destroy(&c6_b_val);
  return c6_y;
}

static boolean_T c6_b_emlrt_marshallIn(SFc6_motor_model_updatedInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  boolean_T c6_y;
  boolean_T c6_b;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b, 1, 11, 0U, 0, 0U, 0);
  c6_y = c6_b;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static uint8_T c6_c_emlrt_marshallIn(SFc6_motor_model_updatedInstanceStruct
  *chartInstance, const mxArray *c6_b_is_active_c6_motor_model_updated, const
  char_T *c6_identifier)
{
  uint8_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = (const char *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_is_active_c6_motor_model_updated), &c6_thisId);
  sf_mex_destroy(&c6_b_is_active_c6_motor_model_updated);
  return c6_y;
}

static uint8_T c6_d_emlrt_marshallIn(SFc6_motor_model_updatedInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_y;
  uint8_T c6_b_u;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b_u, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_b_u;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static const mxArray *c6_chart_data_browse_helper
  (SFc6_motor_model_updatedInstanceStruct *chartInstance, int32_T c6_ssIdNumber)
{
  const mxArray *c6_mxData = NULL;
  boolean_T c6_b;
  c6_mxData = NULL;
  switch (c6_ssIdNumber) {
   case 5U:
    c6_b = *chartInstance->c6_val;
    sf_mex_assign(&c6_mxData, sf_mex_create("mxData", &c6_b, 11, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c6_mxData;
}

static void init_dsm_address_info(SFc6_motor_model_updatedInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc6_motor_model_updatedInstanceStruct
  *chartInstance)
{
  chartInstance->c6_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c6_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c6_val = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c6_motor_model_updated_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3354300826U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3621308852U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2099013114U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4254885007U);
}

mxArray *sf_c6_motor_model_updated_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,3);
  mxSetCell(mxcell3p, 0, mxCreateString("arduinodriver.ArduinoDigitalIO"));
  mxSetCell(mxcell3p, 1, mxCreateString("arduinodriver.ArduinoAnalogInput"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "codertarget.arduinobase.internal.ArduinoPWM"));
  return(mxcell3p);
}

mxArray *sf_c6_motor_model_updated_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("readDigitalPin");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c6_motor_model_updated_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c6_motor_model_updated(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lmw6GdG0i8A5JUl5oDdDQsf8u1XcK"
    "BMP8T+AALuV0BxP4SfWRyfmFySWZYan2wWn5tfkl8EJFNSc+JLC1ISS1JTYP4DACXxHYs="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_motor_model_updated_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s8fiFuOMf2wi4eLUolqnWIC";
}

static void sf_opaque_initialize_c6_motor_model_updated(void *chartInstanceVar)
{
  initialize_params_c6_motor_model_updated
    ((SFc6_motor_model_updatedInstanceStruct*) chartInstanceVar);
  initialize_c6_motor_model_updated((SFc6_motor_model_updatedInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c6_motor_model_updated(void *chartInstanceVar)
{
  enable_c6_motor_model_updated((SFc6_motor_model_updatedInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c6_motor_model_updated(void *chartInstanceVar)
{
  disable_c6_motor_model_updated((SFc6_motor_model_updatedInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c6_motor_model_updated(void *chartInstanceVar)
{
  sf_gateway_c6_motor_model_updated((SFc6_motor_model_updatedInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_motor_model_updated(SimStruct*
  S)
{
  return get_sim_state_c6_motor_model_updated
    ((SFc6_motor_model_updatedInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_motor_model_updated(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c6_motor_model_updated((SFc6_motor_model_updatedInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c6_motor_model_updated(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_motor_model_updatedInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_motor_model_updated_optimization_info();
    }

    mdl_cleanup_runtime_resources_c6_motor_model_updated
      ((SFc6_motor_model_updatedInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c6_motor_model_updated(void *chartInstanceVar)
{
  mdl_start_c6_motor_model_updated((SFc6_motor_model_updatedInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c6_motor_model_updated(void
  *chartInstanceVar)
{
  mdl_terminate_c6_motor_model_updated((SFc6_motor_model_updatedInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_motor_model_updated((SFc6_motor_model_updatedInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_motor_model_updated(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_motor_model_updated
      ((SFc6_motor_model_updatedInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc6_motor_model_updated((SFc6_motor_model_updatedInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c6_motor_model_updated_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [17] = {
    "eNrtV81u00AQdtKCqARVkZC4INEbHBFCgIRES51EBCWkIv05hq09jldZ75r9SdsHQOJRuHDlgHg",
    "HjnDhHThyZNZx09SxHUKhFAlLtrPeb76dv53ZOJVm28FrGe83Vx3nIr4v4V11RteFdFyZuEffF5",
    "1b6XgNhbiJNokkkXJKL04ieAFKMKOp4E0eiFwY5QFI4B5iYyF1EZuikWGUDxqGe5ZP7YbUC7uhM",
    "MzfQFnidzg7RLbY6E3kqVEJnm4A+DqUwvTDBiP9scZS77sheANlojITFOiuia1aqm2YpjGD+gF4",
    "Ta40QY3VsW5dTTS4+qDQTGup6h4BRRQzSniutSFRXYjRwRq2Yx+fHaPRqCzMC4nUGxCSIagWHSS",
    "cgkOWkyqc2KOcaCEpYfWIuVZwWrdNhvq0hQ+sxCGo24YEMogF5bo4/t0GWlrnZI9BDfZMv5itC6",
    "+MDf4OhX2QhX4LXDEESfrQ4YWLJg6pHyTRGmfJNEzTCHaIfOJh/BT4hdmLmaO6BOMEWyhRBIPEy",
    "KbaknSI7i1kM1HTZuasLWOiUbDVLFjCVh9CWRTGbA2Pu4QxVQjbEnELhsAS1hrRpBw2Ys3HKUX9",
    "LYEOtuldvBsMpxj4FOYK7tPccA0zgKTuPMfCchLpGaVF5GLy1lqt6elpWJNrkAHxIK8KSEIVoM8",
    "S9xaz+VTZ2CMQtdKJenngUYbMQjkqMLy2L+QAfVJSRI5NsBEtBEaqj7HEnbCtcNOUwWwsZ+E84o",
    "Xg2wJDGbRx2yA2xyfKlrYnuO+GVB/WQHmSxnlRtf3njnPcfy7/RP85ksu+b0/wVHJ4nIl3dt2la",
    "vm6VfxVSeXWJ+SuZNZZzMhZ3AreH1/r3rPP7ztfP30IHrx7+eg067+tztevl9PxjaPCOE704VR+",
    "WezTCb0Wc/ivT/CvpGP1MKAN02kHd/fpPWhtC/aK7zbdhO97pVzfakbfo++rtkIfxkm9VdJr+ul",
    "Bwo6JGbVXy/9wQt+LM/yxlH4fXd/WTid/bT0bxzx/LZzw1wJ6nZ3I219ff3X9dPKj9Tdn6L+aif",
    "dq0od7xO5u6Hn3e5HAAwU+8bzQM8kxxV/+DftsXjnnjOX+FT3/++XP2zdP35pX7qzXc/6SffP27",
    "/OGL+sDTga/co7tOO256k/jvzjznX9upuPH478kbkiZn3M6TadbQIK82TOw7we8Kp2Q",
    ""
  };

  static char newstr [1193] = "";
  newstr[0] = '\0';
  for (i = 0; i < 17; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c6_motor_model_updated(SimStruct *S)
{
  const char* newstr = sf_c6_motor_model_updated_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1601471932U));
  ssSetChecksum1(S,(1337382730U));
  ssSetChecksum2(S,(1723518941U));
  ssSetChecksum3(S,(996191543U));
}

static void mdlRTW_c6_motor_model_updated(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c6_motor_model_updated(SimStruct *S)
{
  SFc6_motor_model_updatedInstanceStruct *chartInstance;
  chartInstance = (SFc6_motor_model_updatedInstanceStruct *)utMalloc(sizeof
    (SFc6_motor_model_updatedInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc6_motor_model_updatedInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c6_motor_model_updated;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_motor_model_updated;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c6_motor_model_updated;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c6_motor_model_updated;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c6_motor_model_updated;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_motor_model_updated;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c6_motor_model_updated;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c6_motor_model_updated;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c6_motor_model_updated;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_motor_model_updated;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_motor_model_updated;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c6_motor_model_updated;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c6_JITStateAnimation,
    chartInstance->c6_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c6_motor_model_updated(chartInstance);
}

void c6_motor_model_updated_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c6_motor_model_updated(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_motor_model_updated(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_motor_model_updated(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_motor_model_updated_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
