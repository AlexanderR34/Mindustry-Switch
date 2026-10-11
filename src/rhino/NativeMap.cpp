#include "rhino/NativeMap.h"
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
#include "rhino/NativeMap.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/IteratorLikeIterable.h"
#include "rhino/NativeSet.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/NativeCollectionIterator_Type.h"
#include "rhino/IteratorLikeIterable_Itr.h"
#include "java/lang/Double.h"
#include "rhino/Hashtable_Entry.h"

extern "C" {

jobject SF_rhino_NativeMap_MAP_TAG;
jobject SF_rhino_NativeMap_ITERATOR_TAG;
jobject SF_rhino_NativeMap_NULL_VALUE;
jint SF_rhino_NativeMap_Id_constructor;
jint SF_rhino_NativeMap_Id_set;
jint SF_rhino_NativeMap_Id_get;
jint SF_rhino_NativeMap_Id_delete;
jint SF_rhino_NativeMap_Id_has;
jint SF_rhino_NativeMap_Id_clear;
jint SF_rhino_NativeMap_Id_keys;
jint SF_rhino_NativeMap_Id_values;
jint SF_rhino_NativeMap_Id_entries;
jint SF_rhino_NativeMap_Id_forEach;
jint SF_rhino_NativeMap_SymbolId_getSize;
jint SF_rhino_NativeMap_SymbolId_toStringTag;
jint SF_rhino_NativeMap_MAX_PROTOTYPE_ID;

void mark_rhino_NativeMap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeMap_MAP_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeMap_MAP_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeMap_MAP_TAG, mark, depth + 1);
		if (SF_rhino_NativeMap_ITERATOR_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeMap_ITERATOR_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeMap_ITERATOR_TAG, mark, depth + 1);
		if (SF_rhino_NativeMap_NULL_VALUE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeMap_NULL_VALUE)->clazz)->markFunction)((jobject) SF_rhino_NativeMap_NULL_VALUE, mark, depth + 1);
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
	auto self = (rhino_NativeMap *) object;
	if (self->F_entries)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries)->clazz)->markFunction)((jobject) self->F_entries, mark, depth + 1);
}

void init_rhino_NativeMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_rhino_Hashtable(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Hashtable);
	init_rhino_Hashtable(ctx, sp[1].o);
	((rhino_NativeMap *) NULL_CHECK(sp[0].o))->F_entries = (jref) sp[1].o;
	LINE_NUMBER(11);
	((rhino_NativeMap *) NULL_CHECK((frame[0].o)))->F_instanceOfMap = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeMap_init_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:init", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(14);
	clinit_rhino_NativeMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeMap);
	init_rhino_NativeMap(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)((func_rhino_NativeMap_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeMap_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[3].o), (12), (frame[1].o), (jint(0)));
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
	sp[3].o = (jobject)((func_rhino_NativeMap_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_NativeMap_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object])(ctx, sp[3].o, sp[4].o, (frame[3].o));
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(21);
	((func_rhino_NativeMap_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeMap_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject])(ctx, (frame[3].o), (frame[0].o), (((jobject) createStringLiteral(ctx, u8"size"_j))), (frame[4].o));
	LINE_NUMBER(23);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(24);
	((func_rhino_NativeMap_sealObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeMap_sealObject])(ctx, (frame[3].o));
	}
label_8:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeMap_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Map"_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeMap_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:execIdCall", 14 };
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
	clinit_rhino_NativeMap(ctx);
	sp[1].o = (jobject)SF_rhino_NativeMap_MAP_TAG;
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
		case 10: goto label_13;
		case 11: goto label_14;
		default: goto label_15;
	}
	}
label_4:;
	{
	LINE_NUMBER(42);
	if ((frame[4].o) != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(43);
	clinit_rhino_NativeMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeMap);
	init_rhino_NativeMap(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(44);
	((rhino_NativeMap *) NULL_CHECK((frame[7].o)))->F_instanceOfMap = (jint(1));
	LINE_NUMBER(45);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(46);
	SM_rhino_NativeMap_loadFromIterable_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[7].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	}
label_20:;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_16:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.no.new"_j))), (((jobject) createStringLiteral(ctx, u8"Map"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
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
	{
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_24;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	sp += 1;
	goto label_25;
	}
label_24:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_25:;
	POP_N(3); // Pop method args
	sp->o = (jobject)M_rhino_NativeMap_js_set_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp += 1;
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
	POP_N(2); // Pop method args
	sp->o = (jobject)M_rhino_NativeMap_js_delete_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_28;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_29;
	}
