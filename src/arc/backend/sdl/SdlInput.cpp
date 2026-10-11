#include "arc/backend/sdl/SdlInput.h"
#include "java/lang/StringBuilder.h"
#include "arc/scene/ui/TextField.h"
#include "arc/Input.h"
#include "java/nio/charset/Charset.h"
#include "arc/backend/sdl/SdlScanmap.h"
#include "arc/backend/sdl/SdlInput_1ImeData.h"
#include "arc/input/KeyCode.h"
#include "arc/backend/sdl/SdlInput_1.h"
#include "arc/backend/sdl/SdlInput_2.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/input/InputMultiplexer.h"
#include "arc/input/KeyboardDevice.h"
#include "java/lang/Math.h"
#include "arc/Core.h"
#include "arc/input/InputProcessor.h"
#include "java/util/Iterator.h"
#include "arc/backend/sdl/SdlInput_EditEvent.h"
#include "arc/input/InputEventQueue.h"
#include "arc/Graphics.h"
#include "arc/util/Strings.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/backend/sdl/SdlInput.h"

extern "C" {


void mark_arc_backend_sdl_SdlInput(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_Input(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_backend_sdl_SdlInput *) object;
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
	if (self->F_strcpy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strcpy)->clazz)->markFunction)((jobject) self->F_strcpy, mark, depth + 1);
	if (self->F_stringEditEvents)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stringEditEvents)->clazz)->markFunction)((jobject) self->F_stringEditEvents, mark, depth + 1);
}

void clinit_arc_backend_sdl_SdlInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_Input(ctx);
}

void init_arc_backend_sdl_SdlInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlInput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_arc_Input(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_input_InputEventQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_InputEventQueue);
	init_arc_input_InputEventQueue(ctx, sp[1].o);
	((arc_backend_sdl_SdlInput *) NULL_CHECK(sp[0].o))->F_queue = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (32));
	((arc_backend_sdl_SdlInput *) NULL_CHECK(sp[0].o))->F_strcpy = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_backend_sdl_SdlInput *) NULL_CHECK(sp[0].o))->F_stringEditEvents = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlInput_handleInput_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:handleInput", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	frame[2].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0))));
	LINE_NUMBER(27);
	if ((frame[2].i) != (jint(5))) goto label_2;
	}
	{
	LINE_NUMBER(28);
	if (((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(1)))) != (jint(1))) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(29);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(4))));
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_arc_backend_sdl_SdlScanmap_getCode_int_R_arc_input_KeyCode(ctx, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(33);
	if (((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(3)))) != 0) goto label_9;
	}
	{
	LINE_NUMBER(34);
	if ((frame[3].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_InputEventQueue_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, (frame[5].o));
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_InputEventQueue_keyUp_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_keyUp_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, (frame[5].o));
	}
label_9:;
	{
	LINE_NUMBER(42);
	if ((frame[3].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_backspace;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_InputEventQueue_keyTyped_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_keyTyped_char_R_boolean])(ctx, sp[0].o, (8));
	}
label_15:;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_tab;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_InputEventQueue_keyTyped_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_keyTyped_char_R_boolean])(ctx, sp[0].o, (9));
	}
label_16:;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_enter;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_InputEventQueue_keyTyped_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_keyTyped_char_R_boolean])(ctx, sp[0].o, (13));
	}
label_17:;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_forwardDel;
	if (sp[0].o == sp[1].o) goto label_18;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_del;
	if (sp[0].o != sp[1].o) goto label_13;
	}
label_18:;
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_InputEventQueue_keyTyped_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_keyTyped_char_R_boolean])(ctx, sp[0].o, (127));
	}
label_13:;
	LINE_NUMBER(48);
	goto label_19;
label_2:;
	{
	if ((frame[2].i) != (jint(3))) goto label_20;
	}
	{
	LINE_NUMBER(49);
	if (((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(1)))) != (jint(1))) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(50);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(4))));
	LINE_NUMBER(51);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(2))));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[6].i = (temp0 - ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(3)))));
	LINE_NUMBER(53);
	if ((frame[4].i) != (jint(1))) goto label_28;
	}
	clinit_arc_input_KeyCode(ctx);
	(sp++)->o = SF_arc_input_KeyCode_mouseLeft;
	goto label_29;
