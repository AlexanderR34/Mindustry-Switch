#ifndef HEADER_mindustry_gen_FieldIndex
#define HEADER_mindustry_gen_FieldIndex

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_FieldIndex {
	java_lang_Object parent;
} mindustry_gen_FieldIndex;

extern Class class_mindustry_gen_FieldIndex;

extern jlong SF_mindustry_gen_FieldIndex_bitMaskPos;
extern jlong SF_mindustry_gen_FieldIndex_bitMaskCostId;
extern jlong SF_mindustry_gen_FieldIndex_bitMaskTeam;

#define VTABLE_mindustry_gen_FieldIndex_hashCode_R_int 0
typedef jint (*func_mindustry_gen_FieldIndex_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FieldIndex_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_FieldIndex_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_FieldIndex_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_FieldIndex_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FieldIndex_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_FieldIndex_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FieldIndex_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_FieldIndex_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FieldIndex_finalize 5
typedef void (*func_mindustry_gen_FieldIndex_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FieldIndex_notify 6
typedef void (*func_mindustry_gen_FieldIndex_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FieldIndex_notifyAll 7
typedef void (*func_mindustry_gen_FieldIndex_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FieldIndex_wait 8
typedef void (*func_mindustry_gen_FieldIndex_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FieldIndex_wait_long 9
typedef void (*func_mindustry_gen_FieldIndex_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_FieldIndex_wait_long_int 10
typedef void (*func_mindustry_gen_FieldIndex_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_FieldIndex(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_FieldIndex(jcontext ctx);
void init_mindustry_gen_FieldIndex(jcontext ctx, jobject self);
jint SM_mindustry_gen_FieldIndex_pos_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_FieldIndex_pos_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_FieldIndex_costId_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_FieldIndex_costId_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_FieldIndex_team_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_FieldIndex_team_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jlong SM_mindustry_gen_FieldIndex_get_int_int_int_R_long(jcontext ctx, jint param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
