#include "rhino/EqualObjectGraphs.h"
#include "java/lang/ClassCastException.h"
#include "java/lang/Integer.h"
#include "rhino/Symbol.h"
#include "rhino/JavaAdapter.h"
#include "rhino/EqualObjectGraphs_Func.h"
#include "rhino/Scriptable.h"
#include "rhino/NativeJavaTopPackage.h"
#include "rhino/ConsString.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "rhino/debug/DebuggableObject.h"
#include "java/util/Comparator.h"
#include "rhino/NativeJavaPackage.h"
#include "rhino/InterpretedFunction.h"
#include "rhino/SymbolKey.h"
#include "java/lang/Throwable.h"
#include "rhino/NativeContinuation.h"
#include "java/util/Iterator.h"
#include "rhino/BoundFunction.h"
#include "rhino/NativeSymbol.h"
#include "java/lang/ThreadLocal.h"
#include "rhino/ArrowFunction.h"
#include "java/util/Map_Entry.h"
#include "rhino/ScriptableObject.h"
#include "rhino/NativeGlobal.h"
#include "java/util/Map.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/Wrapper.h"
#include "java/util/IdentityHashMap.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/lang/AssertionError.h"
#include "java/util/SortedMap.h"
#include "rhino/EqualObjectGraphs.h"
#include "rhino/EqualObjectGraphs_invoke_java_util_Comparator_0.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "java/util/List.h"

extern "C" {

jobject SF_rhino_EqualObjectGraphs_instance;
jbool SF_rhino_EqualObjectGraphs_$assertionsDisabled;

void mark_rhino_EqualObjectGraphs(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_EqualObjectGraphs_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_EqualObjectGraphs_instance)->clazz)->markFunction)((jobject) SF_rhino_EqualObjectGraphs_instance, mark, depth + 1);
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
	auto self = (rhino_EqualObjectGraphs *) object;
	if (self->F_knownEquals)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_knownEquals)->clazz)->markFunction)((jobject) self->F_knownEquals, mark, depth + 1);
	if (self->F_currentlyCompared)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentlyCompared)->clazz)->markFunction)((jobject) self->F_currentlyCompared, mark, depth + 1);
}

