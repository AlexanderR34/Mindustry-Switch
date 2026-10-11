#include "rhino/NativeSymbol.h"
#include "java/lang/ClassCastException.h"
#include "rhino/Symbol.h"
#include "java/util/Iterator.h"
#include "java/lang/Boolean.h"
#include "rhino/NativeSymbol.h"
#include "java/util/HashMap.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/util/Map_Entry.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/IdFunctionObject.h"
#include "java/util/Map.h"
#include "rhino/Undefined.h"
#include "rhino/JavaScriptException.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "rhino/SymbolKey.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_rhino_NativeSymbol_CLASS_NAME;
jobject SF_rhino_NativeSymbol_TYPE_NAME;
jobject SF_rhino_NativeSymbol_GLOBAL_TABLE_KEY;
jobject SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT;
jint SF_rhino_NativeSymbol_ConstructorId_keyFor;
jint SF_rhino_NativeSymbol_ConstructorId_for;
jint SF_rhino_NativeSymbol_Id_constructor;
jint SF_rhino_NativeSymbol_Id_toString;
jint SF_rhino_NativeSymbol_Id_valueOf;
jint SF_rhino_NativeSymbol_SymbolId_toStringTag;
jint SF_rhino_NativeSymbol_SymbolId_toPrimitive;
jint SF_rhino_NativeSymbol_MAX_PROTOTYPE_ID;

void mark_rhino_NativeSymbol(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeSymbol_CLASS_NAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeSymbol_CLASS_NAME)->clazz)->markFunction)((jobject) SF_rhino_NativeSymbol_CLASS_NAME, mark, depth + 1);
		if (SF_rhino_NativeSymbol_TYPE_NAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeSymbol_TYPE_NAME)->clazz)->markFunction)((jobject) SF_rhino_NativeSymbol_TYPE_NAME, mark, depth + 1);
		if (SF_rhino_NativeSymbol_GLOBAL_TABLE_KEY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeSymbol_GLOBAL_TABLE_KEY)->clazz)->markFunction)((jobject) SF_rhino_NativeSymbol_GLOBAL_TABLE_KEY, mark, depth + 1);
		if (SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT)->clazz)->markFunction)((jobject) SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT, mark, depth + 1);
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
	auto self = (rhino_NativeSymbol *) object;
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
	if (self->F_symbolData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_symbolData)->clazz)->markFunction)((jobject) self->F_symbolData, mark, depth + 1);
}

