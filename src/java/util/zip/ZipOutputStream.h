#ifndef HEADER_java_util_zip_ZipOutputStream
#define HEADER_java_util_zip_ZipOutputStream

#include "Clearwing.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "java/util/zip/ZipConstants.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_ZipOutputStream {
	java_util_zip_DeflaterOutputStream parent;
	jref F_current;
	jref F_xentries;
	jref F_names;
	jref F_crc;
	jlong F_written;
	jlong F_locoff;
	jref F_comment;
	jint F_method;
	jbool F_finished;
	jbool F_closed;
} java_util_zip_ZipOutputStream;

extern Class class_java_util_zip_ZipOutputStream;

extern jint SF_java_util_zip_ZipOutputStream_STORED;
extern jint SF_java_util_zip_ZipOutputStream_DEFLATED;

#define VTABLE_java_util_zip_ZipOutputStream_hashCode_R_int 0
typedef jint (*func_java_util_zip_ZipOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_ZipOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_ZipOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_ZipOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_ZipOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_finalize 5
typedef void (*func_java_util_zip_ZipOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_notify 6
typedef void (*func_java_util_zip_ZipOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_notifyAll 7
typedef void (*func_java_util_zip_ZipOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_wait 8
typedef void (*func_java_util_zip_ZipOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_wait_long 9
typedef void (*func_java_util_zip_ZipOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipOutputStream_wait_long_int 10
typedef void (*func_java_util_zip_ZipOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_ZipOutputStream_close 11
typedef void (*func_java_util_zip_ZipOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_flush 12
typedef void (*func_java_util_zip_ZipOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_write_Array1_byte 13
typedef void (*func_java_util_zip_ZipOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipOutputStream_write_Array1_byte_int_int 14
typedef void (*func_java_util_zip_ZipOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_ZipOutputStream_write_int 15
typedef void (*func_java_util_zip_ZipOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_ZipOutputStream_checkError_R_boolean 16
typedef jbool (*func_java_util_zip_ZipOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_finish 17
typedef void (*func_java_util_zip_ZipOutputStream_finish)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_deflate 18
typedef void (*func_java_util_zip_ZipOutputStream_deflate)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_ensureOpen 19
typedef void (*func_java_util_zip_ZipOutputStream_ensureOpen)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_setComment_java_lang_String 20
typedef void (*func_java_util_zip_ZipOutputStream_setComment_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipOutputStream_setMethod_int 21
typedef void (*func_java_util_zip_ZipOutputStream_setMethod_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_ZipOutputStream_setLevel_int 22
typedef void (*func_java_util_zip_ZipOutputStream_setLevel_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry 23
typedef void (*func_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipOutputStream_closeEntry 24
typedef void (*func_java_util_zip_ZipOutputStream_closeEntry)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipOutputStream_writeLOC_java_util_zip_ZipOutputStream$XEntry 25
typedef void (*func_java_util_zip_ZipOutputStream_writeLOC_java_util_zip_ZipOutputStream$XEntry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipOutputStream_writeEXT_java_util_zip_ZipEntry 26
typedef void (*func_java_util_zip_ZipOutputStream_writeEXT_java_util_zip_ZipEntry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipOutputStream_writeCEN_java_util_zip_ZipOutputStream$XEntry 27
typedef void (*func_java_util_zip_ZipOutputStream_writeCEN_java_util_zip_ZipOutputStream$XEntry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipOutputStream_writeEND_long_long 28
typedef void (*func_java_util_zip_ZipOutputStream_writeEND_long_long)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_java_util_zip_ZipOutputStream_getExtraLen_Array1_byte_R_int 29
typedef jint (*func_java_util_zip_ZipOutputStream_getExtraLen_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipOutputStream_writeExtra_Array1_byte 30
typedef void (*func_java_util_zip_ZipOutputStream_writeExtra_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipOutputStream_writeByte_int 31
typedef void (*func_java_util_zip_ZipOutputStream_writeByte_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_ZipOutputStream_writeShort_int 32
typedef void (*func_java_util_zip_ZipOutputStream_writeShort_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_ZipOutputStream_writeInt_long 33
typedef void (*func_java_util_zip_ZipOutputStream_writeInt_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipOutputStream_writeLong_long 34
typedef void (*func_java_util_zip_ZipOutputStream_writeLong_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int 35
typedef void (*func_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_java_util_zip_ZipOutputStream(jobject object, jint mark, jint depth);
void clinit_java_util_zip_ZipOutputStream(jcontext ctx);
jint SM_java_util_zip_ZipOutputStream_version_java_util_zip_ZipEntry_R_int(jcontext ctx, jobject param0);
void M_java_util_zip_ZipOutputStream_ensureOpen(jcontext ctx, jobject self);
void init_java_util_zip_ZipOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
void init_java_util_zip_ZipOutputStream_java_io_OutputStream_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_zip_ZipOutputStream_setComment_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_ZipOutputStream_setMethod_int(jcontext ctx, jobject self, jint param0);
void M_java_util_zip_ZipOutputStream_setLevel_int(jcontext ctx, jobject self, jint param0);
void M_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_ZipOutputStream_closeEntry(jcontext ctx, jobject self);
void M_java_util_zip_ZipOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_util_zip_ZipOutputStream_finish(jcontext ctx, jobject self);
void M_java_util_zip_ZipOutputStream_close(jcontext ctx, jobject self);
void M_java_util_zip_ZipOutputStream_writeLOC_java_util_zip_ZipOutputStream$XEntry(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_ZipOutputStream_writeEXT_java_util_zip_ZipEntry(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_ZipOutputStream_writeCEN_java_util_zip_ZipOutputStream$XEntry(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_ZipOutputStream_writeEND_long_long(jcontext ctx, jobject self, jlong param0, jlong param1);
jint M_java_util_zip_ZipOutputStream_getExtraLen_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_ZipOutputStream_writeExtra_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_ZipOutputStream_writeByte_int(jcontext ctx, jobject self, jint param0);
void M_java_util_zip_ZipOutputStream_writeShort_int(jcontext ctx, jobject self, jint param0);
void M_java_util_zip_ZipOutputStream_writeInt_long(jcontext ctx, jobject self, jlong param0);
void M_java_util_zip_ZipOutputStream_writeLong_long(jcontext ctx, jobject self, jlong param0);
void M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
