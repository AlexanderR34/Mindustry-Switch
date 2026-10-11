#ifndef HEADER_mindustry_ai_Pathfinder$PathTileStruct
#define HEADER_mindustry_ai_Pathfinder$PathTileStruct

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_Pathfinder$PathTileStruct {
	java_lang_Object parent;
	jint F_health;
	jint F_team;
	jbool F_solid;
	jbool F_liquid;
	jbool F_legSolid;
	jbool F_nearLiquid;
	jbool F_nearGround;
	jbool F_nearSolid;
	jbool F_nearLegSolid;
	jbool F_deep;
	jbool F_damages;
	jbool F_allDeep;
	jbool F_nearDeep;
	jbool F_teamPassable;
	jref F_this$0;
} mindustry_ai_Pathfinder$PathTileStruct;

extern Class class_mindustry_ai_Pathfinder$PathTileStruct;


#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_hashCode_R_int 0
typedef jint (*func_mindustry_ai_Pathfinder$PathTileStruct_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_Pathfinder$PathTileStruct_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_Pathfinder$PathTileStruct_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_Pathfinder$PathTileStruct_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_Pathfinder$PathTileStruct_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_finalize 5
typedef void (*func_mindustry_ai_Pathfinder$PathTileStruct_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_notify 6
typedef void (*func_mindustry_ai_Pathfinder$PathTileStruct_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_notifyAll 7
typedef void (*func_mindustry_ai_Pathfinder$PathTileStruct_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_wait 8
typedef void (*func_mindustry_ai_Pathfinder$PathTileStruct_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_wait_long 9
typedef void (*func_mindustry_ai_Pathfinder$PathTileStruct_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_Pathfinder$PathTileStruct_wait_long_int 10
typedef void (*func_mindustry_ai_Pathfinder$PathTileStruct_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ai_Pathfinder$PathTileStruct(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_Pathfinder$PathTileStruct(jcontext ctx);
void init_mindustry_ai_Pathfinder$PathTileStruct_mindustry_ai_Pathfinder(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
