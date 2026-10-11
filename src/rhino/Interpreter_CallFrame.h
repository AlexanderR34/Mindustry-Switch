#ifndef HEADER_rhino_Interpreter$CallFrame
#define HEADER_rhino_Interpreter$CallFrame

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Interpreter$CallFrame {
	java_lang_Object parent;
	jref F_parentFrame;
	jint F_frameIndex;
	jbool F_frozen;
	jref F_fnOrScript;
	jref F_idata;
	jref F_stack;
	jref F_stackAttributes;
	jref F_sDbl;
	jref F_varSource;
	jint F_localShift;
	jint F_emptyStackTop;
	jref F_debuggerFrame;
	jbool F_useActivation;
	jbool F_isContinuationsTopFrame;
	jref F_thisObj;
	jref F_result;
	jdouble F_resultDbl;
	jint F_pc;
	jint F_pcPrevBranch;
	jint F_pcSourceLineStart;
	jref F_scope;
	jint F_savedStackTop;
	jint F_savedCallOp;
	jref F_throwable;
} rhino_Interpreter$CallFrame;

extern Class class_rhino_Interpreter$CallFrame;


#define VTABLE_rhino_Interpreter$CallFrame_hashCode_R_int 0
typedef jint (*func_rhino_Interpreter$CallFrame_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$CallFrame_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Interpreter$CallFrame_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Interpreter$CallFrame_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Interpreter$CallFrame_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$CallFrame_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Interpreter$CallFrame_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$CallFrame_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Interpreter$CallFrame_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$CallFrame_finalize 5
typedef void (*func_rhino_Interpreter$CallFrame_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$CallFrame_notify 6
typedef void (*func_rhino_Interpreter$CallFrame_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$CallFrame_notifyAll 7
typedef void (*func_rhino_Interpreter$CallFrame_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$CallFrame_wait 8
typedef void (*func_rhino_Interpreter$CallFrame_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$CallFrame_wait_long 9
typedef void (*func_rhino_Interpreter$CallFrame_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Interpreter$CallFrame_wait_long_int 10
typedef void (*func_rhino_Interpreter$CallFrame_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Interpreter$CallFrame_initializeArgs_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int 11
typedef void (*func_rhino_Interpreter$CallFrame_initializeArgs_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5);
#define VTABLE_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame 12
typedef jobject (*func_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$CallFrame_equalsInTopScope_java_lang_Object_R_boolean 13
typedef jbool (*func_rhino_Interpreter$CallFrame_equalsInTopScope_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Interpreter$CallFrame_isStrictTopFrame_R_boolean 14
typedef jbool (*func_rhino_Interpreter$CallFrame_isStrictTopFrame_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$CallFrame_fieldsEqual_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean 15
typedef jbool (*func_rhino_Interpreter$CallFrame_fieldsEqual_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Interpreter$CallFrame_lambda$equalsInTopScope$1_java_lang_Object_rhino_EqualObjectGraphs_R_java_lang_Boolean 16
typedef jobject (*func_rhino_Interpreter$CallFrame_lambda$equalsInTopScope$1_java_lang_Object_rhino_EqualObjectGraphs_R_java_lang_Boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Interpreter$CallFrame_lambda$equals$0_java_lang_Object_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_rhino_Interpreter$CallFrame_lambda$equals$0_java_lang_Object_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);

void mark_rhino_Interpreter$CallFrame(jobject object, jint mark, jint depth);
void clinit_rhino_Interpreter$CallFrame(jcontext ctx);
void init_rhino_Interpreter$CallFrame_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_rhino_Interpreter$CallFrame(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_rhino_Interpreter$CallFrame_initializeArgs_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5);
jobject M_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject self);
jbool M_rhino_Interpreter$CallFrame_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_Interpreter$CallFrame_hashCode_R_int(jcontext ctx, jobject self);
jbool M_rhino_Interpreter$CallFrame_equalsInTopScope_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_Interpreter$CallFrame_isStrictTopFrame_R_boolean(jcontext ctx, jobject self);
jbool SM_rhino_Interpreter$CallFrame_equals_rhino_Interpreter$CallFrame_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool M_rhino_Interpreter$CallFrame_fieldsEqual_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Interpreter$CallFrame_lambda$equalsInTopScope$1_java_lang_Object_rhino_EqualObjectGraphs_R_java_lang_Boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Interpreter$CallFrame_lambda$equals$0_java_lang_Object_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);

#ifdef __cplusplus
}
#endif

#endif
