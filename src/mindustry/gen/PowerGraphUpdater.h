#ifndef HEADER_mindustry_gen_PowerGraphUpdater
#define HEADER_mindustry_gen_PowerGraphUpdater

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__powerGraph.h"
#include "mindustry/gen/PowerGraphUpdaterc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_PowerGraphUpdater {
	java_lang_Object parent;
	jbool F_added;
	jref F_graph;
	jint F_id;
	jint F_index__powerGraph;
} mindustry_gen_PowerGraphUpdater;

extern Class class_mindustry_gen_PowerGraphUpdater;


#define VTABLE_mindustry_gen_PowerGraphUpdater_hashCode_R_int 0
typedef jint (*func_mindustry_gen_PowerGraphUpdater_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_PowerGraphUpdater_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PowerGraphUpdater_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_PowerGraphUpdater_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_PowerGraphUpdater_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_PowerGraphUpdater_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_finalize 5
typedef void (*func_mindustry_gen_PowerGraphUpdater_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_notify 6
typedef void (*func_mindustry_gen_PowerGraphUpdater_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_notifyAll 7
typedef void (*func_mindustry_gen_PowerGraphUpdater_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_wait 8
typedef void (*func_mindustry_gen_PowerGraphUpdater_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_wait_long 9
typedef void (*func_mindustry_gen_PowerGraphUpdater_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_PowerGraphUpdater_wait_long_int 10
typedef void (*func_mindustry_gen_PowerGraphUpdater_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_PowerGraphUpdater_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_gen_PowerGraphUpdater_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_gen_PowerGraphUpdater_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_isAdded_R_boolean 13
typedef jbool (*func_mindustry_gen_PowerGraphUpdater_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_isLocal_R_boolean 14
typedef jbool (*func_mindustry_gen_PowerGraphUpdater_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_isRemote_R_boolean 15
typedef jbool (*func_mindustry_gen_PowerGraphUpdater_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_serialize_R_boolean 16
typedef jbool (*func_mindustry_gen_PowerGraphUpdater_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_classId_R_int 17
typedef jint (*func_mindustry_gen_PowerGraphUpdater_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_id_R_int 18
typedef jint (*func_mindustry_gen_PowerGraphUpdater_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_add 19
typedef void (*func_mindustry_gen_PowerGraphUpdater_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_afterRead 20
typedef void (*func_mindustry_gen_PowerGraphUpdater_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_afterReadAll 21
typedef void (*func_mindustry_gen_PowerGraphUpdater_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_beforeWrite 22
typedef void (*func_mindustry_gen_PowerGraphUpdater_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_id_int 23
typedef void (*func_mindustry_gen_PowerGraphUpdater_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_PowerGraphUpdater_read_arc_util_io_Reads 24
typedef void (*func_mindustry_gen_PowerGraphUpdater_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PowerGraphUpdater_remove 25
typedef void (*func_mindustry_gen_PowerGraphUpdater_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_update 26
typedef void (*func_mindustry_gen_PowerGraphUpdater_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_write_arc_util_io_Writes 27
typedef void (*func_mindustry_gen_PowerGraphUpdater_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PowerGraphUpdater_setIndex__powerGraph_int 28
typedef void (*func_mindustry_gen_PowerGraphUpdater_setIndex__powerGraph_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_PowerGraphUpdater_graph_R_mindustry_world_blocks_power_PowerGraph 29
typedef jobject (*func_mindustry_gen_PowerGraphUpdater_graph_R_mindustry_world_blocks_power_PowerGraph)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PowerGraphUpdater_graph_mindustry_world_blocks_power_PowerGraph 30
typedef void (*func_mindustry_gen_PowerGraphUpdater_graph_mindustry_world_blocks_power_PowerGraph)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_PowerGraphUpdater(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_PowerGraphUpdater(jcontext ctx);
void init_mindustry_gen_PowerGraphUpdater(jcontext ctx, jobject self);
jint M_mindustry_gen_PowerGraphUpdater_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_PowerGraphUpdater_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_PowerGraphUpdater_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_PowerGraphUpdater_graph_R_mindustry_world_blocks_power_PowerGraph(jcontext ctx, jobject self);
void M_mindustry_gen_PowerGraphUpdater_graph_mindustry_world_blocks_power_PowerGraph(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_PowerGraphUpdater_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_PowerGraphUpdater_setIndex__powerGraph_int(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_gen_PowerGraphUpdater_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_PowerGraphUpdater_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_PowerGraphUpdater_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_PowerGraphUpdater_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_PowerGraphUpdater_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_PowerGraphUpdater_serialize_R_boolean(jcontext ctx, jobject self);
jobject SM_mindustry_gen_PowerGraphUpdater_create_R_mindustry_gen_PowerGraphUpdater(jcontext ctx);
void M_mindustry_gen_PowerGraphUpdater_add(jcontext ctx, jobject self);
void M_mindustry_gen_PowerGraphUpdater_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_PowerGraphUpdater_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_PowerGraphUpdater_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_PowerGraphUpdater_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_PowerGraphUpdater_remove(jcontext ctx, jobject self);
void M_mindustry_gen_PowerGraphUpdater_update(jcontext ctx, jobject self);
void M_mindustry_gen_PowerGraphUpdater_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
