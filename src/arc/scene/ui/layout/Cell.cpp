#include "arc/scene/ui/layout/Cell.h"
#include "arc/func/Prov.h"
#include "arc/scene/ui/TextField.h"
#include "arc/scene/ui/layout/Cell_invoke_java_lang_Runnable_1.h"
#include "arc/scene/ui/Tooltip_Tooltips.h"
#include "arc/scene/ui/layout/Cell_invoke_java_lang_Runnable_0.h"
#include "arc/func/Boolp.h"
#include "arc/scene/ui/layout/Cell_invoke_java_lang_Runnable_2.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/TextField_TextFieldValidator.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "java/lang/String.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/func/Boolf.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/scene/ui/Tooltip.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/ui/layout/Cell_invoke_arc_func_Boolp_0.h"
#include "arc/scene/ui/Label.h"
#include "arc/scene/style/Style.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/utils/Disableable.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/scene/event/EventListener.h"

extern "C" {

jbool SF_arc_scene_ui_layout_Cell_dset;
jobject SF_arc_scene_ui_layout_Cell_defaults;
jfloat SF_arc_scene_ui_layout_Cell_unset;

void mark_arc_scene_ui_layout_Cell(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_ui_layout_Cell_defaults)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_layout_Cell_defaults)->clazz)->markFunction)((jobject) SF_arc_scene_ui_layout_Cell_defaults, mark, depth + 1);
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
	auto self = (arc_scene_ui_layout_Cell *) object;
	if (self->F_element)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_element)->clazz)->markFunction)((jobject) self->F_element, mark, depth + 1);
	if (self->F_table)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_table)->clazz)->markFunction)((jobject) self->F_table, mark, depth + 1);
}

void clinit_arc_scene_ui_layout_Cell(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_scene_ui_layout_Cell_unset = jfloat(-std::numeric_limits<float>::infinity());
}

void init_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Cell(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(46);
	((func_arc_scene_ui_layout_Cell_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_reset])(ctx, (frame[0].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_ui_layout_Cell_defaults_R_arc_scene_ui_layout_Cell(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:defaults", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Cell(ctx);
	{
	LINE_NUMBER(54);
	if ((clinit_arc_scene_ui_layout_Cell(ctx), (jint)SF_arc_scene_ui_layout_Cell_dset) != 0) goto label_1;
	}
	{
	LINE_NUMBER(55);
	clinit_arc_scene_ui_layout_Cell(ctx);
	SF_arc_scene_ui_layout_Cell_dset = (jint(1));
	LINE_NUMBER(56);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Cell);
	init_arc_scene_ui_layout_Cell(ctx, sp[0].o);
	clinit_arc_scene_ui_layout_Cell(ctx);
	SF_arc_scene_ui_layout_Cell_defaults = sp[0].o;
	LINE_NUMBER(57);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(58);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minHeight = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(59);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_maxWidth = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(60);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_maxHeight = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(61);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padTop = (jfloat(0));
	LINE_NUMBER(62);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padLeft = (jfloat(0));
	LINE_NUMBER(63);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padBottom = (jfloat(0));
	LINE_NUMBER(64);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padRight = (jfloat(0));
	LINE_NUMBER(65);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jfloat(0));
	LINE_NUMBER(66);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jfloat(0));
	LINE_NUMBER(67);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_align = (jint(0));
	LINE_NUMBER(68);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_expandX = (jint(0));
	LINE_NUMBER(69);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_expandY = (jint(0));
	LINE_NUMBER(70);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_colspan = (jint(1));
	LINE_NUMBER(71);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_uniformX = (jint(0));
	LINE_NUMBER(72);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_uniformY = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(74);
	clinit_arc_scene_ui_layout_Cell(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Cell_defaults;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Cell_setLayout_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:setLayout", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_table = (jref) (frame[1].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_setElement_arc_scene_Element_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:setElement", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	jint temp0 = (jint)((func_arc_scene_Element_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_remove_R_boolean])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(85);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element = (jref) (frame[1].o);
	LINE_NUMBER(86);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_addChild_arc_scene_Element])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_clearElement_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:clearElement", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_setElement_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_setElement_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:self", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_get_R_arc_scene_Element(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:get", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_layout_Cell_hasElement_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:hasElement", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Cell_prefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:prefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getPrefWidth_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Cell_prefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:prefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Cell_maxWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:maxWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth), (jfloat(-std::numeric_limits<float>::infinity())), -1)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getMaxWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getMaxWidth_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[-1].o))->F_maxWidth;
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Cell_maxHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:maxHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight), (jfloat(-std::numeric_limits<float>::infinity())), -1)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getMaxHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getMaxHeight_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[-1].o))->F_maxHeight;
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Cell_minWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:minWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth), (jfloat(-std::numeric_limits<float>::infinity())), -1)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getMinWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getMinWidth_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[-1].o))->F_minWidth;
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Cell_minHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:minHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight), (jfloat(-std::numeric_limits<float>::infinity())), -1)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getMinHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getMinHeight_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[-1].o))->F_minHeight;
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:tooltip", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:tooltip", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	sp[1].o = (jobject)SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips(ctx);
	sp[1].o = (jobject)((func_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip])(ctx, sp[1].o, (frame[1].o), (frame[2].i));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_tooltip_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:tooltip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip);
	init_arc_scene_ui_Tooltip_arc_func_Cons(ctx, sp[1].o, (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_tooltip_boolean_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:tooltip", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(156);
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip);
	init_arc_scene_ui_Tooltip_arc_func_Cons(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(157);
	((arc_scene_ui_Tooltip *) NULL_CHECK((frame[3].o)))->F_allowMobile = (frame[1].i);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:size", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[3].o))->F_maxHeight = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[2].o))->F_maxWidth = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[1].o))->F_minHeight = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = temp0;
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:size", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[1].o))->F_maxWidth = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = temp0;
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[2].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[1].o))->F_maxHeight = temp3;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minHeight = temp3;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:name", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(182);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Cell_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_scene_ui_layout_Cell_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Cell_invoke_java_lang_Runnable_0);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:disabled", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Button)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(189);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Button, sp[0].o);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0(ctx);
		auto proxy = (arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Button_setDisabled_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setDisabled_arc_func_Boolp])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(190);
	goto label_5;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_utils_Disableable)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Cell_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (arc_scene_ui_layout_Cell_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Cell_invoke_java_lang_Runnable_1);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:scrollX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_ScrollPane)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_ScrollPane, sp[0].o);
	sp += 1;
	if ((frame[1].i) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean])(ctx, sp[0].o, sp[1].i);
