#ifndef HEADER_mindustry_editor_OperationStack
#define HEADER_mindustry_editor_OperationStack

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_OperationStack {
	java_lang_Object parent;
	jref F_stack;
	jint F_index;
} mindustry_editor_OperationStack;

extern Class class_mindustry_editor_OperationStack;

extern jint SF_mindustry_editor_OperationStack_maxSize;

#define VTABLE_mindustry_editor_OperationStack_hashCode_R_int 0
typedef jint (*func_mindustry_editor_OperationStack_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_OperationStack_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_OperationStack_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_OperationStack_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_OperationStack_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_OperationStack_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_finalize 5
typedef void (*func_mindustry_editor_OperationStack_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_notify 6
typedef void (*func_mindustry_editor_OperationStack_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_notifyAll 7
typedef void (*func_mindustry_editor_OperationStack_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_wait 8
typedef void (*func_mindustry_editor_OperationStack_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_wait_long 9
typedef void (*func_mindustry_editor_OperationStack_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_OperationStack_wait_long_int 10
typedef void (*func_mindustry_editor_OperationStack_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_OperationStack_clear 11
typedef void (*func_mindustry_editor_OperationStack_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_add_mindustry_editor_DrawOperation 12
typedef void (*func_mindustry_editor_OperationStack_add_mindustry_editor_DrawOperation)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_OperationStack_canUndo_R_boolean 13
typedef jbool (*func_mindustry_editor_OperationStack_canUndo_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_canRedo_R_boolean 14
typedef jbool (*func_mindustry_editor_OperationStack_canRedo_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_undo 15
typedef void (*func_mindustry_editor_OperationStack_undo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_OperationStack_redo 16
typedef void (*func_mindustry_editor_OperationStack_redo)(jcontext ctx, jobject self);

void mark_mindustry_editor_OperationStack(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_OperationStack(jcontext ctx);
void init_mindustry_editor_OperationStack(jcontext ctx, jobject self);
void M_mindustry_editor_OperationStack_clear(jcontext ctx, jobject self);
void M_mindustry_editor_OperationStack_add_mindustry_editor_DrawOperation(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_editor_OperationStack_canUndo_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_editor_OperationStack_canRedo_R_boolean(jcontext ctx, jobject self);
void M_mindustry_editor_OperationStack_undo(jcontext ctx, jobject self);
void M_mindustry_editor_OperationStack_redo(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
