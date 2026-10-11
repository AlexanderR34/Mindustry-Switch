#include "arc/scene/ui/Dialog_DialogStyle.h"
#include "arc/scene/style/Style.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/scene/style/Drawable.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/Dialog_DialogStyle.h"

extern "C" {


void mark_arc_scene_ui_Dialog$DialogStyle(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_Dialog$DialogStyle *) object;
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_titleFont)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_titleFont)->clazz)->markFunction)((jobject) self->F_titleFont, mark, depth + 1);
	if (self->F_titleFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_titleFontColor)->clazz)->markFunction)((jobject) self->F_titleFontColor, mark, depth + 1);
	if (self->F_stageBackground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stageBackground)->clazz)->markFunction)((jobject) self->F_stageBackground, mark, depth + 1);
}

void clinit_arc_scene_ui_Dialog$DialogStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_Style(ctx);
}

void init_arc_scene_ui_Dialog$DialogStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$DialogStyle:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog$DialogStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(560);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((arc_scene_ui_Dialog$DialogStyle *) NULL_CHECK(sp[0].o))->F_titleFontColor = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Dialog$DialogStyle[] {
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
	{ "background", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Dialog$DialogStyle, F_background), "Larc/scene/style/Drawable;", 1 },
	{ "titleFont", &class_arc_graphics_g2d_Font, offsetof(arc_scene_ui_Dialog$DialogStyle, F_titleFont), "Larc/graphics/g2d/Font;", 1 },
	{ "titleFontColor", &class_arc_graphics_Color, offsetof(arc_scene_ui_Dialog$DialogStyle, F_titleFontColor), "Larc/graphics/Color;", 1 },
	{ "stageBackground", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Dialog$DialogStyle, F_stageBackground), "Larc/scene/style/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Dialog$DialogStyle, 0, "()V", 1 },
};

Class class_arc_scene_ui_Dialog$DialogStyle{
		.nativeName = (intptr_t) "arc/scene/ui/Dialog$DialogStyle",
		.parentClass = (intptr_t) &class_arc_scene_style_Style,
		.size = sizeof(arc_scene_ui_Dialog$DialogStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Dialog$DialogStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Dialog$DialogStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Dialog$DialogStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_Dialog,
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
static bool registered_arc_scene_ui_Dialog$DialogStyle = registerClass(&class_arc_scene_ui_Dialog$DialogStyle);

}

