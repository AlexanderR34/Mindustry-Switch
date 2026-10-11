#include "mindustry/world/draw/DrawParticles.h"
#include "arc/math/Mathf.h"
#include "arc/math/Rand.h"
#include "arc/math/Angles.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/draw/DrawParticles.h"
#include "arc/graphics/Blending.h"

extern "C" {


void mark_mindustry_world_draw_DrawParticles(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawParticles *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_particleInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particleInterp)->clazz)->markFunction)((jobject) self->F_particleInterp, mark, depth + 1);
	if (self->F_particleSizeInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particleSizeInterp)->clazz)->markFunction)((jobject) self->F_particleSizeInterp, mark, depth + 1);
	if (self->F_blending)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blending)->clazz)->markFunction)((jobject) self->F_blending, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawParticles(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawParticles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawParticles:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawParticles(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f2d585"_j))));
	((mindustry_world_draw_DrawParticles *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_sides = (12);
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(0.5f));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particles = (30);
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleRotation = (jfloat(0));
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleLife = (jfloat(70.0f));
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleRad = (jfloat(7.0f));
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleSize = (jfloat(3.0f));
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_fadeMargin = (jfloat(0.4f));
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_rotateScl = (jfloat(3.0f));
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_reverse = (jint(0));
	((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_poly = (jint(0));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp$PowIn(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Interp$PowIn);
	init_arc_math_Interp$PowIn_float(ctx, sp[1].o, (jfloat(1.5f)));
	((mindustry_world_draw_DrawParticles *) NULL_CHECK(sp[0].o))->F_particleInterp = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_slope;
	((mindustry_world_draw_DrawParticles *) NULL_CHECK(sp[0].o))->F_particleSizeInterp = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_normal;
	((mindustry_world_draw_DrawParticles *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawParticles_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawParticles:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_alpha;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	frame[2].f = (temp0 * temp1);
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_blending;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(31);
	frame[3].f = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleLife));
	LINE_NUMBER(32);
	clinit_mindustry_world_draw_DrawParticles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_id))));
	LINE_NUMBER(33);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particles)) goto label_9;
	}
	{
	LINE_NUMBER(34);
	clinit_mindustry_world_draw_DrawParticles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(2)));
	frame[5].f = (fmodf((temp0 + (frame[3].f)), (jfloat(1))));
	LINE_NUMBER(35);
	if (((jint)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_reverse) == 0) goto label_12;
	}
	{
	frame[5].f = ((jfloat(1)) - (frame[5].f));
	}
label_12:;
	{
	LINE_NUMBER(36);
	frame[6].f = ((jfloat(1)) - (frame[5].f));
	LINE_NUMBER(37);
	clinit_mindustry_world_draw_DrawParticles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(360.0f)));
	frame[7].f = (temp0 + (fmodf(((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_rotateScl)), (jfloat(360.0f)))));
	LINE_NUMBER(38);
	jfloat temp1 = (jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleRad;
	sp[0].o = (jobject)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleInterp;
	jfloat temp2 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	frame[8].f = (temp1 * temp2);
	LINE_NUMBER(40);
	jfloat temp3 = frame[2].f;
	jfloat temp4 = jfloat(1);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_curve_float_float_R_float(ctx, (frame[5].f), ((jfloat(1)) - ((jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_fadeMargin)));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp3 * (temp4 - temp5)));
	LINE_NUMBER(41);
	if (((jint)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_poly) == 0) goto label_17;
	}
	{
	LINE_NUMBER(42);
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp1 = frame[7].f;
	jfloat temp2 = frame[8].f;
	LINE_NUMBER(43);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp1, temp2);
	jfloat temp4 = temp0 + temp3;
	jfloat temp5 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_y);
	jfloat temp6 = frame[7].f;
	jfloat temp7 = frame[8].f;
	LINE_NUMBER(44);
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp6, temp7);
	jfloat temp9 = temp5 + temp8;
	jint temp10 = (jint)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_sides;
	jfloat temp11 = (jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleSize;
	sp[0].o = (jobject)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleSizeInterp;
	jfloat temp12 = frame[5].f;
	LINE_NUMBER(46);
	jfloat temp13 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp12);
	jfloat temp14 = temp11 * temp13;
	jfloat temp15 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	jfloat temp16 = temp14 * temp15;
	jfloat temp17 = (jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleRotation;
	LINE_NUMBER(42);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, temp4, temp9, temp10, temp16, temp17);
	goto label_23;
	}