label_1:;
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_scrollY_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:scrollY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_ScrollPane)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_ScrollPane, sp[0].o);
	sp += 1;
	if ((frame[1].i) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_ScrollPane_setScrollingDisabledY_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabledY_boolean])(ctx, sp[0].o, sp[1].i);
label_1:;
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:disabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_utils_Disableable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((func_arc_scene_utils_Disableable_setDisabled_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_utils_Disableable, INDEX_arc_scene_utils_Disableable_setDisabled_boolean, (checkCast(ctx, &class_arc_scene_utils_Disableable, sp[0].o))))(ctx, (checkCast(ctx, &class_arc_scene_utils_Disableable, sp[0].o)), (frame[1].i));
	}
label_1:;
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:touchable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) (frame[1].o);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_touchable_arc_func_Prov_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:touchable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((func_arc_scene_Element_touchable_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_touchable_arc_func_Prov])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:visible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_visible_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:visible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (frame[1].i);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:scaling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Image)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, (checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o)), (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:valid", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextField)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	((func_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)), (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:maxTextLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextField)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	((func_arc_scene_ui_TextField_setMaxLength_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextField_setMaxLength_int])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o)), (frame[1].i));
	}
label_1:;
	{
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:wrap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:wrap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Label)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((func_arc_scene_ui_Label_setWrap_boolean_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean_boolean])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (jint(1)), (frame[1].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextButton)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	((func_arc_scene_ui_Label_setWrap_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean_boolean])(ctx, sp[0].o, (jint(1)), (frame[1].i));
	}
label_3:;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:ellipsis", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Label)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((func_arc_scene_ui_Label_setEllipsis_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setEllipsis_boolean])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (frame[1].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextButton)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	((func_arc_scene_ui_Label_setEllipsis_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setEllipsis_boolean])(ctx, sp[0].o, (frame[1].i));
	}
label_3:;
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:labelAlign", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Label)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((func_arc_scene_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int_int])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (frame[1].i), (frame[2].i));
	}
label_1:;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:labelAlign", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:group", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Button)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((func_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_Button, sp[1].o)));
	}
label_1:;
	{
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:wrapLabel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextButton)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	((func_arc_scene_ui_Label_setWrap_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean])(ctx, sp[0].o, (frame[1].i));
	}
label_1:;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:checked", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Button)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Button, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, (checkCast(ctx, &class_arc_scene_ui_Button, sp[0].o)), (frame[1].i));
	}
label_1:;
	{
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:checked", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(317);
	if ((isInstance(ctx, (frame[2].o), &class_arc_scene_ui_Button)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(318);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Cell_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (arc_scene_ui_layout_Cell_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Cell_invoke_java_lang_Runnable_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_fontScale_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:fontScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Label)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	((func_arc_scene_ui_Label_setFontScale_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setFontScale_float])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (frame[1].f));
	}
label_1:;
	{
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:color", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	((func_arc_scene_Element_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setColor_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:margin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_layout_Table)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)), (frame[1].f));
	}
label_1:;
	{
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_marginTop_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:marginTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_layout_Table)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)), (frame[1].f));
	}
label_1:;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_marginBottom_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:marginBottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_layout_Table)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)), (frame[1].f));
	}
label_1:;
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:marginLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_layout_Table)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)), (frame[1].f));
	}
label_1:;
	{
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_marginRight_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:marginRight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_layout_Table)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o)), (frame[1].f));
	}
label_1:;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:width", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(372);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[1].o))->F_maxWidth = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = temp0;
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:style", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(378);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Label)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o);
	clinit_arc_scene_ui_Label$LabelStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label$LabelStyle);
	init_arc_scene_ui_Label$LabelStyle_arc_scene_ui_Label$LabelStyle(ctx, sp[1].o, (checkCast(ctx, &class_arc_scene_ui_Label$LabelStyle, (frame[1].o))));
	((func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Button)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Button, sp[0].o);
	clinit_arc_scene_ui_Button$ButtonStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Button$ButtonStyle);
	init_arc_scene_ui_Button$ButtonStyle_arc_scene_ui_Button$ButtonStyle(ctx, sp[1].o, (checkCast(ctx, &class_arc_scene_ui_Button$ButtonStyle, (frame[1].o))));
	((func_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_ScrollPane)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_ScrollPane, sp[0].o);
	clinit_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane$ScrollPaneStyle);
	init_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, sp[1].o, (checkCast(ctx, &class_arc_scene_ui_ScrollPane$ScrollPaneStyle, (frame[1].o))));
	((func_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:height", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(392);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[1].o))->F_maxHeight = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minHeight = temp0;
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_minSize_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:minSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[1].o))->F_minHeight = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = temp0;
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_minSize_float_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:minSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(404);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = temp0;
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[2].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minHeight = temp1;
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:minWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = temp0;
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_minHeight_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:minHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_minHeight = temp0;
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_maxSize_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:maxSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(421);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[1].o))->F_maxHeight = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_maxWidth = temp0;
	LINE_NUMBER(422);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_maxSize_float_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:maxSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(427);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_maxWidth = temp0;
	LINE_NUMBER(428);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[2].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_maxHeight = temp1;
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:maxWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_maxWidth = temp0;
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:maxHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(438);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_maxHeight = temp0;
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:pad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(444);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[3].o))->F_padRight = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[2].o))->F_padBottom = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[1].o))->F_padLeft = temp0;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padTop = temp0;
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:pad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padTop = temp0;
	LINE_NUMBER(450);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[2].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padLeft = temp1;
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[3].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padBottom = temp2;
	LINE_NUMBER(452);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[4].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padRight = temp3;
	LINE_NUMBER(453);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:padTop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(457);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padTop = temp0;
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:padLeft", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padLeft = temp0;
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:padBottom", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padBottom = temp0;
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:padRight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_scl_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_padRight = temp0;
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:fill", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(478);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillX = (jfloat(1));
	LINE_NUMBER(479);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillY = (jfloat(1));
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:fillX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(485);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillX = (jfloat(1));
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:fillY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(491);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillY = (jfloat(1));
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_fill_float_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:fill", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(496);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillX = (frame[1].f);
	LINE_NUMBER(497);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillY = (frame[2].f);
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_fill_boolean_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:fill", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 2;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_fillX = sp[1].f;
	LINE_NUMBER(504);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	INST_FCONST(0);
