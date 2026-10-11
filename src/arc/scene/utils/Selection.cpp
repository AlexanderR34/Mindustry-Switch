#include "arc/scene/utils/Selection.h"
#include "arc/Core.h"
#include "arc/func/Prov.h"
#include "java/util/Iterator.h"
#include "arc/Input.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"
#include "arc/scene/event/ChangeListener_ChangeEvent.h"
#include "java/lang/Object.h"
#include "arc/scene/utils/Disableable.h"
#include "arc/scene/Element.h"
#include "java/lang/String.h"
#include "arc/struct/OrderedSet_OrderedSetIterator.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "arc/struct/OrderedSet.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/Class.h"
#include "arc/scene/utils/Selection.h"
#include "java/lang/Throwable.h"
#include "arc/scene/utils/Selection_invoke_arc_func_Prov_0.h"

extern "C" {


void mark_arc_scene_utils_Selection(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_utils_Selection *) object;
	if (self->F_selected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selected)->clazz)->markFunction)((jobject) self->F_selected, mark, depth + 1);
	if (self->F_old)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_old)->clazz)->markFunction)((jobject) self->F_old, mark, depth + 1);
	if (self->F_lastSelected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSelected)->clazz)->markFunction)((jobject) self->F_lastSelected, mark, depth + 1);
	if (self->F_element)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_element)->clazz)->markFunction)((jobject) self->F_element, mark, depth + 1);
}

void clinit_arc_scene_utils_Selection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_utils_Selection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Selection(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedSet);
	init_arc_struct_OrderedSet(ctx, sp[1].o);
	((arc_scene_utils_Selection *) NULL_CHECK(sp[0].o))->F_selected = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedSet);
	init_arc_struct_OrderedSet(ctx, sp[1].o);
	((arc_scene_utils_Selection *) NULL_CHECK(sp[0].o))->F_old = (jref) sp[1].o;
	LINE_NUMBER(26);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_setActor_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:setActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_element = (jref) (frame[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_choose_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:choose", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[5]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	if ((frame[1].o) != nullptr) goto label_14;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(39);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_isDisabled) == 0) goto label_15;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(40);
	((func_arc_scene_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_snapshot])(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(42);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_toggle) != 0) goto label_16;
	}
	{
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_required) != 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) == (jint(1))) goto label_16;
	}
label_17:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_18
	}
label_16:;
	{
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_6; } // goto label_18
	}
	{
	LINE_NUMBER(43);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_required) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(61);
	((func_arc_scene_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_18; }
	if (bypasses[1]) { bypasses[1] = false; goto label_18; }
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(45);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	{ popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_12; } // goto label_22
	}
label_18:;
	{
	LINE_NUMBER(47);
	frame[2].i = (jint(0));
	LINE_NUMBER(48);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_multiple) == 0) goto label_24;
	}
	{
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_toggle) != 0) { popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_9; } // goto label_25
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_9; } // goto label_25
	}
label_24:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(61);
	((func_arc_scene_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_25; }
	if (bypasses[4]) { bypasses[4] = false; goto label_25; }
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_arc_struct_OrderedSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_clear])(ctx, sp[0].o);
	}
