#include "mindustry/entities/part/FlarePart.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "arc/util/Time.h"
#include "mindustry/entities/part/DrawPart.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/entities/part/FlarePart.h"

extern "C" {


void mark_mindustry_entities_part_FlarePart(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_part_FlarePart *) object;
	if (self->F_color1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color1)->clazz)->markFunction)((jobject) self->F_color1, mark, depth + 1);
	if (self->F_color2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color2)->clazz)->markFunction)((jobject) self->F_color2, mark, depth + 1);
	if (self->F_progress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_progress)->clazz)->markFunction)((jobject) self->F_progress, mark, depth + 1);
}

void clinit_mindustry_entities_part_FlarePart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_DrawPart(ctx);
}

void init_mindustry_entities_part_FlarePart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/FlarePart:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_FlarePart(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_entities_part_DrawPart(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(11);
	((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(100.0f));
	((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_radiusTo = (jfloat(-1.0f));
	((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(6.0f));
	((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_innerScl = (jfloat(0.5f));
	((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_innerRadScl = (jfloat(0.33f));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_techBlue;
	((mindustry_entities_part_FlarePart *) NULL_CHECK(sp[0].o))->F_color1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_part_FlarePart *) NULL_CHECK(sp[0].o))->F_color2 = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_clampProgress = (jint(1));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_FlarePart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(110.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_FlarePart_draw_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/FlarePart:draw", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(22);
	if ((floatCompare(((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_layer), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_2:;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_progress;
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o), ((jint)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_clampProgress));
	frame[3].f = temp0;
	LINE_NUMBER(25);
	if (((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideOverride) != (jint(-1))) goto label_4;
	}
	INST_ICONST(0);
	goto label_5;
label_4:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[-1].o))->F_sideOverride;
label_5:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(27);
	if ((frame[4].i) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(-1);
label_8:;
	{
	sp -= 1;
	frame[5].f = (jfloat((sp[0].i * ((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideMultiplier))));
	LINE_NUMBER(28);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_x) * (frame[5].f)), ((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(31);
	jfloat temp0 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[6].f = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(32);
	jfloat temp1 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[7].f = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(33);
	if (((jint)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_followRotation) == 0) goto label_13;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_FCONST(0);
label_14:;
	{
	sp -= 1;
	frame[8].f = (((sp[0].f + (((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_rotMove) * (frame[3].f))) + ((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_rotation)) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * ((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_spinSpeed)));
	LINE_NUMBER(34);
	if ((floatCompare(((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_radiusTo), (jfloat(0)), 1)) >= 0) goto label_16;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_radius;
	sp[0].f = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_radius), ((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_radiusTo), (frame[3].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 1;
	frame[9].f = sp[0].f;
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_color1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(37);
	frame[10].i = (jint(0));
	}
label_20:;
	{
	if ((frame[10].i) >= ((jint)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_sides)) goto label_21;
	}
	{
	LINE_NUMBER(38);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, (frame[6].f), (frame[7].f), ((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_stroke), (frame[9].f), ((((jfloat((frame[10].i))) * (jfloat(360.0f))) / (jfloat(((jint)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_sides)))) + (frame[8].f)));
	LINE_NUMBER(37);
	INST_IINC(10, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_color2;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(42);
	frame[10].i = (jint(0));
	}
label_25:;
	{
	if ((frame[10].i) >= ((jint)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_sides)) goto label_26;
	}
	{
	LINE_NUMBER(43);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, (frame[6].f), (frame[7].f), (((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_stroke) * ((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_innerScl)), ((frame[9].f) * ((jfloat)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_innerRadScl)), ((((jfloat((frame[10].i))) * (jfloat(360.0f))) / (jfloat(((jint)((mindustry_entities_part_FlarePart *) NULL_CHECK((frame[0].o)))->F_sides)))) + (frame[8].f)));
	LINE_NUMBER(42);
	INST_IINC(10, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(46);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(47);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_FlarePart_load_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/FlarePart:load", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_part_FlarePart[] {
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
	(void *) M_mindustry_entities_part_FlarePart_draw_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_FlarePart_load_java_lang_String,
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
	{ "sides", &class_int, offsetof(mindustry_entities_part_FlarePart, F_sides), "I", 1 },
	{ "radius", &class_float, offsetof(mindustry_entities_part_FlarePart, F_radius), "F", 1 },
	{ "radiusTo", &class_float, offsetof(mindustry_entities_part_FlarePart, F_radiusTo), "F", 1 },
	{ "stroke", &class_float, offsetof(mindustry_entities_part_FlarePart, F_stroke), "F", 1 },
	{ "innerScl", &class_float, offsetof(mindustry_entities_part_FlarePart, F_innerScl), "F", 1 },
	{ "innerRadScl", &class_float, offsetof(mindustry_entities_part_FlarePart, F_innerRadScl), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_part_FlarePart, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_part_FlarePart, F_y), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_part_FlarePart, F_rotation), "F", 1 },
	{ "rotMove", &class_float, offsetof(mindustry_entities_part_FlarePart, F_rotMove), "F", 1 },
	{ "spinSpeed", &class_float, offsetof(mindustry_entities_part_FlarePart, F_spinSpeed), "F", 1 },
	{ "followRotation", &class_boolean, offsetof(mindustry_entities_part_FlarePart, F_followRotation), "Z", 1 },
	{ "color1", &class_arc_graphics_Color, offsetof(mindustry_entities_part_FlarePart, F_color1), "Larc/graphics/Color;", 1 },
	{ "color2", &class_arc_graphics_Color, offsetof(mindustry_entities_part_FlarePart, F_color2), "Larc/graphics/Color;", 1 },
	{ "clampProgress", &class_boolean, offsetof(mindustry_entities_part_FlarePart, F_clampProgress), "Z", 1 },
	{ "progress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_entities_part_FlarePart, F_progress), "Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "layer", &class_float, offsetof(mindustry_entities_part_FlarePart, F_layer), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_part_FlarePart, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_part_FlarePart_draw_mindustry_entities_part_DrawPart$PartParams, VTABLE_mindustry_entities_part_FlarePart_draw_mindustry_entities_part_DrawPart$PartParams, "(Lmindustry/entities/part/DrawPart$PartParams;)V", 1 },
	{ "load", (intptr_t) M_mindustry_entities_part_FlarePart_load_java_lang_String, VTABLE_mindustry_entities_part_FlarePart_load_java_lang_String, "(Ljava/lang/String;)V", 1 },
};

Class class_mindustry_entities_part_FlarePart{
		.nativeName = (intptr_t) "mindustry/entities/part/FlarePart",
		.parentClass = (intptr_t) &class_mindustry_entities_part_DrawPart,
		.size = sizeof(mindustry_entities_part_FlarePart),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_FlarePart,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_FlarePart,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_part_FlarePart,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_FlarePart = registerClass(&class_mindustry_entities_part_FlarePart);

}
