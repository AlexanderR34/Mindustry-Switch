#include "mindustry/world/draw/DrawCircles.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/math/Interp.h"
#include "mindustry/world/draw/DrawCircles.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"

extern "C" {


void mark_mindustry_world_draw_DrawCircles(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawCircles *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_strokeInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strokeInterp)->clazz)->markFunction)((jobject) self->F_strokeInterp, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawCircles(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawCircles_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawCircles:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawCircles(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"7457ce"_j))));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_amount = (jint(5));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_sides = (15);
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_strokeMin = (jfloat(0.2f));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_strokeMax = (jfloat(2));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_timeScl = (jfloat(160.0f));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(12.0f));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_radiusOffset = (jfloat(0));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow3In;
	((mindustry_world_draw_DrawCircles *) NULL_CHECK(sp[0].o))->F_strokeInterp = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[1].o);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawCircles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawCircles:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawCircles(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"7457ce"_j))));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_amount = (jint(5));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_sides = (15);
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_strokeMin = (jfloat(0.2f));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_strokeMax = (jfloat(2));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_timeScl = (jfloat(160.0f));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(12.0f));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_radiusOffset = (jfloat(0));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow3In;
	((mindustry_world_draw_DrawCircles *) NULL_CHECK(sp[0].o))->F_strokeInterp = (jref) sp[1].o;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawCircles_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawCircles:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(1,000000e-03f)), 1)) > 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (temp0 * ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a)));
	LINE_NUMBER(30);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_amount)) goto label_4;
	}
	{
	LINE_NUMBER(31);
	frame[3].f = (fmodf((((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_timeScl)) + ((jfloat((frame[2].i))) / (jfloat(((jint)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_amount))))), (jfloat(1))));
	LINE_NUMBER(33);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_strokeInterp;
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_strokeMax), ((jfloat)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_strokeMin), (frame[3].f));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * temp1));
	LINE_NUMBER(34);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_x)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_y)), ((jint)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_sides), (((jfloat)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_radiusOffset) + ((frame[3].f) * ((jfloat)((mindustry_world_draw_DrawCircles *) NULL_CHECK((frame[0].o)))->F_radius))));
	LINE_NUMBER(30);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(37);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawCircles[] {
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
	(void *) M_mindustry_world_draw_DrawCircles_draw_mindustry_gen_Building,
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
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawCircles, F_color), "Larc/graphics/Color;", 1 },
	{ "amount", &class_int, offsetof(mindustry_world_draw_DrawCircles, F_amount), "I", 1 },
	{ "sides", &class_int, offsetof(mindustry_world_draw_DrawCircles, F_sides), "I", 1 },
	{ "strokeMin", &class_float, offsetof(mindustry_world_draw_DrawCircles, F_strokeMin), "F", 1 },
	{ "strokeMax", &class_float, offsetof(mindustry_world_draw_DrawCircles, F_strokeMax), "F", 1 },
	{ "timeScl", &class_float, offsetof(mindustry_world_draw_DrawCircles, F_timeScl), "F", 1 },
	{ "radius", &class_float, offsetof(mindustry_world_draw_DrawCircles, F_radius), "F", 1 },
	{ "radiusOffset", &class_float, offsetof(mindustry_world_draw_DrawCircles, F_radiusOffset), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_world_draw_DrawCircles, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_draw_DrawCircles, F_y), "F", 1 },
	{ "strokeInterp", &class_arc_math_Interp, offsetof(mindustry_world_draw_DrawCircles, F_strokeInterp), "Larc/math/Interp;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawCircles_arc_graphics_Color, 0, "(Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawCircles, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawCircles_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawCircles_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
};

Class class_mindustry_world_draw_DrawCircles{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawCircles",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawCircles),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawCircles,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawCircles,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawCircles,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawCircles = registerClass(&class_mindustry_world_draw_DrawCircles);

}
