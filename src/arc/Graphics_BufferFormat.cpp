#include "arc/Graphics_BufferFormat.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/Graphics_BufferFormat.h"

extern "C" {


void mark_arc_Graphics$BufferFormat(jobject object, jint mark, jint depth) {
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
	auto self = (arc_Graphics$BufferFormat *) object;
}

void clinit_arc_Graphics$BufferFormat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_Graphics$BufferFormat_int_int_int_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jbool param7) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics$BufferFormat:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Graphics$BufferFormat(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(338);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(339);
	((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_r = (frame[1].i);
	LINE_NUMBER(340);
	((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_g = (frame[2].i);
	LINE_NUMBER(341);
	((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].i);
	LINE_NUMBER(342);
	((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_a = (frame[4].i);
	LINE_NUMBER(343);
	((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_depth = (frame[5].i);
	LINE_NUMBER(344);
	((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_stencil = (frame[6].i);
	LINE_NUMBER(345);
	((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_samples = (frame[7].i);
	LINE_NUMBER(346);
	((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_coverageSampling = (frame[8].i);
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_Graphics$BufferFormat_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics$BufferFormat:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"r: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_r));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", g: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_g));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", b: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_b));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", a: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_a));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", depth: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_depth));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", stencil: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_stencil));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", num samples: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_samples));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", coverage sampling: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_Graphics$BufferFormat *) NULL_CHECK((frame[0].o)))->F_coverageSampling));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_Graphics$BufferFormat[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_Graphics$BufferFormat_toString_R_java_lang_String,
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
	{ "r", &class_int, offsetof(arc_Graphics$BufferFormat, F_r), "I", 17 },
	{ "g", &class_int, offsetof(arc_Graphics$BufferFormat, F_g), "I", 17 },
	{ "b", &class_int, offsetof(arc_Graphics$BufferFormat, F_b), "I", 17 },
	{ "a", &class_int, offsetof(arc_Graphics$BufferFormat, F_a), "I", 17 },
	{ "depth", &class_int, offsetof(arc_Graphics$BufferFormat, F_depth), "I", 17 },
	{ "stencil", &class_int, offsetof(arc_Graphics$BufferFormat, F_stencil), "I", 17 },
	{ "samples", &class_int, offsetof(arc_Graphics$BufferFormat, F_samples), "I", 17 },
	{ "coverageSampling", &class_boolean, offsetof(arc_Graphics$BufferFormat, F_coverageSampling), "Z", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_Graphics$BufferFormat_int_int_int_int_int_int_int_boolean, 0, "(IIIIIIIZ)V", 1 },
	{ "toString", (intptr_t) M_arc_Graphics$BufferFormat_toString_R_java_lang_String, VTABLE_arc_Graphics$BufferFormat_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_Graphics$BufferFormat{
		.nativeName = (intptr_t) "arc/Graphics$BufferFormat",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_Graphics$BufferFormat),
		.classVtable = (intptr_t) vtable_arc_Graphics$BufferFormat,
		.staticInitializer = (intptr_t) clinit_arc_Graphics$BufferFormat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Graphics$BufferFormat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_Graphics,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Graphics$BufferFormat = registerClass(&class_arc_Graphics$BufferFormat);

}

