#ifndef HEADER_rhino_Context
#define HEADER_rhino_Context

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Context {
	java_lang_Object parent;
	jref F_factory;
	jbool F_sealed;
	jref F_sealKey;
	jref F_topCallScope;
	jbool F_isContinuationsTopCall;
	jref F_currentActivationCall;
	jref F_typeErrorThrower;
	jref F_iterating;
	jint F_version;
	jbool F_hasClassShutter;
	jref F_classShutter;
	jref F_errorReporter;
	jref F_regExpProxy;
	jref F_locale;
	jbool F_generatingDebug;
	jbool F_generatingDebugChanged;
	jbool F_generatingSource;
	jbool F_useDynamicScope;
	jint F_optimizationLevel;
	jint F_maximumInterpreterStackDepth;
	jref F_wrapFactory;
	jref F_debugger;
	jref F_debuggerData;
	jint F_enterCount;
	jref F_threadLocalMap;
	jref F_applicationClassLoader;
	jref F_activationNames;
	jref F_lastInterpreterFrame;
	jref F_previousInterpreterInvocations;
	jint F_instructionCount;
	jint F_instructionThreshold;
	jlong F_scratchUint32;
	jref F_scratchScriptable;
	jbool F_generateObserverCount;
	jbool F_isTopLevelStrict;
} rhino_Context;

extern Class class_rhino_Context;

extern jint SF_rhino_Context_VERSION_UNKNOWN;
extern jint SF_rhino_Context_VERSION_DEFAULT;
extern jint SF_rhino_Context_VERSION_1_0;
extern jint SF_rhino_Context_VERSION_1_1;
extern jint SF_rhino_Context_VERSION_1_2;
extern jint SF_rhino_Context_VERSION_1_3;
extern jint SF_rhino_Context_VERSION_1_4;
extern jint SF_rhino_Context_VERSION_1_5;
extern jint SF_rhino_Context_VERSION_1_6;
extern jint SF_rhino_Context_VERSION_1_7;
extern jint SF_rhino_Context_VERSION_1_8;
extern jint SF_rhino_Context_VERSION_ES6;
extern jint SF_rhino_Context_FEATURE_NON_ECMA_GET_YEAR;
extern jint SF_rhino_Context_FEATURE_MEMBER_EXPR_AS_FUNCTION_NAME;
extern jint SF_rhino_Context_FEATURE_RESERVED_KEYWORD_AS_IDENTIFIER;
extern jint SF_rhino_Context_FEATURE_TO_STRING_AS_SOURCE;
extern jint SF_rhino_Context_FEATURE_PARENT_PROTO_PROPERTIES;
extern jint SF_rhino_Context_FEATURE_E4X;
extern jint SF_rhino_Context_FEATURE_DYNAMIC_SCOPE;
extern jint SF_rhino_Context_FEATURE_STRICT_VARS;
extern jint SF_rhino_Context_FEATURE_STRICT_EVAL;
extern jint SF_rhino_Context_FEATURE_LOCATION_INFORMATION_IN_ERROR;
extern jint SF_rhino_Context_FEATURE_STRICT_MODE;
extern jint SF_rhino_Context_FEATURE_WARNING_AS_ERROR;
extern jint SF_rhino_Context_FEATURE_ENHANCED_JAVA_ACCESS;
extern jint SF_rhino_Context_FEATURE_V8_EXTENSIONS;
extern jint SF_rhino_Context_FEATURE_OLD_UNDEF_NULL_THIS;
extern jint SF_rhino_Context_FEATURE_ENUMERATE_IDS_FIRST;
extern jint SF_rhino_Context_FEATURE_THREAD_SAFE_OBJECTS;
extern jint SF_rhino_Context_FEATURE_INTEGER_WITHOUT_DECIMAL_PLACE;
extern jint SF_rhino_Context_FEATURE_LITTLE_ENDIAN;
extern jobject SF_rhino_Context_emptyArgs;
extern jobject SF_rhino_Context_codegenClass;
extern jobject SF_rhino_Context_interpreterClass;
extern jobject SF_rhino_Context_implementationVersion;

