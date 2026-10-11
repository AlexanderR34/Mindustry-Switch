#include "mindustry/editor/WaveGraph.h"
#include "java/lang/StringBuilder.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/editor/WaveGraph_1.h"
#include "arc/Input.h"
#include "mindustry/editor/WaveGraph_2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/ui/Image.h"
#include "arc/struct/OrderedSet_OrderedSetIterator.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/pooling/Pools.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/func/Floatc.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/editor/WaveGraph_invoke_arc_scene_ui_layout_Table_DrawRect_1.h"
#include "mindustry/editor/WaveGraph_invoke_java_lang_Runnable_3.h"
#include "mindustry/editor/WaveGraph_invoke_java_lang_Runnable_4.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/editor/WaveGraph_invoke_java_lang_Runnable_5.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Floatc_1.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/editor/WaveGraph_Mode.h"
#include "arc/struct/FloatSeq.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Cons_17.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Cons_16.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Cons_15.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Cons_14.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Cons_13.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Cons_12.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Cons_9.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "arc/scene/style/Drawable.h"
#include "arc/struct/OrderedSet.h"
#include "arc/scene/ui/layout/Table_DrawRect.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/gen/Tex.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Prov_1.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/SpawnGroup.h"
#include "java/lang/CharSequence.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Cons_11.h"
#include "mindustry/editor/WaveGraph_invoke_arc_func_Cons_10.h"
#include "mindustry/ui/Fonts.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/editor/WaveGraph.h"
#include "java/lang/IncompatibleClassChangeError.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_editor_WaveGraph(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_Table(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_WaveGraph *) object;
	if (self->F_groups)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_groups)->clazz)->markFunction)((jobject) self->F_groups, mark, depth + 1);
	if (self->F_mode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mode)->clazz)->markFunction)((jobject) self->F_mode, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
	if (self->F_used)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_used)->clazz)->markFunction)((jobject) self->F_used, mark, depth + 1);
	if (self->F_colors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colors)->clazz)->markFunction)((jobject) self->F_colors, mark, depth + 1);
	if (self->F_hidden)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hidden)->clazz)->markFunction)((jobject) self->F_hidden, mark, depth + 1);
	if (self->F_countStr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_countStr)->clazz)->markFunction)((jobject) self->F_countStr, mark, depth + 1);
	if (self->F_points)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_points)->clazz)->markFunction)((jobject) self->F_points, mark, depth + 1);
}

void clinit_mindustry_editor_WaveGraph(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_Table(ctx);
}

void init_mindustry_editor_WaveGraph(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveGraph(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(44);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_groups = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveGraph$Mode_counts;
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedSet);
	init_arc_struct_OrderedSet(ctx, sp[1].o);
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_used = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_hidden = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_countStr = (jref) sp[1].o;
	LINE_NUMBER(36);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(37);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from = (jint(0));
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_to = (20);
	LINE_NUMBER(38);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_lastFrom = (jint(-1));
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_lastTo = (jint(-1));
	LINE_NUMBER(39);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_lastZoom = (jfloat(-1.0f));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(40.0f)));
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_defaultSpace = temp0;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_struct_FloatSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq_int(ctx, sp[1].o, (40));
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_points = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	sp[0].o = (jobject)((func_mindustry_editor_WaveGraph_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveGraph_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Floatc_1(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Floatc_1 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Floatc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_WaveGraph_scrolled_arc_func_Floatc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveGraph_scrolled_arc_func_Floatc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_WaveGraph$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_WaveGraph$1);
	init_mindustry_editor_WaveGraph$1_mindustry_editor_WaveGraph(ctx, sp[1].o, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_editor_WaveGraph_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveGraph_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_WaveGraph$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_WaveGraph$2);
	init_mindustry_editor_WaveGraph$2_mindustry_editor_WaveGraph(ctx, sp[1].o, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_editor_WaveGraph_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveGraph_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_scene_ui_layout_Table$DrawRect_1(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_scene_ui_layout_Table$DrawRect_1 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_scene_ui_layout_Table$DrawRect_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_editor_WaveGraph_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveGraph_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp3 = jfloat(4.0f);
	LINE_NUMBER(227);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_mindustry_editor_WaveGraph_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_editor_WaveGraph_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveGraph_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_mindustry_editor_WaveGraph_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_editor_WaveGraph_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveGraph_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_clampZoom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:clampZoom", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_zoom;
	jfloat temp1 = jfloat(0.5f);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp3 = temp1 / temp2;
	jfloat temp4 = jfloat(40.0f);
	jfloat temp5 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp3, (temp4 / temp5));
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_zoom = temp6;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_linePoint_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:linePoint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_points;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_beginLine(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:beginLine", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_points;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_endLine(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:endLine", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(261);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_points;
	if (temp0 >= (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(2)))) goto label_3;
	}
	{
	LINE_NUMBER(262);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(2))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(3))))), (jint(0)));
	LINE_NUMBER(263);
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(1))));
	jfloat temp2 = (jfloat)SM_arc_graphics_g2d_Lines_getStroke_R_float(ctx);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp0, temp1, (temp2 / (jfloat(2))));
	LINE_NUMBER(261);
	INST_IINC(2, 2);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(265);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_points;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(2))));
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_points;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	jfloat temp2 = (jfloat)SM_arc_graphics_g2d_Lines_getStroke_R_float(ctx);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp0, temp1, temp2);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_points;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_rebuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:rebuild", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	jint temp0 = (((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_to) - ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from)) + (jint(1));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject)createMultiArray(ctx, &class_int, {temp0, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)});
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	((func_arc_struct_OrderedSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp1 = jint(1);
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[1].o))->F_maxTotal = temp1;
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_max = temp1;
	LINE_NUMBER(273);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_maxHealth = (jfloat(1));
	LINE_NUMBER(275);
	frame[1].i = ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from);
	}