void init_rhino_EqualObjectGraphs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_java_util_IdentityHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_IdentityHashMap);
	init_java_util_IdentityHashMap(ctx, sp[1].o);
	((rhino_EqualObjectGraphs *) NULL_CHECK(sp[0].o))->F_knownEquals = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_java_util_IdentityHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_IdentityHashMap);
	init_java_util_IdentityHashMap(ctx, sp[1].o);
	((rhino_EqualObjectGraphs *) NULL_CHECK(sp[0].o))->F_currentlyCompared = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_EqualObjectGraphs_withThreadLocal_rhino_EqualObjectGraphs$Func_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:withThreadLocal", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(37);
	clinit_rhino_EqualObjectGraphs(ctx);
	sp[0].o = (jobject)SF_rhino_EqualObjectGraphs_instance;
	sp[0].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_rhino_EqualObjectGraphs, sp[0].o));
	LINE_NUMBER(38);
	if ((frame[1].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(39);
	clinit_rhino_EqualObjectGraphs(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_EqualObjectGraphs);
	init_rhino_EqualObjectGraphs(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(40);
	clinit_rhino_EqualObjectGraphs(ctx);
	sp[0].o = (jobject)SF_rhino_EqualObjectGraphs_instance;
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_rhino_EqualObjectGraphs$Func_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_EqualObjectGraphs$Func, INDEX_rhino_EqualObjectGraphs$Func_apply_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(44);
	clinit_rhino_EqualObjectGraphs(ctx);
	sp[0].o = (jobject)SF_rhino_EqualObjectGraphs_instance;
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(44);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	clinit_rhino_EqualObjectGraphs(ctx);
	sp[0].o = (jobject)SF_rhino_EqualObjectGraphs_instance;
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(45);
	throwException(ctx, (frame[4].o));	}
label_8:;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_rhino_EqualObjectGraphs$Func_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_EqualObjectGraphs$Func, INDEX_rhino_EqualObjectGraphs$Func_apply_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:equalGraphs", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(55);
	if ((frame[1].o) != (frame[2].o)) goto label_1;
	}
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(57);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((rhino_EqualObjectGraphs *) NULL_CHECK((frame[0].o)))->F_currentlyCompared;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(62);
	if ((frame[3].o) != (frame[2].o)) goto label_6;
	}
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(72);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((rhino_EqualObjectGraphs *) NULL_CHECK((frame[0].o)))->F_knownEquals;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(79);
	if ((frame[4].o) != (frame[2].o)) goto label_11;
	}
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(82);
	if ((frame[4].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((rhino_EqualObjectGraphs *) NULL_CHECK((frame[0].o)))->F_knownEquals;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(88);
	if ((clinit_rhino_EqualObjectGraphs(ctx), (jint)SF_rhino_EqualObjectGraphs_$assertionsDisabled) != 0) goto label_16;
	}
	{
	if ((frame[5].o) != (frame[1].o)) goto label_16;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(89);
	if ((frame[5].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((rhino_EqualObjectGraphs *) NULL_CHECK((frame[0].o)))->F_currentlyCompared;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(95);
	jint temp0 = (jint)M_rhino_EqualObjectGraphs_equalGraphsNoMemo_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(96);
	if ((frame[6].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((rhino_EqualObjectGraphs *) NULL_CHECK((frame[0].o)))->F_knownEquals;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((rhino_EqualObjectGraphs *) NULL_CHECK((frame[0].o)))->F_knownEquals;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	}
label_21:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((rhino_EqualObjectGraphs *) NULL_CHECK((frame[0].o)))->F_currentlyCompared;
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jbool M_rhino_EqualObjectGraphs_equalGraphsNoMemo_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:equalGraphsNoMemo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(105);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Wrapper)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(106);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Wrapper)) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o))));
	sp[2].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[2].o))));
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(107);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(108);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Scriptable)) == 0) goto label_7;
	}
	{
	jint temp0 = (jint)M_rhino_EqualObjectGraphs_equalScriptables_rhino_Scriptable_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o))), (checkCast(ctx, &class_rhino_Scriptable, (frame[2].o))));
	if (temp0 == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(109);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ConsString)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_rhino_ConsString_toString_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ConsString, (frame[1].o))))->vtable)[VTABLE_rhino_ConsString_toString_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ConsString, (frame[1].o))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(111);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ConsString)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_rhino_ConsString_toString_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ConsString, (frame[2].o))))->vtable)[VTABLE_rhino_ConsString_toString_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ConsString, (frame[2].o))));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_11:;
	{
	LINE_NUMBER(113);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_SymbolKey)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(114);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_SymbolKey)) == 0) goto label_15;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_SymbolKey_getName_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_SymbolKey, (frame[1].o))))->vtable)[VTABLE_rhino_SymbolKey_getName_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_SymbolKey, (frame[1].o))));
	sp[2].o = (jobject)((func_rhino_SymbolKey_getName_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_SymbolKey, (frame[2].o))))->vtable)[VTABLE_rhino_SymbolKey_getName_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_SymbolKey, (frame[2].o))));
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(115);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_java_lang_Object, 1))) == 0) goto label_17;
	}
	{
	LINE_NUMBER(116);
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_java_lang_Object, 1))) == 0) goto label_19;
	}
	{
	jint temp0 = (jint)M_rhino_EqualObjectGraphs_equalObjectArrays_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, (frame[0].o), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[1].o))))), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[2].o))))));
	if (temp0 == 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)SM_java_util_Objects_deepEquals_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_21:;
	{
	LINE_NUMBER(119);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_List)) == 0) goto label_23;
	}
	{
	LINE_NUMBER(120);
	if ((isInstance(ctx, (frame[2].o), &class_java_util_List)) == 0) goto label_25;
	}
	{
	jint temp0 = (jint)M_rhino_EqualObjectGraphs_equalLists_java_util_List_java_util_List_R_boolean(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_List, (frame[1].o))), (checkCast(ctx, &class_java_util_List, (frame[2].o))));
	if (temp0 == 0) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	popStackFrame(ctx);
	INST_IRETURN();
