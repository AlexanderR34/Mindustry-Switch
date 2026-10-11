#ifndef HEADER_mindustry_input_Placement$NormalizeDrawResult
#define HEADER_mindustry_input_Placement$NormalizeDrawResult

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_input_Placement$NormalizeDrawResult {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_x2;
	jfloat F_y2;
} mindustry_input_Placement$NormalizeDrawResult;

extern Class class_mindustry_input_Placement$NormalizeDrawResult;


#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_hashCode_R_int 0
typedef jint (*func_mindustry_input_Placement$NormalizeDrawResult_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_input_Placement$NormalizeDrawResult_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_input_Placement$NormalizeDrawResult_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_input_Placement$NormalizeDrawResult_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_input_Placement$NormalizeDrawResult_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_finalize 5
typedef void (*func_mindustry_input_Placement$NormalizeDrawResult_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_notify 6
typedef void (*func_mindustry_input_Placement$NormalizeDrawResult_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_notifyAll 7
typedef void (*func_mindustry_input_Placement$NormalizeDrawResult_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_wait 8
typedef void (*func_mindustry_input_Placement$NormalizeDrawResult_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_wait_long 9
typedef void (*func_mindustry_input_Placement$NormalizeDrawResult_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_input_Placement$NormalizeDrawResult_wait_long_int 10
typedef void (*func_mindustry_input_Placement$NormalizeDrawResult_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_input_Placement$NormalizeDrawResult(jobject object, jint mark, jint depth);
void clinit_mindustry_input_Placement$NormalizeDrawResult(jcontext ctx);
void init_mindustry_input_Placement$NormalizeDrawResult(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
