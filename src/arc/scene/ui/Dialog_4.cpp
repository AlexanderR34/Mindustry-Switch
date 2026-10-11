#include "arc/scene/ui/Dialog_4.h"
#include "arc/scene/Scene.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/Group.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/ui/Dialog_4.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/struct/Seq.h"
#include "arc/scene/event/FocusListener.h"
#include "arc/struct/SnapshotSeq.h"
#include "arc/scene/event/FocusListener_FocusEvent.h"

extern "C" {


void mark_arc_scene_ui_Dialog$4(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_FocusListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_Dialog$4 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_Dialog$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_FocusListener(ctx);
}

void init_arc_scene_ui_Dialog$4_arc_scene_ui_Dialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$4:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	((arc_scene_ui_Dialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_FocusListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog$4_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$4:keyboardFocusChanged", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(219);
	if ((frame[3].i) != 0) goto label_1;
	}
	{
	M_arc_scene_ui_Dialog$4_focusChanged_arc_scene_event_FocusListener$FocusEvent(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog$4_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$4:scrollFocusChanged", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(224);
	if ((frame[3].i) != 0) goto label_1;
	}
	{
	M_arc_scene_ui_Dialog$4_focusChanged_arc_scene_event_FocusListener$FocusEvent(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(225);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog$4_focusChanged_arc_scene_event_FocusListener$FocusEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$4:focusChanged", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(229);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_isModal) == 0) goto label_2;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_2;
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[2].o)))->F_root;
	sp[0].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[2].o)))->F_root;
	LINE_NUMBER(230);
	sp[0].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_scene_ui_Dialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[1].o)))->F_relatedActor;
	frame[3].o = sp[0].o;
	LINE_NUMBER(232);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[1].o))->F_previousKeyboardFocus;
	LINE_NUMBER(233);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_scene_ui_Dialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[1].o))->F_previousScrollFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(234);
	((func_arc_scene_event_FocusListener$FocusEvent_cancel) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_event_FocusListener$FocusEvent_cancel])(ctx, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Dialog$4[] {
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
	(void *) M_arc_scene_event_FocusListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_ui_Dialog$4_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean,
	(void *) M_arc_scene_ui_Dialog$4_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean,
	(void *) M_arc_scene_ui_Dialog$4_focusChanged_arc_scene_event_FocusListener$FocusEvent,
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
	{ "keyboardFocusChanged", "(Larc/scene/event/FocusListener$FocusEvent;Larc/scene/Element;Z)V" },
	{ "scrollFocusChanged", "(Larc/scene/event/FocusListener$FocusEvent;Larc/scene/Element;Z)V" },
	{ "focusChanged", "(Larc/scene/event/FocusListener$FocusEvent;)V" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_arc_scene_ui_Dialog, offsetof(arc_scene_ui_Dialog$4, F_this$0), "Larc/scene/ui/Dialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Dialog$4_arc_scene_ui_Dialog, 0, "(Larc/scene/ui/Dialog;)V", 0 },
	{ "keyboardFocusChanged", (intptr_t) M_arc_scene_ui_Dialog$4_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean, VTABLE_arc_scene_ui_Dialog$4_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean, "(Larc/scene/event/FocusListener$FocusEvent;Larc/scene/Element;Z)V", 1 },
	{ "scrollFocusChanged", (intptr_t) M_arc_scene_ui_Dialog$4_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean, VTABLE_arc_scene_ui_Dialog$4_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean, "(Larc/scene/event/FocusListener$FocusEvent;Larc/scene/Element;Z)V", 1 },
	{ "focusChanged", (intptr_t) M_arc_scene_ui_Dialog$4_focusChanged_arc_scene_event_FocusListener$FocusEvent, VTABLE_arc_scene_ui_Dialog$4_focusChanged_arc_scene_event_FocusListener$FocusEvent, "(Larc/scene/event/FocusListener$FocusEvent;)V", 2 },
};

Class class_arc_scene_ui_Dialog$4{
		.nativeName = (intptr_t) "arc/scene/ui/Dialog$4",
		.parentClass = (intptr_t) &class_arc_scene_event_FocusListener,
		.size = sizeof(arc_scene_ui_Dialog$4),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Dialog$4,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Dialog$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Dialog$4,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Dialog$4 = registerClass(&class_arc_scene_ui_Dialog$4);

}

