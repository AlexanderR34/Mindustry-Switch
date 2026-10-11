#include "mindustry/world/draw/DrawSoftParticles.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/math/Rand.h"
#include "arc/math/Angles.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawSoftParticles.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/graphics/Blending.h"

extern "C" {


void mark_mindustry_world_draw_DrawSoftParticles(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawSoftParticles *) object;
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_color2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color2)->clazz)->markFunction)((jobject) self->F_color2, mark, depth + 1);
	if (self->F_particleInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particleInterp)->clazz)->markFunction)((jobject) self->F_particleInterp, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawSoftParticles(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawSoftParticles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawSoftParticles:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawSoftParticles(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e3ae6f"_j))));
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d04d46"_j))));
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK(sp[0].o))->F_color2 = (jref) sp[1].o;
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(0.5f));
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_particles = (30);
	LINE_NUMBER(19);
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_particleLife = (jfloat(70.0f));
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_particleRad = (jfloat(7.0f));
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_particleSize = (jfloat(3.0f));
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_fadeMargin = (jfloat(0.4f));
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_rotateScl = (jfloat(1.5f));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp$PowIn(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Interp$PowIn);
	init_arc_math_Interp$PowIn_float(ctx, sp[1].o, (jfloat(1.5f)));
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK(sp[0].o))->F_particleInterp = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawSoftParticles_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawSoftParticles:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_color;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_alpha;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	frame[2].f = (temp0 * temp1);
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(29);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(31);
	frame[3].f = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_particleLife));
	LINE_NUMBER(32);
	clinit_mindustry_world_draw_DrawSoftParticles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_id))));
	LINE_NUMBER(33);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_particles)) goto label_9;
	}
	{
	LINE_NUMBER(34);
	clinit_mindustry_world_draw_DrawSoftParticles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(1)));
	frame[5].f = (fmodf((temp0 + (frame[3].f)), (jfloat(1))));
	frame[6].f = ((jfloat(1)) - (frame[5].f));
	LINE_NUMBER(35);
	frame[5].f = ((jfloat(1)) - (frame[5].f));
	LINE_NUMBER(36);
	frame[6].f = ((jfloat(1)) - (frame[6].f));
	LINE_NUMBER(38);
	clinit_mindustry_world_draw_DrawSoftParticles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(360.0f)));
	frame[7].f = (temp1 + (fmodf(((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_rotateScl)), (jfloat(360.0f)))));
	LINE_NUMBER(39);
	clinit_mindustry_world_draw_DrawSoftParticles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp2 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(1)));
	frame[8].f = temp2;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_color2;
	SM_arc_graphics_g2d_Draw_tint_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[8].f));
	LINE_NUMBER(41);
	jfloat temp3 = (jfloat)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_particleRad;
	sp[0].o = (jobject)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_particleInterp;
	jfloat temp4 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	frame[9].f = (temp3 * temp4);
	LINE_NUMBER(42);
	jfloat temp5 = frame[2].f;
	jfloat temp6 = jfloat(1);
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_curve_float_float_R_float(ctx, (frame[5].f), ((jfloat(1)) - ((jfloat)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_fadeMargin)));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp5 * (temp6 - temp7)));
	LINE_NUMBER(43);
	jfloat temp8 = ((jfloat)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_particleSize) * (frame[5].f);
	jfloat temp9 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	frame[10].f = ((temp8 * temp9) * (jfloat(2)));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp10 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp11 = frame[7].f;
	jfloat temp12 = frame[9].f;
	LINE_NUMBER(46);
	jfloat temp13 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp11, temp12);
	jfloat temp14 = temp10 + temp13;
	jfloat temp15 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK((frame[0].o)))->F_y);
	jfloat temp16 = frame[7].f;
	jfloat temp17 = frame[9].f;
	LINE_NUMBER(47);
	jfloat temp18 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp16, temp17);
	jfloat temp19 = temp15 + temp18;
	jfloat temp20 = frame[10].f;
	jfloat temp21 = frame[10].f;
	LINE_NUMBER(44);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp14, temp19, temp20, temp21);
	LINE_NUMBER(33);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(52);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(53);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_1:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawSoftParticles_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawSoftParticles:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	M_mindustry_world_draw_DrawBlock_load_mindustry_world_Block(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"circle-shadow"_j))));
	((mindustry_world_draw_DrawSoftParticles *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawSoftParticles[] {
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
	(void *) M_mindustry_world_draw_DrawSoftParticles_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawSoftParticles_load_mindustry_world_Block,
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
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawSoftParticles, F_region), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawSoftParticles, F_color), "Larc/graphics/Color;", 1 },
	{ "color2", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawSoftParticles, F_color2), "Larc/graphics/Color;", 1 },
	{ "x", &class_float, offsetof(mindustry_world_draw_DrawSoftParticles, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_draw_DrawSoftParticles, F_y), "F", 1 },
	{ "alpha", &class_float, offsetof(mindustry_world_draw_DrawSoftParticles, F_alpha), "F", 1 },
	{ "particles", &class_int, offsetof(mindustry_world_draw_DrawSoftParticles, F_particles), "I", 1 },
	{ "particleLife", &class_float, offsetof(mindustry_world_draw_DrawSoftParticles, F_particleLife), "F", 1 },
	{ "particleRad", &class_float, offsetof(mindustry_world_draw_DrawSoftParticles, F_particleRad), "F", 1 },
	{ "particleSize", &class_float, offsetof(mindustry_world_draw_DrawSoftParticles, F_particleSize), "F", 1 },
	{ "fadeMargin", &class_float, offsetof(mindustry_world_draw_DrawSoftParticles, F_fadeMargin), "F", 1 },
	{ "rotateScl", &class_float, offsetof(mindustry_world_draw_DrawSoftParticles, F_rotateScl), "F", 1 },
	{ "particleInterp", &class_arc_math_Interp, offsetof(mindustry_world_draw_DrawSoftParticles, F_particleInterp), "Larc/math/Interp;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawSoftParticles, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawSoftParticles_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawSoftParticles_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawSoftParticles_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawSoftParticles_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawSoftParticles{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawSoftParticles",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawSoftParticles),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawSoftParticles,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawSoftParticles,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawSoftParticles,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawSoftParticles = registerClass(&class_mindustry_world_draw_DrawSoftParticles);

}
