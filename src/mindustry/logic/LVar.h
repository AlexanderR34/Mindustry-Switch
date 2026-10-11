#ifndef HEADER_mindustry_logic_LVar
#define HEADER_mindustry_logic_LVar

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LVar {
	java_lang_Object parent;
	jref F_name;
	jint F_id;
	jbool F_isobj;
	jbool F_constant;
	jref F_objval;
	jdouble F_numval;
	jlong F_syncTime;
} mindustry_logic_LVar;

extern Class class_mindustry_logic_LVar;


#define VTABLE_mindustry_logic_LVar_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LVar_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LVar_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LVar_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LVar_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LVar_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LVar_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_finalize 5
typedef void (*func_mindustry_logic_LVar_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_notify 6
typedef void (*func_mindustry_logic_LVar_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_notifyAll 7
typedef void (*func_mindustry_logic_LVar_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_wait 8
typedef void (*func_mindustry_logic_LVar_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_wait_long 9
typedef void (*func_mindustry_logic_LVar_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LVar_wait_long_int 10
typedef void (*func_mindustry_logic_LVar_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LVar_building_R_mindustry_gen_Building 11
typedef jobject (*func_mindustry_logic_LVar_building_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object 12
typedef jobject (*func_mindustry_logic_LVar_obj_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_team_R_mindustry_game_Team 13
typedef jobject (*func_mindustry_logic_LVar_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_bool_R_boolean 14
typedef jbool (*func_mindustry_logic_LVar_bool_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_num_R_double 15
typedef jdouble (*func_mindustry_logic_LVar_num_R_double)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_numOrNan_R_double 16
typedef jdouble (*func_mindustry_logic_LVar_numOrNan_R_double)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_numf_R_float 17
typedef jfloat (*func_mindustry_logic_LVar_numf_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_numfWorld_R_float 18
typedef jfloat (*func_mindustry_logic_LVar_numfWorld_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_numfOrNan_R_float 19
typedef jfloat (*func_mindustry_logic_LVar_numfOrNan_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_numi_R_int 20
typedef jint (*func_mindustry_logic_LVar_numi_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LVar_setbool_boolean 21
typedef void (*func_mindustry_logic_LVar_setbool_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_logic_LVar_setnum_double 22
typedef void (*func_mindustry_logic_LVar_setnum_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_mindustry_logic_LVar_setobj_java_lang_Object 23
typedef void (*func_mindustry_logic_LVar_setobj_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LVar_setconst_java_lang_Object 24
typedef void (*func_mindustry_logic_LVar_setconst_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LVar_setlink_java_lang_Object 25
typedef void (*func_mindustry_logic_LVar_setlink_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LVar_set_mindustry_logic_LVar 26
typedef void (*func_mindustry_logic_LVar_set_mindustry_logic_LVar)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LVar(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LVar(jcontext ctx);
void init_mindustry_logic_LVar_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_mindustry_logic_LVar_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_mindustry_logic_LVar_java_lang_String_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
jobject M_mindustry_logic_LVar_building_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_logic_LVar_obj_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_mindustry_logic_LVar_team_R_mindustry_game_Team(jcontext ctx, jobject self);
jbool M_mindustry_logic_LVar_bool_R_boolean(jcontext ctx, jobject self);
jdouble M_mindustry_logic_LVar_num_R_double(jcontext ctx, jobject self);
jdouble M_mindustry_logic_LVar_numOrNan_R_double(jcontext ctx, jobject self);
jfloat M_mindustry_logic_LVar_numf_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_logic_LVar_numfWorld_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_logic_LVar_numfOrNan_R_float(jcontext ctx, jobject self);
jint M_mindustry_logic_LVar_numi_R_int(jcontext ctx, jobject self);
void M_mindustry_logic_LVar_setbool_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_logic_LVar_setnum_double(jcontext ctx, jobject self, jdouble param0);
void M_mindustry_logic_LVar_setobj_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LVar_setconst_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LVar_setlink_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LVar_set_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_logic_LVar_invalid_double_R_boolean(jcontext ctx, jdouble param0);
jobject M_mindustry_logic_LVar_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
