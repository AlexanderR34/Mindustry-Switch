#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/scene/style/Style.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/scene/style/Drawable.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/Label.h"

extern "C" {


void mark_arc_scene_ui_Label$LabelStyle(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_Label$LabelStyle *) object;
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_fontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontColor)->clazz)->markFunction)((jobject) self->F_fontColor, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
}

void clinit_arc_scene_ui_Label$LabelStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_Style(ctx);
}

void init_arc_scene_ui_Label$LabelStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label$LabelStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Label$LabelStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(383);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Label$LabelStyle_arc_graphics_g2d_Font_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label$LabelStyle:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Label$LabelStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(386);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(387);
	((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[0].o)))->F_font = (jref) (frame[1].o);
	LINE_NUMBER(388);
	((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[0].o)))->F_fontColor = (jref) (frame[2].o);
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Label$LabelStyle_arc_scene_ui_Label$LabelStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label$LabelStyle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Label$LabelStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(391);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(392);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_font;
	((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(393);
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Label$LabelStyle[] {
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
	{ "font", &class_arc_graphics_g2d_Font, offsetof(arc_scene_ui_Label$LabelStyle, F_font), "Larc/graphics/g2d/Font;", 1 },
	{ "fontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_Label$LabelStyle, F_fontColor), "Larc/graphics/Color;", 1 },
	{ "background", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Label$LabelStyle, F_background), "Larc/scene/style/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Label$LabelStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Label$LabelStyle_arc_graphics_g2d_Font_arc_graphics_Color, 0, "(Larc/graphics/g2d/Font;Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Label$LabelStyle_arc_scene_ui_Label$LabelStyle, 0, "(Larc/scene/ui/Label$LabelStyle;)V", 1 },
};

Class class_arc_scene_ui_Label$LabelStyle{
		.nativeName = (intptr_t) "arc/scene/ui/Label$LabelStyle",
		.parentClass = (intptr_t) &class_arc_scene_style_Style,
		.size = sizeof(arc_scene_ui_Label$LabelStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Label$LabelStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Label$LabelStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Label$LabelStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_Label,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Label$LabelStyle = registerClass(&class_arc_scene_ui_Label$LabelStyle);

}

