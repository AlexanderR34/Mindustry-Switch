#include "arc/util/CommandHandler_CommandParam.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/CommandHandler_CommandParam.h"
#include "arc/util/CommandHandler.h"

extern "C" {


void mark_arc_util_CommandHandler$CommandParam(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_CommandHandler$CommandParam *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_arc_util_CommandHandler$CommandParam(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_CommandHandler$CommandParam_java_lang_String_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler$CommandParam:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler$CommandParam(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(206);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(207);
	((arc_util_CommandHandler$CommandParam *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(208);
	((arc_util_CommandHandler$CommandParam *) NULL_CHECK((frame[0].o)))->F_optional = (frame[2].i);
	LINE_NUMBER(209);
	((arc_util_CommandHandler$CommandParam *) NULL_CHECK((frame[0].o)))->F_variadic = (frame[3].i);
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_CommandHandler$CommandParam[] {
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
	{ "name", &class_java_lang_String, offsetof(arc_util_CommandHandler$CommandParam, F_name), "Ljava/lang/String;", 17 },
	{ "optional", &class_boolean, offsetof(arc_util_CommandHandler$CommandParam, F_optional), "Z", 17 },
	{ "variadic", &class_boolean, offsetof(arc_util_CommandHandler$CommandParam, F_variadic), "Z", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_CommandHandler$CommandParam_java_lang_String_boolean_boolean, 0, "(Ljava/lang/String;ZZ)V", 1 },
};

Class class_arc_util_CommandHandler$CommandParam{
		.nativeName = (intptr_t) "arc/util/CommandHandler$CommandParam",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_CommandHandler$CommandParam),
		.classVtable = (intptr_t) vtable_arc_util_CommandHandler$CommandParam,
		.staticInitializer = (intptr_t) clinit_arc_util_CommandHandler$CommandParam,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_CommandHandler$CommandParam,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_CommandHandler,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_CommandHandler$CommandParam = registerClass(&class_arc_util_CommandHandler$CommandParam);

}

