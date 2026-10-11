#include "mindustry/ui/builder/UiBuilder.h"
#include "mindustry/ui/builder/UiBuilder_PaneBuilder.h"
#include "mindustry/ui/builder/UiBuilder_Entry.h"
#include "mindustry/ui/builder/UiBuilder_LabelBuilder.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "mindustry/ui/builder/UiBuilder_ImageButtonBuilder.h"
#include "mindustry/ui/builder/UiBuilder_ButtonBuilder.h"
#include "mindustry/ui/builder/UiBuilder_ImageBuilder.h"
#include "mindustry/ui/builder/UiBuilder_SpaceBuilder.h"
#include "mindustry/ui/builder/UiBuilder_FieldBuilder.h"
#include "java/lang/Object.h"
#include "mindustry/ui/builder/UiBuilder_ButtonTableBuilder.h"
#include "java/lang/String.h"
#include "mindustry/ui/builder/UiBuilder_StackBuilder.h"
#include "mindustry/ui/builder/UiBuilder_ContainerBuilder.h"
#include "mindustry/ui/builder/UiBuilder_TableBuilder.h"
#include "mindustry/ui/builder/UiBuilder_CheckBuilder.h"
#include "mindustry/ui/builder/UiDslParser.h"
#include "mindustry/ui/builder/UiBuilder_DefaultsBuilder.h"
#include "mindustry/ui/builder/UiBuilder_SliderBuilder.h"

extern "C" {


void mark_mindustry_ui_builder_UiBuilder(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_builder_UiBuilder *) object;
}

