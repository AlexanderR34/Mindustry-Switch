#include "arc/scene/ui/TreeElement_TreeStyle.h"
#include "arc/scene/ui/TreeElement_TreeStyle.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TreeElement.h"
#include "arc/scene/style/Drawable.h"

extern "C" {


void mark_arc_scene_ui_TreeElement$TreeStyle(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_TreeElement$TreeStyle *) object;
	if (self->F_plus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plus)->clazz)->markFunction)((jobject) self->F_plus, mark, depth + 1);
	if (self->F_minus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minus)->clazz)->markFunction)((jobject) self->F_minus, mark, depth + 1);
	if (self->F_over)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_over)->clazz)->markFunction)((jobject) self->F_over, mark, depth + 1);
	if (self->F_selection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selection)->clazz)->markFunction)((jobject) self->F_selection, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
}

void clinit_arc_scene_ui_TreeElement$TreeStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_ui_TreeElement$TreeStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement$TreeStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(681);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(682);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_TreeElement$TreeStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeStyle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement$TreeStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(684);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(685);
	((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK((frame[0].o)))->F_plus = (jref) (frame[1].o);
	LINE_NUMBER(686);
	((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK((frame[0].o)))->F_minus = (jref) (frame[2].o);
	LINE_NUMBER(687);
	((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK((frame[0].o)))->F_selection = (jref) (frame[3].o);
	LINE_NUMBER(688);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_TreeElement$TreeStyle_arc_scene_ui_TreeElement$TreeStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement$TreeStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(690);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(691);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK((frame[1].o)))->F_plus;
	((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_plus = (jref) sp[1].o;
	LINE_NUMBER(692);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK((frame[1].o)))->F_minus;
	((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_minus = (jref) sp[1].o;
	LINE_NUMBER(693);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK((frame[1].o)))->F_selection;
	((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_selection = (jref) sp[1].o;
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TreeElement$TreeStyle[] {
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
	{ "plus", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TreeElement$TreeStyle, F_plus), "Larc/scene/style/Drawable;", 1 },
	{ "minus", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TreeElement$TreeStyle, F_minus), "Larc/scene/style/Drawable;", 1 },
	{ "over", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TreeElement$TreeStyle, F_over), "Larc/scene/style/Drawable;", 1 },
	{ "selection", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TreeElement$TreeStyle, F_selection), "Larc/scene/style/Drawable;", 1 },
	{ "background", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TreeElement$TreeStyle, F_background), "Larc/scene/style/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TreeElement$TreeStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_TreeElement$TreeStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;Larc/scene/style/Drawable;Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_TreeElement$TreeStyle_arc_scene_ui_TreeElement$TreeStyle, 0, "(Larc/scene/ui/TreeElement$TreeStyle;)V", 1 },
};

Class class_arc_scene_ui_TreeElement$TreeStyle{
		.nativeName = (intptr_t) "arc/scene/ui/TreeElement$TreeStyle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_ui_TreeElement$TreeStyle),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TreeElement$TreeStyle,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TreeElement$TreeStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TreeElement$TreeStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_TreeElement,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TreeElement$TreeStyle = registerClass(&class_arc_scene_ui_TreeElement$TreeStyle);

}

