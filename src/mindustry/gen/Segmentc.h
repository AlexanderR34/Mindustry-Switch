#ifndef HEADER_mindustry_gen_Segmentc
#define HEADER_mindustry_gen_Segmentc

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

typedef struct mindustry_gen_Segmentc {
	java_lang_Object parent;
} mindustry_gen_Segmentc;

extern Class class_mindustry_gen_Segmentc;


#define INDEX_mindustry_gen_Segmentc_childSegment_R_mindustry_gen_Segmentc 0
typedef jobject (*func_mindustry_gen_Segmentc_childSegment_R_mindustry_gen_Segmentc)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_headSegment_R_mindustry_gen_Segmentc 1
typedef jobject (*func_mindustry_gen_Segmentc_headSegment_R_mindustry_gen_Segmentc)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_parentSegment_R_mindustry_gen_Segmentc 2
typedef jobject (*func_mindustry_gen_Segmentc_parentSegment_R_mindustry_gen_Segmentc)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_ignoreSolids_R_boolean 3
typedef jbool (*func_mindustry_gen_Segmentc_ignoreSolids_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_isCommandable_R_boolean 4
typedef jbool (*func_mindustry_gen_Segmentc_isCommandable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_isHead_R_boolean 5
typedef jbool (*func_mindustry_gen_Segmentc_isHead_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_moving_R_boolean 6
typedef jbool (*func_mindustry_gen_Segmentc_moving_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_playerControllable_R_boolean 7
typedef jbool (*func_mindustry_gen_Segmentc_playerControllable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_shouldUpdateController_R_boolean 8
typedef jbool (*func_mindustry_gen_Segmentc_shouldUpdateController_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_collisionLayer_R_int 9
typedef jint (*func_mindustry_gen_Segmentc_collisionLayer_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_parentId_R_int 10
typedef jint (*func_mindustry_gen_Segmentc_parentId_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_segmentIndex_R_int 11
typedef jint (*func_mindustry_gen_Segmentc_segmentIndex_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_addChild_mindustry_gen_Unit 12
typedef void (*func_mindustry_gen_Segmentc_addChild_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Segmentc_afterReadAll 13
typedef void (*func_mindustry_gen_Segmentc_afterReadAll)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_afterSync 14
typedef void (*func_mindustry_gen_Segmentc_afterSync)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_beforeWrite 15
typedef void (*func_mindustry_gen_Segmentc_beforeWrite)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_checkParent 16
typedef void (*func_mindustry_gen_Segmentc_checkParent)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_childSegment_mindustry_gen_Segmentc 17
typedef void (*func_mindustry_gen_Segmentc_childSegment_mindustry_gen_Segmentc)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Segmentc_headSegment_mindustry_gen_Segmentc 18
typedef void (*func_mindustry_gen_Segmentc_headSegment_mindustry_gen_Segmentc)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Segmentc_parentId_int 19
typedef void (*func_mindustry_gen_Segmentc_parentId_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Segmentc_parentSegment_mindustry_gen_Segmentc 20
typedef void (*func_mindustry_gen_Segmentc_parentSegment_mindustry_gen_Segmentc)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Segmentc_segmentIndex_int 21
typedef void (*func_mindustry_gen_Segmentc_segmentIndex_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Segmentc_update 22
typedef void (*func_mindustry_gen_Segmentc_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Segmentc_updateSegment_mindustry_gen_Segmentc_mindustry_gen_Segmentc_int 23
typedef void (*func_mindustry_gen_Segmentc_updateSegment_mindustry_gen_Segmentc_mindustry_gen_Segmentc_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);

void mark_mindustry_gen_Segmentc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Segmentc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
