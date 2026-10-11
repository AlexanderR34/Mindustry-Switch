#include "arc/input/KeyboardDevice.h"
#include "arc/struct/IntSet.h"
#include "java/lang/Object.h"
#include "arc/input/InputProcessor.h"
#include "arc/struct/IntFloatMap.h"
#include "java/lang/Enum.h"
#include "arc/input/KeyboardDevice.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_input_KeyboardDevice(jobject object, jint mark, jint depth) {
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
	auto self = (arc_input_KeyboardDevice *) object;
	if (self->F_pressed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pressed)->clazz)->markFunction)((jobject) self->F_pressed, mark, depth + 1);
	if (self->F_justReleased)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_justReleased)->clazz)->markFunction)((jobject) self->F_justReleased, mark, depth + 1);
	if (self->F_lastFramePressed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastFramePressed)->clazz)->markFunction)((jobject) self->F_lastFramePressed, mark, depth + 1);
	if (self->F_justPressed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_justPressed)->clazz)->markFunction)((jobject) self->F_justPressed, mark, depth + 1);
	if (self->F_axes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_axes)->clazz)->markFunction)((jobject) self->F_axes, mark, depth + 1);
}

void clinit_arc_input_KeyboardDevice(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_input_KeyboardDevice(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyboardDevice(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(6);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((arc_input_KeyboardDevice *) NULL_CHECK(sp[0].o))->F_pressed = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((arc_input_KeyboardDevice *) NULL_CHECK(sp[0].o))->F_justReleased = (jref) sp[1].o;
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((arc_input_KeyboardDevice *) NULL_CHECK(sp[0].o))->F_lastFramePressed = (jref) sp[1].o;
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((arc_input_KeyboardDevice *) NULL_CHECK(sp[0].o))->F_justPressed = (jref) sp[1].o;
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap);
	init_arc_struct_IntFloatMap(ctx, sp[1].o);
	((arc_input_KeyboardDevice *) NULL_CHECK(sp[0].o))->F_axes = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_KeyboardDevice_postUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:postUpdate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_lastFramePressed;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(13);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_lastFramePressed;
	sp[1].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_pressed;
	((func_arc_struct_IntSet_addAll_arc_struct_IntSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_addAll_arc_struct_IntSet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(14);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_justPressed;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(15);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_justReleased;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(16);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_axes;
	((func_arc_struct_IntFloatMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:isPressed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[1].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_anyKey;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_pressed;
	if (((jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_pressed;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:isTapped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_justPressed;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:isReleased", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_justReleased;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat M_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:getAxis", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_axes;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_struct_IntFloatMap_get_int_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_float_R_float])(ctx, sp[0].o, temp0, (jfloat(0)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_KeyboardDevice_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:keyDown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_pressed;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_justPressed;
	jint temp2 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp2);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_KeyboardDevice_keyUp_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:keyUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_pressed;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_remove_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_remove_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_justReleased;
	jint temp2 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp2);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_KeyboardDevice_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:touchDown", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(53);
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_KeyboardDevice_keyDown_arc_input_KeyCode_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_KeyboardDevice_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:touchUp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(59);
	if ((frame[3].i) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_keyUp_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_KeyboardDevice_keyUp_arc_input_KeyCode_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	}
label_1:;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_KeyboardDevice_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyboardDevice:scrolled", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_input_KeyboardDevice *) NULL_CHECK((frame[0].o)))->F_axes;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_scroll;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, sp[1].o);
	((func_arc_struct_IntFloatMap_put_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_put_int_float])(ctx, sp[0].o, temp0, (-(frame[2].f)));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_input_KeyboardDevice[] {
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
	(void *) M_arc_input_KeyboardDevice_keyDown_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_KeyboardDevice_keyUp_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_keyTyped_char_R_boolean,
	(void *) M_arc_input_KeyboardDevice_touchDown_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_KeyboardDevice_touchUp_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean,
	(void *) M_arc_input_InputProcessor_mouseMoved_int_int_R_boolean,
	(void *) M_arc_input_KeyboardDevice_scrolled_float_float_R_boolean,
	(void *) M_arc_input_KeyboardDevice_postUpdate,
	(void *) M_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float,
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
	{ "keyDown", "(Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIILarc/input/KeyCode;)Z" },
	{ "touchUp", "(IIILarc/input/KeyCode;)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
	{ "postUpdate", "()V" },
	{ "isPressed", "(Larc/input/KeyCode;)Z" },
	{ "isTapped", "(Larc/input/KeyCode;)Z" },
	{ "isReleased", "(Larc/input/KeyCode;)Z" },
	{ "getAxis", "(Larc/input/KeyCode;)F" },
};

static jclass interfaces[] { &class_arc_input_InputProcessor, };

static FieldMetadata fields[] {
	{ "pressed", &class_arc_struct_IntSet, offsetof(arc_input_KeyboardDevice, F_pressed), "Larc/struct/IntSet;", 18 },
	{ "justReleased", &class_arc_struct_IntSet, offsetof(arc_input_KeyboardDevice, F_justReleased), "Larc/struct/IntSet;", 18 },
	{ "lastFramePressed", &class_arc_struct_IntSet, offsetof(arc_input_KeyboardDevice, F_lastFramePressed), "Larc/struct/IntSet;", 18 },
	{ "justPressed", &class_arc_struct_IntSet, offsetof(arc_input_KeyboardDevice, F_justPressed), "Larc/struct/IntSet;", 18 },
	{ "axes", &class_arc_struct_IntFloatMap, offsetof(arc_input_KeyboardDevice, F_axes), "Larc/struct/IntFloatMap;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_input_KeyboardDevice, 0, "()V", 1 },
	{ "postUpdate", (intptr_t) M_arc_input_KeyboardDevice_postUpdate, VTABLE_arc_input_KeyboardDevice_postUpdate, "()V", 1 },
	{ "isPressed", (intptr_t) M_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean, VTABLE_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "isTapped", (intptr_t) M_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean, VTABLE_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "isReleased", (intptr_t) M_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean, VTABLE_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "getAxis", (intptr_t) M_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float, VTABLE_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float, "(Larc/input/KeyCode;)F", 1 },
	{ "keyDown", (intptr_t) M_arc_input_KeyboardDevice_keyDown_arc_input_KeyCode_R_boolean, VTABLE_arc_input_KeyboardDevice_keyDown_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "keyUp", (intptr_t) M_arc_input_KeyboardDevice_keyUp_arc_input_KeyCode_R_boolean, VTABLE_arc_input_KeyboardDevice_keyUp_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "touchDown", (intptr_t) M_arc_input_KeyboardDevice_touchDown_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_arc_input_KeyboardDevice_touchDown_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 1 },
	{ "touchUp", (intptr_t) M_arc_input_KeyboardDevice_touchUp_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_arc_input_KeyboardDevice_touchUp_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 1 },
	{ "scrolled", (intptr_t) M_arc_input_KeyboardDevice_scrolled_float_float_R_boolean, VTABLE_arc_input_KeyboardDevice_scrolled_float_float_R_boolean, "(FF)Z", 1 },
};

Class class_arc_input_KeyboardDevice{
		.nativeName = (intptr_t) "arc/input/KeyboardDevice",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_input_KeyboardDevice),
		.classVtable = (intptr_t) vtable_arc_input_KeyboardDevice,
		.staticInitializer = (intptr_t) clinit_arc_input_KeyboardDevice,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_input_KeyboardDevice,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_input_KeyboardDevice = registerClass(&class_arc_input_KeyboardDevice);

}