label_28:;
	{
	LINE_NUMBER(54);
	if ((frame[4].i) != (jint(3))) goto label_30;
	}
	clinit_arc_input_KeyCode(ctx);
	(sp++)->o = SF_arc_input_KeyCode_mouseRight;
	goto label_29;
label_30:;
	{
	LINE_NUMBER(55);
	if ((frame[4].i) != (jint(2))) goto label_31;
	}
	clinit_arc_input_KeyCode(ctx);
	(sp++)->o = SF_arc_input_KeyCode_mouseMiddle;
	goto label_29;
label_31:;
	{
	LINE_NUMBER(56);
	if ((frame[4].i) != (jint(4))) goto label_32;
	}
	clinit_arc_input_KeyCode(ctx);
	(sp++)->o = SF_arc_input_KeyCode_mouseBack;
	goto label_29;
label_32:;
	{
	LINE_NUMBER(57);
	if ((frame[4].i) != (jint(5))) goto label_33;
	}
	clinit_arc_input_KeyCode(ctx);
	(sp++)->o = SF_arc_input_KeyCode_mouseForward;
	goto label_29;
label_33:;
	INST_ACONST_NULL();
label_29:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(58);
	if ((frame[7].o) == nullptr) goto label_35;
	}
	{
	LINE_NUMBER(59);
	if ((frame[3].i) == 0) goto label_37;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	((arc_backend_sdl_SdlInput *) NULL_CHECK(sp[0].o))->F_mousePressed = (((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK(sp[0].o))->F_mousePressed) + (jint(1)));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_InputEventQueue_touchDown_int_int_int_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_touchDown_int_int_int_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, (frame[5].i), (frame[6].i), (jint(0)), (frame[7].o));
	goto label_35;
	}
label_37:;
	{
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mousePressed) - (jint(1))));
	((arc_backend_sdl_SdlInput *) NULL_CHECK(sp[0].o))->F_mousePressed = temp0;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp1 = (jint)((func_arc_input_InputEventQueue_touchUp_int_int_int_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_touchUp_int_int_int_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, (frame[5].i), (frame[6].i), (jint(0)), (frame[7].o));
	}
label_35:;
	LINE_NUMBER(67);
	goto label_19;
label_20:;
	{
	if ((frame[2].i) != (jint(2))) goto label_41;
	}
	{
	LINE_NUMBER(68);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(1))));
	LINE_NUMBER(69);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[4].i = (temp0 - ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(2)))));
	LINE_NUMBER(71);
	((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_deltaX = ((frame[3].i) - ((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseX));
	LINE_NUMBER(72);
	((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_deltaY = ((frame[4].i) - ((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseY));
	LINE_NUMBER(73);
	((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseX = (frame[3].i);
	LINE_NUMBER(74);
	((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseY = (frame[4].i);
	LINE_NUMBER(76);
	if (((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mousePressed) <= 0) goto label_49;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_InputEventQueue_touchDragged_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_touchDragged_int_int_int_R_boolean])(ctx, sp[0].o, ((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseX), ((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseY), (jint(0)));
	goto label_51;
	}
label_49:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_InputEventQueue_mouseMoved_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_mouseMoved_int_int_R_boolean])(ctx, sp[0].o, ((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseX), ((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseY));
	}
label_51:;
	LINE_NUMBER(81);
	goto label_19;
label_41:;
	{
	if ((frame[2].i) != (jint(4))) goto label_52;
	}
	{
	LINE_NUMBER(82);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(1))));
	LINE_NUMBER(83);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(2))));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_InputEventQueue_scrolled_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_scrolled_float_float_R_boolean])(ctx, sp[0].o, (jfloat((-(frame[3].i)))), (jfloat((-(frame[4].i)))));
	LINE_NUMBER(85);
	goto label_19;
	}
label_52:;
	{
	if ((frame[2].i) != (6)) goto label_57;
	}
	{
	LINE_NUMBER(86);
	frame[3].i = (jint(0));
	LINE_NUMBER(87);
	frame[4].i = (jint(0));
	}
label_60:;
	{
	if ((frame[4].i) >= (32)) goto label_61;
	}
	{
	LINE_NUMBER(88);
	frame[5].i = (jchar(((jint)ARRAY_ACCESS(jint, (frame[1].o), ((frame[4].i) + (jint(1)))))));
	LINE_NUMBER(89);
	if ((frame[5].i) != 0) goto label_64;
	}
	{
	LINE_NUMBER(90);
	frame[3].i = (frame[4].i);
	LINE_NUMBER(91);
	goto label_61;
	}
label_64:;
	{
	LINE_NUMBER(87);
	INST_IINC(4, 1);
	goto label_60;
	}
label_61:;
	{
	LINE_NUMBER(94);
	frame[4].i = (jint(0));
	}
label_67:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_68;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_strcpy;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)) = (jbyte(((jint)ARRAY_ACCESS(jint, (frame[1].o), ((frame[4].i) + (jint(1)))))));
	LINE_NUMBER(94);
	INST_IINC(4, 1);
	goto label_67;
	}
