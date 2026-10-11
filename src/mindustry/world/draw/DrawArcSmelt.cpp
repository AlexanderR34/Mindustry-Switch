#include "mindustry/world/draw/DrawArcSmelt.h"
#include "arc/math/Mathf.h"
#include "arc/math/Rand.h"
#include "arc/math/Angles.h"
#include "arc/math/Interp.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowOut.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/draw/DrawArcSmelt.h"
#include "arc/graphics/Blending.h"

extern "C" {


void mark_mindustry_world_draw_DrawArcSmelt(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_draw_DrawBlock(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_draw_DrawArcSmelt *) object;
	if (self->F_flameColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flameColor)->clazz)->markFunction)((jobject) self->F_flameColor, mark, depth + 1);
	if (self->F_midColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_midColor)->clazz)->markFunction)((jobject) self->F_midColor, mark, depth + 1);
	if (self->F_blending)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blending)->clazz)->markFunction)((jobject) self->F_blending, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawArcSmelt(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawArcSmelt(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawArcSmelt:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawArcSmelt(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f58349"_j))));
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK(sp[0].o))->F_flameColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f2d585"_j))));
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK(sp[0].o))->F_midColor = (jref) sp[1].o;
	LINE_NUMBER(11);
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_flameRad = (jfloat(1));
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_circleSpace = (jfloat(2));
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_flameRadiusScl = (jfloat(3.0f));
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_flameRadiusMag = (jfloat(0.3f));
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_circleStroke = (jfloat(1.5f));
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(0.68f));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_particles = (25);
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_particleLife = (jfloat(40.0f));
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_particleRad = (jfloat(7.0f));
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_particleStroke = (jfloat(1.1f));
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_particleLen = (jfloat(3.0f));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_drawCenter = (jint(1));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_additive;
	((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawArcSmelt_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawArcSmelt:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_flameColor;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(22);
	jfloat temp0 = (jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_circleStroke;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * temp1));
	LINE_NUMBER(24);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_flameRadiusScl), ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_flameRadiusMag));
	frame[2].f = temp2;
	LINE_NUMBER(25);
	jfloat temp3 = (jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_alpha;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	frame[3].f = (temp3 * temp4);
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_blending;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_midColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(29);
	if (((jint)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_drawCenter) == 0) goto label_8;
	}
	{
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_x)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_y)), (((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_flameRad) + (frame[2].f)));
	}
label_8:;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_flameColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(32);
	if (((jint)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_drawCenter) == 0) goto label_10;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp1 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_y);
	jfloat temp2 = (((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_flameRad) + ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_circleSpace)) + (frame[2].f);
	jfloat temp3 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, temp0, temp1, (temp2 * temp3));
	}
label_10:;
	{
	LINE_NUMBER(34);
	jfloat temp0 = (jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_particleStroke;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * temp1));
	LINE_NUMBER(36);
	frame[4].f = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_particleLife));
	LINE_NUMBER(37);
	clinit_mindustry_world_draw_DrawArcSmelt(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_id))));
	LINE_NUMBER(38);
	frame[5].i = (jint(0));
	}
label_14:;
	{
	if ((frame[5].i) >= ((jint)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_particles)) goto label_15;
	}
	{
	LINE_NUMBER(39);
	clinit_mindustry_world_draw_DrawArcSmelt(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(1)));
	frame[6].f = (fmodf((temp0 + (frame[4].f)), (jfloat(1))));
	frame[7].f = ((jfloat(1)) - (frame[6].f));
	LINE_NUMBER(40);
	clinit_mindustry_world_draw_DrawArcSmelt(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(360.0f)));
	frame[8].f = temp1;
	LINE_NUMBER(41);
	jfloat temp2 = (jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_particleRad;
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2Out;
	jfloat temp3 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (frame[6].f));
	frame[9].f = (temp2 * temp3);
	LINE_NUMBER(42);
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[8].f), (frame[9].f));
	jfloat temp6 = (temp4 + temp5) + ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp7 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[8].f), (frame[9].f));
	jfloat temp9 = (temp7 + temp8) + ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_y);
	jfloat temp10 = frame[8].f;
	jfloat temp11 = ((jfloat)((mindustry_world_draw_DrawArcSmelt *) NULL_CHECK((frame[0].o)))->F_particleLen) * (frame[7].f);
	jfloat temp12 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(ctx, temp6, temp9, temp10, (temp11 * temp12));
	LINE_NUMBER(38);
	INST_IINC(5, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(45);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(46);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_1:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawArcSmelt[] {
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
	(void *) M_mindustry_world_draw_DrawBlock_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq,
	(void *) M_mindustry_world_draw_DrawArcSmelt_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawBlock_load_mindustry_world_Block,
	(void *) M_mindustry_world_draw_DrawBlock_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter,
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
	{ "getRegionsToOutline", "(Lmindustry/world/Block;Larc/struct/Seq;)V" },
	{ "draw", "(Lmindustry/gen/Building;)V" },
	{ "drawLight", "(Lmindustry/gen/Building;)V" },
	{ "drawPlan", "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "load", "(Lmindustry/world/Block;)V" },
	{ "icons", "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;" },
	{ "finalIcons", "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;" },
	{ "expectCrafter", "(Lmindustry/world/Block;)Lmindustry/world/blocks/production/GenericCrafter;" },
};

static FieldMetadata fields[] {
	{ "flameColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawArcSmelt, F_flameColor), "Larc/graphics/Color;", 1 },
	{ "midColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawArcSmelt, F_midColor), "Larc/graphics/Color;", 1 },
	{ "flameRad", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_flameRad), "F", 1 },
	{ "circleSpace", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_circleSpace), "F", 1 },
	{ "flameRadiusScl", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_flameRadiusScl), "F", 1 },
	{ "flameRadiusMag", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_flameRadiusMag), "F", 1 },
	{ "circleStroke", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_circleStroke), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_y), "F", 1 },
	{ "alpha", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_alpha), "F", 1 },
	{ "particles", &class_int, offsetof(mindustry_world_draw_DrawArcSmelt, F_particles), "I", 1 },
	{ "particleLife", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_particleLife), "F", 1 },
	{ "particleRad", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_particleRad), "F", 1 },
	{ "particleStroke", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_particleStroke), "F", 1 },
	{ "particleLen", &class_float, offsetof(mindustry_world_draw_DrawArcSmelt, F_particleLen), "F", 1 },
	{ "drawCenter", &class_boolean, offsetof(mindustry_world_draw_DrawArcSmelt, F_drawCenter), "Z", 1 },
	{ "blending", &class_arc_graphics_Blending, offsetof(mindustry_world_draw_DrawArcSmelt, F_blending), "Larc/graphics/Blending;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawArcSmelt, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawArcSmelt_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawArcSmelt_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
};

Class class_mindustry_world_draw_DrawArcSmelt{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawArcSmelt",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawArcSmelt),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawArcSmelt,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawArcSmelt,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawArcSmelt,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawArcSmelt = registerClass(&class_mindustry_world_draw_DrawArcSmelt);

}
