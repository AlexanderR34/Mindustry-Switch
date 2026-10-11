#include "rhino/NativeObject.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "rhino/Symbol.h"
#include "rhino/SymbolScriptable.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Boolean.h"
#include "rhino/NativeArray.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "java/util/ArrayList.h"
#include "rhino/NativeObject_KeySet.h"
#include "rhino/BaseFunction.h"
#include "rhino/Undefined.h"
#include "rhino/Callable.h"
#include "rhino/ScriptRuntime_StringIdOrIndex.h"
#include "rhino/EvaluatorException.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "rhino/NativeObject.h"
#include "java/util/Iterator.h"
#include "java/lang/Number.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Map.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/Object.h"
#include "rhino/RhinoException.h"
#include "rhino/NativeObject_ValueCollection.h"
#include "rhino/NativeObject_EntrySet.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_rhino_NativeObject_OBJECT_TAG;
jint SF_rhino_NativeObject_ConstructorId_getPrototypeOf;
jint SF_rhino_NativeObject_ConstructorId_keys;
jint SF_rhino_NativeObject_ConstructorId_getOwnPropertyNames;
jint SF_rhino_NativeObject_ConstructorId_getOwnPropertyDescriptor;
jint SF_rhino_NativeObject_ConstructorId_defineProperty;
jint SF_rhino_NativeObject_ConstructorId_isExtensible;
jint SF_rhino_NativeObject_ConstructorId_preventExtensions;
jint SF_rhino_NativeObject_ConstructorId_defineProperties;
jint SF_rhino_NativeObject_ConstructorId_create;
jint SF_rhino_NativeObject_ConstructorId_isSealed;
jint SF_rhino_NativeObject_ConstructorId_isFrozen;
jint SF_rhino_NativeObject_ConstructorId_seal;
jint SF_rhino_NativeObject_ConstructorId_freeze;
jint SF_rhino_NativeObject_ConstructorId_getOwnPropertySymbols;
jint SF_rhino_NativeObject_ConstructorId_assign;
jint SF_rhino_NativeObject_ConstructorId_is;
jint SF_rhino_NativeObject_ConstructorId_setPrototypeOf;
jint SF_rhino_NativeObject_Id_constructor;
jint SF_rhino_NativeObject_Id_toString;
jint SF_rhino_NativeObject_Id_toLocaleString;
jint SF_rhino_NativeObject_Id_valueOf;
jint SF_rhino_NativeObject_Id_hasOwnProperty;
jint SF_rhino_NativeObject_Id_propertyIsEnumerable;
jint SF_rhino_NativeObject_Id_isPrototypeOf;
jint SF_rhino_NativeObject_Id_toSource;
jint SF_rhino_NativeObject_Id___defineGetter__;
jint SF_rhino_NativeObject_Id___defineSetter__;
jint SF_rhino_NativeObject_Id___lookupGetter__;
jint SF_rhino_NativeObject_Id___lookupSetter__;
jint SF_rhino_NativeObject_MAX_PROTOTYPE_ID;

void mark_rhino_NativeObject(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeObject_OBJECT_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeObject_OBJECT_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeObject_OBJECT_TAG, mark, depth + 1);
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
	auto self = (rhino_NativeObject *) object;
}

void init_rhino_NativeObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeObject(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeObject_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeObject(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(16);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(17);
	sp[0].o = (jobject)((func_rhino_NativeObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[2].o), (12), (frame[0].o), (frame[1].i));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Object"_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_defaultObjectToString_rhino_Scriptable_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeObject_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:fillConstructorProperties", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(-1)), (((jobject) createStringLiteral(ctx, u8"getPrototypeOf"_j))), (jint(1)));
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	if (((jint)((rhino_Context *) NULL_CHECK(sp[0].o))->F_version) < (200)) goto label_2;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-17), (((jobject) createStringLiteral(ctx, u8"setPrototypeOf"_j))), (jint(2)));
	}
label_2:;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-2), (((jobject) createStringLiteral(ctx, u8"keys"_j))), (jint(1)));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-3), (((jobject) createStringLiteral(ctx, u8"getOwnPropertyNames"_j))), (jint(1)));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-14), (((jobject) createStringLiteral(ctx, u8"getOwnPropertySymbols"_j))), (jint(1)));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-4), (((jobject) createStringLiteral(ctx, u8"getOwnPropertyDescriptor"_j))), (jint(2)));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-5), (((jobject) createStringLiteral(ctx, u8"defineProperty"_j))), (jint(3)));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-6), (((jobject) createStringLiteral(ctx, u8"isExtensible"_j))), (jint(1)));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-7), (((jobject) createStringLiteral(ctx, u8"preventExtensions"_j))), (jint(1)));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-8), (((jobject) createStringLiteral(ctx, u8"defineProperties"_j))), (jint(2)));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-9), (((jobject) createStringLiteral(ctx, u8"create"_j))), (jint(2)));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-10), (((jobject) createStringLiteral(ctx, u8"isSealed"_j))), (jint(1)));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-11), (((jobject) createStringLiteral(ctx, u8"isFrozen"_j))), (jint(1)));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-12), (((jobject) createStringLiteral(ctx, u8"seal"_j))), (jint(1)));
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-13), (((jobject) createStringLiteral(ctx, u8"freeze"_j))), (jint(1)));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-15), (((jobject) createStringLiteral(ctx, u8"assign"_j))), (jint(2)));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[2].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	((func_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-16), (((jobject) createStringLiteral(ctx, u8"is"_j))), (jint(2)));
	LINE_NUMBER(68);
	M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeObject_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(75);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		case 8: goto label_8;
		case 9: goto label_9;
		case 10: goto label_10;
		case 11: goto label_11;
		case 12: goto label_12;
		default: goto label_13;
	}
	}
label_1:;
	{
	LINE_NUMBER(77);
	frame[3].i = (jint(1));
	LINE_NUMBER(78);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(79);
	goto label_16;
	}
label_2:;
	{
	LINE_NUMBER(81);
	frame[3].i = (jint(0));
	LINE_NUMBER(82);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(83);
	goto label_16;
	}
label_3:;
	{
	LINE_NUMBER(85);
	frame[3].i = (jint(0));
	LINE_NUMBER(86);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toLocaleString"_j)));
	LINE_NUMBER(87);
	goto label_16;
	}
label_4:;
	{
	LINE_NUMBER(89);
	frame[3].i = (jint(0));
	LINE_NUMBER(90);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"valueOf"_j)));
	LINE_NUMBER(91);
	goto label_16;
	}