label_68:;
	{
	LINE_NUMBER(97);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_strcpy;
	jint temp0 = jint(0);
	jint temp1 = frame[3].i;
	clinit_arc_util_Strings(ctx);
	sp[2].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_lang_String_Array1_byte_int_int_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(98);
	frame[5].i = (jint(0));
	}
label_72:;
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	if (temp0 >= temp1) goto label_73;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[4].o), (frame[5].i));
	jint temp1 = (jint)((func_arc_input_InputEventQueue_keyTyped_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_keyTyped_char_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(98);
	INST_IINC(5, 1);
	goto label_72;
	}
label_73:;
	LINE_NUMBER(101);
	goto label_19;
label_57:;
	{
	if ((frame[2].i) != (8)) goto label_19;
	}
	{
	LINE_NUMBER(102);
	frame[3].i = (jint(0));
	LINE_NUMBER(103);
	frame[4].i = (jint(0));
	}
label_78:;
	{
	if ((frame[4].i) >= (32)) goto label_79;
	}
	{
	LINE_NUMBER(104);
	frame[5].i = (jchar(((jint)ARRAY_ACCESS(jint, (frame[1].o), ((frame[4].i) + (jint(3)))))));
	LINE_NUMBER(105);
	if ((frame[5].i) != 0) goto label_82;
	}
	{
	LINE_NUMBER(106);
	frame[3].i = (frame[4].i);
	LINE_NUMBER(107);
	goto label_79;
	}
label_82:;
	{
	LINE_NUMBER(103);
	INST_IINC(4, 1);
	goto label_78;
	}
label_79:;
	{
	LINE_NUMBER(110);
	frame[4].i = (jint(0));
	}
label_85:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_86;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_strcpy;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)) = (jbyte(((jint)ARRAY_ACCESS(jint, (frame[1].o), ((frame[4].i) + (jint(3)))))));
	LINE_NUMBER(110);
	INST_IINC(4, 1);
	goto label_85;
	}
label_86:;
	{
	LINE_NUMBER(115);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_strcpy;
	jint temp0 = jint(0);
	jint temp1 = frame[3].i;
	clinit_arc_util_Strings(ctx);
	sp[2].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_lang_String_Array1_byte_int_int_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_stringEditEvents;
	clinit_arc_backend_sdl_SdlInput$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlInput$1);
	init_arc_backend_sdl_SdlInput$1_arc_backend_sdl_SdlInput_Array1_int_java_lang_String(ctx, sp[1].o, (frame[0].o), (frame[1].o), (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlInput_handleFieldCandidate_arc_backend_sdl_SdlInput$EditEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:handleFieldCandidate", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput$EditEvent *) NULL_CHECK((frame[1].o)))->F_text;
	frame[2].o = sp[0].o;
	LINE_NUMBER(133);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextField)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(134);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[3].o)))->F_imeData;
	if ((isInstance(ctx, sp[0].o, &class_arc_backend_sdl_SdlInput$1ImeData)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[3].o)))->F_imeData;
	frame[4].o = (checkCast(ctx, &class_arc_backend_sdl_SdlInput$1ImeData, sp[0].o));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput$1ImeData *) NULL_CHECK((frame[4].o)))->F_lastSetText;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[3].o));
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(141);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[3].o)))->F_imeData = (jref) (jobject(nullptr));
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(144);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[3].o)))->F_imeData = (jref) (jobject(nullptr));
	LINE_NUMBER(145);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_backend_sdl_SdlInput$1ImeData *) NULL_CHECK((frame[4].o)))->F_realText;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, (frame[3].o));
	LINE_NUMBER(147);
	((func_arc_scene_ui_TextField_setCursorPosition_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_TextField_setCursorPosition_int])(ctx, (frame[3].o), ((jint)((arc_backend_sdl_SdlInput$1ImeData *) NULL_CHECK((frame[4].o)))->F_cursor));
	}