label_5:;
	{
	if ((frame[1].i) > ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_to)) goto label_6;
	}
	{
	LINE_NUMBER(276);
	frame[2].i = ((frame[1].i) - ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from));
	LINE_NUMBER(277);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(278);
	frame[4].i = (jint(0));
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_game_SpawnGroup, sp[0].o));
	LINE_NUMBER(281);
	jint temp0 = (jint)((func_mindustry_game_SpawnGroup_getSpawned_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_game_SpawnGroup_getSpawned_int_R_int])(ctx, (frame[6].o), (frame[1].i));
	frame[7].i = temp0;
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp1 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp1)) + (frame[7].i));
	LINE_NUMBER(283);
	if ((frame[7].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_max;
	sp[1].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i));
	sp[2].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[2].o))->F_id))));
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_max = temp1;
	LINE_NUMBER(287);
	jfloat temp2 = frame[3].f;
	jfloat temp3 = jfloat((frame[7].i));
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[6].o)))->F_type;
	frame[3].f = (temp2 + (temp3 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_health)));
	LINE_NUMBER(288);
	frame[4].i = ((frame[4].i) + (frame[7].i));
	LINE_NUMBER(289);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_maxTotal), (frame[4].i));
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_maxTotal = temp0;
	LINE_NUMBER(291);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_maxHealth), (frame[3].f));
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_maxHealth = temp1;
	LINE_NUMBER(275);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(296);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	sp[1].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	init_arc_struct_ObjectSet_arc_struct_ObjectSet(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_colors;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@waves.units.hide"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Cons_11);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(130.0f)));
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_colors;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Cons_12);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(0);
	LINE_NUMBER(329);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollY_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollY_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(331);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_colors;
	((func_arc_scene_ui_layout_Table_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_act_float])(ctx, sp[0].o, (jfloat(1,000000e-06f)));
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_hidden;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_32:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(335);
	goto label_32;
	}
