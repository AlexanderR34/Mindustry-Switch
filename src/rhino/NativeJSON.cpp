#include "rhino/NativeJSON.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Boolean.h"
#include "rhino/NativeArray.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/Callable.h"
#include "rhino/Undefined.h"
#include "rhino/NativeNumber.h"
#include "rhino/json/JsonParser_ParseException.h"
#include "java/util/Collection.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/Throwable.h"
#include "rhino/NativeBoolean.h"
#include "java/lang/Math.h"
#include "rhino/json/JsonParser.h"
#include "rhino/NativeObject.h"
#include "rhino/NativeJSON_StringifyState.h"
#include "java/util/Iterator.h"
#include "java/lang/Number.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "rhino/NativeJSON.h"
#include "rhino/NativeString.h"
#include "rhino/IdFunctionObject.h"
#include "java/lang/Long.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/util/LinkedList.h"
#include "java/util/Stack.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "java/lang/Double.h"

extern "C" {

jobject SF_rhino_NativeJSON_JSON_TAG;
jint SF_rhino_NativeJSON_MAX_STRINGIFY_GAP_LENGTH;
jint SF_rhino_NativeJSON_Id_toSource;
jint SF_rhino_NativeJSON_Id_parse;
jint SF_rhino_NativeJSON_Id_stringify;
jint SF_rhino_NativeJSON_LAST_METHOD_ID;
jint SF_rhino_NativeJSON_MAX_ID;

void mark_rhino_NativeJSON(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeJSON_JSON_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeJSON_JSON_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeJSON_JSON_TAG, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_IdScriptableObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeJSON *) object;
}

void SM_rhino_NativeJSON_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(24);
	clinit_rhino_NativeJSON(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJSON);
	init_rhino_NativeJSON(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(25);
	((func_rhino_NativeJSON_activatePrototypeMap_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeJSON_activatePrototypeMap_int])(ctx, (frame[2].o), (jint(3)));
	LINE_NUMBER(26);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	((func_rhino_NativeJSON_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeJSON_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(27);
	((func_rhino_NativeJSON_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeJSON_setParentScope_rhino_Scriptable])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(28);
	if ((frame[1].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(29);
	((func_rhino_NativeJSON_sealObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeJSON_sealObject])(ctx, (frame[2].o));
	}
label_5:;
	{
	LINE_NUMBER(31);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"JSON"_j))), (frame[2].o), (jint(2)));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeJSON(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJSON_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"JSON"_j)));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeJSON_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(45);
	if ((frame[1].i) > (jint(3))) goto label_1;
	}
	{
	LINE_NUMBER(48);
	switch((frame[1].i)) {
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		default: goto label_6;
	}
	}
label_3:;
	{
	LINE_NUMBER(50);
	frame[3].i = (jint(0));
	LINE_NUMBER(51);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(52);
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(54);
	frame[3].i = (jint(2));
	LINE_NUMBER(55);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"parse"_j)));
	LINE_NUMBER(56);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(58);
	frame[3].i = (jint(3));
	LINE_NUMBER(59);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"stringify"_j)));
	LINE_NUMBER(60);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(62);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeJSON(ctx);
	sp[1].o = (jobject)SF_rhino_NativeJSON_JSON_TAG;
	sp[0].o = (jobject)((func_rhino_NativeJSON_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeJSON_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(65);
	goto label_15;
	}
label_1:;
	{
	LINE_NUMBER(66);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeJSON_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:execIdCall", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeJSON(ctx);
	sp[1].o = (jobject)SF_rhino_NativeJSON_JSON_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(77);
	switch((frame[6].i)) {
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		default: goto label_7;
	}
	}
label_4:;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"JSON"_j)));
	}
label_5:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[5].o), (jint(0)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(83);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(84);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(85);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1))));
	}
label_10:;
	{
	LINE_NUMBER(87);
	if ((isInstance(ctx, (frame[8].o), &class_rhino_Callable)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)SM_rhino_NativeJSON_parse_rhino_Context_rhino_Scriptable_java_lang_String_rhino_Callable_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[7].o), (checkCast(ctx, &class_rhino_Callable, (frame[8].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_rhino_NativeJSON_parse_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(94);
	frame[7].o = (jobject(nullptr));
	frame[8].o = (jobject(nullptr));
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(95);
	switch((((jarray) nullCheck(ctx, (frame[5].o)))->length)) {
		case 0: goto label_17;
		case 1: goto label_18;
		case 2: goto label_19;
		case 3: goto label_20;
		default: goto label_17;
	}
	}
label_20:;
	{
	LINE_NUMBER(97);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(2))));
	}
