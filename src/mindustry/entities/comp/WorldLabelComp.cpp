#include "mindustry/entities/comp/WorldLabelComp.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/entities/comp/WorldLabelComp.h"
#include "arc/struct/Seq.h"
#include "mindustry/gen/Syncc.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/geom/Position.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/net/NetConnection.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "java/lang/reflect/Field.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/util/Align.h"
#include "java/lang/CharSequence.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/ui/Fonts.h"
#include "java/lang/Object.h"
#include "mindustry/entities/comp/WorldLabelComp_invoke_arc_func_Prov_0.h"
#include "mindustry/gen/Player.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Drawc.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"

extern "C" {

jbyte SF_mindustry_entities_comp_WorldLabelComp_flagBackground;
jbyte SF_mindustry_entities_comp_WorldLabelComp_flagOutline;
jbyte SF_mindustry_entities_comp_WorldLabelComp_flagAlignLeft;
jbyte SF_mindustry_entities_comp_WorldLabelComp_flagAlignRight;
jbyte SF_mindustry_entities_comp_WorldLabelComp_flagAutoscale;

void mark_mindustry_entities_comp_WorldLabelComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_WorldLabelComp *) object;
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_expired)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expired)->clazz)->markFunction)((jobject) self->F_expired, mark, depth + 1);
}

void clinit_mindustry_entities_comp_WorldLabelComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_comp_WorldLabelComp_flagBackground = jint(1);
	SF_mindustry_entities_comp_WorldLabelComp_flagOutline = jint(2);
	SF_mindustry_entities_comp_WorldLabelComp_flagAlignLeft = jint(4);
	SF_mindustry_entities_comp_WorldLabelComp_flagAlignRight = jint(8);
	SF_mindustry_entities_comp_WorldLabelComp_flagAutoscale = jint(16);
}

void init_mindustry_entities_comp_WorldLabelComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WorldLabelComp:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_WorldLabelComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"sample text"_j)));
	LINE_NUMBER(30);
	((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_z = (jfloat(151.0f));
	LINE_NUMBER(32);
	((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(36);
	((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(-1.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_WorldLabelComp_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WorldLabelComp:clipSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	(sp++)->f = jfloat(3,402823e+38f);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	jfloat temp1 = ((jfloat(temp0)) * (jfloat(10.0f))) * ((jfloat)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_fontSize);
	sp[0].f = temp1;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WorldLabelComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WorldLabelComp:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_duration), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK(sp[0].o))->F_duration = (((jfloat)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK(sp[0].o))->F_duration) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(60.0f))));
	LINE_NUMBER(49);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_duration), (jfloat(0)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(50);
	((func_mindustry_entities_comp_WorldLabelComp_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WorldLabelComp_hide])(ctx, (frame[0].o));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_expired;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_expired;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WorldLabelComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WorldLabelComp:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	frame[1].f = ((jfloat)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_x);
	frame[2].f = ((jfloat)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(60);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = (temp0 + temp1);
	LINE_NUMBER(61);
	jfloat temp2 = frame[2].f;
	sp[0].o = (jobject)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, sp[0].o))(ctx, sp[0].o);
	frame[2].f = (temp2 + temp3);
	}
label_3:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_text;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_z;
	jint temp3 = (jint)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_flags;
	jfloat temp4 = (jfloat)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_fontSize;
	jint temp5 = jint(1);
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp[4].i = temp3;
	sp[5].f = temp4;
	sp[6].i = temp5;
	sp += 7;
	if ((((jint)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(4))) == 0) goto label_6;
	}
	INST_BIPUSH(8);
	goto label_7;
label_6:;
	{
	if ((((jint)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_flags) & (8)) == 0) goto label_8;
	}
	INST_BIPUSH(16);
	goto label_7;
label_8:;
	INST_ICONST(1);
label_7:;
	{
	sp -= 8;
	SM_mindustry_entities_comp_WorldLabelComp_drawAt_java_lang_String_float_float_float_int_float_int_int(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].i, sp[5].f, sp[6].i, sp[7].i);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_comp_WorldLabelComp_drawAt_java_lang_String_float_float_float_int_float_int_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jfloat param5, jint param6, jint param7) {
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WorldLabelComp:drawAt", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_WorldLabelComp(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(67);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(68);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[3].f));
	LINE_NUMBER(69);
	jfloat temp0 = (jfloat)SM_mindustry_graphics_Drawf_text_R_float(ctx);
	frame[8].f = temp0;
	LINE_NUMBER(71);
	if (((frame[4].i) & (jint(2))) == 0) goto label_4;
	}
	clinit_mindustry_ui_Fonts(ctx);
	(sp++)->o = SF_mindustry_ui_Fonts_outline;
	goto label_5;