label_33:;
	LINE_NUMBER(336);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_editor_WaveGraph_color_mindustry_type_UnitType_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:color", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(339);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	jfloat temp0 = jfloat(((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, ((temp0 / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)))) * (jfloat(360.0f))), (jfloat(0.7f)), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_editor_WaveGraph_nextStep_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:nextStep", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(343);
	frame[2].i = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(344);
	if ((floatCompare((jfloat((frame[2].i))), (frame[1].f), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(345);
	if ((floatCompare((jfloat(((frame[2].i) * (jint(2))))), (frame[1].f), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return ((frame[2].i) * (jint(2)));
	}
label_4:;
	{
	LINE_NUMBER(348);
	if ((floatCompare((jfloat(((frame[2].i) * (jint(5))))), (frame[1].f), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return ((frame[2].i) * (jint(5)));
	}
label_6:;
	{
	LINE_NUMBER(351);
	if ((floatCompare((jfloat(((frame[2].i) * (10)))), (frame[1].f), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return ((frame[2].i) * (10));
	}
label_8:;
	{
	LINE_NUMBER(354);
	frame[2].i = ((frame[2].i) * (10));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$rebuild$2_arc_struct_ObjectSet_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$rebuild$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(314);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Cons_13);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_fullTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_java_lang_Runnable_4);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Cons_14);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(327);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(328);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(329);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$rebuild$7_mindustry_type_UnitType_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$rebuild$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(327);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_hidden;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[1].o, (frame[1].o));
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$rebuild$6_mindustry_type_UnitType_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$rebuild$6", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_hidden;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_hidden;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	((func_arc_struct_OrderedSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	((func_arc_struct_OrderedSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_addAll_arc_struct_ObjectSet])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_hidden;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	goto label_5;
	}
label_6:;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$rebuild$3_mindustry_type_UnitType_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$rebuild$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((func_mindustry_editor_WaveGraph_color_mindustry_type_UnitType_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_color_mindustry_type_UnitType_R_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Cons_15);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_Image_act_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Image_act_float])(ctx, (checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o)), (jfloat(1)));
	LINE_NUMBER(317);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(20.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_Image_act_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Image_act_float])(ctx, (checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o)), (jfloat(1)));
	LINE_NUMBER(318);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveGraph_lambda$rebuild$5_arc_scene_ui_Button_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$rebuild$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveGraph(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(317);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_scene_ui_Button_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isChecked_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_gray;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_WaveGraph_lambda$rebuild$4_arc_scene_ui_Button_arc_graphics_Color_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$rebuild$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveGraph(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_arc_scene_ui_Button_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isChecked_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.5f)));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$rebuild$1_arc_struct_ObjectSet_arc_scene_ui_TextButton(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$rebuild$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(310);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_hidden;
	sp += 1;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@waves.units.show"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@waves.units.hide"_j));
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_TextButton_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$rebuild$0_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$rebuild$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_hidden;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_hidden;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_hidden;
	((func_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet])(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	((func_arc_struct_OrderedSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	((func_arc_struct_OrderedSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_addAll_arc_struct_ObjectSet])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_hidden;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	goto label_6;
	}
label_7:;
	LINE_NUMBER(310);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$new$3_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$new$3", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(237);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(239);
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_WaveGraph$Mode_all;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(240);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_editor_WaveGraph$Mode_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_editor_WaveGraph$Mode_name_R_java_lang_String])(ctx, (frame[6].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@wavemode.\u0001"_j.string, 1, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_fullTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_java_lang_Runnable_5);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = frame[2].o;
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(35.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Cons_17);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(130.0f)));
	LINE_NUMBER(239);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(244);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$new$5_mindustry_editor_WaveGraph$Mode_arc_scene_ui_TextButton(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$new$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(242);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_mode;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_TextButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$new$4_mindustry_editor_WaveGraph$Mode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$new$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(241);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_mode = (jref) (frame[1].o);
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$new$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$new$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(231);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_colors = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$new$1_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[32];
	auto stack = &frame[26];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$new$1", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(82);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(3.0f)));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp0);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_countStr;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_editor_WaveGraph_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveGraph_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveGraph_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_editor_WaveGraph_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_editor_WaveGraph_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(88);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	frame[7].o = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_mode;
	jint temp1 = (jint)((func_mindustry_editor_WaveGraph$Mode_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_WaveGraph$Mode_ordinal_R_int])(ctx, sp[0].o);
	switch(temp1) {
		case 0: goto label_6;
		case 1: goto label_7;
		case 2: goto label_8;
		default: goto label_9;
	}
	}
label_9:;
	{
	clinit_java_lang_IncompatibleClassChangeError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IncompatibleClassChangeError);
	init_java_lang_IncompatibleClassChangeError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)((func_mindustry_editor_WaveGraph_nextStep_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_nextStep_float_R_int])(ctx, (frame[0].o), (jfloat(((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_max))));
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(92);
	jint temp0 = (jint)((func_mindustry_editor_WaveGraph_nextStep_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_nextStep_float_R_int])(ctx, (frame[0].o), (jfloat((jint(((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_maxHealth))))));
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_mindustry_editor_WaveGraph_nextStep_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_nextStep_float_R_int])(ctx, (frame[0].o), (jfloat(((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_maxTotal))));
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(90);
	frame[8].i = sp[0].i;
	LINE_NUMBER(96);
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, (frame[6].o), (frame[7].o), (((jobject) createStringLiteral(ctx, u8"1"_j))));
	LINE_NUMBER(98);
	frame[9].f = (((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_zoom) * ((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_defaultSpace));
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_pan), ((((frame[3].f) / (jfloat(2))) / ((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_zoom)) - ((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_defaultSpace)));
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_pan = temp0;
	LINE_NUMBER(101);
	frame[10].f = ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[6].o)))->F_height);
	LINE_NUMBER(102);
	frame[11].f = (jfloat(0));
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(22.0f)));
	jfloat temp2 = temp1 + (frame[10].f);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(5.0f)));
	frame[12].f = (temp2 + temp3);
	LINE_NUMBER(103);
	frame[13].f = ((((frame[1].f) + (frame[11].f)) - (((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_pan) * ((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_zoom))) + ((frame[3].f) / (jfloat(2))));
	frame[14].f = ((frame[2].f) + (frame[12].f));
	frame[15].f = ((frame[3].f) - (frame[11].f));
	frame[16].f = ((frame[4].f) - (frame[12].f));
	LINE_NUMBER(105);
	frame[17].f = (((frame[1].f) - (frame[13].f)) / (frame[9].f));
	frame[18].f = ((((frame[1].f) + (frame[3].f)) - (frame[13].f)) / (frame[9].f));
	LINE_NUMBER(109);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from = ((jint((frame[17].f))) - (jint(1)));
	LINE_NUMBER(110);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_to = ((jint((frame[18].f))) + (jint(1)));
	LINE_NUMBER(112);
	if (((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_lastFrom) != ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from)) goto label_26;
	}
	{
	if (((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_lastTo) == ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_to)) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(113);
	((func_mindustry_editor_WaveGraph_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_rebuild])(ctx, (frame[0].o));
	}
label_27:;
	{
	LINE_NUMBER(116);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_lastFrom = ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from);
	LINE_NUMBER(117);
	((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_lastTo = ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_to);
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_mindustry_editor_WaveGraph_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_clipBegin_float_float_float_float_R_boolean])(ctx, (frame[0].o), ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[15].f), (frame[16].f));
	if (temp0 != 0) goto label_30;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_30:;
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y));
	if (temp0 == 0) goto label_31;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x) - (frame[13].f)) - ((jfloat(((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from))) * (frame[9].f))) / (frame[9].f)));
	sp[0].i = temp0;
	sp += 1;
	goto label_32;
	}
label_31:;
	INST_ICONST(-1);
label_32:;
	{
	sp -= 1;
	frame[19].i = sp[0].i;
	LINE_NUMBER(122);
	if (((frame[19].i) + ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from)) > (jint(-1))) goto label_34;
	}
	INST_ICONST(-1);
	INST_ISTORE(19);
label_34:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveGraph$Mode_counts;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[20].o = sp[0].o;
	}
