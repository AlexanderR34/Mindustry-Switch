#ifndef HEADER_mindustry_gen_Payloadc
#define HEADER_mindustry_gen_Payloadc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Shieldc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Weaponsc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Payloadc {
	java_lang_Object parent;
} mindustry_gen_Payloadc;

extern Class class_mindustry_gen_Payloadc;


#define INDEX_mindustry_gen_Payloadc_dropBlock_mindustry_world_blocks_payloads_BuildPayload_R_boolean 0
typedef jbool (*func_mindustry_gen_Payloadc_dropBlock_mindustry_world_blocks_payloads_BuildPayload_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq 1
typedef jobject (*func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Payloadc_canDropPayload_R_boolean 2
typedef jbool (*func_mindustry_gen_Payloadc_canDropPayload_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean 3
typedef jbool (*func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean 4
typedef jbool (*func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean 5
typedef jbool (*func_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_dropLastPayload_R_boolean 6
typedef jbool (*func_mindustry_gen_Payloadc_dropLastPayload_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Payloadc_dropUnit_mindustry_world_blocks_payloads_UnitPayload_R_boolean 7
typedef jbool (*func_mindustry_gen_Payloadc_dropUnit_mindustry_world_blocks_payloads_UnitPayload_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean 8
typedef jbool (*func_mindustry_gen_Payloadc_hasPayload_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Payloadc_tryDropPayload_mindustry_world_blocks_payloads_Payload_R_boolean 9
typedef jbool (*func_mindustry_gen_Payloadc_tryDropPayload_mindustry_world_blocks_payloads_Payload_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_payloadUsed_R_float 10
typedef jfloat (*func_mindustry_gen_Payloadc_payloadUsed_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Payloadc_addPayload_mindustry_world_blocks_payloads_Payload 11
typedef void (*func_mindustry_gen_Payloadc_addPayload_mindustry_world_blocks_payloads_Payload)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_contentInfo_arc_scene_ui_layout_Table_float_float 12
typedef void (*func_mindustry_gen_Payloadc_contentInfo_arc_scene_ui_layout_Table_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define INDEX_mindustry_gen_Payloadc_destroy 13
typedef void (*func_mindustry_gen_Payloadc_destroy)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Payloadc_payloads_arc_struct_Seq 14
typedef void (*func_mindustry_gen_Payloadc_payloads_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_pickup_mindustry_gen_Building 15
typedef void (*func_mindustry_gen_Payloadc_pickup_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_pickup_mindustry_gen_Unit 16
typedef void (*func_mindustry_gen_Payloadc_pickup_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_playPayloadDropSound_mindustry_world_blocks_payloads_Payload 17
typedef void (*func_mindustry_gen_Payloadc_playPayloadDropSound_mindustry_world_blocks_payloads_Payload)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Payloadc_remove 18
typedef void (*func_mindustry_gen_Payloadc_remove)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Payloadc_update 19
typedef void (*func_mindustry_gen_Payloadc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Payloadc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Payloadc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
