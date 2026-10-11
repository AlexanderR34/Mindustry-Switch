#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_TextSetting.h"
#include "arc/func/Prov.h"
#include "arc/Core.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_TextSetting_invoke_java_lang_Runnable_3.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_TextSetting_invoke_arc_func_Prov_1.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_Setting.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_TextSetting_invoke_java_lang_Runnable_2.h"
#include "java/lang/Runnable.h"
#include "java/lang/CharSequence.h"
#include "arc/func/Cons.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/Settings.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_TextSetting.h"

extern "C" {


void mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting *) object;
	if (self->F_def)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_def)->clazz)->markFunction)((jobject) self->F_def, mark, depth + 1);
	if (self->F_changed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_changed)->clazz)->markFunction)((jobject) self->F_changed, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(ctx);
}

void init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_java_lang_String_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$TextSetting:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(878);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(879);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting *) NULL_CHECK((frame[0].o)))->F_def = (jref) (frame[2].o);
	LINE_NUMBER(880);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting *) NULL_CHECK((frame[0].o)))->F_changed = (jref) (frame[3].o);
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$TextSetting:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(885);
	clinit_arc_scene_ui_TextField(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextField);
	init_arc_scene_ui_TextField(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(887);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_invoke_java_lang_Runnable_2);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(889);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(896);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_table_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_table_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(897);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(898);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(899);
	((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_addDesc_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_addDesc_arc_scene_Element])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(900);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(901);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$2_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$TextSetting:lambda$add$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_title;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$1_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$TextSetting:lambda$add$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(890);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[1].o));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(891);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting *) NULL_CHECK((frame[0].o)))->F_changed;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(892);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting *) NULL_CHECK((frame[0].o)))->F_changed;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[1].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(894);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$0_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$TextSetting:lambda$add$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(887);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting[] {
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
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_addDesc_arc_scene_Element,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$2_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$1_arc_scene_ui_TextField,
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$0_arc_scene_ui_TextField,
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
	{ "lambda$add$2", "()Ljava/lang/CharSequence;" },
	{ "lambda$add$1", "(Larc/scene/ui/TextField;)V" },
	{ "lambda$add$0", "(Larc/scene/ui/TextField;)V" },
};

static FieldMetadata fields[] {
	{ "def", &class_java_lang_String, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting, F_def), "Ljava/lang/String;", 0 },
	{ "changed", &class_arc_func_Cons, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting, F_changed), "Larc/func/Cons;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_java_lang_String_java_lang_String_arc_func_Cons, 0, "(Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)V", 1 },
	{ "add", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, "(Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;)V", 1 },
	{ "lambda$add$2", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$2_R_java_lang_CharSequence, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$2_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$add$1", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$1_arc_scene_ui_TextField, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$1_arc_scene_ui_TextField, "(Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$add$0", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$0_arc_scene_ui_TextField, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting_lambda$add$0_arc_scene_ui_TextField, "(Larc/scene/ui/TextField;)V", 4098 },
};

Class class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$TextSetting",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting,
		.size = sizeof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting = registerClass(&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$TextSetting);

}

