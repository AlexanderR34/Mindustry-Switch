#ifndef HEADER_mindustry_entities_comp_EntityComp
#define HEADER_mindustry_entities_comp_EntityComp

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_EntityComp {
	java_lang_Object parent;
	jbool F_added;
	jint F_id;
} mindustry_entities_comp_EntityComp;

extern Class class_mindustry_entities_comp_EntityComp;


#define VTABLE_mindustry_entities_comp_EntityComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_EntityComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_EntityComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_EntityComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_EntityComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_EntityComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_EntityComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_finalize 5
typedef void (*func_mindustry_entities_comp_EntityComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_notify 6
typedef void (*func_mindustry_entities_comp_EntityComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_EntityComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_wait 8
typedef void (*func_mindustry_entities_comp_EntityComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_wait_long 9
typedef void (*func_mindustry_entities_comp_EntityComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_EntityComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_EntityComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_EntityComp_isAdded_R_boolean 11
typedef jbool (*func_mindustry_entities_comp_EntityComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_update 12
typedef void (*func_mindustry_entities_comp_EntityComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_remove 13
typedef void (*func_mindustry_entities_comp_EntityComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_add 14
typedef void (*func_mindustry_entities_comp_EntityComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_isLocal_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_EntityComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_isRemote_R_boolean 16
typedef jbool (*func_mindustry_entities_comp_EntityComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_self_R_mindustry_gen_Entityc 17
typedef jobject (*func_mindustry_entities_comp_EntityComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_as_R_java_lang_Object 18
typedef jobject (*func_mindustry_entities_comp_EntityComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_classId_R_int 19
typedef jint (*func_mindustry_entities_comp_EntityComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_serialize_R_boolean 20
typedef jbool (*func_mindustry_entities_comp_EntityComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_read_arc_util_io_Reads 21
typedef void (*func_mindustry_entities_comp_EntityComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_EntityComp_write_arc_util_io_Writes 22
typedef void (*func_mindustry_entities_comp_EntityComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_EntityComp_beforeWrite 23
typedef void (*func_mindustry_entities_comp_EntityComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_afterRead 24
typedef void (*func_mindustry_entities_comp_EntityComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_EntityComp_afterReadAll 25
typedef void (*func_mindustry_entities_comp_EntityComp_afterReadAll)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_EntityComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_EntityComp(jcontext ctx);
void init_mindustry_entities_comp_EntityComp(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_EntityComp_isAdded_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_comp_EntityComp_update(jcontext ctx, jobject self);
void M_mindustry_entities_comp_EntityComp_remove(jcontext ctx, jobject self);
void M_mindustry_entities_comp_EntityComp_add(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_EntityComp_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_EntityComp_isRemote_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_EntityComp_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_EntityComp_as_R_java_lang_Object(jcontext ctx, jobject self);
void M_mindustry_entities_comp_EntityComp_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_EntityComp_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_EntityComp_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_entities_comp_EntityComp_afterRead(jcontext ctx, jobject self);
void M_mindustry_entities_comp_EntityComp_afterReadAll(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