label_5:;
	{
	LINE_NUMBER(93);
	frame[3].i = (jint(1));
	LINE_NUMBER(94);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"hasOwnProperty"_j)));
	LINE_NUMBER(95);
	goto label_16;
	}
label_6:;
	{
	LINE_NUMBER(97);
	frame[3].i = (jint(1));
	LINE_NUMBER(98);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"propertyIsEnumerable"_j)));
	LINE_NUMBER(99);
	goto label_16;
	}
label_7:;
	{
	LINE_NUMBER(101);
	frame[3].i = (jint(1));
	LINE_NUMBER(102);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"isPrototypeOf"_j)));
	LINE_NUMBER(103);
	goto label_16;
	}
label_8:;
	{
	LINE_NUMBER(105);
	frame[3].i = (jint(0));
	LINE_NUMBER(106);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(107);
	goto label_16;
	}
label_9:;
	{
	LINE_NUMBER(109);
	frame[3].i = (jint(2));
	LINE_NUMBER(110);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"__defineGetter__"_j)));
	LINE_NUMBER(111);
	goto label_16;
	}
label_10:;
	{
	LINE_NUMBER(113);
	frame[3].i = (jint(2));
	LINE_NUMBER(114);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"__defineSetter__"_j)));
	LINE_NUMBER(115);
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(117);
	frame[3].i = (jint(1));
	LINE_NUMBER(118);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"__lookupGetter__"_j)));
	LINE_NUMBER(119);
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(121);
	frame[3].i = (jint(1));
	LINE_NUMBER(122);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"__lookupSetter__"_j)));
	LINE_NUMBER(123);
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(125);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeObject(ctx);
	sp[1].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	sp[0].o = (jobject)((func_rhino_NativeObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:execIdCall", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(133);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeObject(ctx);
	sp[1].o = (jobject)SF_rhino_NativeObject_OBJECT_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(137);
	switch((frame[6].i)) {
		case -17: goto label_8;
		case -16: goto label_9;
		case -15: goto label_10;
		case -14: goto label_11;
		case -13: goto label_12;
		case -12: goto label_13;
		case -11: goto label_14;
		case -10: goto label_15;
		case -9: goto label_16;
		case -8: goto label_17;
		case -7: goto label_18;
		case -6: goto label_19;
		case -5: goto label_20;
		case -4: goto label_21;
		case -3: goto label_22;
		case -2: goto label_23;
		case -1: goto label_24;
		case 0: goto label_25;
		case 1: goto label_26;
		case 2: goto label_27;
		case 3: goto label_28;
		case 4: goto label_29;
		case 5: goto label_30;
		case 6: goto label_31;
		case 7: goto label_32;
		case 8: goto label_33;
		case 9: goto label_34;
		case 10: goto label_34;
		case 11: goto label_35;
		case 12: goto label_35;
		default: goto label_25;
	}
	}
label_26:;
	{
	LINE_NUMBER(139);
	if ((frame[4].o) == nullptr) goto label_36;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_rhino_IdFunctionObject_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(143);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) == 0) goto label_38;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))) == nullptr) goto label_38;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_39;
	}
label_38:;
	{
	LINE_NUMBER(145);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"toString"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(152);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_Callable)) != 0) goto label_41;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[7].o));
	throwException(ctx, sp[0].o);	}
label_41:;
	{
	LINE_NUMBER(155);
	frame[8].o = (checkCast(ctx, &class_rhino_Callable, (frame[7].o)));
	LINE_NUMBER(156);
	sp[0].o = frame[8].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = frame[4].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(160);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[2].o), (jint(4)));
	if (temp0 == 0) goto label_44;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_defaultObjectToSource_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(164);
	if ((frame[8].i) == 0) goto label_48;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[7].o), (jint(0)));
	if (temp0 != (40)) goto label_48;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[7].o), ((frame[8].i) - (jint(1))));
	if (temp0 != (41)) goto label_48;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[7].o), (jint(1)), ((frame[8].i) - (jint(1))));
	frame[7].o = sp[0].o;
	}
label_48:;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_44:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_defaultObjectToString_rhino_Scriptable_R_java_lang_String(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 < (180)) goto label_50;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_51;
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[4].o));
	if (temp0 == 0) goto label_50;
	}
label_51:;
	{
	LINE_NUMBER(175);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg."_j))));
	sp += 1;
	if ((frame[4].o) != nullptr) goto label_52;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_53;
label_52:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"undef"_j));
label_53:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".to.object"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_50:;
	{
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_30:;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 < (180)) goto label_54;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_55;
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[4].o));
	if (temp0 == 0) goto label_54;
	}
label_55:;
	{
	LINE_NUMBER(181);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg."_j))));
	sp += 1;
	if ((frame[4].o) != nullptr) goto label_56;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_57;
label_56:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"undef"_j));
label_57:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".to.object"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_54:;
	{
	LINE_NUMBER(184);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_58;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_59;
label_58:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_59:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(185);
	if ((isInstance(ctx, (frame[8].o), &class_rhino_Symbol)) == 0) goto label_61;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureSymbolScriptable_java_lang_Object_R_rhino_SymbolScriptable(ctx, (frame[4].o));
	jint temp0 = (jint)((func_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_rhino_Symbol, (frame[8].o))), (frame[4].o));
	frame[7].i = temp0;
	goto label_64;
	}
label_61:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[2].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(189);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[9].o)))->F_stringId;
	if (sp[0].o != nullptr) goto label_66;
	}
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)((func_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean, (frame[4].o)))(ctx, (frame[4].o), ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[9].o)))->F_index), (frame[4].o));
	frame[7].i = temp0;
	goto label_64;
	}
label_66:;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[9].o)))->F_stringId;
	jint temp0 = (jint)((func_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[4].o));
	frame[7].i = temp0;
	}
label_64:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, (frame[7].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(199);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 < (180)) goto label_69;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_70;
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[4].o));
	if (temp0 == 0) goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(200);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg."_j))));
	sp += 1;
	if ((frame[4].o) != nullptr) goto label_71;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_72;
