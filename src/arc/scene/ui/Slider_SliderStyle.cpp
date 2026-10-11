#include "arc/scene/ui/Slider_SliderStyle.h"
#include "arc/scene/ui/Slider.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ProgressBar_ProgressBarStyle.h"
#include "arc/scene/style/Drawable.h"

extern "C" {


void mark_arc_scene_ui_Slider$SliderStyle(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_ProgressBar$ProgressBarStyle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_Slider$SliderStyle *) object;
	if (self->F_knobOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_knobOver)->clazz)->markFunction)((jobject) self->F_knobOver, mark, depth + 1);
	if (self->F_knobDown)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_knobDown)->clazz)->markFunction)((jobject) self->F_knobDown, mark, depth + 1);
}

void clinit_arc_scene_ui_Slider$SliderStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_ProgressBar$ProgressBarStyle(ctx);
}

void init_arc_scene_ui_Slider$SliderStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider$SliderStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Slider$SliderStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(192);
	init_arc_scene_ui_ProgressBar$ProgressBarStyle(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Slider$SliderStyle[] {
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
	{ "knobOver", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Slider$SliderStyle, F_knobOver), "Larc/scene/style/Drawable;", 1 },
	{ "knobDown", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Slider$SliderStyle, F_knobDown), "Larc/scene/style/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Slider$SliderStyle, 0, "()V", 1 },
};

Class class_arc_scene_ui_Slider$SliderStyle{
		.nativeName = (intptr_t) "arc/scene/ui/Slider$SliderStyle",
		.parentClass = (intptr_t) &class_arc_scene_ui_ProgressBar$ProgressBarStyle,
		.size = sizeof(arc_scene_ui_Slider$SliderStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Slider$SliderStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Slider$SliderStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Slider$SliderStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_Slider,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Slider$SliderStyle = registerClass(&class_arc_scene_ui_Slider$SliderStyle);

}

