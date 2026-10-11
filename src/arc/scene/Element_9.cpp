#include "arc/scene/Element_9.h"
#include "arc/scene/event/ChangeListener.h"
#include "arc/scene/event/ChangeListener_ChangeEvent.h"
#include "arc/scene/Element.h"
#include "arc/scene/utils/Disableable.h"
#include "java/lang/Object.h"
#include "arc/scene/Element_9.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_scene_Element$9(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_ChangeListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_Element$9 *) object;
	if (self->F_val$elem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$elem)->clazz)->markFunction)((jobject) self->F_val$elem, mark, depth + 1);
	if (self->F_val$r)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$r)->clazz)->markFunction)((jobject) self->F_val$r, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_Element$9(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ChangeListener(ctx);
}

void init_arc_scene_Element$9_arc_scene_Element_arc_scene_Element_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element$9:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Element$9(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(985);
	((arc_scene_Element$9 *) NULL_CHECK((frame[0].o)))->F_val$elem = (jref) (frame[2].o);
	((arc_scene_Element$9 *) NULL_CHECK((frame[0].o)))->F_val$r = (jref) (frame[3].o);
	((arc_scene_Element$9 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ChangeListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element$9_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element$9:changed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(988);
	sp[0].o = (jobject)((arc_scene_Element$9 *) NULL_CHECK((frame[0].o)))->F_val$elem;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_utils_Disableable)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element$9 *) NULL_CHECK((frame[0].o)))->F_val$elem;
	jint temp0 = (jint)((func_arc_scene_utils_Disableable_isDisabled_R_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_utils_Disableable, INDEX_arc_scene_utils_Disableable_isDisabled_R_boolean, (checkCast(ctx, &class_arc_scene_utils_Disableable, sp[0].o))))(ctx, (checkCast(ctx, &class_arc_scene_utils_Disableable, sp[0].o)));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_Element$9 *) NULL_CHECK((frame[0].o)))->F_val$r;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(989);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_Element$9[] {
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
	(void *) M_arc_scene_event_ChangeListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element$9_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element,
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
	{ "handle", "(Larc/scene/event/SceneEvent;)Z" },
	{ "changed", "(Larc/scene/event/ChangeListener$ChangeEvent;Larc/scene/Element;)V" },
};

static FieldMetadata fields[] {
	{ "val$elem", &class_arc_scene_Element, offsetof(arc_scene_Element$9, F_val$elem), "Larc/scene/Element;", 4112 },
	{ "val$r", &class_java_lang_Runnable, offsetof(arc_scene_Element$9, F_val$r), "Ljava/lang/Runnable;", 4112 },
	{ "this$0", &class_arc_scene_Element, offsetof(arc_scene_Element$9, F_this$0), "Larc/scene/Element;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_Element$9_arc_scene_Element_arc_scene_Element_java_lang_Runnable, 0, "(Larc/scene/Element;Larc/scene/Element;Ljava/lang/Runnable;)V", 0 },
	{ "changed", (intptr_t) M_arc_scene_Element$9_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element, VTABLE_arc_scene_Element$9_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element, "(Larc/scene/event/ChangeListener$ChangeEvent;Larc/scene/Element;)V", 1 },
};

Class class_arc_scene_Element$9{
		.nativeName = (intptr_t) "arc/scene/Element$9",
		.parentClass = (intptr_t) &class_arc_scene_event_ChangeListener,
		.size = sizeof(arc_scene_Element$9),
		.classVtable = (intptr_t) vtable_arc_scene_Element$9,
		.staticInitializer = (intptr_t) clinit_arc_scene_Element$9,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_Element$9,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_Element$9 = registerClass(&class_arc_scene_Element$9);

}