label_19:;
	{
	LINE_NUMBER(100);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1))));
	}
label_18:;
	{
	LINE_NUMBER(103);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0))));
	}
label_17:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)SM_rhino_NativeJSON_stringify_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[7].o), (frame[8].o), (frame[9].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(113);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJSON_parse_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:parse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_json_JsonParser$ParseException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(119);
	clinit_rhino_json_JsonParser(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser);
	init_rhino_json_JsonParser_rhino_Context_rhino_Scriptable(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_rhino_json_JsonParser_parseValue_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_json_JsonParser_parseValue_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(120);
	frame[3].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"SyntaxError"_j));
	sp[1].o = (jobject)((func_rhino_json_JsonParser$ParseException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_json_JsonParser$ParseException_getMessage_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJSON_parse_rhino_Context_rhino_Scriptable_java_lang_String_rhino_Callable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:parse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)SM_rhino_NativeJSON_parse_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(129);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[5].o), (frame[4].o));
	LINE_NUMBER(130);
	sp[0].o = (jobject)SM_rhino_NativeJSON_walk_rhino_Context_rhino_Scriptable_rhino_Callable_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[5].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJSON_walk_rhino_Context_rhino_Scriptable_rhino_Callable_rhino_Scriptable_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[21];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:walk", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(136);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[4].o))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[4].o))));
	sp[0].o = (jobject)((func_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, (frame[3].o));
	frame[5].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (checkCast(ctx, &class_java_lang_String, (frame[4].o))), (frame[3].o));
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(142);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Scriptable)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(143);
	frame[6].o = (checkCast(ctx, &class_rhino_Scriptable, (frame[5].o)));
	LINE_NUMBER(144);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_NativeArray)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(145);
	jlong temp0 = (jlong)((func_rhino_NativeArray_getLength_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeArray, (frame[6].o))))->vtable)[VTABLE_rhino_NativeArray_getLength_R_long])(ctx, (checkCast(ctx, &class_rhino_NativeArray, (frame[6].o))));
	frame[7].l = temp0;
	LINE_NUMBER(146);
	frame[9].l = (jlong(0));
	}
label_11:;
	{
	if ((longCompare((frame[9].l), (frame[7].l))) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(148);
	if ((longCompare((frame[9].l), (jlong(2147483647ll)))) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[9].l));
	frame[11].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = (jobject)SM_rhino_NativeJSON_walk_rhino_Context_rhino_Scriptable_rhino_Callable_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[6].o), (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(151);
	sp[0].o = frame[12].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_18;
	}
	{
	LINE_NUMBER(152);
	((func_rhino_Scriptable_delete_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_java_lang_String, (frame[6].o)))(ctx, (frame[6].o), (frame[11].o));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(154);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[11].o), (frame[6].o), (frame[12].o));
	}
label_20:;
	LINE_NUMBER(156);
	goto label_21;
label_14:;
	{
	LINE_NUMBER(157);
	frame[11].i = (jint((frame[9].l)));
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[6].o;
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[11].i));
	sp[0].o = (jobject)SM_rhino_NativeJSON_walk_rhino_Context_rhino_Scriptable_rhino_Callable_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(159);
	sp[0].o = frame[12].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	LINE_NUMBER(160);
	((func_rhino_Scriptable_delete_int) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_int, (frame[6].o)))(ctx, (frame[6].o), (frame[11].i));
	goto label_21;
	}
label_24:;
	{
	LINE_NUMBER(162);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[11].i), (frame[6].o), (frame[12].o));
	}
label_21:;
	{
	LINE_NUMBER(146);
	frame[9].l = ((frame[9].l) + (jlong(1)));
	goto label_11;
	}
label_12:;
	LINE_NUMBER(166);
	goto label_5;
