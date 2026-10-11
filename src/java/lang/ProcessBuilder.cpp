#include "java/lang/ProcessBuilder.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/ProcessBuilder_Redirect_Type.h"
#include "java/util/HashMap.h"
#include "java/lang/InterruptedException.h"
#include "java/io/FileInputStream.h"
#include "java/util/ArrayList.h"
#include "java/lang/Iterable.h"
#include "java/lang/ProcessBuilder_RedirectPipeImpl.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Process.h"
#include "java/io/IOException.h"
#include "java/io/File.h"
#include "java/lang/Thread.h"
#include "java/lang/Exception.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/function/Consumer.h"
#include "java/util/Map.h"
#include "java/lang/ProcessBuilder_NullInputStream.h"
#include "java/lang/ProcessBuilder_invoke_java_util_function_Consumer_0.h"
#include "java/lang/ProcessBuilder_invoke_java_util_function_Consumer_1.h"
#include "java/lang/ProcessBuilder_Redirect.h"
#include "java/lang/Object.h"
#include "java/lang/AssertionError.h"
#include "java/lang/Process_PipeInputStream.h"
#include "java/lang/ProcessBuilder_NullOutputStream.h"
#include "java/lang/ProcessBuilder.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/util/List.h"

extern "C" {

jbool SF_java_lang_ProcessBuilder_$assertionsDisabled;

void mark_java_lang_ProcessBuilder(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_ProcessBuilder *) object;
	if (self->F_command)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_command)->clazz)->markFunction)((jobject) self->F_command, mark, depth + 1);
	if (self->F_directory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_directory)->clazz)->markFunction)((jobject) self->F_directory, mark, depth + 1);
	if (self->F_environment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_environment)->clazz)->markFunction)((jobject) self->F_environment, mark, depth + 1);
	if (self->F_redirects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_redirects)->clazz)->markFunction)((jobject) self->F_redirects, mark, depth + 1);
}