label_37:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[20].o)))(ctx, (frame[20].o));
	if (temp0 == 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[20].o)))(ctx, (frame[20].o));
	frame[21].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_mindustry_editor_WaveGraph_color_mindustry_type_UnitType_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_color_mindustry_type_UnitType_R_arc_graphics_Color])(ctx, (frame[0].o), (frame[21].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(127);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(129);
	((func_mindustry_editor_WaveGraph_beginLine) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_beginLine])(ctx, (frame[0].o));
	LINE_NUMBER(131);
	frame[22].i = (jint(0));
	}
label_43:;
	{
	jint temp0 = frame[22].i;
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_44;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	frame[23].i = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[22].i))), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[21].o)))->F_id)));
	LINE_NUMBER(133);
	frame[24].f = ((frame[13].f) + ((jfloat(((frame[22].i) + ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from)))) * (frame[9].f)));
	frame[25].f = ((frame[14].f) + (((jfloat((frame[23].i))) * (frame[16].f)) / (jfloat((frame[8].i)))));
	LINE_NUMBER(134);
	((func_mindustry_editor_WaveGraph_linePoint_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_linePoint_float_float])(ctx, (frame[0].o), (frame[24].f), (frame[25].f));
	LINE_NUMBER(131);
	INST_IINC(22, 1);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(137);
	((func_mindustry_editor_WaveGraph_endLine) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_endLine])(ctx, (frame[0].o));
	LINE_NUMBER(138);
	goto label_37;
	}
label_38:;
	goto label_51;
label_35:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveGraph$Mode_totals;
	if (sp[0].o != sp[1].o) goto label_52;
	}
	{
	LINE_NUMBER(140);
	((func_mindustry_editor_WaveGraph_beginLine) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_beginLine])(ctx, (frame[0].o));
	LINE_NUMBER(142);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(143);
	frame[20].i = (jint(0));
	}
label_56:;
	{
	jint temp0 = frame[20].i;
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_57;
	}
	{
	LINE_NUMBER(144);
	frame[21].i = (jint(0));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[22].o = sp[0].o;
	}
label_60:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[22].o)))(ctx, (frame[22].o));
	if (temp0 == 0) goto label_61;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[22].o)))(ctx, (frame[22].o));
	frame[23].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(146);
	jint temp0 = frame[21].i;
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	frame[21].i = (temp0 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[20].i))), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[23].o)))->F_id))));
	LINE_NUMBER(147);
	goto label_60;
	}
label_61:;
	{
	LINE_NUMBER(149);
	frame[22].f = ((frame[13].f) + ((jfloat(((frame[20].i) + ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from)))) * (frame[9].f)));
	frame[23].f = ((frame[14].f) + (((jfloat((frame[21].i))) * (frame[16].f)) / (jfloat((frame[8].i)))));
	LINE_NUMBER(150);
	((func_mindustry_editor_WaveGraph_linePoint_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_linePoint_float_float])(ctx, (frame[0].o), (frame[22].f), (frame[23].f));
	LINE_NUMBER(143);
	INST_IINC(20, 1);
	goto label_56;
	}
label_57:;
	{
	LINE_NUMBER(153);
	((func_mindustry_editor_WaveGraph_endLine) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_endLine])(ctx, (frame[0].o));
	goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveGraph$Mode_health;
	if (sp[0].o != sp[1].o) goto label_51;
	}
	{
	LINE_NUMBER(155);
	((func_mindustry_editor_WaveGraph_beginLine) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_beginLine])(ctx, (frame[0].o));
	LINE_NUMBER(157);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_health;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(158);
	frame[20].i = (jint(0));
	}
label_70:;
	{
	jint temp0 = frame[20].i;
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_71;
	}
	{
	LINE_NUMBER(159);
	frame[21].f = (jfloat(0));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[22].o = sp[0].o;
	}
label_74:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[22].o)))(ctx, (frame[22].o));
	if (temp0 == 0) goto label_75;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[22].o)))(ctx, (frame[22].o));
	frame[23].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(161);
	jfloat temp0 = frame[21].f;
	jfloat temp1 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[23].o)))->F_health;
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	frame[21].f = (temp0 + (temp1 * (jfloat(((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[20].i))), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[23].o)))->F_id)))))));
	LINE_NUMBER(162);
	goto label_74;
	}
label_75:;
	{
	LINE_NUMBER(164);
	frame[22].f = ((frame[13].f) + ((jfloat(((frame[20].i) + ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from)))) * (frame[9].f)));
	frame[23].f = ((frame[14].f) + (((frame[21].f) * (frame[16].f)) / (jfloat((frame[8].i)))));
	LINE_NUMBER(165);
	((func_mindustry_editor_WaveGraph_linePoint_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_linePoint_float_float])(ctx, (frame[0].o), (frame[22].f), (frame[23].f));
	LINE_NUMBER(158);
	INST_IINC(20, 1);
	goto label_70;
	}
label_71:;
	{
	LINE_NUMBER(168);
	((func_mindustry_editor_WaveGraph_endLine) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_endLine])(ctx, (frame[0].o));
	}
label_51:;
	{
	LINE_NUMBER(172);
	if ((frame[19].i) < 0) goto label_81;
	}
	{
	jint temp0 = frame[19].i;
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_81;
	}
	{
	LINE_NUMBER(173);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(1)), (jfloat(0)), (jfloat(0)), (jfloat(0.2f)));
	LINE_NUMBER(174);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, ((((jfloat(((frame[19].i) + ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from)))) * (frame[9].f)) + (frame[13].f)) - ((frame[9].f) / (jfloat(2)))), (frame[14].f), (frame[9].f), (frame[16].f));
	LINE_NUMBER(175);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[7].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1.5f)));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_used;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[20].o = sp[0].o;
	}
