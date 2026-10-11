#ifndef HEADER_mindustry_ctype_MappableContent
#define HEADER_mindustry_ctype_MappableContent

#include "Clearwing.h"
#include "mindustry/ctype/Content.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ctype_MappableContent {
	mindustry_ctype_Content parent;
	jref F_name;
} mindustry_ctype_MappableContent;

extern Class class_mindustry_ctype_MappableContent;


#define VTABLE_mindustry_ctype_MappableContent_hashCode_R_int 0
typedef jint (*func_mindustry_ctype_MappableContent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ctype_MappableContent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ctype_MappableContent_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ctype_MappableContent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ctype_MappableContent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ctype_MappableContent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_finalize 5
typedef void (*func_mindustry_ctype_MappableContent_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_notify 6
typedef void (*func_mindustry_ctype_MappableContent_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_notifyAll 7
typedef void (*func_mindustry_ctype_MappableContent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_wait 8
typedef void (*func_mindustry_ctype_MappableContent_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_wait_long 9
typedef void (*func_mindustry_ctype_MappableContent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ctype_MappableContent_wait_long_int 10
typedef void (*func_mindustry_ctype_MappableContent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ctype_MappableContent_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_ctype_MappableContent_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ctype_MappableContent_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_ctype_MappableContent_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_removeContent 13
typedef void (*func_mindustry_ctype_MappableContent_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_init 14
typedef void (*func_mindustry_ctype_MappableContent_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_postInit 15
typedef void (*func_mindustry_ctype_MappableContent_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_afterPatch 16
typedef void (*func_mindustry_ctype_MappableContent_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_load 17
typedef void (*func_mindustry_ctype_MappableContent_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_loadIcon 18
typedef void (*func_mindustry_ctype_MappableContent_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_ctype_MappableContent_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_ctype_MappableContent_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_isModded_R_boolean 21
typedef jbool (*func_mindustry_ctype_MappableContent_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_ctype_MappableContent_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_MappableContent_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_ctype_MappableContent_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ctype_MappableContent(jobject object, jint mark, jint depth);
void clinit_mindustry_ctype_MappableContent(jcontext ctx);
void init_mindustry_ctype_MappableContent_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ctype_MappableContent_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