label_71:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"undef"_j));
label_72:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".to.object"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_69:;
	{
	LINE_NUMBER(204);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_73;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_74;
label_73:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_74:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(206);
	if ((isInstance(ctx, (frame[8].o), &class_rhino_Symbol)) == 0) goto label_76;
	}
	{
	LINE_NUMBER(207);
	jint temp0 = (jint)((func_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[4].o)))))(ctx, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[4].o))), (checkCast(ctx, &class_rhino_Symbol, (frame[8].o))), (frame[4].o));
	frame[7].i = temp0;
	LINE_NUMBER(208);
	if ((frame[7].i) == 0) goto label_79;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_rhino_ScriptableObject)) == 0) goto label_79;
	}
	{
	LINE_NUMBER(209);
	frame[9].o = (checkCast(ctx, &class_rhino_ScriptableObject, (frame[4].o)));
	LINE_NUMBER(210);
	jint temp0 = (jint)((func_rhino_ScriptableObject_getAttributes_rhino_Symbol_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_getAttributes_rhino_Symbol_R_int])(ctx, (frame[9].o), (checkCast(ctx, &class_rhino_Symbol, (frame[8].o))));
	frame[10].i = temp0;
	LINE_NUMBER(211);
	if (((frame[10].i) & (jint(2))) != 0) goto label_83;
	}
	INST_ICONST(1);
	goto label_84;
label_83:;
	INST_ICONST(0);
label_84:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(212);
	goto label_79;
	}
label_76:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[2].o), (frame[8].o));
	frame[9].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_EvaluatorException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[9].o)))->F_stringId;
	if (sp[0].o != nullptr) goto label_86;
	}
	{
	LINE_NUMBER(219);
	jint temp0 = (jint)((func_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean, (frame[4].o)))(ctx, (frame[4].o), ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[9].o)))->F_index), (frame[4].o));
	frame[7].i = temp0;
	LINE_NUMBER(220);
	if ((frame[7].i) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_rhino_ScriptableObject)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(221);
	frame[10].o = (checkCast(ctx, &class_rhino_ScriptableObject, (frame[4].o)));
	LINE_NUMBER(222);
	jint temp0 = (jint)((func_rhino_ScriptableObject_getAttributes_int_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ScriptableObject_getAttributes_int_R_int])(ctx, (frame[10].o), ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[9].o)))->F_index));
	frame[11].i = temp0;
	LINE_NUMBER(223);
	if (((frame[11].i) & (jint(2))) != 0) goto label_92;
	}
	INST_ICONST(1);
	goto label_93;
label_92:;
	INST_ICONST(0);
label_93:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(224);
	goto label_1;
	}
label_86:;
	{
	LINE_NUMBER(226);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[9].o)))->F_stringId;
	jint temp0 = (jint)((func_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[4].o));
	frame[7].i = temp0;
	LINE_NUMBER(227);
	if ((frame[7].i) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_rhino_ScriptableObject)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(228);
	frame[10].o = (checkCast(ctx, &class_rhino_ScriptableObject, (frame[4].o)));
	LINE_NUMBER(229);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[9].o)))->F_stringId;
	jint temp0 = (jint)((func_rhino_ScriptableObject_getAttributes_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_getAttributes_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[11].i = temp0;
	LINE_NUMBER(230);
	if (((frame[11].i) & (jint(2))) != 0) goto label_99;
	}
	INST_ICONST(1);
	goto label_100;
label_99:;
	INST_ICONST(0);
label_100:;
	INST_ISTORE(7);
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(240);
	goto label_79;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(233);
	frame[10].o = sp[0].o;
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_rhino_EvaluatorException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_EvaluatorException_getMessage_R_java_lang_String])(ctx, (frame[10].o));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msg.prop.not.found"_j));
	sp[2].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[9].o)))->F_stringId;
	sp += 2;
	if (sp[0].o != nullptr) goto label_102;
	}
	{
	jint temp0 = (jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[9].o)))->F_index;
	LINE_NUMBER(235);
	sp[0].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, temp0);
	sp += 1;
	goto label_104;
	}
label_102:;
	INST_ALOAD(9);
	sp[-1].o = (jobject) ((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK(sp[-1].o))->F_stringId;
label_104:;
	{
	sp -= 3;
	LINE_NUMBER(234);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_105;
	}
	{
	LINE_NUMBER(236);
	frame[7].i = (jint(0));
	goto label_79;
	}
label_105:;
	{
	LINE_NUMBER(238);
	throwException(ctx, (frame[10].o));	}
label_79:;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, (frame[7].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 < (180)) goto label_108;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_109;
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[4].o));
	if (temp0 == 0) goto label_108;
	}
label_109:;
	{
	LINE_NUMBER(247);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg."_j))));
	sp += 1;
	if ((frame[4].o) != nullptr) goto label_110;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_111;
label_110:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"undef"_j));
label_111:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".to.object"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_108:;
	{
	LINE_NUMBER(250);
	frame[7].i = (jint(0));
	LINE_NUMBER(251);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) == 0) goto label_113;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), &class_rhino_Scriptable)) == 0) goto label_113;
	}
	{
	LINE_NUMBER(252);
	frame[8].o = (checkCast(ctx, &class_rhino_Scriptable, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0))))));
	}
label_115:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[8].o)))(ctx, (frame[8].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(255);
	if ((frame[8].o) != (frame[4].o)) goto label_117;
	}
	{
	LINE_NUMBER(256);
	frame[7].i = (jint(1));
	LINE_NUMBER(257);
	goto label_113;
	}
label_117:;
	{
	LINE_NUMBER(259);
	if ((frame[8].o) != nullptr) goto label_115;
	}
label_113:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, (frame[7].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_defaultObjectToSource_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_34:;
	{
	LINE_NUMBER(269);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) < (jint(2))) goto label_120;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))), &class_rhino_Callable)) != 0) goto label_121;
	}
label_120:;
	{
	LINE_NUMBER(270);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) < (jint(2))) goto label_122;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	sp += 1;
	goto label_123;
	}
label_122:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_123:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(272);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[7].o));
	throwException(ctx, sp[0].o);	}
label_121:;
	{
	LINE_NUMBER(274);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_ScriptableObject)) != 0) goto label_125;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.extend.scriptable"_j));
	sp += 1;
	if ((frame[4].o) != nullptr) goto label_127;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_128;
label_127:;
	{
	sp[0].o = frame[4].o;
	LINE_NUMBER(277);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_128:;
	{
	sp -= 2;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	LINE_NUMBER(278);
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	LINE_NUMBER(275);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_125:;
	{
	LINE_NUMBER(280);
	frame[7].o = (checkCast(ctx, &class_rhino_ScriptableObject, (frame[4].o)));
	LINE_NUMBER(281);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(282);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[8].o)))->F_stringId;
	if (sp[0].o == nullptr) goto label_134;
	}
	INST_ICONST(0);
	goto label_135;