label_87:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[20].o)))(ctx, (frame[20].o));
	if (temp0 == 0) goto label_88;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[20].o)))(ctx, (frame[20].o));
	frame[21].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = frame[19].i;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	frame[22].i = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp2)), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[21].o)))->F_id)));
	LINE_NUMBER(179);
	if ((frame[22].i) <= 0) goto label_91;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_countStr;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_emoji_R_java_lang_String) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_mindustry_type_UnitType_emoji_R_java_lang_String])(ctx, (frame[21].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[22].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_91:;
	LINE_NUMBER(182);
	goto label_87;
label_88:;
	{
	LINE_NUMBER(183);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(5.0f)));
	frame[20].f = temp0;
	LINE_NUMBER(184);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_countStr;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, (((((jfloat(((frame[19].i) + ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from)))) * (frame[9].f)) + (frame[13].f)) - ((frame[9].f) / (jfloat(2)))) + (frame[20].f)), (((frame[14].f) + (frame[16].f)) - (frame[20].f)));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[7].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	}
label_81:;
	{
	LINE_NUMBER(188);
	((func_mindustry_editor_WaveGraph_clipEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_clipEnd])(ctx, (frame[0].o));
	LINE_NUMBER(191);
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (frame[8].i), (jint(1)), (10));
	frame[20].f = (jfloat(temp0));
	LINE_NUMBER(193);
	jint temp1 = jint(1);
	jint temp2 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat((frame[8].i))) / (frame[20].f)));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, temp2);
	frame[21].i = temp3;
	LINE_NUMBER(195);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_lightGray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(196);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(0.1f)));
	LINE_NUMBER(198);
	frame[22].i = (jint(0));
	}
label_100:;
	{
	if ((frame[22].i) >= (frame[8].i)) goto label_101;
	}
	{
	LINE_NUMBER(199);
	frame[23].f = ((frame[14].f) + (((jfloat((frame[22].i))) * (frame[16].f)) / (jfloat((frame[8].i)))));
	frame[24].f = (frame[1].f);
	LINE_NUMBER(201);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[24].f), (frame[23].f), ((frame[24].f) + (frame[15].f)), (frame[23].f));
	LINE_NUMBER(203);
	sp[0].o = frame[6].o;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (frame[22].i)));
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(205);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (frame[22].i)));
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, (frame[24].f), ((frame[23].f) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[6].o)))->F_height) / (jfloat(2)))), (8));
	LINE_NUMBER(198);
	frame[22].i = ((frame[22].i) + (frame[21].i));
	goto label_100;
	}
label_101:;
	{
	LINE_NUMBER(207);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(209);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	frame[22].f = temp0;
	LINE_NUMBER(210);
	sp[0].o = frame[7].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(212);
	frame[23].i = (jint(0));
	}
label_111:;
	{
	jint temp0 = frame[23].i;
	sp[0].o = (jobject)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_112;
	}
	{
	LINE_NUMBER(213);
	frame[24].f = ((frame[2].f) + (frame[10].f));
	frame[25].f = ((frame[13].f) + ((frame[9].f) * (jfloat(((frame[23].i) + ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from))))));
	LINE_NUMBER(215);
	if ((floatCompare((frame[25].f), ((frame[1].f) + (frame[11].f)), -1)) < 0) goto label_116;
	}
	{
	if ((floatCompare((frame[25].f), (((frame[1].f) + (frame[11].f)) + (frame[15].f)), 1)) > 0) goto label_116;
	}
	{
	LINE_NUMBER(216);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[25].f), (frame[24].f), (frame[25].f), ((frame[24].f) + (frame[22].f)));
	}
label_116:;
	{
	LINE_NUMBER(218);
	if ((frame[23].i) != (frame[19].i)) goto label_118;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (((frame[23].i) + ((jint)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_from)) + (jint(1)))));
	jfloat temp0 = frame[25].f;
	jfloat temp1 = frame[24].f;
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, (temp1 - temp2), (jint(1)));
	}
label_118:;
	{
	LINE_NUMBER(212);
	INST_IINC(23, 1);
	goto label_111;
	}
