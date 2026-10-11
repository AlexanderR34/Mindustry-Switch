#ifndef HEADER_mindustry_gen_Statusc
#define HEADER_mindustry_gen_Statusc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Statusc {
	java_lang_Object parent;
} mindustry_gen_Statusc;

extern Class class_mindustry_gen_Statusc;


#define INDEX_mindustry_gen_Statusc_applyDynamicStatus_R_mindustry_entities_units_StatusEntry 0
typedef jobject (*func_mindustry_gen_Statusc_applyDynamicStatus_R_mindustry_entities_units_StatusEntry)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_apply_mindustry_type_StatusEffect_float 1
typedef void (*func_mindustry_gen_Statusc_apply_mindustry_type_StatusEffect_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define INDEX_mindustry_gen_Statusc_apply_mindustry_type_StatusEffect 2
typedef void (*func_mindustry_gen_Statusc_apply_mindustry_type_StatusEffect)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Statusc_unapply_mindustry_type_StatusEffect 3
typedef void (*func_mindustry_gen_Statusc_unapply_mindustry_type_StatusEffect)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Statusc_statusDamageMultiplier_float 4
typedef void (*func_mindustry_gen_Statusc_statusDamageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_statusReloadMultiplier_float 5
typedef void (*func_mindustry_gen_Statusc_statusReloadMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_statusArmor_float 6
typedef void (*func_mindustry_gen_Statusc_statusArmor_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_statusBuildSpeed_float 7
typedef void (*func_mindustry_gen_Statusc_statusBuildSpeed_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_statusDrag_float 8
typedef void (*func_mindustry_gen_Statusc_statusDrag_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_statusMaxHealth_float 9
typedef void (*func_mindustry_gen_Statusc_statusMaxHealth_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_statusSpeed_float 10
typedef void (*func_mindustry_gen_Statusc_statusSpeed_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_statusColor_R_arc_graphics_Color 11
typedef jobject (*func_mindustry_gen_Statusc_statusColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_statusBits_R_arc_struct_Bits 12
typedef jobject (*func_mindustry_gen_Statusc_statusBits_R_arc_struct_Bits)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_disarmed_R_boolean 13
typedef jbool (*func_mindustry_gen_Statusc_disarmed_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_hasEffect_mindustry_type_StatusEffect_R_boolean 14
typedef jbool (*func_mindustry_gen_Statusc_hasEffect_mindustry_type_StatusEffect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Statusc_isBoss_R_boolean 15
typedef jbool (*func_mindustry_gen_Statusc_isBoss_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_isGrounded_R_boolean 16
typedef jbool (*func_mindustry_gen_Statusc_isGrounded_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_isImmune_mindustry_type_StatusEffect_R_boolean 17
typedef jbool (*func_mindustry_gen_Statusc_isImmune_mindustry_type_StatusEffect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Statusc_armorOverride_R_float 18
typedef jfloat (*func_mindustry_gen_Statusc_armorOverride_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_buildSpeedMultiplier_R_float 19
typedef jfloat (*func_mindustry_gen_Statusc_buildSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_damageMultiplier_R_float 20
typedef jfloat (*func_mindustry_gen_Statusc_damageMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_dragMultiplier_R_float 21
typedef jfloat (*func_mindustry_gen_Statusc_dragMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_getDuration_mindustry_type_StatusEffect_R_float 22
typedef jfloat (*func_mindustry_gen_Statusc_getDuration_mindustry_type_StatusEffect_R_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Statusc_healthMultiplier_R_float 23
typedef jfloat (*func_mindustry_gen_Statusc_healthMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_reloadMultiplier_R_float 24
typedef jfloat (*func_mindustry_gen_Statusc_reloadMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_speedMultiplier_R_float 25
typedef jfloat (*func_mindustry_gen_Statusc_speedMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_armorOverride_float 26
typedef void (*func_mindustry_gen_Statusc_armorOverride_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_buildSpeedMultiplier_float 27
typedef void (*func_mindustry_gen_Statusc_buildSpeedMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_clearStatuses 28
typedef void (*func_mindustry_gen_Statusc_clearStatuses)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_damageMultiplier_float 29
typedef void (*func_mindustry_gen_Statusc_damageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_disarmed_boolean 30
typedef void (*func_mindustry_gen_Statusc_disarmed_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Statusc_dragMultiplier_float 31
typedef void (*func_mindustry_gen_Statusc_dragMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_draw 32
typedef void (*func_mindustry_gen_Statusc_draw)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Statusc_healthMultiplier_float 33
typedef void (*func_mindustry_gen_Statusc_healthMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_reloadMultiplier_float 34
typedef void (*func_mindustry_gen_Statusc_reloadMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_setDuration_mindustry_type_StatusEffect_float 35
typedef void (*func_mindustry_gen_Statusc_setDuration_mindustry_type_StatusEffect_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define INDEX_mindustry_gen_Statusc_speedMultiplier_float 36
typedef void (*func_mindustry_gen_Statusc_speedMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Statusc_update 37
typedef void (*func_mindustry_gen_Statusc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Statusc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Statusc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
