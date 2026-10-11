#include "arc/scene/ui/CheckBox_CheckBoxStyle.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/CheckBox.h"

extern "C" {


void mark_arc_scene_ui_CheckBox$CheckBoxStyle(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_TextButton$TextButtonStyle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_CheckBox$CheckBoxStyle *) object;
	if (self->F_checkboxOn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOn)->clazz)->markFunction)((jobject) self->F_checkboxOn, mark, depth + 1);
	if (self->F_checkboxOff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOff)->clazz)->markFunction)((jobject) self->F_checkboxOff, mark, depth + 1);
	if (self->F_checkboxOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOver)->clazz)->markFunction)((jobject) self->F_checkboxOver, mark, depth + 1);
	if (self->F_checkboxOnDisabled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOnDisabled)->clazz)->markFunction)((jobject) self->F_checkboxOnDisabled, mark, depth + 1);
	if (self->F_checkboxOffDisabled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOffDisabled)->clazz)->markFunction)((jobject) self->F_checkboxOffDisabled, mark, depth + 1);
	if (self->F_checkboxOnOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOnOver)->clazz)->markFunction)((jobject) self->F_checkboxOnOver, mark, depth + 1);
}

void clinit_arc_scene_ui_CheckBox$CheckBoxStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_TextButton$TextButtonStyle(ctx);
}

void init_arc_scene_ui_CheckBox$CheckBoxStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/CheckBox$CheckBoxStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_CheckBox$CheckBoxStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(84);
	init_arc_scene_ui_TextButton$TextButtonStyle(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_CheckBox$CheckBoxStyle[] {
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
	{ "checkboxOn", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_CheckBox$CheckBoxStyle, F_checkboxOn), "Larc/scene/style/Drawable;", 1 },
	{ "checkboxOff", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_CheckBox$CheckBoxStyle, F_checkboxOff), "Larc/scene/style/Drawable;", 1 },
	{ "checkboxOver", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_CheckBox$CheckBoxStyle, F_checkboxOver), "Larc/scene/style/Drawable;", 1 },
	{ "checkboxOnDisabled", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_CheckBox$CheckBoxStyle, F_checkboxOnDisabled), "Larc/scene/style/Drawable;", 1 },
	{ "checkboxOffDisabled", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_CheckBox$CheckBoxStyle, F_checkboxOffDisabled), "Larc/scene/style/Drawable;", 1 },
	{ "checkboxOnOver", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_CheckBox$CheckBoxStyle, F_checkboxOnOver), "Larc/scene/style/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_CheckBox$CheckBoxStyle, 0, "()V", 1 },
};

Class class_arc_scene_ui_CheckBox$CheckBoxStyle{
		.nativeName = (intptr_t) "arc/scene/ui/CheckBox$CheckBoxStyle",
		.parentClass = (intptr_t) &class_arc_scene_ui_TextButton$TextButtonStyle,
		.size = sizeof(arc_scene_ui_CheckBox$CheckBoxStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_CheckBox$CheckBoxStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_CheckBox$CheckBoxStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_CheckBox$CheckBoxStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_CheckBox,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_CheckBox$CheckBoxStyle = registerClass(&class_arc_scene_ui_CheckBox$CheckBoxStyle);

}