label_8:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(168);
	frame[8].o = (frame[7].o);
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_27:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_5;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_rhino_NativeJSON_walk_rhino_Context_rhino_Scriptable_rhino_Callable_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[6].o), (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(170);
	sp[0].o = frame[12].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_30;
	}
	{
	LINE_NUMBER(171);
	if ((isInstance(ctx, (frame[11].o), &class_java_lang_Number)) == 0) goto label_32;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[11].o))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[11].o))));
	((func_rhino_Scriptable_delete_int) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_int, sp[0].o))(ctx, sp[0].o, temp0);
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(174);
	((func_rhino_Scriptable_delete_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_java_lang_String, (frame[6].o)))(ctx, (frame[6].o), (checkCast(ctx, &class_java_lang_String, (frame[11].o))));
	goto label_34;
	}
label_30:;
	{
	LINE_NUMBER(176);
	if ((isInstance(ctx, (frame[11].o), &class_java_lang_Number)) == 0) goto label_35;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[11].o))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[11].o))));
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, (frame[6].o), (frame[12].o));
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(179);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (checkCast(ctx, &class_java_lang_String, (frame[11].o))), (frame[6].o), (frame[12].o));
	}
label_34:;
	{
	LINE_NUMBER(168);
	INST_IINC(10, 1);
	goto label_27;
	}
label_5:;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[3].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[4].o);
	ARRAY_ACCESS(jobject, sp[4].o, (jint(1))) = (frame[5].o);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJSON_repeat_char_int_R_java_lang_String(jcontext ctx, jchar param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:repeat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(190);
	SM_java_util_Arrays_fill_Array1_char_char(ctx, (frame[2].o), (frame[0].i));
	LINE_NUMBER(191);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJSON_stringify_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:stringify", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(221);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(222);
	frame[6].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(224);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(225);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(227);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Callable)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(228);
	frame[8].o = (checkCast(ctx, &class_rhino_Callable, (frame[3].o)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(229);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_NativeArray)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(230);
	clinit_java_util_LinkedList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList);
	init_java_util_LinkedList(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(231);
	frame[9].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[3].o)));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((func_rhino_NativeArray_getIndexIds_R_java_util_List) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_NativeArray_getIndexIds_R_java_util_List])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	frame[11].i = temp0;
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[9].o), (frame[11].i), (frame[9].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(234);
	if ((isInstance(ctx, (frame[12].o), &class_java_lang_String)) != 0) goto label_14;
	}
	{
	if ((isInstance(ctx, (frame[12].o), &class_java_lang_Number)) == 0) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(235);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[7].o)))(ctx, (frame[7].o), (frame[12].o));
	goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(236);
	if ((isInstance(ctx, (frame[12].o), &class_rhino_NativeString)) != 0) goto label_17;
	}
	{
	if ((isInstance(ctx, (frame[12].o), &class_rhino_NativeNumber)) == 0) goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[12].o));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	LINE_NUMBER(239);
	goto label_11;
label_7:;
	{
	LINE_NUMBER(242);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeNumber)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(243);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[4].o));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	frame[4].o = sp[0].o;
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(244);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeString)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(248);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Number)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(249);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, (frame[4].o));
	frame[9].i = (jint(temp0));
	LINE_NUMBER(250);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (10), (frame[9].i));
	frame[9].i = temp1;
	LINE_NUMBER(251);
	if ((frame[9].i) <= 0) goto label_26;
	}
	{
	sp[0].o = (jobject)SM_rhino_NativeJSON_repeat_char_int_R_java_lang_String(ctx, (32), (frame[9].i));
	sp += 1;
	goto label_27;
	}
label_26:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_27:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(252);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[9].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(253);
	goto label_30;
	}