label_5:;
	{
	sp -= 2;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_fillY = sp[1].f;
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_fill_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:fill", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 2;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_fillX = sp[1].f;
	LINE_NUMBER(511);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	INST_FCONST(0);
label_5:;
	{
	sp -= 2;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_fillY = sp[1].f;
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_align_int_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:align", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(520);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align = (frame[1].i);
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:center", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(526);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align = (jint(1));
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:top", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(532);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align = ((((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align) | (jint(2))) & (-5));
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:left", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(538);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align = ((((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align) | (8)) & (-17));
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:bottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(544);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align = ((((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align) | (jint(4))) & (-3));
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:right", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(550);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align = ((((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align) | (16)) & (-9));
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:grow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(556);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandX = (jint(1));
	LINE_NUMBER(557);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandY = (jint(1));
	LINE_NUMBER(558);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillX = (jfloat(1));
	LINE_NUMBER(559);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillY = (jfloat(1));
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:growX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(565);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandX = (jint(1));
	LINE_NUMBER(566);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillX = (jfloat(1));
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:growY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(572);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandY = (jint(1));
	LINE_NUMBER(573);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillY = (jfloat(1));
	LINE_NUMBER(574);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_expand_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:expand", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(579);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandX = (jint(1));
	LINE_NUMBER(580);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandY = (jint(1));
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:expandX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(586);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandX = (jint(1));
	LINE_NUMBER(587);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:expandY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(592);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandY = (jint(1));
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_expand_int_int_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:expand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(597);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandX = (frame[1].i);
	LINE_NUMBER(598);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandY = (frame[2].i);
	LINE_NUMBER(599);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_expand_boolean_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:expand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(604);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_expandX = sp[1].i;
	LINE_NUMBER(605);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_expandY = sp[1].i;
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:colspan", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(610);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_colspan = (frame[1].i);
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:uniform", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(616);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_uniformX = (jint(1));
	LINE_NUMBER(617);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_uniformY = (jint(1));
	LINE_NUMBER(618);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:uniformX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(623);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_uniformX = (jint(1));
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_uniformY_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:uniformY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(629);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_uniformY = (jint(1));
	LINE_NUMBER(630);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_uniform_boolean_boolean_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:uniform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(634);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_uniformX = (frame[1].i);
	LINE_NUMBER(635);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_uniformY = (frame[2].i);
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Cell_setBounds_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:setBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(640);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_elementX = (frame[1].f);
	LINE_NUMBER(641);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_elementY = (frame[2].f);
	LINE_NUMBER(642);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_elementWidth = (frame[3].f);
	LINE_NUMBER(643);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_elementHeight = (frame[4].f);
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_layout_Cell_isEndRow_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:isEndRow", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_endRow);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Cell_row(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:row", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_getTable_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:getTable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(655);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_table;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Cell_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(660);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(661);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(662);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(663);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(664);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(0));
	LINE_NUMBER(665);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(0));
	LINE_NUMBER(666);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(0));
	LINE_NUMBER(667);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(0));
	LINE_NUMBER(668);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillX = (jfloat(0));
	LINE_NUMBER(669);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillY = (jfloat(0));
	LINE_NUMBER(670);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align = (jint(0));
	LINE_NUMBER(671);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandX = (jint(0));
	LINE_NUMBER(672);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandY = (jint(0));
	LINE_NUMBER(673);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_colspan = (jint(1));
	LINE_NUMBER(674);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_uniformX = (jint(0));
	LINE_NUMBER(675);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_uniformY = (jint(0));
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Cell_scl_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:scl", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(679);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Cell_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(685);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element = (jref) (jobject(nullptr));
	LINE_NUMBER(686);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_table = (jref) (jobject(nullptr));
	LINE_NUMBER(687);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_endRow = (jint(0));
	LINE_NUMBER(688);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_cellAboveIndex = (jint(-1));
	LINE_NUMBER(690);
	sp[0].o = (jobject)SM_arc_scene_ui_layout_Cell_defaults_R_arc_scene_ui_layout_Cell(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(691);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_set_arc_scene_ui_layout_Cell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_set_arc_scene_ui_layout_Cell_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o));
	}
