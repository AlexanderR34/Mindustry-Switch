#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "mindustry/ui/builder/UiBuilder_Entry.h"
#include "mindustry/ui/builder/UiBuilder_PaneBuilder.h"
#include "java/lang/Boolean.h"
#include "mindustry/ui/builder/UiBuilder_ImageButtonBuilder.h"
#include "java/lang/Float.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/builder/UiBuilder_SpaceBuilder.h"
#include "mindustry/ui/builder/UiBuilder_FieldBuilder.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/builder/UiBuilder_TableBuilder.h"
#include "mindustry/ui/builder/UiBuilder_CheckBuilder.h"
#include "mindustry/ui/builder/UiKey.h"
#include "mindustry/ui/builder/UiBuilder_DefaultsBuilder.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/builder/UiBuilder_LabelBuilder.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/ui/builder/UiBuilder_ButtonBuilder.h"
#include "java/lang/Enum.h"
#include "mindustry/ui/builder/UiDslWriter.h"
#include "mindustry/ui/builder/UiBuilder_ImageBuilder.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/ui/builder/UiBuilder_ButtonTableBuilder.h"
#include "arc/util/ArcRuntimeException.h"
#include "mindustry/ui/builder/UiBuilder_StackBuilder.h"
#include "mindustry/ui/builder/UiBuilder.h"
#include "mindustry/ui/builder/UiBuilder_1.h"
#include "arc/util/io/Writes.h"
#include "mindustry/ui/builder/UiBuilder_SliderBuilder.h"

extern "C" {


void mark_mindustry_ui_builder_UiBuilder$NodeBuilder(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_builder_UiBuilder$NodeBuilder *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_entries)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries)->clazz)->markFunction)((jobject) self->F_entries, mark, depth + 1);
}

void clinit_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiKey(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK(sp[0].o))->F_entries = (jref) sp[1].o;
	LINE_NUMBER(33);
	((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:prop", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:prop", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (frame[2].f));
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:prop", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[2].i));
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_id_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:id", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_id;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_condition_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:condition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_condition;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_grow_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:grow", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_grow;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_growX_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:growX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_growX;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_growY_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:growY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_growY;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_fill_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:fill", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_fill;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_fillX_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:fillX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_fillX;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_fillY_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:fillY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_fillY;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_expand_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:expand", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_expand;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_expandX_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:expandX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_expandX;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_expandY_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:expandY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_expandY;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_width_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:width", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_width;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_height_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:height", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_height;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_size_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:size", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_size;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_minWidth_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:minWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_minWidth;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_maxWidth_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:maxWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_maxWidth;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_minHeight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:minHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_minHeight;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_maxHeight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:maxHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_maxHeight;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_pad_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:pad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_pad;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_padTop_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:padTop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padTop;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_padLeft_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:padLeft", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padLeft;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_padBottom_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:padBottom", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padBottom;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_padRight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:padRight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padRight;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_align_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:align", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_align;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_colspan_int_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:colspan", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_colspan;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jfloat((frame[1].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniform_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:uniform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_uniform;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniformX_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:uniformX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_uniformX;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniformY_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:uniformY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_uniformY;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_color_arc_graphics_Color_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:color", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_color;
	sp[2].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_color_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:color", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_color;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_builder_UiBuilder$NodeBuilder_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(78);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_entries;
	SM_mindustry_ui_builder_UiBuilder$NodeBuilder_writeEntries_arc_util_io_Writes_arc_struct_Seq(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiBuilder$NodeBuilder_writeEntries_arc_util_io_Writes_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:writeEntries", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(82);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	SM_mindustry_ui_builder_UiBuilder$NodeBuilder_writeEntry_arc_util_io_Writes_mindustry_ui_builder_UiBuilder$Entry(ctx, (frame[0].o), (frame[3].o));
	goto label_2;
	}
label_3:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder$NodeBuilder_read_arc_util_io_Reads_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(87);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiKey_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(88);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiBuilder$NodeBuilder_create_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[2].o)))->F_entries;
	SM_mindustry_ui_builder_UiBuilder$NodeBuilder_readEntries_arc_util_io_Reads_arc_struct_Seq(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiBuilder$NodeBuilder_readEntries_arc_util_io_Reads_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:readEntries", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(95);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_ui_builder_UiBuilder$NodeBuilder_readEntry_arc_util_io_Reads_R_mindustry_ui_builder_UiBuilder$Entry(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder$NodeBuilder_create_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:create", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(99);
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		case 8: goto label_8;
		case 9: goto label_9;
		case 10: goto label_10;
		case 11: goto label_11;
		case 12: goto label_12;
		case 13: goto label_13;
		default: goto label_14;
	}
	}