label_22:;
	{
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_String)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(254);
	frame[6].o = (checkCast(ctx, &class_java_lang_String, (frame[4].o)));
	LINE_NUMBER(255);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	if (temp0 <= (10)) goto label_30;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[6].o), (jint(0)), (10));
	frame[6].o = sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(260);
	clinit_rhino_NativeJSON$StringifyState(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJSON$StringifyState);
	init_rhino_NativeJSON$StringifyState_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Callable_java_util_List_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[5].o), (frame[6].o), (frame[8].o), (frame[7].o), (frame[4].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(267);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(268);
	((func_rhino_ScriptableObject_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ScriptableObject_setParentScope_rhino_Scriptable])(ctx, (frame[10].o), (frame[1].o));
	LINE_NUMBER(269);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	((func_rhino_ScriptableObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(270);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[2].o), (jint(0)));
	LINE_NUMBER(271);
	sp[0].o = (jobject)SM_rhino_NativeJSON_str_java_lang_Object_rhino_Scriptable_rhino_NativeJSON$StringifyState_R_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[10].o), (frame[9].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJSON_str_java_lang_Object_rhino_Scriptable_rhino_NativeJSON$StringifyState_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:str", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(277);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (checkCast(ctx, &class_java_lang_String, (frame[0].o))));
	frame[3].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(280);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(283);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Scriptable)) == 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[3].o))), (((jobject) createStringLiteral(ctx, u8"toJSON"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[3].o))), (((jobject) createStringLiteral(ctx, u8"toJSON"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(285);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Callable)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[2].o)))->F_cx;
	sp[1].o = checkCast(ctx, &class_rhino_Scriptable, (frame[3].o));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"toJSON"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[0].o);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_callMethod_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[2].o)))->F_replacer;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[2].o)))->F_replacer;
	sp[1].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[2].o)))->F_cx;
	sp[2].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[2].o)))->F_scope;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[0].o);
	ARRAY_ACCESS(jobject, sp[4].o, (jint(1))) = (frame[3].o);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[3].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(297);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_NativeNumber)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(298);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	frame[3].o = sp[0].o;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(299);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_NativeString)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(301);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_NativeBoolean)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = checkCast(ctx, &class_rhino_NativeBoolean, (frame[3].o));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_BooleanClass;
	sp[0].o = (jobject)((func_rhino_NativeBoolean_getDefaultValue_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeBoolean_getDefaultValue_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(305);
	if ((frame[3].o) != nullptr) goto label_17;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_17:;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[3].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_18;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_18:;
	{
	LINE_NUMBER(307);
	sp[0].o = frame[3].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_FALSE;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_19;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_19:;
	{
	LINE_NUMBER(309);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_CharSequence)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_rhino_NativeJSON_quote_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(313);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Number)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(314);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[3].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[3].o))));
	frame[4].d = temp0;
	LINE_NUMBER(315);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp1 != 0) goto label_25;
	}
	{
	if ((doubleCompare((frame[4].d), (jdouble(std::numeric_limits<double>::infinity())), -1)) == 0) goto label_25;
	}
	{
	if ((doubleCompare((frame[4].d), (jdouble(-std::numeric_limits<double>::infinity())), -1)) == 0) goto label_25;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_22:;
	{
	LINE_NUMBER(322);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Scriptable)) == 0) goto label_27;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Callable)) != 0) goto label_27;
	}
	{
	LINE_NUMBER(323);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_NativeArray)) == 0) goto label_29;
	}
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)SM_rhino_NativeJSON_ja_rhino_NativeArray_rhino_NativeJSON$StringifyState_R_java_lang_String(ctx, (checkCast(ctx, &class_rhino_NativeArray, (frame[3].o))), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)SM_rhino_NativeJSON_jo_rhino_Scriptable_rhino_NativeJSON$StringifyState_R_java_lang_String(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[3].o))), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(329);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJSON_join_java_util_Collection_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:join", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(333);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_2:;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(337);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(338);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(339);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJSON_jo_rhino_Scriptable_rhino_NativeJSON$StringifyState_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:jo", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_stack;
	jint temp0 = (jint)((func_java_util_Stack_search_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Stack_search_java_lang_Object_R_int])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.cyclic.value"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_stack;
	sp[0].o = (jobject)((func_java_util_Stack_push_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Stack_push_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(351);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_indent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(352);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_indent;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_gap;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK(sp[0].o))->F_indent = (jref) sp[1].o;
	LINE_NUMBER(354);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_propertyList;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_propertyList;
	sp[0].o = (jobject)((func_java_util_List_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(360);
	clinit_java_util_LinkedList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList);
	init_java_util_LinkedList(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(362);
	frame[5].o = (frame[3].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_12;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(363);
	sp[0].o = (jobject)SM_rhino_NativeJSON_str_java_lang_Object_rhino_Scriptable_rhino_NativeJSON$StringifyState_R_java_lang_Object(ctx, (frame[8].o), (frame[0].o), (frame[1].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(364);
	sp[0].o = frame[9].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_15;
	}
	{
	LINE_NUMBER(365);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[8].o));
	sp[1].o = (jobject)SM_rhino_NativeJSON_quote_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(366);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_gap;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_18;
	}
	{
	LINE_NUMBER(367);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[10].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(369);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[10].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[9].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(370);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[10].o));
	}
label_15:;
	{
	LINE_NUMBER(362);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(376);
	jint temp0 = (jint)((func_java_util_List_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_isEmpty_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(377);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"{}"_j)));
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_gap;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(380);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (123));
	sp[1].o = (jobject)SM_rhino_NativeJSON_join_java_util_Collection_java_lang_String_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(382);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",\n"_j))));
	sp[1].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_indent;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(383);
	sp[0].o = (jobject)SM_rhino_NativeJSON_join_java_util_Collection_java_lang_String_R_java_lang_String(ctx, (frame[4].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(384);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"{\n"_j))));
	sp[1].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_indent;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (10));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_stack;
	sp[0].o = (jobject)((func_java_util_Stack_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Stack_pop_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(390);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_indent = (jref) (frame[2].o);
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJSON_ja_rhino_NativeArray_rhino_NativeJSON$StringifyState_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:ja", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_stack;
	jint temp0 = (jint)((func_java_util_Stack_search_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Stack_search_java_lang_Object_R_int])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.cyclic.value"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_stack;
	sp[0].o = (jobject)((func_java_util_Stack_push_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Stack_push_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(400);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_indent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(401);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_indent;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_gap;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK(sp[0].o))->F_indent = (jref) sp[1].o;
	LINE_NUMBER(402);
	clinit_java_util_LinkedList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList);
	init_java_util_LinkedList(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(404);
	jlong temp0 = (jlong)((func_rhino_NativeArray_getLength_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_getLength_R_long])(ctx, (frame[0].o));
	frame[4].l = temp0;
	LINE_NUMBER(405);
	frame[6].l = (jlong(0));
	}
label_8:;
	{
	if ((longCompare((frame[6].l), (frame[4].l))) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(407);
	if ((longCompare((frame[6].l), (jlong(2147483647ll)))) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_rhino_NativeJSON_str_java_lang_Object_rhino_Scriptable_rhino_NativeJSON$StringifyState_R_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[8].o = sp[0].o;
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint((frame[6].l))));
	sp[0].o = (jobject)SM_rhino_NativeJSON_str_java_lang_Object_rhino_Scriptable_rhino_NativeJSON$StringifyState_R_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[8].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(412);
	sp[0].o = frame[8].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(415);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[8].o));
	}