void init_java_lang_ProcessBuilder_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(44);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(46);
	((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_command = (jref) (frame[1].o);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_ProcessBuilder_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((java_lang_ProcessBuilder *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	LINE_NUMBER(52);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(53);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(55);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(56);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_command;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(55);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_command_java_util_List_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:command", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(64);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(66);
	((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_command = (jref) (frame[1].o);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_command_Array1_java_lang_String_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:command", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((java_lang_ProcessBuilder *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	LINE_NUMBER(73);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(74);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(76);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(77);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_command;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(76);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_command_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:command", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_command;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_environment_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:environment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_environment;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((java_lang_ProcessBuilder *) NULL_CHECK(sp[0].o))->F_environment = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_environment;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_environment_Array1_java_lang_String_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:environment", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	if ((clinit_java_lang_ProcessBuilder(ctx), (jint)SF_java_lang_ProcessBuilder_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_environment;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(99);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((java_lang_ProcessBuilder *) NULL_CHECK(sp[0].o))->F_environment = (jref) sp[1].o;
	LINE_NUMBER(102);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(103);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(105);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(106);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(107);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[5].o), (jint(0)));
	if (temp0 == (jint(-1))) goto label_10;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"\u0000.*"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[5].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[5].o), (61), (jint(0)));
	frame[6].i = temp0;
	LINE_NUMBER(112);
	if ((frame[6].i) == (jint(-1))) goto label_13;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_environment;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[5].o), (jint(0)), (frame[6].i));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[5].o), ((frame[6].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_13:;
	{
	LINE_NUMBER(105);
	INST_IINC(4, 1);
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_directory_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:directory", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_directory;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_directory_java_io_File_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:directory", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_directory = (jref) (frame[1].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirects_R_Array1_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirects", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirects;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_ProcessBuilder$Redirect, (jint(3)));
	jint temp0 = jint(0);
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	sp[2].o = (jobject)SF_java_lang_ProcessBuilder$Redirect_PIPE;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	sp[2].o = (jobject)SF_java_lang_ProcessBuilder$Redirect_PIPE;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	sp[2].o = (jobject)SF_java_lang_ProcessBuilder$Redirect_PIPE;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	((java_lang_ProcessBuilder *) NULL_CHECK(sp[0].o))->F_redirects = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirects;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirectInput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectInput", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type])(ctx, (frame[1].o));
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_WRITE;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type])(ctx, (frame[1].o));
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_APPEND;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)M_java_lang_ProcessBuilder_redirects_R_Array1_java_lang_ProcessBuilder$Redirect(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(143);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Redirect invalid for reading: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirectOutput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectOutput", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type])(ctx, (frame[1].o));
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_READ;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(149);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Redirect invalid for writing: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)M_java_lang_ProcessBuilder_redirects_R_Array1_java_lang_ProcessBuilder$Redirect(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[1].o);
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirectError_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectError", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type])(ctx, (frame[1].o));
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_READ;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(158);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Redirect invalid for writing: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)M_java_lang_ProcessBuilder_redirects_R_Array1_java_lang_ProcessBuilder$Redirect(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (frame[1].o);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirectInput_java_io_File_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectInput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_ProcessBuilder$Redirect_from_java_io_File_R_java_lang_ProcessBuilder$Redirect(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder_redirectInput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ProcessBuilder_redirectInput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirectOutput_java_io_File_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectOutput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_ProcessBuilder$Redirect_to_java_io_File_R_java_lang_ProcessBuilder$Redirect(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder_redirectOutput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ProcessBuilder_redirectOutput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirectError_java_io_File_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectError", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_ProcessBuilder$Redirect_to_java_io_File_R_java_lang_ProcessBuilder$Redirect(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder_redirectError_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ProcessBuilder_redirectError_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirectInput_R_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectInput", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirects;
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	(sp++)->o = SF_java_lang_ProcessBuilder$Redirect_PIPE;
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirects;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirectOutput_R_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectOutput", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirects;
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	(sp++)->o = SF_java_lang_ProcessBuilder$Redirect_PIPE;
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirects;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirectError_R_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirects;
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	(sp++)->o = SF_java_lang_ProcessBuilder$Redirect_PIPE;
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirects;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_inheritIO_R_java_lang_ProcessBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:inheritIO", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)M_java_lang_ProcessBuilder_redirects_R_Array1_java_lang_ProcessBuilder$Redirect(ctx, (frame[0].o));
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect_INHERIT;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_ProcessBuilder_redirectErrorStream_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectErrorStream", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return ((jint)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirectErrorStream);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_redirectErrorStream_boolean_R_java_lang_ProcessBuilder(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:redirectErrorStream", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(199);
	((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirectErrorStream = (frame[1].i);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_start_R_java_lang_Process(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:start", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_redirects;
	sp[0].o = (jobject)M_java_lang_ProcessBuilder_start_Array1_java_lang_ProcessBuilder$Redirect_R_java_lang_Process(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder_start_Array1_java_lang_ProcessBuilder$Redirect_R_java_lang_Process(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:start", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_command;
	sp[1].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_command;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, temp0);
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[0].o));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[2].o));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[0].o));
	LINE_NUMBER(210);
	frame[3].o = (frame[2].o);
	LINE_NUMBER(211);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(213);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(214);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(215);
	if ((frame[6].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(216);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(213);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(220);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_directory;
	if (sp[0].o != nullptr) goto label_12;
	}
	INST_ACONST_NULL();
	goto label_13;
label_12:;
	{
	sp[0].o = (jobject)((java_lang_ProcessBuilder *) NULL_CHECK((frame[0].o)))->F_directory;
	sp[0].o = (jobject)((func_java_io_File_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(223);
	frame[7].o = (frame[2].o);
	LINE_NUMBER(224);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(226);
	frame[9].i = (jint(0));
	}
label_17:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_18;
	}
	{
	LINE_NUMBER(227);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(228);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[10].o), (jint(0)));
	if (temp0 < 0) goto label_21;
	}
	{
	LINE_NUMBER(229);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid null character in command"_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(226);
	INST_IINC(9, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(233);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Commands not supported on this platform"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ProcessBuilder_startPipeline_java_util_List_R_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:startPipeline", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(237);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(238);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(241);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(243);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_8;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_java_lang_ProcessBuilder, sp[0].o));
	LINE_NUMBER(245);
	sp[0].o = (jobject)M_java_lang_ProcessBuilder_redirects_R_Array1_java_lang_ProcessBuilder$Redirect(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(246);
	if ((frame[4].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder_redirectInput_R_java_lang_ProcessBuilder$Redirect) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_ProcessBuilder_redirectInput_R_java_lang_ProcessBuilder$Redirect])(ctx, (frame[5].o));
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect_PIPE;
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	LINE_NUMBER(248);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"builder redirectInput() must be PIPE except for the first builder: "_j))));
	sp[2].o = (jobject)((func_java_lang_ProcessBuilder_redirectInput_R_java_lang_ProcessBuilder$Redirect) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_ProcessBuilder_redirectInput_R_java_lang_ProcessBuilder$Redirect])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(251);
	ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))) = (frame[3].o);
	}
