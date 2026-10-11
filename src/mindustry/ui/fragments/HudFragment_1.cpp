#include "mindustry/ui/fragments/HudFragment_1.h"
#include "mindustry/world/Block.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ui/fragments/HudFragment_1.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "mindustry/core/Control.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/Vars.h"
#include "mindustry/input/InputHandler.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_mindustry_ui_fragments_HudFragment$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_HudFragment$1 *) object;
	if (self->F_val$block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$block)->clazz)->markFunction)((jobject) self->F_val$block, mark, depth + 1);
	if (self->F_val$blockSelection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$blockSelection)->clazz)->markFunction)((jobject) self->F_val$blockSelection, mark, depth + 1);
	if (self->F_val$searchText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$searchText)->clazz)->markFunction)((jobject) self->F_val$searchText, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_HudFragment$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ClickListener(ctx);
}

void init_mindustry_ui_fragments_HudFragment$1_mindustry_ui_fragments_HudFragment_mindustry_world_Block_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment$1:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(187);
	((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$block = (jref) (frame[2].o);
	((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$blockSelection = (jref) (frame[3].o);
	((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$searchText = (jref) (frame[4].o);
	((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ClickListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment$1_clicked_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment$1:clicked", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(190);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment$1_getTapCount_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment$1_getTapCount_R_int])(ctx, (frame[0].o));
	if (temp0 != (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeOre;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_removeWall;
	if (sp[0].o != sp[1].o) goto label_4;
	}
label_3:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$block;
	SM_mindustry_ui_fragments_HudFragment_toggleFavorite_mindustry_world_Block(ctx, sp[0].o);
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$blockSelection;
	sp[2].o = (jobject)((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$searchText;
	((func_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_rebuildBlockSelection_arc_scene_ui_layout_Table_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(194);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[1].o = (jobject)((mindustry_ui_fragments_HudFragment$1 *) NULL_CHECK((frame[0].o)))->F_val$block;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_HudFragment$1[] {
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
	(void *) M_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_event_ClickListener_cancel,
	(void *) M_mindustry_ui_fragments_HudFragment$1_clicked_arc_scene_event_InputEvent_float_float,
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
	{ "val$block", &class_mindustry_world_Block, offsetof(mindustry_ui_fragments_HudFragment$1, F_val$block), "Lmindustry/world/Block;", 4112 },
	{ "val$blockSelection", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_HudFragment$1, F_val$blockSelection), "Larc/scene/ui/layout/Table;", 4112 },
	{ "val$searchText", &class_java_lang_String, offsetof(mindustry_ui_fragments_HudFragment$1, F_val$searchText), "Ljava/lang/String;", 4112 },
	{ "this$0", &class_mindustry_ui_fragments_HudFragment, offsetof(mindustry_ui_fragments_HudFragment$1, F_this$0), "Lmindustry/ui/fragments/HudFragment;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_HudFragment$1_mindustry_ui_fragments_HudFragment_mindustry_world_Block_arc_scene_ui_layout_Table_java_lang_String, 0, "(Lmindustry/ui/fragments/HudFragment;Lmindustry/world/Block;Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 0 },
	{ "clicked", (intptr_t) M_mindustry_ui_fragments_HudFragment$1_clicked_arc_scene_event_InputEvent_float_float, VTABLE_mindustry_ui_fragments_HudFragment$1_clicked_arc_scene_event_InputEvent_float_float, "(Larc/scene/event/InputEvent;FF)V", 1 },
};

Class class_mindustry_ui_fragments_HudFragment$1{
		.nativeName = (intptr_t) "mindustry/ui/fragments/HudFragment$1",
		.parentClass = (intptr_t) &class_arc_scene_event_ClickListener,
		.size = sizeof(mindustry_ui_fragments_HudFragment$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_HudFragment$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_HudFragment$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_HudFragment$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_HudFragment$1 = registerClass(&class_mindustry_ui_fragments_HudFragment$1);

}

