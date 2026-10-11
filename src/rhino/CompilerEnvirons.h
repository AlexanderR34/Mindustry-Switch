#ifndef HEADER_rhino_CompilerEnvirons
#define HEADER_rhino_CompilerEnvirons

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_CompilerEnvirons {
	java_lang_Object parent;
	jref F_errorReporter;
	jint F_languageVersion;
	jbool F_generateDebugInfo;
	jbool F_reservedKeywordAsIdentifier;
	jbool F_allowMemberExprAsFunctionName;
	jbool F_xmlAvailable;
	jint F_optimizationLevel;
	jbool F_generatingSource;
	jbool F_strictMode;
	jbool F_warningAsError;
	jbool F_generateObserverCount;
	jbool F_recordingComments;
	jbool F_recordingLocalJsDocComments;
	jbool F_recoverFromErrors;
	jbool F_warnTrailingComma;
	jbool F_ideMode;
	jbool F_allowSharpComments;
	jref F_activationNames;
} rhino_CompilerEnvirons;

extern Class class_rhino_CompilerEnvirons;


#define VTABLE_rhino_CompilerEnvirons_hashCode_R_int 0
typedef jint (*func_rhino_CompilerEnvirons_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_CompilerEnvirons_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CompilerEnvirons_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_CompilerEnvirons_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_CompilerEnvirons_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_toString_R_java_lang_String 4
typedef jobject (*func_rhino_CompilerEnvirons_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_finalize 5
typedef void (*func_rhino_CompilerEnvirons_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_notify 6
typedef void (*func_rhino_CompilerEnvirons_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_notifyAll 7
typedef void (*func_rhino_CompilerEnvirons_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_wait 8
typedef void (*func_rhino_CompilerEnvirons_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_wait_long 9
typedef void (*func_rhino_CompilerEnvirons_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_CompilerEnvirons_wait_long_int 10
typedef void (*func_rhino_CompilerEnvirons_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_CompilerEnvirons_initFromContext_rhino_Context 11
typedef void (*func_rhino_CompilerEnvirons_initFromContext_rhino_Context)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter 12
typedef jobject (*func_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter 13
typedef void (*func_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int 14
typedef jint (*func_rhino_CompilerEnvirons_getLanguageVersion_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setLanguageVersion_int 15
typedef void (*func_rhino_CompilerEnvirons_setLanguageVersion_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CompilerEnvirons_isGenerateDebugInfo_R_boolean 16
typedef jbool (*func_rhino_CompilerEnvirons_isGenerateDebugInfo_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setGenerateDebugInfo_boolean 17
typedef void (*func_rhino_CompilerEnvirons_setGenerateDebugInfo_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean 18
typedef jbool (*func_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setReservedKeywordAsIdentifier_boolean 19
typedef void (*func_rhino_CompilerEnvirons_setReservedKeywordAsIdentifier_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean 20
typedef jbool (*func_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setAllowMemberExprAsFunctionName_boolean 21
typedef void (*func_rhino_CompilerEnvirons_setAllowMemberExprAsFunctionName_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_isXmlAvailable_R_boolean 22
typedef jbool (*func_rhino_CompilerEnvirons_isXmlAvailable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setXmlAvailable_boolean 23
typedef void (*func_rhino_CompilerEnvirons_setXmlAvailable_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_getOptimizationLevel_R_int 24
typedef jint (*func_rhino_CompilerEnvirons_getOptimizationLevel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setOptimizationLevel_int 25
typedef void (*func_rhino_CompilerEnvirons_setOptimizationLevel_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CompilerEnvirons_isGeneratingSource_R_boolean 26
typedef jbool (*func_rhino_CompilerEnvirons_isGeneratingSource_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_getWarnTrailingComma_R_boolean 27
typedef jbool (*func_rhino_CompilerEnvirons_getWarnTrailingComma_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setWarnTrailingComma_boolean 28
typedef void (*func_rhino_CompilerEnvirons_setWarnTrailingComma_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_isStrictMode_R_boolean 29
typedef jbool (*func_rhino_CompilerEnvirons_isStrictMode_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setStrictMode_boolean 30
typedef void (*func_rhino_CompilerEnvirons_setStrictMode_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_reportWarningAsError_R_boolean 31
typedef jbool (*func_rhino_CompilerEnvirons_reportWarningAsError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setGeneratingSource_boolean 32
typedef void (*func_rhino_CompilerEnvirons_setGeneratingSource_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_isGenerateObserverCount_R_boolean 33
typedef jbool (*func_rhino_CompilerEnvirons_isGenerateObserverCount_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setGenerateObserverCount_boolean 34
typedef void (*func_rhino_CompilerEnvirons_setGenerateObserverCount_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_isRecordingComments_R_boolean 35
typedef jbool (*func_rhino_CompilerEnvirons_isRecordingComments_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setRecordingComments_boolean 36
typedef void (*func_rhino_CompilerEnvirons_setRecordingComments_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_isRecordingLocalJsDocComments_R_boolean 37
typedef jbool (*func_rhino_CompilerEnvirons_isRecordingLocalJsDocComments_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setRecordingLocalJsDocComments_boolean 38
typedef void (*func_rhino_CompilerEnvirons_setRecordingLocalJsDocComments_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_setRecoverFromErrors_boolean 39
typedef void (*func_rhino_CompilerEnvirons_setRecoverFromErrors_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_recoverFromErrors_R_boolean 40
typedef jbool (*func_rhino_CompilerEnvirons_recoverFromErrors_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setIdeMode_boolean 41
typedef void (*func_rhino_CompilerEnvirons_setIdeMode_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean 42
typedef jbool (*func_rhino_CompilerEnvirons_isIdeMode_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set 43
typedef jobject (*func_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_rhino_CompilerEnvirons_setActivationNames_java_util_Set 44
typedef void (*func_rhino_CompilerEnvirons_setActivationNames_java_util_Set)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CompilerEnvirons_setAllowSharpComments_boolean 45
typedef void (*func_rhino_CompilerEnvirons_setAllowSharpComments_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_CompilerEnvirons_getAllowSharpComments_R_boolean 46
typedef jbool (*func_rhino_CompilerEnvirons_getAllowSharpComments_R_boolean)(jcontext ctx, jobject self);

void mark_rhino_CompilerEnvirons(jobject object, jint mark, jint depth);
void clinit_rhino_CompilerEnvirons(jcontext ctx);
void init_rhino_CompilerEnvirons(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_initFromContext_rhino_Context(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter(jcontext ctx, jobject self, jobject param0);
jint M_rhino_CompilerEnvirons_getLanguageVersion_R_int(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setLanguageVersion_int(jcontext ctx, jobject self, jint param0);
jbool M_rhino_CompilerEnvirons_isGenerateDebugInfo_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setGenerateDebugInfo_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setReservedKeywordAsIdentifier_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setAllowMemberExprAsFunctionName_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_isXmlAvailable_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setXmlAvailable_boolean(jcontext ctx, jobject self, jbool param0);
jint M_rhino_CompilerEnvirons_getOptimizationLevel_R_int(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setOptimizationLevel_int(jcontext ctx, jobject self, jint param0);
jbool M_rhino_CompilerEnvirons_isGeneratingSource_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_CompilerEnvirons_getWarnTrailingComma_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setWarnTrailingComma_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_isStrictMode_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setStrictMode_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_reportWarningAsError_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setGeneratingSource_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_isGenerateObserverCount_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setGenerateObserverCount_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_isRecordingComments_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setRecordingComments_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_isRecordingLocalJsDocComments_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setRecordingLocalJsDocComments_boolean(jcontext ctx, jobject self, jbool param0);
void M_rhino_CompilerEnvirons_setRecoverFromErrors_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_recoverFromErrors_R_boolean(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setIdeMode_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_isIdeMode_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set(jcontext ctx, jobject self);
void M_rhino_CompilerEnvirons_setActivationNames_java_util_Set(jcontext ctx, jobject self, jobject param0);
void M_rhino_CompilerEnvirons_setAllowSharpComments_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_CompilerEnvirons_getAllowSharpComments_R_boolean(jcontext ctx, jobject self);
jobject SM_rhino_CompilerEnvirons_ideEnvirons_R_rhino_CompilerEnvirons(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
