#include "arc/scene/ui/ProgressBar_ProgressBarStyle.h"
#include "arc/scene/style/Style.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ProgressBar_ProgressBarStyle.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ProgressBar.h"

extern "C" {


void mark_arc_scene_ui_ProgressBar$ProgressBarStyle(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_ProgressBar$ProgressBarStyle *) object;
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_disabledBackground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledBackground)->clazz)->markFunction)((jobject) self->F_disabledBackground, mark, depth + 1);
	if (self->F_knob)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_knob)->clazz)->markFunction)((jobject) self->F_knob, mark, depth + 1);
	if (self->F_disabledKnob)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledKnob)->clazz)->markFunction)((jobject) self->F_disabledKnob, mark, depth + 1);
	if (self->F_knobBefore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_knobBefore)->clazz)->markFunction)((jobject) self->F_knobBefore, mark, depth + 1);
	if (self->F_knobAfter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_knobAfter)->clazz)->markFunction)((jobject) self->F_knobAfter, mark, depth + 1);
	if (self->F_disabledKnobBefore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledKnobBefore)->clazz)->markFunction)((jobject) self->F_disabledKnobBefore, mark, depth + 1);
	if (self->F_disabledKnobAfter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledKnobAfter)->clazz)->markFunction)((jobject) self->F_disabledKnobAfter, mark, depth + 1);
}

void clinit_arc_scene_ui_ProgressBar$ProgressBarStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_Style(ctx);
}

void init_arc_scene_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar$ProgressBarStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ProgressBar$ProgressBarStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(371);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ProgressBar$ProgressBarStyle_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar$ProgressBarStyle:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ProgressBar$ProgressBarStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(374);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(375);
	((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[0].o)))->F_background = (jref) (frame[1].o);
	LINE_NUMBER(376);
	((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[0].o)))->F_knob = (jref) (frame[2].o);
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ProgressBar$ProgressBarStyle_arc_scene_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar$ProgressBarStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ProgressBar$ProgressBarStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(379);
	init_arc_scene_style_Style(ctx, (frame[0].o));
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledBackground;
	((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground = (jref) sp[1].o;
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_knob;
	((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_knob = (jref) sp[1].o;
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnob;
	((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnob = (jref) sp[1].o;
	LINE_NUMBER(384);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_knobBefore;
	((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_knobBefore = (jref) sp[1].o;
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_knobAfter;
	((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_knobAfter = (jref) sp[1].o;
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnobBefore;
	((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnobBefore = (jref) sp[1].o;
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnobAfter;
	((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnobAfter = (jref) sp[1].o;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_ProgressBar$ProgressBarStyle[] {
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
	{ "background", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ProgressBar$ProgressBarStyle, F_background), "Larc/scene/style/Drawable;", 1 },
	{ "disabledBackground", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ProgressBar$ProgressBarStyle, F_disabledBackground), "Larc/scene/style/Drawable;", 1 },
	{ "knob", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ProgressBar$ProgressBarStyle, F_knob), "Larc/scene/style/Drawable;", 1 },
	{ "disabledKnob", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ProgressBar$ProgressBarStyle, F_disabledKnob), "Larc/scene/style/Drawable;", 1 },
	{ "knobBefore", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ProgressBar$ProgressBarStyle, F_knobBefore), "Larc/scene/style/Drawable;", 1 },
	{ "knobAfter", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ProgressBar$ProgressBarStyle, F_knobAfter), "Larc/scene/style/Drawable;", 1 },
	{ "disabledKnobBefore", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ProgressBar$ProgressBarStyle, F_disabledKnobBefore), "Larc/scene/style/Drawable;", 1 },
	{ "disabledKnobAfter", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_ProgressBar$ProgressBarStyle, F_disabledKnobAfter), "Larc/scene/style/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_ProgressBar$ProgressBarStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ProgressBar$ProgressBarStyle_arc_scene_style_Drawable_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ProgressBar$ProgressBarStyle_arc_scene_ui_ProgressBar$ProgressBarStyle, 0, "(Larc/scene/ui/ProgressBar$ProgressBarStyle;)V", 1 },
};

Class class_arc_scene_ui_ProgressBar$ProgressBarStyle{
		.nativeName = (intptr_t) "arc/scene/ui/ProgressBar$ProgressBarStyle",
		.parentClass = (intptr_t) &class_arc_scene_style_Style,
		.size = sizeof(arc_scene_ui_ProgressBar$ProgressBarStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_ProgressBar$ProgressBarStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_ProgressBar$ProgressBarStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_ProgressBar$ProgressBarStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_ProgressBar,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_ProgressBar$ProgressBarStyle = registerClass(&class_arc_scene_ui_ProgressBar$ProgressBarStyle);

}

