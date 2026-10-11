#ifndef HEADER_mindustry_io_SaveIO
#define HEADER_mindustry_io_SaveIO

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_SaveIO {
	java_lang_Object parent;
} mindustry_io_SaveIO;

extern Class class_mindustry_io_SaveIO;

extern jobject SF_mindustry_io_SaveIO_header;
extern jobject SF_mindustry_io_SaveIO_versions;
extern jobject SF_mindustry_io_SaveIO_versionArray;

#define VTABLE_mindustry_io_SaveIO_hashCode_R_int 0
typedef jint (*func_mindustry_io_SaveIO_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_SaveIO_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_SaveIO_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_SaveIO_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_SaveIO_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_SaveIO_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO_finalize 5
typedef void (*func_mindustry_io_SaveIO_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO_notify 6
typedef void (*func_mindustry_io_SaveIO_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO_notifyAll 7
typedef void (*func_mindustry_io_SaveIO_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO_wait 8
typedef void (*func_mindustry_io_SaveIO_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO_wait_long 9
typedef void (*func_mindustry_io_SaveIO_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_SaveIO_wait_long_int 10
typedef void (*func_mindustry_io_SaveIO_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_io_SaveIO(jobject object, jint mark, jint depth);
void clinit_mindustry_io_SaveIO(jcontext ctx);
void init_mindustry_io_SaveIO(jcontext ctx, jobject self);
jobject SM_mindustry_io_SaveIO_getSaveWriter_R_mindustry_io_SaveVersion(jcontext ctx);
jobject SM_mindustry_io_SaveIO_getSaveWriter_int_R_mindustry_io_SaveVersion(jcontext ctx, jint param0);
void SM_mindustry_io_SaveIO_save_arc_files_Fi(jcontext ctx, jobject param0);
void SM_mindustry_io_SaveIO_save_arc_files_Fi_mindustry_io_SaveOptions(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_io_SaveIO_getStream_arc_files_Fi_R_java_io_DataInputStream(jcontext ctx, jobject param0);
jobject SM_mindustry_io_SaveIO_getBackupStream_arc_files_Fi_R_java_io_DataInputStream(jcontext ctx, jobject param0);
jbool SM_mindustry_io_SaveIO_isSaveValid_arc_files_Fi_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_io_SaveIO_isSaveFileValid_arc_files_Fi_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_io_SaveIO_isSaveValid_java_io_DataInputStream_R_boolean(jcontext ctx, jobject param0);
jobject SM_mindustry_io_SaveIO_getMeta_arc_files_Fi_R_mindustry_io_SaveMeta(jcontext ctx, jobject param0);
jobject SM_mindustry_io_SaveIO_getMeta_java_io_DataInputStream_R_mindustry_io_SaveMeta(jcontext ctx, jobject param0);
jobject SM_mindustry_io_SaveIO_fileFor_int_R_arc_files_Fi(jcontext ctx, jint param0);
jobject SM_mindustry_io_SaveIO_backupFileFor_arc_files_Fi_R_arc_files_Fi(jcontext ctx, jobject param0);
void SM_mindustry_io_SaveIO_write_arc_files_Fi_mindustry_io_SaveOptions(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_io_SaveIO_write_arc_files_Fi(jcontext ctx, jobject param0);
void SM_mindustry_io_SaveIO_write_java_io_OutputStream_mindustry_io_SaveOptions(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_io_SaveIO_load_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_io_SaveIO_load_arc_files_Fi(jcontext ctx, jobject param0);
void SM_mindustry_io_SaveIO_load_arc_files_Fi_mindustry_world_WorldContext(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_io_SaveIO_load_java_io_InputStream_mindustry_world_WorldContext(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_io_SaveIO_getVersion_R_mindustry_io_SaveVersion(jcontext ctx);
void SM_mindustry_io_SaveIO_readHeader_java_io_DataInput(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