label_23:;
	{
	LINE_NUMBER(121);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map)) == 0) goto label_27;
	}
	{
	LINE_NUMBER(122);
	if ((isInstance(ctx, (frame[2].o), &class_java_util_Map)) == 0) goto label_29;
	}
	{
	jint temp0 = (jint)M_rhino_EqualObjectGraphs_equalMaps_java_util_Map_java_util_Map_R_boolean(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map, (frame[1].o))), (checkCast(ctx, &class_java_util_Map, (frame[2].o))));
	if (temp0 == 0) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	popStackFrame(ctx);
	INST_IRETURN();
label_27:;
	{
	LINE_NUMBER(123);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Set)) == 0) goto label_31;
	}
	{
	LINE_NUMBER(124);
	if ((isInstance(ctx, (frame[2].o), &class_java_util_Set)) == 0) goto label_33;
	}
	{
	jint temp0 = (jint)M_rhino_EqualObjectGraphs_equalSets_java_util_Set_java_util_Set_R_boolean(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Set, (frame[1].o))), (checkCast(ctx, &class_java_util_Set, (frame[2].o))));
	if (temp0 == 0) goto label_33;
	}
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	popStackFrame(ctx);
	INST_IRETURN();
label_31:;
	{
	LINE_NUMBER(125);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeGlobal)) == 0) goto label_35;
	}
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[2].o), &class_rhino_NativeGlobal));
	}
label_35:;
	{
	LINE_NUMBER(127);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_JavaAdapter)) == 0) goto label_37;
	}
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[2].o), &class_rhino_JavaAdapter));
	}
label_37:;
	{
	LINE_NUMBER(129);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeJavaTopPackage)) == 0) goto label_39;
	}
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[2].o), &class_rhino_NativeJavaTopPackage));
	}
label_39:;
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_EqualObjectGraphs_equalScriptables_rhino_Scriptable_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:equalScriptables", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_rhino_EqualObjectGraphs_getSortedIds_rhino_Scriptable_R_Array1_java_lang_Object(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_rhino_EqualObjectGraphs_getSortedIds_rhino_Scriptable_R_Array1_java_lang_Object(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(140);
	jint temp0 = (jint)M_rhino_EqualObjectGraphs_equalObjectArrays_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[3].o), (frame[4].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(143);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(144);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_EqualObjectGraphs_getValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))));
	sp[2].o = (jobject)SM_rhino_EqualObjectGraphs_getValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i))));
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(144);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(156);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeContinuation)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(157);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_NativeContinuation)) == 0) goto label_17;
	}
	{
	jint temp0 = (jint)SM_rhino_NativeContinuation_equalImplementations_rhino_NativeContinuation_rhino_NativeContinuation_R_boolean(ctx, (checkCast(ctx, &class_rhino_NativeContinuation, (frame[1].o))), (checkCast(ctx, &class_rhino_NativeContinuation, (frame[2].o))));
	if (temp0 == 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(158);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeJavaPackage)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(159);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_19:;
	{
	LINE_NUMBER(160);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_IdFunctionObject)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(161);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_IdFunctionObject)) == 0) goto label_23;
	}
	{
	jint temp0 = (jint)SM_rhino_IdFunctionObject_equalObjectGraphs_rhino_IdFunctionObject_rhino_IdFunctionObject_rhino_EqualObjectGraphs_R_boolean(ctx, (checkCast(ctx, &class_rhino_IdFunctionObject, (frame[1].o))), (checkCast(ctx, &class_rhino_IdFunctionObject, (frame[2].o))), (frame[0].o));
	if (temp0 == 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	popStackFrame(ctx);
	INST_IRETURN();
label_21:;
	{
	LINE_NUMBER(162);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_InterpretedFunction)) == 0) goto label_25;
	}
	{
	LINE_NUMBER(163);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_InterpretedFunction)) == 0) goto label_27;
	}
	{
	jint temp0 = (jint)SM_rhino_EqualObjectGraphs_equalInterpretedFunctions_rhino_InterpretedFunction_rhino_InterpretedFunction_R_boolean(ctx, (checkCast(ctx, &class_rhino_InterpretedFunction, (frame[1].o))), (checkCast(ctx, &class_rhino_InterpretedFunction, (frame[2].o))));
	if (temp0 == 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	popStackFrame(ctx);
	INST_IRETURN();
label_25:;
	{
	LINE_NUMBER(164);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ArrowFunction)) == 0) goto label_29;
	}
	{
	LINE_NUMBER(165);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ArrowFunction)) == 0) goto label_31;
	}
	{
	jint temp0 = (jint)SM_rhino_ArrowFunction_equalObjectGraphs_rhino_ArrowFunction_rhino_ArrowFunction_rhino_EqualObjectGraphs_R_boolean(ctx, (checkCast(ctx, &class_rhino_ArrowFunction, (frame[1].o))), (checkCast(ctx, &class_rhino_ArrowFunction, (frame[2].o))), (frame[0].o));
	if (temp0 == 0) goto label_31;
	}
	INST_ICONST(1);
	goto label_32;
