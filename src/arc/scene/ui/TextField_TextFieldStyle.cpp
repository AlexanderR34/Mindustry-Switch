#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "arc/scene/style/Style.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TextField.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "arc/scene/style/Drawable.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_arc_scene_ui_TextField$TextFieldStyle(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_TextField$TextFieldStyle *) object;
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_fontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontColor)->clazz)->markFunction)((jobject) self->F_fontColor, mark, depth + 1);
	if (self->F_focusedFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_focusedFontColor)->clazz)->markFunction)((jobject) self->F_focusedFontColor, mark, depth + 1);
	if (self->F_disabledFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledFontColor)->clazz)->markFunction)((jobject) self->F_disabledFontColor, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_focusedBackground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_focusedBackground)->clazz)->markFunction)((jobject) self->F_focusedBackground, mark, depth + 1);
	if (self->F_disabledBackground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledBackground)->clazz)->markFunction)((jobject) self->F_disabledBackground, mark, depth + 1);
	if (self->F_invalidBackground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_invalidBackground)->clazz)->markFunction)((jobject) self->F_invalidBackground, mark, depth + 1);
	if (self->F_cursor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cursor)->clazz)->markFunction)((jobject) self->F_cursor, mark, depth + 1);
	if (self->F_selection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selection)->clazz)->markFunction)((jobject) self->F_selection, mark, depth + 1);
	if (self->F_messageFont)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messageFont)->clazz)->markFunction)((jobject) self->F_messageFont, mark, depth + 1);
	if (self->F_messageFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messageFontColor)->clazz)->markFunction)((jobject) self->F_messageFontColor, mark, depth + 1);
}

void clinit_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_Style(ctx);
}

void init_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField$TextFieldStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(866);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(867);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_TextField$TextFieldStyle_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldStyle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField$TextFieldStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(869);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(870);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_messageFont;
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_messageFont = (jref) sp[1].o;
	LINE_NUMBER(871);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_messageFontColor;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_messageFontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_messageFontColor = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(872);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(873);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_focusedBackground;
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground = (jref) sp[1].o;
	LINE_NUMBER(874);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_disabledBackground;
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground = (jref) sp[1].o;
	LINE_NUMBER(875);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_cursor;
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_cursor = (jref) sp[1].o;
	LINE_NUMBER(876);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_font;
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(877);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_focusedFontColor;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_focusedFontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedFontColor = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(879);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_disabledFontColor;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_disabledFontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(880);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_selection;
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_selection = (jref) sp[1].o;
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TextField$TextFieldStyle[] {
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
	{ "font", &class_arc_graphics_g2d_Font, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_font), "Larc/graphics/g2d/Font;", 1 },
	{ "fontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_fontColor), "Larc/graphics/Color;", 1 },
	{ "focusedFontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_focusedFontColor), "Larc/graphics/Color;", 1 },
	{ "disabledFontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_disabledFontColor), "Larc/graphics/Color;", 1 },
	{ "background", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_background), "Larc/scene/style/Drawable;", 1 },
	{ "focusedBackground", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_focusedBackground), "Larc/scene/style/Drawable;", 1 },
	{ "disabledBackground", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_disabledBackground), "Larc/scene/style/Drawable;", 1 },
	{ "invalidBackground", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_invalidBackground), "Larc/scene/style/Drawable;", 1 },
	{ "cursor", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_cursor), "Larc/scene/style/Drawable;", 1 },
	{ "selection", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_selection), "Larc/scene/style/Drawable;", 1 },
	{ "messageFont", &class_arc_graphics_g2d_Font, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_messageFont), "Larc/graphics/g2d/Font;", 1 },
	{ "messageFontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_TextField$TextFieldStyle, F_messageFontColor), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TextField$TextFieldStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_TextField$TextFieldStyle_arc_scene_ui_TextField$TextFieldStyle, 0, "(Larc/scene/ui/TextField$TextFieldStyle;)V", 1 },
};

Class class_arc_scene_ui_TextField$TextFieldStyle{
		.nativeName = (intptr_t) "arc/scene/ui/TextField$TextFieldStyle",
		.parentClass = (intptr_t) &class_arc_scene_style_Style,
		.size = sizeof(arc_scene_ui_TextField$TextFieldStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TextField$TextFieldStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TextField$TextFieldStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TextField$TextFieldStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_TextField,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TextField$TextFieldStyle = registerClass(&class_arc_scene_ui_TextField$TextFieldStyle);

}

