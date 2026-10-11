#include "arc/backend/sdl/SdlApplication_SdlError.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/backend/sdl/SdlApplication.h"
#include "arc/backend/sdl/jni/SDL.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_arc_backend_sdl_SdlApplication$SdlError(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_RuntimeException(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_backend_sdl_SdlApplication$SdlError *) object;
}

void clinit_arc_backend_sdl_SdlApplication$SdlError(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_RuntimeException(ctx);
}

void init_arc_backend_sdl_SdlApplication$SdlError(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication$SdlError:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlApplication$SdlError(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_backend_sdl_jni_SDL_SDL_GetError_R_java_lang_String(ctx);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlApplication$SdlError[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Throwable_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Throwable_initCause_java_lang_Throwable_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getStack_R_java_lang_String,
	(void *) M_java_lang_Throwable_getCause_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getMessage_R_java_lang_String,
	(void *) M_java_lang_Throwable_fillInStack,
	(void *) M_java_lang_Throwable_fillInStackTrace_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_printStackTrace,
	(void *) M_java_lang_Throwable_printStackTrace_java_io_PrintStream,
	(void *) M_java_lang_Throwable_printStackTrace_java_io_PrintWriter,
	(void *) M_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_setStackTrace_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_addSuppressed_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getSuppressed_R_Array1_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getLocalizedMessage_R_java_lang_String,
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
	{ "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;" },
	{ "getStack", "()Ljava/lang/String;" },
	{ "getCause", "()Ljava/lang/Throwable;" },
	{ "getMessage", "()Ljava/lang/String;" },
	{ "fillInStack", "()V" },
	{ "fillInStackTrace", "()Ljava/lang/Throwable;" },
	{ "printStackTrace", "()V" },
	{ "printStackTrace", "(Ljava/io/PrintStream;)V" },
	{ "printStackTrace", "(Ljava/io/PrintWriter;)V" },
	{ "getStackTrace", "()[Ljava/lang/StackTraceElement;" },
	{ "setStackTrace", "([Ljava/lang/StackTraceElement;)V" },
	{ "addSuppressed", "(Ljava/lang/Throwable;)V" },
	{ "getSuppressed", "()[Ljava/lang/Throwable;" },
	{ "getLocalizedMessage", "()Ljava/lang/String;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlApplication$SdlError, 0, "()V", 1 },
};

Class class_arc_backend_sdl_SdlApplication$SdlError{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlApplication$SdlError",
		.parentClass = (intptr_t) &class_java_lang_RuntimeException,
		.size = sizeof(arc_backend_sdl_SdlApplication$SdlError),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlApplication$SdlError,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlApplication$SdlError,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlApplication$SdlError,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_backend_sdl_SdlApplication,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlApplication$SdlError = registerClass(&class_arc_backend_sdl_SdlApplication$SdlError);

}