label_17:;
	{
	LINE_NUMBER(405);
	frame[6].l = ((frame[6].l) + (jlong(1)));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(421);
	jint temp0 = (jint)((func_java_util_List_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_isEmpty_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(422);
	frame[6].o = (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_gap;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(425);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (91));
	sp[1].o = (jobject)SM_rhino_NativeJSON_join_java_util_Collection_java_lang_String_R_java_lang_String(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (93));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(427);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",\n"_j))));
	sp[1].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_indent;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(428);
	sp[0].o = (jobject)SM_rhino_NativeJSON_join_java_util_Collection_java_lang_String_R_java_lang_String(ctx, (frame[3].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(429);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[\n"_j))));
	sp[1].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_indent;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (10));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (93));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_stack;
	sp[0].o = (jobject)((func_java_util_Stack_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Stack_pop_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(434);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[1].o)))->F_indent = (jref) (frame[2].o);
	LINE_NUMBER(435);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJSON_quote_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:quote", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(439);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (temp0 + (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(440);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (34));
	LINE_NUMBER(441);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(442);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(443);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(444);
	switch((frame[4].i)) {
		case 8: goto label_8;
		case 9: goto label_9;
		case 10: goto label_10;
		case 12: goto label_11;
		case 13: goto label_12;
		case 34: goto label_13;
		case 92: goto label_14;
		default: goto label_15;
	}
	}
label_13:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\\""_j))));
	LINE_NUMBER(447);
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\\\"_j))));
	LINE_NUMBER(450);
	goto label_17;
	}
