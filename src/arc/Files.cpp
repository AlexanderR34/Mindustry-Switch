#include "arc/Files.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/Files.h"
#include "arc/Files_FileType.h"
#include "arc/files/Fi.h"

extern "C" {


void mark_arc_Files(jobject object, jint mark, jint depth) {
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
	auto self = (arc_Files *) object;
}

void clinit_arc_Files(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_arc_Files_classpath_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files:classpath", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Files$FileType(ctx);
	sp[2].o = (jobject)SF_arc_Files$FileType_classpath;
	sp[0].o = (jobject)((func_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Files_internal_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files:internal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Files$FileType(ctx);
	sp[2].o = (jobject)SF_arc_Files$FileType_internal;
	sp[0].o = (jobject)((func_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Files_external_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files:external", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Files$FileType(ctx);
	sp[2].o = (jobject)SF_arc_Files$FileType_external;
	sp[0].o = (jobject)((func_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Files_absolute_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files:absolute", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Files$FileType(ctx);
	sp[2].o = (jobject)SF_arc_Files$FileType_absolute;
	sp[0].o = (jobject)((func_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Files_local_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files:local", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Files$FileType(ctx);
	sp[2].o = (jobject)SF_arc_Files$FileType_local;
	sp[0].o = (jobject)((func_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Files_cache_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files:cache", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_Files_getCachePath_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_getCachePath_R_java_lang_String, (frame[0].o)))(ctx, (frame[0].o));
	clinit_arc_Files$FileType(ctx);
	sp[2].o = (jobject)SF_arc_Files$FileType_absolute;
	sp[0].o = (jobject)((func_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Files_getCachePath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files:getCachePath", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_arc_Files_local_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi, (frame[0].o)))(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"cache"_j))));
	sp[0].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Files_getInternalStoragePath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files:getInternalStoragePath", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_Files[] {
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
	(void *) M_arc_Files_classpath_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_internal_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_external_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_absolute_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_local_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_cache_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_Files_getCachePath_R_java_lang_String,
	(void *) M_arc_Files_getInternalStoragePath_R_java_lang_String,
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

static jclass innerClasses[] {
	&class_arc_Files$FileType,
};

static MethodMetadata methods[] {
	{ "get", 0, INDEX_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi, "(Ljava/lang/String;Larc/Files$FileType;)Larc/files/Fi;", 1025 },
	{ "classpath", (intptr_t) M_arc_Files_classpath_java_lang_String_R_arc_files_Fi, INDEX_arc_Files_classpath_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "internal", (intptr_t) M_arc_Files_internal_java_lang_String_R_arc_files_Fi, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "external", (intptr_t) M_arc_Files_external_java_lang_String_R_arc_files_Fi, INDEX_arc_Files_external_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "absolute", (intptr_t) M_arc_Files_absolute_java_lang_String_R_arc_files_Fi, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "local", (intptr_t) M_arc_Files_local_java_lang_String_R_arc_files_Fi, INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "cache", (intptr_t) M_arc_Files_cache_java_lang_String_R_arc_files_Fi, INDEX_arc_Files_cache_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "getCachePath", (intptr_t) M_arc_Files_getCachePath_R_java_lang_String, INDEX_arc_Files_getCachePath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getInternalStoragePath", (intptr_t) M_arc_Files_getInternalStoragePath_R_java_lang_String, INDEX_arc_Files_getInternalStoragePath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getExternalStoragePath", 0, INDEX_arc_Files_getExternalStoragePath_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "isExternalStorageAvailable", 0, INDEX_arc_Files_isExternalStorageAvailable_R_boolean, "()Z", 1025 },
	{ "getLocalStoragePath", 0, INDEX_arc_Files_getLocalStoragePath_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "isLocalStorageAvailable", 0, INDEX_arc_Files_isLocalStorageAvailable_R_boolean, "()Z", 1025 },
};

Class class_arc_Files{
		.nativeName = (intptr_t) "arc/Files",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_Files),
		.classVtable = (intptr_t) vtable_arc_Files,
		.staticInitializer = (intptr_t) clinit_arc_Files,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Files,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Files = registerClass(&class_arc_Files);

}