label_17:;
	{
	LINE_NUMBER(50);
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp1 = frame[7].f;
	jfloat temp2 = frame[8].f;
	LINE_NUMBER(51);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp1, temp2);
	jfloat temp4 = temp0 + temp3;
	jfloat temp5 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_y);
	jfloat temp6 = frame[7].f;
	jfloat temp7 = frame[8].f;
	LINE_NUMBER(52);
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp6, temp7);
	jfloat temp9 = temp5 + temp8;
	jfloat temp10 = (jfloat)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleSize;
	sp[0].o = (jobject)((mindustry_world_draw_DrawParticles *) NULL_CHECK((frame[0].o)))->F_particleSizeInterp;
	jfloat temp11 = frame[5].f;
	LINE_NUMBER(53);
	jfloat temp12 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp11);
	jfloat temp13 = temp10 * temp12;
	jfloat temp14 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	jfloat temp15 = temp13 * temp14;
	LINE_NUMBER(50);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp4, temp9, temp15);
	}
label_23:;
	{
	LINE_NUMBER(33);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(58);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(59);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_1:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawParticles[] {
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
	(void *) M_mindustry_world_draw_DrawParticles_draw_mindustry_gen_Building,
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
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawParticles, F_color), "Larc/graphics/Color;", 1 },
	{ "sides", &class_int, offsetof(mindustry_world_draw_DrawParticles, F_sides), "I", 1 },
	{ "x", &class_float, offsetof(mindustry_world_draw_DrawParticles, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_draw_DrawParticles, F_y), "F", 1 },
	{ "alpha", &class_float, offsetof(mindustry_world_draw_DrawParticles, F_alpha), "F", 1 },
	{ "particles", &class_int, offsetof(mindustry_world_draw_DrawParticles, F_particles), "I", 1 },
	{ "particleRotation", &class_float, offsetof(mindustry_world_draw_DrawParticles, F_particleRotation), "F", 1 },
	{ "particleLife", &class_float, offsetof(mindustry_world_draw_DrawParticles, F_particleLife), "F", 1 },
	{ "particleRad", &class_float, offsetof(mindustry_world_draw_DrawParticles, F_particleRad), "F", 1 },
	{ "particleSize", &class_float, offsetof(mindustry_world_draw_DrawParticles, F_particleSize), "F", 1 },
	{ "fadeMargin", &class_float, offsetof(mindustry_world_draw_DrawParticles, F_fadeMargin), "F", 1 },
	{ "rotateScl", &class_float, offsetof(mindustry_world_draw_DrawParticles, F_rotateScl), "F", 1 },
	{ "reverse", &class_boolean, offsetof(mindustry_world_draw_DrawParticles, F_reverse), "Z", 1 },
	{ "poly", &class_boolean, offsetof(mindustry_world_draw_DrawParticles, F_poly), "Z", 1 },
	{ "particleInterp", &class_arc_math_Interp, offsetof(mindustry_world_draw_DrawParticles, F_particleInterp), "Larc/math/Interp;", 1 },
	{ "particleSizeInterp", &class_arc_math_Interp, offsetof(mindustry_world_draw_DrawParticles, F_particleSizeInterp), "Larc/math/Interp;", 1 },
	{ "blending", &class_arc_graphics_Blending, offsetof(mindustry_world_draw_DrawParticles, F_blending), "Larc/graphics/Blending;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawParticles, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawParticles_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawParticles_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
};

Class class_mindustry_world_draw_DrawParticles{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawParticles",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawParticles),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawParticles,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawParticles,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawParticles,
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
static bool registered_mindustry_world_draw_DrawParticles = registerClass(&class_mindustry_world_draw_DrawParticles);

}