label_1:;
	{
	LINE_NUMBER(100);
	clinit_mindustry_ui_builder_UiBuilder$TableBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$TableBuilder);
	init_mindustry_ui_builder_UiBuilder$TableBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_2:;
	{
	LINE_NUMBER(101);
	clinit_mindustry_ui_builder_UiBuilder$PaneBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$PaneBuilder);
	init_mindustry_ui_builder_UiBuilder$PaneBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_3:;
	{
	LINE_NUMBER(102);
	clinit_mindustry_ui_builder_UiBuilder$StackBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$StackBuilder);
	init_mindustry_ui_builder_UiBuilder$StackBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_4:;
	{
	LINE_NUMBER(103);
	clinit_mindustry_ui_builder_UiBuilder$LabelBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$LabelBuilder);
	init_mindustry_ui_builder_UiBuilder$LabelBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_5:;
	{
	LINE_NUMBER(104);
	clinit_mindustry_ui_builder_UiBuilder$ImageBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$ImageBuilder);
	init_mindustry_ui_builder_UiBuilder$ImageBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_6:;
	{
	LINE_NUMBER(105);
	clinit_mindustry_ui_builder_UiBuilder$ButtonBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$ButtonBuilder);
	init_mindustry_ui_builder_UiBuilder$ButtonBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_7:;
	{
	LINE_NUMBER(106);
	clinit_mindustry_ui_builder_UiBuilder$ImageButtonBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$ImageButtonBuilder);
	init_mindustry_ui_builder_UiBuilder$ImageButtonBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(107);
	clinit_mindustry_ui_builder_UiBuilder$FieldBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$FieldBuilder);
	init_mindustry_ui_builder_UiBuilder$FieldBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(108);
	clinit_mindustry_ui_builder_UiBuilder$CheckBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$CheckBuilder);
	init_mindustry_ui_builder_UiBuilder$CheckBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(109);
	clinit_mindustry_ui_builder_UiBuilder$SliderBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$SliderBuilder);
	init_mindustry_ui_builder_UiBuilder$SliderBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(110);
	clinit_mindustry_ui_builder_UiBuilder$SpaceBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$SpaceBuilder);
	init_mindustry_ui_builder_UiBuilder$SpaceBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(111);
	clinit_mindustry_ui_builder_UiBuilder$DefaultsBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$DefaultsBuilder);
	init_mindustry_ui_builder_UiBuilder$DefaultsBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(112);
	clinit_mindustry_ui_builder_UiBuilder$ButtonTableBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$ButtonTableBuilder);
	init_mindustry_ui_builder_UiBuilder$ButtonTableBuilder(ctx, sp[0].o);
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(113);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown node type \u0001"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiBuilder$NodeBuilder_writeEntry_arc_util_io_Writes_mindustry_ui_builder_UiBuilder$Entry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:writeEntry", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[1].o)))->F_value;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_java_lang_String)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_lang_String, (frame[6].o)));
	LINE_NUMBER(120);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(121);
	((func_arc_util_io_Writes_str_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_str_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[1].o)))->F_value;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_java_lang_Float)) == 0) goto label_6;
	}
	{
	frame[4].o = (checkCast(ctx, &class_java_lang_Float, (frame[6].o)));
	LINE_NUMBER(123);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (frame[4].o));
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, temp0);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[1].o)))->F_value;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_java_lang_Boolean)) == 0) goto label_9;
	}
	{
	frame[5].o = (checkCast(ctx, &class_java_lang_Boolean, (frame[6].o)));
	LINE_NUMBER(126);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[5].o));
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, sp[0].o, temp0);
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[1].o)))->F_value;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_ui_builder_UiBuilder$NodeBuilder)) == 0) goto label_12;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$NodeBuilder, (frame[6].o)));
	LINE_NUMBER(129);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(130);
	((func_mindustry_ui_builder_UiBuilder$NodeBuilder_write_arc_util_io_Writes) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_write_arc_util_io_Writes])(ctx, (frame[2].o), (frame[0].o));
	goto label_5;
	}