void clinit_mindustry_ui_builder_UiBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_builder_UiBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_parse_java_lang_String_R_mindustry_ui_builder_UiBuilder$TableBuilder(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:parse", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiDslParser_parse_java_lang_String_R_mindustry_ui_builder_UiBuilder$TableBuilder(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_table_R_mindustry_ui_builder_UiBuilder$TableBuilder(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:table", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	{
	LINE_NUMBER(12);
	clinit_mindustry_ui_builder_UiBuilder$TableBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$TableBuilder);
	init_mindustry_ui_builder_UiBuilder$TableBuilder(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_stack_R_mindustry_ui_builder_UiBuilder$StackBuilder(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:stack", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	{
	LINE_NUMBER(13);
	clinit_mindustry_ui_builder_UiBuilder$StackBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$StackBuilder);
	init_mindustry_ui_builder_UiBuilder$StackBuilder(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_pane_R_mindustry_ui_builder_UiBuilder$PaneBuilder(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:pane", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	{
	LINE_NUMBER(14);
	clinit_mindustry_ui_builder_UiBuilder$PaneBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$PaneBuilder);
	init_mindustry_ui_builder_UiBuilder$PaneBuilder(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_label_java_lang_String_R_mindustry_ui_builder_UiBuilder$LabelBuilder(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:label", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(15);
	clinit_mindustry_ui_builder_UiBuilder$LabelBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$LabelBuilder);
	init_mindustry_ui_builder_UiBuilder$LabelBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$LabelBuilder_text_java_lang_String_R_mindustry_ui_builder_UiBuilder$LabelBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$LabelBuilder_text_java_lang_String_R_mindustry_ui_builder_UiBuilder$LabelBuilder])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_image_R_mindustry_ui_builder_UiBuilder$ImageBuilder(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:image", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	{
	LINE_NUMBER(16);
	clinit_mindustry_ui_builder_UiBuilder$ImageBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$ImageBuilder);
	init_mindustry_ui_builder_UiBuilder$ImageBuilder(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_image_java_lang_String_R_mindustry_ui_builder_UiBuilder$ImageBuilder(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:image", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(17);
	clinit_mindustry_ui_builder_UiBuilder$ImageBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$ImageBuilder);
	init_mindustry_ui_builder_UiBuilder$ImageBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$ImageBuilder_region_java_lang_String_R_mindustry_ui_builder_UiBuilder$ImageBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$ImageBuilder_region_java_lang_String_R_mindustry_ui_builder_UiBuilder$ImageBuilder])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_button_java_lang_String_R_mindustry_ui_builder_UiBuilder$ButtonBuilder(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:button", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(18);
	clinit_mindustry_ui_builder_UiBuilder$ButtonBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$ButtonBuilder);
	init_mindustry_ui_builder_UiBuilder$ButtonBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$ButtonBuilder_text_java_lang_String_R_mindustry_ui_builder_UiBuilder$ButtonBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$ButtonBuilder_text_java_lang_String_R_mindustry_ui_builder_UiBuilder$ButtonBuilder])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_imageButton_java_lang_String_R_mindustry_ui_builder_UiBuilder$ImageButtonBuilder(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:imageButton", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	clinit_mindustry_ui_builder_UiBuilder$ImageButtonBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$ImageButtonBuilder);
	init_mindustry_ui_builder_UiBuilder$ImageButtonBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$ImageButtonBuilder_icon_java_lang_String_R_mindustry_ui_builder_UiBuilder$ImageButtonBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$ImageButtonBuilder_icon_java_lang_String_R_mindustry_ui_builder_UiBuilder$ImageButtonBuilder])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_field_java_lang_String_R_mindustry_ui_builder_UiBuilder$FieldBuilder(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:field", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(20);
	clinit_mindustry_ui_builder_UiBuilder$FieldBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$FieldBuilder);
	init_mindustry_ui_builder_UiBuilder$FieldBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$FieldBuilder_text_java_lang_String_R_mindustry_ui_builder_UiBuilder$FieldBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$FieldBuilder_text_java_lang_String_R_mindustry_ui_builder_UiBuilder$FieldBuilder])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_check_R_mindustry_ui_builder_UiBuilder$CheckBuilder(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:check", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	{
	LINE_NUMBER(21);
	clinit_mindustry_ui_builder_UiBuilder$CheckBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$CheckBuilder);
	init_mindustry_ui_builder_UiBuilder$CheckBuilder(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_check_java_lang_String_R_mindustry_ui_builder_UiBuilder$CheckBuilder(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:check", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	clinit_mindustry_ui_builder_UiBuilder$CheckBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$CheckBuilder);
	init_mindustry_ui_builder_UiBuilder$CheckBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$CheckBuilder_text_java_lang_String_R_mindustry_ui_builder_UiBuilder$CheckBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$CheckBuilder_text_java_lang_String_R_mindustry_ui_builder_UiBuilder$CheckBuilder])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_slider_float_float_float_R_mindustry_ui_builder_UiBuilder$SliderBuilder(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:slider", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(23);
	clinit_mindustry_ui_builder_UiBuilder$SliderBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$SliderBuilder);
	init_mindustry_ui_builder_UiBuilder$SliderBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$SliderBuilder_min_float_R_mindustry_ui_builder_UiBuilder$SliderBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$SliderBuilder_min_float_R_mindustry_ui_builder_UiBuilder$SliderBuilder])(ctx, sp[0].o, (frame[0].f));
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$SliderBuilder_max_float_R_mindustry_ui_builder_UiBuilder$SliderBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$SliderBuilder_max_float_R_mindustry_ui_builder_UiBuilder$SliderBuilder])(ctx, sp[0].o, (frame[1].f));
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$SliderBuilder_step_float_R_mindustry_ui_builder_UiBuilder$SliderBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$SliderBuilder_step_float_R_mindustry_ui_builder_UiBuilder$SliderBuilder])(ctx, sp[0].o, (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_space_R_mindustry_ui_builder_UiBuilder$SpaceBuilder(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:space", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	{
	LINE_NUMBER(24);
	clinit_mindustry_ui_builder_UiBuilder$SpaceBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$SpaceBuilder);
	init_mindustry_ui_builder_UiBuilder$SpaceBuilder(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_defaults_R_mindustry_ui_builder_UiBuilder$DefaultsBuilder(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:defaults", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	{
	LINE_NUMBER(25);
	clinit_mindustry_ui_builder_UiBuilder$DefaultsBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$DefaultsBuilder);
	init_mindustry_ui_builder_UiBuilder$DefaultsBuilder(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiBuilder_buttonTable_R_mindustry_ui_builder_UiBuilder$ButtonTableBuilder(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder:buttonTable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder(ctx);
	{
	LINE_NUMBER(26);
	clinit_mindustry_ui_builder_UiBuilder$ButtonTableBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$ButtonTableBuilder);
	init_mindustry_ui_builder_UiBuilder$ButtonTableBuilder(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiBuilder[] {
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
};

static jclass innerClasses[] {
	&class_mindustry_ui_builder_UiBuilder$TableBuilder,
	&class_mindustry_ui_builder_UiBuilder$StackBuilder,
	&class_mindustry_ui_builder_UiBuilder$PaneBuilder,
	&class_mindustry_ui_builder_UiBuilder$LabelBuilder,
	&class_mindustry_ui_builder_UiBuilder$ImageBuilder,
	&class_mindustry_ui_builder_UiBuilder$ButtonBuilder,
	&class_mindustry_ui_builder_UiBuilder$ImageButtonBuilder,
	&class_mindustry_ui_builder_UiBuilder$FieldBuilder,
	&class_mindustry_ui_builder_UiBuilder$CheckBuilder,
	&class_mindustry_ui_builder_UiBuilder$SliderBuilder,
	&class_mindustry_ui_builder_UiBuilder$SpaceBuilder,
	&class_mindustry_ui_builder_UiBuilder$DefaultsBuilder,
	&class_mindustry_ui_builder_UiBuilder$ButtonTableBuilder,
	&class_mindustry_ui_builder_UiBuilder$ContainerBuilder,
	&class_mindustry_ui_builder_UiBuilder$Entry,
	&class_mindustry_ui_builder_UiBuilder$NodeBuilder,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiBuilder, 0, "()V", 1 },
	{ "parse", (intptr_t) SM_mindustry_ui_builder_UiBuilder_parse_java_lang_String_R_mindustry_ui_builder_UiBuilder$TableBuilder, 0, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$TableBuilder;", 9 },
	{ "table", (intptr_t) SM_mindustry_ui_builder_UiBuilder_table_R_mindustry_ui_builder_UiBuilder$TableBuilder, 0, "()Lmindustry/ui/builder/UiBuilder$TableBuilder;", 9 },
	{ "stack", (intptr_t) SM_mindustry_ui_builder_UiBuilder_stack_R_mindustry_ui_builder_UiBuilder$StackBuilder, 0, "()Lmindustry/ui/builder/UiBuilder$StackBuilder;", 9 },
	{ "pane", (intptr_t) SM_mindustry_ui_builder_UiBuilder_pane_R_mindustry_ui_builder_UiBuilder$PaneBuilder, 0, "()Lmindustry/ui/builder/UiBuilder$PaneBuilder;", 9 },
	{ "label", (intptr_t) SM_mindustry_ui_builder_UiBuilder_label_java_lang_String_R_mindustry_ui_builder_UiBuilder$LabelBuilder, 0, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$LabelBuilder;", 9 },
	{ "image", (intptr_t) SM_mindustry_ui_builder_UiBuilder_image_R_mindustry_ui_builder_UiBuilder$ImageBuilder, 0, "()Lmindustry/ui/builder/UiBuilder$ImageBuilder;", 9 },
	{ "image", (intptr_t) SM_mindustry_ui_builder_UiBuilder_image_java_lang_String_R_mindustry_ui_builder_UiBuilder$ImageBuilder, 0, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$ImageBuilder;", 9 },
	{ "button", (intptr_t) SM_mindustry_ui_builder_UiBuilder_button_java_lang_String_R_mindustry_ui_builder_UiBuilder$ButtonBuilder, 0, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$ButtonBuilder;", 9 },
	{ "imageButton", (intptr_t) SM_mindustry_ui_builder_UiBuilder_imageButton_java_lang_String_R_mindustry_ui_builder_UiBuilder$ImageButtonBuilder, 0, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$ImageButtonBuilder;", 9 },
	{ "field", (intptr_t) SM_mindustry_ui_builder_UiBuilder_field_java_lang_String_R_mindustry_ui_builder_UiBuilder$FieldBuilder, 0, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$FieldBuilder;", 9 },
	{ "check", (intptr_t) SM_mindustry_ui_builder_UiBuilder_check_R_mindustry_ui_builder_UiBuilder$CheckBuilder, 0, "()Lmindustry/ui/builder/UiBuilder$CheckBuilder;", 9 },
	{ "check", (intptr_t) SM_mindustry_ui_builder_UiBuilder_check_java_lang_String_R_mindustry_ui_builder_UiBuilder$CheckBuilder, 0, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$CheckBuilder;", 9 },
	{ "slider", (intptr_t) SM_mindustry_ui_builder_UiBuilder_slider_float_float_float_R_mindustry_ui_builder_UiBuilder$SliderBuilder, 0, "(FFF)Lmindustry/ui/builder/UiBuilder$SliderBuilder;", 9 },
	{ "space", (intptr_t) SM_mindustry_ui_builder_UiBuilder_space_R_mindustry_ui_builder_UiBuilder$SpaceBuilder, 0, "()Lmindustry/ui/builder/UiBuilder$SpaceBuilder;", 9 },
	{ "defaults", (intptr_t) SM_mindustry_ui_builder_UiBuilder_defaults_R_mindustry_ui_builder_UiBuilder$DefaultsBuilder, 0, "()Lmindustry/ui/builder/UiBuilder$DefaultsBuilder;", 9 },
	{ "buttonTable", (intptr_t) SM_mindustry_ui_builder_UiBuilder_buttonTable_R_mindustry_ui_builder_UiBuilder$ButtonTableBuilder, 0, "()Lmindustry/ui/builder/UiBuilder$ButtonTableBuilder;", 9 },
};

Class class_mindustry_ui_builder_UiBuilder{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiBuilder),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiBuilder,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 16,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiBuilder = registerClass(&class_mindustry_ui_builder_UiBuilder);

}