label_4:;
	clinit_mindustry_ui_Fonts(ctx);
	(sp++)->o = SF_mindustry_ui_Fonts_def;
label_5:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(72);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_WorldLabelComp_invoke_arc_func_Prov_0(ctx);
		auto proxy = (mindustry_entities_comp_WorldLabelComp_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_WorldLabelComp_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[10].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(74);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[9].o));
	frame[11].i = temp0;
	LINE_NUMBER(75);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[9].o), (jint(0)));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[9].o));
	jfloat temp1 = (jfloat(0.25f)) * (frame[5].f);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp3 = temp1 / temp2;
	LINE_NUMBER(78);
	sp[1].f = temp3;
	sp += 2;
	if (((frame[4].i) & (16)) == 0) goto label_11;
	}
	{
	jfloat temp0 = jfloat(0.2f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp1 = (temp0 * ((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_camerascale)) + (jfloat(0.05f));
	sp[0].f = temp1;
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_FCONST(1);
label_12:;
	{
	sp -= 3;
	jfloat temp0 = sp[1].f / sp[2].f;
	LINE_NUMBER(77);
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(79);
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, (frame[10].o), (frame[9].o), (frame[0].o));
	LINE_NUMBER(81);
	if (((frame[4].i) & (jint(1))) == 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(83);
	jint temp0 = (jint)SM_arc_util_Align_isBottom_int_R_boolean(ctx, (frame[6].i));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(84);
	frame[2].f = ((frame[2].f) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_height) + ((jfloat((frame[12].i))) * (jfloat(1.5f)))));
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(85);
	jint temp0 = (jint)SM_arc_util_Align_isTop_int_R_boolean(ctx, (frame[6].i));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(86);
	frame[2].f = ((frame[2].f) - ((jfloat((frame[12].i))) * (jfloat(1.5f))));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(88);
	frame[2].f = ((frame[2].f) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_height) / (jfloat(2))));
	}
label_21:;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)SM_arc_util_Align_isLeft_int_R_boolean(ctx, (frame[6].i));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(92);
	frame[1].f = ((frame[1].f) + ((((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width) / (jfloat(2))) + (jfloat((frame[12].i)))));
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)SM_arc_util_Align_isRight_int_R_boolean(ctx, (frame[6].i));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(94);
	frame[1].f = ((frame[1].f) - ((((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width) / (jfloat(2))) + (jfloat((frame[12].i)))));
	}
label_26:;
	{
	LINE_NUMBER(97);
	if (((frame[4].i) & (jint(1))) == 0) goto label_28;
	}
	{
	LINE_NUMBER(98);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.3f)));
	LINE_NUMBER(99);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, (frame[1].f), ((frame[2].f) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_height) / (jfloat(2)))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width) + (jfloat(2))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_height) + (jfloat(3.0f))));
	LINE_NUMBER(100);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_28:;
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)SM_arc_util_Align_isLeft_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_32;
	}
	{
	jfloat temp0 = (-((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width)) * (jfloat(0.5f));
	sp[0].f = temp0;
	sp += 1;
	goto label_33;
	}
label_32:;
	{
	jint temp0 = (jint)SM_arc_util_Align_isRight_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_34;
	}
	{
	jfloat temp0 = ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width) * (jfloat(0.5f));
	sp[0].f = temp0;
	sp += 1;
	goto label_33;
	}
label_34:;
	INST_FCONST(0);
