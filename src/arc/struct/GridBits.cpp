#include "arc/struct/GridBits.h"
#include "arc/struct/GridBits.h"
#include "java/lang/Object.h"
#include "arc/struct/Bits.h"

extern "C" {


void mark_arc_struct_GridBits(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_GridBits *) object;
	if (self->F_bits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bits)->clazz)->markFunction)((jobject) self->F_bits, mark, depth + 1);
}

void clinit_arc_struct_GridBits(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_GridBits_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridBits:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_GridBits(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(9);
	((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits_int(ctx, sp[1].o, ((frame[1].i) * (frame[2].i)));
	((arc_struct_GridBits *) NULL_CHECK(sp[0].o))->F_bits = (jref) sp[1].o;
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_GridBits_set_arc_struct_GridBits(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridBits:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_bits;
	sp[1].o = (jobject)((arc_struct_GridBits *) NULL_CHECK((frame[1].o)))->F_bits;
	((func_arc_struct_Bits_set_arc_struct_Bits) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_arc_struct_Bits])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_GridBits_get_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridBits:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(18);
	if ((frame[1].i) >= ((jint)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_width)) goto label_1;
	}
	{
	if ((frame[2].i) >= ((jint)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_height)) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	INST_ILOAD(2);
	if ((--sp)->i >= 0) goto label_2;
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, ((frame[1].i) + ((frame[2].i) * ((jint)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_width))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_struct_GridBits_set_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridBits:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_bits;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((frame[1].i) + ((frame[2].i) * ((jint)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_width))));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_GridBits_set_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridBits:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(27);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_bits;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((frame[1].i) + ((frame[2].i) * ((jint)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_width))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_bits;
	((func_arc_struct_Bits_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear_int])(ctx, sp[0].o, ((frame[1].i) + ((frame[2].i) * ((jint)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_width))));
	}
label_3:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_GridBits_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridBits:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_bits;
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, sp[0].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_GridBits_width_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridBits:width", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return ((jint)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_GridBits_height_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridBits:height", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return ((jint)((arc_struct_GridBits *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_GridBits[] {
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
	(void *) M_arc_struct_GridBits_set_arc_struct_GridBits,
	(void *) M_arc_struct_GridBits_get_int_int_R_boolean,
	(void *) M_arc_struct_GridBits_set_int_int,
	(void *) M_arc_struct_GridBits_set_int_int_boolean,
	(void *) M_arc_struct_GridBits_clear,
	(void *) M_arc_struct_GridBits_width_R_int,
	(void *) M_arc_struct_GridBits_height_R_int,
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
	{ "set", "(Larc/struct/GridBits;)V" },
	{ "get", "(II)Z" },
	{ "set", "(II)V" },
	{ "set", "(IIZ)V" },
	{ "clear", "()V" },
	{ "width", "()I" },
	{ "height", "()I" },
};

static FieldMetadata fields[] {
	{ "bits", &class_arc_struct_Bits, offsetof(arc_struct_GridBits, F_bits), "Larc/struct/Bits;", 18 },
	{ "width", &class_int, offsetof(arc_struct_GridBits, F_width), "I", 18 },
	{ "height", &class_int, offsetof(arc_struct_GridBits, F_height), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_GridBits_int_int, 0, "(II)V", 1 },
	{ "set", (intptr_t) M_arc_struct_GridBits_set_arc_struct_GridBits, VTABLE_arc_struct_GridBits_set_arc_struct_GridBits, "(Larc/struct/GridBits;)V", 1 },
	{ "get", (intptr_t) M_arc_struct_GridBits_get_int_int_R_boolean, VTABLE_arc_struct_GridBits_get_int_int_R_boolean, "(II)Z", 1 },
	{ "set", (intptr_t) M_arc_struct_GridBits_set_int_int, VTABLE_arc_struct_GridBits_set_int_int, "(II)V", 1 },
	{ "set", (intptr_t) M_arc_struct_GridBits_set_int_int_boolean, VTABLE_arc_struct_GridBits_set_int_int_boolean, "(IIZ)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_GridBits_clear, VTABLE_arc_struct_GridBits_clear, "()V", 1 },
	{ "width", (intptr_t) M_arc_struct_GridBits_width_R_int, VTABLE_arc_struct_GridBits_width_R_int, "()I", 1 },
	{ "height", (intptr_t) M_arc_struct_GridBits_height_R_int, VTABLE_arc_struct_GridBits_height_R_int, "()I", 1 },
};

Class class_arc_struct_GridBits{
		.nativeName = (intptr_t) "arc/struct/GridBits",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_GridBits),
		.classVtable = (intptr_t) vtable_arc_struct_GridBits,
		.staticInitializer = (intptr_t) clinit_arc_struct_GridBits,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_GridBits,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_GridBits = registerClass(&class_arc_struct_GridBits);

}
