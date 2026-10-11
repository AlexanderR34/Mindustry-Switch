#include "java/nio/file/Path.h"
#include "java/nio/file/FileSystem.h"
#include "java/nio/file/WatchEvent_Modifier.h"
#include "java/util/Iterator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Comparable.h"
#include "java/nio/file/WatchEvent_Kind.h"
#include "java/nio/file/Watchable.h"
#include "java/nio/file/WatchService.h"
#include "java/lang/Iterable.h"
#include "java/nio/file/Path.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/file/Path_1.h"
#include "java/net/URI.h"
#include "java/lang/NullPointerException.h"
#include "java/nio/file/LinkOption.h"
#include "java/nio/file/WatchKey.h"
#include "java/io/File.h"

extern "C" {


void mark_java_nio_file_Path(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_file_Path *) object;
}

void clinit_java_nio_file_Path(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject SM_java_nio_file_Path_of_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:of", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_file_Path(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(12);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_nio_file_Path_of_java_net_URI_R_java_nio_file_Path(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:of", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_file_Path(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(17);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_nio_file_Path_startsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:startsWith", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem, (frame[0].o)))(ctx, (frame[0].o));
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	sp[1].o = (jobject)((func_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path])(ctx, sp[1].o, sp[2].o, sp[3].o);
	jint temp0 = (jint)((func_java_nio_file_Path_startsWith_java_nio_file_Path_R_boolean) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_startsWith_java_nio_file_Path_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_nio_file_Path_endsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:endsWith", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem, (frame[0].o)))(ctx, (frame[0].o));
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	sp[1].o = (jobject)((func_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path])(ctx, sp[1].o, sp[2].o, sp[3].o);
	jint temp0 = (jint)((func_java_nio_file_Path_endsWith_java_nio_file_Path_R_boolean) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_endsWith_java_nio_file_Path_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_file_Path_resolve_java_lang_String_R_java_nio_file_Path(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:resolve", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem, (frame[0].o)))(ctx, (frame[0].o));
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	sp[1].o = (jobject)((func_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_nio_file_Path_resolve_java_nio_file_Path_R_java_nio_file_Path) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_resolve_java_nio_file_Path_R_java_nio_file_Path, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_file_Path_resolveSibling_java_nio_file_Path_R_java_nio_file_Path(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:resolveSibling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(77);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_java_nio_file_Path_getParent_R_java_nio_file_Path) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_getParent_R_java_nio_file_Path, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(80);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	INST_ALOAD(1);
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((func_java_nio_file_Path_resolve_java_nio_file_Path_R_java_nio_file_Path) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_resolve_java_nio_file_Path_R_java_nio_file_Path, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	sp += 1;
	}
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_nio_file_Path_resolveSibling_java_lang_String_R_java_nio_file_Path(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:resolveSibling", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem, (frame[0].o)))(ctx, (frame[0].o));
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	sp[1].o = (jobject)((func_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_nio_file_Path_resolveSibling_java_nio_file_Path_R_java_nio_file_Path) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_resolveSibling_java_nio_file_Path_R_java_nio_file_Path, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_file_Path_toFile_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:toFile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	init_java_io_File_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:register", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_file_Path_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	clinit_java_nio_file_Path$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_file_Path$1);
	init_java_nio_file_Path$1_java_nio_file_Path(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_nio_file_Path_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_java_nio_file_Path_compareTo_java_nio_file_Path_R_int) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_compareTo_java_nio_file_Path_R_int, (frame[0].o)))(ctx, (frame[0].o), (checkCast(ctx, &class_java_nio_file_Path, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_file_Path[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_nio_file_Path_compareTo_java_lang_Object_R_int,
	(void *) M_java_nio_file_Path_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) nullptr,
	(void *) M_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_nio_file_Path_startsWith_java_lang_String_R_boolean,
	(void *) nullptr,
	(void *) M_java_nio_file_Path_endsWith_java_lang_String_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_nio_file_Path_resolve_java_lang_String_R_java_nio_file_Path,
	(void *) M_java_nio_file_Path_resolveSibling_java_nio_file_Path_R_java_nio_file_Path,
	(void *) M_java_nio_file_Path_resolveSibling_java_lang_String_R_java_nio_file_Path,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_nio_file_Path_toFile_R_java_io_File,
	(void *) nullptr,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;" },
	{ "register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;)Ljava/nio/file/WatchKey;" },
	{ "getFileSystem", "()Ljava/nio/file/FileSystem;" },
	{ "isAbsolute", "()Z" },
	{ "getRoot", "()Ljava/nio/file/Path;" },
	{ "getFileName", "()Ljava/nio/file/Path;" },
	{ "getParent", "()Ljava/nio/file/Path;" },
	{ "getNameCount", "()I" },
	{ "getName", "(I)Ljava/nio/file/Path;" },
	{ "subpath", "(II)Ljava/nio/file/Path;" },
	{ "startsWith", "(Ljava/nio/file/Path;)Z" },
	{ "startsWith", "(Ljava/lang/String;)Z" },
	{ "endsWith", "(Ljava/nio/file/Path;)Z" },
	{ "endsWith", "(Ljava/lang/String;)Z" },
	{ "normalize", "()Ljava/nio/file/Path;" },
	{ "resolve", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;" },
	{ "resolve", "(Ljava/lang/String;)Ljava/nio/file/Path;" },
	{ "resolveSibling", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;" },
	{ "resolveSibling", "(Ljava/lang/String;)Ljava/nio/file/Path;" },
	{ "relativize", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;" },
	{ "toUri", "()Ljava/net/URI;" },
	{ "toAbsolutePath", "()Ljava/nio/file/Path;" },
	{ "toRealPath", "([Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;" },
	{ "toFile", "()Ljava/io/File;" },
	{ "compareTo", "(Ljava/nio/file/Path;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, &class_java_lang_Iterable, &class_java_nio_file_Watchable, };

static MethodMetadata methods[] {
	{ "of", (intptr_t) SM_java_nio_file_Path_of_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path, 0, "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", 137 },
	{ "of", (intptr_t) SM_java_nio_file_Path_of_java_net_URI_R_java_nio_file_Path, 0, "(Ljava/net/URI;)Ljava/nio/file/Path;", 9 },
	{ "getFileSystem", 0, INDEX_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem, "()Ljava/nio/file/FileSystem;", 1025 },
	{ "isAbsolute", 0, INDEX_java_nio_file_Path_isAbsolute_R_boolean, "()Z", 1025 },
	{ "getRoot", 0, INDEX_java_nio_file_Path_getRoot_R_java_nio_file_Path, "()Ljava/nio/file/Path;", 1025 },
	{ "getFileName", 0, INDEX_java_nio_file_Path_getFileName_R_java_nio_file_Path, "()Ljava/nio/file/Path;", 1025 },
	{ "getParent", 0, INDEX_java_nio_file_Path_getParent_R_java_nio_file_Path, "()Ljava/nio/file/Path;", 1025 },
	{ "getNameCount", 0, INDEX_java_nio_file_Path_getNameCount_R_int, "()I", 1025 },
	{ "getName", 0, INDEX_java_nio_file_Path_getName_int_R_java_nio_file_Path, "(I)Ljava/nio/file/Path;", 1025 },
	{ "subpath", 0, INDEX_java_nio_file_Path_subpath_int_int_R_java_nio_file_Path, "(II)Ljava/nio/file/Path;", 1025 },
	{ "startsWith", 0, INDEX_java_nio_file_Path_startsWith_java_nio_file_Path_R_boolean, "(Ljava/nio/file/Path;)Z", 1025 },
	{ "startsWith", (intptr_t) M_java_nio_file_Path_startsWith_java_lang_String_R_boolean, INDEX_java_nio_file_Path_startsWith_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "endsWith", 0, INDEX_java_nio_file_Path_endsWith_java_nio_file_Path_R_boolean, "(Ljava/nio/file/Path;)Z", 1025 },
	{ "endsWith", (intptr_t) M_java_nio_file_Path_endsWith_java_lang_String_R_boolean, INDEX_java_nio_file_Path_endsWith_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "normalize", 0, INDEX_java_nio_file_Path_normalize_R_java_nio_file_Path, "()Ljava/nio/file/Path;", 1025 },
	{ "resolve", 0, INDEX_java_nio_file_Path_resolve_java_nio_file_Path_R_java_nio_file_Path, "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", 1025 },
	{ "resolve", (intptr_t) M_java_nio_file_Path_resolve_java_lang_String_R_java_nio_file_Path, INDEX_java_nio_file_Path_resolve_java_lang_String_R_java_nio_file_Path, "(Ljava/lang/String;)Ljava/nio/file/Path;", 1 },
	{ "resolveSibling", (intptr_t) M_java_nio_file_Path_resolveSibling_java_nio_file_Path_R_java_nio_file_Path, INDEX_java_nio_file_Path_resolveSibling_java_nio_file_Path_R_java_nio_file_Path, "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", 1 },
	{ "resolveSibling", (intptr_t) M_java_nio_file_Path_resolveSibling_java_lang_String_R_java_nio_file_Path, INDEX_java_nio_file_Path_resolveSibling_java_lang_String_R_java_nio_file_Path, "(Ljava/lang/String;)Ljava/nio/file/Path;", 1 },
	{ "relativize", 0, INDEX_java_nio_file_Path_relativize_java_nio_file_Path_R_java_nio_file_Path, "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", 1025 },
	{ "toUri", 0, INDEX_java_nio_file_Path_toUri_R_java_net_URI, "()Ljava/net/URI;", 1025 },
	{ "toAbsolutePath", 0, INDEX_java_nio_file_Path_toAbsolutePath_R_java_nio_file_Path, "()Ljava/nio/file/Path;", 1025 },
	{ "toRealPath", 0, INDEX_java_nio_file_Path_toRealPath_Array1_java_nio_file_LinkOption_R_java_nio_file_Path, "([Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;", 1153 },
	{ "toFile", (intptr_t) M_java_nio_file_Path_toFile_R_java_io_File, INDEX_java_nio_file_Path_toFile_R_java_io_File, "()Ljava/io/File;", 1 },
	{ "register", 0, INDEX_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_Array1_java_nio_file_WatchEvent$Modifier_R_java_nio_file_WatchKey, "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", 1153 },
	{ "register", (intptr_t) M_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey, INDEX_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey, "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;)Ljava/nio/file/WatchKey;", 129 },
	{ "iterator", (intptr_t) M_java_nio_file_Path_iterator_R_java_util_Iterator, INDEX_java_nio_file_Path_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "compareTo", 0, INDEX_java_nio_file_Path_compareTo_java_nio_file_Path_R_int, "(Ljava/nio/file/Path;)I", 1025 },
	{ "equals", 0, INDEX_java_nio_file_Path_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "hashCode", 0, INDEX_java_nio_file_Path_hashCode_R_int, "()I", 1025 },
	{ "toString", 0, INDEX_java_nio_file_Path_toString_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "compareTo", (intptr_t) M_java_nio_file_Path_compareTo_java_lang_Object_R_int, INDEX_java_nio_file_Path_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_java_nio_file_Path{
		.nativeName = (intptr_t) "java/nio/file/Path",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_file_Path),
		.classVtable = (intptr_t) vtable_java_nio_file_Path,
		.staticInitializer = (intptr_t) clinit_java_nio_file_Path,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_file_Path,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 32,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_file_Path = registerClass(&class_java_nio_file_Path);

}
