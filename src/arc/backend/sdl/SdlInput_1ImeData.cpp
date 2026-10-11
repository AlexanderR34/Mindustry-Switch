#include "arc/backend/sdl/SdlInput_1ImeData.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/backend/sdl/SdlInput.h"
#include "arc/backend/sdl/SdlInput_1ImeData.h"

extern "C" {


void mark_arc_backend_sdl_SdlInput$1ImeData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_backend_sdl_SdlInput$1ImeData *) object;
	if (self->F_lastSetText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSetText)->clazz)->markFunction)((jobject) self->F_lastSetText, mark, depth + 1);
	if (self->F_realText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_realText)->clazz)->markFunction)((jobject) self->F_realText, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_backend_sdl_SdlInput$1ImeData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_backend_sdl_SdlInput$1ImeData_arc_backend_sdl_SdlInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput$1ImeData:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlInput$1ImeData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	((arc_backend_sdl_SdlInput$1ImeData *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlInput$1ImeData[] {
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
};

static FieldMetadata fields[] {
	{ "lastSetText", &class_java_lang_String, offsetof(arc_backend_sdl_SdlInput$1ImeData, F_lastSetText), "Ljava/lang/String;", 0 },
	{ "realText", &class_java_lang_String, offsetof(arc_backend_sdl_SdlInput$1ImeData, F_realText), "Ljava/lang/String;", 0 },
	{ "cursor", &class_int, offsetof(arc_backend_sdl_SdlInput$1ImeData, F_cursor), "I", 0 },
	{ "this$0", &class_arc_backend_sdl_SdlInput, offsetof(arc_backend_sdl_SdlInput$1ImeData, F_this$0), "Larc/backend/sdl/SdlInput;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlInput$1ImeData_arc_backend_sdl_SdlInput, 0, "(Larc/backend/sdl/SdlInput;)V", 0 },
};

Class class_arc_backend_sdl_SdlInput$1ImeData{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlInput$1ImeData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_backend_sdl_SdlInput$1ImeData),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlInput$1ImeData,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlInput$1ImeData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlInput$1ImeData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlInput$1ImeData = registerClass(&class_arc_backend_sdl_SdlInput$1ImeData);

}

