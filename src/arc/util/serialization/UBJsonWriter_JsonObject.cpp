#include "arc/util/serialization/UBJsonWriter_JsonObject.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/UBJsonWriter_JsonObject.h"
#include "java/io/DataOutputStream.h"
#include "arc/util/serialization/UBJsonWriter.h"

extern "C" {


void mark_arc_util_serialization_UBJsonWriter$JsonObject(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_UBJsonWriter$JsonObject *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_util_serialization_UBJsonWriter$JsonObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_UBJsonWriter$JsonObject_arc_util_serialization_UBJsonWriter_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter$JsonObject:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_UBJsonWriter$JsonObject(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(686);
	((arc_util_serialization_UBJsonWriter$JsonObject *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(687);
	((arc_util_serialization_UBJsonWriter$JsonObject *) NULL_CHECK((frame[0].o)))->F_array = (frame[2].i);
	LINE_NUMBER(688);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK((frame[1].o)))->F_out;
	sp += 1;
	if ((frame[2].i) == 0) goto label_3;
	}
	INST_BIPUSH(91);
	goto label_4;
label_3:;
	INST_BIPUSH(123);
label_4:;
	{
	sp -= 2;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(689);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_UBJsonWriter$JsonObject_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/UBJsonWriter$JsonObject:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter$JsonObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_util_serialization_UBJsonWriter *) NULL_CHECK(sp[0].o))->F_out;
	sp += 1;
	if (((jint)((arc_util_serialization_UBJsonWriter$JsonObject *) NULL_CHECK((frame[0].o)))->F_array) == 0) goto label_1;
	}
	INST_BIPUSH(93);
	goto label_2;
label_1:;
	INST_BIPUSH(125);
label_2:;
	{
	sp -= 2;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_UBJsonWriter$JsonObject[] {
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
	(void *) M_arc_util_serialization_UBJsonWriter$JsonObject_close,
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
};

static FieldMetadata fields[] {
	{ "array", &class_boolean, offsetof(arc_util_serialization_UBJsonWriter$JsonObject, F_array), "Z", 16 },
	{ "this$0", &class_arc_util_serialization_UBJsonWriter, offsetof(arc_util_serialization_UBJsonWriter$JsonObject, F_this$0), "Larc/util/serialization/UBJsonWriter;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_UBJsonWriter$JsonObject_arc_util_serialization_UBJsonWriter_boolean, 0, "(Larc/util/serialization/UBJsonWriter;Z)V", 0 },
	{ "close", (intptr_t) M_arc_util_serialization_UBJsonWriter$JsonObject_close, VTABLE_arc_util_serialization_UBJsonWriter$JsonObject_close, "()V", 0 },
};

Class class_arc_util_serialization_UBJsonWriter$JsonObject{
		.nativeName = (intptr_t) "arc/util/serialization/UBJsonWriter$JsonObject",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_UBJsonWriter$JsonObject),
		.classVtable = (intptr_t) vtable_arc_util_serialization_UBJsonWriter$JsonObject,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_UBJsonWriter$JsonObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_UBJsonWriter$JsonObject,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_UBJsonWriter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_UBJsonWriter$JsonObject = registerClass(&class_arc_util_serialization_UBJsonWriter$JsonObject);

}

