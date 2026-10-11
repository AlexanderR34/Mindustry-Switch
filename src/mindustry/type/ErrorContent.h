#ifndef HEADER_mindustry_type_ErrorContent
#define HEADER_mindustry_type_ErrorContent

#include "Clearwing.h"
#include "mindustry/ctype/Content.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_ErrorContent {
	mindustry_ctype_Content parent;
} mindustry_type_ErrorContent;

extern Class class_mindustry_type_ErrorContent;


#define VTABLE_mindustry_type_ErrorContent_hashCode_R_int 0
typedef jint (*func_mindustry_type_ErrorContent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_ErrorContent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ErrorContent_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_ErrorContent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_ErrorContent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_ErrorContent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_finalize 5
typedef void (*func_mindustry_type_ErrorContent_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_notify 6
typedef void (*func_mindustry_type_ErrorContent_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_notifyAll 7
typedef void (*func_mindustry_type_ErrorContent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_wait 8
typedef void (*func_mindustry_type_ErrorContent_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_wait_long 9
typedef void (*func_mindustry_type_ErrorContent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_ErrorContent_wait_long_int 10
typedef void (*func_mindustry_type_ErrorContent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_ErrorContent_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_type_ErrorContent_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ErrorContent_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_type_ErrorContent_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_removeContent 13
typedef void (*func_mindustry_type_ErrorContent_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_init 14
typedef void (*func_mindustry_type_ErrorContent_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_postInit 15
typedef void (*func_mindustry_type_ErrorContent_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_afterPatch 16
typedef void (*func_mindustry_type_ErrorContent_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_load 17
typedef void (*func_mindustry_type_ErrorContent_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_loadIcon 18
typedef void (*func_mindustry_type_ErrorContent_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_type_ErrorContent_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_type_ErrorContent_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_isModded_R_boolean 21
typedef jbool (*func_mindustry_type_ErrorContent_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_type_ErrorContent_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ErrorContent_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_type_ErrorContent_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_type_ErrorContent(jobject object, jint mark, jint depth);
void clinit_mindustry_type_ErrorContent(jcontext ctx);
void init_mindustry_type_ErrorContent(jcontext ctx, jobject self);
jobject M_mindustry_type_ErrorContent_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
