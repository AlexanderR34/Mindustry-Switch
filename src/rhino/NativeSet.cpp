#include "rhino/NativeSet.h"
#include "java/lang/Integer.h"
#include "java/lang/ClassCastException.h"
#include "rhino/Symbol.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Boolean.h"
#include "rhino/Hashtable.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/Undefined.h"
#include "rhino/Callable.h"
#include "java/lang/String.h"
#include "rhino/NativeCollectionIterator.h"
#include "rhino/SymbolKey.h"
#include "java/lang/Throwable.h"
#include "java/util/Iterator.h"
#include "java/lang/Number.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/IteratorLikeIterable.h"
#include "rhino/NativeSet.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/NativeCollectionIterator_Type.h"
#include "java/lang/RuntimeException.h"
#include "rhino/IteratorLikeIterable_Itr.h"
#include "java/lang/Double.h"
#include "rhino/Hashtable_Entry.h"

extern "C" {

jobject SF_rhino_NativeSet_SET_TAG;
jobject SF_rhino_NativeSet_ITERATOR_TAG;
jobject SF_rhino_NativeSet_GETSIZE;
jint SF_rhino_NativeSet_Id_constructor;
jint SF_rhino_NativeSet_Id_add;
jint SF_rhino_NativeSet_Id_delete;
jint SF_rhino_NativeSet_Id_has;
jint SF_rhino_NativeSet_Id_clear;
jint SF_rhino_NativeSet_Id_keys;
jint SF_rhino_NativeSet_Id_values;
jint SF_rhino_NativeSet_Id_entries;
jint SF_rhino_NativeSet_Id_forEach;
jint SF_rhino_NativeSet_SymbolId_getSize;
jint SF_rhino_NativeSet_SymbolId_toStringTag;
jint SF_rhino_NativeSet_MAX_PROTOTYPE_ID;

void mark_rhino_NativeSet(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeSet_SET_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeSet_SET_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeSet_SET_TAG, mark, depth + 1);
		if (SF_rhino_NativeSet_ITERATOR_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeSet_ITERATOR_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeSet_ITERATOR_TAG, mark, depth + 1);
		if (SF_rhino_NativeSet_GETSIZE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeSet_GETSIZE)->clazz)->markFunction)((jobject) SF_rhino_NativeSet_GETSIZE, mark, depth + 1);
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
	auto self = (rhino_NativeSet *) object;
	if (self->F_entries)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries)->clazz)->markFunction)((jobject) self->F_entries, mark, depth + 1);
}

void init_rhino_NativeSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_rhino_Hashtable(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Hashtable);
	init_rhino_Hashtable(ctx, sp[1].o);
	((rhino_NativeSet *) NULL_CHECK(sp[0].o))->F_entries = (jref) sp[1].o;
	LINE_NUMBER(11);
	((rhino_NativeSet *) NULL_CHECK((frame[0].o)))->F_instanceOfSet = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeSet_init_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:init", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSet(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(14);
	clinit_rhino_NativeSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeSet);
	init_rhino_NativeSet(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)((func_rhino_NativeSet_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeSet_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[3].o), (10), (frame[1].o), (jint(0)));
	LINE_NUMBER(17);
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_rhino_ScriptableObject, sp[0].o));
	LINE_NUMBER(18);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enumerable"_j));
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(19);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"configurable"_j));
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(20);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"get"_j));
	sp[2].o = frame[4].o;
	sp[3].o = frame[3].o;
	clinit_rhino_NativeSet(ctx);
	sp[4].o = (jobject)SF_rhino_NativeSet_GETSIZE;
	sp[3].o = (jobject)((func_rhino_NativeSet_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_NativeSet_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object])(ctx, sp[3].o, sp[4].o, (frame[3].o));
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(21);
	((func_rhino_NativeSet_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeSet_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject])(ctx, (frame[3].o), (frame[0].o), (((jobject) createStringLiteral(ctx, u8"size"_j))), (frame[4].o));
	LINE_NUMBER(23);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(24);
	((func_rhino_NativeSet_sealObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeSet_sealObject])(ctx, (frame[3].o));
	}