label_112:;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[7].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(224);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[6].o));
	LINE_NUMBER(226);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_WaveGraph_lambda$new$0_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_zoom = (((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK(sp[0].o))->F_zoom) - ((((frame[1].f) * (jfloat(2))) / (jfloat(10.0f))) * ((jfloat)((mindustry_editor_WaveGraph *) NULL_CHECK((frame[0].o)))->F_zoom)));
	LINE_NUMBER(49);
	((func_mindustry_editor_WaveGraph_clampZoom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_WaveGraph_clampZoom])(ctx, (frame[0].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_WaveGraph[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_layout_Table_draw,
	(void *) M_arc_scene_Group_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Group_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Group_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_ui_layout_Table_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMinHeight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_Table_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_ui_layout_WidgetGroup_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_clearChildren,
	(void *) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Group_swapActor_int_int_R_boolean,
	(void *) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq,
	(void *) M_arc_scene_Group_hasChildren_R_boolean,
	(void *) M_arc_scene_Group_isTransform_R_boolean,
	(void *) M_arc_scene_Group_setTransform_boolean,
	(void *) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Group_toString_java_lang_StringBuilder_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_arc_scene_Group_boolean,
	(void *) M_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_drawBackground_float_float,
	(void *) M_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_getClip_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_setClip_boolean,
	(void *) M_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_reset,
	(void *) M_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_endRow,
	(void *) M_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getMarginTop_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginLeft_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginBottom_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginRight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getAlign_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRow_float_R_int,
	(void *) M_arc_scene_ui_layout_Table_setRound_boolean,
	(void *) M_arc_scene_ui_layout_Table_getRows_R_int,
	(void *) M_arc_scene_ui_layout_Table_getColumns_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRowHeight_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_getColumnWidth_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float,
	(void *) M_arc_scene_ui_layout_Table_computeSize,
	(void *) M_arc_scene_ui_layout_Table_layout_float_float_float_float,
	(void *) M_mindustry_editor_WaveGraph_clampZoom,
	(void *) M_mindustry_editor_WaveGraph_linePoint_float_float,
	(void *) M_mindustry_editor_WaveGraph_beginLine,
	(void *) M_mindustry_editor_WaveGraph_endLine,
	(void *) M_mindustry_editor_WaveGraph_rebuild,
	(void *) M_mindustry_editor_WaveGraph_color_mindustry_type_UnitType_R_arc_graphics_Color,
	(void *) M_mindustry_editor_WaveGraph_nextStep_float_R_int,
	(void *) M_mindustry_editor_WaveGraph_lambda$rebuild$2_arc_struct_ObjectSet_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveGraph_lambda$rebuild$7_mindustry_type_UnitType_arc_scene_ui_Button,
	(void *) M_mindustry_editor_WaveGraph_lambda$rebuild$6_mindustry_type_UnitType_arc_struct_ObjectSet,
	(void *) M_mindustry_editor_WaveGraph_lambda$rebuild$3_mindustry_type_UnitType_arc_scene_ui_Button,
	(void *) M_mindustry_editor_WaveGraph_lambda$rebuild$1_arc_struct_ObjectSet_arc_scene_ui_TextButton,
	(void *) M_mindustry_editor_WaveGraph_lambda$rebuild$0_arc_struct_ObjectSet,
	(void *) M_mindustry_editor_WaveGraph_lambda$new$3_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveGraph_lambda$new$5_mindustry_editor_WaveGraph$Mode_arc_scene_ui_TextButton,
	(void *) M_mindustry_editor_WaveGraph_lambda$new$4_mindustry_editor_WaveGraph$Mode,
	(void *) M_mindustry_editor_WaveGraph_lambda$new$2_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_WaveGraph_lambda$new$1_float_float_float_float,
	(void *) M_mindustry_editor_WaveGraph_lambda$new$0_float,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "setCullingArea", "(Larc/math/geom/Rect;)V" },
	{ "drawChildren", "()V" },
	{ "computeTransform", "()Larc/math/Mat;" },
	{ "applyTransform", "(Larc/math/Mat;)V" },
	{ "resetTransform", "()V" },
	{ "getCullingArea", "()Larc/math/geom/Rect;" },
	{ "childrenChanged", "()V" },
	{ "forEach", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;" },
	{ "fill", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addChild", "(Larc/scene/Element;)V" },
	{ "addChildAt", "(ILarc/scene/Element;)V" },
	{ "addChildBefore", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "addChildAfter", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "removeChild", "(Larc/scene/Element;)Z" },
	{ "removeChild", "(Larc/scene/Element;Z)Z" },
	{ "clearChildren", "()V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Larc/scene/Element;Larc/scene/Element;)Z" },
	{ "getChildren", "()Larc/struct/SnapshotSeq;" },
	{ "hasChildren", "()Z" },
	{ "isTransform", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "localToDescendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "setLayoutEnabled", "(Larc/scene/Group;Z)V" },
	{ "obtainCell", "()Larc/scene/ui/layout/Cell;" },
	{ "fill", "()Larc/scene/ui/layout/Table;" },
	{ "drawBackground", "(FF)V" },
	{ "background", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Table;" },
	{ "getBackground", "()Larc/scene/style/Drawable;" },
	{ "setBackground", "(Larc/scene/style/Drawable;)V" },
	{ "getClip", "()Z" },
	{ "setClip", "(Z)V" },
	{ "add", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "([Larc/scene/Element;)V" },
	{ "collapser", "(Larc/func/Cons;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/func/Cons;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "table", "()Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "wrapTable", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;ILarc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "label", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "add", "()Larc/scene/ui/layout/Cell;" },
	{ "stack", "([Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "spacer", "(Larc/func/Floatp;Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerX", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerY", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "imageDraw", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "image", "()Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/graphics/g2d/TextureRegion;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;ZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;FZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Larc/scene/ui/Button$ButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldFilter;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "rect", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/ui/layout/Cell;" },
	{ "buttonRow", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFZLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "reset", "()V" },
	{ "row", "()Larc/scene/ui/layout/Table;" },
	{ "endRow", "()V" },
	{ "getCell", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "getCells", "()Larc/struct/Seq;" },
	{ "defaults", "()Larc/scene/ui/layout/Cell;" },
	{ "margin", "(F)Larc/scene/ui/layout/Table;" },
	{ "margin", "(FFFF)Larc/scene/ui/layout/Table;" },
	{ "marginTop", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginLeft", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginBottom", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginRight", "(F)Larc/scene/ui/layout/Table;" },
	{ "align", "(I)Larc/scene/ui/layout/Table;" },
	{ "center", "()Larc/scene/ui/layout/Table;" },
	{ "top", "()Larc/scene/ui/layout/Table;" },
	{ "left", "()Larc/scene/ui/layout/Table;" },
	{ "bottom", "()Larc/scene/ui/layout/Table;" },
	{ "right", "()Larc/scene/ui/layout/Table;" },
	{ "getMarginTop", "()F" },
	{ "getMarginLeft", "()F" },
	{ "getMarginBottom", "()F" },
	{ "getMarginRight", "()F" },
	{ "getAlign", "()I" },
	{ "getRow", "(F)I" },
	{ "setRound", "(Z)V" },
	{ "getRows", "()I" },
	{ "getColumns", "()I" },
	{ "getRowHeight", "(I)F" },
	{ "getColumnWidth", "(I)F" },
	{ "ensureSize", "([FI)[F" },
	{ "computeSize", "()V" },
	{ "layout", "(FFFF)V" },
	{ "clampZoom", "()V" },
	{ "linePoint", "(FF)V" },
	{ "beginLine", "()V" },
	{ "endLine", "()V" },
	{ "rebuild", "()V" },
	{ "color", "(Lmindustry/type/UnitType;)Larc/graphics/Color;" },
	{ "nextStep", "(F)I" },
	{ "lambda$rebuild$2", "(Larc/struct/ObjectSet;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$7", "(Lmindustry/type/UnitType;Larc/scene/ui/Button;)V" },
	{ "lambda$rebuild$6", "(Lmindustry/type/UnitType;Larc/struct/ObjectSet;)V" },
	{ "lambda$rebuild$3", "(Lmindustry/type/UnitType;Larc/scene/ui/Button;)V" },
	{ "lambda$rebuild$1", "(Larc/struct/ObjectSet;Larc/scene/ui/TextButton;)V" },
	{ "lambda$rebuild$0", "(Larc/struct/ObjectSet;)V" },
	{ "lambda$new$3", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$5", "(Lmindustry/editor/WaveGraph$Mode;Larc/scene/ui/TextButton;)V" },
	{ "lambda$new$4", "(Lmindustry/editor/WaveGraph$Mode;)V" },
	{ "lambda$new$2", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$1", "(FFFF)V" },
	{ "lambda$new$0", "(F)V" },
};

static jclass innerClasses[] {
	&class_mindustry_editor_WaveGraph$Mode,
};

static FieldMetadata fields[] {
	{ "groups", &class_arc_struct_Seq, offsetof(mindustry_editor_WaveGraph, F_groups), "Larc/struct/Seq;", 1 },
	{ "mode", &class_mindustry_editor_WaveGraph$Mode, offsetof(mindustry_editor_WaveGraph, F_mode), "Lmindustry/editor/WaveGraph$Mode;", 2 },
	{ "values", getArrayClass(&class_int, 2), offsetof(mindustry_editor_WaveGraph, F_values), "[[I", 2 },
	{ "used", &class_arc_struct_OrderedSet, offsetof(mindustry_editor_WaveGraph, F_used), "Larc/struct/OrderedSet;", 2 },
	{ "max", &class_int, offsetof(mindustry_editor_WaveGraph, F_max), "I", 2 },
	{ "maxTotal", &class_int, offsetof(mindustry_editor_WaveGraph, F_maxTotal), "I", 2 },
	{ "maxHealth", &class_float, offsetof(mindustry_editor_WaveGraph, F_maxHealth), "F", 2 },
	{ "colors", &class_arc_scene_ui_layout_Table, offsetof(mindustry_editor_WaveGraph, F_colors), "Larc/scene/ui/layout/Table;", 2 },
	{ "hidden", &class_arc_struct_ObjectSet, offsetof(mindustry_editor_WaveGraph, F_hidden), "Larc/struct/ObjectSet;", 2 },
	{ "countStr", &class_java_lang_StringBuilder, offsetof(mindustry_editor_WaveGraph, F_countStr), "Ljava/lang/StringBuilder;", 2 },
	{ "pan", &class_float, offsetof(mindustry_editor_WaveGraph, F_pan), "F", 2 },
	{ "zoom", &class_float, offsetof(mindustry_editor_WaveGraph, F_zoom), "F", 2 },
	{ "from", &class_int, offsetof(mindustry_editor_WaveGraph, F_from), "I", 2 },
	{ "to", &class_int, offsetof(mindustry_editor_WaveGraph, F_to), "I", 2 },
	{ "lastFrom", &class_int, offsetof(mindustry_editor_WaveGraph, F_lastFrom), "I", 2 },
	{ "lastTo", &class_int, offsetof(mindustry_editor_WaveGraph, F_lastTo), "I", 2 },
	{ "lastZoom", &class_float, offsetof(mindustry_editor_WaveGraph, F_lastZoom), "F", 2 },
	{ "defaultSpace", &class_float, offsetof(mindustry_editor_WaveGraph, F_defaultSpace), "F", 2 },
	{ "points", &class_arc_struct_FloatSeq, offsetof(mindustry_editor_WaveGraph, F_points), "Larc/struct/FloatSeq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_WaveGraph, 0, "()V", 1 },
	{ "clampZoom", (intptr_t) M_mindustry_editor_WaveGraph_clampZoom, VTABLE_mindustry_editor_WaveGraph_clampZoom, "()V", 2 },
	{ "linePoint", (intptr_t) M_mindustry_editor_WaveGraph_linePoint_float_float, VTABLE_mindustry_editor_WaveGraph_linePoint_float_float, "(FF)V", 2 },
	{ "beginLine", (intptr_t) M_mindustry_editor_WaveGraph_beginLine, VTABLE_mindustry_editor_WaveGraph_beginLine, "()V", 2 },
	{ "endLine", (intptr_t) M_mindustry_editor_WaveGraph_endLine, VTABLE_mindustry_editor_WaveGraph_endLine, "()V", 2 },
	{ "rebuild", (intptr_t) M_mindustry_editor_WaveGraph_rebuild, VTABLE_mindustry_editor_WaveGraph_rebuild, "()V", 1 },
	{ "color", (intptr_t) M_mindustry_editor_WaveGraph_color_mindustry_type_UnitType_R_arc_graphics_Color, VTABLE_mindustry_editor_WaveGraph_color_mindustry_type_UnitType_R_arc_graphics_Color, "(Lmindustry/type/UnitType;)Larc/graphics/Color;", 0 },
	{ "nextStep", (intptr_t) M_mindustry_editor_WaveGraph_nextStep_float_R_int, VTABLE_mindustry_editor_WaveGraph_nextStep_float_R_int, "(F)I", 0 },
	{ "lambda$rebuild$2", (intptr_t) M_mindustry_editor_WaveGraph_lambda$rebuild$2_arc_struct_ObjectSet_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveGraph_lambda$rebuild$2_arc_struct_ObjectSet_arc_scene_ui_layout_Table, "(Larc/struct/ObjectSet;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$7", (intptr_t) M_mindustry_editor_WaveGraph_lambda$rebuild$7_mindustry_type_UnitType_arc_scene_ui_Button, VTABLE_mindustry_editor_WaveGraph_lambda$rebuild$7_mindustry_type_UnitType_arc_scene_ui_Button, "(Lmindustry/type/UnitType;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$rebuild$6", (intptr_t) M_mindustry_editor_WaveGraph_lambda$rebuild$6_mindustry_type_UnitType_arc_struct_ObjectSet, VTABLE_mindustry_editor_WaveGraph_lambda$rebuild$6_mindustry_type_UnitType_arc_struct_ObjectSet, "(Lmindustry/type/UnitType;Larc/struct/ObjectSet;)V", 4098 },
	{ "lambda$rebuild$3", (intptr_t) M_mindustry_editor_WaveGraph_lambda$rebuild$3_mindustry_type_UnitType_arc_scene_ui_Button, VTABLE_mindustry_editor_WaveGraph_lambda$rebuild$3_mindustry_type_UnitType_arc_scene_ui_Button, "(Lmindustry/type/UnitType;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$rebuild$5", (intptr_t) SM_mindustry_editor_WaveGraph_lambda$rebuild$5_arc_scene_ui_Button_arc_scene_ui_Image, 0, "(Larc/scene/ui/Button;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$rebuild$4", (intptr_t) SM_mindustry_editor_WaveGraph_lambda$rebuild$4_arc_scene_ui_Button_arc_graphics_Color_arc_scene_ui_Image, 0, "(Larc/scene/ui/Button;Larc/graphics/Color;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_editor_WaveGraph_lambda$rebuild$1_arc_struct_ObjectSet_arc_scene_ui_TextButton, VTABLE_mindustry_editor_WaveGraph_lambda$rebuild$1_arc_struct_ObjectSet_arc_scene_ui_TextButton, "(Larc/struct/ObjectSet;Larc/scene/ui/TextButton;)V", 4098 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_editor_WaveGraph_lambda$rebuild$0_arc_struct_ObjectSet, VTABLE_mindustry_editor_WaveGraph_lambda$rebuild$0_arc_struct_ObjectSet, "(Larc/struct/ObjectSet;)V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_editor_WaveGraph_lambda$new$3_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveGraph_lambda$new$3_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_editor_WaveGraph_lambda$new$5_mindustry_editor_WaveGraph$Mode_arc_scene_ui_TextButton, VTABLE_mindustry_editor_WaveGraph_lambda$new$5_mindustry_editor_WaveGraph$Mode_arc_scene_ui_TextButton, "(Lmindustry/editor/WaveGraph$Mode;Larc/scene/ui/TextButton;)V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_editor_WaveGraph_lambda$new$4_mindustry_editor_WaveGraph$Mode, VTABLE_mindustry_editor_WaveGraph_lambda$new$4_mindustry_editor_WaveGraph$Mode, "(Lmindustry/editor/WaveGraph$Mode;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_editor_WaveGraph_lambda$new$2_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_WaveGraph_lambda$new$2_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_editor_WaveGraph_lambda$new$1_float_float_float_float, VTABLE_mindustry_editor_WaveGraph_lambda$new$1_float_float_float_float, "(FFFF)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_editor_WaveGraph_lambda$new$0_float, VTABLE_mindustry_editor_WaveGraph_lambda$new$0_float, "(F)V", 4098 },
};

Class class_mindustry_editor_WaveGraph{
		.nativeName = (intptr_t) "mindustry/editor/WaveGraph",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_Table,
		.size = sizeof(mindustry_editor_WaveGraph),
		.classVtable = (intptr_t) vtable_mindustry_editor_WaveGraph,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_WaveGraph,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_WaveGraph,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 274,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_WaveGraph = registerClass(&class_mindustry_editor_WaveGraph);

}
