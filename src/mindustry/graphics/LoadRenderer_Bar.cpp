#include "mindustry/graphics/LoadRenderer_Bar.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/LoadRenderer.h"
#include "mindustry/graphics/LoadRenderer_Bar_invoke_arc_func_Boolp_3.h"
#include "java/lang/String.h"
#include "mindustry/graphics/LoadRenderer_Bar_invoke_arc_func_Boolp_2.h"
#include "mindustry/graphics/LoadRenderer_Bar_invoke_arc_func_Floatp_1.h"
#include "arc/func/Boolp.h"
#include "mindustry/graphics/LoadRenderer_Bar.h"
#include "arc/func/Floatp.h"

extern "C" {


void mark_mindustry_graphics_LoadRenderer$Bar(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_LoadRenderer$Bar *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_red)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_red)->clazz)->markFunction)((jobject) self->F_red, mark, depth + 1);
	if (self->F_valid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_valid)->clazz)->markFunction)((jobject) self->F_valid, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
}

void clinit_mindustry_graphics_LoadRenderer$Bar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer$Bar:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(498);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(499);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer$Bar_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer$Bar_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (frame[2].f);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer$Bar_invoke_arc_func_Boolp_2(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer$Bar_invoke_arc_func_Boolp_2 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar_invoke_arc_func_Boolp_2);
		proxy->F_field0 = (frame[3].i);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK(sp[0].o))->F_red = (jref) sp[1].o;
	LINE_NUMBER(501);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer$Bar_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer$Bar_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar_invoke_arc_func_Boolp_3);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK(sp[0].o))->F_valid = (jref) sp[1].o;
	LINE_NUMBER(502);
	((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(503);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_arc_func_Boolp_arc_func_Floatp_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer$Bar:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(505);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(506);
	((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK((frame[0].o)))->F_valid = (jref) (frame[2].o);
	LINE_NUMBER(507);
	((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[3].o);
	LINE_NUMBER(508);
	((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK((frame[0].o)))->F_red = (jref) (frame[4].o);
	LINE_NUMBER(509);
	((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_LoadRenderer$Bar_valid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer$Bar:valid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK((frame[0].o)))->F_valid;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_LoadRenderer$Bar_red_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer$Bar:red", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK((frame[0].o)))->F_red;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_graphics_LoadRenderer$Bar_value_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer$Bar:value", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_LoadRenderer$Bar_lambda$new$2_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer$Bar:lambda$new$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	{
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_LoadRenderer$Bar_lambda$new$1_boolean_R_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer$Bar:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_graphics_LoadRenderer$Bar_lambda$new$0_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer$Bar:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return (frame[0].f);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_LoadRenderer$Bar[] {
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
	(void *) M_mindustry_graphics_LoadRenderer$Bar_valid_R_boolean,
	(void *) M_mindustry_graphics_LoadRenderer$Bar_red_R_boolean,
	(void *) M_mindustry_graphics_LoadRenderer$Bar_value_R_float,
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
	{ "valid", "()Z" },
	{ "red", "()Z" },
	{ "value", "()F" },
};

static FieldMetadata fields[] {
	{ "value", &class_arc_func_Floatp, offsetof(mindustry_graphics_LoadRenderer$Bar, F_value), "Larc/func/Floatp;", 16 },
	{ "red", &class_arc_func_Boolp, offsetof(mindustry_graphics_LoadRenderer$Bar, F_red), "Larc/func/Boolp;", 16 },
	{ "valid", &class_arc_func_Boolp, offsetof(mindustry_graphics_LoadRenderer$Bar, F_valid), "Larc/func/Boolp;", 16 },
	{ "text", &class_java_lang_String, offsetof(mindustry_graphics_LoadRenderer$Bar, F_text), "Ljava/lang/String;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_float_boolean, 0, "(Ljava/lang/String;FZ)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_arc_func_Boolp_arc_func_Floatp_arc_func_Boolp, 0, "(Ljava/lang/String;Larc/func/Boolp;Larc/func/Floatp;Larc/func/Boolp;)V", 1 },
	{ "valid", (intptr_t) M_mindustry_graphics_LoadRenderer$Bar_valid_R_boolean, VTABLE_mindustry_graphics_LoadRenderer$Bar_valid_R_boolean, "()Z", 0 },
	{ "red", (intptr_t) M_mindustry_graphics_LoadRenderer$Bar_red_R_boolean, VTABLE_mindustry_graphics_LoadRenderer$Bar_red_R_boolean, "()Z", 0 },
	{ "value", (intptr_t) M_mindustry_graphics_LoadRenderer$Bar_value_R_float, VTABLE_mindustry_graphics_LoadRenderer$Bar_value_R_float, "()F", 0 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_graphics_LoadRenderer$Bar_lambda$new$2_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_graphics_LoadRenderer$Bar_lambda$new$1_boolean_R_boolean, 0, "(Z)Z", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_graphics_LoadRenderer$Bar_lambda$new$0_float_R_float, 0, "(F)F", 4106 },
};

Class class_mindustry_graphics_LoadRenderer$Bar{
		.nativeName = (intptr_t) "mindustry/graphics/LoadRenderer$Bar",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_LoadRenderer$Bar),
		.classVtable = (intptr_t) vtable_mindustry_graphics_LoadRenderer$Bar,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_LoadRenderer$Bar,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_LoadRenderer$Bar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_LoadRenderer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_LoadRenderer$Bar = registerClass(&class_mindustry_graphics_LoadRenderer$Bar);

}

