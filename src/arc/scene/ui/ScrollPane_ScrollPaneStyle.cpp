#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/scene/style/Style.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/style/Drawable.h"

extern "C" {


void mark_arc_scene_ui_ScrollPane$ScrollPaneStyle(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_ScrollPane$ScrollPaneStyle *) object;
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_corner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_corner)->clazz)->markFunction)((jobject) self->F_corner, mark, depth + 1);
	if (self->F_hScroll)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hScroll)->clazz)->markFunction)((jobject) self->F_hScroll, mark, depth + 1);
	if (self->F_hScrollKnob)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hScrollKnob)->clazz)->markFunction)((jobject) self->F_hScrollKnob, mark, depth + 1);
	if (self->F_vScroll)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vScroll)->clazz)->markFunction)((jobject) self->F_vScroll, mark, depth + 1);
	if (self->F_vScrollKnob)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vScrollKnob)->clazz)->markFunction)((jobject) self->F_vScrollKnob, mark, depth + 1);
}

void clinit_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_Style(ctx);
}

void init_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$ScrollPaneStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1095);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(1096);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$ScrollPaneStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1098);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(1099);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(1100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_hScroll;
	((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll = (jref) sp[1].o;
	LINE_NUMBER(1101);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_hScrollKnob;
	((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob = (jref) sp[1].o;
	LINE_NUMBER(1102);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_vScroll;
	((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll = (jref) sp[1].o;
	LINE_NUMBER(1103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_vScrollKnob;
	((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob = (jref) sp[1].o;
	LINE_NUMBER(1104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_ScrollPane$ScrollPaneStyle[] {
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
	{ "background", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ScrollPane$ScrollPaneStyle, F_background), "Larc/scene/style/Drawable;", 1 },
	{ "corner", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ScrollPane$ScrollPaneStyle, F_corner), "Larc/scene/style/Drawable;", 1 },
	{ "hScroll", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ScrollPane$ScrollPaneStyle, F_hScroll), "Larc/scene/style/Drawable;", 1 },
	{ "hScrollKnob", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ScrollPane$ScrollPaneStyle, F_hScrollKnob), "Larc/scene/style/Drawable;", 1 },
	{ "vScroll", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ScrollPane$ScrollPaneStyle, F_vScroll), "Larc/scene/style/Drawable;", 1 },
	{ "vScrollKnob", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ScrollPane$ScrollPaneStyle, F_vScrollKnob), "Larc/scene/style/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_ScrollPane$ScrollPaneStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle, 0, "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;)V", 1 },
};

Class class_arc_scene_ui_ScrollPane$ScrollPaneStyle{
		.nativeName = (intptr_t) "arc/scene/ui/ScrollPane$ScrollPaneStyle",
		.parentClass = (intptr_t) &class_arc_scene_style_Style,
		.size = sizeof(arc_scene_ui_ScrollPane$ScrollPaneStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_ScrollPane$ScrollPaneStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_ScrollPane$ScrollPaneStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_ScrollPane$ScrollPaneStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_ScrollPane,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_ScrollPane$ScrollPaneStyle = registerClass(&class_arc_scene_ui_ScrollPane$ScrollPaneStyle);

}

