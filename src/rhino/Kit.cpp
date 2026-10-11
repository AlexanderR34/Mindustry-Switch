#include "rhino/Kit.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/Kit_ComplexKey.h"
#include "java/util/Map.h"
#include "java/io/BufferedReader.h"
#include "java/io/PrintStream.h"
#include "java/lang/CharSequence.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jbool SF_rhino_Kit_isIos;

void mark_rhino_Kit(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Kit *) object;
}

void init_rhino_Kit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:classOrNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(16);
	frame[1].o = sp[0].o;
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_classOrNull_java_lang_ClassLoader_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:classOrNull", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((func_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class])(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(30);
	frame[2].o = sp[0].o;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_newInstanceOrNull_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:newInstanceOrNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_java_lang_Class_newInstance_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_newInstance_R_java_lang_Object])(ctx, (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(40);
	frame[1].o = sp[0].o;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Kit_testIfCanLoadRhinoClasses_java_lang_ClassLoader_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:testIfCanLoadRhinoClasses", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(49);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_ContextFactoryClass;
	frame[1].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_ClassLoader_java_lang_String_R_java_lang_Class(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(55);
	if ((frame[2].o) != (frame[1].o)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_Kit_xDigitToInt_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:xDigitToInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(67);
	if ((frame[0].i) > (57)) goto label_1;
	}
	{
	LINE_NUMBER(68);
	INST_IINC(0, -48);
	LINE_NUMBER(69);
	if ((jint(0)) > (frame[0].i)) goto label_4;
	}
	LINE_NUMBER(70);
	goto label_6;
label_1:;
	{
	LINE_NUMBER(72);
	if ((frame[0].i) > (70)) goto label_7;
	}
	{
	LINE_NUMBER(73);
	if ((65) > (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(74);
	INST_IINC(0, -55);
	LINE_NUMBER(75);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(77);
	if ((frame[0].i) > (102)) goto label_4;
	}
	{
	LINE_NUMBER(78);
	if ((97) > (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(79);
	INST_IINC(0, -87);
	LINE_NUMBER(80);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (((frame[1].i) << (jint(4))) | (frame[0].i));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_addListener_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:addListener", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(136);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(137);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_java_lang_Object, 1))) == 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(139);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(140);
	frame[0].o = (frame[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(141);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_java_lang_Object, 1))) != 0) goto label_6;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[0].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[1].o);
	frame[0].o = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(144);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o)))));
	LINE_NUMBER(145);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(147);
	if ((frame[3].i) >= (jint(2))) goto label_10;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[3].i) + (jint(1))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(149);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[4].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(150);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(151);
	frame[0].o = (frame[4].o);
	}
label_5:;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_removeListener_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:removeListener", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(173);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(174);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_java_lang_Object, 1))) == 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(176);
	if ((frame[0].o) != (frame[1].o)) goto label_3;
	}
	{
	LINE_NUMBER(177);
	frame[0].o = (jobject(nullptr));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(178);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_java_lang_Object, 1))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(179);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o)))));
	LINE_NUMBER(180);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(182);
	if ((frame[3].i) >= (jint(2))) goto label_9;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(183);
	if ((frame[3].i) != (jint(2))) goto label_10;
	}
	{
	LINE_NUMBER(184);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))) != (frame[1].o)) goto label_12;
	}
	{
	LINE_NUMBER(185);
	frame[0].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))));
	goto label_5;
	}
label_12:;
	{
	LINE_NUMBER(186);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))) != (frame[1].o)) goto label_5;
	}
	{
	LINE_NUMBER(187);
	frame[0].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1))));
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(190);
	frame[4].i = (frame[3].i);
	}
label_15:;
	{
	LINE_NUMBER(192);
	INST_IINC(4, -1);
	LINE_NUMBER(193);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))) != (frame[1].o)) goto label_17;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[3].i) - (jint(1))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(195);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(196);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[4].i) + (jint(1))), (frame[5].o), (frame[4].i), ((frame[3].i) - ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(197);
	frame[0].o = (frame[5].o);
	LINE_NUMBER(198);
	goto label_5;
	}
label_17:;
	{
	LINE_NUMBER(200);
	if ((frame[4].i) != 0) goto label_15;
	}