label_5:;
	{
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_14;
	}
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[3].o)))->F_imeData;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = frame[3].o;
	clinit_arc_backend_sdl_SdlInput$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlInput$2);
	init_arc_backend_sdl_SdlInput$2_arc_backend_sdl_SdlInput_arc_scene_ui_TextField(ctx, sp[1].o, (frame[0].o), (frame[3].o));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_imeData = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[3].o)))->F_imeData;
	frame[4].o = (checkCast(ctx, &class_arc_backend_sdl_SdlInput$1ImeData, sp[0].o));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput$1ImeData *) NULL_CHECK((frame[4].o)))->F_realText;
	frame[5].o = sp[0].o;
	LINE_NUMBER(166);
	frame[6].i = ((jint)((arc_backend_sdl_SdlInput$1ImeData *) NULL_CHECK((frame[4].o)))->F_cursor);
	LINE_NUMBER(168);
	sp[0].o = frame[3].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = frame[5].o;
	jint temp0 = jint(0);
	jint temp1 = frame[6].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, temp2);
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, temp0, temp3);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[2].o = frame[5].o;
	jint temp4 = frame[6].i;
	jint temp5 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	jint temp6 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp4, temp5);
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, temp6);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(169);
	sp[0].o = frame[3].o;
	jint temp7 = frame[6].i;
	jint temp8 = frame[6].i;
	jint temp9 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	((func_arc_scene_ui_TextField_setSelection_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setSelection_int_int])(ctx, sp[0].o, temp7, (temp8 + temp9));
	LINE_NUMBER(174);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[3].o));
	((arc_backend_sdl_SdlInput$1ImeData *) NULL_CHECK(sp[0].o))->F_lastSetText = (jref) sp[1].o;
	}
