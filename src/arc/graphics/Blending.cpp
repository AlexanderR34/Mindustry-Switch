#include "arc/graphics/Blending.h"
#include "java/lang/Object.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Blending.h"
#include "arc/graphics/Blending_1.h"

extern "C" {

jobject SF_arc_graphics_Blending_normal;
jobject SF_arc_graphics_Blending_additive;
jobject SF_arc_graphics_Blending_disabled;

void mark_arc_graphics_Blending(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_Blending_normal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Blending_normal)->clazz)->markFunction)((jobject) SF_arc_graphics_Blending_normal, mark, depth + 1);
		if (SF_arc_graphics_Blending_additive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Blending_additive)->clazz)->markFunction)((jobject) SF_arc_graphics_Blending_additive, mark, depth + 1);
		if (SF_arc_graphics_Blending_disabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Blending_disabled)->clazz)->markFunction)((jobject) SF_arc_graphics_Blending_disabled, mark, depth + 1);
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
	auto self = (arc_graphics_Blending *) object;
}

void init_arc_graphics_Blending_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Blending:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Blending(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_src = (frame[1].i);
	LINE_NUMBER(20);
	((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_dst = (frame[2].i);
	LINE_NUMBER(21);
	((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_srcAlpha = (frame[1].i);
	LINE_NUMBER(22);
	((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_dstAlpha = (frame[2].i);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Blending_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Blending:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Blending(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_src = (frame[1].i);
	LINE_NUMBER(27);
	((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_dst = (frame[2].i);
	LINE_NUMBER(28);
	((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_srcAlpha = (frame[3].i);
	LINE_NUMBER(29);
	((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_dstAlpha = (frame[4].i);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Blending_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Blending:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	SM_arc_graphics_Gl_enable_int(ctx, (3042));
	LINE_NUMBER(35);
	SM_arc_graphics_Gl_blendFuncSeparate_int_int_int_int(ctx, ((jint)((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_src), ((jint)((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_dst), ((jint)((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_srcAlpha), ((jint)((arc_graphics_Blending *) NULL_CHECK((frame[0].o)))->F_dstAlpha));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_Blending(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Blending:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Blending(ctx);
	{
	LINE_NUMBER(7);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Blending);
	init_arc_graphics_Blending_int_int_int_int(ctx, sp[0].o, (770), (771), (jint(1)), (771));
	clinit_arc_graphics_Blending(ctx);
	SF_arc_graphics_Blending_normal = sp[0].o;
	LINE_NUMBER(8);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Blending);
	init_arc_graphics_Blending_int_int_int_int(ctx, sp[0].o, (770), (jint(1)), (jint(1)), (771));
	clinit_arc_graphics_Blending(ctx);
	SF_arc_graphics_Blending_additive = sp[0].o;
	LINE_NUMBER(9);
	clinit_arc_graphics_Blending$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Blending$1);
	init_arc_graphics_Blending$1_int_int_int_int(ctx, sp[0].o, (770), (771), (jint(1)), (771));
	clinit_arc_graphics_Blending(ctx);
	SF_arc_graphics_Blending_disabled = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Blending[] {
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
	(void *) M_arc_graphics_Blending_apply,
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
	{ "apply", "()V" },
};

static FieldMetadata fields[] {
	{ "normal", &class_arc_graphics_Blending, (intptr_t) &SF_arc_graphics_Blending_normal, "Larc/graphics/Blending;", 25 },
	{ "additive", &class_arc_graphics_Blending, (intptr_t) &SF_arc_graphics_Blending_additive, "Larc/graphics/Blending;", 25 },
	{ "disabled", &class_arc_graphics_Blending, (intptr_t) &SF_arc_graphics_Blending_disabled, "Larc/graphics/Blending;", 25 },
	{ "src", &class_int, offsetof(arc_graphics_Blending, F_src), "I", 17 },
	{ "dst", &class_int, offsetof(arc_graphics_Blending, F_dst), "I", 17 },
	{ "srcAlpha", &class_int, offsetof(arc_graphics_Blending, F_srcAlpha), "I", 17 },
	{ "dstAlpha", &class_int, offsetof(arc_graphics_Blending, F_dstAlpha), "I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_Blending_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Blending_int_int_int_int, 0, "(IIII)V", 1 },
	{ "apply", (intptr_t) M_arc_graphics_Blending_apply, VTABLE_arc_graphics_Blending_apply, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Blending, 0, "()V", 8 },
};

Class class_arc_graphics_Blending{
		.nativeName = (intptr_t) "arc/graphics/Blending",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_Blending),
		.classVtable = (intptr_t) vtable_arc_graphics_Blending,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Blending,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Blending,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Blending = registerClass(&class_arc_graphics_Blending);

}
