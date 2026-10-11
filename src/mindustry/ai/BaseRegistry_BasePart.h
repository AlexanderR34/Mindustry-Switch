#ifndef HEADER_mindustry_ai_BaseRegistry$BasePart
#define HEADER_mindustry_ai_BaseRegistry$BasePart

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_BaseRegistry$BasePart {
	java_lang_Object parent;
	jref F_schematic;
	jint F_centerX;
	jint F_centerY;
	jref F_required;
	jref F_core;
	jfloat F_tier;
} mindustry_ai_BaseRegistry$BasePart;

extern Class class_mindustry_ai_BaseRegistry$BasePart;


#define VTABLE_mindustry_ai_BaseRegistry$BasePart_hashCode_R_int 0
typedef jint (*func_mindustry_ai_BaseRegistry$BasePart_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_BaseRegistry$BasePart_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_BaseRegistry$BasePart_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_BaseRegistry$BasePart_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_BaseRegistry$BasePart_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_finalize 5
typedef void (*func_mindustry_ai_BaseRegistry$BasePart_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_notify 6
typedef void (*func_mindustry_ai_BaseRegistry$BasePart_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_notifyAll 7
typedef void (*func_mindustry_ai_BaseRegistry$BasePart_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_wait 8
typedef void (*func_mindustry_ai_BaseRegistry$BasePart_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_wait_long 9
typedef void (*func_mindustry_ai_BaseRegistry$BasePart_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_wait_long_int 10
typedef void (*func_mindustry_ai_BaseRegistry$BasePart_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_ai_BaseRegistry$BasePart_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BaseRegistry$BasePart_compareTo_mindustry_ai_BaseRegistry$BasePart_R_int 12
typedef jint (*func_mindustry_ai_BaseRegistry$BasePart_compareTo_mindustry_ai_BaseRegistry$BasePart_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ai_BaseRegistry$BasePart(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_BaseRegistry$BasePart(jcontext ctx);
void init_mindustry_ai_BaseRegistry$BasePart_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_ai_BaseRegistry$BasePart_compareTo_mindustry_ai_BaseRegistry$BasePart_R_int(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_ai_BaseRegistry$BasePart_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