label_28:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_29:;
	POP_N(2); // Pop method args
	sp->o = (jobject)M_rhino_NativeMap_js_get_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_30;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_31;
	}
label_30:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_31:;
	POP_N(2); // Pop method args
	sp->o = (jobject)M_rhino_NativeMap_js_has_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)M_rhino_NativeMap_js_clear_R_java_lang_Object(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[1].o = frame[3].o;
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[2].o = (jobject)SF_rhino_NativeCollectionIterator$Type_KEYS;
	sp[0].o = (jobject)M_rhino_NativeMap_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[1].o = frame[3].o;
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[2].o = (jobject)SF_rhino_NativeCollectionIterator$Type_VALUES;
	sp[0].o = (jobject)M_rhino_NativeMap_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[1].o = frame[3].o;
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[2].o = (jobject)SF_rhino_NativeCollectionIterator$Type_BOTH;
	sp[0].o = (jobject)M_rhino_NativeMap_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp += 3;
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_32;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_33;
	}
label_32:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_33:;
	{
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_34;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	sp += 1;
	goto label_35;
	}
label_34:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_35:;
	POP_N(5); // Pop method args
	sp->o = (jobject)M_rhino_NativeMap_js_forEach_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_14:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)M_rhino_NativeMap_js_getSize_R_java_lang_Object(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(76);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Map.prototype has no method: "_j))));
	sp[2].o = (jobject)((func_rhino_IdFunctionObject_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_getFunctionName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeMap_js_set_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:js_set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(82);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	clinit_rhino_NativeMap(ctx);
	(sp++)->o = SF_rhino_NativeMap_NULL_VALUE;
	goto label_2;
label_1:;
	INST_ALOAD(2);
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(84);
	frame[4].o = (frame[1].o);
	LINE_NUMBER(85);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Number)) == 0) goto label_5;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_lang_Number, (frame[4].o));
	LINE_NUMBER(86);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, sp[0].o);
	if ((doubleCompare(temp0, (clinit_rhino_ScriptRuntime(ctx), (jdouble)SF_rhino_ScriptRuntime_negativeZero), -1)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((rhino_NativeMap *) NULL_CHECK((frame[0].o)))->F_entries;
	((func_rhino_Hashtable_put_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_put_java_lang_Object_java_lang_Object])(ctx, sp[0].o, (frame[4].o), (frame[3].o));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeMap_js_delete_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:js_delete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((rhino_NativeMap *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[0].o = (jobject)((func_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(95);
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

jobject M_rhino_NativeMap_js_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:js_get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((rhino_NativeMap *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[0].o = (jobject)((func_rhino_Hashtable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(100);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(101);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(103);
	sp[0].o = frame[2].o;
	clinit_rhino_NativeMap(ctx);
	sp[1].o = (jobject)SF_rhino_NativeMap_NULL_VALUE;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeMap_js_has_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:js_has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((rhino_NativeMap *) NULL_CHECK((frame[0].o)))->F_entries;
	jint temp0 = (jint)((func_rhino_Hashtable_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_has_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeMap_js_getSize_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:js_getSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_NativeMap *) NULL_CHECK((frame[0].o)))->F_entries;
	jint temp0 = (jint)((func_rhino_Hashtable_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_size_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeMap_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:js_iterator", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(118);
	clinit_rhino_NativeCollectionIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCollectionIterator);
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Map Iterator"_j));
	sp[3].o = frame[2].o;
	sp[4].o = (jobject)((rhino_NativeMap *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[4].o = (jobject)((func_rhino_Hashtable_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_rhino_Hashtable_iterator_R_java_util_Iterator])(ctx, sp[4].o);
	init_rhino_NativeCollectionIterator_rhino_Scriptable_java_lang_String_rhino_NativeCollectionIterator$Type_java_util_Iterator(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeMap_js_clear_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:js_clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((rhino_NativeMap *) NULL_CHECK((frame[0].o)))->F_entries;
	((func_rhino_Hashtable_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Hashtable_clear])(ctx, sp[0].o);
	LINE_NUMBER(123);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeMap_js_forEach_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:js_forEach", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(127);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Callable)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.isnt.function"_j));
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(130);
	frame[5].o = (checkCast(ctx, &class_rhino_Callable, (frame[3].o)));
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(133);
	sp[0].o = (jobject)((rhino_NativeMap *) NULL_CHECK((frame[0].o)))->F_entries;
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
	LINE_NUMBER(135);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o), (frame[4].o), (frame[2].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(137);
	if ((frame[9].o) != nullptr) goto label_9;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_9;
	{
	LINE_NUMBER(138);
	frame[9].o = (frame[2].o);
	}
label_9:;
	{
	LINE_NUMBER(140);
	if ((frame[9].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(141);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;
	frame[9].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(144);
	frame[10].o = (frame[8].o);
	LINE_NUMBER(145);
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[10].o)))->F_value;
	frame[11].o = sp[0].o;
	LINE_NUMBER(146);
	sp[0].o = frame[11].o;
	clinit_rhino_NativeMap(ctx);
	sp[1].o = (jobject)SF_rhino_NativeMap_NULL_VALUE;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	LINE_NUMBER(147);
	frame[11].o = (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(150);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[9].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[11].o);
	jint temp0 = jint(1);
	sp[5].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[10].o)))->F_key;
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	ARRAY_ACCESS(jobject, sp[4].o, (jint(2))) = (frame[0].o);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(151);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(152);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeMap_loadFromIterable_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[24];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:loadFromIterable", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_rhino_NativeMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(160);
	if ((frame[3].o) == nullptr) goto label_17;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_18;
	}
label_17:;
	LINE_NUMBER(161);
	popStackFrame(ctx);
	INST_RETURN();
label_18:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_callIterator_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, (frame[3].o), (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(166);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_20;
	}
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();
label_20:;
	{
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_rhino_ScriptableObject_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_getClassName_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(175);
	sp[0].o = frame[5].o;
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getPropFunctionAndThis_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"set"_j))), (frame[0].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(177);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	LINE_NUMBER(180);
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
	LINE_NUMBER(181);
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
	LINE_NUMBER(182);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(183);
	if ((isInstance(ctx, (frame[11].o), &class_rhino_Symbol)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.arg.not.object"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[11].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o), (jint(0)), (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(187);
	sp[0].o = frame[12].o;
	clinit_rhino_NativeMap(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_33;
	}
	{
	LINE_NUMBER(188);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[12].o = sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o), (jint(1)), (frame[11].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(191);
	sp[0].o = frame[13].o;
	clinit_rhino_NativeMap(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_36;
	}
	{
	LINE_NUMBER(192);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[13].o = sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(194);
	sp[0].o = frame[6].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[12].o);
	ARRAY_ACCESS(jobject, sp[4].o, (jint(1))) = (frame[13].o);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(195);
	goto label_27;
	}
label_5:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(196);
	if ((frame[7].o) == nullptr) goto label_39;
	}
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_40;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_39;
label_2:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[8].o), (frame[9].o));
	goto label_39;
	}
label_40:;
	{
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, (frame[7].o));
	goto label_39;
	}
label_6:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	{
	sp -= 1;
	LINE_NUMBER(180);
	frame[9].o = sp[0].o;
	frame[8].o = (frame[9].o);
	throwException(ctx, (frame[9].o));	}
label_8:;
	LINE_NUMBER(196);
	INST_ASTORE(14);
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_41;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_42;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_41;
label_12:;
	{
	sp -= 1;
	frame[15].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[8].o), (frame[15].o));
	goto label_41;
	}
label_42:;
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, sp[0].o);
label_41:;
	INST_ALOAD(14);
	INST_ATHROW();
	label_39:;
	LINE_NUMBER(197);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:realThis", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(200);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassCastException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(204);
	frame[3].o = (checkCast(ctx, &class_rhino_NativeMap, (frame[1].o)));
	LINE_NUMBER(205);
	if (((jint)((rhino_NativeMap *) NULL_CHECK((frame[3].o)))->F_instanceOfMap) != 0) goto label_7;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(209);
	INST_ALOAD(3);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(210);
	frame[3].o = sp[0].o;
	LINE_NUMBER(211);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeMap_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:initPrototypeId", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(217);
	switch((frame[1].i)) {
		case 11: goto label_1;
		case 12: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeMap(ctx);
	sp[1].o = (jobject)SF_rhino_NativeMap_MAP_TAG;
	jint temp0 = frame[1].i;
	clinit_rhino_NativeSet(ctx);
	sp[2].o = (jobject)SF_rhino_NativeSet_GETSIZE;
	sp[0].o = (jobject)((func_rhino_NativeMap_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeMap_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (((jobject) createStringLiteral(ctx, u8"get size"_j))), (jint(0)));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	jint temp0 = 12;
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = (jobject)SF_rhino_SymbolKey_TO_STRING_TAG;
	sp[2].o = frame[0].o;
	LINE_NUMBER(223);
	sp[2].o = (jobject)((func_rhino_NativeMap_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_NativeMap_getClassName_R_java_lang_String])(ctx, sp[2].o);
	jint temp1 = jint(3);
	LINE_NUMBER(222);
	((func_rhino_NativeMap_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeMap_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, temp1);
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(228);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(230);
	switch((frame[1].i)) {
		case 1: goto label_9;
		case 2: goto label_10;
		case 3: goto label_11;
		case 4: goto label_12;
		case 5: goto label_13;
		case 6: goto label_14;
		case 7: goto label_15;
		case 8: goto label_16;
		case 9: goto label_17;
		case 10: goto label_18;
		default: goto label_19;
	}
	}
label_9:;
	{
	LINE_NUMBER(232);
	frame[4].i = (jint(0));
	LINE_NUMBER(233);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(234);
	goto label_22;
	}
label_10:;
	{
	LINE_NUMBER(236);
	frame[4].i = (jint(2));
	LINE_NUMBER(237);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"set"_j)));
	LINE_NUMBER(238);
	goto label_22;
	}