label_8:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeSet_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Set"_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSet_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:execIdCall", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeSet(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSet_SET_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(40);
	switch((frame[6].i)) {
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		case 4: goto label_7;
		case 5: goto label_8;
		case 6: goto label_9;
		case 7: goto label_10;
		case 8: goto label_11;
		case 9: goto label_12;
		default: goto label_13;
	}
	}
label_4:;
	{
	LINE_NUMBER(42);
	if ((frame[4].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(43);
	clinit_rhino_NativeSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeSet);
	init_rhino_NativeSet(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(44);
	((rhino_NativeSet *) NULL_CHECK((frame[7].o)))->F_instanceOfSet = (jint(1));
	LINE_NUMBER(45);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(46);
	SM_rhino_NativeSet_loadFromIterable_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[7].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	}
label_18:;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_14:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.no.new"_j))), (((jobject) createStringLiteral(ctx, u8"Set"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_20;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_21;
	}
label_20:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_21:;
	POP_N(2); // Pop method args
	sp->o = (jobject)M_rhino_NativeSet_js_add_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_22;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_23;
	}
label_22:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_23:;
	POP_N(2); // Pop method args
	sp->o = (jobject)M_rhino_NativeSet_js_delete_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_24;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_25;
	}
label_24:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_25:;
	POP_N(2); // Pop method args
	sp->o = (jobject)M_rhino_NativeSet_js_has_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)M_rhino_NativeSet_js_clear_R_java_lang_Object(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[1].o = frame[3].o;
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[2].o = (jobject)SF_rhino_NativeCollectionIterator$Type_VALUES;
	sp[0].o = (jobject)M_rhino_NativeSet_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[1].o = frame[3].o;
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[2].o = (jobject)SF_rhino_NativeCollectionIterator$Type_BOTH;
	sp[0].o = (jobject)M_rhino_NativeSet_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp += 3;
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_26;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_27;
	}
label_26:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_27:;
	{
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_28;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	sp += 1;
	goto label_29;
	}
