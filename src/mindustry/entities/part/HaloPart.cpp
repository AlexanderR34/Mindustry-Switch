#include "mindustry/entities/part/HaloPart.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "arc/math/Angles.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/Time.h"
#include "mindustry/entities/part/DrawPart.h"
#include "arc/graphics/Color.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/HaloPart.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "mindustry/graphics/Drawf.h"
#include "java/lang/reflect/Method.h"

extern "C" {


void mark_mindustry_entities_part_HaloPart(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_part_HaloPart *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_colorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorTo)->clazz)->markFunction)((jobject) self->F_colorTo, mark, depth + 1);
	if (self->F_progress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_progress)->clazz)->markFunction)((jobject) self->F_progress, mark, depth + 1);
}

void clinit_mindustry_entities_part_HaloPart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_DrawPart(ctx);
}

void init_mindustry_entities_part_HaloPart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/HaloPart:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_HaloPart(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_entities_part_DrawPart(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_hollow = (jint(0));
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_tri = (jint(0));
	LINE_NUMBER(11);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_shapes = (jint(3));
	LINE_NUMBER(12);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_sides = (jint(3));
	LINE_NUMBER(13);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(3.0f));
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_radiusTo = (jfloat(-1.0f));
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(1));
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_strokeTo = (jfloat(-1.0f));
	LINE_NUMBER(14);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_triLength = (jfloat(1));
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_triLengthTo = (jfloat(-1.0f));
	LINE_NUMBER(15);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRadius = (jfloat(10.0f));
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRadiusTo = (jfloat(-1.0f));
	LINE_NUMBER(18);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRotateSpeed = (jfloat(0));
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRotation = (jfloat(0));
	LINE_NUMBER(19);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_part_HaloPart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(22);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(23);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_clampProgress = (jint(1));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_HaloPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_HaloPart_draw_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/HaloPart:draw", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(30);
	if ((floatCompare(((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_layer), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_2:;
	{
	LINE_NUMBER(31);
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
	LINE_NUMBER(33);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (temp0 + ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_layerOffset)));
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_progress;
	jfloat temp1 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o), ((jint)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_clampProgress));
	frame[3].f = temp1;
	LINE_NUMBER(37);
	frame[4].f = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_rotateSpeed));
	LINE_NUMBER(38);
	if ((floatCompare(((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_radiusTo), (jfloat(0)), 1)) >= 0) goto label_7;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_radius;
	sp[0].f = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_radius), ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_radiusTo), (frame[3].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(39);
	if ((floatCompare(((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_triLengthTo), (jfloat(0)), 1)) >= 0) goto label_10;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_triLength;
	sp[0].f = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_triLength), ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_triLengthTo), (frame[3].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(40);
	if ((floatCompare(((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_strokeTo), (jfloat(0)), 1)) >= 0) goto label_13;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_stroke;
	sp[0].f = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_stroke), ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_strokeTo), (frame[3].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(41);
	if ((floatCompare(((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRadiusTo), (jfloat(0)), 1)) >= 0) goto label_16;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRadius;
	sp[0].f = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRadius), ((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRadiusTo), (frame[3].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 1;
	frame[8].f = sp[0].f;
	LINE_NUMBER(43);
	if (((jint)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_mirror) == 0) goto label_19;
	}
	{
	if (((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideOverride) != (jint(-1))) goto label_19;
	}
	INST_ICONST(2);
	goto label_20;
label_19:;
	INST_ICONST(1);
label_20:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(45);
	frame[10].i = (jint(0));
	}
label_22:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_23;
	}
	{
	LINE_NUMBER(47);
	if (((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideOverride) != (jint(-1))) goto label_25;
	}
	INST_ILOAD(10);
	goto label_26;
label_25:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[-1].o))->F_sideOverride;
label_26:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(49);
	if ((frame[11].i) != 0) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(-1);
