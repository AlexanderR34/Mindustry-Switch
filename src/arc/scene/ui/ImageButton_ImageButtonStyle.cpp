#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "java/lang/Object.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"

extern "C" {


void mark_arc_scene_ui_ImageButton$ImageButtonStyle(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_Button$ButtonStyle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_ImageButton$ImageButtonStyle *) object;
	if (self->F_imageUp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageUp)->clazz)->markFunction)((jobject) self->F_imageUp, mark, depth + 1);
	if (self->F_imageDown)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageDown)->clazz)->markFunction)((jobject) self->F_imageDown, mark, depth + 1);
	if (self->F_imageOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageOver)->clazz)->markFunction)((jobject) self->F_imageOver, mark, depth + 1);
	if (self->F_imageChecked)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageChecked)->clazz)->markFunction)((jobject) self->F_imageChecked, mark, depth + 1);
	if (self->F_imageCheckedOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageCheckedOver)->clazz)->markFunction)((jobject) self->F_imageCheckedOver, mark, depth + 1);
	if (self->F_imageDisabled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageDisabled)->clazz)->markFunction)((jobject) self->F_imageDisabled, mark, depth + 1);
	if (self->F_imageUpColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageUpColor)->clazz)->markFunction)((jobject) self->F_imageUpColor, mark, depth + 1);
	if (self->F_imageCheckedColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageCheckedColor)->clazz)->markFunction)((jobject) self->F_imageCheckedColor, mark, depth + 1);
	if (self->F_imageDownColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageDownColor)->clazz)->markFunction)((jobject) self->F_imageDownColor, mark, depth + 1);
	if (self->F_imageOverColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageOverColor)->clazz)->markFunction)((jobject) self->F_imageOverColor, mark, depth + 1);
	if (self->F_imageDisabledColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageDisabledColor)->clazz)->markFunction)((jobject) self->F_imageDisabledColor, mark, depth + 1);
}

void clinit_arc_scene_ui_ImageButton$ImageButtonStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Button$ButtonStyle(ctx);
}

void init_arc_scene_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton$ImageButtonStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(155);
	init_arc_scene_ui_Button$ButtonStyle(ctx, (frame[0].o));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton$ImageButtonStyle:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(160);
	init_arc_scene_ui_Button$ButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(161);
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[0].o)))->F_imageUp = (jref) (frame[4].o);
	LINE_NUMBER(162);
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[0].o)))->F_imageDown = (jref) (frame[5].o);
	LINE_NUMBER(163);
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[0].o)))->F_imageChecked = (jref) (frame[6].o);
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton$ImageButtonStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	init_arc_scene_ui_Button$ButtonStyle_arc_scene_ui_Button$ButtonStyle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageUp;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageDown;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDown = (jref) sp[1].o;
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageOver;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOver = (jref) sp[1].o;
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageChecked;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageChecked = (jref) sp[1].o;
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageCheckedOver;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedOver = (jref) sp[1].o;
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageDisabled;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDisabled = (jref) sp[1].o;
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageUpColor;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageDownColor;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDownColor = (jref) sp[1].o;
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageOverColor;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOverColor = (jref) sp[1].o;
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageCheckedColor;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedColor = (jref) sp[1].o;
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageDisabledColor;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDisabledColor = (jref) sp[1].o;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_ImageButton$ImageButtonStyle[] {
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
	{ "imageUp", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageUp), "Larc/scene/style/Drawable;", 1 },
	{ "imageDown", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageDown), "Larc/scene/style/Drawable;", 1 },
	{ "imageOver", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageOver), "Larc/scene/style/Drawable;", 1 },
	{ "imageChecked", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageChecked), "Larc/scene/style/Drawable;", 1 },
	{ "imageCheckedOver", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageCheckedOver), "Larc/scene/style/Drawable;", 1 },
	{ "imageDisabled", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageDisabled), "Larc/scene/style/Drawable;", 1 },
	{ "imageUpColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageUpColor), "Larc/graphics/Color;", 1 },
	{ "imageCheckedColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageCheckedColor), "Larc/graphics/Color;", 1 },
	{ "imageDownColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageDownColor), "Larc/graphics/Color;", 1 },
	{ "imageOverColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageOverColor), "Larc/graphics/Color;", 1 },
	{ "imageDisabledColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_ImageButton$ImageButtonStyle, F_imageDisabledColor), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton$ImageButtonStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;Larc/scene/style/Drawable;Larc/scene/style/Drawable;Larc/scene/style/Drawable;Larc/scene/style/Drawable;Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_ui_ImageButton$ImageButtonStyle, 0, "(Larc/scene/ui/ImageButton$ImageButtonStyle;)V", 1 },
};

Class class_arc_scene_ui_ImageButton$ImageButtonStyle{
		.nativeName = (intptr_t) "arc/scene/ui/ImageButton$ImageButtonStyle",
		.parentClass = (intptr_t) &class_arc_scene_ui_Button$ButtonStyle,
		.size = sizeof(arc_scene_ui_ImageButton$ImageButtonStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_ImageButton$ImageButtonStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_ImageButton$ImageButtonStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_ImageButton$ImageButtonStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_ImageButton,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_ImageButton$ImageButtonStyle = registerClass(&class_arc_scene_ui_ImageButton$ImageButtonStyle);

}

