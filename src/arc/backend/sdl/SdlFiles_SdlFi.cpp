#include "arc/backend/sdl/SdlFiles_SdlFi.h"
#include "arc/backend/sdl/SdlFiles_SdlFi.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/backend/sdl/SdlFiles.h"
#include "arc/files/Fi.h"
#include "arc/Files_FileType.h"
#include "java/io/File.h"

extern "C" {


void mark_arc_backend_sdl_SdlFiles$SdlFi(jobject object, jint mark, jint depth) {
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
	auto self = (arc_backend_sdl_SdlFiles$SdlFi *) object;
}

void clinit_arc_backend_sdl_SdlFiles$SdlFi(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_files_Fi(ctx);
}

void init_arc_backend_sdl_SdlFiles$SdlFi_java_lang_String_arc_Files$FileType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles$SdlFi:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlFiles$SdlFi(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(40);
	init_arc_files_Fi_java_lang_String_arc_Files$FileType(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_backend_sdl_SdlFiles$SdlFi_java_io_File_arc_Files$FileType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles$SdlFi:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlFiles$SdlFi(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(44);
	init_arc_files_Fi_java_io_File_arc_Files$FileType(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlFiles$SdlFi_child_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles$SdlFi:child", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_backend_sdl_SdlFiles$SdlFi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlFiles$SdlFi);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (frame[1].o));
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_type;
	init_arc_backend_sdl_SdlFiles$SdlFi_java_io_File_arc_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(50);
	clinit_arc_backend_sdl_SdlFiles$SdlFi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlFiles$SdlFi);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[1].o, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_type;
	init_arc_backend_sdl_SdlFiles$SdlFi_java_io_File_arc_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlFiles$SdlFi_sibling_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles$SdlFi:sibling", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot get the sibling of the root."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(56);
	clinit_arc_backend_sdl_SdlFiles$SdlFi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlFiles$SdlFi);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getParent_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getParent_R_java_lang_String])(ctx, sp[2].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[1].o, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_type;
	init_arc_backend_sdl_SdlFiles$SdlFi_java_io_File_arc_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlFiles$SdlFi_file_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles$SdlFi:file", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_external;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_arc_backend_sdl_SdlFiles(ctx);
	sp[1].o = (jobject)SF_arc_backend_sdl_SdlFiles_externalPath;
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[2].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_local;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_arc_backend_sdl_SdlFiles(ctx);
	sp[1].o = (jobject)SF_arc_backend_sdl_SdlFiles_localPath;
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[2].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlFiles$SdlFi[] {
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
	(void *) M_arc_backend_sdl_SdlFiles$SdlFi_file_R_java_io_File,
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
	(void *) M_arc_backend_sdl_SdlFiles$SdlFi_child_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_backend_sdl_SdlFiles$SdlFi_sibling_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_files_Fi_parent_R_arc_files_Fi,
	(void *) M_arc_files_Fi_mkdirs_R_boolean,
	(void *) M_arc_files_Fi_exists_R_boolean,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlFiles$SdlFi_java_lang_String_arc_Files$FileType, 0, "(Ljava/lang/String;Larc/Files$FileType;)V", 1 },
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlFiles$SdlFi_java_io_File_arc_Files$FileType, 0, "(Ljava/io/File;Larc/Files$FileType;)V", 1 },
	{ "child", (intptr_t) M_arc_backend_sdl_SdlFiles$SdlFi_child_java_lang_String_R_arc_files_Fi, VTABLE_arc_backend_sdl_SdlFiles$SdlFi_child_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "sibling", (intptr_t) M_arc_backend_sdl_SdlFiles$SdlFi_sibling_java_lang_String_R_arc_files_Fi, VTABLE_arc_backend_sdl_SdlFiles$SdlFi_sibling_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "file", (intptr_t) M_arc_backend_sdl_SdlFiles$SdlFi_file_R_java_io_File, VTABLE_arc_backend_sdl_SdlFiles$SdlFi_file_R_java_io_File, "()Ljava/io/File;", 1 },
};

Class class_arc_backend_sdl_SdlFiles$SdlFi{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlFiles$SdlFi",
		.parentClass = (intptr_t) &class_arc_files_Fi,
		.size = sizeof(arc_backend_sdl_SdlFiles$SdlFi),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlFiles$SdlFi,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlFiles$SdlFi,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlFiles$SdlFi,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_backend_sdl_SdlFiles,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 78,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlFiles$SdlFi = registerClass(&class_arc_backend_sdl_SdlFiles$SdlFi);

}