label_11:;
	{
	LINE_NUMBER(240);
	frame[4].i = (jint(1));
	LINE_NUMBER(241);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"get"_j)));
	LINE_NUMBER(242);
	goto label_22;
	}
label_12:;
	{
	LINE_NUMBER(244);
	frame[4].i = (jint(1));
	LINE_NUMBER(245);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"delete"_j)));
	LINE_NUMBER(246);
	goto label_22;
	}
label_13:;
	{
	LINE_NUMBER(248);
	frame[4].i = (jint(1));
	LINE_NUMBER(249);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"has"_j)));
	LINE_NUMBER(250);
	goto label_22;
	}
label_14:;
	{
	LINE_NUMBER(252);
	frame[4].i = (jint(0));
	LINE_NUMBER(253);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"clear"_j)));
	LINE_NUMBER(254);
	goto label_22;
	}
label_15:;
	{
	LINE_NUMBER(256);
	frame[4].i = (jint(0));
	LINE_NUMBER(257);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"keys"_j)));
	LINE_NUMBER(258);
	goto label_22;
	}
label_16:;
	{
	LINE_NUMBER(260);
	frame[4].i = (jint(0));
	LINE_NUMBER(261);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"values"_j)));
	LINE_NUMBER(262);
	goto label_22;
	}
