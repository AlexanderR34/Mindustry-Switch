#ifndef HEADER_mindustry_entities_comp_RotComp
#define HEADER_mindustry_entities_comp_RotComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_RotComp {
	java_lang_Object parent;
	jfloat F_rotation;
} mindustry_entities_comp_RotComp;

extern Class class_mindustry_entities_comp_RotComp;


#define VTABLE_mindustry_entities_comp_RotComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_RotComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_RotComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_RotComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_RotComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_RotComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_RotComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_finalize 5
typedef void (*func_mindustry_entities_comp_RotComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_notify 6
typedef void (*func_mindustry_entities_comp_RotComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_RotComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_wait 8
typedef void (*func_mindustry_entities_comp_RotComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_wait_long 9
typedef void (*func_mindustry_entities_comp_RotComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_RotComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_RotComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_RotComp_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_entities_comp_RotComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_entities_comp_RotComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_isAdded_R_boolean 13
typedef jbool (*func_mindustry_entities_comp_RotComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_isLocal_R_boolean 14
typedef jbool (*func_mindustry_entities_comp_RotComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_isRemote_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_RotComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_serialize_R_boolean 16
typedef jbool (*func_mindustry_entities_comp_RotComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_classId_R_int 17
typedef jint (*func_mindustry_entities_comp_RotComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_id_R_int 18
typedef jint (*func_mindustry_entities_comp_RotComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_add 19
typedef void (*func_mindustry_entities_comp_RotComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_afterRead 20
typedef void (*func_mindustry_entities_comp_RotComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_afterReadAll 21
typedef void (*func_mindustry_entities_comp_RotComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_beforeWrite 22
typedef void (*func_mindustry_entities_comp_RotComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_id_int 23
typedef void (*func_mindustry_entities_comp_RotComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_RotComp_read_arc_util_io_Reads 24
typedef void (*func_mindustry_entities_comp_RotComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_RotComp_remove 25
typedef void (*func_mindustry_entities_comp_RotComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_update 26
typedef void (*func_mindustry_entities_comp_RotComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_RotComp_write_arc_util_io_Writes 27
typedef void (*func_mindustry_entities_comp_RotComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_comp_RotComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_RotComp(jcontext ctx);
void init_mindustry_entities_comp_RotComp(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
