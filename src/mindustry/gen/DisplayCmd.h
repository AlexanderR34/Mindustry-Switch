#ifndef HEADER_mindustry_gen_DisplayCmd
#define HEADER_mindustry_gen_DisplayCmd

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_DisplayCmd {
	java_lang_Object parent;
} mindustry_gen_DisplayCmd;

extern Class class_mindustry_gen_DisplayCmd;

extern jlong SF_mindustry_gen_DisplayCmd_bitMaskType;
extern jlong SF_mindustry_gen_DisplayCmd_bitMaskX;
extern jlong SF_mindustry_gen_DisplayCmd_bitMaskY;
extern jlong SF_mindustry_gen_DisplayCmd_bitMaskP1;
extern jlong SF_mindustry_gen_DisplayCmd_bitMaskP2;
extern jlong SF_mindustry_gen_DisplayCmd_bitMaskP3;
extern jlong SF_mindustry_gen_DisplayCmd_bitMaskP4;

#define VTABLE_mindustry_gen_DisplayCmd_hashCode_R_int 0
typedef jint (*func_mindustry_gen_DisplayCmd_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_DisplayCmd_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_DisplayCmd_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_DisplayCmd_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_DisplayCmd_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_DisplayCmd_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_DisplayCmd_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_DisplayCmd_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_DisplayCmd_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_DisplayCmd_finalize 5
typedef void (*func_mindustry_gen_DisplayCmd_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_DisplayCmd_notify 6
typedef void (*func_mindustry_gen_DisplayCmd_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_DisplayCmd_notifyAll 7
typedef void (*func_mindustry_gen_DisplayCmd_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_DisplayCmd_wait 8
typedef void (*func_mindustry_gen_DisplayCmd_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_DisplayCmd_wait_long 9
typedef void (*func_mindustry_gen_DisplayCmd_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_DisplayCmd_wait_long_int 10
typedef void (*func_mindustry_gen_DisplayCmd_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_DisplayCmd(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_DisplayCmd(jcontext ctx);
void init_mindustry_gen_DisplayCmd(jcontext ctx, jobject self);
jint SM_mindustry_gen_DisplayCmd_type_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_DisplayCmd_type_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_DisplayCmd_x_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_DisplayCmd_x_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_DisplayCmd_y_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_DisplayCmd_y_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_DisplayCmd_p1_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_DisplayCmd_p1_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_DisplayCmd_p2_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_DisplayCmd_p2_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_DisplayCmd_p3_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_DisplayCmd_p3_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_DisplayCmd_p4_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_DisplayCmd_p4_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jlong SM_mindustry_gen_DisplayCmd_get_int_int_int_int_int_int_int_R_long(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);

#ifdef __cplusplus
}
#endif

#endif
