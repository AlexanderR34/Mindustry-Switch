#ifndef HEADER_mindustry_graphics_MultiPacker$PageType
#define HEADER_mindustry_graphics_MultiPacker$PageType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_MultiPacker$PageType {
	java_lang_Enum parent;
	jint F_width;
	jint F_height;
} mindustry_graphics_MultiPacker$PageType;

extern Class class_mindustry_graphics_MultiPacker$PageType;

extern jobject SF_mindustry_graphics_MultiPacker$PageType_main;
extern jobject SF_mindustry_graphics_MultiPacker$PageType_environment;
extern jobject SF_mindustry_graphics_MultiPacker$PageType_ui;
extern jobject SF_mindustry_graphics_MultiPacker$PageType_rubble;
extern jobject SF_mindustry_graphics_MultiPacker$PageType_all;
extern jobject SF_mindustry_graphics_MultiPacker$PageType_$VALUES;

#define VTABLE_mindustry_graphics_MultiPacker$PageType_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_MultiPacker$PageType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_MultiPacker$PageType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_MultiPacker$PageType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_MultiPacker$PageType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_MultiPacker$PageType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_finalize 5
typedef void (*func_mindustry_graphics_MultiPacker$PageType_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_notify 6
typedef void (*func_mindustry_graphics_MultiPacker$PageType_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_notifyAll 7
typedef void (*func_mindustry_graphics_MultiPacker$PageType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_wait 8
typedef void (*func_mindustry_graphics_MultiPacker$PageType_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_wait_long 9
typedef void (*func_mindustry_graphics_MultiPacker$PageType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_wait_long_int 10
typedef void (*func_mindustry_graphics_MultiPacker$PageType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_graphics_MultiPacker$PageType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_graphics_MultiPacker$PageType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_name_R_java_lang_String 13
typedef jobject (*func_mindustry_graphics_MultiPacker$PageType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_ordinal_R_int 14
typedef jint (*func_mindustry_graphics_MultiPacker$PageType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MultiPacker$PageType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_graphics_MultiPacker$PageType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_graphics_MultiPacker$PageType(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_MultiPacker$PageType(jcontext ctx);
jobject SM_mindustry_graphics_MultiPacker$PageType_values_R_Array1_mindustry_graphics_MultiPacker$PageType(jcontext ctx);
jobject SM_mindustry_graphics_MultiPacker$PageType_valueOf_java_lang_String_R_mindustry_graphics_MultiPacker$PageType(jcontext ctx, jobject param0);
void init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_graphics_MultiPacker$PageType_$values_R_Array1_mindustry_graphics_MultiPacker$PageType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
