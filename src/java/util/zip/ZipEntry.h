#ifndef HEADER_java_util_zip_ZipEntry
#define HEADER_java_util_zip_ZipEntry

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/zip/ZipConstants.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_ZipEntry {
	java_lang_Object parent;
	jref F_name;
	jlong F_xdostime;
	jlong F_crc;
	jlong F_size;
	jlong F_csize;
	jint F_method;
	jint F_flag;
	jref F_extra;
	jref F_comment;
} java_util_zip_ZipEntry;

extern Class class_java_util_zip_ZipEntry;

extern jint SF_java_util_zip_ZipEntry_STORED;
extern jint SF_java_util_zip_ZipEntry_DEFLATED;

#define VTABLE_java_util_zip_ZipEntry_hashCode_R_int 0
typedef jint (*func_java_util_zip_ZipEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_ZipEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipEntry_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_ZipEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_ZipEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_ZipEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_finalize 5
typedef void (*func_java_util_zip_ZipEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_notify 6
typedef void (*func_java_util_zip_ZipEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_notifyAll 7
typedef void (*func_java_util_zip_ZipEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_wait 8
typedef void (*func_java_util_zip_ZipEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_wait_long 9
typedef void (*func_java_util_zip_ZipEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipEntry_wait_long_int 10
typedef void (*func_java_util_zip_ZipEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_ZipEntry_getName_R_java_lang_String 11
typedef jobject (*func_java_util_zip_ZipEntry_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_setTime_long 12
typedef void (*func_java_util_zip_ZipEntry_setTime_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipEntry_getTime_R_long 13
typedef jlong (*func_java_util_zip_ZipEntry_getTime_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_setSize_long 14
typedef void (*func_java_util_zip_ZipEntry_setSize_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipEntry_getSize_R_long 15
typedef jlong (*func_java_util_zip_ZipEntry_getSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_getCompressedSize_R_long 16
typedef jlong (*func_java_util_zip_ZipEntry_getCompressedSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_setCompressedSize_long 17
typedef void (*func_java_util_zip_ZipEntry_setCompressedSize_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipEntry_setCrc_long 18
typedef void (*func_java_util_zip_ZipEntry_setCrc_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipEntry_getCrc_R_long 19
typedef jlong (*func_java_util_zip_ZipEntry_getCrc_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_setMethod_int 20
typedef void (*func_java_util_zip_ZipEntry_setMethod_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_ZipEntry_getMethod_R_int 21
typedef jint (*func_java_util_zip_ZipEntry_getMethod_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_setExtra_Array1_byte 22
typedef void (*func_java_util_zip_ZipEntry_setExtra_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipEntry_setExtra0_Array1_byte_boolean_boolean 23
typedef void (*func_java_util_zip_ZipEntry_setExtra0_Array1_byte_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
#define VTABLE_java_util_zip_ZipEntry_getExtra_R_Array1_byte 24
typedef jobject (*func_java_util_zip_ZipEntry_getExtra_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_setComment_java_lang_String 25
typedef void (*func_java_util_zip_ZipEntry_setComment_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipEntry_getComment_R_java_lang_String 26
typedef jobject (*func_java_util_zip_ZipEntry_getComment_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipEntry_isDirectory_R_boolean 27
typedef jbool (*func_java_util_zip_ZipEntry_isDirectory_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_zip_ZipEntry(jobject object, jint mark, jint depth);
void clinit_java_util_zip_ZipEntry(jcontext ctx);
void init_java_util_zip_ZipEntry_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_util_zip_ZipEntry_java_util_zip_ZipEntry(jcontext ctx, jobject self, jobject param0);
void init_java_util_zip_ZipEntry(jcontext ctx, jobject self);
jobject M_java_util_zip_ZipEntry_getName_R_java_lang_String(jcontext ctx, jobject self);
void M_java_util_zip_ZipEntry_setTime_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_zip_ZipEntry_getTime_R_long(jcontext ctx, jobject self);
void M_java_util_zip_ZipEntry_setSize_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_zip_ZipEntry_getSize_R_long(jcontext ctx, jobject self);
jlong M_java_util_zip_ZipEntry_getCompressedSize_R_long(jcontext ctx, jobject self);
void M_java_util_zip_ZipEntry_setCompressedSize_long(jcontext ctx, jobject self, jlong param0);
void M_java_util_zip_ZipEntry_setCrc_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_zip_ZipEntry_getCrc_R_long(jcontext ctx, jobject self);
void M_java_util_zip_ZipEntry_setMethod_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_zip_ZipEntry_getMethod_R_int(jcontext ctx, jobject self);
void M_java_util_zip_ZipEntry_setExtra_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_ZipEntry_setExtra0_Array1_byte_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
jobject M_java_util_zip_ZipEntry_getExtra_R_Array1_byte(jcontext ctx, jobject self);
void M_java_util_zip_ZipEntry_setComment_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_zip_ZipEntry_getComment_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_util_zip_ZipEntry_isDirectory_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_zip_ZipEntry_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_util_zip_ZipEntry_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_util_zip_ZipEntry_clone_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
