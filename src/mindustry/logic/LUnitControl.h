#ifndef HEADER_mindustry_logic_LUnitControl
#define HEADER_mindustry_logic_LUnitControl

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LUnitControl {
	java_lang_Enum parent;
	jref F_params;
} mindustry_logic_LUnitControl;

extern Class class_mindustry_logic_LUnitControl;

extern jobject SF_mindustry_logic_LUnitControl_idle;
extern jobject SF_mindustry_logic_LUnitControl_stop;
extern jobject SF_mindustry_logic_LUnitControl_move;
extern jobject SF_mindustry_logic_LUnitControl_approach;
extern jobject SF_mindustry_logic_LUnitControl_pathfind;
extern jobject SF_mindustry_logic_LUnitControl_autoPathfind;
extern jobject SF_mindustry_logic_LUnitControl_boost;
extern jobject SF_mindustry_logic_LUnitControl_target;
extern jobject SF_mindustry_logic_LUnitControl_targetp;
extern jobject SF_mindustry_logic_LUnitControl_itemDrop;
extern jobject SF_mindustry_logic_LUnitControl_itemTake;
extern jobject SF_mindustry_logic_LUnitControl_payDrop;
extern jobject SF_mindustry_logic_LUnitControl_payTake;
extern jobject SF_mindustry_logic_LUnitControl_payEnter;
extern jobject SF_mindustry_logic_LUnitControl_mine;
extern jobject SF_mindustry_logic_LUnitControl_flag;
extern jobject SF_mindustry_logic_LUnitControl_build;
extern jobject SF_mindustry_logic_LUnitControl_deconstruct;
extern jobject SF_mindustry_logic_LUnitControl_getBlock;
extern jobject SF_mindustry_logic_LUnitControl_within;
extern jobject SF_mindustry_logic_LUnitControl_unbind;
extern jobject SF_mindustry_logic_LUnitControl_all;
extern jobject SF_mindustry_logic_LUnitControl_$VALUES;

#define VTABLE_mindustry_logic_LUnitControl_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LUnitControl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LUnitControl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LUnitControl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LUnitControl_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LUnitControl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LUnitControl_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LUnitControl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LUnitControl_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LUnitControl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LUnitControl_finalize 5
typedef void (*func_mindustry_logic_LUnitControl_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LUnitControl_notify 6
typedef void (*func_mindustry_logic_LUnitControl_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LUnitControl_notifyAll 7
typedef void (*func_mindustry_logic_LUnitControl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LUnitControl_wait 8
typedef void (*func_mindustry_logic_LUnitControl_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LUnitControl_wait_long 9
typedef void (*func_mindustry_logic_LUnitControl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LUnitControl_wait_long_int 10
typedef void (*func_mindustry_logic_LUnitControl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LUnitControl_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_LUnitControl_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LUnitControl_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_logic_LUnitControl_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LUnitControl_name_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_LUnitControl_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LUnitControl_ordinal_R_int 14
typedef jint (*func_mindustry_logic_LUnitControl_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LUnitControl_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_logic_LUnitControl_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_logic_LUnitControl(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LUnitControl(jcontext ctx);
jobject SM_mindustry_logic_LUnitControl_values_R_Array1_mindustry_logic_LUnitControl(jcontext ctx);
jobject SM_mindustry_logic_LUnitControl_valueOf_java_lang_String_R_mindustry_logic_LUnitControl(jcontext ctx, jobject param0);
void init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject SM_mindustry_logic_LUnitControl_$values_R_Array1_mindustry_logic_LUnitControl(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
