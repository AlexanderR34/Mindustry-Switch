#ifndef HEADER_mindustry_entities_units_StatusEntry
#define HEADER_mindustry_entities_units_StatusEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_units_StatusEntry {
	java_lang_Object parent;
	jref F_effect;
	jfloat F_time;
	jfloat F_damageTime;
	jfloat F_damageMultiplier;
	jfloat F_healthMultiplier;
	jfloat F_speedMultiplier;
	jfloat F_reloadMultiplier;
	jfloat F_buildSpeedMultiplier;
	jfloat F_dragMultiplier;
	jfloat F_armorOverride;
} mindustry_entities_units_StatusEntry;

extern Class class_mindustry_entities_units_StatusEntry;


#define VTABLE_mindustry_entities_units_StatusEntry_hashCode_R_int 0
typedef jint (*func_mindustry_entities_units_StatusEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_StatusEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_units_StatusEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_StatusEntry_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_units_StatusEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_StatusEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_units_StatusEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_StatusEntry_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_units_StatusEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_StatusEntry_finalize 5
typedef void (*func_mindustry_entities_units_StatusEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_StatusEntry_notify 6
typedef void (*func_mindustry_entities_units_StatusEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_StatusEntry_notifyAll 7
typedef void (*func_mindustry_entities_units_StatusEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_StatusEntry_wait 8
typedef void (*func_mindustry_entities_units_StatusEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_StatusEntry_wait_long 9
typedef void (*func_mindustry_entities_units_StatusEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_units_StatusEntry_wait_long_int 10
typedef void (*func_mindustry_entities_units_StatusEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry 11
typedef jobject (*func_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry)(jcontext ctx, jobject self, jobject param0, jfloat param1);

void mark_mindustry_entities_units_StatusEntry(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_units_StatusEntry(jcontext ctx);
void init_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self);
jobject M_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self, jobject param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