label_12:;
	{
	LINE_NUMBER(132);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[1].o)))->F_value;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unsupported entry value type: \u0001"_j.string, 1, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder$NodeBuilder_readEntry_arc_util_io_Reads_R_mindustry_ui_builder_UiBuilder$Entry(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:readEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(137);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiKey_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[0].o));
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(138);
	jint temp1 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(139);
	switch((frame[2].i)) {
		case 0: goto label_3;
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		default: goto label_7;
	}
	}
label_3:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_arc_util_io_Reads_str_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_str_R_java_lang_String])(ctx, (frame[0].o));
	sp += 1;
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(141);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp += 1;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	sp += 1;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiBuilder$NodeBuilder_read_arc_util_io_Reads_R_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, (frame[0].o));
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(144);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown entry value tag \u0001"_j.string, 1, boxInteger(ctx, (frame[2].i)));
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(145);
	frame[3].o = sp[0].o;
	LINE_NUMBER(146);
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:str", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	if (sp[0].o != (frame[1].o)) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_String)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_java_lang_String, (frame[5].o)));
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_4:;
	goto label_1;
label_2:;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:str", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(156);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	INST_ALOAD(3);
	goto label_3;
label_2:;
	INST_ALOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:num", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	if (sp[0].o != (frame[1].o)) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_Float)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_java_lang_Float, (frame[5].o)));
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_4:;
	goto label_1;
label_2:;
	{
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:num", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(166);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (frame[3].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FLOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:bool", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(170);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:bool", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	if (sp[0].o != (frame[1].o)) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_java_lang_Boolean)) == 0) goto label_4;
	}
	{
	frame[5].o = (checkCast(ctx, &class_java_lang_Boolean, (frame[6].o)));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[5].o));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	goto label_1;