label_28:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_29:;
	POP_N(5); // Pop method args
	sp->o = (jobject)M_rhino_NativeSet_js_forEach_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)M_rhino_NativeSet_js_getSize_R_java_lang_Object(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(71);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Set.prototype has no method: "_j))));
	sp[2].o = (jobject)((func_rhino_IdFunctionObject_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_getFunctionName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSet_js_add_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:js_add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(77);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Number)) == 0) goto label_2;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_lang_Number, (frame[2].o));
	LINE_NUMBER(78);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, sp[0].o);
	if ((doubleCompare(temp0, (clinit_rhino_ScriptRuntime(ctx), (jdouble)SF_rhino_ScriptRuntime_negativeZero), -1)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((rhino_NativeSet *) NULL_CHECK((frame[0].o)))->F_entries;
	((func_rhino_Hashtable_put_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_put_java_lang_Object_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[2].o));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSet_js_delete_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:js_delete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((rhino_NativeSet *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[0].o = (jobject)((func_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(87);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeSet_js_has_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:js_has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((rhino_NativeSet *) NULL_CHECK((frame[0].o)))->F_entries;
	jint temp0 = (jint)((func_rhino_Hashtable_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_has_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSet_js_clear_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:js_clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((rhino_NativeSet *) NULL_CHECK((frame[0].o)))->F_entries;
	((func_rhino_Hashtable_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_clear])(ctx, sp[0].o);
	LINE_NUMBER(96);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSet_js_getSize_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:js_getSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((rhino_NativeSet *) NULL_CHECK((frame[0].o)))->F_entries;
	jint temp0 = (jint)((func_rhino_Hashtable_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_size_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSet_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:js_iterator", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(104);
	clinit_rhino_NativeCollectionIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCollectionIterator);
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Set Iterator"_j));
	sp[3].o = frame[2].o;
	sp[4].o = (jobject)((rhino_NativeSet *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[4].o = (jobject)((func_rhino_Hashtable_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_rhino_Hashtable_iterator_R_java_util_Iterator])(ctx, sp[4].o);
	init_rhino_NativeCollectionIterator_rhino_Scriptable_java_lang_String_rhino_NativeCollectionIterator$Type_java_util_Iterator(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeSet_js_forEach_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:js_forEach", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(108);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Callable)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(111);
	frame[5].o = (checkCast(ctx, &class_rhino_Callable, (frame[3].o)));
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_NativeSet *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[0].o = (jobject)((func_rhino_Hashtable_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_rhino_Hashtable$Entry, sp[0].o));
	LINE_NUMBER(116);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o), (frame[4].o), (frame[2].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(118);
	if ((frame[9].o) != nullptr) goto label_9;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_9;
	{
	LINE_NUMBER(119);
	frame[9].o = (frame[2].o);
	}
label_9:;
	{
	LINE_NUMBER(121);
	if ((frame[9].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(122);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;
	frame[9].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(125);
	frame[10].o = (frame[8].o);
	LINE_NUMBER(126);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[9].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[10].o)))->F_value;
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	jint temp1 = jint(1);
	sp[5].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[10].o)))->F_value;
	ARRAY_ACCESS(jobject, sp[4].o, temp1) = sp[5].o;
	ARRAY_ACCESS(jobject, sp[4].o, (jint(2))) = (frame[0].o);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(127);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(128);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeSet_loadFromIterable_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[22];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:loadFromIterable", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_rhino_NativeSet(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(136);
	if ((frame[3].o) == nullptr) goto label_17;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_18;
	}
label_17:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();
label_18:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_callIterator_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, (frame[3].o), (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(142);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_20;
	}
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();
label_20:;
	{
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_rhino_ScriptableObject_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_getClassName_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(151);
	sp[0].o = frame[5].o;
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getPropFunctionAndThis_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"add"_j))), (frame[0].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(154);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	LINE_NUMBER(157);
	clinit_rhino_IteratorLikeIterable(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IteratorLikeIterable);
	init_rhino_IteratorLikeIterable_rhino_Context_rhino_Scriptable_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[4].o));
	frame[7].o = sp[0].o;
	frame[8].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_15; } // goto label_8
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr])(ctx, (frame[7].o));
	frame[9].o = sp[0].o;
	}
label_27:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(159);
	sp[0].o = frame[10].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_29;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_30;
label_29:;
	INST_ALOAD(10);
label_30:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	LINE_NUMBER(160);
	sp[0].o = frame[6].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[11].o);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(161);
	goto label_27;
	}
label_5:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(162);
	if ((frame[7].o) == nullptr) goto label_33;
	}
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_34;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_33;
label_2:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[8].o), (frame[9].o));
	goto label_33;
	}
label_34:;
	{
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, (frame[7].o));
	goto label_33;
	}
label_6:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	{
	sp -= 1;
	LINE_NUMBER(157);
	frame[9].o = sp[0].o;
	frame[8].o = (frame[9].o);
	throwException(ctx, (frame[9].o));	}
label_8:;
	LINE_NUMBER(162);
	INST_ASTORE(12);
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_35;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_36;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_35;
label_12:;
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[8].o), (frame[13].o));
	goto label_35;
	}