#define VTABLE_rhino_Context_hashCode_R_int 0
typedef jint (*func_rhino_Context_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Context_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Context_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Context_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Context_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_finalize 5
typedef void (*func_rhino_Context_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_notify 6
typedef void (*func_rhino_Context_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_notifyAll 7
typedef void (*func_rhino_Context_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_wait 8
typedef void (*func_rhino_Context_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_wait_long 9
typedef void (*func_rhino_Context_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Context_wait_long_int 10
typedef void (*func_rhino_Context_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Context_getFactory_R_rhino_ContextFactory 11
typedef jobject (*func_rhino_Context_getFactory_R_rhino_ContextFactory)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_isSealed_R_boolean 12
typedef jbool (*func_rhino_Context_isSealed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_seal_java_lang_Object 13
typedef void (*func_rhino_Context_seal_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_unseal_java_lang_Object 14
typedef void (*func_rhino_Context_unseal_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_getLanguageVersion_R_int 15
typedef jint (*func_rhino_Context_getLanguageVersion_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_setLanguageVersion_int 16
typedef void (*func_rhino_Context_setLanguageVersion_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Context_getImplementationVersion_R_java_lang_String 17
typedef jobject (*func_rhino_Context_getImplementationVersion_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_getErrorReporter_R_rhino_ErrorReporter 18
typedef jobject (*func_rhino_Context_getErrorReporter_R_rhino_ErrorReporter)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_setErrorReporter_rhino_ErrorReporter_R_rhino_ErrorReporter 19
typedef jobject (*func_rhino_Context_setErrorReporter_rhino_ErrorReporter_R_rhino_ErrorReporter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_getLocale_R_java_util_Locale 20
typedef jobject (*func_rhino_Context_getLocale_R_java_util_Locale)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_setLocale_java_util_Locale_R_java_util_Locale 21
typedef jobject (*func_rhino_Context_setLocale_java_util_Locale_R_java_util_Locale)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_initStandardObjects_R_rhino_ScriptableObject 22
typedef jobject (*func_rhino_Context_initStandardObjects_R_rhino_ScriptableObject)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_initSafeStandardObjects_R_rhino_ScriptableObject 23
typedef jobject (*func_rhino_Context_initSafeStandardObjects_R_rhino_ScriptableObject)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_initStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable 24
typedef jobject (*func_rhino_Context_initStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable 25
typedef jobject (*func_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject 26
typedef jobject (*func_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject 27
typedef jobject (*func_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object 28
typedef jobject (*func_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_Context_evaluateReader_rhino_Scriptable_java_io_Reader_java_lang_String_int_R_java_lang_Object 29
typedef jobject (*func_rhino_Context_evaluateReader_rhino_Scriptable_java_io_Reader_java_lang_String_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_Context_executeScriptWithContinuations_rhino_Script_rhino_Scriptable_R_java_lang_Object 30
typedef jobject (*func_rhino_Context_executeScriptWithContinuations_rhino_Script_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Context_callFunctionWithContinuations_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 31
typedef jobject (*func_rhino_Context_callFunctionWithContinuations_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Context_captureContinuation_R_rhino_ContinuationPending 32
typedef jobject (*func_rhino_Context_captureContinuation_R_rhino_ContinuationPending)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_resumeContinuation_java_lang_Object_rhino_Scriptable_java_lang_Object_R_java_lang_Object 33
typedef jobject (*func_rhino_Context_resumeContinuation_java_lang_Object_rhino_Scriptable_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Context_stringIsCompilableUnit_java_lang_String_R_boolean 34
typedef jbool (*func_rhino_Context_stringIsCompilableUnit_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script 35
typedef jobject (*func_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_Context_compileString_java_lang_String_java_lang_String_int_R_rhino_Script 36
typedef jobject (*func_rhino_Context_compileString_java_lang_String_java_lang_String_int_R_rhino_Script)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script 37
typedef jobject (*func_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_java_lang_String_int_R_rhino_Function 38
typedef jobject (*func_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_java_lang_String_int_R_rhino_Function)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function 39
typedef jobject (*func_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5);
#define VTABLE_rhino_Context_decompileScript_rhino_Script_int_R_java_lang_String 40
typedef jobject (*func_rhino_Context_decompileScript_rhino_Script_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Context_decompileFunction_rhino_Function_int_R_java_lang_String 41
typedef jobject (*func_rhino_Context_decompileFunction_rhino_Function_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Context_decompileFunctionBody_rhino_Function_int_R_java_lang_String 42
typedef jobject (*func_rhino_Context_decompileFunctionBody_rhino_Function_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable 43
typedef jobject (*func_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable 44
typedef jobject (*func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable 45
typedef jobject (*func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable 46
typedef jobject (*func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable 47
typedef jobject (*func_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Context_getElements_rhino_Scriptable_R_Array1_java_lang_Object 48
typedef jobject (*func_rhino_Context_getElements_rhino_Scriptable_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_isGeneratingDebug_R_boolean 49
typedef jbool (*func_rhino_Context_isGeneratingDebug_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_setGeneratingDebug_boolean 50
typedef void (*func_rhino_Context_setGeneratingDebug_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_Context_isGeneratingSource_R_boolean 51
typedef jbool (*func_rhino_Context_isGeneratingSource_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_setGeneratingSource_boolean 52
typedef void (*func_rhino_Context_setGeneratingSource_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_Context_getOptimizationLevel_R_int 53
typedef jint (*func_rhino_Context_getOptimizationLevel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_setOptimizationLevel_int 54
typedef void (*func_rhino_Context_setOptimizationLevel_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Context_getMaximumInterpreterStackDepth_R_int 55
typedef jint (*func_rhino_Context_getMaximumInterpreterStackDepth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_setMaximumInterpreterStackDepth_int 56
typedef void (*func_rhino_Context_setMaximumInterpreterStackDepth_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Context_setClassShutter_rhino_ClassShutter 57
typedef void (*func_rhino_Context_setClassShutter_rhino_ClassShutter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_getClassShutter_R_rhino_ClassShutter 58
typedef jobject (*func_rhino_Context_getClassShutter_R_rhino_ClassShutter)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_getThreadLocal_java_lang_Object_R_java_lang_Object 59
typedef jobject (*func_rhino_Context_getThreadLocal_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object 60
typedef void (*func_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Context_removeThreadLocal_java_lang_Object 61
typedef void (*func_rhino_Context_removeThreadLocal_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_setWrapFactory_rhino_WrapFactory 62
typedef void (*func_rhino_Context_setWrapFactory_rhino_WrapFactory)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory 63
typedef jobject (*func_rhino_Context_getWrapFactory_R_rhino_WrapFactory)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_getDebugger_R_rhino_debug_Debugger 64
typedef jobject (*func_rhino_Context_getDebugger_R_rhino_debug_Debugger)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_getDebuggerContextData_R_java_lang_Object 65
typedef jobject (*func_rhino_Context_getDebuggerContextData_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_setDebugger_rhino_debug_Debugger_java_lang_Object 66
typedef void (*func_rhino_Context_setDebugger_rhino_debug_Debugger_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Context_hasFeature_int_R_boolean 67
typedef jbool (*func_rhino_Context_hasFeature_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Context_getInstructionObserverThreshold_R_int 68
typedef jint (*func_rhino_Context_getInstructionObserverThreshold_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_setInstructionObserverThreshold_int 69
typedef void (*func_rhino_Context_setInstructionObserverThreshold_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Context_setGenerateObserverCount_boolean 70
typedef void (*func_rhino_Context_setGenerateObserverCount_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_Context_observeInstructionCount_int 71
typedef void (*func_rhino_Context_observeInstructionCount_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Context_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader 72
typedef jobject (*func_rhino_Context_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader 73
typedef jobject (*func_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_setApplicationClassLoader_java_lang_ClassLoader 74
typedef void (*func_rhino_Context_setApplicationClassLoader_java_lang_ClassLoader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_compileImpl_rhino_Scriptable_java_lang_String_java_lang_String_int_boolean_rhino_Evaluator_rhino_ErrorReporter_R_java_lang_Object 75
typedef jobject (*func_rhino_Context_compileImpl_rhino_Scriptable_java_lang_String_java_lang_String_int_boolean_rhino_Evaluator_rhino_ErrorReporter_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jbool param4, jobject param5, jobject param6);
#define VTABLE_rhino_Context_parse_java_lang_String_java_lang_String_int_rhino_CompilerEnvirons_rhino_ErrorReporter_boolean_R_rhino_ast_ScriptNode 76
typedef jobject (*func_rhino_Context_parse_java_lang_String_java_lang_String_int_rhino_CompilerEnvirons_rhino_ErrorReporter_boolean_R_rhino_ast_ScriptNode)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jbool param5);
#define VTABLE_rhino_Context_createCompiler_R_rhino_Evaluator 77
typedef jobject (*func_rhino_Context_createCompiler_R_rhino_Evaluator)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy 78
typedef jobject (*func_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_isVersionECMA1_R_boolean 79
typedef jbool (*func_rhino_Context_isVersionECMA1_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_isGeneratingDebugChanged_R_boolean 80
typedef jbool (*func_rhino_Context_isGeneratingDebugChanged_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Context_addActivationName_java_lang_String 81
typedef void (*func_rhino_Context_addActivationName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_isActivationNeeded_java_lang_String_R_boolean 82
typedef jbool (*func_rhino_Context_isActivationNeeded_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_removeActivationName_java_lang_String 83
typedef void (*func_rhino_Context_removeActivationName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Context_isStrictMode_R_boolean 84
typedef jbool (*func_rhino_Context_isStrictMode_R_boolean)(jcontext ctx, jobject self);

void mark_rhino_Context(jobject object, jint mark, jint depth);
void clinit_rhino_Context(jcontext ctx);
void init_rhino_Context_rhino_ContextFactory(jcontext ctx, jobject self, jobject param0);
jobject SM_rhino_Context_getCurrentContext_R_rhino_Context(jcontext ctx);
jobject SM_rhino_Context_enter_R_rhino_Context(jcontext ctx);
jobject SM_rhino_Context_enter_rhino_Context_rhino_ContextFactory_R_rhino_Context(jcontext ctx, jobject param0, jobject param1);
void SM_rhino_Context_exit(jcontext ctx);
jobject SM_rhino_Context_call_rhino_ContextFactory_rhino_Callable_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject SM_rhino_Context_call_rhino_ContextFactory_rhino_ContextAction_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject M_rhino_Context_getFactory_R_rhino_ContextFactory(jcontext ctx, jobject self);
jbool M_rhino_Context_isSealed_R_boolean(jcontext ctx, jobject self);
void M_rhino_Context_seal_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_Context_unseal_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void SM_rhino_Context_onSealedMutation(jcontext ctx);
jint M_rhino_Context_getLanguageVersion_R_int(jcontext ctx, jobject self);
void M_rhino_Context_setLanguageVersion_int(jcontext ctx, jobject self, jint param0);
jbool SM_rhino_Context_isValidLanguageVersion_int_R_boolean(jcontext ctx, jint param0);
void SM_rhino_Context_checkLanguageVersion_int(jcontext ctx, jint param0);
jobject M_rhino_Context_getImplementationVersion_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_Context_getErrorReporter_R_rhino_ErrorReporter(jcontext ctx, jobject self);
jobject M_rhino_Context_setErrorReporter_rhino_ErrorReporter_R_rhino_ErrorReporter(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Context_getLocale_R_java_util_Locale(jcontext ctx, jobject self);
jobject M_rhino_Context_setLocale_java_util_Locale_R_java_util_Locale(jcontext ctx, jobject self, jobject param0);
void SM_rhino_Context_reportWarning_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
void SM_rhino_Context_reportWarning_java_lang_String(jcontext ctx, jobject param0);
void SM_rhino_Context_reportWarning_java_lang_String_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1);
void SM_rhino_Context_reportError_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
void SM_rhino_Context_reportError_java_lang_String(jcontext ctx, jobject param0);
jobject SM_rhino_Context_reportRuntimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
jobject SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(jcontext ctx, jobject param0);
jobject SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_rhino_Context_reportRuntimeError3_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_Context_reportRuntimeError4_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(jcontext ctx, jobject param0);
jobject M_rhino_Context_initStandardObjects_R_rhino_ScriptableObject(jcontext ctx, jobject self);
jobject M_rhino_Context_initSafeStandardObjects_R_rhino_ScriptableObject(jcontext ctx, jobject self);
jobject M_rhino_Context_initStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject SM_rhino_Context_getUndefinedValue_R_java_lang_Object(jcontext ctx);
jobject M_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_Context_evaluateReader_rhino_Scriptable_java_io_Reader_java_lang_String_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_Context_executeScriptWithContinuations_rhino_Script_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Context_callFunctionWithContinuations_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_Context_captureContinuation_R_rhino_ContinuationPending(jcontext ctx, jobject self);
jobject M_rhino_Context_resumeContinuation_java_lang_Object_rhino_Scriptable_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool M_rhino_Context_stringIsCompilableUnit_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jobject M_rhino_Context_compileString_java_lang_String_java_lang_String_int_R_rhino_Script(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jobject M_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
jobject M_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_java_lang_String_int_R_rhino_Function(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5);
jobject M_rhino_Context_decompileScript_rhino_Script_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_Context_decompileFunction_rhino_Function_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_Context_decompileFunctionBody_rhino_Function_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Context_getElements_rhino_Scriptable_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool SM_rhino_Context_toBoolean_java_lang_Object_R_boolean(jcontext ctx, jobject param0);
jdouble SM_rhino_Context_toNumber_java_lang_Object_R_double(jcontext ctx, jobject param0);
jobject SM_rhino_Context_toString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_rhino_Context_toObject_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Context_javaToJS_java_lang_Object_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(jcontext ctx, jobject param0);
jbool M_rhino_Context_isGeneratingDebug_R_boolean(jcontext ctx, jobject self);
void M_rhino_Context_setGeneratingDebug_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_Context_isGeneratingSource_R_boolean(jcontext ctx, jobject self);
void M_rhino_Context_setGeneratingSource_boolean(jcontext ctx, jobject self, jbool param0);
jint M_rhino_Context_getOptimizationLevel_R_int(jcontext ctx, jobject self);
void M_rhino_Context_setOptimizationLevel_int(jcontext ctx, jobject self, jint param0);
jbool SM_rhino_Context_isValidOptimizationLevel_int_R_boolean(jcontext ctx, jint param0);
void SM_rhino_Context_checkOptimizationLevel_int(jcontext ctx, jint param0);
jint M_rhino_Context_getMaximumInterpreterStackDepth_R_int(jcontext ctx, jobject self);
void M_rhino_Context_setMaximumInterpreterStackDepth_int(jcontext ctx, jobject self, jint param0);
void M_rhino_Context_setClassShutter_rhino_ClassShutter(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Context_getClassShutter_R_rhino_ClassShutter(jcontext ctx, jobject self);
jobject M_rhino_Context_getThreadLocal_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Context_removeThreadLocal_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_Context_setWrapFactory_rhino_WrapFactory(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Context_getWrapFactory_R_rhino_WrapFactory(jcontext ctx, jobject self);
jobject M_rhino_Context_getDebugger_R_rhino_debug_Debugger(jcontext ctx, jobject self);
jobject M_rhino_Context_getDebuggerContextData_R_java_lang_Object(jcontext ctx, jobject self);
void M_rhino_Context_setDebugger_rhino_debug_Debugger_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_rhino_Context_getDebuggableView_rhino_Script_R_rhino_debug_DebuggableScript(jcontext ctx, jobject param0);
jbool M_rhino_Context_hasFeature_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_rhino_Context_getInstructionObserverThreshold_R_int(jcontext ctx, jobject self);
void M_rhino_Context_setInstructionObserverThreshold_int(jcontext ctx, jobject self, jint param0);
void M_rhino_Context_setGenerateObserverCount_boolean(jcontext ctx, jobject self, jbool param0);
void M_rhino_Context_observeInstructionCount_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_Context_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self);
void M_rhino_Context_setApplicationClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0);
jobject SM_rhino_Context_getContext_R_rhino_Context(jcontext ctx);
jobject M_rhino_Context_compileImpl_rhino_Scriptable_java_lang_String_java_lang_String_int_boolean_rhino_Evaluator_rhino_ErrorReporter_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jbool param4, jobject param5, jobject param6);
jobject M_rhino_Context_parse_java_lang_String_java_lang_String_int_rhino_CompilerEnvirons_rhino_ErrorReporter_boolean_R_rhino_ast_ScriptNode(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jbool param5);
void SM_rhino_Context_notifyDebugger_r_rhino_Context_rhino_debug_DebuggableScript_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject M_rhino_Context_createCompiler_R_rhino_Evaluator(jcontext ctx, jobject self);
jobject SM_rhino_Context_createInterpreter_R_rhino_Evaluator(jcontext ctx);
jobject SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(jcontext ctx, jobject param0);
jobject M_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy(jcontext ctx, jobject self);
jbool M_rhino_Context_isVersionECMA1_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_Context_isGeneratingDebugChanged_R_boolean(jcontext ctx, jobject self);
void M_rhino_Context_addActivationName_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_Context_isActivationNeeded_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_rhino_Context_removeActivationName_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_Context_isStrictMode_R_boolean(jcontext ctx, jobject self);
jobject SM_rhino_Context_lambda$call$0_rhino_Callable_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);

#ifdef __cplusplus
}
#endif

#endif