label_134:;
	INST_ALOAD(8);
	sp[-1].i = ((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK(sp[-1].o))->F_index;
label_135:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(283);
	frame[10].o = (checkCast(ctx, &class_rhino_Callable, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1))))));
	LINE_NUMBER(284);
	if ((frame[6].i) != (10)) goto label_138;
	}
	INST_ICONST(1);
	goto label_139;
label_138:;
	INST_ICONST(0);
label_139:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(285);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[8].o)))->F_stringId;
	((func_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean])(ctx, sp[0].o, sp[1].o, (frame[9].i), (frame[10].o), (frame[11].i));
	LINE_NUMBER(286);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_NativeArray)) == 0) goto label_142;
	}
	{
	LINE_NUMBER(287);
	((func_rhino_NativeArray_setDenseOnly_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeArray, (frame[7].o))))->vtable)[VTABLE_rhino_NativeArray_setDenseOnly_boolean])(ctx, (checkCast(ctx, &class_rhino_NativeArray, (frame[7].o))), (jint(0)));
	}
label_142:;
	{
	LINE_NUMBER(289);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_35:;
	{
	LINE_NUMBER(293);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) < (jint(1))) goto label_144;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_rhino_ScriptableObject)) != 0) goto label_145;
	}
label_144:;
	{
	LINE_NUMBER(295);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_145:;
	{
	LINE_NUMBER(297);
	frame[7].o = (checkCast(ctx, &class_rhino_ScriptableObject, (frame[4].o)));
	LINE_NUMBER(298);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(299);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[8].o)))->F_stringId;
	if (sp[0].o == nullptr) goto label_148;
	}
	INST_ICONST(0);
	goto label_149;
label_148:;
	INST_ALOAD(8);
	sp[-1].i = ((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK(sp[-1].o))->F_index;
label_149:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(300);
	if ((frame[6].i) != (12)) goto label_151;
	}
	INST_ICONST(1);
	goto label_152;
label_151:;
	INST_ICONST(0);
label_152:;
	INST_ISTORE(10);
label_153:;
	{
	LINE_NUMBER(303);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[8].o)))->F_stringId;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[9].i), (frame[10].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(304);
	if ((frame[11].o) == nullptr) goto label_155;
	}
	LINE_NUMBER(305);
	goto label_157;
label_155:;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable])(ctx, (frame[7].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(309);
	if ((frame[12].o) != nullptr) goto label_159;
	}
	LINE_NUMBER(310);
	goto label_157;
label_159:;
	{
	LINE_NUMBER(311);
	if ((isInstance(ctx, (frame[12].o), &class_rhino_ScriptableObject)) == 0) goto label_157;
	}
	{
	LINE_NUMBER(312);
	frame[7].o = (checkCast(ctx, &class_rhino_ScriptableObject, (frame[12].o)));
	LINE_NUMBER(315);
	goto label_153;
	}
label_157:;
	{
	LINE_NUMBER(316);
	if ((frame[11].o) == nullptr) goto label_163;
	}
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return (frame[11].o);
	}
label_163:;
	{
	LINE_NUMBER(319);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(322);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_165;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_166;
label_165:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_166:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(323);
	sp[0].o = (jobject)SM_rhino_NativeObject_getCompatibleObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[8].o)))(ctx, (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(327);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(2))) goto label_169;
	}
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.incompat.call"_j))), (((jobject) createStringLiteral(ctx, u8"setPrototypeOf"_j))));
	throwException(ctx, sp[0].o);	}
label_169:;
	{
	LINE_NUMBER(330);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))) != nullptr) goto label_171;
	}
	INST_ACONST_NULL();
	goto label_172;
label_171:;
	{
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	sp += 1;
	}
label_172:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(331);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_Symbol)) == 0) goto label_174;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.arg.not.object"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[7].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_174:;
	{
	LINE_NUMBER(335);
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), &class_rhino_ScriptableObject)) != 0) goto label_176;
	}
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0))));
	}
label_176:;
	{
	LINE_NUMBER(338);
	frame[8].o = (checkCast(ctx, &class_rhino_ScriptableObject, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0))))));
	LINE_NUMBER(339);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isExtensible_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_isExtensible_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_179;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.extensible"_j))));
	throwException(ctx, sp[0].o);	}
label_179:;
	{
	LINE_NUMBER(344);
	frame[9].o = (frame[7].o);
	}
label_181:;
	{
	LINE_NUMBER(345);
	if ((frame[9].o) == nullptr) goto label_182;
	}
	{
	LINE_NUMBER(346);
	if ((frame[9].o) != (frame[8].o)) goto label_184;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.object.cyclic.prototype"_j));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_184:;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[9].o)))(ctx, (frame[9].o));
	frame[9].o = sp[0].o;
	goto label_181;
	}
label_182:;
	{
	LINE_NUMBER(351);
	((func_rhino_ScriptableObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_setPrototype_rhino_Scriptable])(ctx, (frame[8].o), (frame[7].o));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_23:;
	{
	LINE_NUMBER(355);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_187;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_188;
label_187:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_188:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(356);
	sp[0].o = (jobject)SM_rhino_NativeObject_getCompatibleObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(357);
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(358);
	frame[10].i = (jint(0));
	}
label_192:;
	{
	if ((frame[10].i) >= (((jarray) nullCheck(ctx, (frame[9].o)))->length)) goto label_193;
	}
	{
	LINE_NUMBER(359);
	sp[0].o = frame[9].o;
	jint temp0 = frame[10].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[10].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(358);
	INST_IINC(10, 1);
	goto label_192;
	}
label_193:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[2].o), (frame[3].o), (frame[9].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(364);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_196;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_197;
label_196:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_197:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(365);
	sp[0].o = (jobject)SM_rhino_NativeObject_getCompatibleObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(366);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object])(ctx, (frame[9].o), (jint(1)), (jint(0)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(368);
	frame[11].i = (jint(0));
	}
label_202:;
	{
	if ((frame[11].i) >= (((jarray) nullCheck(ctx, (frame[10].o)))->length)) goto label_203;
	}
	{
	LINE_NUMBER(369);
	sp[0].o = frame[10].o;
	jint temp0 = frame[11].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[11].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(368);
	INST_IINC(11, 1);
	goto label_202;
	}
label_203:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[2].o), (frame[3].o), (frame[10].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(374);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_206;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_207;
label_206:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_207:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(375);
	sp[0].o = (jobject)SM_rhino_NativeObject_getCompatibleObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(376);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object])(ctx, (frame[9].o), (jint(1)), (jint(1)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(378);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(379);
	frame[12].i = (jint(0));
	}
label_213:;
	{
	if ((frame[12].i) >= (((jarray) nullCheck(ctx, (frame[10].o)))->length)) goto label_214;
	}
	{
	LINE_NUMBER(380);
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[12].i))), &class_rhino_Symbol)) == 0) goto label_216;
	}
	{
	LINE_NUMBER(381);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[11].o), ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[12].i))));
	}