label_31:;
	INST_ICONST(0);
label_32:;
	popStackFrame(ctx);
	INST_IRETURN();
label_29:;
	{
	LINE_NUMBER(166);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_BoundFunction)) == 0) goto label_33;
	}
	{
	LINE_NUMBER(167);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_BoundFunction)) == 0) goto label_35;
	}
	{
	jint temp0 = (jint)SM_rhino_BoundFunction_equalObjectGraphs_rhino_BoundFunction_rhino_BoundFunction_rhino_EqualObjectGraphs_R_boolean(ctx, (checkCast(ctx, &class_rhino_BoundFunction, (frame[1].o))), (checkCast(ctx, &class_rhino_BoundFunction, (frame[2].o))), (frame[0].o));
	if (temp0 == 0) goto label_35;
	}
	INST_ICONST(1);
	goto label_36;
label_35:;
	INST_ICONST(0);
label_36:;
	popStackFrame(ctx);
	INST_IRETURN();
label_33:;
	{
	LINE_NUMBER(168);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeSymbol)) == 0) goto label_37;
	}
	{
	LINE_NUMBER(169);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_NativeSymbol)) == 0) goto label_39;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_NativeSymbol_getKey_R_rhino_SymbolKey) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[1].o))))->vtable)[VTABLE_rhino_NativeSymbol_getKey_R_rhino_SymbolKey])(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[1].o))));
	sp[2].o = (jobject)((func_rhino_NativeSymbol_getKey_R_rhino_SymbolKey) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[2].o))))->vtable)[VTABLE_rhino_NativeSymbol_getKey_R_rhino_SymbolKey])(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[2].o))));
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_39;
	}
	INST_ICONST(1);
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	popStackFrame(ctx);
	INST_IRETURN();
label_37:;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_rhino_EqualObjectGraphs_equalObjectArrays_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:equalObjectArrays", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(175);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_1;
	}
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(178);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(178);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_rhino_EqualObjectGraphs_equalLists_java_util_List_java_util_List_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:equalLists", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == temp1) goto label_1;
	}
	{
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[2].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(197);
	if ((clinit_rhino_EqualObjectGraphs(ctx), (jint)SF_rhino_EqualObjectGraphs_$assertionsDisabled) != 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
label_9:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_rhino_EqualObjectGraphs_equalMaps_java_util_Map_java_util_Map_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:equalMaps", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(203);
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == temp1) goto label_1;
	}
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)SM_rhino_EqualObjectGraphs_sortedEntries_java_util_Map_R_java_util_Iterator(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(207);
	sp[0].o = (jobject)SM_rhino_EqualObjectGraphs_sortedEntries_java_util_Map_R_java_util_Iterator(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[5].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[6].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	LINE_NUMBER(215);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(216);
	if ((clinit_rhino_EqualObjectGraphs(ctx), (jint)SF_rhino_EqualObjectGraphs_$assertionsDisabled) != 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 != 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_11;
	}
label_12:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_EqualObjectGraphs_sortedEntries_java_util_Map_R_java_util_Iterator(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:sortedEntries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(226);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_SortedMap)) == 0) goto label_1;
	}
	INST_ALOAD(0);
	goto label_2;
