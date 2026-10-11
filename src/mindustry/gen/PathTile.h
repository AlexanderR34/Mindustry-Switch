#ifndef HEADER_mindustry_gen_PathTile
#define HEADER_mindustry_gen_PathTile

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_PathTile {
	java_lang_Object parent;
} mindustry_gen_PathTile;

extern Class class_mindustry_gen_PathTile;

extern jint SF_mindustry_gen_PathTile_bitMaskHealth;
extern jint SF_mindustry_gen_PathTile_bitMaskTeam;
extern jint SF_mindustry_gen_PathTile_bitMaskSolid;
extern jint SF_mindustry_gen_PathTile_bitMaskLiquid;
extern jint SF_mindustry_gen_PathTile_bitMaskLegSolid;
extern jint SF_mindustry_gen_PathTile_bitMaskNearLiquid;
extern jint SF_mindustry_gen_PathTile_bitMaskNearGround;
extern jint SF_mindustry_gen_PathTile_bitMaskNearSolid;
extern jint SF_mindustry_gen_PathTile_bitMaskNearLegSolid;
extern jint SF_mindustry_gen_PathTile_bitMaskDeep;
extern jint SF_mindustry_gen_PathTile_bitMaskDamages;
extern jint SF_mindustry_gen_PathTile_bitMaskAllDeep;
extern jint SF_mindustry_gen_PathTile_bitMaskNearDeep;
extern jint SF_mindustry_gen_PathTile_bitMaskTeamPassable;

#define VTABLE_mindustry_gen_PathTile_hashCode_R_int 0
typedef jint (*func_mindustry_gen_PathTile_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PathTile_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_PathTile_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PathTile_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_PathTile_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PathTile_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_PathTile_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PathTile_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_PathTile_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PathTile_finalize 5
typedef void (*func_mindustry_gen_PathTile_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PathTile_notify 6
typedef void (*func_mindustry_gen_PathTile_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PathTile_notifyAll 7
typedef void (*func_mindustry_gen_PathTile_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PathTile_wait 8
typedef void (*func_mindustry_gen_PathTile_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PathTile_wait_long 9
typedef void (*func_mindustry_gen_PathTile_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_PathTile_wait_long_int 10
typedef void (*func_mindustry_gen_PathTile_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_PathTile(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_PathTile(jcontext ctx);
void init_mindustry_gen_PathTile(jcontext ctx, jobject self);
jint SM_mindustry_gen_PathTile_health_int_R_int(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_health_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_gen_PathTile_team_int_R_int(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_team_int_int_R_int(jcontext ctx, jint param0, jint param1);
jbool SM_mindustry_gen_PathTile_solid_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_solid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_liquid_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_liquid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_legSolid_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_legSolid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_nearLiquid_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_nearLiquid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_nearGround_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_nearGround_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_nearSolid_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_nearSolid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_nearLegSolid_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_nearLegSolid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_deep_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_deep_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_damages_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_damages_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_allDeep_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_allDeep_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_nearDeep_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_nearDeep_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jbool SM_mindustry_gen_PathTile_teamPassable_int_R_boolean(jcontext ctx, jint param0);
jint SM_mindustry_gen_PathTile_teamPassable_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jint SM_mindustry_gen_PathTile_get_int_int_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_R_int(jcontext ctx, jint param0, jint param1, jbool param2, jbool param3, jbool param4, jbool param5, jbool param6, jbool param7, jbool param8, jbool param9, jbool param10, jbool param11, jbool param12, jbool param13);

#ifdef __cplusplus
}
#endif

#endif
