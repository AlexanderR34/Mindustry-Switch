#ifndef HEADER_mindustry_input_Placement$NormalizeResult
#define HEADER_mindustry_input_Placement$NormalizeResult

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_input_Placement$NormalizeResult {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_x2;
	jint F_y2;
	jint F_rotation;
} mindustry_input_Placement$NormalizeResult;

extern Class class_mindustry_input_Placement$NormalizeResult;


#define VTABLE_mindustry_input_Placement$NormalizeResult_hashCode_R_int 0
typedef jint (*func_mindustry_input_Placement$NormalizeResult_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeResult_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_input_Placement$NormalizeResult_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_Placement$NormalizeResult_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_input_Placement$NormalizeResult_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeResult_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_input_Placement$NormalizeResult_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeResult_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_input_Placement$NormalizeResult_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeResult_finalize 5
typedef void (*func_mindustry_input_Placement$NormalizeResult_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeResult_notify 6
typedef void (*func_mindustry_input_Placement$NormalizeResult_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeResult_notifyAll 7
typedef void (*func_mindustry_input_Placement$NormalizeResult_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeResult_wait 8
typedef void (*func_mindustry_input_Placement$NormalizeResult_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeResult_wait_long 9
typedef void (*func_mindustry_input_Placement$NormalizeResult_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_input_Placement$NormalizeResult_wait_long_int 10
typedef void (*func_mindustry_input_Placement$NormalizeResult_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_input_Placement$NormalizeResult(jobject object, jint mark, jint depth);
void clinit_mindustry_input_Placement$NormalizeResult(jcontext ctx);
void init_mindustry_input_Placement$NormalizeResult(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