label_216:;
	{
	LINE_NUMBER(379);
	INST_IINC(12, 1);
	goto label_213;
	}
label_214:;
	{
	LINE_NUMBER(384);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_java_util_ArrayList_toArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_ArrayList_toArray_R_Array1_java_lang_Object])(ctx, (frame[11].o));
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(387);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_218;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_219;
label_218:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_219:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(391);
	sp[0].o = (jobject)SM_rhino_NativeObject_getCompatibleObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(392);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(393);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(2))) goto label_223;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_224;
label_223:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	sp += 1;
	}
label_224:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(394);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject])(ctx, (frame[9].o), (frame[2].o), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(395);
	if ((frame[11].o) != nullptr) goto label_227;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_228;
label_227:;
	INST_ALOAD(11);
label_228:;
	popStackFrame(ctx);
	INST_ARETURN();
label_20:;
	{
	LINE_NUMBER(398);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_229;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_230;
label_229:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_230:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(399);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(400);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(2))) goto label_233;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_234;
label_233:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	sp += 1;
	}
label_234:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(401);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(3))) goto label_236;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_237;
label_236:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(2)));
	sp += 1;
	}
label_237:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(402);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(403);
	((func_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject])(ctx, (frame[8].o), (frame[2].o), (frame[9].o), (frame[11].o));
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_19:;
	{
	LINE_NUMBER(407);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_241;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_242;
label_241:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_242:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(408);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 < (200)) goto label_244;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject)) != 0) goto label_244;
	}
	{
	LINE_NUMBER(410);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_244:;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(414);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isExtensible_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_isExtensible_R_boolean])(ctx, (frame[8].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(417);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_247;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_248;
label_247:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_248:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(418);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 < (200)) goto label_250;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject)) != 0) goto label_250;
	}
	{
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_250:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(424);
	((func_rhino_ScriptableObject_preventExtensions) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_preventExtensions])(ctx, (frame[8].o));
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_17:;
	{
	LINE_NUMBER(428);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_254;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_255;
label_254:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_255:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(429);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(430);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(2))) goto label_258;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_259;
label_258:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	sp += 1;
	}
label_259:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(431);
	sp[0].o = (jobject)SM_rhino_Context_toObject_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[9].o), (frame[3].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(432);
	sp[0].o = frame[8].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[10].o));
	((func_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_16:;
	{
	LINE_NUMBER(436);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_263;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_264;
label_263:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_264:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(437);
	if ((frame[7].o) != nullptr) goto label_266;
	}
	INST_ACONST_NULL();
	goto label_267;
label_266:;
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o);
	sp++;
label_267:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(439);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(440);
	((func_rhino_ScriptableObject_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_setParentScope_rhino_Scriptable])(ctx, (frame[9].o), (frame[3].o));
	LINE_NUMBER(441);
	((func_rhino_ScriptableObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_setPrototype_rhino_Scriptable])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(443);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_272;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_272;
	}
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)SM_rhino_Context_toObject_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))), (frame[3].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(445);
	sp[0].o = frame[9].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[10].o));
	((func_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_272:;
	{
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return (frame[9].o);
	}
label_15:;
	{
	LINE_NUMBER(451);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_275;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_276;
label_275:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_276:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(452);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 < (200)) goto label_278;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject)) != 0) goto label_278;
	}
	{
	LINE_NUMBER(454);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_278:;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(459);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isExtensible_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_isExtensible_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_281;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	INST_ARETURN();
label_281:;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_282:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_283;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject])(ctx, (frame[8].o), (frame[2].o), (frame[12].o));
	sp[0].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"configurable"_j))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(463);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	jint temp0 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[13].o));
	if (temp0 == 0) goto label_286;
	}
	{
	LINE_NUMBER(464);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_286:;
	{
	LINE_NUMBER(461);
	INST_IINC(11, 1);
	goto label_282;
	}
label_283:;
	{
	LINE_NUMBER(467);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(470);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_288;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_289;
label_288:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_289:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(471);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 < (200)) goto label_291;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject)) != 0) goto label_291;
	}
	{
	LINE_NUMBER(473);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_291:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(478);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isExtensible_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_isExtensible_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_294;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	INST_ARETURN();
label_294:;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_295:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_296;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject])(ctx, (frame[8].o), (frame[2].o), (frame[12].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(482);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[1].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"configurable"_j))));
	jint temp0 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_299;
	}
	{
	LINE_NUMBER(483);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_299:;
	{
	LINE_NUMBER(484);
	jint temp0 = (jint)((func_rhino_NativeObject_isDataDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeObject_isDataDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[13].o));
	if (temp0 == 0) goto label_301;
	}
	{
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[1].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"writable"_j))));
	jint temp0 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_301;
	}
	{
	LINE_NUMBER(485);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_301:;
	{
	LINE_NUMBER(480);
	INST_IINC(11, 1);
	goto label_295;
	}
label_296:;
	{
	LINE_NUMBER(488);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(491);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_303;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_304;
label_303:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_304:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(492);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 < (200)) goto label_306;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject)) != 0) goto label_306;
	}
	{
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_306:;
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(499);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_309:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_310;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(500);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject])(ctx, (frame[8].o), (frame[2].o), (frame[12].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(501);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[1].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"configurable"_j))));
	jint temp0 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_313;
	}
	{
	LINE_NUMBER(502);
	sp[0].o = frame[13].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"configurable"_j));
	sp[2].o = frame[13].o;
	clinit_java_lang_Boolean(ctx);
	sp[3].o = (jobject)SF_java_lang_Boolean_FALSE;
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(503);
	((func_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean])(ctx, (frame[8].o), (frame[2].o), (frame[12].o), (frame[13].o), (jint(0)));
	}
label_313:;
	{
	LINE_NUMBER(499);
	INST_IINC(11, 1);
	goto label_309;
	}
