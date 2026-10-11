#include "mindustry/maps/filters/FilterOption_ToggleOption.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "arc/func/Boolp.h"
#include "mindustry/maps/filters/FilterOption_ToggleOption.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/func/Boolc.h"
#include "arc/scene/ui/CheckBox.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_maps_filters_FilterOption$ToggleOption(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_FilterOption$ToggleOption *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_getter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_getter)->clazz)->markFunction)((jobject) self->F_getter, mark, depth + 1);
	if (self->F_setter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_setter)->clazz)->markFunction)((jobject) self->F_setter, mark, depth + 1);
}

void clinit_mindustry_maps_filters_FilterOption$ToggleOption(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_FilterOption(ctx);
}

void init_mindustry_maps_filters_FilterOption$ToggleOption_java_lang_String_arc_func_Boolp_arc_func_Boolc(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$ToggleOption:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption$ToggleOption(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(150);
	init_mindustry_maps_filters_FilterOption(ctx, (frame[0].o));
	LINE_NUMBER(151);
	((mindustry_maps_filters_FilterOption$ToggleOption *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(152);
	((mindustry_maps_filters_FilterOption$ToggleOption *) NULL_CHECK((frame[0].o)))->F_getter = (jref) (frame[2].o);
	LINE_NUMBER(153);
	((mindustry_maps_filters_FilterOption$ToggleOption *) NULL_CHECK((frame[0].o)))->F_setter = (jref) (frame[3].o);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_FilterOption$ToggleOption_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$ToggleOption:build", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(159);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$ToggleOption *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@filter.option.\u0001"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((mindustry_maps_filters_FilterOption$ToggleOption *) NULL_CHECK((frame[0].o)))->F_setter;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o));
	LINE_NUMBER(160);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$ToggleOption *) NULL_CHECK((frame[0].o)))->F_getter;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[1].o))(ctx, sp[1].o);
	((func_arc_scene_ui_CheckBox_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_CheckBox_setChecked_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(161);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption *) NULL_CHECK((frame[0].o)))->F_changed;
	((func_arc_scene_ui_CheckBox_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_CheckBox_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_FilterOption$ToggleOption[] {
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
	(void *) M_mindustry_maps_filters_FilterOption$ToggleOption_build_arc_scene_ui_layout_Table,
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
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_maps_filters_FilterOption$ToggleOption, F_name), "Ljava/lang/String;", 16 },
	{ "getter", &class_arc_func_Boolp, offsetof(mindustry_maps_filters_FilterOption$ToggleOption, F_getter), "Larc/func/Boolp;", 16 },
	{ "setter", &class_arc_func_Boolc, offsetof(mindustry_maps_filters_FilterOption$ToggleOption, F_setter), "Larc/func/Boolc;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_FilterOption$ToggleOption_java_lang_String_arc_func_Boolp_arc_func_Boolc, 0, "(Ljava/lang/String;Larc/func/Boolp;Larc/func/Boolc;)V", 0 },
	{ "build", (intptr_t) M_mindustry_maps_filters_FilterOption$ToggleOption_build_arc_scene_ui_layout_Table, VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
};

Class class_mindustry_maps_filters_FilterOption$ToggleOption{
		.nativeName = (intptr_t) "mindustry/maps/filters/FilterOption$ToggleOption",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_FilterOption,
		.size = sizeof(mindustry_maps_filters_FilterOption$ToggleOption),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_FilterOption$ToggleOption,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_FilterOption$ToggleOption,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_FilterOption$ToggleOption,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_maps_filters_FilterOption,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_FilterOption$ToggleOption = registerClass(&class_mindustry_maps_filters_FilterOption$ToggleOption);

}

