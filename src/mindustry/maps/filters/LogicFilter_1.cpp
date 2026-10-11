#include "mindustry/maps/filters/LogicFilter_1.h"
#include "mindustry/maps/filters/LogicFilter_1_invoke_arc_func_Cons_3.h"
#include "mindustry/maps/filters/LogicFilter_1_invoke_java_lang_Runnable_1.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/maps/filters/LogicFilter.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/core/UI.h"
#include "java/lang/Runnable.h"
#include "java/lang/CharSequence.h"
#include "mindustry/maps/filters/LogicFilter_1.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/logic/LogicDialog.h"
#include "mindustry/Vars.h"
#include "mindustry/maps/filters/LogicFilter_1_invoke_arc_func_Cons_2.h"

extern "C" {


void mark_mindustry_maps_filters_LogicFilter$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_maps_filters_FilterOption(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_filters_LogicFilter$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_maps_filters_LogicFilter$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_FilterOption(ctx);
}

void init_mindustry_maps_filters_LogicFilter$1_mindustry_maps_filters_LogicFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_LogicFilter$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	((mindustry_maps_filters_LogicFilter$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_maps_filters_FilterOption(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_LogicFilter$1_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter$1:build", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_LogicFilter$1_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_maps_filters_LogicFilter$1_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_maps_filters_LogicFilter$1_invoke_arc_func_Cons_2);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_LogicFilter$1_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_maps_filters_LogicFilter$1_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_LogicFilter$1_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@filter.option.code"_j))));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_LogicFilter$1_lambda$build$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter$1:lambda$build$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_logic;
	sp[1].o = (jobject)((mindustry_maps_filters_LogicFilter$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_maps_filters_LogicFilter *) NULL_CHECK(sp[1].o))->F_code;
	sp[2].o = jobject(nullptr);
	jint temp0 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_LogicFilter$1_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_maps_filters_LogicFilter$1_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_maps_filters_LogicFilter$1_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_logic_LogicDialog_show_java_lang_String_mindustry_logic_LExecutor_boolean_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LogicDialog_show_java_lang_String_mindustry_logic_LExecutor_boolean_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_LogicFilter$1_lambda$build$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter$1:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_maps_filters_LogicFilter$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_maps_filters_LogicFilter *) NULL_CHECK(sp[0].o))->F_code = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_filters_LogicFilter$1_lambda$build$0_arc_scene_ui_Button(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter$1:lambda$build$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_LogicFilter$1(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencil;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_LogicFilter$1[] {
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
	(void *) M_mindustry_maps_filters_LogicFilter$1_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_maps_filters_LogicFilter$1_lambda$build$1,
	(void *) M_mindustry_maps_filters_LogicFilter$1_lambda$build$2_java_lang_String,
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
	{ "build", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$1", "()V" },
	{ "lambda$build$2", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_maps_filters_LogicFilter, offsetof(mindustry_maps_filters_LogicFilter$1, F_this$0), "Lmindustry/maps/filters/LogicFilter;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_LogicFilter$1_mindustry_maps_filters_LogicFilter, 0, "(Lmindustry/maps/filters/LogicFilter;)V", 0 },
	{ "build", (intptr_t) M_mindustry_maps_filters_LogicFilter$1_build_arc_scene_ui_layout_Table, VTABLE_mindustry_maps_filters_LogicFilter$1_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "lambda$build$1", (intptr_t) M_mindustry_maps_filters_LogicFilter$1_lambda$build$1, VTABLE_mindustry_maps_filters_LogicFilter$1_lambda$build$1, "()V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_maps_filters_LogicFilter$1_lambda$build$2_java_lang_String, VTABLE_mindustry_maps_filters_LogicFilter$1_lambda$build$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$0", (intptr_t) SM_mindustry_maps_filters_LogicFilter$1_lambda$build$0_arc_scene_ui_Button, 0, "(Larc/scene/ui/Button;)V", 4106 },
};

Class class_mindustry_maps_filters_LogicFilter$1{
		.nativeName = (intptr_t) "mindustry/maps/filters/LogicFilter$1",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_FilterOption,
		.size = sizeof(mindustry_maps_filters_LogicFilter$1),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_LogicFilter$1,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_LogicFilter$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_LogicFilter$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_LogicFilter$1 = registerClass(&class_mindustry_maps_filters_LogicFilter$1);

}

