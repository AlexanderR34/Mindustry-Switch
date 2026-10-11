#ifndef HEADER_mindustry_ctype_ContentType
#define HEADER_mindustry_ctype_ContentType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ctype_ContentType {
	java_lang_Enum parent;
	jref F_contentClass;
	jref F_folderName;
} mindustry_ctype_ContentType;

extern Class class_mindustry_ctype_ContentType;

extern jobject SF_mindustry_ctype_ContentType_item;
extern jobject SF_mindustry_ctype_ContentType_block;
extern jobject SF_mindustry_ctype_ContentType_mech_UNUSED;
extern jobject SF_mindustry_ctype_ContentType_bullet;
extern jobject SF_mindustry_ctype_ContentType_liquid;
extern jobject SF_mindustry_ctype_ContentType_status;
extern jobject SF_mindustry_ctype_ContentType_unit;
extern jobject SF_mindustry_ctype_ContentType_weather;
extern jobject SF_mindustry_ctype_ContentType_effect_UNUSED;
extern jobject SF_mindustry_ctype_ContentType_sector;
extern jobject SF_mindustry_ctype_ContentType_loadout_UNUSED;
extern jobject SF_mindustry_ctype_ContentType_typeid_UNUSED;
extern jobject SF_mindustry_ctype_ContentType_error;
extern jobject SF_mindustry_ctype_ContentType_planet;
extern jobject SF_mindustry_ctype_ContentType_ammo_UNUSED;
extern jobject SF_mindustry_ctype_ContentType_team;
extern jobject SF_mindustry_ctype_ContentType_unitCommand;
extern jobject SF_mindustry_ctype_ContentType_unitStance;
extern jobject SF_mindustry_ctype_ContentType_all;
extern jobject SF_mindustry_ctype_ContentType_$VALUES;

#define VTABLE_mindustry_ctype_ContentType_hashCode_R_int 0
typedef jint (*func_mindustry_ctype_ContentType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_ContentType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ctype_ContentType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ctype_ContentType_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ctype_ContentType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_ContentType_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ctype_ContentType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_ContentType_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ctype_ContentType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_ContentType_finalize 5
typedef void (*func_mindustry_ctype_ContentType_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_ContentType_notify 6
typedef void (*func_mindustry_ctype_ContentType_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_ContentType_notifyAll 7
typedef void (*func_mindustry_ctype_ContentType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_ContentType_wait 8
typedef void (*func_mindustry_ctype_ContentType_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_ContentType_wait_long 9
typedef void (*func_mindustry_ctype_ContentType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ctype_ContentType_wait_long_int 10
typedef void (*func_mindustry_ctype_ContentType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ctype_ContentType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_ctype_ContentType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ctype_ContentType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_ctype_ContentType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String 13
typedef jobject (*func_mindustry_ctype_ContentType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_ContentType_ordinal_R_int 14
typedef jint (*func_mindustry_ctype_ContentType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_ContentType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_ctype_ContentType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_ctype_ContentType(jobject object, jint mark, jint depth);
void clinit_mindustry_ctype_ContentType(jcontext ctx);
jobject SM_mindustry_ctype_ContentType_values_R_Array1_mindustry_ctype_ContentType(jcontext ctx);
jobject SM_mindustry_ctype_ContentType_valueOf_java_lang_String_R_mindustry_ctype_ContentType(jcontext ctx, jobject param0);
void init_mindustry_ctype_ContentType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
jobject SM_mindustry_ctype_ContentType_$values_R_Array1_mindustry_ctype_ContentType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