label_1:;
	{
	clinit_java_util_TreeMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap);
	init_java_util_TreeMap_java_util_Map(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_EqualObjectGraphs_equalSets_java_util_Set_java_util_Set_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:equalSets", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_EqualObjectGraphs_sortedSet_java_util_Set_R_Array1_java_lang_Object(ctx, (frame[1].o));
	sp[2].o = (jobject)SM_rhino_EqualObjectGraphs_sortedSet_java_util_Set_R_Array1_java_lang_Object(ctx, (frame[2].o));
	jint temp0 = (jint)M_rhino_EqualObjectGraphs_equalObjectArrays_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_EqualObjectGraphs_sortedSet_java_util_Set_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:sortedSet", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_java_util_Set_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_toArray_R_Array1_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(236);
	SM_java_util_Arrays_sort_Array1_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_EqualObjectGraphs_equalInterpretedFunctions_rhino_InterpretedFunction_rhino_InterpretedFunction_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:equalInterpretedFunctions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_rhino_InterpretedFunction_getEncodedSource_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_InterpretedFunction_getEncodedSource_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_rhino_InterpretedFunction_getEncodedSource_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_InterpretedFunction_getEncodedSource_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_EqualObjectGraphs_getSortedIds_rhino_Scriptable_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:getSortedIds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)SM_rhino_EqualObjectGraphs_getIds_rhino_Scriptable_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(247);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_rhino_EqualObjectGraphs_invoke_java_util_Comparator_0(ctx);
		auto proxy = (rhino_EqualObjectGraphs_invoke_java_util_Comparator_0 *) gcAlloc(ctx, &class_rhino_EqualObjectGraphs_invoke_java_util_Comparator_0);
		sp[1].o = (jobject) proxy;
	}
	SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_EqualObjectGraphs_getSymbolName_rhino_Symbol_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:getSymbolName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(279);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_SymbolKey)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_rhino_SymbolKey_getName_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_SymbolKey, (frame[0].o))))->vtable)[VTABLE_rhino_SymbolKey_getName_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_SymbolKey, (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(281);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeSymbol)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_rhino_NativeSymbol_getKey_R_rhino_SymbolKey) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[0].o))))->vtable)[VTABLE_rhino_NativeSymbol_getKey_R_rhino_SymbolKey])(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[0].o))));
	sp[0].o = (jobject)((func_rhino_SymbolKey_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_getName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(285);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	init_java_lang_ClassCastException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_EqualObjectGraphs_getIds_rhino_Scriptable_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:getIds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(290);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ScriptableObject)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o))))->vtable)[VTABLE_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o))), (jint(1)), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(293);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_debug_DebuggableObject)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_rhino_debug_DebuggableObject_getAllIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_debug_DebuggableObject, INDEX_rhino_debug_DebuggableObject_getAllIds_R_Array1_java_lang_Object, (checkCast(ctx, &class_rhino_debug_DebuggableObject, (frame[0].o)))))(ctx, (checkCast(ctx, &class_rhino_debug_DebuggableObject, (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_EqualObjectGraphs_getValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:getValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(301);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Symbol)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_rhino_Symbol_R_java_lang_Object(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_Symbol, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(303);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Integer)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[1].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[1].o))));
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(305);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_String, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(308);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	init_java_lang_ClassCastException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_rhino_EqualObjectGraphs_lambda$getSortedIds$0_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:lambda$getSortedIds$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(248);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Integer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(249);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Integer)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(250);
	jint temp0 = (jint)((func_java_lang_Integer_compareTo_java_lang_Integer_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[0].o))))->vtable)[VTABLE_java_lang_Integer_compareTo_java_lang_Integer_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[0].o))), (checkCast(ctx, &class_java_lang_Integer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(251);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) != 0) goto label_5;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Symbol)) == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(254);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(255);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(256);
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, (frame[0].o))))->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, (checkCast(ctx, &class_java_lang_String, (frame[0].o))), (checkCast(ctx, &class_java_lang_String, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(257);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Integer)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(259);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Symbol)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_7:;
	{
	LINE_NUMBER(262);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Symbol)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(263);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Symbol)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)SM_rhino_EqualObjectGraphs_getSymbolName_rhino_Symbol_R_java_lang_String(ctx, (checkCast(ctx, &class_rhino_Symbol, (frame[0].o))));
	sp[1].o = (jobject)SM_rhino_EqualObjectGraphs_getSymbolName_rhino_Symbol_R_java_lang_String(ctx, (checkCast(ctx, &class_rhino_Symbol, (frame[1].o))));
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_15:;
	{
	LINE_NUMBER(268);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Integer)) != 0) goto label_17;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_6;
	}
