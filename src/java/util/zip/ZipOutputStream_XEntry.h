#ifndef HEADER_java_util_zip_ZipOutputStream$XEntry
#define HEADER_java_util_zip_ZipOutputStream$XEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_ZipOutputStream$XEntry {
	java_lang_Object parent;
	jref F_entry;
	jlong F_offset;
} java_util_zip_ZipOutputStream$XEntry;

extern Class class_java_util_zip_ZipOutputStream$XEntry;


#define VTABLE_java_util_zip_ZipOutputStream$XEntry_hashCode_R_int 0
typedef jint (*func_java_util_zip_ZipOutputStream$XEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream$XEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_ZipOutputStream$XEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipOutputStream$XEntry_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_ZipOutputStream$XEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream$XEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_ZipOutputStream$XEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream$XEntry_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_ZipOutputStream$XEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream$XEntry_finalize 5
typedef void (*func_java_util_zip_ZipOutputStream$XEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream$XEntry_notify 6
typedef void (*func_java_util_zip_ZipOutputStream$XEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream$XEntry_notifyAll 7
typedef void (*func_java_util_zip_ZipOutputStream$XEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream$XEntry_wait 8
typedef void (*func_java_util_zip_ZipOutputStream$XEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream$XEntry_wait_long 9
typedef void (*func_java_util_zip_ZipOutputStream$XEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipOutputStream$XEntry_wait_long_int 10
typedef void (*func_java_util_zip_ZipOutputStream$XEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_zip_ZipOutputStream$XEntry(jobject object, jint mark, jint depth);
void clinit_java_util_zip_ZipOutputStream$XEntry(jcontext ctx);
void init_java_util_zip_ZipOutputStream$XEntry_java_util_zip_ZipEntry_long(jcontext ctx, jobject self, jobject param0, jlong param1);

#ifdef __cplusplus
}
#endif

#endif
