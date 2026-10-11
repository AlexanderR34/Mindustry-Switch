#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_CheckSetting.h"
#include "mindustry/ui/Elems.h"
#include "java/lang/Math.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_CheckSetting_invoke_arc_func_Boolp_1.h"
#include "arc/Core.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/Boolean.h"
#include "arc/func/Boolp.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_Setting.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_CheckSetting_invoke_arc_func_Boolc_1.h"
#include "arc/Graphics.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_CheckSetting.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/func/Boolc.h"
#include "arc/Settings.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable.h"
#include "arc/scene/ui/layout/Scl.h"

extern "C" {


void mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting *) object;
	if (self->F_changed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_changed)->clazz)->markFunction)((jobject) self->F_changed, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(ctx);
}

void init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_java_lang_String_boolean_arc_func_Boolc(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$CheckSetting:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(813);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(814);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting *) NULL_CHECK((frame[0].o)))->F_def = (frame[2].i);
	LINE_NUMBER(815);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting *) NULL_CHECK((frame[0].o)))->F_changed = (jref) (frame[3].o);
	LINE_NUMBER(816);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$CheckSetting:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(820);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_title;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_invoke_arc_func_Boolc_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_invoke_arc_func_Boolc_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_invoke_arc_func_Boolc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_ui_Elems_check_java_lang_String_arc_func_Boolp_arc_func_Boolc_R_arc_scene_ui_Button(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(827);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[2].o));
	jfloat temp0 = jfloat(500.0f);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[2].o);
	jfloat temp2 = (jfloat(temp1)) / (jfloat(1.2f));
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp2 / temp3));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp4);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(45.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(7.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_addDesc_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_addDesc_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(828);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(829);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_lambda$add$1_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$CheckSetting:lambda$add$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(821);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[1].i));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(822);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting *) NULL_CHECK((frame[0].o)))->F_changed;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting *) NULL_CHECK((frame[0].o)))->F_changed;
	((func_arc_func_Boolc_get_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolc, INDEX_arc_func_Boolc_get_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	}
label_2:;
	LINE_NUMBER(825);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_lambda$add$0_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$CheckSetting:lambda$add$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(820);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting[] {
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
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_addDesc_arc_scene_Element,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_lambda$add$1_boolean,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_lambda$add$0_R_boolean,
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
	{ "add", "(Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;)V" },
	{ "addDesc", "(Larc/scene/Element;)V" },
	{ "lambda$add$1", "(Z)V" },
	{ "lambda$add$0", "()Z" },
};

static FieldMetadata fields[] {
	{ "def", &class_boolean, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting, F_def), "Z", 0 },
	{ "changed", &class_arc_func_Boolc, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting, F_changed), "Larc/func/Boolc;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_java_lang_String_boolean_arc_func_Boolc, 0, "(Ljava/lang/String;ZLarc/func/Boolc;)V", 1 },
	{ "add", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, "(Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;)V", 1 },
	{ "lambda$add$1", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_lambda$add$1_boolean, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_lambda$add$1_boolean, "(Z)V", 4098 },
	{ "lambda$add$0", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_lambda$add$0_R_boolean, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting_lambda$add$0_R_boolean, "()Z", 4098 },
};

Class class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$CheckSetting",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting,
		.size = sizeof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting = registerClass(&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$CheckSetting);

}