label_6:;
	LINE_NUMBER(692);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_set_arc_scene_ui_layout_Cell_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(695);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_minWidth);
	LINE_NUMBER(696);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_minHeight);
	LINE_NUMBER(697);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_maxWidth);
	LINE_NUMBER(698);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_maxHeight);
	LINE_NUMBER(699);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_padTop = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_padTop);
	LINE_NUMBER(700);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_padLeft = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_padLeft);
	LINE_NUMBER(701);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_padBottom = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_padBottom);
	LINE_NUMBER(702);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_padRight = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_padRight);
	LINE_NUMBER(703);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillX = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_fillX);
	LINE_NUMBER(704);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_fillY = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_fillY);
	LINE_NUMBER(705);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_align = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_align);
	LINE_NUMBER(706);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandX = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_expandX);
	LINE_NUMBER(707);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_expandY = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_expandY);
	LINE_NUMBER(708);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_colspan = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_colspan);
	LINE_NUMBER(709);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_uniformX = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_uniformX);
	LINE_NUMBER(710);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_uniformY = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[1].o)))->F_uniformY);
	LINE_NUMBER(711);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Cell_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = (jobject)((func_arc_scene_Element_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_arc_scene_ui_layout_Cell_lambda$checked$0_arc_scene_Element_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:lambda$checked$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Cell(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(318);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Button, (frame[0].o));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Cell_lambda$disabled$1_arc_func_Boolf_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:lambda$disabled$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = checkCast(ctx, &class_arc_scene_utils_Disableable, sp[0].o);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	((func_arc_scene_utils_Disableable_setDisabled_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_utils_Disableable, INDEX_arc_scene_utils_Disableable_setDisabled_boolean, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_scene_ui_layout_Cell_lambda$disabled$0_arc_func_Boolf_arc_scene_Element_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:lambda$disabled$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Cell(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_layout_Cell_lambda$update$0_arc_func_Cons_arc_scene_Element(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell:lambda$update$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Cell(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(182);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_layout_Cell[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_ui_layout_Cell_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_layout_Cell_reset,
	(void *) M_arc_scene_ui_layout_Cell_setLayout_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Cell_setElement_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_clearElement_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_get_R_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Cell_hasElement_R_boolean,
	(void *) M_arc_scene_ui_layout_Cell_prefWidth_R_float,
	(void *) M_arc_scene_ui_layout_Cell_prefHeight_R_float,
	(void *) M_arc_scene_ui_layout_Cell_maxWidth_R_float,
	(void *) M_arc_scene_ui_layout_Cell_maxHeight_R_float,
	(void *) M_arc_scene_ui_layout_Cell_minWidth_R_float,
	(void *) M_arc_scene_ui_layout_Cell_minHeight_R_float,
	(void *) M_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_tooltip_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_tooltip_boolean_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_scrollY_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_touchable_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_visible_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_fontScale_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_marginTop_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_marginBottom_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_marginRight_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_minSize_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_minSize_float_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_minHeight_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_maxSize_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_maxSize_float_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_fill_float_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_fill_boolean_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_fill_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_align_int_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_expand_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_expand_int_int_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_expand_boolean_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_uniformY_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_uniform_boolean_boolean_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_setBounds_float_float_float_float,
	(void *) M_arc_scene_ui_layout_Cell_isEndRow_R_boolean,
	(void *) M_arc_scene_ui_layout_Cell_row,
	(void *) M_arc_scene_ui_layout_Cell_getTable_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Cell_clear,
	(void *) M_arc_scene_ui_layout_Cell_scl_float_R_float,
	(void *) M_arc_scene_ui_layout_Cell_set_arc_scene_ui_layout_Cell_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Cell_lambda$disabled$1_arc_func_Boolf_arc_scene_Element,
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
	{ "reset", "()V" },
	{ "setLayout", "(Larc/scene/ui/layout/Table;)V" },
	{ "setElement", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "clearElement", "()Larc/scene/ui/layout/Cell;" },
	{ "with", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "self", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "get", "()Larc/scene/Element;" },
	{ "hasElement", "()Z" },
	{ "prefWidth", "()F" },
	{ "prefHeight", "()F" },
	{ "maxWidth", "()F" },
	{ "maxHeight", "()F" },
	{ "minWidth", "()F" },
	{ "minHeight", "()F" },
	{ "tooltip", "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;" },
	{ "tooltip", "(Ljava/lang/String;Z)Larc/scene/ui/layout/Cell;" },
	{ "tooltip", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "tooltip", "(ZLarc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "size", "(F)Larc/scene/ui/layout/Cell;" },
	{ "size", "(FF)Larc/scene/ui/layout/Cell;" },
	{ "name", "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;" },
	{ "update", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "disabled", "(Larc/func/Boolf;)Larc/scene/ui/layout/Cell;" },
	{ "scrollX", "(Z)Larc/scene/ui/layout/Cell;" },
	{ "scrollY", "(Z)Larc/scene/ui/layout/Cell;" },
	{ "disabled", "(Z)Larc/scene/ui/layout/Cell;" },
	{ "touchable", "(Larc/scene/event/Touchable;)Larc/scene/ui/layout/Cell;" },
	{ "touchable", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "visible", "(Z)Larc/scene/ui/layout/Cell;" },
	{ "scaling", "(Larc/util/Scaling;)Larc/scene/ui/layout/Cell;" },
	{ "valid", "(Larc/scene/ui/TextField$TextFieldValidator;)Larc/scene/ui/layout/Cell;" },
	{ "maxTextLength", "(I)Larc/scene/ui/layout/Cell;" },
	{ "wrap", "()Larc/scene/ui/layout/Cell;" },
	{ "wrap", "(Z)Larc/scene/ui/layout/Cell;" },
	{ "ellipsis", "(Z)Larc/scene/ui/layout/Cell;" },
	{ "labelAlign", "(II)Larc/scene/ui/layout/Cell;" },
	{ "labelAlign", "(I)Larc/scene/ui/layout/Cell;" },
	{ "group", "(Larc/scene/ui/ButtonGroup;)Larc/scene/ui/layout/Cell;" },
	{ "wrapLabel", "(Z)Larc/scene/ui/layout/Cell;" },
	{ "checked", "(Z)Larc/scene/ui/layout/Cell;" },
	{ "checked", "(Larc/func/Boolf;)Larc/scene/ui/layout/Cell;" },
	{ "fontScale", "(F)Larc/scene/ui/layout/Cell;" },
	{ "color", "(Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "margin", "(F)Larc/scene/ui/layout/Cell;" },
	{ "marginTop", "(F)Larc/scene/ui/layout/Cell;" },
	{ "marginBottom", "(F)Larc/scene/ui/layout/Cell;" },
	{ "marginLeft", "(F)Larc/scene/ui/layout/Cell;" },
	{ "marginRight", "(F)Larc/scene/ui/layout/Cell;" },
	{ "width", "(F)Larc/scene/ui/layout/Cell;" },
	{ "style", "(Larc/scene/style/Style;)Larc/scene/ui/layout/Cell;" },
	{ "height", "(F)Larc/scene/ui/layout/Cell;" },
	{ "minSize", "(F)Larc/scene/ui/layout/Cell;" },
	{ "minSize", "(FF)Larc/scene/ui/layout/Cell;" },
	{ "minWidth", "(F)Larc/scene/ui/layout/Cell;" },
	{ "minHeight", "(F)Larc/scene/ui/layout/Cell;" },
	{ "maxSize", "(F)Larc/scene/ui/layout/Cell;" },
	{ "maxSize", "(FF)Larc/scene/ui/layout/Cell;" },
	{ "maxWidth", "(F)Larc/scene/ui/layout/Cell;" },
	{ "maxHeight", "(F)Larc/scene/ui/layout/Cell;" },
	{ "pad", "(F)Larc/scene/ui/layout/Cell;" },
	{ "pad", "(FFFF)Larc/scene/ui/layout/Cell;" },
	{ "padTop", "(F)Larc/scene/ui/layout/Cell;" },
	{ "padLeft", "(F)Larc/scene/ui/layout/Cell;" },
	{ "padBottom", "(F)Larc/scene/ui/layout/Cell;" },
	{ "padRight", "(F)Larc/scene/ui/layout/Cell;" },
	{ "fill", "()Larc/scene/ui/layout/Cell;" },
	{ "fillX", "()Larc/scene/ui/layout/Cell;" },
	{ "fillY", "()Larc/scene/ui/layout/Cell;" },
	{ "fill", "(FF)Larc/scene/ui/layout/Cell;" },
	{ "fill", "(ZZ)Larc/scene/ui/layout/Cell;" },
	{ "fill", "(Z)Larc/scene/ui/layout/Cell;" },
	{ "align", "(I)Larc/scene/ui/layout/Cell;" },
	{ "center", "()Larc/scene/ui/layout/Cell;" },
	{ "top", "()Larc/scene/ui/layout/Cell;" },
	{ "left", "()Larc/scene/ui/layout/Cell;" },
	{ "bottom", "()Larc/scene/ui/layout/Cell;" },
	{ "right", "()Larc/scene/ui/layout/Cell;" },
	{ "grow", "()Larc/scene/ui/layout/Cell;" },
	{ "growX", "()Larc/scene/ui/layout/Cell;" },
	{ "growY", "()Larc/scene/ui/layout/Cell;" },
	{ "expand", "()Larc/scene/ui/layout/Cell;" },
	{ "expandX", "()Larc/scene/ui/layout/Cell;" },
	{ "expandY", "()Larc/scene/ui/layout/Cell;" },
	{ "expand", "(II)Larc/scene/ui/layout/Cell;" },
	{ "expand", "(ZZ)Larc/scene/ui/layout/Cell;" },
	{ "colspan", "(I)Larc/scene/ui/layout/Cell;" },
	{ "uniform", "()Larc/scene/ui/layout/Cell;" },
	{ "uniformX", "()Larc/scene/ui/layout/Cell;" },
	{ "uniformY", "()Larc/scene/ui/layout/Cell;" },
	{ "uniform", "(ZZ)Larc/scene/ui/layout/Cell;" },
	{ "setBounds", "(FFFF)V" },
	{ "isEndRow", "()Z" },
	{ "row", "()V" },
	{ "getTable", "()Larc/scene/ui/layout/Table;" },
	{ "clear", "()V" },
	{ "scl", "(F)F" },
	{ "set", "(Larc/scene/ui/layout/Cell;)Larc/scene/ui/layout/Cell;" },
	{ "lambda$disabled$1", "(Larc/func/Boolf;Larc/scene/Element;)V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "dset", &class_boolean, (intptr_t) &SF_arc_scene_ui_layout_Cell_dset, "Z", 10 },
	{ "defaults", &class_arc_scene_ui_layout_Cell, (intptr_t) &SF_arc_scene_ui_layout_Cell_defaults, "Larc/scene/ui/layout/Cell;", 10 },
	{ "unset", &class_float, (intptr_t) &SF_arc_scene_ui_layout_Cell_unset, "F", 24 },
	{ "minWidth", &class_float, offsetof(arc_scene_ui_layout_Cell, F_minWidth), "F", 0 },
	{ "minHeight", &class_float, offsetof(arc_scene_ui_layout_Cell, F_minHeight), "F", 0 },
	{ "maxWidth", &class_float, offsetof(arc_scene_ui_layout_Cell, F_maxWidth), "F", 0 },
	{ "maxHeight", &class_float, offsetof(arc_scene_ui_layout_Cell, F_maxHeight), "F", 0 },
	{ "padTop", &class_float, offsetof(arc_scene_ui_layout_Cell, F_padTop), "F", 0 },
	{ "padLeft", &class_float, offsetof(arc_scene_ui_layout_Cell, F_padLeft), "F", 0 },
	{ "padBottom", &class_float, offsetof(arc_scene_ui_layout_Cell, F_padBottom), "F", 0 },
	{ "padRight", &class_float, offsetof(arc_scene_ui_layout_Cell, F_padRight), "F", 0 },
	{ "fillX", &class_float, offsetof(arc_scene_ui_layout_Cell, F_fillX), "F", 0 },
	{ "fillY", &class_float, offsetof(arc_scene_ui_layout_Cell, F_fillY), "F", 0 },
	{ "align", &class_int, offsetof(arc_scene_ui_layout_Cell, F_align), "I", 0 },
	{ "expandX", &class_int, offsetof(arc_scene_ui_layout_Cell, F_expandX), "I", 0 },
	{ "expandY", &class_int, offsetof(arc_scene_ui_layout_Cell, F_expandY), "I", 0 },
	{ "colspan", &class_int, offsetof(arc_scene_ui_layout_Cell, F_colspan), "I", 0 },
	{ "uniformX", &class_boolean, offsetof(arc_scene_ui_layout_Cell, F_uniformX), "Z", 0 },
	{ "uniformY", &class_boolean, offsetof(arc_scene_ui_layout_Cell, F_uniformY), "Z", 0 },
	{ "element", &class_arc_scene_Element, offsetof(arc_scene_ui_layout_Cell, F_element), "Larc/scene/Element;", 0 },
	{ "elementX", &class_float, offsetof(arc_scene_ui_layout_Cell, F_elementX), "F", 0 },
	{ "elementY", &class_float, offsetof(arc_scene_ui_layout_Cell, F_elementY), "F", 0 },
	{ "elementWidth", &class_float, offsetof(arc_scene_ui_layout_Cell, F_elementWidth), "F", 0 },
	{ "elementHeight", &class_float, offsetof(arc_scene_ui_layout_Cell, F_elementHeight), "F", 0 },
	{ "endRow", &class_boolean, offsetof(arc_scene_ui_layout_Cell, F_endRow), "Z", 0 },
	{ "column", &class_int, offsetof(arc_scene_ui_layout_Cell, F_column), "I", 0 },
	{ "row", &class_int, offsetof(arc_scene_ui_layout_Cell, F_row), "I", 0 },
	{ "cellAboveIndex", &class_int, offsetof(arc_scene_ui_layout_Cell, F_cellAboveIndex), "I", 0 },
	{ "computedPadTop", &class_float, offsetof(arc_scene_ui_layout_Cell, F_computedPadTop), "F", 0 },
	{ "computedPadLeft", &class_float, offsetof(arc_scene_ui_layout_Cell, F_computedPadLeft), "F", 0 },
	{ "computedPadBottom", &class_float, offsetof(arc_scene_ui_layout_Cell, F_computedPadBottom), "F", 0 },
	{ "computedPadRight", &class_float, offsetof(arc_scene_ui_layout_Cell, F_computedPadRight), "F", 0 },
	{ "table", &class_arc_scene_ui_layout_Table, offsetof(arc_scene_ui_layout_Cell, F_table), "Larc/scene/ui/layout/Table;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Cell, 0, "()V", 1 },
	{ "defaults", (intptr_t) SM_arc_scene_ui_layout_Cell_defaults_R_arc_scene_ui_layout_Cell, 0, "()Larc/scene/ui/layout/Cell;", 9 },
	{ "setLayout", (intptr_t) M_arc_scene_ui_layout_Cell_setLayout_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Cell_setLayout_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "setElement", (intptr_t) M_arc_scene_ui_layout_Cell_setElement_arc_scene_Element_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_setElement_arc_scene_Element_R_arc_scene_ui_layout_Cell, "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;", 1 },
	{ "clearElement", (intptr_t) M_arc_scene_ui_layout_Cell_clearElement_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_clearElement_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "with", (intptr_t) M_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "self", (intptr_t) M_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "get", (intptr_t) M_arc_scene_ui_layout_Cell_get_R_arc_scene_Element, VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element, "()Larc/scene/Element;", 1 },
	{ "hasElement", (intptr_t) M_arc_scene_ui_layout_Cell_hasElement_R_boolean, VTABLE_arc_scene_ui_layout_Cell_hasElement_R_boolean, "()Z", 1 },
	{ "prefWidth", (intptr_t) M_arc_scene_ui_layout_Cell_prefWidth_R_float, VTABLE_arc_scene_ui_layout_Cell_prefWidth_R_float, "()F", 1 },
	{ "prefHeight", (intptr_t) M_arc_scene_ui_layout_Cell_prefHeight_R_float, VTABLE_arc_scene_ui_layout_Cell_prefHeight_R_float, "()F", 1 },
	{ "maxWidth", (intptr_t) M_arc_scene_ui_layout_Cell_maxWidth_R_float, VTABLE_arc_scene_ui_layout_Cell_maxWidth_R_float, "()F", 1 },
	{ "maxHeight", (intptr_t) M_arc_scene_ui_layout_Cell_maxHeight_R_float, VTABLE_arc_scene_ui_layout_Cell_maxHeight_R_float, "()F", 1 },
	{ "minWidth", (intptr_t) M_arc_scene_ui_layout_Cell_minWidth_R_float, VTABLE_arc_scene_ui_layout_Cell_minWidth_R_float, "()F", 1 },
	{ "minHeight", (intptr_t) M_arc_scene_ui_layout_Cell_minHeight_R_float, VTABLE_arc_scene_ui_layout_Cell_minHeight_R_float, "()F", 1 },
	{ "tooltip", (intptr_t) M_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;", 1 },
	{ "tooltip", (intptr_t) M_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Z)Larc/scene/ui/layout/Cell;", 1 },
	{ "tooltip", (intptr_t) M_arc_scene_ui_layout_Cell_tooltip_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_tooltip_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "tooltip", (intptr_t) M_arc_scene_ui_layout_Cell_tooltip_boolean_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_tooltip_boolean_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(ZLarc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "size", (intptr_t) M_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "size", (intptr_t) M_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell, "(FF)Larc/scene/ui/layout/Cell;", 1 },
	{ "name", (intptr_t) M_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;", 1 },
	{ "update", (intptr_t) M_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "disabled", (intptr_t) M_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell, "(Larc/func/Boolf;)Larc/scene/ui/layout/Cell;", 1 },
	{ "scrollX", (intptr_t) M_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell, "(Z)Larc/scene/ui/layout/Cell;", 1 },
	{ "scrollY", (intptr_t) M_arc_scene_ui_layout_Cell_scrollY_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_scrollY_boolean_R_arc_scene_ui_layout_Cell, "(Z)Larc/scene/ui/layout/Cell;", 1 },
	{ "disabled", (intptr_t) M_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell, "(Z)Larc/scene/ui/layout/Cell;", 1 },
	{ "touchable", (intptr_t) M_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell, "(Larc/scene/event/Touchable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "touchable", (intptr_t) M_arc_scene_ui_layout_Cell_touchable_arc_func_Prov_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_touchable_arc_func_Prov_R_arc_scene_ui_layout_Cell, "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;", 1 },
	{ "visible", (intptr_t) M_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell, "(Larc/func/Boolp;)Larc/scene/ui/layout/Cell;", 1 },
	{ "visible", (intptr_t) M_arc_scene_ui_layout_Cell_visible_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_visible_boolean_R_arc_scene_ui_layout_Cell, "(Z)Larc/scene/ui/layout/Cell;", 1 },
	{ "scaling", (intptr_t) M_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell, "(Larc/util/Scaling;)Larc/scene/ui/layout/Cell;", 1 },
	{ "valid", (intptr_t) M_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/TextField$TextFieldValidator;)Larc/scene/ui/layout/Cell;", 1 },
	{ "maxTextLength", (intptr_t) M_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell, "(I)Larc/scene/ui/layout/Cell;", 1 },
	{ "wrap", (intptr_t) M_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "wrap", (intptr_t) M_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell, "(Z)Larc/scene/ui/layout/Cell;", 1 },
	{ "ellipsis", (intptr_t) M_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell, "(Z)Larc/scene/ui/layout/Cell;", 1 },
	{ "labelAlign", (intptr_t) M_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell, "(II)Larc/scene/ui/layout/Cell;", 1 },
	{ "labelAlign", (intptr_t) M_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell, "(I)Larc/scene/ui/layout/Cell;", 1 },
	{ "group", (intptr_t) M_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/ButtonGroup;)Larc/scene/ui/layout/Cell;", 1 },
	{ "wrapLabel", (intptr_t) M_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell, "(Z)Larc/scene/ui/layout/Cell;", 1 },
	{ "checked", (intptr_t) M_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell, "(Z)Larc/scene/ui/layout/Cell;", 1 },
	{ "checked", (intptr_t) M_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell, "(Larc/func/Boolf;)Larc/scene/ui/layout/Cell;", 1 },
	{ "fontScale", (intptr_t) M_arc_scene_ui_layout_Cell_fontScale_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_fontScale_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "color", (intptr_t) M_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell, "(Larc/graphics/Color;)Larc/scene/ui/layout/Cell;", 1 },
	{ "margin", (intptr_t) M_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "marginTop", (intptr_t) M_arc_scene_ui_layout_Cell_marginTop_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_marginTop_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "marginBottom", (intptr_t) M_arc_scene_ui_layout_Cell_marginBottom_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_marginBottom_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "marginLeft", (intptr_t) M_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "marginRight", (intptr_t) M_arc_scene_ui_layout_Cell_marginRight_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_marginRight_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "width", (intptr_t) M_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "style", (intptr_t) M_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell, "(Larc/scene/style/Style;)Larc/scene/ui/layout/Cell;", 1 },
	{ "height", (intptr_t) M_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "minSize", (intptr_t) M_arc_scene_ui_layout_Cell_minSize_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_minSize_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "minSize", (intptr_t) M_arc_scene_ui_layout_Cell_minSize_float_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_minSize_float_float_R_arc_scene_ui_layout_Cell, "(FF)Larc/scene/ui/layout/Cell;", 1 },
	{ "minWidth", (intptr_t) M_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "minHeight", (intptr_t) M_arc_scene_ui_layout_Cell_minHeight_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_minHeight_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "maxSize", (intptr_t) M_arc_scene_ui_layout_Cell_maxSize_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_maxSize_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "maxSize", (intptr_t) M_arc_scene_ui_layout_Cell_maxSize_float_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_maxSize_float_float_R_arc_scene_ui_layout_Cell, "(FF)Larc/scene/ui/layout/Cell;", 1 },
	{ "maxWidth", (intptr_t) M_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "maxHeight", (intptr_t) M_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "pad", (intptr_t) M_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "pad", (intptr_t) M_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell, "(FFFF)Larc/scene/ui/layout/Cell;", 1 },
	{ "padTop", (intptr_t) M_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "padLeft", (intptr_t) M_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "padBottom", (intptr_t) M_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "padRight", (intptr_t) M_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell, "(F)Larc/scene/ui/layout/Cell;", 1 },
	{ "fill", (intptr_t) M_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "fillX", (intptr_t) M_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "fillY", (intptr_t) M_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "fill", (intptr_t) M_arc_scene_ui_layout_Cell_fill_float_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_fill_float_float_R_arc_scene_ui_layout_Cell, "(FF)Larc/scene/ui/layout/Cell;", 1 },
	{ "fill", (intptr_t) M_arc_scene_ui_layout_Cell_fill_boolean_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_fill_boolean_boolean_R_arc_scene_ui_layout_Cell, "(ZZ)Larc/scene/ui/layout/Cell;", 1 },
	{ "fill", (intptr_t) M_arc_scene_ui_layout_Cell_fill_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_fill_boolean_R_arc_scene_ui_layout_Cell, "(Z)Larc/scene/ui/layout/Cell;", 1 },
	{ "align", (intptr_t) M_arc_scene_ui_layout_Cell_align_int_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_align_int_R_arc_scene_ui_layout_Cell, "(I)Larc/scene/ui/layout/Cell;", 1 },
	{ "center", (intptr_t) M_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "top", (intptr_t) M_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "left", (intptr_t) M_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "bottom", (intptr_t) M_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "right", (intptr_t) M_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "grow", (intptr_t) M_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "growX", (intptr_t) M_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "growY", (intptr_t) M_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "expand", (intptr_t) M_arc_scene_ui_layout_Cell_expand_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_expand_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "expandX", (intptr_t) M_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "expandY", (intptr_t) M_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "expand", (intptr_t) M_arc_scene_ui_layout_Cell_expand_int_int_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_expand_int_int_R_arc_scene_ui_layout_Cell, "(II)Larc/scene/ui/layout/Cell;", 1 },
	{ "expand", (intptr_t) M_arc_scene_ui_layout_Cell_expand_boolean_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_expand_boolean_boolean_R_arc_scene_ui_layout_Cell, "(ZZ)Larc/scene/ui/layout/Cell;", 1 },
	{ "colspan", (intptr_t) M_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell, "(I)Larc/scene/ui/layout/Cell;", 1 },
	{ "uniform", (intptr_t) M_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "uniformX", (intptr_t) M_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "uniformY", (intptr_t) M_arc_scene_ui_layout_Cell_uniformY_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_uniformY_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "uniform", (intptr_t) M_arc_scene_ui_layout_Cell_uniform_boolean_boolean_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_uniform_boolean_boolean_R_arc_scene_ui_layout_Cell, "(ZZ)Larc/scene/ui/layout/Cell;", 1 },
	{ "setBounds", (intptr_t) M_arc_scene_ui_layout_Cell_setBounds_float_float_float_float, VTABLE_arc_scene_ui_layout_Cell_setBounds_float_float_float_float, "(FFFF)V", 1 },
	{ "isEndRow", (intptr_t) M_arc_scene_ui_layout_Cell_isEndRow_R_boolean, VTABLE_arc_scene_ui_layout_Cell_isEndRow_R_boolean, "()Z", 1 },
	{ "row", (intptr_t) M_arc_scene_ui_layout_Cell_row, VTABLE_arc_scene_ui_layout_Cell_row, "()V", 1 },
	{ "getTable", (intptr_t) M_arc_scene_ui_layout_Cell_getTable_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Cell_getTable_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 1 },
	{ "clear", (intptr_t) M_arc_scene_ui_layout_Cell_clear, VTABLE_arc_scene_ui_layout_Cell_clear, "()V", 0 },
	{ "scl", (intptr_t) M_arc_scene_ui_layout_Cell_scl_float_R_float, VTABLE_arc_scene_ui_layout_Cell_scl_float_R_float, "(F)F", 0 },
	{ "reset", (intptr_t) M_arc_scene_ui_layout_Cell_reset, VTABLE_arc_scene_ui_layout_Cell_reset, "()V", 1 },
	{ "set", (intptr_t) M_arc_scene_ui_layout_Cell_set_arc_scene_ui_layout_Cell_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Cell_set_arc_scene_ui_layout_Cell_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Cell;)Larc/scene/ui/layout/Cell;", 1 },
	{ "toString", (intptr_t) M_arc_scene_ui_layout_Cell_toString_R_java_lang_String, VTABLE_arc_scene_ui_layout_Cell_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$checked$0", (intptr_t) SM_arc_scene_ui_layout_Cell_lambda$checked$0_arc_scene_Element_arc_func_Boolf, 0, "(Larc/scene/Element;Larc/func/Boolf;)V", 4106 },
	{ "lambda$disabled$1", (intptr_t) M_arc_scene_ui_layout_Cell_lambda$disabled$1_arc_func_Boolf_arc_scene_Element, VTABLE_arc_scene_ui_layout_Cell_lambda$disabled$1_arc_func_Boolf_arc_scene_Element, "(Larc/func/Boolf;Larc/scene/Element;)V", 4098 },
	{ "lambda$disabled$0", (intptr_t) SM_arc_scene_ui_layout_Cell_lambda$disabled$0_arc_func_Boolf_arc_scene_Element_R_boolean, 0, "(Larc/func/Boolf;Larc/scene/Element;)Z", 4106 },
	{ "lambda$update$0", (intptr_t) SM_arc_scene_ui_layout_Cell_lambda$update$0_arc_func_Cons_arc_scene_Element, 0, "(Larc/func/Cons;Larc/scene/Element;)V", 4106 },
};

Class class_arc_scene_ui_layout_Cell{
		.nativeName = (intptr_t) "arc/scene/ui/layout/Cell",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_ui_layout_Cell),
		.classVtable = (intptr_t) vtable_arc_scene_ui_layout_Cell,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_layout_Cell,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_layout_Cell,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 33,
		.nativeFields = (intptr_t) fields,
		.methodCount = 105,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 110,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_layout_Cell = registerClass(&class_arc_scene_ui_layout_Cell);

}