label_310:;
	{
	LINE_NUMBER(506);
	((func_rhino_ScriptableObject_preventExtensions) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_preventExtensions])(ctx, (frame[8].o));
	LINE_NUMBER(508);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_12:;
	{
	LINE_NUMBER(511);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_317;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_318;
label_317:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_318:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(512);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 < (200)) goto label_320;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject)) != 0) goto label_320;
	}
	{
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_320:;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(519);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object])(ctx, (frame[8].o), (jint(1)), (jint(1)));
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_323:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_324;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(520);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject])(ctx, (frame[8].o), (frame[2].o), (frame[12].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(521);
	jint temp0 = (jint)((func_rhino_NativeObject_isDataDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeObject_isDataDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[13].o));
	if (temp0 == 0) goto label_327;
	}
	{
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[1].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"writable"_j))));
	jint temp0 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_327;
	}
	{
	LINE_NUMBER(522);
	sp[0].o = frame[13].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"writable"_j));
	sp[2].o = frame[13].o;
	clinit_java_lang_Boolean(ctx);
	sp[3].o = (jobject)SF_java_lang_Boolean_FALSE;
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_327:;
	{
	LINE_NUMBER(524);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[1].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"configurable"_j))));
	jint temp0 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_329;
	}
	{
	LINE_NUMBER(525);
	sp[0].o = frame[13].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"configurable"_j));
	sp[2].o = frame[13].o;
	clinit_java_lang_Boolean(ctx);
	sp[3].o = (jobject)SF_java_lang_Boolean_FALSE;
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_329:;
	{
	LINE_NUMBER(527);
	((func_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean])(ctx, (frame[8].o), (frame[2].o), (frame[12].o), (frame[13].o), (jint(0)));
	LINE_NUMBER(519);
	INST_IINC(11, 1);
	goto label_323;
	}
label_324:;
	{
	LINE_NUMBER(529);
	((func_rhino_ScriptableObject_preventExtensions) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_preventExtensions])(ctx, (frame[8].o));
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_10:;
	{
	LINE_NUMBER(535);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_333;
	}
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.incompat.call"_j))), (((jobject) createStringLiteral(ctx, u8"assign"_j))));
	throwException(ctx, sp[0].o);	}
label_333:;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(539);
	frame[8].i = (jint(1));
	}
label_336:;
	{
	if ((frame[8].i) >= (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_337;
	}
	{
	LINE_NUMBER(540);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))) == nullptr) goto label_339;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))));
	if (temp0 == 0) goto label_340;
	}
	LINE_NUMBER(541);
	goto label_339;
label_340:;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(544);
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(545);
	frame[11].o = (frame[10].o);
	frame[12].i = (((jarray) nullCheck(ctx, (frame[11].o)))->length);
	frame[13].i = (jint(0));
	}
label_344:;
	{
	if ((frame[13].i) >= (frame[12].i)) goto label_339;
	}
	{
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (frame[13].i)));
	LINE_NUMBER(546);
	if ((isInstance(ctx, (frame[14].o), &class_java_lang_String)) == 0) goto label_346;
	}
	{
	LINE_NUMBER(547);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o), (checkCast(ctx, &class_java_lang_String, (frame[14].o))), (frame[7].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(548);
	sp[0].o = frame[15].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_349;
	}
	{
	sp[0].o = frame[15].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_349;
	}
	{
	LINE_NUMBER(549);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o), (checkCast(ctx, &class_java_lang_String, (frame[14].o))), (frame[7].o), (frame[15].o));
	}
label_349:;
	LINE_NUMBER(551);
	goto label_351;
label_346:;
	{
	if ((isInstance(ctx, (frame[14].o), &class_java_lang_Number)) == 0) goto label_351;
	}
	{
	LINE_NUMBER(552);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(ctx, (frame[14].o));
	frame[15].i = temp0;
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o), (frame[15].i), (frame[7].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(554);
	sp[0].o = frame[16].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_351;
	}
	{
	sp[0].o = frame[16].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_351;
	}
	{
	LINE_NUMBER(555);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o), (frame[15].i), (frame[7].o), (frame[16].o));
	}
label_351:;
	{
	LINE_NUMBER(545);
	INST_IINC(13, 1);
	goto label_344;
	}
label_339:;
	{
	LINE_NUMBER(539);
	INST_IINC(8, 1);
	goto label_336;
	}
label_337:;
	{
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_9:;
	{
	LINE_NUMBER(564);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_356;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_357;
label_356:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	}
label_357:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(565);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(2))) goto label_359;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_360;
label_359:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	sp += 1;
	}
label_360:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(566);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_same_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[7].o), (frame[8].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(571);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeObject_getCompatibleObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:getCompatibleObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(576);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 < (200)) goto label_1;
	}
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(578);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeObject_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:containsKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(587);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(588);
	jint temp0 = (jint)((func_rhino_NativeObject_has_java_lang_String_rhino_Scriptable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeObject_has_java_lang_String_rhino_Scriptable_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_String, (frame[1].o))), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(589);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(590);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	jint temp1 = (jint)((func_rhino_NativeObject_has_int_rhino_Scriptable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_has_int_rhino_Scriptable_R_boolean])(ctx, sp[0].o, temp0, (frame[0].o));
	popStackFrame(ctx);
	return temp1;
	}
label_3:;
	{
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeObject_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:containsValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((func_rhino_NativeObject_values_R_java_util_Collection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeObject_values_R_java_util_Collection])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(598);
	if ((frame[1].o) == (frame[3].o)) goto label_4;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_5;
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	LINE_NUMBER(599);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(600);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	LINE_NUMBER(602);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_rhino_NativeObject_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeObject_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(609);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(610);
	((func_rhino_NativeObject_delete_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeObject_delete_java_lang_String])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_String, (frame[1].o))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(611);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(612);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	((func_rhino_NativeObject_delete_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_delete_int])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:keySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(619);
	clinit_rhino_NativeObject$KeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject$KeySet);
	init_rhino_NativeObject$KeySet_rhino_NativeObject(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(624);
	clinit_rhino_NativeObject$ValueCollection(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject$ValueCollection);
	init_rhino_NativeObject$ValueCollection_rhino_NativeObject(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:entrySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(629);
	clinit_rhino_NativeObject$EntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject$EntrySet);
	init_rhino_NativeObject$EntrySet_rhino_NativeObject(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:put", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(634);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeObject_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:putAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(639);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeObject_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(644);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_NativeObject_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(812);
	frame[2].i = (jint(0));
	LINE_NUMBER(813);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(816);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 7: goto label_3;
		case 8: goto label_4;
		case 9: goto label_5;
		case 10: goto label_5;
		case 11: goto label_6;
		case 12: goto label_5;
		case 13: goto label_7;
		case 14: goto label_8;
		case 15: goto label_5;
		case 16: goto label_9;
		case 17: goto label_5;
		case 18: goto label_5;
		case 19: goto label_5;
		case 20: goto label_10;
		default: goto label_5;
	}
	}
