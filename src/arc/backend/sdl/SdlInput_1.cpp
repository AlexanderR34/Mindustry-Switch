#include "arc/backend/sdl/SdlInput_1.h"
#include "arc/backend/sdl/SdlInput_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/backend/sdl/SdlInput.h"
#include "arc/backend/sdl/SdlInput_EditEvent.h"

extern "C" {


void mark_arc_backend_sdl_SdlInput$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_backend_sdl_SdlInput$EditEvent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_backend_sdl_SdlInput$1 *) object;
	if (self->F_val$input)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$input)->clazz)->markFunction)((jobject) self->F_val$input, mark, depth + 1);
	if (self->F_val$str)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$str)->clazz)->markFunction)((jobject) self->F_val$str, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_backend_sdl_SdlInput$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_backend_sdl_SdlInput$EditEvent(ctx);
}

void init_arc_backend_sdl_SdlInput$1_arc_backend_sdl_SdlInput_Array1_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput$1:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlInput$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(116);
	((arc_backend_sdl_SdlInput$1 *) NULL_CHECK((frame[0].o)))->F_val$input = (jref) (frame[2].o);
	((arc_backend_sdl_SdlInput$1 *) NULL_CHECK((frame[0].o)))->F_val$str = (jref) (frame[3].o);
	((arc_backend_sdl_SdlInput$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_backend_sdl_SdlInput$EditEvent_arc_backend_sdl_SdlInput(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_backend_sdl_SdlInput$1 *) NULL_CHECK((frame[0].o)))->F_val$input;
	((arc_backend_sdl_SdlInput$EditEvent *) NULL_CHECK(sp[0].o))->F_start = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))));
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_backend_sdl_SdlInput$1 *) NULL_CHECK((frame[0].o)))->F_val$input;
	((arc_backend_sdl_SdlInput$EditEvent *) NULL_CHECK(sp[0].o))->F_length = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_backend_sdl_SdlInput$1 *) NULL_CHECK((frame[0].o)))->F_val$str;
	((arc_backend_sdl_SdlInput$EditEvent *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlInput$1[] {
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
	{ "val$input", getArrayClass(&class_int, 1), offsetof(arc_backend_sdl_SdlInput$1, F_val$input), "[I", 4112 },
	{ "val$str", &class_java_lang_String, offsetof(arc_backend_sdl_SdlInput$1, F_val$str), "Ljava/lang/String;", 4112 },
	{ "this$0", &class_arc_backend_sdl_SdlInput, offsetof(arc_backend_sdl_SdlInput$1, F_this$0), "Larc/backend/sdl/SdlInput;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlInput$1_arc_backend_sdl_SdlInput_Array1_int_java_lang_String, 0, "(Larc/backend/sdl/SdlInput;[ILjava/lang/String;)V", 0 },
};

Class class_arc_backend_sdl_SdlInput$1{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlInput$1",
		.parentClass = (intptr_t) &class_arc_backend_sdl_SdlInput$EditEvent,
		.size = sizeof(arc_backend_sdl_SdlInput$1),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlInput$1,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlInput$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlInput$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlInput$1 = registerClass(&class_arc_backend_sdl_SdlInput$1);

}