label_17:;
	{
	LINE_NUMBER(264);
	frame[4].i = (jint(0));
	LINE_NUMBER(265);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"entries"_j)));
	LINE_NUMBER(266);
	goto label_22;
	}
label_18:;
	{
	LINE_NUMBER(268);
	frame[4].i = (jint(1));
	LINE_NUMBER(269);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"forEach"_j)));
	LINE_NUMBER(270);
	goto label_22;
	}
label_19:;
	{
	LINE_NUMBER(272);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeMap(ctx);
	sp[1].o = (jobject)SF_rhino_NativeMap_MAP_TAG;
	sp[0].o = (jobject)((func_rhino_NativeMap_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeMap_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeMap_findPrototypeId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:findPrototypeId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(279);
	clinit_rhino_NativeSet(ctx);
	sp[0].o = (jobject)SF_rhino_NativeSet_GETSIZE;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return (11);
	}
label_1:;
	{
	LINE_NUMBER(282);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return (9);
	}
label_3:;
	{
	LINE_NUMBER(288);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_TO_STRING_TAG;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (12);
	}
label_5:;
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeMap_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(302);
	frame[2].i = (jint(0));
	LINE_NUMBER(303);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(306);
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
	LINE_NUMBER(308);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(309);
	if ((frame[4].i) != (103)) goto label_11;
	}
	{
	LINE_NUMBER(310);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (116)) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (101)) goto label_8;
	}
	{
	LINE_NUMBER(311);
	frame[2].i = (jint(3));
	LINE_NUMBER(312);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(314);
	if ((frame[4].i) != (104)) goto label_16;
	}
	{
	LINE_NUMBER(315);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (115)) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (97)) goto label_8;
	}
	{
	LINE_NUMBER(316);
	frame[2].i = (jint(5));
	LINE_NUMBER(317);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(319);
	if ((frame[4].i) != (115)) goto label_8;
	}
	{
	LINE_NUMBER(320);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (116)) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (101)) goto label_8;
	}
	{
	LINE_NUMBER(321);
	frame[2].i = (jint(2));
	LINE_NUMBER(322);
	goto label_15;
	}
