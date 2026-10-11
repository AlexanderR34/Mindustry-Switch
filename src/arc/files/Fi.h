#ifndef HEADER_arc_files_Fi
#define HEADER_arc_files_Fi

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_files_Fi {
	java_lang_Object parent;
	jref F_file;
	jref F_type;
} arc_files_Fi;

extern Class class_arc_files_Fi;


#define VTABLE_arc_files_Fi_hashCode_R_int 0
typedef jint (*func_arc_files_Fi_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_files_Fi_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_clone_R_java_lang_Object 2
typedef jobject (*func_arc_files_Fi_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_files_Fi_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_toString_R_java_lang_String 4
typedef jobject (*func_arc_files_Fi_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_finalize 5
typedef void (*func_arc_files_Fi_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_notify 6
typedef void (*func_arc_files_Fi_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_notifyAll 7
typedef void (*func_arc_files_Fi_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_wait 8
typedef void (*func_arc_files_Fi_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_wait_long 9
typedef void (*func_arc_files_Fi_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_files_Fi_wait_long_int 10
typedef void (*func_arc_files_Fi_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_files_Fi_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_files_Fi_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_path_R_java_lang_String 12
typedef jobject (*func_arc_files_Fi_path_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_absolutePath_R_java_lang_String 13
typedef jobject (*func_arc_files_Fi_absolutePath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_name_R_java_lang_String 14
typedef jobject (*func_arc_files_Fi_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_extEquals_java_lang_String_R_boolean 15
typedef jbool (*func_arc_files_Fi_extEquals_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_extension_R_java_lang_String 16
typedef jobject (*func_arc_files_Fi_extension_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String 17
typedef jobject (*func_arc_files_Fi_nameWithoutExtension_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_pathWithoutExtension_R_java_lang_String 18
typedef jobject (*func_arc_files_Fi_pathWithoutExtension_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_type_R_arc_Files$FileType 19
typedef jobject (*func_arc_files_Fi_type_R_arc_Files$FileType)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_file_R_java_io_File 20
typedef jobject (*func_arc_files_Fi_file_R_java_io_File)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_sha256_R_Array1_byte 21
typedef jobject (*func_arc_files_Fi_sha256_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_read_R_java_io_InputStream 22
typedef jobject (*func_arc_files_Fi_read_R_java_io_InputStream)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream 23
typedef jobject (*func_arc_files_Fi_read_int_R_java_io_BufferedInputStream)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_files_Fi_reader_R_java_io_Reader 24
typedef jobject (*func_arc_files_Fi_reader_R_java_io_Reader)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_reader_java_lang_String_R_java_io_Reader 25
typedef jobject (*func_arc_files_Fi_reader_java_lang_String_R_java_io_Reader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_reader_int_R_java_io_BufferedReader 26
typedef jobject (*func_arc_files_Fi_reader_int_R_java_io_BufferedReader)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_files_Fi_reader_int_java_lang_String_R_java_io_BufferedReader 27
typedef jobject (*func_arc_files_Fi_reader_int_java_lang_String_R_java_io_BufferedReader)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_files_Fi_readString_R_java_lang_String 28
typedef jobject (*func_arc_files_Fi_readString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_readString_java_lang_String_R_java_lang_String 29
typedef jobject (*func_arc_files_Fi_readString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_readBytes_R_Array1_byte 30
typedef jobject (*func_arc_files_Fi_readBytes_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_readByteStream_R_java_io_ByteArrayInputStream 31
typedef jobject (*func_arc_files_Fi_readByteStream_R_java_io_ByteArrayInputStream)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_estimateLength_R_int 32
typedef jint (*func_arc_files_Fi_estimateLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_readBytes_Array1_byte_int_int_R_int 33
typedef jint (*func_arc_files_Fi_readBytes_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_files_Fi_map_R_java_nio_ByteBuffer 34
typedef jobject (*func_arc_files_Fi_map_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer 35
typedef jobject (*func_arc_files_Fi_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_writes_boolean_R_arc_util_io_Writes 36
typedef jobject (*func_arc_files_Fi_writes_boolean_R_arc_util_io_Writes)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_files_Fi_writes_R_arc_util_io_Writes 37
typedef jobject (*func_arc_files_Fi_writes_R_arc_util_io_Writes)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_reads_R_arc_util_io_Reads 38
typedef jobject (*func_arc_files_Fi_reads_R_arc_util_io_Reads)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_writesDeflate_R_arc_util_io_Writes 39
typedef jobject (*func_arc_files_Fi_writesDeflate_R_arc_util_io_Writes)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_readsDeflate_R_arc_util_io_Reads 40
typedef jobject (*func_arc_files_Fi_readsDeflate_R_arc_util_io_Reads)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_write_R_java_io_OutputStream 41
typedef jobject (*func_arc_files_Fi_write_R_java_io_OutputStream)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_write_boolean_R_java_io_OutputStream 42
typedef jobject (*func_arc_files_Fi_write_boolean_R_java_io_OutputStream)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_files_Fi_write_boolean_int_R_java_io_OutputStream 43
typedef jobject (*func_arc_files_Fi_write_boolean_int_R_java_io_OutputStream)(jcontext ctx, jobject self, jbool param0, jint param1);
#define VTABLE_arc_files_Fi_write_java_io_InputStream_boolean 44
typedef void (*func_arc_files_Fi_write_java_io_InputStream_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_files_Fi_writer_boolean_R_java_io_Writer 45
typedef jobject (*func_arc_files_Fi_writer_boolean_R_java_io_Writer)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_files_Fi_writer_boolean_java_lang_String_R_java_io_Writer 46
typedef jobject (*func_arc_files_Fi_writer_boolean_java_lang_String_R_java_io_Writer)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_arc_files_Fi_writePng_arc_graphics_Pixmap 47
typedef void (*func_arc_files_Fi_writePng_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_writeString_java_lang_String 48
typedef void (*func_arc_files_Fi_writeString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_writeString_java_lang_String_boolean 49
typedef void (*func_arc_files_Fi_writeString_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_files_Fi_writeString_java_lang_String_boolean_java_lang_String 50
typedef void (*func_arc_files_Fi_writeString_java_lang_String_boolean_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_arc_files_Fi_writeBytes_Array1_byte 51
typedef void (*func_arc_files_Fi_writeBytes_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_writeBytes_Array1_byte_boolean 52
typedef void (*func_arc_files_Fi_writeBytes_Array1_byte_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_files_Fi_writeBytes_Array1_byte_int_int_boolean 53
typedef void (*func_arc_files_Fi_writeBytes_Array1_byte_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_arc_files_Fi_walk_arc_func_Cons 54
typedef void (*func_arc_files_Fi_walk_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq 55
typedef jobject (*func_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_findAll_R_arc_struct_Seq 56
typedef jobject (*func_arc_files_Fi_findAll_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_seq_R_arc_struct_Seq 57
typedef jobject (*func_arc_files_Fi_seq_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi 58
typedef jobject (*func_arc_files_Fi_list_R_Array1_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_list_java_io_FileFilter_R_Array1_arc_files_Fi 59
typedef jobject (*func_arc_files_Fi_list_java_io_FileFilter_R_Array1_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_list_java_io_FilenameFilter_R_Array1_arc_files_Fi 60
typedef jobject (*func_arc_files_Fi_list_java_io_FilenameFilter_R_Array1_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_list_java_lang_String_R_Array1_arc_files_Fi 61
typedef jobject (*func_arc_files_Fi_list_java_lang_String_R_Array1_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_isDirectory_R_boolean 62
typedef jbool (*func_arc_files_Fi_isDirectory_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi 63
typedef jobject (*func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi 64
typedef jobject (*func_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_parent_R_arc_files_Fi 65
typedef jobject (*func_arc_files_Fi_parent_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_mkdirs_R_boolean 66
typedef jbool (*func_arc_files_Fi_mkdirs_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_exists_R_boolean 67
typedef jbool (*func_arc_files_Fi_exists_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_delete_R_boolean 68
typedef jbool (*func_arc_files_Fi_delete_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_deleteDirectory_R_boolean 69
typedef jbool (*func_arc_files_Fi_deleteDirectory_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_emptyDirectory 70
typedef void (*func_arc_files_Fi_emptyDirectory)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_emptyDirectory_boolean 71
typedef void (*func_arc_files_Fi_emptyDirectory_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_files_Fi_copyTo_arc_files_Fi 72
typedef void (*func_arc_files_Fi_copyTo_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_copyFilesTo_arc_files_Fi 73
typedef void (*func_arc_files_Fi_copyFilesTo_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_moveTo_arc_files_Fi 74
typedef void (*func_arc_files_Fi_moveTo_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_files_Fi_length_R_long 75
typedef jlong (*func_arc_files_Fi_length_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_lastModified_R_long 76
typedef jlong (*func_arc_files_Fi_lastModified_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_files_Fi_compareTo_arc_files_Fi_R_int 77
typedef jint (*func_arc_files_Fi_compareTo_arc_files_Fi_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_arc_files_Fi(jobject object, jint mark, jint depth);
void clinit_arc_files_Fi(jcontext ctx);
void init_arc_files_Fi(jcontext ctx, jobject self);
void init_arc_files_Fi_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_arc_files_Fi_java_io_File(jcontext ctx, jobject self, jobject param0);
void init_arc_files_Fi_java_lang_String_arc_Files$FileType(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_files_Fi_java_io_File_arc_Files$FileType(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_arc_files_Fi_get_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject param0);
jobject SM_arc_files_Fi_tempFile_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject param0);
jobject SM_arc_files_Fi_tempDirectory_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject param0);
void SM_arc_files_Fi_emptyDirectory_java_io_File_boolean(jcontext ctx, jobject param0, jbool param1);
jbool SM_arc_files_Fi_deleteDirectory_java_io_File_R_boolean(jcontext ctx, jobject param0);
void SM_arc_files_Fi_copyFile_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);
void SM_arc_files_Fi_copyDirectory_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);
jobject M_arc_files_Fi_path_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_files_Fi_absolutePath_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_files_Fi_name_R_java_lang_String(jcontext ctx, jobject self);
jbool M_arc_files_Fi_extEquals_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_extension_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_files_Fi_nameWithoutExtension_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_files_Fi_pathWithoutExtension_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_files_Fi_type_R_arc_Files$FileType(jcontext ctx, jobject self);
jobject M_arc_files_Fi_file_R_java_io_File(jcontext ctx, jobject self);
jobject M_arc_files_Fi_sha256_R_Array1_byte(jcontext ctx, jobject self);
jobject M_arc_files_Fi_read_R_java_io_InputStream(jcontext ctx, jobject self);
jobject M_arc_files_Fi_read_int_R_java_io_BufferedInputStream(jcontext ctx, jobject self, jint param0);
jobject M_arc_files_Fi_reader_R_java_io_Reader(jcontext ctx, jobject self);
jobject M_arc_files_Fi_reader_java_lang_String_R_java_io_Reader(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_reader_int_R_java_io_BufferedReader(jcontext ctx, jobject self, jint param0);
jobject M_arc_files_Fi_reader_int_java_lang_String_R_java_io_BufferedReader(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_arc_files_Fi_readString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_files_Fi_readString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_readBytes_R_Array1_byte(jcontext ctx, jobject self);
jobject M_arc_files_Fi_readByteStream_R_java_io_ByteArrayInputStream(jcontext ctx, jobject self);
jint M_arc_files_Fi_estimateLength_R_int(jcontext ctx, jobject self);
jint M_arc_files_Fi_readBytes_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_arc_files_Fi_map_R_java_nio_ByteBuffer(jcontext ctx, jobject self);
jobject M_arc_files_Fi_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_writes_boolean_R_arc_util_io_Writes(jcontext ctx, jobject self, jbool param0);
jobject M_arc_files_Fi_writes_R_arc_util_io_Writes(jcontext ctx, jobject self);
jobject M_arc_files_Fi_reads_R_arc_util_io_Reads(jcontext ctx, jobject self);
jobject M_arc_files_Fi_writesDeflate_R_arc_util_io_Writes(jcontext ctx, jobject self);
jobject M_arc_files_Fi_readsDeflate_R_arc_util_io_Reads(jcontext ctx, jobject self);
jobject M_arc_files_Fi_write_R_java_io_OutputStream(jcontext ctx, jobject self);
jobject M_arc_files_Fi_write_boolean_R_java_io_OutputStream(jcontext ctx, jobject self, jbool param0);
jobject M_arc_files_Fi_write_boolean_int_R_java_io_OutputStream(jcontext ctx, jobject self, jbool param0, jint param1);
void M_arc_files_Fi_write_java_io_InputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_files_Fi_writer_boolean_R_java_io_Writer(jcontext ctx, jobject self, jbool param0);
jobject M_arc_files_Fi_writer_boolean_java_lang_String_R_java_io_Writer(jcontext ctx, jobject self, jbool param0, jobject param1);
void M_arc_files_Fi_writePng_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0);
void M_arc_files_Fi_writeString_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_files_Fi_writeString_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_files_Fi_writeString_java_lang_String_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
void M_arc_files_Fi_writeBytes_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_arc_files_Fi_writeBytes_Array1_byte_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_files_Fi_writeBytes_Array1_byte_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
void M_arc_files_Fi_walk_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_findAll_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_files_Fi_seq_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_files_Fi_list_R_Array1_arc_files_Fi(jcontext ctx, jobject self);
jobject M_arc_files_Fi_list_java_io_FileFilter_R_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_list_java_io_FilenameFilter_R_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_list_java_lang_String_R_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jbool M_arc_files_Fi_isDirectory_R_boolean(jcontext ctx, jobject self);
jobject M_arc_files_Fi_child_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_parent_R_arc_files_Fi(jcontext ctx, jobject self);
jbool M_arc_files_Fi_mkdirs_R_boolean(jcontext ctx, jobject self);
jbool M_arc_files_Fi_exists_R_boolean(jcontext ctx, jobject self);
jbool M_arc_files_Fi_delete_R_boolean(jcontext ctx, jobject self);
jbool M_arc_files_Fi_deleteDirectory_R_boolean(jcontext ctx, jobject self);
void M_arc_files_Fi_emptyDirectory(jcontext ctx, jobject self);
void M_arc_files_Fi_emptyDirectory_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_files_Fi_copyTo_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_arc_files_Fi_copyFilesTo_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_arc_files_Fi_moveTo_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jlong M_arc_files_Fi_length_R_long(jcontext ctx, jobject self);
jlong M_arc_files_Fi_lastModified_R_long(jcontext ctx, jobject self);
jbool M_arc_files_Fi_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_files_Fi_hashCode_R_int(jcontext ctx, jobject self);
jint M_arc_files_Fi_compareTo_arc_files_Fi_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_arc_files_Fi_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_arc_files_Fi_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
void SM_arc_files_Fi_lambda$findAll$0_arc_func_Boolf_arc_struct_Seq_arc_files_Fi(jcontext ctx, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
