#ifndef HEADER_mindustry_gen_ClientSnapshotCallPacket
#define HEADER_mindustry_gen_ClientSnapshotCallPacket

#include "Clearwing.h"
#include "mindustry/net/Packet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_ClientSnapshotCallPacket {
	mindustry_net_Packet parent;
	jref F_DATA;
	jint F_snapshotID;
	jint F_unitID;
	jbool F_dead;
	jfloat F_x;
	jfloat F_y;
	jfloat F_pointerX;
	jfloat F_pointerY;
	jfloat F_rotation;
	jfloat F_baseRotation;
	jfloat F_xVelocity;
	jfloat F_yVelocity;
	jref F_mining;
	jbool F_boosting;
	jbool F_shooting;
	jbool F_chatting;
	jbool F_building;
	jref F_selectedBlock;
	jint F_selectedRotation;
	jref F_plans;
	jfloat F_viewX;
	jfloat F_viewY;
	jfloat F_viewWidth;
	jfloat F_viewHeight;
} mindustry_gen_ClientSnapshotCallPacket;

extern Class class_mindustry_gen_ClientSnapshotCallPacket;


#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_hashCode_R_int 0
typedef jint (*func_mindustry_gen_ClientSnapshotCallPacket_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_ClientSnapshotCallPacket_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_ClientSnapshotCallPacket_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_ClientSnapshotCallPacket_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_ClientSnapshotCallPacket_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_finalize 5
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_notify 6
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_notifyAll 7
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_wait 8
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_wait_long 9
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_wait_long_int 10
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_read_arc_util_io_Reads 11
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_write_arc_util_io_Writes 12
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_allow_boolean_R_boolean 13
typedef jbool (*func_mindustry_gen_ClientSnapshotCallPacket_allow_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_read_arc_util_io_Reads_int 14
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_read_arc_util_io_Reads_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_handled 15
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_handled)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_getPriority_R_int 16
typedef jint (*func_mindustry_gen_ClientSnapshotCallPacket_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_handleClient 17
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_handleClient)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_ClientSnapshotCallPacket_handleServer_mindustry_net_NetConnection 18
typedef void (*func_mindustry_gen_ClientSnapshotCallPacket_handleServer_mindustry_net_NetConnection)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_ClientSnapshotCallPacket(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_ClientSnapshotCallPacket(jcontext ctx);
void init_mindustry_gen_ClientSnapshotCallPacket(jcontext ctx, jobject self);
jint M_mindustry_gen_ClientSnapshotCallPacket_getPriority_R_int(jcontext ctx, jobject self);
void M_mindustry_gen_ClientSnapshotCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_ClientSnapshotCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_gen_ClientSnapshotCallPacket_handled(jcontext ctx, jobject self);
void M_mindustry_gen_ClientSnapshotCallPacket_handleServer_mindustry_net_NetConnection(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_ClientSnapshotCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
