#include "arc/util/CommandHandler.h"
#include "arc/util/CommandHandler_invoke_arc_func_Boolf_0.h"
#include "arc/util/CommandHandler_ResponseType.h"
#include "arc/util/CommandHandler.h"
#include "java/lang/CharSequence.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/util/CommandHandler_Command.h"
#include "java/lang/String.h"
#include "arc/util/CommandHandler_CommandResponse.h"
#include "arc/struct/Seq.h"
#include "arc/util/CommandHandler_CommandParam.h"
#include "arc/util/CommandHandler_CommandRunner.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"
#include "arc/func/Boolf.h"
#include "arc/util/CommandHandler_invoke_arc_util_CommandHandler_CommandRunner_1.h"
#include "arc/util/CommandHandler_invoke_arc_util_CommandHandler_CommandRunner_0.h"

extern "C" {


void mark_arc_util_CommandHandler(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_CommandHandler *) object;
	if (self->F_prefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefix)->clazz)->markFunction)((jobject) self->F_prefix, mark, depth + 1);
	if (self->F_commands)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commands)->clazz)->markFunction)((jobject) self->F_commands, mark, depth + 1);
	if (self->F_orderedCommands)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_orderedCommands)->clazz)->markFunction)((jobject) self->F_orderedCommands, mark, depth + 1);
}

void clinit_arc_util_CommandHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_CommandHandler_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_prefix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_CommandHandler *) NULL_CHECK(sp[0].o))->F_commands = (jref) sp[1].o;
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_util_CommandHandler *) NULL_CHECK(sp[0].o))->F_orderedCommands = (jref) sp[1].o;
	LINE_NUMBER(17);
	((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_prefix = (jref) (frame[1].o);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_CommandHandler_setPrefix_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:setPrefix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_prefix = (jref) (frame[1].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_CommandHandler_getPrefix_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:getPrefix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_prefix;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_CommandHandler_handleMessage_java_lang_String_R_arc_util_CommandHandler$CommandResponse(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:handleMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:handleMessage", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_prefix;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(37);
	clinit_arc_util_CommandHandler$CommandResponse(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$CommandResponse);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_noCommand;
	init_arc_util_CommandHandler$CommandResponse_arc_util_CommandHandler$ResponseType_arc_util_CommandHandler$Command_java_lang_String(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_prefix;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(41);
	jint temp1 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	if (temp1 == 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(1);
label_5:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(42);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + (jint(1))));
	sp += 1;
	goto label_8;
	}
label_7:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_8:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(44);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_commands;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[6].o = (checkCast(ctx, &class_arc_util_CommandHandler$Command, sp[0].o));
	LINE_NUMBER(48);
	if ((frame[6].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(49);
	frame[7].i = (jint(0));
	LINE_NUMBER(50);
	frame[8].i = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(53);
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[6].o)))->F_params;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(54);
	clinit_arc_util_CommandHandler$CommandResponse(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$CommandResponse);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_manyArguments;
	init_arc_util_CommandHandler$CommandResponse_arc_util_CommandHandler$ResponseType_arc_util_CommandHandler$Command_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[6].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(55);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_18;
	}
	goto label_19;
label_18:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[6].o)))->F_params;
	if (((jint)((arc_util_CommandHandler$CommandParam *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))))->F_optional) != 0) goto label_20;
	}
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[6].o)))->F_params;
	if (temp0 >= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_20;
	}
	{
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[6].o)))->F_params;
	if (((jint)((arc_util_CommandHandler$CommandParam *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[7].i) + (jint(1)))))))->F_optional) == 0) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(58);
	frame[8].i = (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[6].o)))->F_params;
	if (((jint)((arc_util_CommandHandler$CommandParam *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))))->F_variadic) == 0) goto label_22;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[4].o));
	LINE_NUMBER(63);
	goto label_19;
	}
label_22:;
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	frame[9].i = temp0;
	LINE_NUMBER(67);
	if ((frame[9].i) != (jint(-1))) goto label_26;
	}
	{
	LINE_NUMBER(68);
	if ((frame[8].i) != 0) goto label_28;
	}
	{
	LINE_NUMBER(69);
	clinit_arc_util_CommandHandler$CommandResponse(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$CommandResponse);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_fewArguments;
	init_arc_util_CommandHandler$CommandResponse_arc_util_CommandHandler$ResponseType_arc_util_CommandHandler$Command_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[6].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[4].o));
	LINE_NUMBER(72);
	goto label_19;
	}
