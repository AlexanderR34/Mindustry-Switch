#include "arc/files/ZipFi_1.h"
#include "java/lang/Object.h"
#include "arc/files/ZipFi_1.h"
#include "arc/files/ZipFi.h"
#include "arc/files/Fi.h"
#include "java/io/File.h"

extern "C" {


void mark_arc_files_ZipFi$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_files_Fi(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_files_ZipFi$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_files_ZipFi$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_files_Fi(ctx);
}

void init_arc_files_ZipFi$1_arc_files_ZipFi_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_ZipFi$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(127);
	((arc_files_ZipFi$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_files_Fi_java_io_File(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_files_ZipFi$1_exists_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi$1:exists", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_files_ZipFi$1[] {
	(void *) M_arc_files_Fi_hashCode_R_int,
	(void *) M_arc_files_Fi_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_files_Fi_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_files_Fi_compareTo_java_lang_Object_R_int,
	(void *) M_arc_files_Fi_path_R_java_lang_String,
	(void *) M_arc_files_Fi_absolutePath_R_java_lang_String,
	(void *) M_arc_files_Fi_name_R_java_lang_String,
	(void *) M_arc_files_Fi_extEquals_java_lang_String_R_boolean,
	(void *) M_arc_files_Fi_extension_R_java_lang_String,
	(void *) M_arc_files_Fi_nameWithoutExtension_R_java_lang_String,
	(void *) M_arc_files_Fi_pathWithoutExtension_R_java_lang_String,
	(void *) M_arc_files_Fi_type_R_arc_Files$FileType,
	(void *) M_arc_files_Fi_file_R_java_io_File,
	(void *) M_arc_files_Fi_sha256_R_Array1_byte,
	(void *) M_arc_files_Fi_read_R_java_io_InputStream,
	(void *) M_arc_files_Fi_read_int_R_java_io_BufferedInputStream,
	(void *) M_arc_files_Fi_reader_R_java_io_Reader,
	(void *) M_arc_files_Fi_reader_java_lang_String_R_java_io_Reader,
	(void *) M_arc_files_Fi_reader_int_R_java_io_BufferedReader,
	(void *) M_arc_files_Fi_reader_int_java_lang_String_R_java_io_BufferedReader,
	(void *) M_arc_files_Fi_readString_R_java_lang_String,
	(void *) M_arc_files_Fi_readString_java_lang_String_R_java_lang_String,
	(void *) M_arc_files_Fi_readBytes_R_Array1_byte,
	(void *) M_arc_files_Fi_readByteStream_R_java_io_ByteArrayInputStream,
	(void *) M_arc_files_Fi_estimateLength_R_int,
	(void *) M_arc_files_Fi_readBytes_Array1_byte_int_int_R_int,
	(void *) M_arc_files_Fi_map_R_java_nio_ByteBuffer,
	(void *) M_arc_files_Fi_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer,
	(void *) M_arc_files_Fi_writes_boolean_R_arc_util_io_Writes,
	(void *) M_arc_files_Fi_writes_R_arc_util_io_Writes,
	(void *) M_arc_files_Fi_reads_R_arc_util_io_Reads,
	(void *) M_arc_files_Fi_writesDeflate_R_arc_util_io_Writes,
	(void *) M_arc_files_Fi_readsDeflate_R_arc_util_io_Reads,
	(void *) M_arc_files_Fi_write_R_java_io_OutputStream,
	(void *) M_arc_files_Fi_write_boolean_R_java_io_OutputStream,
	(void *) M_arc_files_Fi_write_boolean_int_R_java_io_OutputStream,
	(void *) M_arc_files_Fi_write_java_io_InputStream_boolean,
	(void *) M_arc_files_Fi_writer_boolean_R_java_io_Writer,
	(void *) M_arc_files_Fi_writer_boolean_java_lang_String_R_java_io_Writer,
	(void *) M_arc_files_Fi_writePng_arc_graphics_Pixmap,
	(void *) M_arc_files_Fi_writeString_java_lang_String,
	(void *) M_arc_files_Fi_writeString_java_lang_String_boolean,
	(void *) M_arc_files_Fi_writeString_java_lang_String_boolean_java_lang_String,
	(void *) M_arc_files_Fi_writeBytes_Array1_byte,
	(void *) M_arc_files_Fi_writeBytes_Array1_byte_boolean,
	(void *) M_arc_files_Fi_writeBytes_Array1_byte_int_int_boolean,
	(void *) M_arc_files_Fi_walk_arc_func_Cons,
	(void *) M_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_files_Fi_findAll_R_arc_struct_Seq,
	(void *) M_arc_files_Fi_seq_R_arc_struct_Seq,
	(void *) M_arc_files_Fi_list_R_Array1_arc_files_Fi,
	(void *) M_arc_files_Fi_list_java_io_FileFilter_R_Array1_arc_files_Fi,
	(void *) M_arc_files_Fi_list_java_io_FilenameFilter_R_Array1_arc_files_Fi,
	(void *) M_arc_files_Fi_list_java_lang_String_R_Array1_arc_files_Fi,
	(void *) M_arc_files_Fi_isDirectory_R_boolean,
	(void *) M_arc_files_Fi_child_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_files_Fi_parent_R_arc_files_Fi,
	(void *) M_arc_files_Fi_mkdirs_R_boolean,
	(void *) M_arc_files_ZipFi$1_exists_R_boolean,
	(void *) M_arc_files_Fi_delete_R_boolean,
	(void *) M_arc_files_Fi_deleteDirectory_R_boolean,
	(void *) M_arc_files_Fi_emptyDirectory,
	(void *) M_arc_files_Fi_emptyDirectory_boolean,
	(void *) M_arc_files_Fi_copyTo_arc_files_Fi,
	(void *) M_arc_files_Fi_copyFilesTo_arc_files_Fi,
	(void *) M_arc_files_Fi_moveTo_arc_files_Fi,
	(void *) M_arc_files_Fi_length_R_long,
	(void *) M_arc_files_Fi_lastModified_R_long,
	(void *) M_arc_files_Fi_compareTo_arc_files_Fi_R_int,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "path", "()Ljava/lang/String;" },
	{ "absolutePath", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "extEquals", "(Ljava/lang/String;)Z" },
	{ "extension", "()Ljava/lang/String;" },
	{ "nameWithoutExtension", "()Ljava/lang/String;" },
	{ "pathWithoutExtension", "()Ljava/lang/String;" },
	{ "type", "()Larc/Files$FileType;" },
	{ "file", "()Ljava/io/File;" },
	{ "sha256", "()[B" },
	{ "read", "()Ljava/io/InputStream;" },
	{ "read", "(I)Ljava/io/BufferedInputStream;" },
	{ "reader", "()Ljava/io/Reader;" },
	{ "reader", "(Ljava/lang/String;)Ljava/io/Reader;" },
	{ "reader", "(I)Ljava/io/BufferedReader;" },
	{ "reader", "(ILjava/lang/String;)Ljava/io/BufferedReader;" },
	{ "readString", "()Ljava/lang/String;" },
	{ "readString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "readBytes", "()[B" },
	{ "readByteStream", "()Ljava/io/ByteArrayInputStream;" },
	{ "estimateLength", "()I" },
	{ "readBytes", "([BII)I" },
	{ "map", "()Ljava/nio/ByteBuffer;" },
	{ "map", "(Ljava/nio/channels/FileChannel$MapMode;)Ljava/nio/ByteBuffer;" },
	{ "writes", "(Z)Larc/util/io/Writes;" },
	{ "writes", "()Larc/util/io/Writes;" },
	{ "reads", "()Larc/util/io/Reads;" },
	{ "writesDeflate", "()Larc/util/io/Writes;" },
	{ "readsDeflate", "()Larc/util/io/Reads;" },
	{ "write", "()Ljava/io/OutputStream;" },
	{ "write", "(Z)Ljava/io/OutputStream;" },
	{ "write", "(ZI)Ljava/io/OutputStream;" },
	{ "write", "(Ljava/io/InputStream;Z)V" },
	{ "writer", "(Z)Ljava/io/Writer;" },
	{ "writer", "(ZLjava/lang/String;)Ljava/io/Writer;" },
	{ "writePng", "(Larc/graphics/Pixmap;)V" },
	{ "writeString", "(Ljava/lang/String;)V" },
	{ "writeString", "(Ljava/lang/String;Z)V" },
	{ "writeString", "(Ljava/lang/String;ZLjava/lang/String;)V" },
	{ "writeBytes", "([B)V" },
	{ "writeBytes", "([BZ)V" },
	{ "writeBytes", "([BIIZ)V" },
	{ "walk", "(Larc/func/Cons;)V" },
	{ "findAll", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "findAll", "()Larc/struct/Seq;" },
	{ "seq", "()Larc/struct/Seq;" },
	{ "list", "()[Larc/files/Fi;" },
	{ "list", "(Ljava/io/FileFilter;)[Larc/files/Fi;" },
	{ "list", "(Ljava/io/FilenameFilter;)[Larc/files/Fi;" },
	{ "list", "(Ljava/lang/String;)[Larc/files/Fi;" },
	{ "isDirectory", "()Z" },
	{ "child", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "sibling", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "parent", "()Larc/files/Fi;" },
	{ "mkdirs", "()Z" },
	{ "exists", "()Z" },
	{ "delete", "()Z" },
	{ "deleteDirectory", "()Z" },
	{ "emptyDirectory", "()V" },
	{ "emptyDirectory", "(Z)V" },
	{ "copyTo", "(Larc/files/Fi;)V" },
	{ "copyFilesTo", "(Larc/files/Fi;)V" },
	{ "moveTo", "(Larc/files/Fi;)V" },
	{ "length", "()J" },
	{ "lastModified", "()J" },
	{ "compareTo", "(Larc/files/Fi;)I" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_arc_files_ZipFi, offsetof(arc_files_ZipFi$1, F_this$0), "Larc/files/ZipFi;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_files_ZipFi$1_arc_files_ZipFi_java_io_File, 0, "(Larc/files/ZipFi;Ljava/io/File;)V", 0 },
	{ "exists", (intptr_t) M_arc_files_ZipFi$1_exists_R_boolean, VTABLE_arc_files_ZipFi$1_exists_R_boolean, "()Z", 1 },
};

Class class_arc_files_ZipFi$1{
		.nativeName = (intptr_t) "arc/files/ZipFi$1",
		.parentClass = (intptr_t) &class_arc_files_Fi,
		.size = sizeof(arc_files_ZipFi$1),
		.classVtable = (intptr_t) vtable_arc_files_ZipFi$1,
		.staticInitializer = (intptr_t) clinit_arc_files_ZipFi$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_files_ZipFi$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 78,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_files_ZipFi$1 = registerClass(&class_arc_files_ZipFi$1);

}

