#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_Setting.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable_Setting.h"
#include "arc/util/Nullable.h"
#include "mindustry/core/UI.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/OS.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_title)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_title)->clazz)->markFunction)((jobject) self->F_title, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$Setting:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(794);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(795);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(796);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"setting.\u0001.name.windows"_j.string, 1, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(797);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isWindows) == 0) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"setting.\u0001.name"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	sp += 1;
	}
label_5:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK(sp[0].o))->F_title = (jref) sp[1].o;
	LINE_NUMBER(798);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"setting.\u0001.description"_j.string, 1, (frame[1].o));
	sp[1].o = (jobject)((func_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK(sp[0].o))->F_description = (jref) sp[1].o;
	LINE_NUMBER(799);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_addDesc_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$Setting:addDesc", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(804);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting *) NULL_CHECK((frame[0].o)))->F_description;
	((func_mindustry_core_UI_addDescTooltip_arc_scene_Element_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_addDescTooltip_arc_scene_Element_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(805);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field description
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting[] {
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
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_addDesc_arc_scene_Element,
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
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting, F_name), "Ljava/lang/String;", 1 },
	{ "title", &class_java_lang_String, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting, F_title), "Ljava/lang/String;", 1 },
	{ "description", &class_java_lang_String, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting, F_description), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "add", 0, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, "(Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;)V", 1025 },
	{ "addDesc", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_addDesc_arc_scene_Element, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_addDesc_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
};

Class class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SettingsMenuDialog$SettingsTable$Setting",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting = registerClass(&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting);

}