label_25:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(61);
	((func_arc_scene_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_22; }
	{
	LINE_NUMBER(54);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (frame[1].o);
	}
label_22:;
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)((func_arc_scene_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(57);
	((func_arc_scene_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_11;
	}
label_31:;
	{
	LINE_NUMBER(59);
	((func_arc_scene_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_11:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(61);
	((func_arc_scene_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(62);
	goto label_34;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(61);
	frame[3].o = sp[0].o;
	((func_arc_scene_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(62);
	throwException(ctx, (frame[3].o));	}
label_34:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_utils_Selection_hasItems_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:hasItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_utils_Selection_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_scene_utils_Selection_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	popStackFrame(ctx);
	return ((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_utils_Selection_items_R_arc_struct_OrderedSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:items", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_utils_Selection_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:first", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_first_R_java_lang_Object])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_snapshot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:snapshot", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_old;
	((func_arc_struct_OrderedSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_old;
	sp[1].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_arc_struct_OrderedSet_addAll_arc_struct_OrderedSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_addAll_arc_struct_OrderedSet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_revert(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:revert", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_arc_struct_OrderedSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[1].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_old;
	((func_arc_struct_OrderedSet_addAll_arc_struct_OrderedSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_addAll_arc_struct_OrderedSet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_cleanup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:cleanup", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_old;
	((func_arc_struct_OrderedSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_clear_int])(ctx, sp[0].o, (32));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_first_R_java_lang_Object])(ctx, sp[0].o);
	if (sp[0].o != (frame[1].o)) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(104);
	((func_arc_scene_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_arc_struct_OrderedSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(107);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_arc_scene_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(108);
	((func_arc_scene_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(110);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (frame[1].o);
	LINE_NUMBER(111);
	((func_arc_scene_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(113);
	((func_arc_scene_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_setAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:setAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	frame[2].i = (jint(0));
	LINE_NUMBER(118);
	((func_arc_scene_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(119);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_arc_struct_OrderedSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(121);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(123);
	if ((frame[5].o) != nullptr) goto label_10;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_11;
	}
	INST_ICONST(1);
	INST_ISTORE(2);
label_11:;
	{
	LINE_NUMBER(121);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(126);
	if ((frame[2].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(127);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_arc_scene_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(128);
	((func_arc_scene_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(129);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[1].o));
	((arc_scene_utils_Selection *) NULL_CHECK(sp[0].o))->F_lastSelected = (jref) sp[1].o;
	LINE_NUMBER(131);
	((func_arc_scene_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_12:;
	{
	LINE_NUMBER(134);
	((func_arc_scene_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(141);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_arc_scene_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(144);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (frame[1].o);
	LINE_NUMBER(145);
	((func_arc_scene_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_addAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:addAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(150);
	frame[2].i = (jint(0));
	LINE_NUMBER(151);
	((func_arc_scene_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(152);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(154);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	INST_ICONST(1);
	INST_ISTORE(2);
label_9:;
	{
	LINE_NUMBER(152);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(157);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(158);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_scene_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(159);
	((func_arc_scene_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[1].o));
	((arc_scene_utils_Selection *) NULL_CHECK(sp[0].o))->F_lastSelected = (jref) sp[1].o;
	LINE_NUMBER(162);
	((func_arc_scene_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(165);
	((func_arc_scene_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_remove_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(169);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(171);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_arc_scene_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(174);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	LINE_NUMBER(175);
	((func_arc_scene_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(177);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_removeAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:removeAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(180);
	frame[2].i = (jint(0));
	LINE_NUMBER(181);
	((func_arc_scene_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(182);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(184);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	INST_ICONST(1);
	INST_ISTORE(2);
label_9:;
	{
	LINE_NUMBER(182);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(187);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(188);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_scene_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(189);
	((func_arc_scene_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(191);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	LINE_NUMBER(192);
	((func_arc_scene_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(195);
	((func_arc_scene_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(200);
	((func_arc_scene_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_arc_struct_OrderedSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(202);
	if (((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_scene_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(203);
	((func_arc_scene_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(205);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	LINE_NUMBER(206);
	((func_arc_scene_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(208);
	((func_arc_scene_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_changed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:changed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_utils_Selection_fireChangeEvent_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:fireChangeEvent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(222);
	sp[0].o = ((jobject) &class_arc_scene_event_ChangeListener$ChangeEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_utils_Selection_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_utils_Selection_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_utils_Selection_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_event_ChangeListener$ChangeEvent, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_element;
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, sp[0].o, (frame[1].o));
	frame[2].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(226);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(226);
	frame[3].o = sp[0].o;
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(227);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jbool M_arc_scene_utils_Selection_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(231);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_utils_Selection_getLastSelected_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:getLastSelected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_utils_Selection_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_utils_Selection_toArray_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:toArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_OrderedSet$OrderedSetIterator_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet$OrderedSetIterator_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_utils_Selection_toArray_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_utils_Selection_isDisabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return ((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_isDisabled);
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_setDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(265);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_isDisabled = (frame[1].i);
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_utils_Selection_getToggle_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:getToggle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return ((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_toggle);
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_setToggle_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:setToggle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(274);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_toggle = (frame[1].i);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_utils_Selection_getMultiple_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:getMultiple", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return ((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_multiple);
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_setMultiple_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:setMultiple", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(283);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_multiple = (frame[1].i);
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_utils_Selection_getRequired_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:getRequired", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return ((jint)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_required);
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_setRequired_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:setRequired", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(292);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_required = (frame[1].i);
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_utils_Selection_setProgrammaticChangeEvents_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:setProgrammaticChangeEvents", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(297);
	((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents = (frame[1].i);
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_utils_Selection_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Selection:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((arc_scene_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_utils_Selection[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_utils_Selection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_utils_Selection_isDisabled_R_boolean,
	(void *) M_arc_scene_utils_Selection_setDisabled_boolean,
	(void *) M_arc_scene_utils_Selection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_scene_utils_Selection_setActor_arc_scene_Element,
	(void *) M_arc_scene_utils_Selection_choose_java_lang_Object,
	(void *) M_arc_scene_utils_Selection_hasItems_R_boolean,
	(void *) M_arc_scene_utils_Selection_isEmpty_R_boolean,
	(void *) M_arc_scene_utils_Selection_size_R_int,
	(void *) M_arc_scene_utils_Selection_items_R_arc_struct_OrderedSet,
	(void *) M_arc_scene_utils_Selection_first_R_java_lang_Object,
	(void *) M_arc_scene_utils_Selection_snapshot,
	(void *) M_arc_scene_utils_Selection_revert,
	(void *) M_arc_scene_utils_Selection_cleanup,
	(void *) M_arc_scene_utils_Selection_set_java_lang_Object,
	(void *) M_arc_scene_utils_Selection_setAll_arc_struct_Seq,
	(void *) M_arc_scene_utils_Selection_add_java_lang_Object,
	(void *) M_arc_scene_utils_Selection_addAll_arc_struct_Seq,
	(void *) M_arc_scene_utils_Selection_remove_java_lang_Object,
	(void *) M_arc_scene_utils_Selection_removeAll_arc_struct_Seq,
	(void *) M_arc_scene_utils_Selection_clear,
	(void *) M_arc_scene_utils_Selection_changed,
	(void *) M_arc_scene_utils_Selection_fireChangeEvent_R_boolean,
	(void *) M_arc_scene_utils_Selection_contains_java_lang_Object_R_boolean,
	(void *) M_arc_scene_utils_Selection_getLastSelected_R_java_lang_Object,
	(void *) M_arc_scene_utils_Selection_toArray_R_arc_struct_Seq,
	(void *) M_arc_scene_utils_Selection_toArray_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_scene_utils_Selection_getToggle_R_boolean,
	(void *) M_arc_scene_utils_Selection_setToggle_boolean,
	(void *) M_arc_scene_utils_Selection_getMultiple_R_boolean,
	(void *) M_arc_scene_utils_Selection_setMultiple_boolean,
	(void *) M_arc_scene_utils_Selection_getRequired_R_boolean,
	(void *) M_arc_scene_utils_Selection_setRequired_boolean,
	(void *) M_arc_scene_utils_Selection_setProgrammaticChangeEvents_boolean,
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
	{ "isDisabled", "()Z" },
	{ "setDisabled", "(Z)V" },
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "setActor", "(Larc/scene/Element;)V" },
	{ "choose", "(Ljava/lang/Object;)V" },
	{ "hasItems", "()Z" },
	{ "isEmpty", "()Z" },
	{ "size", "()I" },
	{ "items", "()Larc/struct/OrderedSet;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "snapshot", "()V" },
	{ "revert", "()V" },
	{ "cleanup", "()V" },
	{ "set", "(Ljava/lang/Object;)V" },
	{ "setAll", "(Larc/struct/Seq;)V" },
	{ "add", "(Ljava/lang/Object;)V" },
	{ "addAll", "(Larc/struct/Seq;)V" },
	{ "remove", "(Ljava/lang/Object;)V" },
	{ "removeAll", "(Larc/struct/Seq;)V" },
	{ "clear", "()V" },
	{ "changed", "()V" },
	{ "fireChangeEvent", "()Z" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "getLastSelected", "()Ljava/lang/Object;" },
	{ "toArray", "()Larc/struct/Seq;" },
	{ "toArray", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "getToggle", "()Z" },
	{ "setToggle", "(Z)V" },
	{ "getMultiple", "()Z" },
	{ "setMultiple", "(Z)V" },
	{ "getRequired", "()Z" },
	{ "setRequired", "(Z)V" },
	{ "setProgrammaticChangeEvents", "(Z)V" },
};

static jclass interfaces[] { &class_arc_scene_utils_Disableable, &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "selected", &class_arc_struct_OrderedSet, offsetof(arc_scene_utils_Selection, F_selected), "Larc/struct/OrderedSet;", 16 },
	{ "old", &class_arc_struct_OrderedSet, offsetof(arc_scene_utils_Selection, F_old), "Larc/struct/OrderedSet;", 18 },
	{ "isDisabled", &class_boolean, offsetof(arc_scene_utils_Selection, F_isDisabled), "Z", 0 },
	{ "multiple", &class_boolean, offsetof(arc_scene_utils_Selection, F_multiple), "Z", 0 },
	{ "required", &class_boolean, offsetof(arc_scene_utils_Selection, F_required), "Z", 0 },
	{ "lastSelected", &class_java_lang_Object, offsetof(arc_scene_utils_Selection, F_lastSelected), "Ljava/lang/Object;", 0 },
	{ "element", &class_arc_scene_Element, offsetof(arc_scene_utils_Selection, F_element), "Larc/scene/Element;", 2 },
	{ "toggle", &class_boolean, offsetof(arc_scene_utils_Selection, F_toggle), "Z", 2 },
	{ "programmaticChangeEvents", &class_boolean, offsetof(arc_scene_utils_Selection, F_programmaticChangeEvents), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_utils_Selection, 0, "()V", 1 },
	{ "setActor", (intptr_t) M_arc_scene_utils_Selection_setActor_arc_scene_Element, VTABLE_arc_scene_utils_Selection_setActor_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "choose", (intptr_t) M_arc_scene_utils_Selection_choose_java_lang_Object, VTABLE_arc_scene_utils_Selection_choose_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "hasItems", (intptr_t) M_arc_scene_utils_Selection_hasItems_R_boolean, VTABLE_arc_scene_utils_Selection_hasItems_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_arc_scene_utils_Selection_isEmpty_R_boolean, VTABLE_arc_scene_utils_Selection_isEmpty_R_boolean, "()Z", 1 },
	{ "size", (intptr_t) M_arc_scene_utils_Selection_size_R_int, VTABLE_arc_scene_utils_Selection_size_R_int, "()I", 1 },
	{ "items", (intptr_t) M_arc_scene_utils_Selection_items_R_arc_struct_OrderedSet, VTABLE_arc_scene_utils_Selection_items_R_arc_struct_OrderedSet, "()Larc/struct/OrderedSet;", 1 },
	{ "first", (intptr_t) M_arc_scene_utils_Selection_first_R_java_lang_Object, VTABLE_arc_scene_utils_Selection_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "snapshot", (intptr_t) M_arc_scene_utils_Selection_snapshot, VTABLE_arc_scene_utils_Selection_snapshot, "()V", 0 },
	{ "revert", (intptr_t) M_arc_scene_utils_Selection_revert, VTABLE_arc_scene_utils_Selection_revert, "()V", 0 },
	{ "cleanup", (intptr_t) M_arc_scene_utils_Selection_cleanup, VTABLE_arc_scene_utils_Selection_cleanup, "()V", 0 },
	{ "set", (intptr_t) M_arc_scene_utils_Selection_set_java_lang_Object, VTABLE_arc_scene_utils_Selection_set_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "setAll", (intptr_t) M_arc_scene_utils_Selection_setAll_arc_struct_Seq, VTABLE_arc_scene_utils_Selection_setAll_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "add", (intptr_t) M_arc_scene_utils_Selection_add_java_lang_Object, VTABLE_arc_scene_utils_Selection_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "addAll", (intptr_t) M_arc_scene_utils_Selection_addAll_arc_struct_Seq, VTABLE_arc_scene_utils_Selection_addAll_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "remove", (intptr_t) M_arc_scene_utils_Selection_remove_java_lang_Object, VTABLE_arc_scene_utils_Selection_remove_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "removeAll", (intptr_t) M_arc_scene_utils_Selection_removeAll_arc_struct_Seq, VTABLE_arc_scene_utils_Selection_removeAll_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "clear", (intptr_t) M_arc_scene_utils_Selection_clear, VTABLE_arc_scene_utils_Selection_clear, "()V", 1 },
	{ "changed", (intptr_t) M_arc_scene_utils_Selection_changed, VTABLE_arc_scene_utils_Selection_changed, "()V", 4 },
	{ "fireChangeEvent", (intptr_t) M_arc_scene_utils_Selection_fireChangeEvent_R_boolean, VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean, "()Z", 1 },
	{ "contains", (intptr_t) M_arc_scene_utils_Selection_contains_java_lang_Object_R_boolean, VTABLE_arc_scene_utils_Selection_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getLastSelected", (intptr_t) M_arc_scene_utils_Selection_getLastSelected_R_java_lang_Object, VTABLE_arc_scene_utils_Selection_getLastSelected_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_arc_scene_utils_Selection_iterator_R_java_util_Iterator, VTABLE_arc_scene_utils_Selection_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "toArray", (intptr_t) M_arc_scene_utils_Selection_toArray_R_arc_struct_Seq, VTABLE_arc_scene_utils_Selection_toArray_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "toArray", (intptr_t) M_arc_scene_utils_Selection_toArray_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_scene_utils_Selection_toArray_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "isDisabled", (intptr_t) M_arc_scene_utils_Selection_isDisabled_R_boolean, VTABLE_arc_scene_utils_Selection_isDisabled_R_boolean, "()Z", 1 },
	{ "setDisabled", (intptr_t) M_arc_scene_utils_Selection_setDisabled_boolean, VTABLE_arc_scene_utils_Selection_setDisabled_boolean, "(Z)V", 1 },
	{ "getToggle", (intptr_t) M_arc_scene_utils_Selection_getToggle_R_boolean, VTABLE_arc_scene_utils_Selection_getToggle_R_boolean, "()Z", 1 },
	{ "setToggle", (intptr_t) M_arc_scene_utils_Selection_setToggle_boolean, VTABLE_arc_scene_utils_Selection_setToggle_boolean, "(Z)V", 1 },
	{ "getMultiple", (intptr_t) M_arc_scene_utils_Selection_getMultiple_R_boolean, VTABLE_arc_scene_utils_Selection_getMultiple_R_boolean, "()Z", 1 },
	{ "setMultiple", (intptr_t) M_arc_scene_utils_Selection_setMultiple_boolean, VTABLE_arc_scene_utils_Selection_setMultiple_boolean, "(Z)V", 1 },
	{ "getRequired", (intptr_t) M_arc_scene_utils_Selection_getRequired_R_boolean, VTABLE_arc_scene_utils_Selection_getRequired_R_boolean, "()Z", 1 },
	{ "setRequired", (intptr_t) M_arc_scene_utils_Selection_setRequired_boolean, VTABLE_arc_scene_utils_Selection_setRequired_boolean, "(Z)V", 1 },
	{ "setProgrammaticChangeEvents", (intptr_t) M_arc_scene_utils_Selection_setProgrammaticChangeEvents_boolean, VTABLE_arc_scene_utils_Selection_setProgrammaticChangeEvents_boolean, "(Z)V", 1 },
	{ "toString", (intptr_t) M_arc_scene_utils_Selection_toString_R_java_lang_String, VTABLE_arc_scene_utils_Selection_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_scene_utils_Selection{
		.nativeName = (intptr_t) "arc/scene/utils/Selection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_utils_Selection),
		.classVtable = (intptr_t) vtable_arc_scene_utils_Selection,
		.staticInitializer = (intptr_t) clinit_arc_scene_utils_Selection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_utils_Selection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 35,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 46,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_utils_Selection = registerClass(&class_arc_scene_utils_Selection);

}