label_26:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[4].o), (jint(0)), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[10].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + (jint(1))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[10].o));
	LINE_NUMBER(79);
	INST_IINC(7, 1);
	LINE_NUMBER(80);
	goto label_15;
	}
label_19:;
	{
	LINE_NUMBER(82);
	if ((frame[8].i) != 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[6].o)))->F_params;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[6].o)))->F_params;
	if (((jint)((arc_util_CommandHandler$CommandParam *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_optional) != 0) goto label_35;
	}
	{
	LINE_NUMBER(83);
	clinit_arc_util_CommandHandler$CommandResponse(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$CommandResponse);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_fewArguments;
	init_arc_util_CommandHandler$CommandResponse_arc_util_CommandHandler$ResponseType_arc_util_CommandHandler$Command_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[6].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_35:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[6].o)))->F_runner;
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, (frame[5].o), (((jobject) &class_java_lang_String)));
	((func_arc_util_CommandHandler$CommandRunner_accept_Array1_java_lang_String_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_util_CommandHandler$CommandRunner, INDEX_arc_util_CommandHandler$CommandRunner_accept_Array1_java_lang_String_java_lang_Object, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[1].o)), (frame[2].o));
	LINE_NUMBER(88);
	clinit_arc_util_CommandHandler$CommandResponse(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$CommandResponse);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_valid;
	init_arc_util_CommandHandler$CommandResponse_arc_util_CommandHandler$ResponseType_arc_util_CommandHandler$Command_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[6].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(90);
	clinit_arc_util_CommandHandler$CommandResponse(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$CommandResponse);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_unknownCommand;
	init_arc_util_CommandHandler$CommandResponse_arc_util_CommandHandler$ResponseType_arc_util_CommandHandler$Command_java_lang_String(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_CommandHandler_removeCommand_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:removeCommand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_commands;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_util_CommandHandler$Command, sp[0].o));
	LINE_NUMBER(96);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_commands;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_orderedCommands;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:register", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:register", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_orderedCommands;
	{ /* InvokeDynamic */
		clinit_arc_util_CommandHandler_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (arc_util_CommandHandler_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_arc_util_CommandHandler_invoke_arc_func_Boolf_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_remove_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(118);
	clinit_arc_util_CommandHandler$Command(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$Command);
	init_arc_util_CommandHandler$Command_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_commands;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[5].o));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_orderedCommands;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:register", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_arc_util_CommandHandler_invoke_arc_util_CommandHandler$CommandRunner_0(ctx);
		auto proxy = (arc_util_CommandHandler_invoke_arc_util_CommandHandler$CommandRunner_0 *) gcAlloc(ctx, &class_arc_util_CommandHandler_invoke_arc_util_CommandHandler$CommandRunner_0);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:register", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_arc_util_CommandHandler_invoke_arc_util_CommandHandler$CommandRunner_1(ctx);
		auto proxy = (arc_util_CommandHandler_invoke_arc_util_CommandHandler$CommandRunner_1 *) gcAlloc(ctx, &class_arc_util_CommandHandler_invoke_arc_util_CommandHandler$CommandRunner_1);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:getCommandList", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_util_CommandHandler *) NULL_CHECK((frame[0].o)))->F_orderedCommands;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_CommandHandler_lambda$register$2_arc_func_Cons_Array1_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:lambda$register$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(129);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_CommandHandler_lambda$register$1_arc_func_Cons_Array1_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:lambda$register$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(125);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_CommandHandler_lambda$register$0_java_lang_String_arc_util_CommandHandler$Command_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler:lambda$register$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[1].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_CommandHandler[] {
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
	(void *) M_arc_util_CommandHandler_setPrefix_java_lang_String,
	(void *) M_arc_util_CommandHandler_getPrefix_R_java_lang_String,
	(void *) M_arc_util_CommandHandler_handleMessage_java_lang_String_R_arc_util_CommandHandler$CommandResponse,
	(void *) M_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse,
	(void *) M_arc_util_CommandHandler_removeCommand_java_lang_String,
	(void *) M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command,
	(void *) M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command,
	(void *) M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command,
	(void *) M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command,
	(void *) M_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq,
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
	{ "setPrefix", "(Ljava/lang/String;)V" },
	{ "getPrefix", "()Ljava/lang/String;" },
	{ "handleMessage", "(Ljava/lang/String;)Larc/util/CommandHandler$CommandResponse;" },
	{ "handleMessage", "(Ljava/lang/String;Ljava/lang/Object;)Larc/util/CommandHandler$CommandResponse;" },
	{ "removeCommand", "(Ljava/lang/String;)V" },
	{ "register", "(Ljava/lang/String;Ljava/lang/String;Larc/util/CommandHandler$CommandRunner;)Larc/util/CommandHandler$Command;" },
	{ "register", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Larc/util/CommandHandler$CommandRunner;)Larc/util/CommandHandler$Command;" },
	{ "register", "(Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)Larc/util/CommandHandler$Command;" },
	{ "register", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)Larc/util/CommandHandler$Command;" },
	{ "getCommandList", "()Larc/struct/Seq;" },
};