label_2:;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$NodeBuilder_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$NodeBuilder:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiDslWriter_write_mindustry_ui_builder_UiBuilder$NodeBuilder_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiBuilder$NodeBuilder[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_id_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_condition_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_grow_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_growX_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_growY_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_fill_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_fillX_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_fillY_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_expand_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_expandX_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_expandY_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_width_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_height_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_size_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_minWidth_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_maxWidth_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_minHeight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_maxHeight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_pad_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padTop_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padLeft_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padBottom_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padRight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_align_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_colspan_int_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniform_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniformX_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniformY_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_color_arc_graphics_Color_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_color_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_write_arc_util_io_Writes,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_boolean_R_boolean,
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
	{ "self", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "prop", "(Lmindustry/ui/builder/UiKey;Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "prop", "(Lmindustry/ui/builder/UiKey;F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "prop", "(Lmindustry/ui/builder/UiKey;Z)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "id", "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "condition", "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "grow", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "growX", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "growY", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "fill", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "fillX", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "fillY", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "expand", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "expandX", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "expandY", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "width", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "height", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "size", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "minWidth", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "maxWidth", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "minHeight", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "maxHeight", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "pad", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "padTop", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "padLeft", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "padBottom", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "padRight", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "align", "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "colspan", "(I)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "uniform", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "uniformX", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "uniformY", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "color", "(Larc/graphics/Color;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "color", "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "str", "(Lmindustry/ui/builder/UiKey;)Ljava/lang/String;" },
	{ "str", "(Lmindustry/ui/builder/UiKey;Ljava/lang/String;)Ljava/lang/String;" },
	{ "num", "(Lmindustry/ui/builder/UiKey;)Ljava/lang/Float;" },
	{ "num", "(Lmindustry/ui/builder/UiKey;F)F" },
	{ "bool", "(Lmindustry/ui/builder/UiKey;)Z" },
	{ "bool", "(Lmindustry/ui/builder/UiKey;Z)Z" },
};

static FieldMetadata fields[] {
	{ "type", &class_mindustry_ui_builder_UiKey, offsetof(mindustry_ui_builder_UiBuilder$NodeBuilder, F_type), "Lmindustry/ui/builder/UiKey;", 16 },
	{ "entries", &class_arc_struct_Seq, offsetof(mindustry_ui_builder_UiBuilder$NodeBuilder, F_entries), "Larc/struct/Seq;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiKey, 0, "(Lmindustry/ui/builder/UiKey;)V", 0 },
	{ "self", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 2 },
	{ "prop", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(Lmindustry/ui/builder/UiKey;Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 4 },
	{ "prop", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(Lmindustry/ui/builder/UiKey;F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 4 },
	{ "prop", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(Lmindustry/ui/builder/UiKey;Z)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 4 },
	{ "id", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_id_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_id_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "condition", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_condition_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_condition_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "grow", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_grow_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_grow_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "growX", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_growX_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_growX_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "growY", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_growY_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_growY_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "fill", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_fill_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_fill_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "fillX", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_fillX_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_fillX_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "fillY", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_fillY_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_fillY_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "expand", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_expand_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_expand_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "expandX", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_expandX_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_expandX_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "expandY", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_expandY_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_expandY_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "width", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_width_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_width_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "height", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_height_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_height_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "size", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_size_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_size_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "minWidth", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_minWidth_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_minWidth_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "maxWidth", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_maxWidth_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_maxWidth_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "minHeight", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_minHeight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_minHeight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "maxHeight", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_maxHeight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_maxHeight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "pad", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_pad_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_pad_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "padTop", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padTop_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_padTop_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "padLeft", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padLeft_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_padLeft_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "padBottom", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padBottom_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_padBottom_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "padRight", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padRight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_padRight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "align", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_align_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_align_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "colspan", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_colspan_int_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_colspan_int_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(I)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "uniform", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniform_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_uniform_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "uniformX", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniformX_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_uniformX_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "uniformY", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniformY_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_uniformY_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "color", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_color_arc_graphics_Color_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_color_arc_graphics_Color_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(Larc/graphics/Color;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "color", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_color_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_color_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
	{ "write", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_write_arc_util_io_Writes, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "writeEntries", (intptr_t) SM_mindustry_ui_builder_UiBuilder$NodeBuilder_writeEntries_arc_util_io_Writes_arc_struct_Seq, 0, "(Larc/util/io/Writes;Larc/struct/Seq;)V", 8 },
	{ "read", (intptr_t) SM_mindustry_ui_builder_UiBuilder$NodeBuilder_read_arc_util_io_Reads_R_mindustry_ui_builder_UiBuilder$NodeBuilder, 0, "(Larc/util/io/Reads;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 9 },
	{ "readEntries", (intptr_t) SM_mindustry_ui_builder_UiBuilder$NodeBuilder_readEntries_arc_util_io_Reads_arc_struct_Seq, 0, "(Larc/util/io/Reads;Larc/struct/Seq;)V", 8 },
	{ "create", (intptr_t) SM_mindustry_ui_builder_UiBuilder$NodeBuilder_create_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiBuilder$NodeBuilder, 0, "(Lmindustry/ui/builder/UiKey;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 8 },
	{ "writeEntry", (intptr_t) SM_mindustry_ui_builder_UiBuilder$NodeBuilder_writeEntry_arc_util_io_Writes_mindustry_ui_builder_UiBuilder$Entry, 0, "(Larc/util/io/Writes;Lmindustry/ui/builder/UiBuilder$Entry;)V", 8 },
	{ "readEntry", (intptr_t) SM_mindustry_ui_builder_UiBuilder$NodeBuilder_readEntry_arc_util_io_Reads_R_mindustry_ui_builder_UiBuilder$Entry, 0, "(Larc/util/io/Reads;)Lmindustry/ui/builder/UiBuilder$Entry;", 8 },
	{ "str", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String, "(Lmindustry/ui/builder/UiKey;)Ljava/lang/String;", 0 },
	{ "str", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String, "(Lmindustry/ui/builder/UiKey;Ljava/lang/String;)Ljava/lang/String;", 0 },
	{ "num", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float, "(Lmindustry/ui/builder/UiKey;)Ljava/lang/Float;", 0 },
	{ "num", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float, "(Lmindustry/ui/builder/UiKey;F)F", 0 },
	{ "bool", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean, "(Lmindustry/ui/builder/UiKey;)Z", 0 },
	{ "bool", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_boolean_R_boolean, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_boolean_R_boolean, "(Lmindustry/ui/builder/UiKey;Z)Z", 0 },
	{ "toString", (intptr_t) M_mindustry_ui_builder_UiBuilder$NodeBuilder_toString_R_java_lang_String, VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_ui_builder_UiBuilder$NodeBuilder{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiBuilder$NodeBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiBuilder$NodeBuilder),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiBuilder$NodeBuilder,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiBuilder$NodeBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiBuilder$NodeBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_builder_UiBuilder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 49,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiBuilder$NodeBuilder = registerClass(&class_mindustry_ui_builder_UiBuilder$NodeBuilder);

}

