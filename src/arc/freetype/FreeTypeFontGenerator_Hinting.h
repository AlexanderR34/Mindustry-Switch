#ifndef HEADER_arc_freetype_FreeTypeFontGenerator$Hinting
#define HEADER_arc_freetype_FreeTypeFontGenerator$Hinting

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeTypeFontGenerator$Hinting {
	java_lang_Enum parent;
} arc_freetype_FreeTypeFontGenerator$Hinting;

extern Class class_arc_freetype_FreeTypeFontGenerator$Hinting;

extern jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_none;
extern jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_slight;
extern jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_medium;
extern jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_full;
extern jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoSlight;
extern jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoMedium;
extern jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoFull;
extern jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_$VALUES;

#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeTypeFontGenerator$Hinting_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeTypeFontGenerator$Hinting_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$Hinting_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$Hinting_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$Hinting_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_finalize 5
typedef void (*func_arc_freetype_FreeTypeFontGenerator$Hinting_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_notify 6
typedef void (*func_arc_freetype_FreeTypeFontGenerator$Hinting_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_notifyAll 7
typedef void (*func_arc_freetype_FreeTypeFontGenerator$Hinting_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_wait 8
typedef void (*func_arc_freetype_FreeTypeFontGenerator$Hinting_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_wait_long 9
typedef void (*func_arc_freetype_FreeTypeFontGenerator$Hinting_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_wait_long_int 10
typedef void (*func_arc_freetype_FreeTypeFontGenerator$Hinting_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_freetype_FreeTypeFontGenerator$Hinting_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_freetype_FreeTypeFontGenerator$Hinting_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_name_R_java_lang_String 13
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$Hinting_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_ordinal_R_int 14
typedef jint (*func_arc_freetype_FreeTypeFontGenerator$Hinting_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$Hinting_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_freetype_FreeTypeFontGenerator$Hinting(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx);
jobject SM_arc_freetype_FreeTypeFontGenerator$Hinting_values_R_Array1_arc_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx);
jobject SM_arc_freetype_FreeTypeFontGenerator$Hinting_valueOf_java_lang_String_R_arc_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx, jobject param0);
void init_arc_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_freetype_FreeTypeFontGenerator$Hinting_$values_R_Array1_arc_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
