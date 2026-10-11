#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsCategory.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsCategory.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_SettingsTable.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
	if (self->F_builder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_builder)->clazz)->markFunction)((jobject) self->F_builder, mark, depth + 1);
	if (self->F_table)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_table)->clazz)->markFunction)((jobject) self->F_table, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory_java_lang_String_arc_scene_style_Drawable_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog$SettingsCategory:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(691);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(692);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(693);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[2].o);
	LINE_NUMBER(694);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) NULL_CHECK((frame[0].o)))->F_builder = (jref) (frame[3].o);
	LINE_NUMBER(696);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable);
	init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable(ctx, sp[1].o);
	((mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) NULL_CHECK(sp[0].o))->F_table = (jref) sp[1].o;
	LINE_NUMBER(697);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field icon
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory[] {
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

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory, F_name), "Ljava/lang/String;", 1 },
	{ "icon", &class_arc_scene_style_Drawable, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory, F_icon), "Larc/scene/style/Drawable;", 1 },
	{ "builder", &class_arc_func_Cons, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory, F_builder), "Larc/func/Cons;", 1 },
	{ "table", &class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable, offsetof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory, F_table), "Lmindustry/ui/dialogs/SettingsMenuDialog$SettingsTable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory_java_lang_String_arc_scene_style_Drawable_arc_func_Cons, 0, "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/func/Cons;)V", 1 },
};

Class class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SettingsMenuDialog$SettingsCategory",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_SettingsMenuDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory = registerClass(&class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsCategory);

}