label_8:;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\b"_j))));
	LINE_NUMBER(453);
	goto label_17;
	}
label_11:;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\f"_j))));
	LINE_NUMBER(456);
	goto label_17;
	}
label_10:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	LINE_NUMBER(459);
	goto label_17;
	}
label_12:;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\r"_j))));
	LINE_NUMBER(462);
	goto label_17;
	}
label_9:;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\t"_j))));
	LINE_NUMBER(465);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(467);
	if ((frame[4].i) >= (32)) goto label_24;
	}
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\u"_j))));
	LINE_NUMBER(469);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"%04x"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[4].i));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[0].o = (jobject)SM_java_lang_String_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(471);
	goto label_17;
	}
label_24:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[4].i));
	}
label_17:;
	{
	LINE_NUMBER(442);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (34));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeJSON_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:findPrototypeId", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(488);
	frame[2].i = (jint(0));
	LINE_NUMBER(489);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(491);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 5: goto label_3;
		case 6: goto label_4;
		case 7: goto label_4;
		case 8: goto label_5;
		case 9: goto label_6;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(493);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"parse"_j)));
	LINE_NUMBER(494);
	frame[2].i = (jint(2));
	LINE_NUMBER(495);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(497);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(498);
	frame[2].i = (jint(1));
	LINE_NUMBER(499);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(501);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"stringify"_j)));
	LINE_NUMBER(502);
	frame[2].i = (jint(3));
	}