label_36:;
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, sp[0].o);
label_35:;
	INST_ALOAD(12);
	INST_ATHROW();
	label_33:;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:realThis", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(166);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassCastException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(170);
	frame[3].o = (checkCast(ctx, &class_rhino_NativeSet, (frame[1].o)));
	LINE_NUMBER(171);
	if (((jint)((rhino_NativeSet *) NULL_CHECK((frame[3].o)))->F_instanceOfSet) != 0) goto label_7;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(175);
	INST_ALOAD(3);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(176);
	frame[3].o = sp[0].o;
	LINE_NUMBER(177);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeSet_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:initPrototypeId", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(183);
	switch((frame[1].i)) {
		case 9: goto label_1;
		case 10: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeSet(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSet_SET_TAG;
	jint temp0 = frame[1].i;
	clinit_rhino_NativeSet(ctx);
	sp[2].o = (jobject)SF_rhino_NativeSet_GETSIZE;
	sp[0].o = (jobject)((func_rhino_NativeSet_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeSet_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (((jobject) createStringLiteral(ctx, u8"get size"_j))), (jint(0)));
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	jint temp0 = 10;
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = (jobject)SF_rhino_SymbolKey_TO_STRING_TAG;
	sp[2].o = frame[0].o;
	LINE_NUMBER(189);
	sp[2].o = (jobject)((func_rhino_NativeSet_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_NativeSet_getClassName_R_java_lang_String])(ctx, sp[2].o);
	jint temp1 = jint(3);
	LINE_NUMBER(188);
	((func_rhino_NativeSet_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeSet_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, temp1);
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(194);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(196);
	switch((frame[1].i)) {
		case 1: goto label_9;
		case 2: goto label_10;
		case 3: goto label_11;
		case 4: goto label_12;
		case 5: goto label_13;
		case 6: goto label_14;
		case 7: goto label_15;
		case 8: goto label_16;
		default: goto label_17;
	}
	}
label_9:;
	{
	LINE_NUMBER(198);
	frame[4].i = (jint(0));
	LINE_NUMBER(199);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(200);
	goto label_20;
	}
label_10:;
	{
	LINE_NUMBER(202);
	frame[4].i = (jint(1));
	LINE_NUMBER(203);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"add"_j)));
	LINE_NUMBER(204);
	goto label_20;
	}
label_11:;
	{
	LINE_NUMBER(206);
	frame[4].i = (jint(1));
	LINE_NUMBER(207);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"delete"_j)));
	LINE_NUMBER(208);
	goto label_20;
	}
label_12:;
	{
	LINE_NUMBER(210);
	frame[4].i = (jint(1));
	LINE_NUMBER(211);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"has"_j)));
	LINE_NUMBER(212);
	goto label_20;
	}
label_13:;
	{
	LINE_NUMBER(214);
	frame[4].i = (jint(0));
	LINE_NUMBER(215);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"clear"_j)));
	LINE_NUMBER(216);
	goto label_20;
	}
label_15:;
	{
	LINE_NUMBER(218);
	frame[4].i = (jint(0));
	LINE_NUMBER(219);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"entries"_j)));
	LINE_NUMBER(220);
	goto label_20;
	}
label_14:;
	{
	LINE_NUMBER(222);
	frame[4].i = (jint(0));
	LINE_NUMBER(223);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"values"_j)));
	LINE_NUMBER(224);
	goto label_20;
	}
label_16:;
	{
	LINE_NUMBER(226);
	frame[4].i = (jint(1));
	LINE_NUMBER(227);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"forEach"_j)));
	LINE_NUMBER(228);
	goto label_20;
	}
label_17:;
	{
	LINE_NUMBER(230);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeSet(ctx);
	sp[1].o = (jobject)SF_rhino_NativeSet_SET_TAG;
	sp[0].o = (jobject)((func_rhino_NativeSet_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeSet_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeSet_findPrototypeId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:findPrototypeId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(237);
	clinit_rhino_NativeSet(ctx);
	sp[0].o = (jobject)SF_rhino_NativeSet_GETSIZE;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return (9);
	}
label_1:;
	{
	LINE_NUMBER(240);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (6);
	}
label_3:;
	{
	LINE_NUMBER(243);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_TO_STRING_TAG;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return (10);
	}
label_5:;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeSet_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(257);
	frame[2].i = (jint(0));
	LINE_NUMBER(258);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(261);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		case 8: goto label_8;
		case 9: goto label_8;
		case 10: goto label_8;
		case 11: goto label_9;
		default: goto label_8;
	}
	}
label_3:;
	{
	LINE_NUMBER(263);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(264);
	if ((frame[4].i) != (97)) goto label_11;
	}
	{
	LINE_NUMBER(265);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (100)) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (100)) goto label_8;
	}
	{
	LINE_NUMBER(266);
	frame[2].i = (jint(2));
	LINE_NUMBER(267);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(269);
	if ((frame[4].i) != (104)) goto label_8;
	}
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (115)) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (97)) goto label_8;
	}
	{
	LINE_NUMBER(271);
	frame[2].i = (jint(4));
	LINE_NUMBER(272);
	goto label_15;
	}
