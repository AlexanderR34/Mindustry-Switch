#include "arc/Input.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Core.h"
#include "arc/input/KeyBind_Axis.h"
#include "arc/input/InputProcessor.h"
#include "arc/Input.h"
#include "java/lang/Enum.h"
#include "arc/math/geom/Vec3.h"
#include "arc/input/KeyCode.h"
#include "arc/Input_TextInput.h"
#include "arc/struct/IntSet.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/util/OS.h"
#include "arc/Input_Orientation.h"
#include "arc/struct/SnapshotSeq.h"
#include "arc/graphics/Camera.h"
#include "arc/Input_Peripheral.h"
#include "arc/input/KeyboardDevice.h"
#include "arc/input/InputMultiplexer.h"
#include "arc/input/KeyBind.h"

extern "C" {


void mark_arc_Input(jobject object, jint mark, jint depth) {
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
	auto self = (arc_Input *) object;
	if (self->F_keyboard)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyboard)->clazz)->markFunction)((jobject) self->F_keyboard, mark, depth + 1);
	if (self->F_inputMultiplexer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputMultiplexer)->clazz)->markFunction)((jobject) self->F_inputMultiplexer, mark, depth + 1);
	if (self->F_caughtKeys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_caughtKeys)->clazz)->markFunction)((jobject) self->F_caughtKeys, mark, depth + 1);
	if (self->F_mouseReturn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mouseReturn)->clazz)->markFunction)((jobject) self->F_mouseReturn, mark, depth + 1);
}

void clinit_arc_Input(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_Input(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Input(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyboardDevice(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyboardDevice);
	init_arc_input_KeyboardDevice(ctx, sp[1].o);
	((arc_Input *) NULL_CHECK(sp[0].o))->F_keyboard = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_input_InputMultiplexer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_InputMultiplexer);
	sp[2].o = (jobject)createArray(ctx, &class_arc_input_InputProcessor, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	init_arc_input_InputMultiplexer_Array1_arc_input_InputProcessor(ctx, sp[1].o, sp[2].o);
	((arc_Input *) NULL_CHECK(sp[0].o))->F_inputMultiplexer = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((arc_Input *) NULL_CHECK(sp[0].o))->F_caughtKeys = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_Input *) NULL_CHECK(sp[0].o))->F_mouseReturn = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:mouseWorld", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(37);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_mouseReturn;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:mouseScreen", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(42);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_mouseReturn;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_Input_mouseWorldX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:mouseWorldX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_arc_Input_mouseWorldY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:mouseWorldY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_mouseWorld_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:mouseWorld", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_mouse_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:mouse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_mouseReturn;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, (frame[0].o));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_Input_setUseKeyboard_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:setUseKeyboard", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(66);
	((arc_Input *) NULL_CHECK((frame[0].o)))->F_useKeyboard = (frame[1].i);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_Input_useKeyboard_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:useKeyboard", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return ((jint)((arc_Input *) NULL_CHECK((frame[0].o)))->F_useKeyboard);
	}

	popStackFrame(ctx);
}

jint M_arc_Input_getTouches_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getTouches", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	frame[1].i = (jint(0));
	LINE_NUMBER(126);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (10)) goto label_3;
	}
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)((func_arc_Input_isTouched_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Input_isTouched_int_R_boolean])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 == 0) goto label_5;
	}
	INST_IINC(1, 1);
