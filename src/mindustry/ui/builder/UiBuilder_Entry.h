#ifndef HEADER_mindustry_ui_builder_UiBuilder$Entry
#define HEADER_mindustry_ui_builder_UiBuilder$Entry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_builder_UiBuilder$Entry {
	java_lang_Object parent;
	jref F_key;
	jref F_value;
} mindustry_ui_builder_UiBuilder$Entry;

extern Class class_mindustry_ui_builder_UiBuilder$Entry;


#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_hashCode_R_int 0
typedef jint (*func_mindustry_ui_builder_UiBuilder$Entry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_builder_UiBuilder$Entry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_builder_UiBuilder$Entry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_builder_UiBuilder$Entry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_builder_UiBuilder$Entry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_finalize 5
typedef void (*func_mindustry_ui_builder_UiBuilder$Entry_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_notify 6
typedef void (*func_mindustry_ui_builder_UiBuilder$Entry_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_notifyAll 7
typedef void (*func_mindustry_ui_builder_UiBuilder$Entry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_wait 8
typedef void (*func_mindustry_ui_builder_UiBuilder$Entry_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_wait_long 9
typedef void (*func_mindustry_ui_builder_UiBuilder$Entry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_builder_UiBuilder$Entry_wait_long_int 10
typedef void (*func_mindustry_ui_builder_UiBuilder$Entry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_builder_UiBuilder$Entry(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_builder_UiBuilder$Entry(jcontext ctx);
void init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_ui_builder_UiBuilder$Entry_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
