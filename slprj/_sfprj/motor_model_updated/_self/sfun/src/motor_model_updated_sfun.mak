# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL     = motor_model_updated
TARGET      = sfun
MODULE_SRCS   = c5_motor_model_updated.c c6_motor_model_updated.c
MODEL_SRC  = motor_model_updated_sfun.c
MODEL_REG = motor_model_updated_sfun_registry.c
MAKEFILE    = motor_model_updated_sfun.mak
MATLAB_ROOT  = C:\Program Files\MATLAB\R2020a
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   =  /I "C:\Users\gdube\documents\MATLAB\ece4950_p3\slprj\_sfprj\motor_model_updated\_self\sfun\src" /I "C:\Users\gdube\documents\MATLAB\ece4950_p3"
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "C:\Program Files\MATLAB\R2020a\extern\include" \
    /I "C:\Program Files\MATLAB\R2020a\simulink\include" \
    /I "C:\Program Files\MATLAB\R2020a\simulink\include\sf_runtime" \
    /I "C:\Program Files\MATLAB\R2020a\stateflow\c\mex\include" \
    /I "C:\Program Files\MATLAB\R2020a\rtw\c\src" \
    /I "C:\Users\gdube\Documents\MATLAB\ece4950_p3\slprj\_sfprj\motor_model_updated\_self\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   =  /I "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\shared\svd\include" /I "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\include"
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMX_COMPAT_64 /DMATLAB_MEXCMD_RELEASE=R2018a /DMATLAB_MEX_FILE /nologo /MD  
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS)

USER_OBJS =

AUX_ABS_OBJS =

THIRD_PARTY_OBJS     = \
     "c_mexapi_version.obj" \
     "MW_AnalogInput.obj" \
     "ArduinoPinHandleMap.obj" \
     "MW_arduino_digitalio.obj" \
     "MW_PWM.obj" \
     "MW_PWMDriver.obj" \

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = motor_model_updated_sfun.mol
SFCLIB = 
AUX_LNK_OBJS =     
USER_LIBS = 
#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
MEX_FILE_CSF =
all : $(MEX_FILE_NAME) $(MEX_FILE_CSF)

$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS) $(THIRD_PARTY_LIBS)
 @echo ### Linking ...
 $(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map"\
  $(USER_LIBS) $(SFCLIB) $(AUX_LNK_OBJS)\
  $(DSP_LIBS) $(THIRD_PARTY_LIBS)\
  @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"


c_mexapi_version.obj :  "C:\Program Files\MATLAB\R2020a\extern\version\c_mexapi_version.c"
	@echo ### Compiling "C:\Program Files\MATLAB\R2020a\extern\version\c_mexapi_version.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2020a\extern\version\c_mexapi_version.c"
MW_AnalogInput.obj :  "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_AnalogInput.cpp"
	@echo ### Compiling "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_AnalogInput.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_AnalogInput.cpp"
ArduinoPinHandleMap.obj :  "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\ArduinoPinHandleMap.cpp"
	@echo ### Compiling "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\ArduinoPinHandleMap.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\ArduinoPinHandleMap.cpp"
MW_arduino_digitalio.obj :  "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_arduino_digitalio.cpp"
	@echo ### Compiling "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_arduino_digitalio.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_arduino_digitalio.cpp"
MW_PWM.obj :  "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_PWM.cpp"
	@echo ### Compiling "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_PWM.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_PWM.cpp"
MW_PWMDriver.obj :  "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_PWMDriver.c"
	@echo ### Compiling "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_PWMDriver.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\ProgramData\MATLAB\SupportPackages\R2020a\toolbox\target\supportpackages\arduinobase\src\MW_PWMDriver.c"
