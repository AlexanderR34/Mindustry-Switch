#ifndef HEADER_mindustry_ctype_Content
#define HEADER_mindustry_ctype_Content

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ctype_Content {
	java_lang_Object parent;
	jshort F_id;
	jref F_minfo;
	jbool F_removed;
} mindustry_ctype_Content;

extern Class class_mindustry_ctype_Content;


#define VTABLE_mindustry_ctype_Content_hashCode_R_int 0
typedef jint (*func_mindustry_ctype_Content_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ctype_Content_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ctype_Content_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ctype_Content_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ctype_Content_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ctype_Content_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_finalize 5
typedef void (*func_mindustry_ctype_Content_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_notify 6
typedef void (*func_mindustry_ctype_Content_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_notifyAll 7
typedef void (*func_mindustry_ctype_Content_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_wait 8
typedef void (*func_mindustry_ctype_Content_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_wait_long 9
typedef void (*func_mindustry_ctype_Content_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ctype_Content_wait_long_int 10
typedef void (*func_mindustry_ctype_Content_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ctype_Content_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_ctype_Content_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_removeContent 13
typedef void (*func_mindustry_ctype_Content_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_init 14
typedef void (*func_mindustry_ctype_Content_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_postInit 15
typedef void (*func_mindustry_ctype_Content_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_afterPatch 16
typedef void (*func_mindustry_ctype_Content_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_load 17
typedef void (*func_mindustry_ctype_Content_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_loadIcon 18
typedef void (*func_mindustry_ctype_Content_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_ctype_Content_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_ctype_Content_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_isModded_R_boolean 21
typedef jbool (*func_mindustry_ctype_Content_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_ctype_Content_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ctype_Content(jobject object, jint mark, jint depth);
void clinit_mindustry_ctype_Content(jcontext ctx);
void init_mindustry_ctype_Content(jcontext ctx, jobject self);
void M_mindustry_ctype_Content_removeContent(jcontext ctx, jobject self);
void M_mindustry_ctype_Content_init(jcontext ctx, jobject self);
void M_mindustry_ctype_Content_postInit(jcontext ctx, jobject self);
void M_mindustry_ctype_Content_afterPatch(jcontext ctx, jobject self);
void M_mindustry_ctype_Content_load(jcontext ctx, jobject self);
void M_mindustry_ctype_Content_loadIcon(jcontext ctx, jobject self);
jbool M_mindustry_ctype_Content_hasErrored_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_ctype_Content_isVanilla_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_ctype_Content_isModded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_ctype_Content_isPatchContent_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ctype_Content_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
