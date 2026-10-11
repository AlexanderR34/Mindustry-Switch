#include "arc/input/KeyBind_Axis.h"
#include "java/lang/Object.h"
#include "arc/input/KeyBind_Axis.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/input/KeyBind_KeybindValue.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "arc/util/Nullable.h"
#include "arc/input/KeyBind.h"
#include "arc/input/KeyCode.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_arc_input_KeyBind$Axis(jobject object, jint mark, jint depth) {
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
	auto self = (arc_input_KeyBind$Axis *) object;
	if (self->F_min)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_min)->clazz)->markFunction)((jobject) self->F_min, mark, depth + 1);
	if (self->F_max)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_max)->clazz)->markFunction)((jobject) self->F_max, mark, depth + 1);
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
}

void clinit_arc_input_KeyBind$Axis(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_input_KeyBind$Axis_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind$Axis:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyBind$Axis(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(136);
	((arc_input_KeyBind$Axis *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[1].o);
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_max = (jref) sp[2].o;
	((arc_input_KeyBind$Axis *) NULL_CHECK(sp[0].o))->F_min = (jref) sp[2].o;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_input_KeyBind$Axis_arc_input_KeyCode_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind$Axis:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyBind$Axis(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(141);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(142);
	((arc_input_KeyBind$Axis *) NULL_CHECK((frame[0].o)))->F_min = (jref) (frame[1].o);
	LINE_NUMBER(143);
	((arc_input_KeyBind$Axis *) NULL_CHECK((frame[0].o)))->F_max = (jref) (frame[2].o);
	LINE_NUMBER(144);
	((arc_input_KeyBind$Axis *) NULL_CHECK((frame[0].o)))->F_key = (jref) (jobject(nullptr));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_KeyBind$Axis_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind$Axis:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(150);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(152);
	frame[2].o = (checkCast(ctx, &class_arc_input_KeyBind$Axis, (frame[1].o)));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[0].o)))->F_min;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_min;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[0].o)))->F_max;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_max;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[0].o)))->F_key;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_key;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_input_KeyBind$Axis;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field min
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field max
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field key
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_input_KeyBind$Axis[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_arc_input_KeyBind$Axis_equals_java_lang_Object_R_boolean,
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

static jclass interfaces[] { &class_arc_input_KeyBind$KeybindValue, };

static FieldMetadata fields[] {
	{ "min", &class_arc_input_KeyCode, offsetof(arc_input_KeyBind$Axis, F_min), "Larc/input/KeyCode;", 1 },
	{ "max", &class_arc_input_KeyCode, offsetof(arc_input_KeyBind$Axis, F_max), "Larc/input/KeyCode;", 1 },
	{ "key", &class_arc_input_KeyCode, offsetof(arc_input_KeyBind$Axis, F_key), "Larc/input/KeyCode;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_input_KeyBind$Axis_arc_input_KeyCode, 0, "(Larc/input/KeyCode;)V", 1 },
	{ "<init>", (intptr_t) init_arc_input_KeyBind$Axis_arc_input_KeyCode_arc_input_KeyCode, 0, "(Larc/input/KeyCode;Larc/input/KeyCode;)V", 1 },
	{ "equals", (intptr_t) M_arc_input_KeyBind$Axis_equals_java_lang_Object_R_boolean, VTABLE_arc_input_KeyBind$Axis_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
};

Class class_arc_input_KeyBind$Axis{
		.nativeName = (intptr_t) "arc/input/KeyBind$Axis",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_input_KeyBind$Axis),
		.classVtable = (intptr_t) vtable_arc_input_KeyBind$Axis,
		.staticInitializer = (intptr_t) clinit_arc_input_KeyBind$Axis,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_input_KeyBind$Axis,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_input_KeyBind,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_input_KeyBind$Axis = registerClass(&class_arc_input_KeyBind$Axis);

}

