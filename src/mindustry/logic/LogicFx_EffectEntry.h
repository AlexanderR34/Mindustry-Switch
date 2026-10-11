#ifndef HEADER_mindustry_logic_LogicFx$EffectEntry
#define HEADER_mindustry_logic_LogicFx$EffectEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LogicFx$EffectEntry {
	java_lang_Object parent;
	jref F_name;
	jref F_effect;
	jbool F_size;
	jbool F_rotate;
	jbool F_color;
	jref F_data;
	jfloat F_bounds;
} mindustry_logic_LogicFx$EffectEntry;

extern Class class_mindustry_logic_LogicFx$EffectEntry;


#define VTABLE_mindustry_logic_LogicFx$EffectEntry_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LogicFx$EffectEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LogicFx$EffectEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LogicFx$EffectEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LogicFx$EffectEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LogicFx$EffectEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_finalize 5
typedef void (*func_mindustry_logic_LogicFx$EffectEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_notify 6
typedef void (*func_mindustry_logic_LogicFx$EffectEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_notifyAll 7
typedef void (*func_mindustry_logic_LogicFx$EffectEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_wait 8
typedef void (*func_mindustry_logic_LogicFx$EffectEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_wait_long 9
typedef void (*func_mindustry_logic_LogicFx$EffectEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_wait_long_int 10
typedef void (*func_mindustry_logic_LogicFx$EffectEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_bounds_float_R_mindustry_logic_LogicFx$EffectEntry 11
typedef jobject (*func_mindustry_logic_LogicFx$EffectEntry_bounds_float_R_mindustry_logic_LogicFx$EffectEntry)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_name_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry 12
typedef jobject (*func_mindustry_logic_LogicFx$EffectEntry_name_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry 13
typedef jobject (*func_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry 14
typedef jobject (*func_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry 15
typedef jobject (*func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicFx$EffectEntry_data_java_lang_Class_R_mindustry_logic_LogicFx$EffectEntry 16
typedef jobject (*func_mindustry_logic_LogicFx$EffectEntry_data_java_lang_Class_R_mindustry_logic_LogicFx$EffectEntry)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LogicFx$EffectEntry(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LogicFx$EffectEntry(jcontext ctx);
void init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_logic_LogicFx$EffectEntry_bounds_float_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_logic_LogicFx$EffectEntry_name_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self);
jobject M_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self);
jobject M_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self);
jobject M_mindustry_logic_LogicFx$EffectEntry_data_java_lang_Class_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
