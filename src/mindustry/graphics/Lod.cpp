#include "mindustry/graphics/Lod.h"
#include "arc/math/Mathf.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "mindustry/graphics/Lod.h"
#include "arc/graphics/Camera.h"

extern "C" {

jfloat SF_mindustry_graphics_Lod_threshold1;
jfloat SF_mindustry_graphics_Lod_threshold2;
jfloat SF_mindustry_graphics_Lod_fade;
jbool SF_mindustry_graphics_Lod_disable;
jbool SF_mindustry_graphics_Lod_l1;
jfloat SF_mindustry_graphics_Lod_alpha1;
jbool SF_mindustry_graphics_Lod_l2;
jfloat SF_mindustry_graphics_Lod_alpha2;

void mark_mindustry_graphics_Lod(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Lod *) object;
}

void init_mindustry_graphics_Lod(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Lod:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Lod(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Lod_update(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Lod:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Lod(ctx);
	{
	LINE_NUMBER(20);
	if ((clinit_mindustry_graphics_Lod(ctx), (jint)SF_mindustry_graphics_Lod_disable) == 0) goto label_1;
	}
	{
	LINE_NUMBER(21);
	jint temp0 = jint(1);
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_l2 = temp0;
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_l1 = temp0;
	LINE_NUMBER(22);
	jfloat temp3 = jfloat(1);
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_alpha1 = temp3;
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_alpha2 = temp3;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(25);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[0].f = (temp1 / ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width));
	LINE_NUMBER(27);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((frame[0].f) - (jfloat(1.4f))) / (jfloat(0.2f))));
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_alpha1 = temp2;
	LINE_NUMBER(28);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((frame[0].f) - (jfloat(0.8f))) / (jfloat(0.2f))));
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_alpha2 = temp3;
	LINE_NUMBER(29);
	if ((floatCompare((clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha1), (jfloat(3,921569e-03f)), -1)) < 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_l1 = sp[0].i;
	LINE_NUMBER(30);
	if ((floatCompare((clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha2), (jfloat(3,921569e-03f)), -1)) < 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_l2 = sp[0].i;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_Lod(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_Lod_threshold1 = jfloat(1.4f);
	SF_mindustry_graphics_Lod_threshold2 = jfloat(0.8f);
	SF_mindustry_graphics_Lod_fade = jfloat(0.2f);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Lod:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Lod(ctx);
	{
	LINE_NUMBER(11);
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_disable = (jint(0));
	LINE_NUMBER(13);
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_l1 = (jint(1));
	LINE_NUMBER(14);
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_alpha1 = (jfloat(1));
	LINE_NUMBER(16);
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_l2 = (jint(1));
	LINE_NUMBER(17);
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_alpha2 = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Lod[] {
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
	{ "threshold1", &class_float, (intptr_t) &SF_mindustry_graphics_Lod_threshold1, "F", 26 },
	{ "threshold2", &class_float, (intptr_t) &SF_mindustry_graphics_Lod_threshold2, "F", 26 },
	{ "fade", &class_float, (intptr_t) &SF_mindustry_graphics_Lod_fade, "F", 26 },
	{ "disable", &class_boolean, (intptr_t) &SF_mindustry_graphics_Lod_disable, "Z", 9 },
	{ "l1", &class_boolean, (intptr_t) &SF_mindustry_graphics_Lod_l1, "Z", 9 },
	{ "alpha1", &class_float, (intptr_t) &SF_mindustry_graphics_Lod_alpha1, "F", 9 },
	{ "l2", &class_boolean, (intptr_t) &SF_mindustry_graphics_Lod_l2, "Z", 9 },
	{ "alpha2", &class_float, (intptr_t) &SF_mindustry_graphics_Lod_alpha2, "F", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Lod, 0, "()V", 1 },
	{ "update", (intptr_t) SM_mindustry_graphics_Lod_update, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_Lod, 0, "()V", 8 },
};

Class class_mindustry_graphics_Lod{
		.nativeName = (intptr_t) "mindustry/graphics/Lod",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Lod),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Lod,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Lod,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Lod,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Lod = registerClass(&class_mindustry_graphics_Lod);

}
