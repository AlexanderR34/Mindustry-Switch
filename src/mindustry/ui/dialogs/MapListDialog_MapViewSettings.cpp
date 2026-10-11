#include "mindustry/ui/dialogs/MapListDialog_MapViewSettings.h"
#include "mindustry/ui/dialogs/MapListDialog.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "mindustry/ui/dialogs/MapListDialog_MapViewSettings.h"
#include "arc/struct/Seq.h"
#include "arc/Settings.h"
#include "mindustry/ui/dialogs/MapListDialog_MapPriority.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_ui_dialogs_MapListDialog$MapViewSettings(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_MapListDialog$MapViewSettings *) object;
	if (self->F_priority)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_priority)->clazz)->markFunction)((jobject) self->F_priority, mark, depth + 1);
	if (self->F_planets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planets)->clazz)->markFunction)((jobject) self->F_planets, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_MapListDialog$MapViewSettings(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_dialogs_MapListDialog$MapViewSettings(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapViewSettings:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapViewSettings(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(59);
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK((frame[0].o)))->F_showBuiltIn = (jint(1));
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK((frame[0].o)))->F_showCustom = (jint(1));
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK((frame[0].o)))->F_showModded = (jint(1));
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK((frame[0].o)))->F_searchAuthor = (jint(0));
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK((frame[0].o)))->F_searchDescription = (jint(0));
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK((frame[0].o)))->F_searchModname = (jint(0));
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog$MapPriority_recent;
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_priority = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_MapListDialog$MapViewSettings *) NULL_CHECK(sp[0].o))->F_planets = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_MapListDialog$MapViewSettings_save(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapViewSettings:save", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"editormapviewsettings"_j))), (((jobject) &class_mindustry_ui_dialogs_MapListDialog$MapViewSettings)), (frame[0].o));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_MapListDialog$MapViewSettings[] {
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
	(void *) M_mindustry_ui_dialogs_MapListDialog$MapViewSettings_save,
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
	{ "save", "()V" },
};

static FieldMetadata fields[] {
	{ "showBuiltIn", &class_boolean, offsetof(mindustry_ui_dialogs_MapListDialog$MapViewSettings, F_showBuiltIn), "Z", 0 },
	{ "showCustom", &class_boolean, offsetof(mindustry_ui_dialogs_MapListDialog$MapViewSettings, F_showCustom), "Z", 0 },
	{ "showModded", &class_boolean, offsetof(mindustry_ui_dialogs_MapListDialog$MapViewSettings, F_showModded), "Z", 0 },
	{ "searchAuthor", &class_boolean, offsetof(mindustry_ui_dialogs_MapListDialog$MapViewSettings, F_searchAuthor), "Z", 0 },
	{ "searchDescription", &class_boolean, offsetof(mindustry_ui_dialogs_MapListDialog$MapViewSettings, F_searchDescription), "Z", 0 },
	{ "searchModname", &class_boolean, offsetof(mindustry_ui_dialogs_MapListDialog$MapViewSettings, F_searchModname), "Z", 0 },
	{ "priority", &class_mindustry_ui_dialogs_MapListDialog$MapPriority, offsetof(mindustry_ui_dialogs_MapListDialog$MapViewSettings, F_priority), "Lmindustry/ui/dialogs/MapListDialog$MapPriority;", 0 },
	{ "planets", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_MapListDialog$MapViewSettings, F_planets), "Larc/struct/Seq;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_MapListDialog$MapViewSettings, 0, "()V", 1 },
	{ "save", (intptr_t) M_mindustry_ui_dialogs_MapListDialog$MapViewSettings_save, VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_save, "()V", 0 },
};

Class class_mindustry_ui_dialogs_MapListDialog$MapViewSettings{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/MapListDialog$MapViewSettings",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_dialogs_MapListDialog$MapViewSettings),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_MapListDialog$MapViewSettings,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_MapListDialog$MapViewSettings,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_MapListDialog$MapViewSettings,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_MapListDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_MapListDialog$MapViewSettings = registerClass(&class_mindustry_ui_dialogs_MapListDialog$MapViewSettings);

}