label_5:;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_getListener_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:getListener", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(219);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(220);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(222);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_java_lang_Object, 1))) != 0) goto label_5;
	}
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(224);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o)))));
	LINE_NUMBER(226);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) >= (jint(2))) goto label_8;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))));
	}
label_1:;
	{
	LINE_NUMBER(228);
	if ((frame[1].i) != (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(229);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_java_lang_Object, 1))) != 0) goto label_11;
	}
	{
	LINE_NUMBER(230);
	if ((frame[0].o) != nullptr) goto label_13;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(233);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o)))));
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(238);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o)))));
	LINE_NUMBER(239);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(240);
	if ((frame[3].i) >= (jint(2))) goto label_17;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(241);
	if ((frame[1].i) != (frame[3].i)) goto label_18;
	}
	{
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_18:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_initHash_java_util_Map_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:initHash", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(250);
	if ((frame[4].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(253);
	frame[2].o = (frame[4].o);
	}
label_10:;
	{
	LINE_NUMBER(255);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_11:;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_makeHashKeyFromPair_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:makeHashKeyFromPair", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(287);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(288);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(289);
	clinit_rhino_Kit$ComplexKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Kit$ComplexKey);
	init_rhino_Kit$ComplexKey_java_lang_Object_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_readReader_java_io_Reader_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:readReader", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(293);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	init_java_io_BufferedReader_java_io_Reader(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	frame[2].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_15; } // goto label_8
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject) createArray(ctx, &class_char, (1024));
	frame[3].o = sp[0].o;
	LINE_NUMBER(295);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (1024));
	frame[4].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(297);
	jint temp0 = (jint)((func_java_io_BufferedReader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_read_Array1_char_int_int_R_int])(ctx, (frame[1].o), (frame[3].o), (jint(0)), (1024));
	frame[5].i = temp0;
	if (temp0 == (jint(-1))) goto label_21;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, (frame[4].o), (frame[3].o), (jint(0)), (frame[5].i));
	goto label_19;
	}
label_21:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(301);
	if ((frame[1].o) == nullptr) goto label_23;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_24;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_23;
label_2:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[2].o), (frame[7].o));
	goto label_23;
	}
label_24:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, sp[0].o);
label_23:;
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_6:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	{
	sp -= 1;
	LINE_NUMBER(293);
	frame[3].o = sp[0].o;
	frame[2].o = (frame[3].o);
	throwException(ctx, (frame[3].o));	}
label_8:;
	LINE_NUMBER(301);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_25;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_26;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_25;
label_12:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[2].o), (frame[9].o));
	goto label_25;
	}
label_26:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, sp[0].o);
label_25:;
	INST_ALOAD(8);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_rhino_Kit_readStream_java_io_InputStream_int_R_Array1_byte(jcontext ctx, jobject param0, jint param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:readStream", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(306);
	if ((frame[1].i) > 0) goto label_1;
	}
	{
	LINE_NUMBER(307);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad initialBufferCapacity: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(311);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(313);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[2].o), (frame[3].i), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)));
	frame[4].i = temp0;
	LINE_NUMBER(314);
	if ((frame[4].i) >= 0) goto label_6;
	}
	LINE_NUMBER(315);
	goto label_8;