label_3:;
	{
	LINE_NUMBER(818);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"valueOf"_j)));
	LINE_NUMBER(819);
	frame[2].i = (jint(4));
	LINE_NUMBER(820);
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(822);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	frame[4].i = temp0;
	LINE_NUMBER(823);
	if ((frame[4].i) != (111)) goto label_14;
	}
	{
	LINE_NUMBER(824);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(825);
	frame[2].i = (8);
	goto label_5;
	}
label_14:;
	{
	LINE_NUMBER(826);
	if ((frame[4].i) != (116)) goto label_5;
	}
	{
	LINE_NUMBER(827);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(828);
	frame[2].i = (jint(2));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(832);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(833);
	frame[2].i = (jint(1));
	LINE_NUMBER(834);
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(836);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"isPrototypeOf"_j)));
	LINE_NUMBER(837);
	frame[2].i = (7);
	LINE_NUMBER(838);
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(840);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(841);
	if ((frame[4].i) != (104)) goto label_24;
	}
	{
	LINE_NUMBER(842);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"hasOwnProperty"_j)));
	LINE_NUMBER(843);
	frame[2].i = (jint(5));
	goto label_5;
	}
label_24:;
	{
	LINE_NUMBER(844);
	if ((frame[4].i) != (116)) goto label_5;
	}
	{
	LINE_NUMBER(845);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toLocaleString"_j)));
	LINE_NUMBER(846);
	frame[2].i = (jint(3));
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(850);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	frame[4].i = temp0;
	LINE_NUMBER(851);
	if ((frame[4].i) != (100)) goto label_30;
	}
	{
	LINE_NUMBER(852);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (8));
	frame[4].i = temp0;
	LINE_NUMBER(853);
	if ((frame[4].i) != (71)) goto label_33;
	}
	{
	LINE_NUMBER(854);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"__defineGetter__"_j)));
	LINE_NUMBER(855);
	frame[2].i = (9);
	goto label_5;
	}
label_33:;
	{
	LINE_NUMBER(856);
	if ((frame[4].i) != (83)) goto label_5;
	}
	{
	LINE_NUMBER(857);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"__defineSetter__"_j)));
	LINE_NUMBER(858);
	frame[2].i = (10);
	goto label_5;
	}
label_30:;
	{
	LINE_NUMBER(860);
	if ((frame[4].i) != (108)) goto label_5;
	}
	{
	LINE_NUMBER(861);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (8));
	frame[4].i = temp0;
	LINE_NUMBER(862);
	if ((frame[4].i) != (71)) goto label_40;
	}
	{
	LINE_NUMBER(863);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"__lookupGetter__"_j)));
	LINE_NUMBER(864);
	frame[2].i = (11);
	goto label_5;
	}
label_40:;
	{
	LINE_NUMBER(865);
	if ((frame[4].i) != (83)) goto label_5;
	}
	{
	LINE_NUMBER(866);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"__lookupSetter__"_j)));
	LINE_NUMBER(867);
	frame[2].i = (12);
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(872);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"propertyIsEnumerable"_j)));
	LINE_NUMBER(873);
	frame[2].i = (6);
	}