label_29:;
	{
	sp -= 1;
	frame[12].f = (jfloat((sp[0].i * ((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideMultiplier))));
	LINE_NUMBER(50);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_moveX) * (frame[3].f))) * (frame[12].f)), (((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_moveY) * (frame[3].f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(53);
	jfloat temp0 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[13].f = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(54);
	jfloat temp1 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[14].f = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_colorTo;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_colorTo;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[3].f));
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_36:;
	{
	LINE_NUMBER(62);
	frame[15].f = ((((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRotation) + (((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRotateSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time))) * (frame[12].f));
	LINE_NUMBER(64);
	frame[16].i = (jint(0));
	}
label_39:;
	{
	if ((frame[16].i) >= ((jint)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_shapes)) goto label_40;
	}
	{
	LINE_NUMBER(65);
	frame[17].f = (((frame[15].f) + (((jfloat((frame[16].i))) * (jfloat(360.0f))) / (jfloat(((jint)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_shapes))))) + ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation));
	LINE_NUMBER(66);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[17].f), (frame[8].f));
	frame[18].f = (temp0 + (frame[13].f));
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[17].f), (frame[8].f));
	frame[19].f = (temp1 + (frame[14].f));
	LINE_NUMBER(67);
	frame[20].f = ((((frame[17].f) + ((((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_shapeMoveRot) * (frame[3].f)) * (frame[12].f))) + (((jfloat)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_shapeRotation) * (frame[12].f))) + ((frame[4].f) * (frame[12].f)));
	LINE_NUMBER(69);
	if (((jint)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_tri) == 0) goto label_46;
	}
	{
	LINE_NUMBER(70);
	if ((doubleCompare((jdouble((frame[5].f))), (jdouble(1,000000e-03)), -1)) <= 0) goto label_48;
	}
	{
	if ((doubleCompare((jdouble((frame[6].f))), (jdouble(1,000000e-03)), -1)) <= 0) goto label_48;
	}
	{
	LINE_NUMBER(71);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, (frame[18].f), (frame[19].f), (frame[5].f), (frame[6].f), (frame[20].f));
	goto label_48;
	}
label_46:;
	{
	LINE_NUMBER(73);
	if (((jint)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_hollow) != 0) goto label_50;
	}
	{
	LINE_NUMBER(74);
	if ((doubleCompare((jdouble((frame[5].f))), (jdouble(1,000000e-03)), -1)) <= 0) goto label_48;
	}
	{
	LINE_NUMBER(75);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, (frame[18].f), (frame[19].f), ((jint)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_sides), (frame[5].f), (frame[20].f));
	goto label_48;
	}
label_50:;
	{
	LINE_NUMBER(77);
	if ((doubleCompare((jdouble((frame[7].f))), (jdouble(1,000000e-03)), -1)) <= 0) goto label_48;
	}
	{
	LINE_NUMBER(78);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (frame[7].f));
	LINE_NUMBER(79);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, (frame[18].f), (frame[19].f), ((jint)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_sides), (frame[5].f), (frame[20].f));
	LINE_NUMBER(80);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	}
label_48:;
	{
	LINE_NUMBER(64);
	INST_IINC(16, 1);
	goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_56;
	}
	SM_arc_graphics_g2d_Draw_color(ctx);