label_2:;
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlInput_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[1].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_inputMultiplexer;
	((func_arc_input_InputEventQueue_setProcessor_arc_input_InputProcessor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_setProcessor_arc_input_InputProcessor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_input_InputEventQueue_drain) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_drain])(ctx, sp[0].o);
	LINE_NUMBER(183);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_stringEditEvents;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_backend_sdl_SdlInput$EditEvent, sp[0].o));
	LINE_NUMBER(184);
	((func_arc_backend_sdl_SdlInput_handleFieldCandidate_arc_backend_sdl_SdlInput$EditEvent) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_backend_sdl_SdlInput_handleFieldCandidate_arc_backend_sdl_SdlInput$EditEvent])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(185);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_stringEditEvents;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlInput_postUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:postUpdate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_Input *) NULL_CHECK((frame[0].o)))->F_keyboard;
	((func_arc_input_KeyboardDevice_postUpdate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyboardDevice_postUpdate])(ctx, sp[0].o);
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((arc_backend_sdl_SdlInput *) NULL_CHECK(sp[1].o))->F_deltaY = temp0;
	((arc_backend_sdl_SdlInput *) NULL_CHECK(sp[0].o))->F_deltaX = temp0;
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlInput_mouseX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:mouseX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseX);
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlInput_mouseX_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:mouseX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(202);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseX;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlInput_deltaX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:deltaX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_deltaX);
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlInput_deltaX_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:deltaX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(212);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_deltaX;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlInput_mouseY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:mouseY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseY);
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlInput_mouseY_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:mouseY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(222);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_mouseY;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlInput_deltaY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:deltaY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_deltaY);
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlInput_deltaY_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:deltaY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(232);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_deltaY;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlInput_isTouched_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:isTouched", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	jint temp0 = (jint)((func_arc_backend_sdl_SdlInput_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlInput_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	jint temp0 = (jint)((func_arc_backend_sdl_SdlInput_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlInput_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_arc_backend_sdl_SdlInput_justTouched_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:justTouched", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	jint temp0 = (jint)((func_arc_backend_sdl_SdlInput_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlInput_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	jint temp0 = (jint)((func_arc_backend_sdl_SdlInput_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlInput_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_arc_backend_sdl_SdlInput_isTouched_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:isTouched", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_arc_backend_sdl_SdlInput_getCurrentEventTime_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput:getCurrentEventTime", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((arc_backend_sdl_SdlInput *) NULL_CHECK((frame[0].o)))->F_queue;
	jlong temp0 = (jlong)((func_arc_input_InputEventQueue_getCurrentEventTime_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_InputEventQueue_getCurrentEventTime_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlInput[] {
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
	(void *) M_arc_backend_sdl_SdlInput_mouseX_R_int,
	(void *) M_arc_backend_sdl_SdlInput_mouseX_int_R_int,
	(void *) M_arc_backend_sdl_SdlInput_deltaX_R_int,
	(void *) M_arc_backend_sdl_SdlInput_deltaX_int_R_int,
	(void *) M_arc_backend_sdl_SdlInput_mouseY_R_int,
	(void *) M_arc_backend_sdl_SdlInput_mouseY_int_R_int,
	(void *) M_arc_backend_sdl_SdlInput_deltaY_R_int,
	(void *) M_arc_backend_sdl_SdlInput_deltaY_int_R_int,
	(void *) M_arc_backend_sdl_SdlInput_isTouched_R_boolean,
	(void *) M_arc_backend_sdl_SdlInput_justTouched_R_boolean,
	(void *) M_arc_Input_getTouches_R_int,
	(void *) M_arc_backend_sdl_SdlInput_isTouched_int_R_boolean,
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
	(void *) M_arc_backend_sdl_SdlInput_getCurrentEventTime_R_long,
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
	(void *) M_arc_backend_sdl_SdlInput_handleInput_Array1_int,
	(void *) M_arc_backend_sdl_SdlInput_handleFieldCandidate_arc_backend_sdl_SdlInput$EditEvent,
	(void *) M_arc_backend_sdl_SdlInput_update,
	(void *) M_arc_backend_sdl_SdlInput_postUpdate,
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
	{ "handleInput", "([I)V" },
	{ "handleFieldCandidate", "(Larc/backend/sdl/SdlInput$EditEvent;)V" },
	{ "update", "()V" },
	{ "postUpdate", "()V" },
};

static jclass innerClasses[] {
	&class_arc_backend_sdl_SdlInput$EditEvent,
};

static FieldMetadata fields[] {
	{ "queue", &class_arc_input_InputEventQueue, offsetof(arc_backend_sdl_SdlInput, F_queue), "Larc/input/InputEventQueue;", 18 },
	{ "mouseX", &class_int, offsetof(arc_backend_sdl_SdlInput, F_mouseX), "I", 2 },
	{ "mouseY", &class_int, offsetof(arc_backend_sdl_SdlInput, F_mouseY), "I", 2 },
	{ "deltaX", &class_int, offsetof(arc_backend_sdl_SdlInput, F_deltaX), "I", 2 },
	{ "deltaY", &class_int, offsetof(arc_backend_sdl_SdlInput, F_deltaY), "I", 2 },
	{ "mousePressed", &class_int, offsetof(arc_backend_sdl_SdlInput, F_mousePressed), "I", 2 },
	{ "strcpy", getArrayClass(&class_byte, 1), offsetof(arc_backend_sdl_SdlInput, F_strcpy), "[B", 2 },
	{ "stringEditEvents", &class_arc_struct_Seq, offsetof(arc_backend_sdl_SdlInput, F_stringEditEvents), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlInput, 0, "()V", 1 },
	{ "handleInput", (intptr_t) M_arc_backend_sdl_SdlInput_handleInput_Array1_int, VTABLE_arc_backend_sdl_SdlInput_handleInput_Array1_int, "([I)V", 0 },
	{ "handleFieldCandidate", (intptr_t) M_arc_backend_sdl_SdlInput_handleFieldCandidate_arc_backend_sdl_SdlInput$EditEvent, VTABLE_arc_backend_sdl_SdlInput_handleFieldCandidate_arc_backend_sdl_SdlInput$EditEvent, "(Larc/backend/sdl/SdlInput$EditEvent;)V", 0 },
	{ "update", (intptr_t) M_arc_backend_sdl_SdlInput_update, VTABLE_arc_backend_sdl_SdlInput_update, "()V", 0 },
	{ "postUpdate", (intptr_t) M_arc_backend_sdl_SdlInput_postUpdate, VTABLE_arc_backend_sdl_SdlInput_postUpdate, "()V", 0 },
	{ "mouseX", (intptr_t) M_arc_backend_sdl_SdlInput_mouseX_R_int, VTABLE_arc_backend_sdl_SdlInput_mouseX_R_int, "()I", 1 },
	{ "mouseX", (intptr_t) M_arc_backend_sdl_SdlInput_mouseX_int_R_int, VTABLE_arc_backend_sdl_SdlInput_mouseX_int_R_int, "(I)I", 1 },
	{ "deltaX", (intptr_t) M_arc_backend_sdl_SdlInput_deltaX_R_int, VTABLE_arc_backend_sdl_SdlInput_deltaX_R_int, "()I", 1 },
	{ "deltaX", (intptr_t) M_arc_backend_sdl_SdlInput_deltaX_int_R_int, VTABLE_arc_backend_sdl_SdlInput_deltaX_int_R_int, "(I)I", 1 },
	{ "mouseY", (intptr_t) M_arc_backend_sdl_SdlInput_mouseY_R_int, VTABLE_arc_backend_sdl_SdlInput_mouseY_R_int, "()I", 1 },
	{ "mouseY", (intptr_t) M_arc_backend_sdl_SdlInput_mouseY_int_R_int, VTABLE_arc_backend_sdl_SdlInput_mouseY_int_R_int, "(I)I", 1 },
	{ "deltaY", (intptr_t) M_arc_backend_sdl_SdlInput_deltaY_R_int, VTABLE_arc_backend_sdl_SdlInput_deltaY_R_int, "()I", 1 },
	{ "deltaY", (intptr_t) M_arc_backend_sdl_SdlInput_deltaY_int_R_int, VTABLE_arc_backend_sdl_SdlInput_deltaY_int_R_int, "(I)I", 1 },
	{ "isTouched", (intptr_t) M_arc_backend_sdl_SdlInput_isTouched_R_boolean, VTABLE_arc_backend_sdl_SdlInput_isTouched_R_boolean, "()Z", 1 },
	{ "justTouched", (intptr_t) M_arc_backend_sdl_SdlInput_justTouched_R_boolean, VTABLE_arc_backend_sdl_SdlInput_justTouched_R_boolean, "()Z", 1 },
	{ "isTouched", (intptr_t) M_arc_backend_sdl_SdlInput_isTouched_int_R_boolean, VTABLE_arc_backend_sdl_SdlInput_isTouched_int_R_boolean, "(I)Z", 1 },
	{ "getCurrentEventTime", (intptr_t) M_arc_backend_sdl_SdlInput_getCurrentEventTime_R_long, VTABLE_arc_backend_sdl_SdlInput_getCurrentEventTime_R_long, "()J", 1 },
};

Class class_arc_backend_sdl_SdlInput{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlInput",
		.parentClass = (intptr_t) &class_arc_Input,
		.size = sizeof(arc_backend_sdl_SdlInput),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlInput,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlInput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlInput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 71,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlInput = registerClass(&class_arc_backend_sdl_SdlInput);

}
