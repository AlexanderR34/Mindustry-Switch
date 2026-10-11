#include "mindustry/ui/fragments/BlockInventoryFragment_1.h"
#include "mindustry/ui/fragments/BlockInventoryFragment.h"
#include "java/lang/Object.h"
#include "arc/func/Boolp.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/fragments/BlockInventoryFragment_1.h"
#include "mindustry/type/Item.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"
#include "mindustry/world/modules/ItemModule.h"
#include "arc/input/KeyCode.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_ui_fragments_BlockInventoryFragment$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_ClickListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_fragments_BlockInventoryFragment$1 *) object;
	if (self->F_val$validClick)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$validClick)->clazz)->markFunction)((jobject) self->F_val$validClick, mark, depth + 1);
	if (self->F_val$item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$item)->clazz)->markFunction)((jobject) self->F_val$item, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_BlockInventoryFragment$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ClickListener(ctx);
}

void init_mindustry_ui_fragments_BlockInventoryFragment$1_mindustry_ui_fragments_BlockInventoryFragment_arc_func_Boolp_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment$1:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_BlockInventoryFragment$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(171);
	((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$validClick = (jref) (frame[2].o);
	((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$item = (jref) (frame[3].o);
	((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ClickListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_BlockInventoryFragment$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment$1:touchDown", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_held = (jint(0));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$validClick;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$item;
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_lastItem = (jref) sp[1].o;
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_holding = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)M_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockInventoryFragment$1_clicked_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment$1:clicked", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$validClick;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_held) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[1].o))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_items;
	sp[2].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$item;
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[2].o))->F_lastItem = (jref) sp[3].o;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[1].o, sp[3].o);
	((func_mindustry_ui_fragments_BlockInventoryFragment_takeItem_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_takeItem_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockInventoryFragment$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment$1:touchUp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(194);
	M_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_holding = (jint(0));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_lastItem = (jref) (jobject(nullptr));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_BlockInventoryFragment$1[] {
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
	(void *) M_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_event_ClickListener_cancel,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment$1_clicked_arc_scene_event_InputEvent_float_float,
	(void *) M_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_inTapSquare_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_inTapSquare_R_boolean,
	(void *) M_arc_scene_event_ClickListener_invalidateTapSquare,
	(void *) M_arc_scene_event_ClickListener_isPressed_R_boolean,
	(void *) M_arc_scene_event_ClickListener_isVisualPressed_R_boolean,
	(void *) M_arc_scene_event_ClickListener_isOver_R_boolean,
	(void *) M_arc_scene_event_ClickListener_getTapSquareSize_R_float,
	(void *) M_arc_scene_event_ClickListener_setTapSquareSize_float,
	(void *) M_arc_scene_event_ClickListener_setTapCountInterval_float,
	(void *) M_arc_scene_event_ClickListener_getTapCount_R_int,
	(void *) M_arc_scene_event_ClickListener_setTapCount_int,
	(void *) M_arc_scene_event_ClickListener_getTouchDownX_R_float,
	(void *) M_arc_scene_event_ClickListener_getTouchDownY_R_float,
	(void *) M_arc_scene_event_ClickListener_getPressedButton_R_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_getPressedPointer_R_int,
	(void *) M_arc_scene_event_ClickListener_getButton_R_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_setButton_arc_input_KeyCode,
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
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchDragged", "(Larc/scene/event/InputEvent;FFI)V" },
	{ "mouseMoved", "(Larc/scene/event/InputEvent;FF)Z" },
	{ "enter", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "exit", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "scrolled", "(Larc/scene/event/InputEvent;FFFF)Z" },
	{ "keyDown", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(Larc/scene/event/InputEvent;C)Z" },
	{ "cancel", "()V" },
	{ "clicked", "(Larc/scene/event/InputEvent;FF)V" },
	{ "isOver", "(Larc/scene/Element;FF)Z" },
	{ "inTapSquare", "(FF)Z" },
	{ "inTapSquare", "()Z" },
	{ "invalidateTapSquare", "()V" },
	{ "isPressed", "()Z" },
	{ "isVisualPressed", "()Z" },
	{ "isOver", "()Z" },
	{ "getTapSquareSize", "()F" },
	{ "setTapSquareSize", "(F)V" },
	{ "setTapCountInterval", "(F)V" },
	{ "getTapCount", "()I" },
	{ "setTapCount", "(I)V" },
	{ "getTouchDownX", "()F" },
	{ "getTouchDownY", "()F" },
	{ "getPressedButton", "()Larc/input/KeyCode;" },
	{ "getPressedPointer", "()I" },
	{ "getButton", "()Larc/input/KeyCode;" },
	{ "setButton", "(Larc/input/KeyCode;)V" },
};

static FieldMetadata fields[] {
	{ "val$validClick", &class_arc_func_Boolp, offsetof(mindustry_ui_fragments_BlockInventoryFragment$1, F_val$validClick), "Larc/func/Boolp;", 4112 },
	{ "val$item", &class_mindustry_type_Item, offsetof(mindustry_ui_fragments_BlockInventoryFragment$1, F_val$item), "Lmindustry/type/Item;", 4112 },
	{ "this$0", &class_mindustry_ui_fragments_BlockInventoryFragment, offsetof(mindustry_ui_fragments_BlockInventoryFragment$1, F_this$0), "Lmindustry/ui/fragments/BlockInventoryFragment;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_BlockInventoryFragment$1_mindustry_ui_fragments_BlockInventoryFragment_arc_func_Boolp_mindustry_type_Item, 0, "(Lmindustry/ui/fragments/BlockInventoryFragment;Larc/func/Boolp;Lmindustry/type/Item;)V", 0 },
	{ "touchDown", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_ui_fragments_BlockInventoryFragment$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "clicked", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment$1_clicked_arc_scene_event_InputEvent_float_float, VTABLE_mindustry_ui_fragments_BlockInventoryFragment$1_clicked_arc_scene_event_InputEvent_float_float, "(Larc/scene/event/InputEvent;FF)V", 1 },
	{ "touchUp", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_ui_fragments_BlockInventoryFragment$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
};

Class class_mindustry_ui_fragments_BlockInventoryFragment$1{
		.nativeName = (intptr_t) "mindustry/ui/fragments/BlockInventoryFragment$1",
		.parentClass = (intptr_t) &class_arc_scene_event_ClickListener,
		.size = sizeof(mindustry_ui_fragments_BlockInventoryFragment$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_BlockInventoryFragment$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_BlockInventoryFragment$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_BlockInventoryFragment$1,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_BlockInventoryFragment$1 = registerClass(&class_mindustry_ui_fragments_BlockInventoryFragment$1);

}

