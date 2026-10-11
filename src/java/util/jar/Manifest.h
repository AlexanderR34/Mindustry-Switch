#ifndef HEADER_java_util_jar_Manifest
#define HEADER_java_util_jar_Manifest

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_jar_Manifest {
	java_lang_Object parent;
	jref F_mainAttributes;
	jref F_entries;
	jref F_chunks;
	jint F_mainEnd;
} java_util_jar_Manifest;

extern Class class_java_util_jar_Manifest;

extern jint SF_java_util_jar_Manifest_LINE_LENGTH_LIMIT;
extern jobject SF_java_util_jar_Manifest_LINE_SEPARATOR;
extern jobject SF_java_util_jar_Manifest_VALUE_SEPARATOR;
extern jobject SF_java_util_jar_Manifest_BAIS_BUF;
extern jobject SF_java_util_jar_Manifest_BAIS_POS;

#define VTABLE_java_util_jar_Manifest_hashCode_R_int 0
typedef jint (*func_java_util_jar_Manifest_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_jar_Manifest_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Manifest_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_jar_Manifest_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_jar_Manifest_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_toString_R_java_lang_String 4
typedef jobject (*func_java_util_jar_Manifest_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_finalize 5
typedef void (*func_java_util_jar_Manifest_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_notify 6
typedef void (*func_java_util_jar_Manifest_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_notifyAll 7
typedef void (*func_java_util_jar_Manifest_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_wait 8
typedef void (*func_java_util_jar_Manifest_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_wait_long 9
typedef void (*func_java_util_jar_Manifest_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_jar_Manifest_wait_long_int 10
typedef void (*func_java_util_jar_Manifest_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_jar_Manifest_clear 11
typedef void (*func_java_util_jar_Manifest_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_getAttributes_java_lang_String_R_java_util_jar_Attributes 12
typedef jobject (*func_java_util_jar_Manifest_getAttributes_java_lang_String_R_java_util_jar_Attributes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Manifest_getEntries_R_java_util_Map 13
typedef jobject (*func_java_util_jar_Manifest_getEntries_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_getMainAttributes_R_java_util_jar_Attributes 14
typedef jobject (*func_java_util_jar_Manifest_getMainAttributes_R_java_util_jar_Attributes)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_write_java_io_OutputStream 15
typedef void (*func_java_util_jar_Manifest_write_java_io_OutputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Manifest_read_java_io_InputStream 16
typedef void (*func_java_util_jar_Manifest_read_java_io_InputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Manifest_getChunk_java_lang_String_R_java_util_jar_Manifest$Chunk 17
typedef jobject (*func_java_util_jar_Manifest_getChunk_java_lang_String_R_java_util_jar_Manifest$Chunk)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Manifest_removeChunks 18
typedef void (*func_java_util_jar_Manifest_removeChunks)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Manifest_getMainAttributesEnd_R_int 19
typedef jint (*func_java_util_jar_Manifest_getMainAttributesEnd_R_int)(jcontext ctx, jobject self);

void mark_java_util_jar_Manifest(jobject object, jint mark, jint depth);
void clinit_java_util_jar_Manifest(jcontext ctx);
jobject SM_java_util_jar_Manifest_getByteArrayInputStreamField_java_lang_String_R_java_lang_reflect_Field(jcontext ctx, jobject param0);
void init_java_util_jar_Manifest(jcontext ctx, jobject self);
void init_java_util_jar_Manifest_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
void init_java_util_jar_Manifest_java_util_jar_Manifest(jcontext ctx, jobject self, jobject param0);
void init_java_util_jar_Manifest_java_io_InputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_java_util_jar_Manifest_clear(jcontext ctx, jobject self);
jobject M_java_util_jar_Manifest_getAttributes_java_lang_String_R_java_util_jar_Attributes(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_jar_Manifest_getEntries_R_java_util_Map(jcontext ctx, jobject self);
jobject M_java_util_jar_Manifest_getMainAttributes_R_java_util_jar_Attributes(jcontext ctx, jobject self);
jobject M_java_util_jar_Manifest_clone_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_jar_Manifest_write_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
void M_java_util_jar_Manifest_read_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
jobject SM_java_util_jar_Manifest_exposeByteArrayInputStreamBytes_java_io_ByteArrayInputStream_R_Array1_byte(jcontext ctx, jobject param0);
jint M_java_util_jar_Manifest_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_util_jar_Manifest_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_jar_Manifest_getChunk_java_lang_String_R_java_util_jar_Manifest$Chunk(jcontext ctx, jobject self, jobject param0);
void M_java_util_jar_Manifest_removeChunks(jcontext ctx, jobject self);
jint M_java_util_jar_Manifest_getMainAttributesEnd_R_int(jcontext ctx, jobject self);
void SM_java_util_jar_Manifest_write_java_util_jar_Manifest_java_io_OutputStream(jcontext ctx, jobject param0, jobject param1);
void SM_java_util_jar_Manifest_writeEntry_java_io_OutputStream_java_util_jar_Attributes$Name_java_lang_String_java_nio_charset_CharsetEncoder_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);

#ifdef __cplusplus
}
#endif

#endif
