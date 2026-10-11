#include "java/nio/file/FileSystem.h"
#include "java/nio/file/Path.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/nio/file/attribute/UserPrincipalLookupService.h"
#include "java/nio/file/FileSystem.h"
#include "java/lang/String.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/Closeable.h"
#include "java/nio/file/WatchService.h"
#include "java/lang/Iterable.h"
#include "java/nio/file/PathMatcher.h"

extern "C" {


void mark_java_nio_file_FileSystem(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_file_FileSystem *) object;
}

void clinit_java_nio_file_FileSystem(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_nio_file_FileSystem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/FileSystem:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_file_FileSystem(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_file_FileSystem[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "close", "()V" },
	{ "isOpen", "()Z" },
	{ "isReadOnly", "()Z" },
	{ "getSeparator", "()Ljava/lang/String;" },
	{ "getRootDirectories", "()Ljava/lang/Iterable;" },
	{ "getFileStores", "()Ljava/lang/Iterable;" },
	{ "supportedFileAttributeViews", "()Ljava/util/Set;" },
	{ "getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;" },
	{ "getPathMatcher", "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;" },
	{ "getUserPrincipalLookupService", "()Ljava/nio/file/attribute/UserPrincipalLookupService;" },
	{ "newWatchService", "()Ljava/nio/file/WatchService;" },
};

static jclass interfaces[] { &class_java_io_Closeable, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_file_FileSystem, 0, "()V", 4 },
	{ "close", 0, VTABLE_java_nio_file_FileSystem_close, "()V", 1025 },
	{ "isOpen", 0, VTABLE_java_nio_file_FileSystem_isOpen_R_boolean, "()Z", 1025 },
	{ "isReadOnly", 0, VTABLE_java_nio_file_FileSystem_isReadOnly_R_boolean, "()Z", 1025 },
	{ "getSeparator", 0, VTABLE_java_nio_file_FileSystem_getSeparator_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "getRootDirectories", 0, VTABLE_java_nio_file_FileSystem_getRootDirectories_R_java_lang_Iterable, "()Ljava/lang/Iterable;", 1025 },
	{ "getFileStores", 0, VTABLE_java_nio_file_FileSystem_getFileStores_R_java_lang_Iterable, "()Ljava/lang/Iterable;", 1025 },
	{ "supportedFileAttributeViews", 0, VTABLE_java_nio_file_FileSystem_supportedFileAttributeViews_R_java_util_Set, "()Ljava/util/Set;", 1025 },
	{ "getPath", 0, VTABLE_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path, "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", 1153 },
	{ "getPathMatcher", 0, VTABLE_java_nio_file_FileSystem_getPathMatcher_java_lang_String_R_java_nio_file_PathMatcher, "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;", 1025 },
	{ "getUserPrincipalLookupService", 0, VTABLE_java_nio_file_FileSystem_getUserPrincipalLookupService_R_java_nio_file_attribute_UserPrincipalLookupService, "()Ljava/nio/file/attribute/UserPrincipalLookupService;", 1025 },
	{ "newWatchService", 0, VTABLE_java_nio_file_FileSystem_newWatchService_R_java_nio_file_WatchService, "()Ljava/nio/file/WatchService;", 1025 },
};

Class class_java_nio_file_FileSystem{
		.nativeName = (intptr_t) "java/nio/file/FileSystem",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_file_FileSystem),
		.classVtable = (intptr_t) vtable_java_nio_file_FileSystem,
		.staticInitializer = (intptr_t) clinit_java_nio_file_FileSystem,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_file_FileSystem,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_file_FileSystem = registerClass(&class_java_nio_file_FileSystem);

}
