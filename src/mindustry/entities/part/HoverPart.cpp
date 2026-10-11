#include "mindustry/entities/part/HoverPart.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "mindustry/entities/part/HoverPart.h"
#include "arc/util/Tmp.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/Time.h"
#include "mindustry/entities/part/DrawPart.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"

extern "C" {


void mark_mindustry_entities_part_HoverPart(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_part_DrawPart(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_part_HoverPart *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_entities_part_HoverPart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_DrawPart(ctx);
}

void init_mindustry_entities_part_HoverPart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/HoverPart:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_HoverPart(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_mindustry_entities_part_DrawPart(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(4.0f));
	LINE_NUMBER(9);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_phase = (jfloat(50.0f));
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(3.0f));
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_minStroke = (jfloat(0.12f));
	LINE_NUMBER(10);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_circles = (jint(2));
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_part_HoverPart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(12);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(13);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_HoverPart_draw_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/HoverPart:draw", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(18);
	if ((floatCompare(((jfloat)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_layer), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_2:;
	{
	LINE_NUMBER(19);
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_under) == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_turretShading) == 0) goto label_3;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((frame[2].f) - (jfloat(1,000000e-04f))));
	}
label_3:;
	{
	LINE_NUMBER(21);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (temp0 + ((jfloat)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_layerOffset)));
	LINE_NUMBER(23);
	if (((jint)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_mirror) == 0) goto label_5;
	}
	{
	if (((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideOverride) != (jint(-1))) goto label_5;
	}
	INST_ICONST(2);
	goto label_6;
label_5:;
	INST_ICONST(1);
label_6:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(28);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_circles)) goto label_10;
	}
	{
	LINE_NUMBER(29);
	frame[5].f = (fmodf((((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_phase)) + ((jfloat((frame[4].i))) / (jfloat(((jint)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_circles))))), (jfloat(1))));
	LINE_NUMBER(30);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((((jfloat(1)) - (frame[5].f)) * ((jfloat)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_stroke)) + ((jfloat)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_minStroke)));
	LINE_NUMBER(32);
	frame[6].i = (jint(0));
	}
label_14:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_15;
	}
	{
	LINE_NUMBER(34);
	if (((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideOverride) != (jint(-1))) goto label_17;
	}
	INST_ILOAD(6);
	goto label_18;
label_17:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[-1].o))->F_sideOverride;
label_18:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(36);
	if ((frame[7].i) != 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(-1);
label_21:;
	{
	sp -= 1;
	frame[8].f = (jfloat((sp[0].i * ((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideMultiplier))));
	LINE_NUMBER(37);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_x) * (frame[8].f)), ((jfloat)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(40);
	jfloat temp0 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[9].f = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(41);
	jfloat temp1 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[10].f = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(43);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, (frame[9].f), (frame[10].f), ((jint)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_sides), (((jfloat)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_radius) * (frame[5].f)), (((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) + (((jfloat)((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_rotation) * (frame[8].f))));
	LINE_NUMBER(32);
	INST_IINC(6, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(28);
	INST_IINC(4, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(47);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(49);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_HoverPart_load_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/HoverPart:load", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_part_HoverPart[] {
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
	(void *) M_mindustry_entities_part_HoverPart_draw_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_HoverPart_load_java_lang_String,
	(void *) M_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq,
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
	{ "draw", "(Lmindustry/entities/part/DrawPart$PartParams;)V" },
	{ "load", "(Ljava/lang/String;)V" },
	{ "getOutlines", "(Larc/struct/Seq;)V" },
};

static FieldMetadata fields[] {
	{ "radius", &class_float, offsetof(mindustry_entities_part_HoverPart, F_radius), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_part_HoverPart, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_part_HoverPart, F_y), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_part_HoverPart, F_rotation), "F", 1 },
	{ "phase", &class_float, offsetof(mindustry_entities_part_HoverPart, F_phase), "F", 1 },
	{ "stroke", &class_float, offsetof(mindustry_entities_part_HoverPart, F_stroke), "F", 1 },
	{ "minStroke", &class_float, offsetof(mindustry_entities_part_HoverPart, F_minStroke), "F", 1 },
	{ "circles", &class_int, offsetof(mindustry_entities_part_HoverPart, F_circles), "I", 1 },
	{ "sides", &class_int, offsetof(mindustry_entities_part_HoverPart, F_sides), "I", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_part_HoverPart, F_color), "Larc/graphics/Color;", 1 },
	{ "mirror", &class_boolean, offsetof(mindustry_entities_part_HoverPart, F_mirror), "Z", 1 },
	{ "layer", &class_float, offsetof(mindustry_entities_part_HoverPart, F_layer), "F", 1 },
	{ "layerOffset", &class_float, offsetof(mindustry_entities_part_HoverPart, F_layerOffset), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_part_HoverPart, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_part_HoverPart_draw_mindustry_entities_part_DrawPart$PartParams, VTABLE_mindustry_entities_part_HoverPart_draw_mindustry_entities_part_DrawPart$PartParams, "(Lmindustry/entities/part/DrawPart$PartParams;)V", 1 },
	{ "load", (intptr_t) M_mindustry_entities_part_HoverPart_load_java_lang_String, VTABLE_mindustry_entities_part_HoverPart_load_java_lang_String, "(Ljava/lang/String;)V", 1 },
};

Class class_mindustry_entities_part_HoverPart{
		.nativeName = (intptr_t) "mindustry/entities/part/HoverPart",
		.parentClass = (intptr_t) &class_mindustry_entities_part_DrawPart,
		.size = sizeof(mindustry_entities_part_HoverPart),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_HoverPart,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_HoverPart,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_part_HoverPart,
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
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_HoverPart = registerClass(&class_mindustry_entities_part_HoverPart);

}