label_5:;
	{
	LINE_NUMBER(126);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jfloat M_arc_Input_getPressure_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getPressure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	jfloat temp0 = (jfloat)((func_arc_Input_getPressure_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Input_getPressure_int_R_float])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_Input_getPressure_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getPressure", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_arc_Input_isTouched_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Input_isTouched_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool M_arc_Input_shift_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:shift", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftRight;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_Input_ctrl_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:ctrl", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isMac) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_sym;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controlLeft;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controlRight;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_2;
label_4:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_Input_alt_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:alt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_altLeft;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_altRight;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_Input_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:keyDown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_Input_keyTap_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:keyTap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_Input_keyRelease_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:keyRelease", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_Input_axis_arc_input_KeyCode_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:axis", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	jfloat temp0 = (jfloat)((func_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_Input_keyDown_arc_input_KeyBind_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:keyDown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_value;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[0].o))->F_key;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_arc_Input_keyTap_arc_input_KeyBind_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:keyTap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_value;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[0].o))->F_key;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_arc_Input_keyRelease_arc_input_KeyBind_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:keyRelease", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_value;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[0].o))->F_key;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jfloat M_arc_Input_axis_arc_input_KeyBind_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:axis", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_value;
	frame[2].o = sp[0].o;
	LINE_NUMBER(212);
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_key;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_key;
	jfloat temp0 = (jfloat)((func_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_min;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_max;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	INST_FCONST(0);
	goto label_5;
label_4:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_min;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	(sp++)->f = jfloat(-1.0f);
	goto label_5;
label_6:;
	{
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_max;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	INST_FCONST(1);
	goto label_5;
label_7:;
	INST_FCONST(0);
label_5:;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_Input_axisTap_arc_input_KeyBind_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:axisTap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[1].o)))->F_value;
	frame[2].o = sp[0].o;
	LINE_NUMBER(224);
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_key;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_key;
	jfloat temp0 = (jfloat)((func_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_min;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	(sp++)->f = jfloat(-1.0f);
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((frame[2].o)))->F_max;
	jint temp0 = (jint)((func_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	INST_FCONST(1);
	goto label_5;
label_6:;
	INST_FCONST(0);
label_5:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_arc_Input_getTextInput_arc_Input$TextInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getTextInput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_Input_isShowingTextInput_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:isShowingTextInput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_Input_setOnscreenKeyboardVisible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:setOnscreenKeyboardVisible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(248);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Input_vibrate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:vibrate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(256);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Input_vibrate_Array1_long_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:vibrate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(266);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Input_cancelVibrate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:cancelVibrate", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_Input_getAccelerometer_R_arc_math_geom_Vec3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getAccelerometer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Vec3_Zero;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_getGyroscope_R_arc_math_geom_Vec3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getGyroscope", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Vec3_Zero;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_getOrientation_R_arc_math_geom_Vec3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getOrientation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Vec3_Zero;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_Input_getRotationMatrix_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getRotationMatrix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Input_setCatch_arc_input_KeyCode_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:setCatch", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(305);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_caughtKeys;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_caughtKeys;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_remove_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_remove_int_R_boolean])(ctx, sp[0].o, temp0);
	}
label_3:;
	LINE_NUMBER(310);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_Input_isCatch_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:isCatch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_caughtKeys;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_arc_Input_addProcessor_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:addProcessor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_inputMultiplexer;
	((func_arc_input_InputMultiplexer_addProcessor_arc_input_InputProcessor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputMultiplexer_addProcessor_arc_input_InputProcessor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Input_removeProcessor_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:removeProcessor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_inputMultiplexer;
	((func_arc_input_InputMultiplexer_removeProcessor_arc_input_InputProcessor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputMultiplexer_removeProcessor_arc_input_InputProcessor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_getInputProcessors_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getInputProcessors", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_inputMultiplexer;
	sp[0].o = (jobject)((func_arc_input_InputMultiplexer_getProcessors_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputMultiplexer_getProcessors_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_getInputMultiplexer_R_arc_input_InputMultiplexer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getInputMultiplexer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_inputMultiplexer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_getKeyboard_R_arc_input_KeyboardDevice(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getKeyboard", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_Input_isPeripheralAvailable_arc_Input$Peripheral_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:isPeripheralAvailable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(352);
	sp[0].o = frame[1].o;
	clinit_arc_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_arc_Input$Peripheral_hardwareKeyboard;
	if (sp[0].o != sp[1].o) goto label_1;
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

jint M_arc_Input_getRotation_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_getNativeOrientation_R_arc_Input$Orientation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getNativeOrientation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	clinit_arc_Input$Orientation(ctx);
	sp[0].o = (jobject)SF_arc_Input$Orientation_landscape;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Input_getKeyName_arc_input_KeyCode_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input:getKeyName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((arc_input_KeyCode *) NULL_CHECK((frame[1].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_Input[] {
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
	(void *) M_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_Input_mouseWorldX_R_float,
	(void *) M_arc_Input_mouseWorldY_R_float,
	(void *) M_arc_Input_mouseWorld_R_arc_math_geom_Vec2,
	(void *) M_arc_Input_mouse_R_arc_math_geom_Vec2,
	(void *) M_arc_Input_setUseKeyboard_boolean,
	(void *) M_arc_Input_useKeyboard_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_Input_getTouches_R_int,
	(void *) nullptr,
	(void *) M_arc_Input_getPressure_R_float,
	(void *) M_arc_Input_getPressure_int_R_float,
	(void *) M_arc_Input_shift_R_boolean,
	(void *) M_arc_Input_ctrl_R_boolean,
	(void *) M_arc_Input_alt_R_boolean,
	(void *) M_arc_Input_keyDown_arc_input_KeyCode_R_boolean,
	(void *) M_arc_Input_keyTap_arc_input_KeyCode_R_boolean,
	(void *) M_arc_Input_keyRelease_arc_input_KeyCode_R_boolean,
	(void *) M_arc_Input_axis_arc_input_KeyCode_R_float,
	(void *) M_arc_Input_keyDown_arc_input_KeyBind_R_boolean,
	(void *) M_arc_Input_keyTap_arc_input_KeyBind_R_boolean,
	(void *) M_arc_Input_keyRelease_arc_input_KeyBind_R_boolean,
	(void *) M_arc_Input_axis_arc_input_KeyBind_R_float,
	(void *) M_arc_Input_axisTap_arc_input_KeyBind_R_float,
	(void *) M_arc_Input_getTextInput_arc_Input$TextInput,
	(void *) M_arc_Input_isShowingTextInput_R_boolean,
	(void *) M_arc_Input_setOnscreenKeyboardVisible_boolean,
	(void *) M_arc_Input_vibrate_int,
	(void *) M_arc_Input_vibrate_Array1_long_int,
	(void *) M_arc_Input_cancelVibrate,
	(void *) M_arc_Input_getAccelerometer_R_arc_math_geom_Vec3,
	(void *) M_arc_Input_getGyroscope_R_arc_math_geom_Vec3,
	(void *) M_arc_Input_getOrientation_R_arc_math_geom_Vec3,
	(void *) M_arc_Input_getRotationMatrix_Array1_float,
	(void *) nullptr,
	(void *) M_arc_Input_setCatch_arc_input_KeyCode_boolean,
	(void *) M_arc_Input_isCatch_arc_input_KeyCode_R_boolean,
	(void *) M_arc_Input_addProcessor_arc_input_InputProcessor,
	(void *) M_arc_Input_removeProcessor_arc_input_InputProcessor,
	(void *) M_arc_Input_getInputProcessors_R_arc_struct_Seq,
	(void *) M_arc_Input_getInputMultiplexer_R_arc_input_InputMultiplexer,
	(void *) M_arc_Input_getKeyboard_R_arc_input_KeyboardDevice,
	(void *) M_arc_Input_isPeripheralAvailable_arc_Input$Peripheral_R_boolean,
	(void *) M_arc_Input_getRotation_R_int,
	(void *) M_arc_Input_getNativeOrientation_R_arc_Input$Orientation,
	(void *) M_arc_Input_getKeyName_arc_input_KeyCode_R_java_lang_String,
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
	{ "mouseWorld", "(FF)Larc/math/geom/Vec2;" },
	{ "mouseScreen", "(FF)Larc/math/geom/Vec2;" },
	{ "mouseWorldX", "()F" },
	{ "mouseWorldY", "()F" },
	{ "mouseWorld", "()Larc/math/geom/Vec2;" },
	{ "mouse", "()Larc/math/geom/Vec2;" },
	{ "setUseKeyboard", "(Z)V" },
	{ "useKeyboard", "()Z" },
	{ "mouseX", "()I" },
	{ "mouseX", "(I)I" },
	{ "deltaX", "()I" },
	{ "deltaX", "(I)I" },
	{ "mouseY", "()I" },
	{ "mouseY", "(I)I" },
	{ "deltaY", "()I" },
	{ "deltaY", "(I)I" },
	{ "isTouched", "()Z" },
	{ "justTouched", "()Z" },
	{ "getTouches", "()I" },
	{ "isTouched", "(I)Z" },
	{ "getPressure", "()F" },
	{ "getPressure", "(I)F" },
	{ "shift", "()Z" },
	{ "ctrl", "()Z" },
	{ "alt", "()Z" },
	{ "keyDown", "(Larc/input/KeyCode;)Z" },
	{ "keyTap", "(Larc/input/KeyCode;)Z" },
	{ "keyRelease", "(Larc/input/KeyCode;)Z" },
	{ "axis", "(Larc/input/KeyCode;)F" },
	{ "keyDown", "(Larc/input/KeyBind;)Z" },
	{ "keyTap", "(Larc/input/KeyBind;)Z" },
	{ "keyRelease", "(Larc/input/KeyBind;)Z" },
	{ "axis", "(Larc/input/KeyBind;)F" },
	{ "axisTap", "(Larc/input/KeyBind;)F" },
	{ "getTextInput", "(Larc/Input$TextInput;)V" },
	{ "isShowingTextInput", "()Z" },
	{ "setOnscreenKeyboardVisible", "(Z)V" },
	{ "vibrate", "(I)V" },
	{ "vibrate", "([JI)V" },
	{ "cancelVibrate", "()V" },
	{ "getAccelerometer", "()Larc/math/geom/Vec3;" },
	{ "getGyroscope", "()Larc/math/geom/Vec3;" },
	{ "getOrientation", "()Larc/math/geom/Vec3;" },
	{ "getRotationMatrix", "([F)V" },
	{ "getCurrentEventTime", "()J" },
	{ "setCatch", "(Larc/input/KeyCode;Z)V" },
	{ "isCatch", "(Larc/input/KeyCode;)Z" },
	{ "addProcessor", "(Larc/input/InputProcessor;)V" },
	{ "removeProcessor", "(Larc/input/InputProcessor;)V" },
	{ "getInputProcessors", "()Larc/struct/Seq;" },
	{ "getInputMultiplexer", "()Larc/input/InputMultiplexer;" },
	{ "getKeyboard", "()Larc/input/KeyboardDevice;" },
	{ "isPeripheralAvailable", "(Larc/Input$Peripheral;)Z" },
	{ "getRotation", "()I" },
	{ "getNativeOrientation", "()Larc/Input$Orientation;" },
	{ "getKeyName", "(Larc/input/KeyCode;)Ljava/lang/String;" },
};

static jclass innerClasses[] {
	&class_arc_Input$Peripheral,
	&class_arc_Input$Orientation,
	&class_arc_Input$TextInput,
};

static FieldMetadata fields[] {
	{ "keyboard", &class_arc_input_KeyboardDevice, offsetof(arc_Input, F_keyboard), "Larc/input/KeyboardDevice;", 4 },
	{ "inputMultiplexer", &class_arc_input_InputMultiplexer, offsetof(arc_Input, F_inputMultiplexer), "Larc/input/InputMultiplexer;", 4 },
	{ "caughtKeys", &class_arc_struct_IntSet, offsetof(arc_Input, F_caughtKeys), "Larc/struct/IntSet;", 4 },
	{ "mouseReturn", &class_arc_math_geom_Vec2, offsetof(arc_Input, F_mouseReturn), "Larc/math/geom/Vec2;", 4 },
	{ "useKeyboard", &class_boolean, offsetof(arc_Input, F_useKeyboard), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_Input, 0, "()V", 1 },
	{ "mouseWorld", (intptr_t) M_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2, VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "mouseScreen", (intptr_t) M_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2, VTABLE_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "mouseWorldX", (intptr_t) M_arc_Input_mouseWorldX_R_float, VTABLE_arc_Input_mouseWorldX_R_float, "()F", 1 },
	{ "mouseWorldY", (intptr_t) M_arc_Input_mouseWorldY_R_float, VTABLE_arc_Input_mouseWorldY_R_float, "()F", 1 },
	{ "mouseWorld", (intptr_t) M_arc_Input_mouseWorld_R_arc_math_geom_Vec2, VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "mouse", (intptr_t) M_arc_Input_mouse_R_arc_math_geom_Vec2, VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "setUseKeyboard", (intptr_t) M_arc_Input_setUseKeyboard_boolean, VTABLE_arc_Input_setUseKeyboard_boolean, "(Z)V", 1 },
	{ "useKeyboard", (intptr_t) M_arc_Input_useKeyboard_R_boolean, VTABLE_arc_Input_useKeyboard_R_boolean, "()Z", 1 },
	{ "mouseX", 0, VTABLE_arc_Input_mouseX_R_int, "()I", 1025 },
	{ "mouseX", 0, VTABLE_arc_Input_mouseX_int_R_int, "(I)I", 1025 },
	{ "deltaX", 0, VTABLE_arc_Input_deltaX_R_int, "()I", 1025 },
	{ "deltaX", 0, VTABLE_arc_Input_deltaX_int_R_int, "(I)I", 1025 },
	{ "mouseY", 0, VTABLE_arc_Input_mouseY_R_int, "()I", 1025 },
	{ "mouseY", 0, VTABLE_arc_Input_mouseY_int_R_int, "(I)I", 1025 },
	{ "deltaY", 0, VTABLE_arc_Input_deltaY_R_int, "()I", 1025 },
	{ "deltaY", 0, VTABLE_arc_Input_deltaY_int_R_int, "(I)I", 1025 },
	{ "isTouched", 0, VTABLE_arc_Input_isTouched_R_boolean, "()Z", 1025 },
	{ "justTouched", 0, VTABLE_arc_Input_justTouched_R_boolean, "()Z", 1025 },
	{ "getTouches", (intptr_t) M_arc_Input_getTouches_R_int, VTABLE_arc_Input_getTouches_R_int, "()I", 1 },
	{ "isTouched", 0, VTABLE_arc_Input_isTouched_int_R_boolean, "(I)Z", 1025 },
	{ "getPressure", (intptr_t) M_arc_Input_getPressure_R_float, VTABLE_arc_Input_getPressure_R_float, "()F", 1 },
	{ "getPressure", (intptr_t) M_arc_Input_getPressure_int_R_float, VTABLE_arc_Input_getPressure_int_R_float, "(I)F", 1 },
	{ "shift", (intptr_t) M_arc_Input_shift_R_boolean, VTABLE_arc_Input_shift_R_boolean, "()Z", 1 },
	{ "ctrl", (intptr_t) M_arc_Input_ctrl_R_boolean, VTABLE_arc_Input_ctrl_R_boolean, "()Z", 1 },
	{ "alt", (intptr_t) M_arc_Input_alt_R_boolean, VTABLE_arc_Input_alt_R_boolean, "()Z", 1 },
	{ "keyDown", (intptr_t) M_arc_Input_keyDown_arc_input_KeyCode_R_boolean, VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "keyTap", (intptr_t) M_arc_Input_keyTap_arc_input_KeyCode_R_boolean, VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "keyRelease", (intptr_t) M_arc_Input_keyRelease_arc_input_KeyCode_R_boolean, VTABLE_arc_Input_keyRelease_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "axis", (intptr_t) M_arc_Input_axis_arc_input_KeyCode_R_float, VTABLE_arc_Input_axis_arc_input_KeyCode_R_float, "(Larc/input/KeyCode;)F", 1 },
	{ "keyDown", (intptr_t) M_arc_Input_keyDown_arc_input_KeyBind_R_boolean, VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean, "(Larc/input/KeyBind;)Z", 1 },
	{ "keyTap", (intptr_t) M_arc_Input_keyTap_arc_input_KeyBind_R_boolean, VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean, "(Larc/input/KeyBind;)Z", 1 },
	{ "keyRelease", (intptr_t) M_arc_Input_keyRelease_arc_input_KeyBind_R_boolean, VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean, "(Larc/input/KeyBind;)Z", 1 },
	{ "axis", (intptr_t) M_arc_Input_axis_arc_input_KeyBind_R_float, VTABLE_arc_Input_axis_arc_input_KeyBind_R_float, "(Larc/input/KeyBind;)F", 1 },
	{ "axisTap", (intptr_t) M_arc_Input_axisTap_arc_input_KeyBind_R_float, VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float, "(Larc/input/KeyBind;)F", 1 },
	{ "getTextInput", (intptr_t) M_arc_Input_getTextInput_arc_Input$TextInput, VTABLE_arc_Input_getTextInput_arc_Input$TextInput, "(Larc/Input$TextInput;)V", 1 },
	{ "isShowingTextInput", (intptr_t) M_arc_Input_isShowingTextInput_R_boolean, VTABLE_arc_Input_isShowingTextInput_R_boolean, "()Z", 1 },
	{ "setOnscreenKeyboardVisible", (intptr_t) M_arc_Input_setOnscreenKeyboardVisible_boolean, VTABLE_arc_Input_setOnscreenKeyboardVisible_boolean, "(Z)V", 1 },
	{ "vibrate", (intptr_t) M_arc_Input_vibrate_int, VTABLE_arc_Input_vibrate_int, "(I)V", 1 },
	{ "vibrate", (intptr_t) M_arc_Input_vibrate_Array1_long_int, VTABLE_arc_Input_vibrate_Array1_long_int, "([JI)V", 1 },
	{ "cancelVibrate", (intptr_t) M_arc_Input_cancelVibrate, VTABLE_arc_Input_cancelVibrate, "()V", 1 },
	{ "getAccelerometer", (intptr_t) M_arc_Input_getAccelerometer_R_arc_math_geom_Vec3, VTABLE_arc_Input_getAccelerometer_R_arc_math_geom_Vec3, "()Larc/math/geom/Vec3;", 1 },
	{ "getGyroscope", (intptr_t) M_arc_Input_getGyroscope_R_arc_math_geom_Vec3, VTABLE_arc_Input_getGyroscope_R_arc_math_geom_Vec3, "()Larc/math/geom/Vec3;", 1 },
	{ "getOrientation", (intptr_t) M_arc_Input_getOrientation_R_arc_math_geom_Vec3, VTABLE_arc_Input_getOrientation_R_arc_math_geom_Vec3, "()Larc/math/geom/Vec3;", 1 },
	{ "getRotationMatrix", (intptr_t) M_arc_Input_getRotationMatrix_Array1_float, VTABLE_arc_Input_getRotationMatrix_Array1_float, "([F)V", 1 },
	{ "getCurrentEventTime", 0, VTABLE_arc_Input_getCurrentEventTime_R_long, "()J", 1025 },
	{ "setCatch", (intptr_t) M_arc_Input_setCatch_arc_input_KeyCode_boolean, VTABLE_arc_Input_setCatch_arc_input_KeyCode_boolean, "(Larc/input/KeyCode;Z)V", 1 },
	{ "isCatch", (intptr_t) M_arc_Input_isCatch_arc_input_KeyCode_R_boolean, VTABLE_arc_Input_isCatch_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "addProcessor", (intptr_t) M_arc_Input_addProcessor_arc_input_InputProcessor, VTABLE_arc_Input_addProcessor_arc_input_InputProcessor, "(Larc/input/InputProcessor;)V", 1 },
	{ "removeProcessor", (intptr_t) M_arc_Input_removeProcessor_arc_input_InputProcessor, VTABLE_arc_Input_removeProcessor_arc_input_InputProcessor, "(Larc/input/InputProcessor;)V", 1 },
	{ "getInputProcessors", (intptr_t) M_arc_Input_getInputProcessors_R_arc_struct_Seq, VTABLE_arc_Input_getInputProcessors_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getInputMultiplexer", (intptr_t) M_arc_Input_getInputMultiplexer_R_arc_input_InputMultiplexer, VTABLE_arc_Input_getInputMultiplexer_R_arc_input_InputMultiplexer, "()Larc/input/InputMultiplexer;", 1 },
	{ "getKeyboard", (intptr_t) M_arc_Input_getKeyboard_R_arc_input_KeyboardDevice, VTABLE_arc_Input_getKeyboard_R_arc_input_KeyboardDevice, "()Larc/input/KeyboardDevice;", 1 },
	{ "isPeripheralAvailable", (intptr_t) M_arc_Input_isPeripheralAvailable_arc_Input$Peripheral_R_boolean, VTABLE_arc_Input_isPeripheralAvailable_arc_Input$Peripheral_R_boolean, "(Larc/Input$Peripheral;)Z", 1 },
	{ "getRotation", (intptr_t) M_arc_Input_getRotation_R_int, VTABLE_arc_Input_getRotation_R_int, "()I", 1 },
	{ "getNativeOrientation", (intptr_t) M_arc_Input_getNativeOrientation_R_arc_Input$Orientation, VTABLE_arc_Input_getNativeOrientation_R_arc_Input$Orientation, "()Larc/Input$Orientation;", 1 },
	{ "getKeyName", (intptr_t) M_arc_Input_getKeyName_arc_input_KeyCode_R_java_lang_String, VTABLE_arc_Input_getKeyName_arc_input_KeyCode_R_java_lang_String, "(Larc/input/KeyCode;)Ljava/lang/String;", 1 },
};

Class class_arc_Input{
		.nativeName = (intptr_t) "arc/Input",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_Input),
		.classVtable = (intptr_t) vtable_arc_Input,
		.staticInitializer = (intptr_t) clinit_arc_Input,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Input,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 57,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 67,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Input = registerClass(&class_arc_Input);

}