label_12:;
	{
	LINE_NUMBER(254);
	if ((frame[4].i) >= ((frame[1].i) - (jint(1)))) goto label_16;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder_redirectOutput_R_java_lang_ProcessBuilder$Redirect) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_ProcessBuilder_redirectOutput_R_java_lang_ProcessBuilder$Redirect])(ctx, (frame[5].o));
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect_PIPE;
	if (sp[0].o == sp[1].o) goto label_18;
	}
	{
	LINE_NUMBER(256);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"builder redirectOutput() must be PIPE except for the last builder: "_j))));
	sp[2].o = (jobject)((func_java_lang_ProcessBuilder_redirectOutput_R_java_lang_ProcessBuilder$Redirect) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_ProcessBuilder_redirectOutput_R_java_lang_ProcessBuilder$Redirect])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(259);
	sp[0].o = frame[6].o;
	jint temp0 = jint(1);
	clinit_java_lang_ProcessBuilder$RedirectPipeImpl(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$RedirectPipeImpl);
	init_java_lang_ProcessBuilder$RedirectPipeImpl(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(262);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)M_java_lang_ProcessBuilder_start_Array1_java_lang_ProcessBuilder$Redirect_R_java_lang_Process(ctx, (frame[5].o), (frame[6].o));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(263);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_ProcessBuilder$RedirectPipeImpl)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(264);
	clinit_java_lang_Process$PipeInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Process$PipeInputStream);
	sp[1].o = (jobject)((func_java_lang_ProcessBuilder$RedirectPipeImpl_getFd_R_java_io_FileDescriptor) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_ProcessBuilder$RedirectPipeImpl, (frame[3].o))))->vtable)[VTABLE_java_lang_ProcessBuilder$RedirectPipeImpl_getFd_R_java_io_FileDescriptor])(ctx, (checkCast(ctx, &class_java_lang_ProcessBuilder$RedirectPipeImpl, (frame[3].o))));
	init_java_lang_Process$PipeInputStream_java_io_FileDescriptor(ctx, sp[0].o, sp[1].o);
	((func_java_lang_Process$PipeInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Process$PipeInputStream_close])(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(267);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(1))));
	LINE_NUMBER(243);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(270);
	INST_ALOAD(2);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(271);
	frame[3].o = sp[0].o;
	LINE_NUMBER(272);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(273);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_java_lang_ProcessBuilder_invoke_java_util_function_Consumer_0(ctx);
		auto proxy = (java_lang_ProcessBuilder_invoke_java_util_function_Consumer_0 *) gcAlloc(ctx, &class_java_lang_ProcessBuilder_invoke_java_util_function_Consumer_0);
		sp[1].o = (jobject) proxy;
	}
	((func_java_lang_Iterable_forEach_java_util_function_Consumer) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_forEach_java_util_function_Consumer, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(274);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_java_lang_ProcessBuilder_invoke_java_util_function_Consumer_1(ctx);
		auto proxy = (java_lang_ProcessBuilder_invoke_java_util_function_Consumer_1 *) gcAlloc(ctx, &class_java_lang_ProcessBuilder_invoke_java_util_function_Consumer_1);
		sp[1].o = (jobject) proxy;
	}
	((func_java_lang_Iterable_forEach_java_util_function_Consumer) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_forEach_java_util_function_Consumer, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(282);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

void SM_java_lang_ProcessBuilder_lambda$startPipeline$0_java_lang_Process(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:lambda$startPipeline$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(276);
	jint temp0 = (jint)((func_java_lang_Process_waitFor_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Process_waitFor_R_int])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(279);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(277);
	frame[1].o = sp[0].o;
	LINE_NUMBER(278);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(281);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_java_lang_ProcessBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder(ctx);
	{
	LINE_NUMBER(35);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_lang_ProcessBuilder)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_lang_ProcessBuilder)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_java_lang_ProcessBuilder(ctx);
	SF_java_lang_ProcessBuilder_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_lang_ProcessBuilder[] {
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
	(void *) M_java_lang_ProcessBuilder_command_java_util_List_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_command_Array1_java_lang_String_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_command_R_java_util_List,
	(void *) M_java_lang_ProcessBuilder_environment_R_java_util_Map,
	(void *) M_java_lang_ProcessBuilder_environment_Array1_java_lang_String_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_directory_R_java_io_File,
	(void *) M_java_lang_ProcessBuilder_directory_java_io_File_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_redirects_R_Array1_java_lang_ProcessBuilder$Redirect,
	(void *) M_java_lang_ProcessBuilder_redirectInput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_redirectOutput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_redirectError_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_redirectInput_java_io_File_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_redirectOutput_java_io_File_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_redirectError_java_io_File_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_redirectInput_R_java_lang_ProcessBuilder$Redirect,
	(void *) M_java_lang_ProcessBuilder_redirectOutput_R_java_lang_ProcessBuilder$Redirect,
	(void *) M_java_lang_ProcessBuilder_redirectError_R_java_lang_ProcessBuilder$Redirect,
	(void *) M_java_lang_ProcessBuilder_inheritIO_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_redirectErrorStream_R_boolean,
	(void *) M_java_lang_ProcessBuilder_redirectErrorStream_boolean_R_java_lang_ProcessBuilder,
	(void *) M_java_lang_ProcessBuilder_start_R_java_lang_Process,
	(void *) M_java_lang_ProcessBuilder_start_Array1_java_lang_ProcessBuilder$Redirect_R_java_lang_Process,
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
	{ "command", "(Ljava/util/List;)Ljava/lang/ProcessBuilder;" },
	{ "command", "([Ljava/lang/String;)Ljava/lang/ProcessBuilder;" },
	{ "command", "()Ljava/util/List;" },
	{ "environment", "()Ljava/util/Map;" },
	{ "environment", "([Ljava/lang/String;)Ljava/lang/ProcessBuilder;" },
	{ "directory", "()Ljava/io/File;" },
	{ "directory", "(Ljava/io/File;)Ljava/lang/ProcessBuilder;" },
	{ "redirects", "()[Ljava/lang/ProcessBuilder$Redirect;" },
	{ "redirectInput", "(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;" },
	{ "redirectOutput", "(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;" },
	{ "redirectError", "(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;" },
	{ "redirectInput", "(Ljava/io/File;)Ljava/lang/ProcessBuilder;" },
	{ "redirectOutput", "(Ljava/io/File;)Ljava/lang/ProcessBuilder;" },
	{ "redirectError", "(Ljava/io/File;)Ljava/lang/ProcessBuilder;" },
	{ "redirectInput", "()Ljava/lang/ProcessBuilder$Redirect;" },
	{ "redirectOutput", "()Ljava/lang/ProcessBuilder$Redirect;" },
	{ "redirectError", "()Ljava/lang/ProcessBuilder$Redirect;" },
	{ "inheritIO", "()Ljava/lang/ProcessBuilder;" },
	{ "redirectErrorStream", "()Z" },
	{ "redirectErrorStream", "(Z)Ljava/lang/ProcessBuilder;" },
	{ "start", "()Ljava/lang/Process;" },
	{ "start", "([Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/Process;" },
};

static jclass innerClasses[] {
	&class_java_lang_ProcessBuilder$Redirect,
	&class_java_lang_ProcessBuilder$RedirectPipeImpl,
	&class_java_lang_ProcessBuilder$NullInputStream,
	&class_java_lang_ProcessBuilder$NullOutputStream,
};

static FieldMetadata fields[] {
	{ "command", &class_java_util_List, offsetof(java_lang_ProcessBuilder, F_command), "Ljava/util/List;", 2 },
	{ "directory", &class_java_io_File, offsetof(java_lang_ProcessBuilder, F_directory), "Ljava/io/File;", 2 },
	{ "environment", &class_java_util_Map, offsetof(java_lang_ProcessBuilder, F_environment), "Ljava/util/Map;", 2 },
	{ "redirectErrorStream", &class_boolean, offsetof(java_lang_ProcessBuilder, F_redirectErrorStream), "Z", 2 },
	{ "redirects", getArrayClass(&class_java_lang_ProcessBuilder$Redirect, 1), offsetof(java_lang_ProcessBuilder, F_redirects), "[Ljava/lang/ProcessBuilder$Redirect;", 2 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_lang_ProcessBuilder_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ProcessBuilder_java_util_List, 0, "(Ljava/util/List;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_ProcessBuilder_Array1_java_lang_String, 0, "([Ljava/lang/String;)V", 129 },
	{ "command", (intptr_t) M_java_lang_ProcessBuilder_command_java_util_List_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_command_java_util_List_R_java_lang_ProcessBuilder, "(Ljava/util/List;)Ljava/lang/ProcessBuilder;", 1 },
	{ "command", (intptr_t) M_java_lang_ProcessBuilder_command_Array1_java_lang_String_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_command_Array1_java_lang_String_R_java_lang_ProcessBuilder, "([Ljava/lang/String;)Ljava/lang/ProcessBuilder;", 129 },
	{ "command", (intptr_t) M_java_lang_ProcessBuilder_command_R_java_util_List, VTABLE_java_lang_ProcessBuilder_command_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "environment", (intptr_t) M_java_lang_ProcessBuilder_environment_R_java_util_Map, VTABLE_java_lang_ProcessBuilder_environment_R_java_util_Map, "()Ljava/util/Map;", 1 },
	{ "environment", (intptr_t) M_java_lang_ProcessBuilder_environment_Array1_java_lang_String_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_environment_Array1_java_lang_String_R_java_lang_ProcessBuilder, "([Ljava/lang/String;)Ljava/lang/ProcessBuilder;", 0 },
	{ "directory", (intptr_t) M_java_lang_ProcessBuilder_directory_R_java_io_File, VTABLE_java_lang_ProcessBuilder_directory_R_java_io_File, "()Ljava/io/File;", 1 },
	{ "directory", (intptr_t) M_java_lang_ProcessBuilder_directory_java_io_File_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_directory_java_io_File_R_java_lang_ProcessBuilder, "(Ljava/io/File;)Ljava/lang/ProcessBuilder;", 1 },
	{ "redirects", (intptr_t) M_java_lang_ProcessBuilder_redirects_R_Array1_java_lang_ProcessBuilder$Redirect, VTABLE_java_lang_ProcessBuilder_redirects_R_Array1_java_lang_ProcessBuilder$Redirect, "()[Ljava/lang/ProcessBuilder$Redirect;", 2 },
	{ "redirectInput", (intptr_t) M_java_lang_ProcessBuilder_redirectInput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_redirectInput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder, "(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;", 1 },
	{ "redirectOutput", (intptr_t) M_java_lang_ProcessBuilder_redirectOutput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_redirectOutput_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder, "(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;", 1 },
	{ "redirectError", (intptr_t) M_java_lang_ProcessBuilder_redirectError_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_redirectError_java_lang_ProcessBuilder$Redirect_R_java_lang_ProcessBuilder, "(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;", 1 },
	{ "redirectInput", (intptr_t) M_java_lang_ProcessBuilder_redirectInput_java_io_File_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_redirectInput_java_io_File_R_java_lang_ProcessBuilder, "(Ljava/io/File;)Ljava/lang/ProcessBuilder;", 1 },
	{ "redirectOutput", (intptr_t) M_java_lang_ProcessBuilder_redirectOutput_java_io_File_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_redirectOutput_java_io_File_R_java_lang_ProcessBuilder, "(Ljava/io/File;)Ljava/lang/ProcessBuilder;", 1 },
	{ "redirectError", (intptr_t) M_java_lang_ProcessBuilder_redirectError_java_io_File_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_redirectError_java_io_File_R_java_lang_ProcessBuilder, "(Ljava/io/File;)Ljava/lang/ProcessBuilder;", 1 },
	{ "redirectInput", (intptr_t) M_java_lang_ProcessBuilder_redirectInput_R_java_lang_ProcessBuilder$Redirect, VTABLE_java_lang_ProcessBuilder_redirectInput_R_java_lang_ProcessBuilder$Redirect, "()Ljava/lang/ProcessBuilder$Redirect;", 1 },
	{ "redirectOutput", (intptr_t) M_java_lang_ProcessBuilder_redirectOutput_R_java_lang_ProcessBuilder$Redirect, VTABLE_java_lang_ProcessBuilder_redirectOutput_R_java_lang_ProcessBuilder$Redirect, "()Ljava/lang/ProcessBuilder$Redirect;", 1 },
	{ "redirectError", (intptr_t) M_java_lang_ProcessBuilder_redirectError_R_java_lang_ProcessBuilder$Redirect, VTABLE_java_lang_ProcessBuilder_redirectError_R_java_lang_ProcessBuilder$Redirect, "()Ljava/lang/ProcessBuilder$Redirect;", 1 },
	{ "inheritIO", (intptr_t) M_java_lang_ProcessBuilder_inheritIO_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_inheritIO_R_java_lang_ProcessBuilder, "()Ljava/lang/ProcessBuilder;", 1 },
	{ "redirectErrorStream", (intptr_t) M_java_lang_ProcessBuilder_redirectErrorStream_R_boolean, VTABLE_java_lang_ProcessBuilder_redirectErrorStream_R_boolean, "()Z", 1 },
	{ "redirectErrorStream", (intptr_t) M_java_lang_ProcessBuilder_redirectErrorStream_boolean_R_java_lang_ProcessBuilder, VTABLE_java_lang_ProcessBuilder_redirectErrorStream_boolean_R_java_lang_ProcessBuilder, "(Z)Ljava/lang/ProcessBuilder;", 1 },
	{ "start", (intptr_t) M_java_lang_ProcessBuilder_start_R_java_lang_Process, VTABLE_java_lang_ProcessBuilder_start_R_java_lang_Process, "()Ljava/lang/Process;", 1 },
	{ "start", (intptr_t) M_java_lang_ProcessBuilder_start_Array1_java_lang_ProcessBuilder$Redirect_R_java_lang_Process, VTABLE_java_lang_ProcessBuilder_start_Array1_java_lang_ProcessBuilder$Redirect_R_java_lang_Process, "([Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/Process;", 2 },
	{ "startPipeline", (intptr_t) SM_java_lang_ProcessBuilder_startPipeline_java_util_List_R_java_util_List, 0, "(Ljava/util/List;)Ljava/util/List;", 9 },
	{ "lambda$startPipeline$0", (intptr_t) SM_java_lang_ProcessBuilder_lambda$startPipeline$0_java_lang_Process, 0, "(Ljava/lang/Process;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_lang_ProcessBuilder, 0, "()V", 8 },
};

Class class_java_lang_ProcessBuilder{
		.nativeName = (intptr_t) "java/lang/ProcessBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_ProcessBuilder),
		.classVtable = (intptr_t) vtable_java_lang_ProcessBuilder,
		.staticInitializer = (intptr_t) clinit_java_lang_ProcessBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ProcessBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ProcessBuilder = registerClass(&class_java_lang_ProcessBuilder);

}