void SM_rhino_NativeSymbol_init_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:init", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSymbol(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(24);
	clinit_rhino_NativeSymbol(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeSymbol);
	init_rhino_NativeSymbol_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_rhino_NativeSymbol_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeSymbol_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[3].o), (jint(5)), (frame[1].o), (jint(0)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeSymbol(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT;
	clinit_java_lang_Boolean(ctx);
	sp[2].o = (jobject)SF_java_lang_Boolean_TRUE;
	((func_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"iterator"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"species"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_SPECIES;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"toStringTag"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_TO_STRING_TAG;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"hasInstance"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_HAS_INSTANCE;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"isConcatSpreadable"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"isRegExp"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_IS_REGEXP;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"toPrimitive"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_TO_PRIMITIVE;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"match"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_MATCH;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"replace"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_REPLACE;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"search"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_SEARCH;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"split"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_SPLIT;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"unscopables"_j));
	clinit_rhino_SymbolKey(ctx);
	sp[4].o = (jobject)SF_rhino_SymbolKey_UNSCOPABLES;
	SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeSymbol(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT;
	((func_rhino_Context_removeThreadLocal_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_removeThreadLocal_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(44);
	goto label_21;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(43);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[0].o;
	clinit_rhino_NativeSymbol(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT;
	((func_rhino_Context_removeThreadLocal_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_removeThreadLocal_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(44);
	throwException(ctx, (frame[5].o));	}
label_21:;
	{
	LINE_NUMBER(46);
	if ((frame[2].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(48);
	((func_rhino_ScriptableObject_sealObject) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ScriptableObject_sealObject])(ctx, (frame[4].o));
	}
label_23:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_rhino_NativeSymbol_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSymbol(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[1].o, (frame[1].o));
	((rhino_NativeSymbol *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(59);
	((rhino_NativeSymbol *) NULL_CHECK((frame[0].o)))->F_symbolData = (jref) (jobject(nullptr));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeSymbol_rhino_SymbolKey(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSymbol(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(63);
	((rhino_NativeSymbol *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[1].o);
	LINE_NUMBER(64);
	((rhino_NativeSymbol *) NULL_CHECK((frame[0].o)))->F_symbolData = (jref) (frame[0].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeSymbol_rhino_NativeSymbol(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSymbol(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_NativeSymbol *) NULL_CHECK((frame[1].o)))->F_key;
	((rhino_NativeSymbol *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_NativeSymbol *) NULL_CHECK((frame[1].o)))->F_symbolData;
	((rhino_NativeSymbol *) NULL_CHECK(sp[0].o))->F_symbolData = (jref) sp[1].o;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeSymbol_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_NativeSymbol(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:construct", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSymbol(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeSymbol(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT;
	clinit_java_lang_Boolean(ctx);
	sp[2].o = (jobject)SF_java_lang_Boolean_TRUE;
	((func_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Symbol"_j))), (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_NativeSymbol, sp[0].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeSymbol(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT;
	((func_rhino_Context_removeThreadLocal_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_removeThreadLocal_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(81);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[0].o;
	clinit_rhino_NativeSymbol(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT;
	((func_rhino_Context_removeThreadLocal_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_removeThreadLocal_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSymbol_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Symbol"_j)));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeSymbol_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:fillConstructorProperties", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(93);
	((func_rhino_NativeSymbol_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeSymbol_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Symbol"_j))), (jint(-1)), (((jobject) createStringLiteral(ctx, u8"for"_j))), (jint(1)));
	LINE_NUMBER(94);
	((func_rhino_NativeSymbol_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeSymbol_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Symbol"_j))), (-2), (((jobject) createStringLiteral(ctx, u8"keyFor"_j))), (jint(1)));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:createStandardSymbol", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSymbol(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Symbol"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[3].o);
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (frame[4].o);
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(101);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[2].o), (frame[3].o), (frame[5].o), (7));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeSymbol_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	frame[2].i = (jint(0));
	LINE_NUMBER(113);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(114);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(115);
	if ((frame[4].i) != (7)) goto label_4;
	}
	{
	LINE_NUMBER(116);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"valueOf"_j)));
	LINE_NUMBER(117);
	frame[2].i = (jint(4));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(118);
	if ((frame[4].i) != (8)) goto label_8;
	}
	{
	LINE_NUMBER(119);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(120);
	frame[2].i = (jint(2));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(121);
	if ((frame[4].i) != (11)) goto label_7;
	}
	{
	LINE_NUMBER(122);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(123);
	frame[2].i = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(125);
	if ((frame[3].o) == nullptr) goto label_13;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_13;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_13:;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeSymbol_findPrototypeId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:findPrototypeId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_TO_STRING_TAG;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jint(3));
	}
label_1:;
	{
	LINE_NUMBER(135);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_TO_PRIMITIVE;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (jint(5));
	}
label_3:;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeSymbol_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:initPrototypeId", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(156);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_rhino_NativeSymbol_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeSymbol_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Symbol"_j))), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"constructor"_j))), (jint(0)));
	LINE_NUMBER(159);
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_rhino_NativeSymbol_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeSymbol_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Symbol"_j))), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"toString"_j))), (jint(0)));
	LINE_NUMBER(162);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_rhino_NativeSymbol_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeSymbol_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Symbol"_j))), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"valueOf"_j))), (jint(0)));
	LINE_NUMBER(165);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = (jobject)SF_rhino_SymbolKey_TO_STRING_TAG;
	((func_rhino_NativeSymbol_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeSymbol_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int])(ctx, sp[0].o, temp0, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Symbol"_j))), (jint(3)));
	LINE_NUMBER(168);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Symbol"_j));
	jint temp0 = frame[1].i;
	clinit_rhino_SymbolKey(ctx);
	sp[2].o = (jobject)SF_rhino_SymbolKey_TO_PRIMITIVE;
	sp[0].o = (jobject)((func_rhino_NativeSymbol_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeSymbol_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Symbol.toPrimitive"_j))), (jint(1)));
	LINE_NUMBER(171);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(173);
	M_rhino_IdScriptableObject_initPrototypeId_int(ctx, (frame[0].o), (frame[1].i));
	}
label_8:;
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeSymbol_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:execIdCall", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Symbol"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(184);
	switch((frame[6].i)) {
		case -2: goto label_4;
		case -1: goto label_5;
		case 0: goto label_6;
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_6;
		case 4: goto label_9;
		case 5: goto label_9;
		default: goto label_6;
	}
	}
label_5:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)M_rhino_NativeSymbol_js_for_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)M_rhino_NativeSymbol_js_keyFor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(191);
	if ((frame[4].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = frame[2].o;
	clinit_rhino_NativeSymbol(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT;
	sp[0].o = (jobject)((func_rhino_Context_getThreadLocal_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_getThreadLocal_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.no.symbol.new"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)SM_rhino_NativeSymbol_js_constructor_Array1_java_lang_Object_R_rhino_NativeSymbol(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)SM_rhino_NativeSymbol_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_NativeSymbol(ctx, (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)SM_rhino_NativeSymbol_getSelf_java_lang_Object_R_rhino_NativeSymbol(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_rhino_NativeSymbol_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeSymbol_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)SM_rhino_NativeSymbol_getSelf_java_lang_Object_R_rhino_NativeSymbol(ctx, (frame[4].o));
	sp[0].o = (jobject)M_rhino_NativeSymbol_js_valueOf_R_java_lang_Object(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeSymbol_getSelf_java_lang_Object_R_rhino_NativeSymbol(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:getSelf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSymbol(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassCastException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(213);
	sp[0].o = checkCast(ctx, &class_rhino_NativeSymbol, (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(214);
	frame[1].o = sp[0].o;
	LINE_NUMBER(215);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.invalid.type"_j));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeSymbol_js_constructor_Array1_java_lang_Object_R_rhino_NativeSymbol(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:js_constructor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSymbol(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(221);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(222);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(223);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))));
	frame[1].o = sp[0].o;
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(228);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_6:;
	{
	LINE_NUMBER(231);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) <= (jint(1))) goto label_8;
	}
	{
	LINE_NUMBER(232);
	clinit_rhino_NativeSymbol(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeSymbol);
	init_rhino_NativeSymbol_rhino_SymbolKey(ctx, sp[0].o, (checkCast(ctx, &class_rhino_SymbolKey, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(235);
	clinit_rhino_NativeSymbol(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeSymbol);
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[1].o, (frame[1].o));
	init_rhino_NativeSymbol_rhino_SymbolKey(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSymbol_js_valueOf_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:js_valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((rhino_NativeSymbol *) NULL_CHECK((frame[0].o)))->F_symbolData;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSymbol_js_for_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:js_for", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(244);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(246);
	sp[0].o = (jobject)M_rhino_NativeSymbol_getGlobalMap_R_java_util_Map(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[4].o));
	frame[6].o = (checkCast(ctx, &class_rhino_NativeSymbol, sp[0].o));
	LINE_NUMBER(249);
	if ((frame[6].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[4].o);
	sp[0].o = (jobject)SM_rhino_NativeSymbol_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_NativeSymbol(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[4].o), (frame[6].o));
	}
label_6:;
	{
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSymbol_js_keyFor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:js_keyFor", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(257);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_2:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(258);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeSymbol)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_throwCustomError_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_R_rhino_JavaScriptException(ctx, (frame[1].o), (frame[2].o), (((jobject) createStringLiteral(ctx, u8"TypeError"_j))), (((jobject) createStringLiteral(ctx, u8"Not a Symbol"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(261);
	frame[5].o = (checkCast(ctx, &class_rhino_NativeSymbol, (frame[4].o)));
	LINE_NUMBER(263);
	sp[0].o = (jobject)M_rhino_NativeSymbol_getGlobalMap_R_java_util_Map(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(264);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[6].o)))(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	sp[0].o = (jobject)((rhino_NativeSymbol *) NULL_CHECK((checkCast(ctx, &class_rhino_NativeSymbol, sp[0].o))))->F_key;
	sp[1].o = (jobject)((rhino_NativeSymbol *) NULL_CHECK((frame[5].o)))->F_key;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	LINE_NUMBER(268);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(269);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSymbol_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((rhino_NativeSymbol *) NULL_CHECK((frame[0].o)))->F_key;
	sp[0].o = (jobject)((func_rhino_SymbolKey_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeSymbol_isStrictMode_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:isStrictMode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(281);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeSymbol_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)((func_rhino_NativeSymbol_isSymbol_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeSymbol_isSymbol_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(287);
	M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(288);
	jint temp0 = (jint)M_rhino_NativeSymbol_isStrictMode_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.no.assign.symbol.strict"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(291);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeSymbol_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(295);
	jint temp0 = (jint)((func_rhino_NativeSymbol_isSymbol_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeSymbol_isSymbol_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(296);
	M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(297);
	jint temp0 = (jint)M_rhino_NativeSymbol_isStrictMode_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.no.assign.symbol.strict"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(300);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeSymbol_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(304);
	jint temp0 = (jint)((func_rhino_NativeSymbol_isSymbol_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeSymbol_isSymbol_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(305);
	M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(306);
	jint temp0 = (jint)M_rhino_NativeSymbol_isStrictMode_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.no.assign.symbol.strict"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(309);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_NativeSymbol_isSymbol_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:isSymbol", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((rhino_NativeSymbol *) NULL_CHECK((frame[0].o)))->F_symbolData;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

jobject M_rhino_NativeSymbol_getTypeOf_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:getTypeOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	jint temp0 = (jint)((func_rhino_NativeSymbol_isSymbol_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeSymbol_isSymbol_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"symbol"_j));
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_rhino_ScriptableObject_getTypeOf_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_rhino_NativeSymbol_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((rhino_NativeSymbol *) NULL_CHECK((frame[0].o)))->F_key;
	jint temp0 = (jint)((func_rhino_SymbolKey_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeSymbol_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((rhino_NativeSymbol *) NULL_CHECK((frame[0].o)))->F_key;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSymbol_getKey_R_rhino_SymbolKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:getKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((rhino_NativeSymbol *) NULL_CHECK((frame[0].o)))->F_key;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSymbol_getGlobalMap_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:getGlobalMap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_rhino_ScriptableObject, sp[0].o));
	LINE_NUMBER(341);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeSymbol(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSymbol_GLOBAL_TABLE_KEY;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_java_util_Map, sp[0].o));
	LINE_NUMBER(342);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(343);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(344);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeSymbol(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSymbol_GLOBAL_TABLE_KEY;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
label_3:;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeSymbol(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeSymbol_CLASS_NAME = ((jobject) createStringLiteral(ctx, u8"Symbol"_j));
	SF_rhino_NativeSymbol_TYPE_NAME = ((jobject) createStringLiteral(ctx, u8"symbol"_j));
	SF_rhino_NativeSymbol_ConstructorId_keyFor = jint(-2);
	SF_rhino_NativeSymbol_ConstructorId_for = jint(-1);
	SF_rhino_NativeSymbol_Id_constructor = jint(1);
	SF_rhino_NativeSymbol_Id_toString = jint(2);
	SF_rhino_NativeSymbol_Id_valueOf = jint(4);
	SF_rhino_NativeSymbol_SymbolId_toStringTag = jint(3);
	SF_rhino_NativeSymbol_SymbolId_toPrimitive = jint(5);
	SF_rhino_NativeSymbol_MAX_PROTOTYPE_ID = jint(5);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSymbol:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSymbol(ctx);
	{
	LINE_NUMBER(17);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_rhino_NativeSymbol(ctx);
	SF_rhino_NativeSymbol_GLOBAL_TABLE_KEY = sp[0].o;
	LINE_NUMBER(18);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_rhino_NativeSymbol(ctx);
	SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeSymbol[] {
	(void *) M_rhino_NativeSymbol_hashCode_R_int,
	(void *) M_rhino_NativeSymbol_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeSymbol_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeSymbol_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeSymbol_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeSymbol_put_int_rhino_Scriptable_java_lang_Object,
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
	(void *) M_rhino_NativeSymbol_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_NativeSymbol_getTypeOf_R_java_lang_String,
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
	(void *) M_rhino_NativeSymbol_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_NativeSymbol_initPrototypeId_int,
	(void *) M_rhino_NativeSymbol_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_NativeSymbol_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_NativeSymbol_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeSymbol_js_valueOf_R_java_lang_Object,
	(void *) M_rhino_NativeSymbol_js_for_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeSymbol_js_keyFor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeSymbol_isStrictMode_R_boolean,
	(void *) M_rhino_NativeSymbol_isSymbol_R_boolean,
	(void *) M_rhino_NativeSymbol_getKey_R_rhino_SymbolKey,
	(void *) M_rhino_NativeSymbol_getGlobalMap_R_java_util_Map,
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
	{ "js_valueOf", "()Ljava/lang/Object;" },
	{ "js_for", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_keyFor", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isStrictMode", "()Z" },
	{ "isSymbol", "()Z" },
	{ "getKey", "()Lrhino/SymbolKey;" },
	{ "getGlobalMap", "()Ljava/util/Map;" },
};

static jclass interfaces[] { &class_rhino_Symbol, };

static FieldMetadata fields[] {
	{ "CLASS_NAME", &class_java_lang_String, (intptr_t) &SF_rhino_NativeSymbol_CLASS_NAME, "Ljava/lang/String;", 25 },
	{ "TYPE_NAME", &class_java_lang_String, (intptr_t) &SF_rhino_NativeSymbol_TYPE_NAME, "Ljava/lang/String;", 25 },
	{ "GLOBAL_TABLE_KEY", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeSymbol_GLOBAL_TABLE_KEY, "Ljava/lang/Object;", 26 },
	{ "CONSTRUCTOR_SLOT", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeSymbol_CONSTRUCTOR_SLOT, "Ljava/lang/Object;", 26 },
	{ "key", &class_rhino_SymbolKey, offsetof(rhino_NativeSymbol, F_key), "Lrhino/SymbolKey;", 18 },
	{ "symbolData", &class_rhino_NativeSymbol, offsetof(rhino_NativeSymbol, F_symbolData), "Lrhino/NativeSymbol;", 18 },
	{ "ConstructorId_keyFor", &class_int, (intptr_t) &SF_rhino_NativeSymbol_ConstructorId_keyFor, "I", 26 },
	{ "ConstructorId_for", &class_int, (intptr_t) &SF_rhino_NativeSymbol_ConstructorId_for, "I", 26 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeSymbol_Id_constructor, "I", 26 },
	{ "Id_toString", &class_int, (intptr_t) &SF_rhino_NativeSymbol_Id_toString, "I", 26 },
	{ "Id_valueOf", &class_int, (intptr_t) &SF_rhino_NativeSymbol_Id_valueOf, "I", 26 },
	{ "SymbolId_toStringTag", &class_int, (intptr_t) &SF_rhino_NativeSymbol_SymbolId_toStringTag, "I", 26 },
	{ "SymbolId_toPrimitive", &class_int, (intptr_t) &SF_rhino_NativeSymbol_SymbolId_toPrimitive, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeSymbol_MAX_PROTOTYPE_ID, "I", 26 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeSymbol_init_rhino_Context_rhino_Scriptable_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Z)V", 9 },
	{ "<init>", (intptr_t) init_rhino_NativeSymbol_java_lang_String, 0, "(Ljava/lang/String;)V", 2 },
	{ "<init>", (intptr_t) init_rhino_NativeSymbol_rhino_SymbolKey, 0, "(Lrhino/SymbolKey;)V", 2 },
	{ "<init>", (intptr_t) init_rhino_NativeSymbol_rhino_NativeSymbol, 0, "(Lrhino/NativeSymbol;)V", 1 },
	{ "construct", (intptr_t) SM_rhino_NativeSymbol_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_NativeSymbol, 0, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/NativeSymbol;", 9 },
	{ "getClassName", (intptr_t) M_rhino_NativeSymbol_getClassName_R_java_lang_String, VTABLE_rhino_NativeSymbol_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fillConstructorProperties", (intptr_t) M_rhino_NativeSymbol_fillConstructorProperties_rhino_IdFunctionObject, VTABLE_rhino_NativeSymbol_fillConstructorProperties_rhino_IdFunctionObject, "(Lrhino/IdFunctionObject;)V", 4 },
	{ "createStandardSymbol", (intptr_t) SM_rhino_NativeSymbol_createStandardSymbol_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_String_rhino_SymbolKey, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/ScriptableObject;Ljava/lang/String;Lrhino/SymbolKey;)V", 10 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeSymbol_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeSymbol_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeSymbol_findPrototypeId_rhino_Symbol_R_int, VTABLE_rhino_NativeSymbol_findPrototypeId_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 4 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeSymbol_initPrototypeId_int, VTABLE_rhino_NativeSymbol_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeSymbol_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeSymbol_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "getSelf", (intptr_t) SM_rhino_NativeSymbol_getSelf_java_lang_Object_R_rhino_NativeSymbol, 0, "(Ljava/lang/Object;)Lrhino/NativeSymbol;", 10 },
	{ "js_constructor", (intptr_t) SM_rhino_NativeSymbol_js_constructor_Array1_java_lang_Object_R_rhino_NativeSymbol, 0, "([Ljava/lang/Object;)Lrhino/NativeSymbol;", 10 },
	{ "js_valueOf", (intptr_t) M_rhino_NativeSymbol_js_valueOf_R_java_lang_Object, VTABLE_rhino_NativeSymbol_js_valueOf_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "js_for", (intptr_t) M_rhino_NativeSymbol_js_for_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeSymbol_js_for_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_keyFor", (intptr_t) M_rhino_NativeSymbol_js_keyFor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeSymbol_js_keyFor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "toString", (intptr_t) M_rhino_NativeSymbol_toString_R_java_lang_String, VTABLE_rhino_NativeSymbol_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isStrictMode", (intptr_t) M_rhino_NativeSymbol_isStrictMode_R_boolean, VTABLE_rhino_NativeSymbol_isStrictMode_R_boolean, "()Z", 2 },
	{ "put", (intptr_t) M_rhino_NativeSymbol_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeSymbol_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_NativeSymbol_put_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeSymbol_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_NativeSymbol_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeSymbol_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "isSymbol", (intptr_t) M_rhino_NativeSymbol_isSymbol_R_boolean, VTABLE_rhino_NativeSymbol_isSymbol_R_boolean, "()Z", 1 },
	{ "getTypeOf", (intptr_t) M_rhino_NativeSymbol_getTypeOf_R_java_lang_String, VTABLE_rhino_NativeSymbol_getTypeOf_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_rhino_NativeSymbol_hashCode_R_int, VTABLE_rhino_NativeSymbol_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_rhino_NativeSymbol_equals_java_lang_Object_R_boolean, VTABLE_rhino_NativeSymbol_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getKey", (intptr_t) M_rhino_NativeSymbol_getKey_R_rhino_SymbolKey, VTABLE_rhino_NativeSymbol_getKey_R_rhino_SymbolKey, "()Lrhino/SymbolKey;", 0 },
	{ "getGlobalMap", (intptr_t) M_rhino_NativeSymbol_getGlobalMap_R_java_util_Map, VTABLE_rhino_NativeSymbol_getGlobalMap_R_java_util_Map, "()Ljava/util/Map;", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeSymbol, 0, "()V", 8 },
};

Class class_rhino_NativeSymbol{
		.nativeName = (intptr_t) "rhino/NativeSymbol",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeSymbol),
		.classVtable = (intptr_t) vtable_rhino_NativeSymbol,
		.staticInitializer = (intptr_t) clinit_rhino_NativeSymbol,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeSymbol,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 120,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeSymbol = registerClass(&class_rhino_NativeSymbol);

}