label_4:;
	{
	LINE_NUMBER(327);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"keys"_j)));
	LINE_NUMBER(328);
	frame[2].i = (7);
	LINE_NUMBER(329);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(331);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"clear"_j)));
	LINE_NUMBER(332);
	frame[2].i = (6);
	LINE_NUMBER(333);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(335);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(336);
	if ((frame[4].i) != (100)) goto label_28;
	}
	{
	LINE_NUMBER(337);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"delete"_j)));
	LINE_NUMBER(338);
	frame[2].i = (jint(4));
	goto label_8;
	}
label_28:;
	{
	LINE_NUMBER(339);
	if ((frame[4].i) != (118)) goto label_8;
	}
	{
	LINE_NUMBER(340);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"values"_j)));
	LINE_NUMBER(341);
	frame[2].i = (8);
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(345);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(346);
	if ((frame[4].i) != (101)) goto label_34;
	}
	{
	LINE_NUMBER(347);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"entries"_j)));
	LINE_NUMBER(348);
	frame[2].i = (9);
	goto label_8;
	}
label_34:;
	{
	LINE_NUMBER(349);
	if ((frame[4].i) != (102)) goto label_8;
	}
	{
	LINE_NUMBER(350);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"forEach"_j)));
	LINE_NUMBER(351);
	frame[2].i = (10);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(355);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(356);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(359);
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
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeMap_ITERATOR_TAG = ((jobject) createStringLiteral(ctx, u8"Map Iterator"_j));
	SF_rhino_NativeMap_Id_constructor = jint(1);
	SF_rhino_NativeMap_Id_set = jint(2);
	SF_rhino_NativeMap_Id_get = jint(3);
	SF_rhino_NativeMap_Id_delete = jint(4);
	SF_rhino_NativeMap_Id_has = jint(5);
	SF_rhino_NativeMap_Id_clear = jint(6);
	SF_rhino_NativeMap_Id_keys = jint(7);
	SF_rhino_NativeMap_Id_values = jint(8);
	SF_rhino_NativeMap_Id_entries = jint(9);
	SF_rhino_NativeMap_Id_forEach = jint(10);
	SF_rhino_NativeMap_SymbolId_getSize = jint(11);
	SF_rhino_NativeMap_SymbolId_toStringTag = jint(12);
	SF_rhino_NativeMap_MAX_PROTOTYPE_ID = jint(12);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeMap:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeMap(ctx);
	{
	LINE_NUMBER(4);
	clinit_rhino_NativeMap(ctx);
	SF_rhino_NativeMap_MAP_TAG = (((jobject) createStringLiteral(ctx, u8"Map"_j)));
	LINE_NUMBER(7);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_rhino_NativeMap(ctx);
	SF_rhino_NativeMap_NULL_VALUE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeMap[] {
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
	(void *) M_rhino_NativeMap_getClassName_R_java_lang_String,
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
	(void *) M_rhino_NativeMap_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_NativeMap_initPrototypeId_int,
	(void *) M_rhino_NativeMap_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_NativeMap_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeMap_js_set_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeMap_js_delete_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeMap_js_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeMap_js_has_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeMap_js_getSize_R_java_lang_Object,
	(void *) M_rhino_NativeMap_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object,
	(void *) M_rhino_NativeMap_js_clear_R_java_lang_Object,
	(void *) M_rhino_NativeMap_js_forEach_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap,
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
	{ "js_set", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_delete", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_has", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_getSize", "()Ljava/lang/Object;" },
	{ "js_iterator", "(Lrhino/Scriptable;Lrhino/NativeCollectionIterator$Type;)Ljava/lang/Object;" },
	{ "js_clear", "()Ljava/lang/Object;" },
	{ "js_forEach", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "realThis", "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/NativeMap;" },
};

static FieldMetadata fields[] {
	{ "MAP_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeMap_MAP_TAG, "Ljava/lang/Object;", 26 },
	{ "ITERATOR_TAG", &class_java_lang_String, (intptr_t) &SF_rhino_NativeMap_ITERATOR_TAG, "Ljava/lang/String;", 24 },
	{ "NULL_VALUE", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeMap_NULL_VALUE, "Ljava/lang/Object;", 26 },
	{ "entries", &class_rhino_Hashtable, offsetof(rhino_NativeMap, F_entries), "Lrhino/Hashtable;", 18 },
	{ "instanceOfMap", &class_boolean, offsetof(rhino_NativeMap, F_instanceOfMap), "Z", 2 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeMap_Id_constructor, "I", 26 },
	{ "Id_set", &class_int, (intptr_t) &SF_rhino_NativeMap_Id_set, "I", 26 },
	{ "Id_get", &class_int, (intptr_t) &SF_rhino_NativeMap_Id_get, "I", 26 },
	{ "Id_delete", &class_int, (intptr_t) &SF_rhino_NativeMap_Id_delete, "I", 26 },
	{ "Id_has", &class_int, (intptr_t) &SF_rhino_NativeMap_Id_has, "I", 26 },
	{ "Id_clear", &class_int, (intptr_t) &SF_rhino_NativeMap_Id_clear, "I", 26 },
	{ "Id_keys", &class_int, (intptr_t) &SF_rhino_NativeMap_Id_keys, "I", 26 },
	{ "Id_values", &class_int, (intptr_t) &SF_rhino_NativeMap_Id_values, "I", 26 },
	{ "Id_entries", &class_int, (intptr_t) &SF_rhino_NativeMap_Id_entries, "I", 26 },
	{ "Id_forEach", &class_int, (intptr_t) &SF_rhino_NativeMap_Id_forEach, "I", 26 },
	{ "SymbolId_getSize", &class_int, (intptr_t) &SF_rhino_NativeMap_SymbolId_getSize, "I", 26 },
	{ "SymbolId_toStringTag", &class_int, (intptr_t) &SF_rhino_NativeMap_SymbolId_toStringTag, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeMap_MAX_PROTOTYPE_ID, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeMap, 0, "()V", 1 },
	{ "init", (intptr_t) SM_rhino_NativeMap_init_rhino_Context_rhino_Scriptable_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Z)V", 8 },
	{ "getClassName", (intptr_t) M_rhino_NativeMap_getClassName_R_java_lang_String, VTABLE_rhino_NativeMap_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "execIdCall", (intptr_t) M_rhino_NativeMap_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeMap_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "js_set", (intptr_t) M_rhino_NativeMap_js_set_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeMap_js_set_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_delete", (intptr_t) M_rhino_NativeMap_js_delete_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeMap_js_delete_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_get", (intptr_t) M_rhino_NativeMap_js_get_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeMap_js_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_has", (intptr_t) M_rhino_NativeMap_js_has_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeMap_js_has_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_getSize", (intptr_t) M_rhino_NativeMap_js_getSize_R_java_lang_Object, VTABLE_rhino_NativeMap_js_getSize_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "js_iterator", (intptr_t) M_rhino_NativeMap_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object, VTABLE_rhino_NativeMap_js_iterator_rhino_Scriptable_rhino_NativeCollectionIterator$Type_R_java_lang_Object, "(Lrhino/Scriptable;Lrhino/NativeCollectionIterator$Type;)Ljava/lang/Object;", 2 },
	{ "js_clear", (intptr_t) M_rhino_NativeMap_js_clear_R_java_lang_Object, VTABLE_rhino_NativeMap_js_clear_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "js_forEach", (intptr_t) M_rhino_NativeMap_js_forEach_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeMap_js_forEach_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "loadFromIterable", (intptr_t) SM_rhino_NativeMap_loadFromIterable_rhino_Context_rhino_Scriptable_rhino_ScriptableObject_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/ScriptableObject;Ljava/lang/Object;)V", 8 },
	{ "realThis", (intptr_t) M_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap, VTABLE_rhino_NativeMap_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeMap, "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/NativeMap;", 2 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeMap_initPrototypeId_int, VTABLE_rhino_NativeMap_initPrototypeId_int, "(I)V", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeMap_findPrototypeId_rhino_Symbol_R_int, VTABLE_rhino_NativeMap_findPrototypeId_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeMap_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeMap_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeMap, 0, "()V", 8 },
};

Class class_rhino_NativeMap{
		.nativeName = (intptr_t) "rhino/NativeMap",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeMap),
		.classVtable = (intptr_t) vtable_rhino_NativeMap,
		.staticInitializer = (intptr_t) clinit_rhino_NativeMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 122,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeMap = registerClass(&class_rhino_NativeMap);

}