label_17:;
	{
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(273);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	init_java_lang_ClassCastException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_rhino_EqualObjectGraphs(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EqualObjectGraphs:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EqualObjectGraphs(ctx);
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_EqualObjectGraphs)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_EqualObjectGraphs)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_rhino_EqualObjectGraphs(ctx);
	SF_rhino_EqualObjectGraphs_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(28);
	clinit_java_lang_ThreadLocal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ThreadLocal);
	init_java_lang_ThreadLocal(ctx, sp[0].o);
	clinit_rhino_EqualObjectGraphs(ctx);
	SF_rhino_EqualObjectGraphs_instance = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_EqualObjectGraphs[] {
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
	(void *) M_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_rhino_EqualObjectGraphs_equalGraphsNoMemo_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_rhino_EqualObjectGraphs_equalScriptables_rhino_Scriptable_rhino_Scriptable_R_boolean,
	(void *) M_rhino_EqualObjectGraphs_equalObjectArrays_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean,
	(void *) M_rhino_EqualObjectGraphs_equalLists_java_util_List_java_util_List_R_boolean,
	(void *) M_rhino_EqualObjectGraphs_equalMaps_java_util_Map_java_util_Map_R_boolean,
	(void *) M_rhino_EqualObjectGraphs_equalSets_java_util_Set_java_util_Set_R_boolean,
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
	{ "equalGraphs", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "equalGraphsNoMemo", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "equalScriptables", "(Lrhino/Scriptable;Lrhino/Scriptable;)Z" },
	{ "equalObjectArrays", "([Ljava/lang/Object;[Ljava/lang/Object;)Z" },
	{ "equalLists", "(Ljava/util/List;Ljava/util/List;)Z" },
	{ "equalMaps", "(Ljava/util/Map;Ljava/util/Map;)Z" },
	{ "equalSets", "(Ljava/util/Set;Ljava/util/Set;)Z" },
};

static jclass innerClasses[] {
	&class_rhino_EqualObjectGraphs$Func,
};

