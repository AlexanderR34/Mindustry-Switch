#ifndef HEADER_arc_scene_event_Touchable
#define HEADER_arc_scene_event_Touchable

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_Touchable {
	java_lang_Enum parent;
} arc_scene_event_Touchable;

extern Class class_arc_scene_event_Touchable;

extern jobject SF_arc_scene_event_Touchable_enabled;
extern jobject SF_arc_scene_event_Touchable_disabled;
extern jobject SF_arc_scene_event_Touchable_childrenOnly;
extern jobject SF_arc_scene_event_Touchable_$VALUES;

#define VTABLE_arc_scene_event_Touchable_hashCode_R_int 0
typedef jint (*func_arc_scene_event_Touchable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_Touchable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_Touchable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_Touchable_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_Touchable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_Touchable_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_Touchable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_Touchable_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_Touchable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_Touchable_finalize 5
typedef void (*func_arc_scene_event_Touchable_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_Touchable_notify 6
typedef void (*func_arc_scene_event_Touchable_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_Touchable_notifyAll 7
typedef void (*func_arc_scene_event_Touchable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_Touchable_wait 8
typedef void (*func_arc_scene_event_Touchable_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_Touchable_wait_long 9
typedef void (*func_arc_scene_event_Touchable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_Touchable_wait_long_int 10
typedef void (*func_arc_scene_event_Touchable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_Touchable_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_scene_event_Touchable_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_Touchable_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_scene_event_Touchable_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_Touchable_name_R_java_lang_String 13
typedef jobject (*func_arc_scene_event_Touchable_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_Touchable_ordinal_R_int 14
typedef jint (*func_arc_scene_event_Touchable_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_Touchable_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_scene_event_Touchable_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_scene_event_Touchable(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_Touchable(jcontext ctx);
jobject SM_arc_scene_event_Touchable_values_R_Array1_arc_scene_event_Touchable(jcontext ctx);
jobject SM_arc_scene_event_Touchable_valueOf_java_lang_String_R_arc_scene_event_Touchable(jcontext ctx, jobject param0);
void init_arc_scene_event_Touchable_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_scene_event_Touchable_$values_R_Array1_arc_scene_event_Touchable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