label_56:;
	{
	LINE_NUMBER(45);
	INST_IINC(10, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(87);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_HaloPart_load_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/HaloPart:load", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_part_HaloPart;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field colorTo
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[22]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_part_HaloPart[] {
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
	(void *) M_mindustry_entities_part_HaloPart_draw_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_HaloPart_load_java_lang_String,
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
	{ "hollow", &class_boolean, offsetof(mindustry_entities_part_HaloPart, F_hollow), "Z", 1 },
	{ "tri", &class_boolean, offsetof(mindustry_entities_part_HaloPart, F_tri), "Z", 1 },
	{ "shapes", &class_int, offsetof(mindustry_entities_part_HaloPart, F_shapes), "I", 1 },
	{ "sides", &class_int, offsetof(mindustry_entities_part_HaloPart, F_sides), "I", 1 },
	{ "radius", &class_float, offsetof(mindustry_entities_part_HaloPart, F_radius), "F", 1 },
	{ "radiusTo", &class_float, offsetof(mindustry_entities_part_HaloPart, F_radiusTo), "F", 1 },
	{ "stroke", &class_float, offsetof(mindustry_entities_part_HaloPart, F_stroke), "F", 1 },
	{ "strokeTo", &class_float, offsetof(mindustry_entities_part_HaloPart, F_strokeTo), "F", 1 },
	{ "triLength", &class_float, offsetof(mindustry_entities_part_HaloPart, F_triLength), "F", 1 },
	{ "triLengthTo", &class_float, offsetof(mindustry_entities_part_HaloPart, F_triLengthTo), "F", 1 },
	{ "haloRadius", &class_float, offsetof(mindustry_entities_part_HaloPart, F_haloRadius), "F", 1 },
	{ "haloRadiusTo", &class_float, offsetof(mindustry_entities_part_HaloPart, F_haloRadiusTo), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_part_HaloPart, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_part_HaloPart, F_y), "F", 1 },
	{ "shapeRotation", &class_float, offsetof(mindustry_entities_part_HaloPart, F_shapeRotation), "F", 1 },
	{ "moveX", &class_float, offsetof(mindustry_entities_part_HaloPart, F_moveX), "F", 1 },
	{ "moveY", &class_float, offsetof(mindustry_entities_part_HaloPart, F_moveY), "F", 1 },
	{ "shapeMoveRot", &class_float, offsetof(mindustry_entities_part_HaloPart, F_shapeMoveRot), "F", 1 },
	{ "haloRotateSpeed", &class_float, offsetof(mindustry_entities_part_HaloPart, F_haloRotateSpeed), "F", 1 },
	{ "haloRotation", &class_float, offsetof(mindustry_entities_part_HaloPart, F_haloRotation), "F", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_entities_part_HaloPart, F_rotateSpeed), "F", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_part_HaloPart, F_color), "Larc/graphics/Color;", 1 },
	{ "colorTo", &class_arc_graphics_Color, offsetof(mindustry_entities_part_HaloPart, F_colorTo), "Larc/graphics/Color;", 1 },
	{ "mirror", &class_boolean, offsetof(mindustry_entities_part_HaloPart, F_mirror), "Z", 1 },
	{ "clampProgress", &class_boolean, offsetof(mindustry_entities_part_HaloPart, F_clampProgress), "Z", 1 },
	{ "progress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_entities_part_HaloPart, F_progress), "Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "layer", &class_float, offsetof(mindustry_entities_part_HaloPart, F_layer), "F", 1 },
	{ "layerOffset", &class_float, offsetof(mindustry_entities_part_HaloPart, F_layerOffset), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_part_HaloPart, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_part_HaloPart_draw_mindustry_entities_part_DrawPart$PartParams, VTABLE_mindustry_entities_part_HaloPart_draw_mindustry_entities_part_DrawPart$PartParams, "(Lmindustry/entities/part/DrawPart$PartParams;)V", 1 },
	{ "load", (intptr_t) M_mindustry_entities_part_HaloPart_load_java_lang_String, VTABLE_mindustry_entities_part_HaloPart_load_java_lang_String, "(Ljava/lang/String;)V", 1 },
};

Class class_mindustry_entities_part_HaloPart{
		.nativeName = (intptr_t) "mindustry/entities/part/HaloPart",
		.parentClass = (intptr_t) &class_mindustry_entities_part_DrawPart,
		.size = sizeof(mindustry_entities_part_HaloPart),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_HaloPart,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_HaloPart,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_part_HaloPart,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_HaloPart = registerClass(&class_mindustry_entities_part_HaloPart);

}
