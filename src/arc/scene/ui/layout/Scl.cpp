#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/Application.h"

extern "C" {

jfloat SF_arc_scene_ui_layout_Scl_scl;
jfloat SF_arc_scene_ui_layout_Scl_addition;
jfloat SF_arc_scene_ui_layout_Scl_product;
jfloat SF_arc_scene_ui_layout_Scl_debugScale;

void mark_arc_scene_ui_layout_Scl(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_layout_Scl *) object;
}

void init_arc_scene_ui_layout_Scl(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Scl:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Scl(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_layout_Scl_setProduct_float(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Scl:setProduct", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Scl(ctx);
	if (param0 < 0.75f) param0 = 1.0f; // Fix microscopic UI on Switch
	frame[0].f = param0;
	{
	LINE_NUMBER(13);
	clinit_arc_scene_ui_layout_Scl(ctx);
	SF_arc_scene_ui_layout_Scl_product = (frame[0].f);
	LINE_NUMBER(14);
	clinit_arc_scene_ui_layout_Scl(ctx);
	SF_arc_scene_ui_layout_Scl_scl = (jfloat(-1.0f));
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_layout_Scl_setAddition_float(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Scl:setAddition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Scl(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(18);
	clinit_arc_scene_ui_layout_Scl(ctx);
	SF_arc_scene_ui_layout_Scl_addition = (frame[0].f);
	LINE_NUMBER(19);
	clinit_arc_scene_ui_layout_Scl(ctx);
	SF_arc_scene_ui_layout_Scl_scl = (jfloat(-1.0f));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_scene_ui_layout_Scl_scl_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Scl:scl", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Scl(ctx);
	{
	LINE_NUMBER(23);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_scene_ui_layout_Scl_scl_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Scl:scl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Scl(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(27);
	if ((floatCompare((clinit_arc_scene_ui_layout_Scl(ctx), (jfloat)SF_arc_scene_ui_layout_Scl_scl), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(29);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isDesktop_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isDesktop_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isWeb_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isWeb_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(30);
	clinit_arc_scene_ui_layout_Scl(ctx);
	SF_arc_scene_ui_layout_Scl_scl = (clinit_arc_scene_ui_layout_Scl(ctx), (jfloat)SF_arc_scene_ui_layout_Scl_product);
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(33);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jfloat temp0 = (jfloat)((func_arc_Graphics_getDensity_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getDensity_R_float])(ctx, sp[0].o);
	jlong temp1 = (jlong)SM_java_lang_Math_round_double_R_long(ctx, ((jdouble(((temp0 / (jfloat(1.5f))) + (clinit_arc_scene_ui_layout_Scl(ctx), (jfloat)SF_arc_scene_ui_layout_Scl_addition)))) / (jdouble(0.5))));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(temp1)) * (jfloat(0.5f))), (jfloat(1)));
	clinit_arc_scene_ui_layout_Scl(ctx);
	SF_arc_scene_ui_layout_Scl_scl = (temp2 * (clinit_arc_scene_ui_layout_Scl(ctx), (jfloat)SF_arc_scene_ui_layout_Scl_product));
	}
label_1:;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (((frame[0].f) * (clinit_arc_scene_ui_layout_Scl(ctx), (jfloat)SF_arc_scene_ui_layout_Scl_scl)) * (jfloat(1)));
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_ui_layout_Scl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_scene_ui_layout_Scl_debugScale = jfloat(1.0f);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Scl:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Scl(ctx);
	{
	LINE_NUMBER(7);
	clinit_arc_scene_ui_layout_Scl(ctx);
	SF_arc_scene_ui_layout_Scl_scl = (jfloat(-1.0f));
	LINE_NUMBER(8);
	clinit_arc_scene_ui_layout_Scl(ctx);
	SF_arc_scene_ui_layout_Scl_addition = (jfloat(0));
	LINE_NUMBER(9);
	clinit_arc_scene_ui_layout_Scl(ctx);
	SF_arc_scene_ui_layout_Scl_product = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_layout_Scl[] {
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
	{ "scl", &class_float, (intptr_t) &SF_arc_scene_ui_layout_Scl_scl, "F", 10 },
	{ "addition", &class_float, (intptr_t) &SF_arc_scene_ui_layout_Scl_addition, "F", 10 },
	{ "product", &class_float, (intptr_t) &SF_arc_scene_ui_layout_Scl_product, "F", 10 },
	{ "debugScale", &class_float, (intptr_t) &SF_arc_scene_ui_layout_Scl_debugScale, "F", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Scl, 0, "()V", 1 },
	{ "setProduct", (intptr_t) SM_arc_scene_ui_layout_Scl_setProduct_float, 0, "(F)V", 9 },
	{ "setAddition", (intptr_t) SM_arc_scene_ui_layout_Scl_setAddition_float, 0, "(F)V", 9 },
	{ "scl", (intptr_t) SM_arc_scene_ui_layout_Scl_scl_R_float, 0, "()F", 9 },
	{ "scl", (intptr_t) SM_arc_scene_ui_layout_Scl_scl_float_R_float, 0, "(F)F", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_ui_layout_Scl, 0, "()V", 8 },
};

Class class_arc_scene_ui_layout_Scl{
		.nativeName = (intptr_t) "arc/scene/ui/layout/Scl",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_ui_layout_Scl),
		.classVtable = (intptr_t) vtable_arc_scene_ui_layout_Scl,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_layout_Scl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_layout_Scl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_layout_Scl = registerClass(&class_arc_scene_ui_layout_Scl);

}
