#include "mindustry/ui/dialogs/EffectsDialog_BoundsBatch.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g2d/Batch.h"
#include "mindustry/ui/dialogs/EffectsDialog_BoundsBatch.h"
#include "java/lang/Float.h"
#include "mindustry/ui/dialogs/EffectsDialog.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_mindustry_ui_dialogs_EffectsDialog$BoundsBatch(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_g2d_Batch(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_EffectsDialog$BoundsBatch *) object;
}

void clinit_mindustry_ui_dialogs_EffectsDialog$BoundsBatch(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_Batch(ctx);
}

void init_mindustry_ui_dialogs_EffectsDialog$BoundsBatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EffectsDialog$BoundsBatch:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_EffectsDialog$BoundsBatch(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(129);
	init_arc_graphics_g2d_Batch(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EffectsDialog$BoundsBatch:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	((mindustry_ui_dialogs_EffectsDialog$BoundsBatch *) NULL_CHECK((frame[0].o)))->F_max = (jfloat(0));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EffectsDialog$BoundsBatch:max", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(138);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[5].f));
	if (temp0 == 0) goto label_4;
	}
	goto label_5;
label_4:;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_ui_dialogs_EffectsDialog$BoundsBatch *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[5].f));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((mindustry_ui_dialogs_EffectsDialog$BoundsBatch *) NULL_CHECK(sp[0].o))->F_max = temp2;
	}
label_5:;
	{
	LINE_NUMBER(137);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(141);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EffectsDialog$BoundsBatch:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(145);
	frame[5].i = (frame[3].i);
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(2)));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[5].i)));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (jint(1)))));
	((func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(145);
	INST_IINC(5, 6);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EffectsDialog$BoundsBatch:draw", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	{
	LINE_NUMBER(152);
	frame[9].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(153);
	frame[10].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(154);
	frame[11].f = (-(frame[4].f));
	LINE_NUMBER(155);
	frame[12].f = (-(frame[5].f));
	LINE_NUMBER(156);
	frame[13].f = ((frame[6].f) - (frame[4].f));
	LINE_NUMBER(157);
	frame[14].f = ((frame[7].f) - (frame[5].f));
	LINE_NUMBER(158);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[8].f));
	frame[15].f = temp0;
	LINE_NUMBER(159);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[8].f));
	frame[16].f = temp1;
	LINE_NUMBER(160);
	frame[17].f = ((((frame[15].f) * (frame[11].f)) - ((frame[16].f) * (frame[12].f))) + (frame[9].f));
	LINE_NUMBER(161);
	frame[18].f = ((((frame[16].f) * (frame[11].f)) + ((frame[15].f) * (frame[12].f))) + (frame[10].f));
	LINE_NUMBER(162);
	frame[19].f = ((((frame[15].f) * (frame[11].f)) - ((frame[16].f) * (frame[14].f))) + (frame[9].f));
	LINE_NUMBER(163);
	frame[20].f = ((((frame[16].f) * (frame[11].f)) + ((frame[15].f) * (frame[14].f))) + (frame[10].f));
	LINE_NUMBER(164);
	frame[21].f = ((((frame[15].f) * (frame[13].f)) - ((frame[16].f) * (frame[14].f))) + (frame[9].f));
	LINE_NUMBER(165);
	frame[22].f = ((((frame[16].f) * (frame[13].f)) + ((frame[15].f) * (frame[14].f))) + (frame[10].f));
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (8));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (frame[17].f);
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))) = (frame[18].f);
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))) = (frame[19].f);
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))) = (frame[20].f);
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))) = (frame[21].f);
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))) = (frame[22].f);
	ARRAY_ACCESS(jfloat, sp[1].o, (6)) = ((frame[17].f) + ((frame[21].f) - (frame[19].f)));
	ARRAY_ACCESS(jfloat, sp[1].o, (7)) = ((frame[22].f) - ((frame[20].f) - (frame[18].f)));
	((func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EffectsDialog$BoundsBatch:flush", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_EffectsDialog$BoundsBatch[] {
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
	(void *) M_arc_graphics_g2d_Batch_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_Batch_z_float,
	(void *) M_arc_graphics_g2d_Batch_setSort_boolean,
	(void *) M_arc_graphics_g2d_Batch_setPackedColor_float,
	(void *) M_arc_graphics_g2d_Batch_getPackedColor_R_float,
	(void *) M_arc_graphics_g2d_Batch_setPackedMixColor_float,
	(void *) M_arc_graphics_g2d_Batch_getPackedMixColor_R_float,
	(void *) M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_Texture_Array1_float_int_int,
	(void *) M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float,
	(void *) M_arc_graphics_g2d_Batch_draw_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_flush,
	(void *) M_arc_graphics_g2d_Batch_discard,
	(void *) M_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending,
	(void *) M_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending,
	(void *) M_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setProjection_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setTransform_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setupMatrices,
	(void *) M_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean,
	(void *) M_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader,
	(void *) M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_reset,
	(void *) M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "z", "(F)V" },
	{ "setSort", "(Z)V" },
	{ "setPackedColor", "(F)V" },
	{ "getPackedColor", "()F" },
	{ "setPackedMixColor", "(F)V" },
	{ "getPackedMixColor", "()F" },
	{ "draw", "(Larc/graphics/Texture;[FII)V" },
	{ "draw", "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V" },
	{ "draw", "(Ljava/lang/Runnable;)V" },
	{ "flush", "()V" },
	{ "discard", "()V" },
	{ "setBlending", "(Larc/graphics/Blending;)V" },
	{ "getBlending", "()Larc/graphics/Blending;" },
	{ "getProjection", "()Larc/math/Mat;" },
	{ "getTransform", "()Larc/math/Mat;" },
	{ "setProjection", "(Larc/math/Mat;)V" },
	{ "setTransform", "(Larc/math/Mat;)V" },
	{ "setupMatrices", "()V" },
	{ "switchTexture", "(Larc/graphics/Texture;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;Z)V" },
	{ "getShader", "()Larc/graphics/gl/Shader;" },
	{ "reset", "()V" },
	{ "max", "([F)V" },
};

static FieldMetadata fields[] {
	{ "max", &class_float, offsetof(mindustry_ui_dialogs_EffectsDialog$BoundsBatch, F_max), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_EffectsDialog$BoundsBatch, 0, "()V", 0 },
	{ "reset", (intptr_t) M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_reset, VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_reset, "()V", 0 },
	{ "max", (intptr_t) M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float, VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float, "([F)V", 128 },
	{ "draw", (intptr_t) M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_Texture_Array1_float_int_int, VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_Texture_Array1_float_int_int, "(Larc/graphics/Texture;[FII)V", 4 },
	{ "draw", (intptr_t) M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V", 4 },
	{ "flush", (intptr_t) M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_flush, VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_flush, "()V", 4 },
};

Class class_mindustry_ui_dialogs_EffectsDialog$BoundsBatch{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/EffectsDialog$BoundsBatch",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_Batch,
		.size = sizeof(mindustry_ui_dialogs_EffectsDialog$BoundsBatch),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_EffectsDialog$BoundsBatch,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_EffectsDialog$BoundsBatch,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_EffectsDialog$BoundsBatch,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_EffectsDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_EffectsDialog$BoundsBatch = registerClass(&class_mindustry_ui_dialogs_EffectsDialog$BoundsBatch);

}

