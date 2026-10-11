#ifndef HEADER_mindustry_ui_Links
#define HEADER_mindustry_ui_Links

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Links {
	java_lang_Object parent;
} mindustry_ui_Links;

extern Class class_mindustry_ui_Links;

extern jobject SF_mindustry_ui_Links_links;

#define VTABLE_mindustry_ui_Links_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Links_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Links_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Links_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Links_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Links_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Links_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links_finalize 5
typedef void (*func_mindustry_ui_Links_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links_notify 6
typedef void (*func_mindustry_ui_Links_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links_notifyAll 7
typedef void (*func_mindustry_ui_Links_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links_wait 8
typedef void (*func_mindustry_ui_Links_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links_wait_long 9
typedef void (*func_mindustry_ui_Links_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Links_wait_long_int 10
typedef void (*func_mindustry_ui_Links_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_Links(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Links(jcontext ctx);
void init_mindustry_ui_Links(jcontext ctx, jobject self);
void SM_mindustry_ui_Links_createLinks(jcontext ctx);
jobject SM_mindustry_ui_Links_getLinks_R_Array1_mindustry_ui_Links$LinkEntry(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