label_4:;
	{
	LINE_NUMBER(277);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"keys"_j)));
	LINE_NUMBER(278);
	frame[2].i = (6);
	LINE_NUMBER(279);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(281);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"clear"_j)));
	LINE_NUMBER(282);
	frame[2].i = (jint(5));
	LINE_NUMBER(283);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(285);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(286);
	if ((frame[4].i) != (100)) goto label_24;
	}
	{
	LINE_NUMBER(287);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"delete"_j)));
	LINE_NUMBER(288);
	frame[2].i = (jint(3));
	goto label_8;
	}
label_24:;
	{
	LINE_NUMBER(289);
	if ((frame[4].i) != (118)) goto label_8;
	}
	{
	LINE_NUMBER(290);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"values"_j)));
	LINE_NUMBER(291);
	frame[2].i = (6);
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(295);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(296);
	if ((frame[4].i) != (101)) goto label_30;
	}
	{
	LINE_NUMBER(297);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"entries"_j)));
	LINE_NUMBER(298);
	frame[2].i = (7);
	goto label_8;
	}
label_30:;
	{
	LINE_NUMBER(299);
	if ((frame[4].i) != (102)) goto label_8;
	}
	{
	LINE_NUMBER(300);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"forEach"_j)));
	LINE_NUMBER(301);
	frame[2].i = (8);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(305);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(306);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(309);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_15;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_15:;
	{
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeSet_ITERATOR_TAG = ((jobject) createStringLiteral(ctx, u8"Set Iterator"_j));
	SF_rhino_NativeSet_Id_constructor = jint(1);
	SF_rhino_NativeSet_Id_add = jint(2);
	SF_rhino_NativeSet_Id_delete = jint(3);
	SF_rhino_NativeSet_Id_has = jint(4);
	SF_rhino_NativeSet_Id_clear = jint(5);
	SF_rhino_NativeSet_Id_keys = jint(6);
	SF_rhino_NativeSet_Id_values = jint(6);
	SF_rhino_NativeSet_Id_entries = jint(7);
	SF_rhino_NativeSet_Id_forEach = jint(8);
	SF_rhino_NativeSet_SymbolId_getSize = jint(9);
	SF_rhino_NativeSet_SymbolId_toStringTag = jint(10);
	SF_rhino_NativeSet_MAX_PROTOTYPE_ID = jint(10);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeSet:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeSet(ctx);
	{
	LINE_NUMBER(4);
	clinit_rhino_NativeSet(ctx);
	SF_rhino_NativeSet_SET_TAG = (((jobject) createStringLiteral(ctx, u8"Set"_j)));
	LINE_NUMBER(7);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Symbol.getSize]"_j))));
	clinit_rhino_NativeSet(ctx);
	SF_rhino_NativeSet_GETSIZE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeSet[] {
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
	(void *) M_rhino_NativeSet_getClassName_R_java_lang_String,
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
	(void *) M_rhino_NativeSet_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_NativeSet_initPrototypeId_int,
	(void *) M_rhino_NativeSet_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_NativeSet_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeSet_js_add_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeSet_js_delete_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeSet_js_has_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeSet_js_clear_R_java_lang_Object,
	(void *) M_rhino_NativeSet_js_getSize_R_java_lang_Object,
	(void *) M_rhino_NativeSet_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object,
	(void *) M_rhino_NativeSet_js_forEach_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet,
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
	{ "js_add", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_delete", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_has", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_clear", "()Ljava/lang/Object;" },
	{ "js_getSize", "()Ljava/lang/Object;" },
	{ "js_iterator", "(Lrhino/Scriptable;Lrhino/NativeCollectionIterator$Type;)Ljava/lang/Object;" },
	{ "js_forEach", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "realThis", "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/NativeSet;" },
};

static FieldMetadata fields[] {
	{ "SET_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeSet_SET_TAG, "Ljava/lang/Object;", 26 },
	{ "ITERATOR_TAG", &class_java_lang_String, (intptr_t) &SF_rhino_NativeSet_ITERATOR_TAG, "Ljava/lang/String;", 24 },
	{ "GETSIZE", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_NativeSet_GETSIZE, "Lrhino/SymbolKey;", 24 },
	{ "entries", &class_rhino_Hashtable, offsetof(rhino_NativeSet, F_entries), "Lrhino/Hashtable;", 18 },
	{ "instanceOfSet", &class_boolean, offsetof(rhino_NativeSet, F_instanceOfSet), "Z", 2 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeSet_Id_constructor, "I", 26 },
	{ "Id_add", &class_int, (intptr_t) &SF_rhino_NativeSet_Id_add, "I", 26 },
	{ "Id_delete", &class_int, (intptr_t) &SF_rhino_NativeSet_Id_delete, "I", 26 },
	{ "Id_has", &class_int, (intptr_t) &SF_rhino_NativeSet_Id_has, "I", 26 },
	{ "Id_clear", &class_int, (intptr_t) &SF_rhino_NativeSet_Id_clear, "I", 26 },
	{ "Id_keys", &class_int, (intptr_t) &SF_rhino_NativeSet_Id_keys, "I", 26 },
	{ "Id_values", &class_int, (intptr_t) &SF_rhino_NativeSet_Id_values, "I", 26 },
	{ "Id_entries", &class_int, (intptr_t) &SF_rhino_NativeSet_Id_entries, "I", 26 },
	{ "Id_forEach", &class_int, (intptr_t) &SF_rhino_NativeSet_Id_forEach, "I", 26 },
	{ "SymbolId_getSize", &class_int, (intptr_t) &SF_rhino_NativeSet_SymbolId_getSize, "I", 26 },
	{ "SymbolId_toStringTag", &class_int, (intptr_t) &SF_rhino_NativeSet_SymbolId_toStringTag, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeSet_MAX_PROTOTYPE_ID, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeSet, 0, "()V", 1 },
	{ "init", (intptr_t) SM_rhino_NativeSet_init_rhino_Context_rhino_Scriptable_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Z)V", 8 },
	{ "getClassName", (intptr_t) M_rhino_NativeSet_getClassName_R_java_lang_String, VTABLE_rhino_NativeSet_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "execIdCall", (intptr_t) M_rhino_NativeSet_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeSet_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "js_add", (intptr_t) M_rhino_NativeSet_js_add_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeSet_js_add_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_delete", (intptr_t) M_rhino_NativeSet_js_delete_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeSet_js_delete_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_has", (intptr_t) M_rhino_NativeSet_js_has_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeSet_js_has_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_clear", (intptr_t) M_rhino_NativeSet_js_clear_R_java_lang_Object, VTABLE_rhino_NativeSet_js_clear_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "js_getSize", (intptr_t) M_rhino_NativeSet_js_getSize_R_java_lang_Object, VTABLE_rhino_NativeSet_js_getSize_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "js_iterator", (intptr_t) M_rhino_NativeSet_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object, VTABLE_rhino_NativeSet_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object, "(Lrhino/Scriptable;Lrhino/NativeCollectionIterator$Type;)Ljava/lang/Object;", 2 },
	{ "js_forEach", (intptr_t) M_rhino_NativeSet_js_forEach_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeSet_js_forEach_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "loadFromIterable", (intptr_t) SM_rhino_NativeSet_loadFromIterable_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/ScriptableObject;Ljava/lang/Object;)V", 8 },
	{ "realThis", (intptr_t) M_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet, VTABLE_rhino_NativeSet_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeSet, "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/NativeSet;", 2 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeSet_initPrototypeId_int, VTABLE_rhino_NativeSet_initPrototypeId_int, "(I)V", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeSet_findPrototypeId_rhino_Symbol_R_int, VTABLE_rhino_NativeSet_findPrototypeId_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeSet_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeSet_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeSet, 0, "()V", 8 },
};

Class class_rhino_NativeSet{
		.nativeName = (intptr_t) "rhino/NativeSet",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeSet),
		.classVtable = (intptr_t) vtable_rhino_NativeSet,
		.staticInitializer = (intptr_t) clinit_rhino_NativeSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 121,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeSet = registerClass(&class_rhino_NativeSet);

}