label_33:;
	{
	sp -= 1;
	frame[13].f = sp[0].f;
	LINE_NUMBER(105);
	sp[0].o = frame[9].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[9].o), (frame[0].o), ((frame[1].f) + (frame[13].f)), (frame[2].f), (jfloat(0)), (frame[7].i), (jint(0)));
	LINE_NUMBER(108);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(109);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[10].o));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[9].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(111);
	sp[0].o = frame[9].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[9].o), (frame[11].i));
	LINE_NUMBER(114);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[8].f));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WorldLabelComp_show_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WorldLabelComp:show", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	if (((jint)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_localEntities;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(121);
	((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WorldLabelComp_hide_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WorldLabelComp:hide", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	if (((jint)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_added) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_localEntities;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	SM_mindustry_gen_Call_removeWorldLabel_mindustry_net_NetConnection_int(ctx, sp[0].o, ((jint)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(129);
	((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WorldLabelComp_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WorldLabelComp:hide", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	((func_mindustry_entities_comp_WorldLabelComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WorldLabelComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(135);
	SM_mindustry_gen_Call_removeWorldLabel_int(ctx, ((jint)((mindustry_entities_comp_WorldLabelComp *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_comp_WorldLabelComp;
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

	{ // Field parent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field expired
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_comp_WorldLabelComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_WorldLabelComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_WorldLabelComp_clipSize_R_float,
	(void *) M_mindustry_entities_comp_WorldLabelComp_draw,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_WorldLabelComp_show_mindustry_gen_Player,
	(void *) M_mindustry_entities_comp_WorldLabelComp_hide_mindustry_gen_Player,
	(void *) M_mindustry_entities_comp_WorldLabelComp_hide,
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
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "show", "(Lmindustry/gen/Player;)V" },
	{ "hide", "(Lmindustry/gen/Player;)V" },
	{ "hide", "()V" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Drawc, &class_mindustry_gen_Syncc, };

static FieldMetadata fields[] {
	{ "id", &class_int, offsetof(mindustry_entities_comp_WorldLabelComp, F_id), "I", 0 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_WorldLabelComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_WorldLabelComp, F_y), "F", 0 },
	{ "added", &class_boolean, offsetof(mindustry_entities_comp_WorldLabelComp, F_added), "Z", 0 },
	{ "flagBackground", &class_byte, (intptr_t) &SF_mindustry_entities_comp_WorldLabelComp_flagBackground, "B", 25 },
	{ "flagOutline", &class_byte, (intptr_t) &SF_mindustry_entities_comp_WorldLabelComp_flagOutline, "B", 25 },
	{ "flagAlignLeft", &class_byte, (intptr_t) &SF_mindustry_entities_comp_WorldLabelComp_flagAlignLeft, "B", 25 },
	{ "flagAlignRight", &class_byte, (intptr_t) &SF_mindustry_entities_comp_WorldLabelComp_flagAlignRight, "B", 25 },
	{ "flagAutoscale", &class_byte, (intptr_t) &SF_mindustry_entities_comp_WorldLabelComp_flagAutoscale, "B", 25 },
	{ "text", &class_java_lang_String, offsetof(mindustry_entities_comp_WorldLabelComp, F_text), "Ljava/lang/String;", 1 },
	{ "fontSize", &class_float, offsetof(mindustry_entities_comp_WorldLabelComp, F_fontSize), "F", 1 },
	{ "z", &class_float, offsetof(mindustry_entities_comp_WorldLabelComp, F_z), "F", 1 },
	{ "flags", &class_byte, offsetof(mindustry_entities_comp_WorldLabelComp, F_flags), "B", 1 },
	{ "parent", &class_mindustry_gen_Posc, offsetof(mindustry_entities_comp_WorldLabelComp, F_parent), "Lmindustry/gen/Posc;", 1 },
	{ "duration", &class_float, offsetof(mindustry_entities_comp_WorldLabelComp, F_duration), "F", 129 },
	{ "expired", &class_java_lang_Runnable, offsetof(mindustry_entities_comp_WorldLabelComp, F_expired), "Ljava/lang/Runnable;", 129 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_WorldLabelComp, 0, "()V", 1 },
	{ "clipSize", (intptr_t) M_mindustry_entities_comp_WorldLabelComp_clipSize_R_float, VTABLE_mindustry_entities_comp_WorldLabelComp_clipSize_R_float, "()F", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_WorldLabelComp_update, VTABLE_mindustry_entities_comp_WorldLabelComp_update, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_WorldLabelComp_draw, VTABLE_mindustry_entities_comp_WorldLabelComp_draw, "()V", 1 },
	{ "drawAt", (intptr_t) SM_mindustry_entities_comp_WorldLabelComp_drawAt_java_lang_String_float_float_float_int_float_int_int, 0, "(Ljava/lang/String;FFFIFII)V", 9 },
	{ "show", (intptr_t) M_mindustry_entities_comp_WorldLabelComp_show_mindustry_gen_Player, VTABLE_mindustry_entities_comp_WorldLabelComp_show_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "hide", (intptr_t) M_mindustry_entities_comp_WorldLabelComp_hide_mindustry_gen_Player, VTABLE_mindustry_entities_comp_WorldLabelComp_hide_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "hide", (intptr_t) M_mindustry_entities_comp_WorldLabelComp_hide, VTABLE_mindustry_entities_comp_WorldLabelComp_hide, "()V", 1 },
};

Class class_mindustry_entities_comp_WorldLabelComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/WorldLabelComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_WorldLabelComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_WorldLabelComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_WorldLabelComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_WorldLabelComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 72,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_WorldLabelComp = registerClass(&class_mindustry_entities_comp_WorldLabelComp);

}
