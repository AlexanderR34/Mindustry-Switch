#include "arc/backend/sdl/jni/SDL_1.h"
#include "java/io/InputStream.h"
#include "arc/util/SharedLibraryLoader.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/util/OS.h"
#include "arc/backend/sdl/jni/SDL_1.h"
#include "java/lang/Throwable.h"
#include "java/io/File.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_backend_sdl_jni_SDL$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_util_SharedLibraryLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_backend_sdl_jni_SDL$1 *) object;
}

void clinit_arc_backend_sdl_jni_SDL$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_util_SharedLibraryLoader(ctx);
}

void init_arc_backend_sdl_jni_SDL$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/jni/SDL$1:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_jni_SDL$1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(114);
	init_arc_util_SharedLibraryLoader(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_jni_SDL$1_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/jni/SDL$1:loadFile", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(118);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isLinux) == 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_arc_util_OS_hasProp_java_lang_String_R_boolean(ctx, (((jobject) createStringLiteral(ctx, u8"SDL2_STATIC"_j))));
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_arc_util_OS(ctx);
	sp[0].o = (jobject)SF_arc_util_OS_username;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"anuke"_j))));
	if (temp0 != 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(121);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"libSDL2.so"_j)));
	LINE_NUMBER(122);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = (jobject)((func_java_io_File_getParentFile_R_java_io_File) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_getParentFile_R_java_io_File])(ctx, (frame[3].o));
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp += 2;
	if (temp0 != nullptr) goto label_7;
	}
	INST_ALOAD(4);
	goto label_8;
label_7:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_io_File_getParentFile_R_java_io_File) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_getParentFile_R_java_io_File])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_8:;
	{
	sp -= 3;
	init_java_io_File_java_lang_String(ctx, sp[0].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((func_arc_backend_sdl_jni_SDL$1_readFile_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_backend_sdl_jni_SDL$1_readFile_java_lang_String_R_java_io_InputStream])(ctx, (frame[0].o), (frame[4].o));
	sp[2].o = (jobject)((func_arc_backend_sdl_jni_SDL$1_crc_java_io_InputStream_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_backend_sdl_jni_SDL$1_crc_java_io_InputStream_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_backend_sdl_jni_SDL$1_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_jni_SDL$1_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[5].o));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, (frame[5].o));
	SM_java_lang_System_load_java_lang_String(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(126);
	goto label_5;
label_2:;
	LINE_NUMBER(125);
	INST_ASTORE(4);
label_5:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)M_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_jni_SDL$1[] {
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
	(void *) M_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String,
	(void *) M_arc_util_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_SharedLibraryLoader_load_java_lang_String,
	(void *) M_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream,
	(void *) M_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File,
	(void *) M_arc_util_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File,
	(void *) M_arc_util_SharedLibraryLoader_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File,
	(void *) M_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean,
	(void *) M_arc_util_SharedLibraryLoader_canExecute_java_io_File_R_boolean,
	(void *) M_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File,
	(void *) M_arc_util_SharedLibraryLoader_loadFile_java_lang_String,
	(void *) M_arc_backend_sdl_jni_SDL$1_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable,
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
	{ "crc", "(Ljava/io/InputStream;)Ljava/lang/String;" },
	{ "mapLibraryName", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "load", "(Ljava/lang/String;)V" },
	{ "readFile", "(Ljava/lang/String;)Ljava/io/InputStream;" },
	{ "extractFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;" },
	{ "extractFileTo", "(Ljava/lang/String;Ljava/io/File;)V" },
	{ "getExtractedFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;" },
	{ "canWrite", "(Ljava/io/File;)Z" },
	{ "canExecute", "(Ljava/io/File;)Z" },
	{ "extractFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;" },
	{ "loadFile", "(Ljava/lang/String;)V" },
	{ "loadFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/lang/Throwable;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_jni_SDL$1, 0, "()V", 0 },
	{ "loadFile", (intptr_t) M_arc_backend_sdl_jni_SDL$1_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable, VTABLE_arc_backend_sdl_jni_SDL$1_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/lang/Throwable;", 4 },
};

Class class_arc_backend_sdl_jni_SDL$1{
		.nativeName = (intptr_t) "arc/backend/sdl/jni/SDL$1",
		.parentClass = (intptr_t) &class_arc_util_SharedLibraryLoader,
		.size = sizeof(arc_backend_sdl_jni_SDL$1),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_jni_SDL$1,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_jni_SDL$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_jni_SDL$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_jni_SDL$1 = registerClass(&class_arc_backend_sdl_jni_SDL$1);

}

