#include "arc/backend/sdl/SdlFiles.h"
#include "java/lang/Object.h"
#include "arc/backend/sdl/SdlFiles_SdlFi.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/Files.h"
#include "arc/util/OS.h"
#include "arc/backend/sdl/SdlFiles.h"
#include "arc/Files_FileType.h"
#include "arc/files/Fi.h"
#include "java/io/File.h"

extern "C" {

jobject SF_arc_backend_sdl_SdlFiles_externalPath;
jobject SF_arc_backend_sdl_SdlFiles_localPath;

void mark_arc_backend_sdl_SdlFiles(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_backend_sdl_SdlFiles_externalPath)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_backend_sdl_SdlFiles_externalPath)->clazz)->markFunction)((jobject) SF_arc_backend_sdl_SdlFiles_externalPath, mark, depth + 1);
		if (SF_arc_backend_sdl_SdlFiles_localPath)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_backend_sdl_SdlFiles_localPath)->clazz)->markFunction)((jobject) SF_arc_backend_sdl_SdlFiles_localPath, mark, depth + 1);
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
	auto self = (arc_backend_sdl_SdlFiles *) object;
}

void init_arc_backend_sdl_SdlFiles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlFiles(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlFiles_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(15);
	clinit_arc_backend_sdl_SdlFiles$SdlFi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlFiles$SdlFi);
	init_arc_backend_sdl_SdlFiles$SdlFi_java_lang_String_arc_Files$FileType(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlFiles_getExternalStoragePath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles:getExternalStoragePath", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	clinit_arc_backend_sdl_SdlFiles(ctx);
	sp[0].o = (jobject)SF_arc_backend_sdl_SdlFiles_externalPath;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlFiles_isExternalStorageAvailable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles:isExternalStorageAvailable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlFiles_getLocalStoragePath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles:getLocalStoragePath", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	clinit_arc_backend_sdl_SdlFiles(ctx);
	sp[0].o = (jobject)SF_arc_backend_sdl_SdlFiles_localPath;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlFiles_isLocalStorageAvailable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles:isLocalStorageAvailable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_arc_backend_sdl_SdlFiles(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlFiles:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlFiles(ctx);
	{
	LINE_NUMBER(10);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_arc_util_OS(ctx);
	sp[1].o = (jobject)SF_arc_util_OS_userHome;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	clinit_java_io_File(ctx);
	sp[1].o = (jobject)SF_java_io_File_separator;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	clinit_arc_backend_sdl_SdlFiles(ctx);
	SF_arc_backend_sdl_SdlFiles_externalPath = sp[0].o;
	LINE_NUMBER(11);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	clinit_java_io_File(ctx);
	sp[1].o = (jobject)SF_java_io_File_separator;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	clinit_arc_backend_sdl_SdlFiles(ctx);
	SF_arc_backend_sdl_SdlFiles_localPath = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlFiles[] {
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
	(void *) M_arc_backend_sdl_SdlFiles_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi,
	(void *) M_arc_Files_classpath_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_internal_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_external_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_absolute_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_local_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_cache_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_getCachePath_R_java_lang_String,
	(void *) M_arc_Files_getInternalStoragePath_R_java_lang_String,
	(void *) M_arc_backend_sdl_SdlFiles_getExternalStoragePath_R_java_lang_String,
	(void *) M_arc_backend_sdl_SdlFiles_isExternalStorageAvailable_R_boolean,
	(void *) M_arc_backend_sdl_SdlFiles_getLocalStoragePath_R_java_lang_String,
	(void *) M_arc_backend_sdl_SdlFiles_isLocalStorageAvailable_R_boolean,
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
	{ "get", "(Ljava/lang/String;Larc/Files$FileType;)Larc/files/Fi;" },
	{ "classpath", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "internal", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "external", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "absolute", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "local", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "cache", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "getCachePath", "()Ljava/lang/String;" },
	{ "getInternalStoragePath", "()Ljava/lang/String;" },
	{ "getExternalStoragePath", "()Ljava/lang/String;" },
	{ "isExternalStorageAvailable", "()Z" },
	{ "getLocalStoragePath", "()Ljava/lang/String;" },
	{ "isLocalStorageAvailable", "()Z" },
};

static jclass interfaces[] { &class_arc_Files, };

static jclass innerClasses[] {
	&class_arc_backend_sdl_SdlFiles$SdlFi,
};

static FieldMetadata fields[] {
	{ "externalPath", &class_java_lang_String, (intptr_t) &SF_arc_backend_sdl_SdlFiles_externalPath, "Ljava/lang/String;", 25 },
	{ "localPath", &class_java_lang_String, (intptr_t) &SF_arc_backend_sdl_SdlFiles_localPath, "Ljava/lang/String;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlFiles, 0, "()V", 1 },
	{ "get", (intptr_t) M_arc_backend_sdl_SdlFiles_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi, VTABLE_arc_backend_sdl_SdlFiles_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi, "(Ljava/lang/String;Larc/Files$FileType;)Larc/files/Fi;", 1 },
	{ "getExternalStoragePath", (intptr_t) M_arc_backend_sdl_SdlFiles_getExternalStoragePath_R_java_lang_String, VTABLE_arc_backend_sdl_SdlFiles_getExternalStoragePath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isExternalStorageAvailable", (intptr_t) M_arc_backend_sdl_SdlFiles_isExternalStorageAvailable_R_boolean, VTABLE_arc_backend_sdl_SdlFiles_isExternalStorageAvailable_R_boolean, "()Z", 1 },
	{ "getLocalStoragePath", (intptr_t) M_arc_backend_sdl_SdlFiles_getLocalStoragePath_R_java_lang_String, VTABLE_arc_backend_sdl_SdlFiles_getLocalStoragePath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isLocalStorageAvailable", (intptr_t) M_arc_backend_sdl_SdlFiles_isLocalStorageAvailable_R_boolean, VTABLE_arc_backend_sdl_SdlFiles_isLocalStorageAvailable_R_boolean, "()Z", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_backend_sdl_SdlFiles, 0, "()V", 8 },
};

Class class_arc_backend_sdl_SdlFiles{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlFiles",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_backend_sdl_SdlFiles),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlFiles,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlFiles,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlFiles,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlFiles = registerClass(&class_arc_backend_sdl_SdlFiles);

}
