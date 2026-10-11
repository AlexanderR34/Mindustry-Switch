#include "mindustry/entities/part/ShapePart.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
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
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/part/ShapePart.h"

extern "C" {


void mark_mindustry_entities_part_ShapePart(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_part_ShapePart *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_colorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorTo)->clazz)->markFunction)((jobject) self->F_colorTo, mark, depth + 1);
	if (self->F_progress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_progress)->clazz)->markFunction)((jobject) self->F_progress, mark, depth + 1);
}

void clinit_mindustry_entities_part_ShapePart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_DrawPart(ctx);
}

void init_mindustry_entities_part_ShapePart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/ShapePart:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_ShapePart(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_mindustry_entities_part_DrawPart(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_circle = (jint(0));
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_hollow = (jint(0));
	LINE_NUMBER(10);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_sides = (jint(3));
	LINE_NUMBER(11);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(3.0f));
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_radiusTo = (jfloat(-1.0f));
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(1));
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_strokeTo = (jfloat(-1.0f));
	LINE_NUMBER(14);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_part_ShapePart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(18);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_clampProgress = (jint(1));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_ShapePart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(20);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_ShapePart_draw_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/ShapePart:draw", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(25);
	if ((floatCompare(((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_layer), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_2:;
	{
	LINE_NUMBER(26);
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
	LINE_NUMBER(28);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (temp0 + ((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_layerOffset)));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_progress;
	jfloat temp1 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o), ((jint)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_clampProgress));
	frame[3].f = temp1;
	LINE_NUMBER(31);
	frame[4].f = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * ((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_rotateSpeed));
	LINE_NUMBER(32);
	if ((floatCompare(((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_radiusTo), (jfloat(0)), 1)) >= 0) goto label_7;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_radius;
	sp[0].f = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_radius), ((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_radiusTo), (frame[3].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(33);
	if ((floatCompare(((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_strokeTo), (jfloat(0)), 1)) >= 0) goto label_10;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_stroke;
	sp[0].f = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_stroke), ((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_strokeTo), (frame[3].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(35);
	if (((jint)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_mirror) == 0) goto label_13;
	}
	{
	if (((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideOverride) != (jint(-1))) goto label_13;
	}
	INST_ICONST(2);
	goto label_14;
label_13:;
	INST_ICONST(1);
label_14:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(37);
	frame[8].i = (jint(0));
	}
label_16:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_17;
	}
	{
	LINE_NUMBER(39);
	if (((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideOverride) != (jint(-1))) goto label_19;
	}
	INST_ILOAD(8);
	goto label_20;
label_19:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[-1].o))->F_sideOverride;
label_20:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(41);
	if ((frame[9].i) != 0) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(-1);
label_23:;
	{
	sp -= 1;
	frame[10].f = (jfloat((sp[0].i * ((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideMultiplier))));
	LINE_NUMBER(42);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_moveX) * (frame[3].f))) * (frame[10].f)), (((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_moveY) * (frame[3].f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(45);
	jfloat temp0 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[11].f = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(46);
	jfloat temp1 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[12].f = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_colorTo;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_colorTo;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[3].f));
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_30:;
	{
	LINE_NUMBER(54);
	if (((jint)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_hollow) != 0) goto label_32;
	}
	{
	LINE_NUMBER(55);
	if (((jint)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_circle) != 0) goto label_34;
	}
	{
	LINE_NUMBER(56);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, (frame[11].f), (frame[12].f), ((jint)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_sides), (frame[5].f), ((((((((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_moveRot) * (frame[3].f)) * (frame[10].f)) + ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation)) - ((jfloat(90.0f)) * (frame[10].f))) + (((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_rotation) * (frame[10].f))) + ((frame[4].f) * (frame[10].f))));
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(58);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, (frame[11].f), (frame[12].f), (frame[5].f));
	goto label_36;
	}
label_32:;
	{
	LINE_NUMBER(60);
	if ((floatCompare((frame[6].f), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_36;
	}
	{
	LINE_NUMBER(61);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (frame[6].f));
	LINE_NUMBER(62);
	if (((jint)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_circle) != 0) goto label_39;
	}
	{
	LINE_NUMBER(63);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, (frame[11].f), (frame[12].f), ((jint)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_sides), (frame[5].f), ((((((((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_moveRot) * (frame[3].f)) * (frame[10].f)) + ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation)) - ((jfloat(90.0f)) * (frame[10].f))) + (((jfloat)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_rotation) * (frame[10].f))) + ((frame[4].f) * (frame[10].f))));
	goto label_41;
	}
label_39:;
	{
	LINE_NUMBER(65);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, (frame[11].f), (frame[12].f), (frame[5].f));
	}
label_41:;
	{
	LINE_NUMBER(67);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	}
label_36:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_42;
	}
	SM_arc_graphics_g2d_Draw_color(ctx);
label_42:;
	{
	LINE_NUMBER(37);
	INST_IINC(8, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(72);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_ShapePart_load_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/ShapePart:load", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_part_ShapePart;
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

	{ // Field colorTo
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_part_ShapePart[] {
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
	(void *) M_mindustry_entities_part_ShapePart_draw_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_ShapePart_load_java_lang_String,
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
	{ "circle", &class_boolean, offsetof(mindustry_entities_part_ShapePart, F_circle), "Z", 1 },
	{ "hollow", &class_boolean, offsetof(mindustry_entities_part_ShapePart, F_hollow), "Z", 1 },
	{ "sides", &class_int, offsetof(mindustry_entities_part_ShapePart, F_sides), "I", 1 },
	{ "radius", &class_float, offsetof(mindustry_entities_part_ShapePart, F_radius), "F", 1 },
	{ "radiusTo", &class_float, offsetof(mindustry_entities_part_ShapePart, F_radiusTo), "F", 1 },
	{ "stroke", &class_float, offsetof(mindustry_entities_part_ShapePart, F_stroke), "F", 1 },
	{ "strokeTo", &class_float, offsetof(mindustry_entities_part_ShapePart, F_strokeTo), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_part_ShapePart, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_part_ShapePart, F_y), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_part_ShapePart, F_rotation), "F", 1 },
	{ "moveX", &class_float, offsetof(mindustry_entities_part_ShapePart, F_moveX), "F", 1 },
	{ "moveY", &class_float, offsetof(mindustry_entities_part_ShapePart, F_moveY), "F", 1 },
	{ "moveRot", &class_float, offsetof(mindustry_entities_part_ShapePart, F_moveRot), "F", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_entities_part_ShapePart, F_rotateSpeed), "F", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_part_ShapePart, F_color), "Larc/graphics/Color;", 1 },
	{ "colorTo", &class_arc_graphics_Color, offsetof(mindustry_entities_part_ShapePart, F_colorTo), "Larc/graphics/Color;", 1 },
	{ "mirror", &class_boolean, offsetof(mindustry_entities_part_ShapePart, F_mirror), "Z", 1 },
	{ "clampProgress", &class_boolean, offsetof(mindustry_entities_part_ShapePart, F_clampProgress), "Z", 1 },
	{ "progress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_entities_part_ShapePart, F_progress), "Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "layer", &class_float, offsetof(mindustry_entities_part_ShapePart, F_layer), "F", 1 },
	{ "layerOffset", &class_float, offsetof(mindustry_entities_part_ShapePart, F_layerOffset), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_part_ShapePart, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_part_ShapePart_draw_mindustry_entities_part_DrawPart$PartParams, VTABLE_mindustry_entities_part_ShapePart_draw_mindustry_entities_part_DrawPart$PartParams, "(Lmindustry/entities/part/DrawPart$PartParams;)V", 1 },
	{ "load", (intptr_t) M_mindustry_entities_part_ShapePart_load_java_lang_String, VTABLE_mindustry_entities_part_ShapePart_load_java_lang_String, "(Ljava/lang/String;)V", 1 },
};

Class class_mindustry_entities_part_ShapePart{
		.nativeName = (intptr_t) "mindustry/entities/part/ShapePart",
		.parentClass = (intptr_t) &class_mindustry_entities_part_DrawPart,
		.size = sizeof(mindustry_entities_part_ShapePart),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_ShapePart,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_ShapePart,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_part_ShapePart,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_ShapePart = registerClass(&class_mindustry_entities_part_ShapePart);

}