static jclass innerClasses[] {
	&class_arc_util_CommandHandler$CommandResponse,
	&class_arc_util_CommandHandler$ResponseType,
	&class_arc_util_CommandHandler$Command,
	&class_arc_util_CommandHandler$CommandParam,
	&class_arc_util_CommandHandler$CommandRunner,
};

static FieldMetadata fields[] {
	{ "prefix", &class_java_lang_String, offsetof(arc_util_CommandHandler, F_prefix), "Ljava/lang/String;", 1 },
	{ "commands", &class_arc_struct_ObjectMap, offsetof(arc_util_CommandHandler, F_commands), "Larc/struct/ObjectMap;", 18 },
	{ "orderedCommands", &class_arc_struct_Seq, offsetof(arc_util_CommandHandler, F_orderedCommands), "Larc/struct/Seq;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_CommandHandler_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setPrefix", (intptr_t) M_arc_util_CommandHandler_setPrefix_java_lang_String, VTABLE_arc_util_CommandHandler_setPrefix_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getPrefix", (intptr_t) M_arc_util_CommandHandler_getPrefix_R_java_lang_String, VTABLE_arc_util_CommandHandler_getPrefix_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "handleMessage", (intptr_t) M_arc_util_CommandHandler_handleMessage_java_lang_String_R_arc_util_CommandHandler$CommandResponse, VTABLE_arc_util_CommandHandler_handleMessage_java_lang_String_R_arc_util_CommandHandler$CommandResponse, "(Ljava/lang/String;)Larc/util/CommandHandler$CommandResponse;", 1 },
	{ "handleMessage", (intptr_t) M_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse, VTABLE_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse, "(Ljava/lang/String;Ljava/lang/Object;)Larc/util/CommandHandler$CommandResponse;", 1 },
	{ "removeCommand", (intptr_t) M_arc_util_CommandHandler_removeCommand_java_lang_String, VTABLE_arc_util_CommandHandler_removeCommand_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "register", (intptr_t) M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command, VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command, "(Ljava/lang/String;Ljava/lang/String;Larc/util/CommandHandler$CommandRunner;)Larc/util/CommandHandler$Command;", 1 },
	{ "register", (intptr_t) M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command, VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Larc/util/CommandHandler$CommandRunner;)Larc/util/CommandHandler$Command;", 1 },
	{ "register", (intptr_t) M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command, VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command, "(Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)Larc/util/CommandHandler$Command;", 1 },
	{ "register", (intptr_t) M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command, VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)Larc/util/CommandHandler$Command;", 1 },
	{ "getCommandList", (intptr_t) M_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq, VTABLE_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "lambda$register$2", (intptr_t) SM_arc_util_CommandHandler_lambda$register$2_arc_func_Cons_Array1_java_lang_String_java_lang_Object, 0, "(Larc/func/Cons;[Ljava/lang/String;Ljava/lang/Object;)V", 4106 },
	{ "lambda$register$1", (intptr_t) SM_arc_util_CommandHandler_lambda$register$1_arc_func_Cons_Array1_java_lang_String_java_lang_Object, 0, "(Larc/func/Cons;[Ljava/lang/String;Ljava/lang/Object;)V", 4106 },
	{ "lambda$register$0", (intptr_t) SM_arc_util_CommandHandler_lambda$register$0_java_lang_String_arc_util_CommandHandler$Command_R_boolean, 0, "(Ljava/lang/String;Larc/util/CommandHandler$Command;)Z", 4106 },
};

Class class_arc_util_CommandHandler{
		.nativeName = (intptr_t) "arc/util/CommandHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_CommandHandler),
		.classVtable = (intptr_t) vtable_arc_util_CommandHandler,
		.staticInitializer = (intptr_t) clinit_arc_util_CommandHandler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_CommandHandler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_CommandHandler = registerClass(&class_arc_util_CommandHandler);

}
