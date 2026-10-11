#ifndef HEADER_mindustry_net_Administration$PlayerAction
#define HEADER_mindustry_net_Administration$PlayerAction

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Administration$PlayerAction {
	java_lang_Object parent;
	jref F_player;
	jref F_type;
	jref F_tile;
	jref F_block;
	jint F_rotation;
	jref F_config;
	jref F_item;
	jint F_itemAmount;
	jref F_unit;
	jref F_payload;
	jref F_plans;
	jref F_unitIDs;
	jref F_unitCommand;
	jref F_buildingPositions;
	jref F_pingText;
	jfloat F_pingX;
	jfloat F_pingY;
} mindustry_net_Administration$PlayerAction;

extern Class class_mindustry_net_Administration$PlayerAction;


#define VTABLE_mindustry_net_Administration$PlayerAction_hashCode_R_int 0
typedef jint (*func_mindustry_net_Administration$PlayerAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Administration$PlayerAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Administration$PlayerAction_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Administration$PlayerAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerAction_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Administration$PlayerAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerAction_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Administration$PlayerAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerAction_finalize 5
typedef void (*func_mindustry_net_Administration$PlayerAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerAction_notify 6
typedef void (*func_mindustry_net_Administration$PlayerAction_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerAction_notifyAll 7
typedef void (*func_mindustry_net_Administration$PlayerAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerAction_wait 8
typedef void (*func_mindustry_net_Administration$PlayerAction_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerAction_wait_long 9
typedef void (*func_mindustry_net_Administration$PlayerAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Administration$PlayerAction_wait_long_int 10
typedef void (*func_mindustry_net_Administration$PlayerAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Administration$PlayerAction_reset 11
typedef void (*func_mindustry_net_Administration$PlayerAction_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_R_mindustry_net_Administration$PlayerAction 12
typedef jobject (*func_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_R_mindustry_net_Administration$PlayerAction)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_gen_Unit_R_mindustry_net_Administration$PlayerAction 13
typedef jobject (*func_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_gen_Unit_R_mindustry_net_Administration$PlayerAction)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_mindustry_net_Administration$PlayerAction(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Administration$PlayerAction(jcontext ctx);
void init_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject self);
jobject M_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_R_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_gen_Unit_R_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_net_Administration$PlayerAction_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