static FieldMetadata fields[] {
	{ "instance", &class_java_lang_ThreadLocal, (intptr_t) &SF_rhino_EqualObjectGraphs_instance, "Ljava/lang/ThreadLocal;", 26 },
	{ "knownEquals", &class_java_util_Map, offsetof(rhino_EqualObjectGraphs, F_knownEquals), "Ljava/util/Map;", 18 },
	{ "currentlyCompared", &class_java_util_Map, offsetof(rhino_EqualObjectGraphs, F_currentlyCompared), "Ljava/util/Map;", 18 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_EqualObjectGraphs_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_EqualObjectGraphs, 0, "()V", 0 },
	{ "withThreadLocal", (intptr_t) SM_rhino_EqualObjectGraphs_withThreadLocal_rhino_EqualObjectGraphs$Func_R_java_lang_Object, 0, "(Lrhino/EqualObjectGraphs$Func;)Ljava/lang/Object;", 8 },
	{ "equalGraphs", (intptr_t) M_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean, VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 0 },
	{ "equalGraphsNoMemo", (intptr_t) M_rhino_EqualObjectGraphs_equalGraphsNoMemo_java_lang_Object_java_lang_Object_R_boolean, VTABLE_rhino_EqualObjectGraphs_equalGraphsNoMemo_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 2 },
	{ "equalScriptables", (intptr_t) M_rhino_EqualObjectGraphs_equalScriptables_rhino_Scriptable_rhino_Scriptable_R_boolean, VTABLE_rhino_EqualObjectGraphs_equalScriptables_rhino_Scriptable_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;Lrhino/Scriptable;)Z", 2 },
	{ "equalObjectArrays", (intptr_t) M_rhino_EqualObjectGraphs_equalObjectArrays_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean, VTABLE_rhino_EqualObjectGraphs_equalObjectArrays_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean, "([Ljava/lang/Object;[Ljava/lang/Object;)Z", 2 },
	{ "equalLists", (intptr_t) M_rhino_EqualObjectGraphs_equalLists_java_util_List_java_util_List_R_boolean, VTABLE_rhino_EqualObjectGraphs_equalLists_java_util_List_java_util_List_R_boolean, "(Ljava/util/List;Ljava/util/List;)Z", 2 },
	{ "equalMaps", (intptr_t) M_rhino_EqualObjectGraphs_equalMaps_java_util_Map_java_util_Map_R_boolean, VTABLE_rhino_EqualObjectGraphs_equalMaps_java_util_Map_java_util_Map_R_boolean, "(Ljava/util/Map;Ljava/util/Map;)Z", 2 },
	{ "sortedEntries", (intptr_t) SM_rhino_EqualObjectGraphs_sortedEntries_java_util_Map_R_java_util_Iterator, 0, "(Ljava/util/Map;)Ljava/util/Iterator;", 10 },
	{ "equalSets", (intptr_t) M_rhino_EqualObjectGraphs_equalSets_java_util_Set_java_util_Set_R_boolean, VTABLE_rhino_EqualObjectGraphs_equalSets_java_util_Set_java_util_Set_R_boolean, "(Ljava/util/Set;Ljava/util/Set;)Z", 2 },
	{ "sortedSet", (intptr_t) SM_rhino_EqualObjectGraphs_sortedSet_java_util_Set_R_Array1_java_lang_Object, 0, "(Ljava/util/Set;)[Ljava/lang/Object;", 10 },
	{ "equalInterpretedFunctions", (intptr_t) SM_rhino_EqualObjectGraphs_equalInterpretedFunctions_rhino_InterpretedFunction_rhino_InterpretedFunction_R_boolean, 0, "(Lrhino/InterpretedFunction;Lrhino/InterpretedFunction;)Z", 10 },
	{ "getSortedIds", (intptr_t) SM_rhino_EqualObjectGraphs_getSortedIds_rhino_Scriptable_R_Array1_java_lang_Object, 0, "(Lrhino/Scriptable;)[Ljava/lang/Object;", 10 },
	{ "getSymbolName", (intptr_t) SM_rhino_EqualObjectGraphs_getSymbolName_rhino_Symbol_R_java_lang_String, 0, "(Lrhino/Symbol;)Ljava/lang/String;", 10 },
	{ "getIds", (intptr_t) SM_rhino_EqualObjectGraphs_getIds_rhino_Scriptable_R_Array1_java_lang_Object, 0, "(Lrhino/Scriptable;)[Ljava/lang/Object;", 10 },
	{ "getValue", (intptr_t) SM_rhino_EqualObjectGraphs_getValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "lambda$getSortedIds$0", (intptr_t) SM_rhino_EqualObjectGraphs_lambda$getSortedIds$0_java_lang_Object_java_lang_Object_R_int, 0, "(Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "<clinit>", (intptr_t) clinit_rhino_EqualObjectGraphs, 0, "()V", 8 },
};

Class class_rhino_EqualObjectGraphs{
		.nativeName = (intptr_t) "rhino/EqualObjectGraphs",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_EqualObjectGraphs),
		.classVtable = (intptr_t) vtable_rhino_EqualObjectGraphs,
		.staticInitializer = (intptr_t) clinit_rhino_EqualObjectGraphs,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_EqualObjectGraphs,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_EqualObjectGraphs = registerClass(&class_rhino_EqualObjectGraphs);

}
