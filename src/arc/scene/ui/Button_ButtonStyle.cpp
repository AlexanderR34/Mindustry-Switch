#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/style/Style.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/Object.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/Button_ButtonStyle.h"

extern "C" {


void mark_arc_scene_ui_Button$ButtonStyle(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_style_Style(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_Button$ButtonStyle *) object;
	if (self->F_up)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_up)->clazz)->markFunction)((jobject) self->F_up, mark, depth + 1);
	if (self->F_down)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_down)->clazz)->markFunction)((jobject) self->F_down, mark, depth + 1);
	if (self->F_over)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_over)->clazz)->markFunction)((jobject) self->F_over, mark, depth + 1);
	if (self->F_checked)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checked)->clazz)->markFunction)((jobject) self->F_checked, mark, depth + 1);
	if (self->F_checkedOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkedOver)->clazz)->markFunction)((jobject) self->F_checkedOver, mark, depth + 1);
	if (self->F_disabled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabled)->clazz)->markFunction)((jobject) self->F_disabled, mark, depth + 1);
}

void clinit_arc_scene_ui_Button$ButtonStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_Style(ctx);
}

void init_arc_scene_ui_Button$ButtonStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button$ButtonStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Button$ButtonStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(295);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Button$ButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button$ButtonStyle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Button$ButtonStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(298);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(299);
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[0].o)))->F_up = (jref) (frame[1].o);
	LINE_NUMBER(300);
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[0].o)))->F_down = (jref) (frame[2].o);
	LINE_NUMBER(301);
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[0].o)))->F_checked = (jref) (frame[3].o);
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Button$ButtonStyle_arc_scene_ui_Button$ButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Button$ButtonStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Button$ButtonStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(304);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_up;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_down;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down = (jref) sp[1].o;
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_over;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_over = (jref) sp[1].o;
	LINE_NUMBER(308);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_checked;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checked = (jref) sp[1].o;
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_checkedOver;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checkedOver = (jref) sp[1].o;
	LINE_NUMBER(310);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_disabled;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_disabled = (jref) sp[1].o;
	LINE_NUMBER(311);
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[0].o)))->F_pressedOffsetX = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_pressedOffsetX);
	LINE_NUMBER(312);
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[0].o)))->F_pressedOffsetY = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_pressedOffsetY);
	LINE_NUMBER(313);
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[0].o)))->F_unpressedOffsetX = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_unpressedOffsetX);
	LINE_NUMBER(314);
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[0].o)))->F_unpressedOffsetY = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_unpressedOffsetY);
	LINE_NUMBER(315);
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[0].o)))->F_checkedOffsetX = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_checkedOffsetX);
	LINE_NUMBER(316);
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[0].o)))->F_checkedOffsetY = ((jfloat)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK((frame[1].o)))->F_checkedOffsetY);
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Button$ButtonStyle[] {
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
	{ "up", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Button$ButtonStyle, F_up), "Larc/scene/style/Drawable;", 1 },
	{ "down", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Button$ButtonStyle, F_down), "Larc/scene/style/Drawable;", 1 },
	{ "over", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Button$ButtonStyle, F_over), "Larc/scene/style/Drawable;", 1 },
	{ "checked", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Button$ButtonStyle, F_checked), "Larc/scene/style/Drawable;", 1 },
	{ "checkedOver", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Button$ButtonStyle, F_checkedOver), "Larc/scene/style/Drawable;", 1 },
	{ "disabled", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Button$ButtonStyle, F_disabled), "Larc/scene/style/Drawable;", 1 },
	{ "pressedOffsetX", &class_float, offsetof(arc_scene_ui_Button$ButtonStyle, F_pressedOffsetX), "F", 1 },
	{ "pressedOffsetY", &class_float, offsetof(arc_scene_ui_Button$ButtonStyle, F_pressedOffsetY), "F", 1 },
	{ "unpressedOffsetX", &class_float, offsetof(arc_scene_ui_Button$ButtonStyle, F_unpressedOffsetX), "F", 1 },
	{ "unpressedOffsetY", &class_float, offsetof(arc_scene_ui_Button$ButtonStyle, F_unpressedOffsetY), "F", 1 },
	{ "checkedOffsetX", &class_float, offsetof(arc_scene_ui_Button$ButtonStyle, F_checkedOffsetX), "F", 1 },
	{ "checkedOffsetY", &class_float, offsetof(arc_scene_ui_Button$ButtonStyle, F_checkedOffsetY), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Button$ButtonStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Button$ButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;Larc/scene/style/Drawable;Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Button$ButtonStyle_arc_scene_ui_Button$ButtonStyle, 0, "(Larc/scene/ui/Button$ButtonStyle;)V", 1 },
};

Class class_arc_scene_ui_Button$ButtonStyle{
		.nativeName = (intptr_t) "arc/scene/ui/Button$ButtonStyle",
		.parentClass = (intptr_t) &class_arc_scene_style_Style,
		.size = sizeof(arc_scene_ui_Button$ButtonStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Button$ButtonStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Button$ButtonStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Button$ButtonStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_Button,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Button$ButtonStyle = registerClass(&class_arc_scene_ui_Button$ButtonStyle);

}

