#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/Button_ButtonStyle.h"

extern "C" {


void mark_arc_scene_ui_TextButton$TextButtonStyle(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_TextButton$TextButtonStyle *) object;
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_fontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontColor)->clazz)->markFunction)((jobject) self->F_fontColor, mark, depth + 1);
	if (self->F_downFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_downFontColor)->clazz)->markFunction)((jobject) self->F_downFontColor, mark, depth + 1);
	if (self->F_overFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overFontColor)->clazz)->markFunction)((jobject) self->F_overFontColor, mark, depth + 1);
	if (self->F_checkedFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkedFontColor)->clazz)->markFunction)((jobject) self->F_checkedFontColor, mark, depth + 1);
	if (self->F_checkedOverFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkedOverFontColor)->clazz)->markFunction)((jobject) self->F_checkedOverFontColor, mark, depth + 1);
	if (self->F_disabledFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledFontColor)->clazz)->markFunction)((jobject) self->F_disabledFontColor, mark, depth + 1);
}

void clinit_arc_scene_ui_TextButton$TextButtonStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Button$ButtonStyle(ctx);
}

void init_arc_scene_ui_TextButton$TextButtonStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextButton$TextButtonStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextButton$TextButtonStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(97);
	init_arc_scene_ui_Button$ButtonStyle(ctx, (frame[0].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_TextButton$TextButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextButton$TextButtonStyle:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextButton$TextButtonStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(101);
	init_arc_scene_ui_Button$ButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(102);
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[0].o)))->F_font = (jref) (frame[4].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_TextButton$TextButtonStyle_arc_scene_ui_TextButton$TextButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextButton$TextButtonStyle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextButton$TextButtonStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	init_arc_scene_ui_Button$ButtonStyle_arc_scene_ui_Button$ButtonStyle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_font;
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_downFontColor;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_downFontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_downFontColor = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_overFontColor;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_overFontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_overFontColor = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_checkedFontColor;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_checkedFontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_checkedFontColor = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_checkedOverFontColor;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_checkedOverFontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_checkedFontColor = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_disabledFontColor;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[1].o)))->F_disabledFontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor = (jref) sp[1].o;
	}
label_8:;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TextButton$TextButtonStyle[] {
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
	{ "font", &class_arc_graphics_g2d_Font, offsetof(arc_scene_ui_TextButton$TextButtonStyle, F_font), "Larc/graphics/g2d/Font;", 1 },
	{ "fontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_TextButton$TextButtonStyle, F_fontColor), "Larc/graphics/Color;", 1 },
	{ "downFontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_TextButton$TextButtonStyle, F_downFontColor), "Larc/graphics/Color;", 1 },
	{ "overFontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_TextButton$TextButtonStyle, F_overFontColor), "Larc/graphics/Color;", 1 },
	{ "checkedFontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_TextButton$TextButtonStyle, F_checkedFontColor), "Larc/graphics/Color;", 1 },
	{ "checkedOverFontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_TextButton$TextButtonStyle, F_checkedOverFontColor), "Larc/graphics/Color;", 1 },
	{ "disabledFontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_TextButton$TextButtonStyle, F_disabledFontColor), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TextButton$TextButtonStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_TextButton$TextButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_graphics_g2d_Font, 0, "(Larc/scene/style/Drawable;Larc/scene/style/Drawable;Larc/scene/style/Drawable;Larc/graphics/g2d/Font;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_TextButton$TextButtonStyle_arc_scene_ui_TextButton$TextButtonStyle, 0, "(Larc/scene/ui/TextButton$TextButtonStyle;)V", 1 },
};

Class class_arc_scene_ui_TextButton$TextButtonStyle{
		.nativeName = (intptr_t) "arc/scene/ui/TextButton$TextButtonStyle",
		.parentClass = (intptr_t) &class_arc_scene_ui_Button$ButtonStyle,
		.size = sizeof(arc_scene_ui_TextButton$TextButtonStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TextButton$TextButtonStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TextButton$TextButtonStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TextButton$TextButtonStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_TextButton,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TextButton$TextButtonStyle = registerClass(&class_arc_scene_ui_TextButton$TextButtonStyle);

}