label_4:;
	{
	LINE_NUMBER(505);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_12;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_12:;
	{
	LINE_NUMBER(508);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeJSON(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeJSON_MAX_STRINGIFY_GAP_LENGTH = jint(10);
	SF_rhino_NativeJSON_Id_toSource = jint(1);
	SF_rhino_NativeJSON_Id_parse = jint(2);
	SF_rhino_NativeJSON_Id_stringify = jint(3);
	SF_rhino_NativeJSON_LAST_METHOD_ID = jint(3);
	SF_rhino_NativeJSON_MAX_ID = jint(3);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON(ctx);
	{
	LINE_NUMBER(19);
	clinit_rhino_NativeJSON(ctx);
	SF_rhino_NativeJSON_JSON_TAG = (((jobject) createStringLiteral(ctx, u8"JSON"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeJSON[] {
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
	(void *) M_rhino_NativeJSON_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_setAttributes_java_lang_String_int,
	(void *) M_rhino_ScriptableObject_setAttributes_int_int,
	(void *) M_rhino_ScriptableObject_setAttributes_rhino_Symbol_int,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean,
	(void *) M_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean,
	(void *) M_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int,
	(void *) M_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_avoidObjectDetection_R_boolean,
	(void *) M_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int,
	(void *) M_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean,
	(void *) M_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int,
	(void *) M_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_isExtensible_R_boolean,
	(void *) M_rhino_ScriptableObject_preventExtensions,
	(void *) M_rhino_ScriptableObject_sealObject,
	(void *) M_rhino_ScriptableObject_isSealed_R_boolean,
	(void *) M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeJSON_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getMaxInstanceId_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_NativeJSON_initPrototypeId_int,
	(void *) M_rhino_NativeJSON_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "get", "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "get", "(ILrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;Lrhino/Scriptable;)Z" },
	{ "has", "(ILrhino/Scriptable;)Z" },
	{ "put", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "put", "(ILrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Ljava/lang/String;)V" },
	{ "delete", "(I)V" },
	{ "getPrototype", "()Lrhino/Scriptable;" },
	{ "setPrototype", "(Lrhino/Scriptable;)V" },
	{ "getParentScope", "()Lrhino/Scriptable;" },
	{ "setParentScope", "(Lrhino/Scriptable;)V" },
	{ "getIds", "()[Ljava/lang/Object;" },
	{ "getDefaultValue", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "hasInstance", "(Lrhino/Scriptable;)Z" },
	{ "get", "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Lrhino/Symbol;Lrhino/Scriptable;)Z" },
	{ "put", "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Lrhino/Symbol;)V" },
	{ "getAllIds", "()[Ljava/lang/Object;" },
	{ "putConst", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "defineConst", "(Ljava/lang/String;Lrhino/Scriptable;)V" },
	{ "isConst", "(Ljava/lang/String;)Z" },
	{ "createSlotMap", "(I)Lrhino/SlotMapContainer;" },
	{ "getTypeOf", "()Ljava/lang/String;" },
	{ "getAttributes", "(Ljava/lang/String;)I" },
	{ "getAttributes", "(I)I" },
	{ "getAttributes", "(Lrhino/Symbol;)I" },
	{ "setAttributes", "(Ljava/lang/String;I)V" },
	{ "setAttributes", "(II)V" },
	{ "setAttributes", "(Lrhino/Symbol;I)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;Z)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;ZZ)V" },
	{ "getGetterOrSetter", "(Ljava/lang/String;IZ)Ljava/lang/Object;" },
	{ "isGetterOrSetter", "(Ljava/lang/String;IZ)Z" },
	{ "addLazilyInitializedValue", "(Ljava/lang/String;ILrhino/LazilyLoadedCtor;I)V" },
	{ "setExternalArrayData", "(Lrhino/ExternalArrayData;)V" },
	{ "getExternalArrayData", "()Lrhino/ExternalArrayData;" },
	{ "getExternalArrayLength", "()Ljava/lang/Object;" },
	{ "avoidObjectDetection", "()Z" },
	{ "equivalentValues", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Lrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;I)V" },
	{ "defineOwnProperties", "(Lrhino/Context;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V" },
	{ "checkPropertyDefinition", "(Lrhino/ScriptableObject;)V" },
	{ "checkPropertyChange", "(Ljava/lang/Object;Lrhino/ScriptableObject;Lrhino/ScriptableObject;)V" },
	{ "sameValue", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "applyDescriptorToAttributeBitset", "(ILrhino/ScriptableObject;)I" },
	{ "isDataDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isAccessorDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isGenericDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "defineFunctionProperties", "([Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "isExtensible", "()Z" },
	{ "preventExtensions", "()V" },
	{ "sealObject", "()V" },
	{ "isSealed", "()Z" },
	{ "checkNotSealed", "(Ljava/lang/Object;I)V" },
	{ "getAssociatedValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "associateValue", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putImpl", "(Ljava/lang/Object;ILrhino/Scriptable;Ljava/lang/Object;)Z" },
	{ "putConstImpl", "(Ljava/lang/String;ILrhino/Scriptable;Ljava/lang/Object;I)Z" },
	{ "findAttributeSlot", "(Ljava/lang/String;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "findAttributeSlot", "(Lrhino/Symbol;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "getIds", "(ZZ)[Ljava/lang/Object;" },
	{ "getOwnPropertyDescriptor", "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;" },
	{ "getSlot", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defaultHas", "(Ljava/lang/String;)Z" },
	{ "defaultGet", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "defaultPut", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "getMaxInstanceId", "()I" },
	{ "findInstanceIdInfo", "(Ljava/lang/String;)I" },
	{ "findInstanceIdInfo", "(Lrhino/Symbol;)I" },
	{ "getInstanceIdName", "(I)Ljava/lang/String;" },
	{ "getInstanceIdValue", "(I)Ljava/lang/Object;" },
	{ "setInstanceIdValue", "(ILjava/lang/Object;)V" },
	{ "setInstanceIdAttributes", "(II)V" },
	{ "exportAsJSClass", "(ILrhino/Scriptable;Z)Lrhino/IdFunctionObject;" },
	{ "hasPrototypeMap", "()Z" },
	{ "activatePrototypeMap", "(I)V" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILrhino/Symbol;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeConstructor", "(Lrhino/IdFunctionObject;)V" },
	{ "initPrototypeValue", "(ILjava/lang/String;Ljava/lang/Object;I)V" },
	{ "initPrototypeValue", "(ILrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "initPrototypeId", "(I)V" },
	{ "findPrototypeId", "(Ljava/lang/String;)I" },
	{ "findPrototypeId", "(Lrhino/Symbol;)I" },
	{ "fillConstructorProperties", "(Lrhino/IdFunctionObject;)V" },
	{ "addIdFunctionProperty", "(Lrhino/Scriptable;Ljava/lang/Object;ILjava/lang/String;I)V" },
	{ "newIdFunction", "(Ljava/lang/Object;ILjava/lang/String;ILrhino/Scriptable;)Lrhino/IdFunctionObject;" },
	{ "getBuiltInDescriptor", "(Ljava/lang/String;)Lrhino/ScriptableObject;" },
	{ "getBuiltInDescriptor", "(Lrhino/Symbol;)Lrhino/ScriptableObject;" },
};

static jclass innerClasses[] {
	&class_rhino_NativeJSON$StringifyState,
};

static FieldMetadata fields[] {
	{ "JSON_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeJSON_JSON_TAG, "Ljava/lang/Object;", 26 },
	{ "MAX_STRINGIFY_GAP_LENGTH", &class_int, (intptr_t) &SF_rhino_NativeJSON_MAX_STRINGIFY_GAP_LENGTH, "I", 26 },
	{ "Id_toSource", &class_int, (intptr_t) &SF_rhino_NativeJSON_Id_toSource, "I", 26 },
	{ "Id_parse", &class_int, (intptr_t) &SF_rhino_NativeJSON_Id_parse, "I", 26 },
	{ "Id_stringify", &class_int, (intptr_t) &SF_rhino_NativeJSON_Id_stringify, "I", 26 },
	{ "LAST_METHOD_ID", &class_int, (intptr_t) &SF_rhino_NativeJSON_LAST_METHOD_ID, "I", 26 },
	{ "MAX_ID", &class_int, (intptr_t) &SF_rhino_NativeJSON_MAX_ID, "I", 26 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeJSON_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeJSON, 0, "()V", 2 },
	{ "getClassName", (intptr_t) M_rhino_NativeJSON_getClassName_R_java_lang_String, VTABLE_rhino_NativeJSON_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeJSON_initPrototypeId_int, VTABLE_rhino_NativeJSON_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeJSON_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeJSON_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "parse", (intptr_t) SM_rhino_NativeJSON_parse_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;)Ljava/lang/Object;", 10 },
	{ "parse", (intptr_t) SM_rhino_NativeJSON_parse_rhino_Context_rhino_Scriptable_java_lang_String_rhino_Callable_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;Lrhino/Callable;)Ljava/lang/Object;", 9 },
	{ "walk", (intptr_t) SM_rhino_NativeJSON_walk_rhino_Context_rhino_Scriptable_rhino_Callable_rhino_Scriptable_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Callable;Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "repeat", (intptr_t) SM_rhino_NativeJSON_repeat_char_int_R_java_lang_String, 0, "(CI)Ljava/lang/String;", 10 },
	{ "stringify", (intptr_t) SM_rhino_NativeJSON_stringify_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "str", (intptr_t) SM_rhino_NativeJSON_str_java_lang_Object_rhino_Scriptable_rhino_NativeJSON$StringifyState_R_java_lang_Object, 0, "(Ljava/lang/Object;Lrhino/Scriptable;Lrhino/NativeJSON$StringifyState;)Ljava/lang/Object;", 10 },
	{ "join", (intptr_t) SM_rhino_NativeJSON_join_java_util_Collection_java_lang_String_R_java_lang_String, 0, "(Ljava/util/Collection;Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "jo", (intptr_t) SM_rhino_NativeJSON_jo_rhino_Scriptable_rhino_NativeJSON$StringifyState_R_java_lang_String, 0, "(Lrhino/Scriptable;Lrhino/NativeJSON$StringifyState;)Ljava/lang/String;", 10 },
	{ "ja", (intptr_t) SM_rhino_NativeJSON_ja_rhino_NativeArray_rhino_NativeJSON$StringifyState_R_java_lang_String, 0, "(Lrhino/NativeArray;Lrhino/NativeJSON$StringifyState;)Ljava/lang/String;", 10 },
	{ "quote", (intptr_t) SM_rhino_NativeJSON_quote_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeJSON_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeJSON_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeJSON, 0, "()V", 8 },
};

Class class_rhino_NativeJSON{
		.nativeName = (intptr_t) "rhino/NativeJSON",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeJSON),
		.classVtable = (intptr_t) vtable_rhino_NativeJSON,
		.staticInitializer = (intptr_t) clinit_rhino_NativeJSON,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeJSON,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 113,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeJSON = registerClass(&class_rhino_NativeJSON);

}