label_5:;
	{
	LINE_NUMBER(876);
	if ((frame[3].o) == nullptr) goto label_46;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_46;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_46;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_46:;
	{
	LINE_NUMBER(879);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeObject_ConstructorId_getPrototypeOf = jint(-1);
	SF_rhino_NativeObject_ConstructorId_keys = jint(-2);
	SF_rhino_NativeObject_ConstructorId_getOwnPropertyNames = jint(-3);
	SF_rhino_NativeObject_ConstructorId_getOwnPropertyDescriptor = jint(-4);
	SF_rhino_NativeObject_ConstructorId_defineProperty = jint(-5);
	SF_rhino_NativeObject_ConstructorId_isExtensible = jint(-6);
	SF_rhino_NativeObject_ConstructorId_preventExtensions = jint(-7);
	SF_rhino_NativeObject_ConstructorId_defineProperties = jint(-8);
	SF_rhino_NativeObject_ConstructorId_create = jint(-9);
	SF_rhino_NativeObject_ConstructorId_isSealed = jint(-10);
	SF_rhino_NativeObject_ConstructorId_isFrozen = jint(-11);
	SF_rhino_NativeObject_ConstructorId_seal = jint(-12);
	SF_rhino_NativeObject_ConstructorId_freeze = jint(-13);
	SF_rhino_NativeObject_ConstructorId_getOwnPropertySymbols = jint(-14);
	SF_rhino_NativeObject_ConstructorId_assign = jint(-15);
	SF_rhino_NativeObject_ConstructorId_is = jint(-16);
	SF_rhino_NativeObject_ConstructorId_setPrototypeOf = jint(-17);
	SF_rhino_NativeObject_Id_constructor = jint(1);
	SF_rhino_NativeObject_Id_toString = jint(2);
	SF_rhino_NativeObject_Id_toLocaleString = jint(3);
	SF_rhino_NativeObject_Id_valueOf = jint(4);
	SF_rhino_NativeObject_Id_hasOwnProperty = jint(5);
	SF_rhino_NativeObject_Id_propertyIsEnumerable = jint(6);
	SF_rhino_NativeObject_Id_isPrototypeOf = jint(7);
	SF_rhino_NativeObject_Id_toSource = jint(8);
	SF_rhino_NativeObject_Id___defineGetter__ = jint(9);
	SF_rhino_NativeObject_Id___defineSetter__ = jint(10);
	SF_rhino_NativeObject_Id___lookupGetter__ = jint(11);
	SF_rhino_NativeObject_Id___lookupSetter__ = jint(12);
	SF_rhino_NativeObject_MAX_PROTOTYPE_ID = jint(12);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeObject(ctx);
	{
	LINE_NUMBER(13);
	clinit_rhino_NativeObject(ctx);
	SF_rhino_NativeObject_OBJECT_TAG = (((jobject) createStringLiteral(ctx, u8"Object"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeObject[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeObject_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeObject_getClassName_R_java_lang_String,
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
	(void *) M_rhino_NativeObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_NativeObject_initPrototypeId_int,
	(void *) M_rhino_NativeObject_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_NativeObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeObject_clear,
	(void *) M_rhino_NativeObject_containsKey_java_lang_Object_R_boolean,
	(void *) M_rhino_NativeObject_containsValue_java_lang_Object_R_boolean,
	(void *) M_rhino_NativeObject_entrySet_R_java_util_Set,
	(void *) M_rhino_NativeObject_keySet_R_java_util_Set,
	(void *) M_rhino_NativeObject_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeObject_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeObject_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_rhino_NativeObject_values_R_java_util_Collection,
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
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "forEach", "(Ljava/util/function/BiConsumer;)V" },
	{ "replaceAll", "(Ljava/util/function/BiFunction;)V" },
	{ "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" },
	{ "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "values", "()Ljava/util/Collection;" },
};

static jclass interfaces[] { &class_java_util_Map, };

static jclass innerClasses[] {
	&class_rhino_NativeObject$ValueCollection,
	&class_rhino_NativeObject$KeySet,
	&class_rhino_NativeObject$EntrySet,
};

static FieldMetadata fields[] {
	{ "OBJECT_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeObject_OBJECT_TAG, "Ljava/lang/Object;", 26 },
	{ "ConstructorId_getPrototypeOf", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_getPrototypeOf, "I", 26 },
	{ "ConstructorId_keys", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_keys, "I", 26 },
	{ "ConstructorId_getOwnPropertyNames", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_getOwnPropertyNames, "I", 26 },
	{ "ConstructorId_getOwnPropertyDescriptor", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_getOwnPropertyDescriptor, "I", 26 },
	{ "ConstructorId_defineProperty", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_defineProperty, "I", 26 },
	{ "ConstructorId_isExtensible", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_isExtensible, "I", 26 },
	{ "ConstructorId_preventExtensions", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_preventExtensions, "I", 26 },
	{ "ConstructorId_defineProperties", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_defineProperties, "I", 26 },
	{ "ConstructorId_create", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_create, "I", 26 },
	{ "ConstructorId_isSealed", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_isSealed, "I", 26 },
	{ "ConstructorId_isFrozen", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_isFrozen, "I", 26 },
	{ "ConstructorId_seal", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_seal, "I", 26 },
	{ "ConstructorId_freeze", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_freeze, "I", 26 },
	{ "ConstructorId_getOwnPropertySymbols", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_getOwnPropertySymbols, "I", 26 },
	{ "ConstructorId_assign", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_assign, "I", 26 },
	{ "ConstructorId_is", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_is, "I", 26 },
	{ "ConstructorId_setPrototypeOf", &class_int, (intptr_t) &SF_rhino_NativeObject_ConstructorId_setPrototypeOf, "I", 26 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeObject_Id_constructor, "I", 26 },
	{ "Id_toString", &class_int, (intptr_t) &SF_rhino_NativeObject_Id_toString, "I", 26 },
	{ "Id_toLocaleString", &class_int, (intptr_t) &SF_rhino_NativeObject_Id_toLocaleString, "I", 26 },
	{ "Id_valueOf", &class_int, (intptr_t) &SF_rhino_NativeObject_Id_valueOf, "I", 26 },
	{ "Id_hasOwnProperty", &class_int, (intptr_t) &SF_rhino_NativeObject_Id_hasOwnProperty, "I", 26 },
	{ "Id_propertyIsEnumerable", &class_int, (intptr_t) &SF_rhino_NativeObject_Id_propertyIsEnumerable, "I", 26 },
	{ "Id_isPrototypeOf", &class_int, (intptr_t) &SF_rhino_NativeObject_Id_isPrototypeOf, "I", 26 },
	{ "Id_toSource", &class_int, (intptr_t) &SF_rhino_NativeObject_Id_toSource, "I", 26 },
	{ "Id___defineGetter__", &class_int, (intptr_t) &SF_rhino_NativeObject_Id___defineGetter__, "I", 26 },
	{ "Id___defineSetter__", &class_int, (intptr_t) &SF_rhino_NativeObject_Id___defineSetter__, "I", 26 },
	{ "Id___lookupGetter__", &class_int, (intptr_t) &SF_rhino_NativeObject_Id___lookupGetter__, "I", 26 },
	{ "Id___lookupSetter__", &class_int, (intptr_t) &SF_rhino_NativeObject_Id___lookupSetter__, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeObject_MAX_PROTOTYPE_ID, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeObject, 0, "()V", 1 },
	{ "init", (intptr_t) SM_rhino_NativeObject_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "getClassName", (intptr_t) M_rhino_NativeObject_getClassName_R_java_lang_String, VTABLE_rhino_NativeObject_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_rhino_NativeObject_toString_R_java_lang_String, VTABLE_rhino_NativeObject_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fillConstructorProperties", (intptr_t) M_rhino_NativeObject_fillConstructorProperties_rhino_IdFunctionObject, VTABLE_rhino_NativeObject_fillConstructorProperties_rhino_IdFunctionObject, "(Lrhino/IdFunctionObject;)V", 4 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeObject_initPrototypeId_int, VTABLE_rhino_NativeObject_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "getCompatibleObject", (intptr_t) SM_rhino_NativeObject_getCompatibleObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 10 },
	{ "containsKey", (intptr_t) M_rhino_NativeObject_containsKey_java_lang_Object_R_boolean, VTABLE_rhino_NativeObject_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsValue", (intptr_t) M_rhino_NativeObject_containsValue_java_lang_Object_R_boolean, VTABLE_rhino_NativeObject_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_rhino_NativeObject_remove_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeObject_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "keySet", (intptr_t) M_rhino_NativeObject_keySet_R_java_util_Set, VTABLE_rhino_NativeObject_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "values", (intptr_t) M_rhino_NativeObject_values_R_java_util_Collection, VTABLE_rhino_NativeObject_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "entrySet", (intptr_t) M_rhino_NativeObject_entrySet_R_java_util_Set, VTABLE_rhino_NativeObject_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "put", (intptr_t) M_rhino_NativeObject_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeObject_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putAll", (intptr_t) M_rhino_NativeObject_putAll_java_util_Map, VTABLE_rhino_NativeObject_putAll_java_util_Map, "(Ljava/util/Map;)V", 1 },
	{ "clear", (intptr_t) M_rhino_NativeObject_clear, VTABLE_rhino_NativeObject_clear, "()V", 1 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeObject_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeObject_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeObject, 0, "()V", 8 },
};

Class class_rhino_NativeObject{
		.nativeName = (intptr_t) "rhino/NativeObject",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeObject),
		.classVtable = (intptr_t) vtable_rhino_NativeObject,
		.staticInitializer = (intptr_t) clinit_rhino_NativeObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeObject,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 31,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 133,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeObject = registerClass(&class_rhino_NativeObject);

}