label_6:;
	{
	LINE_NUMBER(317);
	frame[3].i = ((frame[3].i) + (frame[4].i));
	LINE_NUMBER(318);
	if ((frame[3].i) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_10;
	}
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((((jarray) nullCheck(ctx, (frame[2].o)))->length) * (jint(2))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(320);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[5].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(321);
	frame[2].o = (frame[5].o);
	}
label_10:;
	LINE_NUMBER(323);
	goto label_4;
label_8:;
	{
	LINE_NUMBER(324);
	if ((frame[3].i) == (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_14;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(326);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[4].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(327);
	frame[2].o = (frame[4].o);
	}
label_14:;
	{
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:codeBug", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	{
	LINE_NUMBER(339);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FAILED ASSERTION"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	clinit_java_lang_System(ctx);
	sp[1].o = (jobject)SF_java_lang_System_err;
	((func_java_lang_RuntimeException_printStackTrace_java_io_PrintStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_RuntimeException_printStackTrace_java_io_PrintStream])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(342);
	throwException(ctx, (frame[0].o));	}

	popStackFrame(ctx);
}

jobject SM_rhino_Kit_codeBug_java_lang_String_R_java_lang_RuntimeException(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:codeBug", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(352);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FAILED ASSERTION: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(353);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(355);
	sp[0].o = frame[1].o;
	clinit_java_lang_System(ctx);
	sp[1].o = (jobject)SF_java_lang_System_err;
	((func_java_lang_RuntimeException_printStackTrace_java_io_PrintStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_RuntimeException_printStackTrace_java_io_PrintStream])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(356);
	throwException(ctx, (frame[1].o));	}

	popStackFrame(ctx);
}

void clinit_rhino_Kit(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit(ctx);
	{
	LINE_NUMBER(11);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"iOS"_j));
	sp[1].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.vm.name"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"robovm"_j))));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	clinit_rhino_Kit(ctx);
	SF_rhino_Kit_isIos = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_Kit[] {
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
};

static jclass innerClasses[] {
	&class_rhino_Kit$ComplexKey,
};

static FieldMetadata fields[] {
	{ "isIos", &class_boolean, (intptr_t) &SF_rhino_Kit_isIos, "Z", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Kit, 0, "()V", 1 },
	{ "classOrNull", (intptr_t) SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class, 0, "(Ljava/lang/String;)Ljava/lang/Class;", 9 },
	{ "classOrNull", (intptr_t) SM_rhino_Kit_classOrNull_java_lang_ClassLoader_java_lang_String_R_java_lang_Class, 0, "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", 9 },
	{ "newInstanceOrNull", (intptr_t) SM_rhino_Kit_newInstanceOrNull_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Class;)Ljava/lang/Object;", 8 },
	{ "testIfCanLoadRhinoClasses", (intptr_t) SM_rhino_Kit_testIfCanLoadRhinoClasses_java_lang_ClassLoader_R_boolean, 0, "(Ljava/lang/ClassLoader;)Z", 8 },
	{ "xDigitToInt", (intptr_t) SM_rhino_Kit_xDigitToInt_int_int_R_int, 0, "(II)I", 9 },
	{ "addListener", (intptr_t) SM_rhino_Kit_addListener_java_lang_Object_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "removeListener", (intptr_t) SM_rhino_Kit_removeListener_java_lang_Object_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "getListener", (intptr_t) SM_rhino_Kit_getListener_java_lang_Object_int_R_java_lang_Object, 0, "(Ljava/lang/Object;I)Ljava/lang/Object;", 9 },
	{ "initHash", (intptr_t) SM_rhino_Kit_initHash_java_util_Map_java_lang_Object_java_lang_Object_R_java_lang_Object, 0, "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "makeHashKeyFromPair", (intptr_t) SM_rhino_Kit_makeHashKeyFromPair_java_lang_Object_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "readReader", (intptr_t) SM_rhino_Kit_readReader_java_io_Reader_R_java_lang_String, 0, "(Ljava/io/Reader;)Ljava/lang/String;", 9 },
	{ "readStream", (intptr_t) SM_rhino_Kit_readStream_java_io_InputStream_int_R_Array1_byte, 0, "(Ljava/io/InputStream;I)[B", 9 },
	{ "codeBug", (intptr_t) SM_rhino_Kit_codeBug_R_java_lang_RuntimeException, 0, "()Ljava/lang/RuntimeException;", 9 },
	{ "codeBug", (intptr_t) SM_rhino_Kit_codeBug_java_lang_String_R_java_lang_RuntimeException, 0, "(Ljava/lang/String;)Ljava/lang/RuntimeException;", 9 },
	{ "<clinit>", (intptr_t) clinit_rhino_Kit, 0, "()V", 8 },
};

Class class_rhino_Kit{
		.nativeName = (intptr_t) "rhino/Kit",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Kit),
		.classVtable = (intptr_t) vtable_rhino_Kit,
		.staticInitializer = (intptr_t) clinit_rhino_Kit,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Kit,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Kit = registerClass(&class_rhino_Kit);

}
