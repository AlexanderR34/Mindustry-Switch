#include "rhino/NativeArray.h"
#include "rhino/NativeArray_invoke_java_util_Comparator_0.h"
#include "rhino/regexp/NativeRegExp.h"
#include "java/lang/Integer.h"
#include "rhino/Function.h"
#include "java/lang/StringBuilder.h"
#include "rhino/NativeArrayIterator.h"
#include "rhino/ScriptRuntimeES6.h"
#include "rhino/NativeArray.h"
#include "rhino/IdScriptableObject.h"
#include "java/util/ArrayList.h"
#include "rhino/Callable.h"
#include "rhino/EvaluatorException.h"
#include "rhino/NativeArray_ElementComparator.h"
#include "java/util/Collection.h"
#include "java/util/Arrays.h"
#include "rhino/ObjToIntMap.h"
#include "rhino/SymbolKey.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/lang/Throwable.h"
#include "java/util/Iterator.h"
#include "rhino/Sorting.h"
#include "rhino/Context.h"
#include "rhino/NativeString.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/IteratorLikeIterable.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/NativeArray_1.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"
#include "rhino/NativeArray_StringLikeComparator.h"
#include "rhino/Symbol.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Boolean.h"
#include "java/lang/reflect/Array.h"
#include "rhino/Scriptable.h"
#include "rhino/BaseFunction.h"
#include "java/lang/Iterable.h"
#include "rhino/Undefined.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "java/lang/Math.h"
#include "rhino/NativeObject.h"
#include "java/lang/Number.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/NativeArrayIterator_ARRAY_ITERATOR_TYPE.h"
#include "java/lang/Long.h"
#include "rhino/Wrapper.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "rhino/IteratorLikeIterable_Itr.h"

extern "C" {

jobject SF_rhino_NativeArray_ARRAY_TAG;
jobject SF_rhino_NativeArray_NEGATIVE_ONE;
jint SF_rhino_NativeArray_Id_length;
jint SF_rhino_NativeArray_MAX_INSTANCE_ID;
jobject SF_rhino_NativeArray_STRING_COMPARATOR;
jobject SF_rhino_NativeArray_DEFAULT_COMPARATOR;
jint SF_rhino_NativeArray_Id_constructor;
jint SF_rhino_NativeArray_Id_toString;
jint SF_rhino_NativeArray_Id_toLocaleString;
jint SF_rhino_NativeArray_Id_toSource;
jint SF_rhino_NativeArray_Id_join;
jint SF_rhino_NativeArray_Id_reverse;
jint SF_rhino_NativeArray_Id_sort;
jint SF_rhino_NativeArray_Id_push;
jint SF_rhino_NativeArray_Id_pop;
jint SF_rhino_NativeArray_Id_shift;
jint SF_rhino_NativeArray_Id_unshift;
jint SF_rhino_NativeArray_Id_splice;
jint SF_rhino_NativeArray_Id_concat;
jint SF_rhino_NativeArray_Id_slice;
jint SF_rhino_NativeArray_Id_indexOf;
jint SF_rhino_NativeArray_Id_lastIndexOf;
jint SF_rhino_NativeArray_Id_every;
jint SF_rhino_NativeArray_Id_filter;
jint SF_rhino_NativeArray_Id_forEach;
jint SF_rhino_NativeArray_Id_map;
jint SF_rhino_NativeArray_Id_some;
jint SF_rhino_NativeArray_Id_find;
jint SF_rhino_NativeArray_Id_findIndex;
jint SF_rhino_NativeArray_Id_reduce;
jint SF_rhino_NativeArray_Id_reduceRight;
jint SF_rhino_NativeArray_Id_fill;
jint SF_rhino_NativeArray_Id_keys;
jint SF_rhino_NativeArray_Id_values;
jint SF_rhino_NativeArray_Id_entries;
jint SF_rhino_NativeArray_Id_includes;
jint SF_rhino_NativeArray_Id_copyWithin;
jint SF_rhino_NativeArray_SymbolId_iterator;
jint SF_rhino_NativeArray_MAX_PROTOTYPE_ID;
jint SF_rhino_NativeArray_ConstructorId_join;
jint SF_rhino_NativeArray_ConstructorId_reverse;
jint SF_rhino_NativeArray_ConstructorId_sort;
jint SF_rhino_NativeArray_ConstructorId_push;
jint SF_rhino_NativeArray_ConstructorId_pop;
jint SF_rhino_NativeArray_ConstructorId_shift;
jint SF_rhino_NativeArray_ConstructorId_unshift;
jint SF_rhino_NativeArray_ConstructorId_splice;
jint SF_rhino_NativeArray_ConstructorId_concat;
jint SF_rhino_NativeArray_ConstructorId_slice;
jint SF_rhino_NativeArray_ConstructorId_indexOf;
jint SF_rhino_NativeArray_ConstructorId_lastIndexOf;
jint SF_rhino_NativeArray_ConstructorId_every;
jint SF_rhino_NativeArray_ConstructorId_filter;
jint SF_rhino_NativeArray_ConstructorId_forEach;
jint SF_rhino_NativeArray_ConstructorId_map;
jint SF_rhino_NativeArray_ConstructorId_some;
jint SF_rhino_NativeArray_ConstructorId_find;
jint SF_rhino_NativeArray_ConstructorId_findIndex;
jint SF_rhino_NativeArray_ConstructorId_reduce;
jint SF_rhino_NativeArray_ConstructorId_reduceRight;
jint SF_rhino_NativeArray_ConstructorId_isArray;
jint SF_rhino_NativeArray_ConstructorId_of;
jint SF_rhino_NativeArray_ConstructorId_from;
jint SF_rhino_NativeArray_maximumInitialCapacity;
jint SF_rhino_NativeArray_DEFAULT_INITIAL_CAPACITY;
jdouble SF_rhino_NativeArray_GROW_FACTOR;
jint SF_rhino_NativeArray_MAX_PRE_GROW_SIZE;

void mark_rhino_NativeArray(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeArray_ARRAY_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeArray_ARRAY_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeArray_ARRAY_TAG, mark, depth + 1);
		if (SF_rhino_NativeArray_NEGATIVE_ONE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeArray_NEGATIVE_ONE)->clazz)->markFunction)((jobject) SF_rhino_NativeArray_NEGATIVE_ONE, mark, depth + 1);
		if (SF_rhino_NativeArray_STRING_COMPARATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeArray_STRING_COMPARATOR)->clazz)->markFunction)((jobject) SF_rhino_NativeArray_STRING_COMPARATOR, mark, depth + 1);
		if (SF_rhino_NativeArray_DEFAULT_COMPARATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeArray_DEFAULT_COMPARATOR)->clazz)->markFunction)((jobject) SF_rhino_NativeArray_DEFAULT_COMPARATOR, mark, depth + 1);
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
	auto self = (rhino_NativeArray *) object;
	if (self->F_dense)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dense)->clazz)->markFunction)((jobject) self->F_dense, mark, depth + 1);
}

void SM_rhino_NativeArray_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(31);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray);
	init_rhino_NativeArray_long(ctx, sp[0].o, (jlong(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_rhino_NativeArray_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeArray_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[2].o), (32), (frame[0].o), (frame[1].i));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeArray_getMaximumInitialCapacity_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getMaximumInitialCapacity", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (clinit_rhino_NativeArray(ctx), (jint)SF_rhino_NativeArray_maximumInitialCapacity);
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeArray_setMaximumInitialCapacity_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:setMaximumInitialCapacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(40);
	clinit_rhino_NativeArray(ctx);
	SF_rhino_NativeArray_maximumInitialCapacity = (frame[0].i);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeArray_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(43);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(2613);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_lengthAttr = (6);
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((longCompare((frame[1].l), (jlong((clinit_rhino_NativeArray(ctx), (jint)SF_rhino_NativeArray_maximumInitialCapacity))))) > 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	((rhino_NativeArray *) NULL_CHECK(sp[0].o))->F_denseOnly = sp[1].i;
	LINE_NUMBER(45);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly) == 0) goto label_6;
	}
	{
	LINE_NUMBER(46);
	frame[3].i = (jint((frame[1].l)));
	LINE_NUMBER(47);
	if ((frame[3].i) >= (10)) goto label_9;
	}
	{
	LINE_NUMBER(48);
	frame[3].i = (10);
	}
label_9:;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((rhino_NativeArray *) NULL_CHECK(sp[0].o))->F_dense = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(52);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length = (frame[1].l);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeArray_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(2613);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_lengthAttr = (6);
	LINE_NUMBER(56);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly = (jint(1));
	LINE_NUMBER(57);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense = (jref) (frame[1].o);
	LINE_NUMBER(58);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length = (jlong((((jarray) nullCheck(ctx, (frame[1].o)))->length)));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Array"_j)));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeArray_getMaxInstanceId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getMaxInstanceId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray_setInstanceIdAttributes_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:setInstanceIdAttributes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(78);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_lengthAttr = (frame[2].i);
	}
label_1:;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_NativeArray_findInstanceIdInfo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:findInstanceIdInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"length"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(85);
	jint temp0 = (jint)SM_rhino_IdScriptableObject_instanceIdInfo_int_int_R_int(ctx, ((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_lengthAttr), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_getInstanceIdName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getInstanceIdName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(92);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"length"_j)));
	}
label_1:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_getInstanceIdValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getInstanceIdValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(100);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (jdouble(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray_setInstanceIdValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:setInstanceIdValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(108);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(109);
	M_rhino_NativeArray_setLength_java_lang_Object(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(112);
	M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:fillConstructorProperties", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-5), (((jobject) createStringLiteral(ctx, u8"join"_j))), (jint(1)));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-6), (((jobject) createStringLiteral(ctx, u8"reverse"_j))), (jint(0)));
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-7), (((jobject) createStringLiteral(ctx, u8"sort"_j))), (jint(1)));
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-8), (((jobject) createStringLiteral(ctx, u8"push"_j))), (jint(1)));
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-9), (((jobject) createStringLiteral(ctx, u8"pop"_j))), (jint(0)));
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-10), (((jobject) createStringLiteral(ctx, u8"shift"_j))), (jint(0)));
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-11), (((jobject) createStringLiteral(ctx, u8"unshift"_j))), (jint(1)));
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-12), (((jobject) createStringLiteral(ctx, u8"splice"_j))), (jint(2)));
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-13), (((jobject) createStringLiteral(ctx, u8"concat"_j))), (jint(1)));
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-14), (((jobject) createStringLiteral(ctx, u8"slice"_j))), (jint(2)));
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-15), (((jobject) createStringLiteral(ctx, u8"indexOf"_j))), (jint(1)));
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-16), (((jobject) createStringLiteral(ctx, u8"lastIndexOf"_j))), (jint(1)));
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-17), (((jobject) createStringLiteral(ctx, u8"every"_j))), (jint(1)));
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-18), (((jobject) createStringLiteral(ctx, u8"filter"_j))), (jint(1)));
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-19), (((jobject) createStringLiteral(ctx, u8"forEach"_j))), (jint(1)));
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-20), (((jobject) createStringLiteral(ctx, u8"map"_j))), (jint(1)));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-21), (((jobject) createStringLiteral(ctx, u8"some"_j))), (jint(1)));
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-22), (((jobject) createStringLiteral(ctx, u8"find"_j))), (jint(1)));
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-23), (((jobject) createStringLiteral(ctx, u8"findIndex"_j))), (jint(1)));
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-24), (((jobject) createStringLiteral(ctx, u8"reduce"_j))), (jint(1)));
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-25), (((jobject) createStringLiteral(ctx, u8"reduceRight"_j))), (jint(1)));
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-26), (((jobject) createStringLiteral(ctx, u8"isArray"_j))), (jint(1)));
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-27), (((jobject) createStringLiteral(ctx, u8"of"_j))), (jint(0)));
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[2].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	((func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-28), (((jobject) createStringLiteral(ctx, u8"from"_j))), (jint(1)));
	LINE_NUMBER(165);
	M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:initPrototypeId", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(170);
	if ((frame[1].i) != (32)) goto label_1;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	jint temp0 = frame[1].i;
	clinit_rhino_SymbolKey(ctx);
	sp[2].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	sp[0].o = (jobject)((func_rhino_NativeArray_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (((jobject) createStringLiteral(ctx, u8"[Symbol.iterator]"_j))), (jint(0)));
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(175);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(177);
	switch((frame[1].i)) {
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_7;
		case 4: goto label_8;
		case 5: goto label_9;
		case 6: goto label_10;
		case 7: goto label_11;
		case 8: goto label_12;
		case 9: goto label_13;
		case 10: goto label_14;
		case 11: goto label_15;
		case 12: goto label_16;
		case 13: goto label_17;
		case 14: goto label_18;
		case 15: goto label_19;
		case 16: goto label_20;
		case 17: goto label_21;
		case 18: goto label_22;
		case 19: goto label_23;
		case 20: goto label_24;
		case 21: goto label_25;
		case 22: goto label_26;
		case 23: goto label_27;
		case 24: goto label_28;
		case 25: goto label_29;
		case 26: goto label_30;
		case 27: goto label_31;
		case 28: goto label_32;
		case 29: goto label_33;
		case 30: goto label_34;
		case 31: goto label_35;
		default: goto label_36;
	}
	}
label_5:;
	{
	LINE_NUMBER(179);
	frame[4].i = (jint(1));
	LINE_NUMBER(180);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(181);
	goto label_39;
	}
label_6:;
	{
	LINE_NUMBER(183);
	frame[4].i = (jint(0));
	LINE_NUMBER(184);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(185);
	goto label_39;
	}
label_7:;
	{
	LINE_NUMBER(187);
	frame[4].i = (jint(0));
	LINE_NUMBER(188);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toLocaleString"_j)));
	LINE_NUMBER(189);
	goto label_39;
	}
label_8:;
	{
	LINE_NUMBER(191);
	frame[4].i = (jint(0));
	LINE_NUMBER(192);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(193);
	goto label_39;
	}
label_9:;
	{
	LINE_NUMBER(195);
	frame[4].i = (jint(1));
	LINE_NUMBER(196);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"join"_j)));
	LINE_NUMBER(197);
	goto label_39;
	}
label_10:;
	{
	LINE_NUMBER(199);
	frame[4].i = (jint(0));
	LINE_NUMBER(200);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"reverse"_j)));
	LINE_NUMBER(201);
	goto label_39;
	}
label_11:;
	{
	LINE_NUMBER(203);
	frame[4].i = (jint(1));
	LINE_NUMBER(204);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"sort"_j)));
	LINE_NUMBER(205);
	goto label_39;
	}
label_12:;
	{
	LINE_NUMBER(207);
	frame[4].i = (jint(1));
	LINE_NUMBER(208);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"push"_j)));
	LINE_NUMBER(209);
	goto label_39;
	}
label_13:;
	{
	LINE_NUMBER(211);
	frame[4].i = (jint(0));
	LINE_NUMBER(212);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"pop"_j)));
	LINE_NUMBER(213);
	goto label_39;
	}
label_14:;
	{
	LINE_NUMBER(215);
	frame[4].i = (jint(0));
	LINE_NUMBER(216);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"shift"_j)));
	LINE_NUMBER(217);
	goto label_39;
	}
label_15:;
	{
	LINE_NUMBER(219);
	frame[4].i = (jint(1));
	LINE_NUMBER(220);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"unshift"_j)));
	LINE_NUMBER(221);
	goto label_39;
	}
label_16:;
	{
	LINE_NUMBER(223);
	frame[4].i = (jint(2));
	LINE_NUMBER(224);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"splice"_j)));
	LINE_NUMBER(225);
	goto label_39;
	}
label_17:;
	{
	LINE_NUMBER(227);
	frame[4].i = (jint(1));
	LINE_NUMBER(228);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"concat"_j)));
	LINE_NUMBER(229);
	goto label_39;
	}
label_18:;
	{
	LINE_NUMBER(231);
	frame[4].i = (jint(2));
	LINE_NUMBER(232);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"slice"_j)));
	LINE_NUMBER(233);
	goto label_39;
	}
label_19:;
	{
	LINE_NUMBER(235);
	frame[4].i = (jint(1));
	LINE_NUMBER(236);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"indexOf"_j)));
	LINE_NUMBER(237);
	goto label_39;
	}
label_20:;
	{
	LINE_NUMBER(239);
	frame[4].i = (jint(1));
	LINE_NUMBER(240);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"lastIndexOf"_j)));
	LINE_NUMBER(241);
	goto label_39;
	}
label_21:;
	{
	LINE_NUMBER(243);
	frame[4].i = (jint(1));
	LINE_NUMBER(244);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"every"_j)));
	LINE_NUMBER(245);
	goto label_39;
	}
label_22:;
	{
	LINE_NUMBER(247);
	frame[4].i = (jint(1));
	LINE_NUMBER(248);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"filter"_j)));
	LINE_NUMBER(249);
	goto label_39;
	}
label_23:;
	{
	LINE_NUMBER(251);
	frame[4].i = (jint(1));
	LINE_NUMBER(252);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"forEach"_j)));
	LINE_NUMBER(253);
	goto label_39;
	}
label_24:;
	{
	LINE_NUMBER(255);
	frame[4].i = (jint(1));
	LINE_NUMBER(256);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"map"_j)));
	LINE_NUMBER(257);
	goto label_39;
	}
label_25:;
	{
	LINE_NUMBER(259);
	frame[4].i = (jint(1));
	LINE_NUMBER(260);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"some"_j)));
	LINE_NUMBER(261);
	goto label_39;
	}
label_26:;
	{
	LINE_NUMBER(263);
	frame[4].i = (jint(1));
	LINE_NUMBER(264);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"find"_j)));
	LINE_NUMBER(265);
	goto label_39;
	}
label_27:;
	{
	LINE_NUMBER(267);
	frame[4].i = (jint(1));
	LINE_NUMBER(268);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"findIndex"_j)));
	LINE_NUMBER(269);
	goto label_39;
	}
label_28:;
	{
	LINE_NUMBER(271);
	frame[4].i = (jint(1));
	LINE_NUMBER(272);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"reduce"_j)));
	LINE_NUMBER(273);
	goto label_39;
	}
label_29:;
	{
	LINE_NUMBER(275);
	frame[4].i = (jint(1));
	LINE_NUMBER(276);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"reduceRight"_j)));
	LINE_NUMBER(277);
	goto label_39;
	}
label_30:;
	{
	LINE_NUMBER(279);
	frame[4].i = (jint(1));
	LINE_NUMBER(280);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"fill"_j)));
	LINE_NUMBER(281);
	goto label_39;
	}
label_31:;
	{
	LINE_NUMBER(283);
	frame[4].i = (jint(0));
	LINE_NUMBER(284);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"keys"_j)));
	LINE_NUMBER(285);
	goto label_39;
	}
label_32:;
	{
	LINE_NUMBER(287);
	frame[4].i = (jint(0));
	LINE_NUMBER(288);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"values"_j)));
	LINE_NUMBER(289);
	goto label_39;
	}
label_33:;
	{
	LINE_NUMBER(291);
	frame[4].i = (jint(0));
	LINE_NUMBER(292);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"entries"_j)));
	LINE_NUMBER(293);
	goto label_39;
	}
label_34:;
	{
	LINE_NUMBER(295);
	frame[4].i = (jint(1));
	LINE_NUMBER(296);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"includes"_j)));
	LINE_NUMBER(297);
	goto label_39;
	}
label_35:;
	{
	LINE_NUMBER(299);
	frame[4].i = (jint(2));
	LINE_NUMBER(300);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"copyWithin"_j)));
	LINE_NUMBER(301);
	goto label_39;
	}
label_36:;
	{
	LINE_NUMBER(303);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_39:;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	sp[0].o = (jobject)((func_rhino_NativeArray_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:execIdCall", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(312);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_NativeArray_ARRAY_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(315);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(318);
	switch((frame[6].i)) {
		case -28: goto label_4;
		case -27: goto label_5;
		case -26: goto label_6;
		case -25: goto label_7;
		case -24: goto label_7;
		case -23: goto label_7;
		case -22: goto label_7;
		case -21: goto label_7;
		case -20: goto label_7;
		case -19: goto label_7;
		case -18: goto label_7;
		case -17: goto label_7;
		case -16: goto label_7;
		case -15: goto label_7;
		case -14: goto label_7;
		case -13: goto label_7;
		case -12: goto label_7;
		case -11: goto label_7;
		case -10: goto label_7;
		case -9: goto label_7;
		case -8: goto label_7;
		case -7: goto label_7;
		case -6: goto label_7;
		case -5: goto label_7;
		case -4: goto label_8;
		case -3: goto label_8;
		case -2: goto label_8;
		case -1: goto label_8;
		case 0: goto label_8;
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
		case 11: goto label_19;
		case 12: goto label_20;
		case 13: goto label_21;
		case 14: goto label_22;
		case 15: goto label_23;
		case 16: goto label_24;
		case 17: goto label_25;
		case 18: goto label_25;
		case 19: goto label_25;
		case 20: goto label_25;
		case 21: goto label_25;
		case 22: goto label_25;
		case 23: goto label_25;
		case 24: goto label_26;
		case 25: goto label_26;
		case 26: goto label_27;
		case 27: goto label_28;
		case 28: goto label_29;
		case 29: goto label_30;
		case 30: goto label_31;
		case 31: goto label_32;
		case 32: goto label_29;
		default: goto label_8;
	}
	}
label_7:;
	{
	LINE_NUMBER(345);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(347);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((((jarray) nullCheck(ctx, (frame[5].o)))->length) - (jint(1))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(348);
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) < 0) goto label_37;
	}
	{
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (jint(1)), (frame[7].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[7].o)))->length));
	}
label_37:;
	{
	LINE_NUMBER(349);
	frame[5].o = (frame[7].o);
	}
label_33:;
	{
	LINE_NUMBER(351);
	frame[6].i = (-(frame[6].i));
	LINE_NUMBER(352);
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(356);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_39;
	}
	{
	jint temp0 = (jint)SM_rhino_NativeArray_js_isArray_java_lang_Object_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	if (temp0 == 0) goto label_39;
	}
	INST_ICONST(1);
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_of_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_from_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(367);
	if ((frame[4].o) != nullptr) goto label_41;
	}
	INST_ICONST(1);
	goto label_42;
label_41:;
	INST_ICONST(0);
label_42:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(368);
	if ((frame[7].i) != 0) goto label_44;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((func_rhino_IdFunctionObject_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)SM_rhino_NativeArray_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(376);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[4].o;
	sp[3].o = frame[2].o;
	jint temp0 = jint(4);
	LINE_NUMBER(377);
	jint temp1 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[3].o, temp0);
	jint temp2 = jint(0);
	LINE_NUMBER(376);
	sp[0].o = (jobject)SM_rhino_NativeArray_toStringHelper_rhino_Context_rhino_Scriptable_rhino_Scriptable_boolean_boolean_R_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, temp1, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)SM_rhino_NativeArray_toStringHelper_rhino_Context_rhino_Scriptable_rhino_Scriptable_boolean_boolean_R_java_lang_String(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (jint(0)), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)SM_rhino_NativeArray_toStringHelper_rhino_Context_rhino_Scriptable_rhino_Scriptable_boolean_boolean_R_java_lang_String(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (jint(1)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_join_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_reverse_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_sort_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_push_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_pop_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_shift_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_unshift_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_splice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_concat_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)M_rhino_NativeArray_js_slice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_indexOf_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_lastIndexOf_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_includes_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Boolean(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_fill_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)SM_rhino_NativeArray_js_copyWithin_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)SM_rhino_NativeArray_iterativeMethod_rhino_Context_rhino_IdFunctionObject_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[1].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)SM_rhino_NativeArray_reduceMethod_rhino_Context_int_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[6].i), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(444);
	clinit_rhino_NativeArrayIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArrayIterator);
	sp[1].o = frame[3].o;
	sp[2].o = frame[4].o;
	clinit_rhino_NativeArrayIterator$ARRAY_ITERATOR_TYPE(ctx);
	sp[3].o = (jobject)SF_rhino_NativeArrayIterator$ARRAY_ITERATOR_TYPE_KEYS;
	init_rhino_NativeArrayIterator_rhino_Scriptable_rhino_Scriptable_rhino_NativeArrayIterator$ARRAY_ITERATOR_TYPE(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(448);
	clinit_rhino_NativeArrayIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArrayIterator);
	sp[1].o = frame[3].o;
	sp[2].o = frame[4].o;
	clinit_rhino_NativeArrayIterator$ARRAY_ITERATOR_TYPE(ctx);
	sp[3].o = (jobject)SF_rhino_NativeArrayIterator$ARRAY_ITERATOR_TYPE_ENTRIES;
	init_rhino_NativeArrayIterator_rhino_Scriptable_rhino_Scriptable_rhino_NativeArrayIterator$ARRAY_ITERATOR_TYPE(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(453);
	clinit_rhino_NativeArrayIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArrayIterator);
	sp[1].o = frame[3].o;
	sp[2].o = frame[4].o;
	clinit_rhino_NativeArrayIterator$ARRAY_ITERATOR_TYPE(ctx);
	sp[3].o = (jobject)SF_rhino_NativeArrayIterator$ARRAY_ITERATOR_TYPE_VALUES;
	init_rhino_NativeArrayIterator_rhino_Scriptable_rhino_Scriptable_rhino_NativeArrayIterator$ARRAY_ITERATOR_TYPE(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(455);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Array.prototype has no method: "_j))));
	sp[2].o = (jobject)((func_rhino_IdFunctionObject_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_getFunctionName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(461);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_rhino_NativeArray_isGetterOrSetter_java_lang_String_int_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_isGetterOrSetter_java_lang_String_int_boolean_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].i), (jint(0)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}
label_3:;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:has", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(470);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_rhino_NativeArray_isGetterOrSetter_java_lang_String_int_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_isGetterOrSetter_java_lang_String_int_boolean_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].i), (jint(0)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(471);
	jint temp0 = (jint)M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(474);
	jint temp0 = (jint)M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_rhino_NativeArray_toArrayIndex_java_lang_Object_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:toArrayIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(478);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(479);
	jlong temp0 = (jlong)SM_rhino_NativeArray_toArrayIndex_java_lang_String_R_long(ctx, (checkCast(ctx, &class_java_lang_String, (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(480);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(481);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	jlong temp1 = (jlong)SM_rhino_NativeArray_toArrayIndex_double_R_long(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_3:;
	{
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return (jlong(-1ll));
	}

	popStackFrame(ctx);
}

jlong SM_rhino_NativeArray_toArrayIndex_java_lang_String_R_long(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:toArrayIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(489);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_String_R_double(ctx, (frame[0].o));
	jlong temp1 = (jlong)SM_rhino_NativeArray_toArrayIndex_double_R_long(ctx, temp0);
	frame[1].l = temp1;
	LINE_NUMBER(492);
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[1].l));
	jint temp2 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp2 == 0) goto label_2;
	}
	{
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return (frame[1].l);
	}
label_2:;
	{
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return (jlong(-1ll));
	}

	popStackFrame(ctx);
}

jlong SM_rhino_NativeArray_toArrayIndex_double_R_long(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:toArrayIndex", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(499);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(500);
	jlong temp0 = (jlong)SM_rhino_ScriptRuntime_toUint32_double_R_long(ctx, (frame[0].d));
	frame[2].l = temp0;
	LINE_NUMBER(501);
	if ((doubleCompare((jdouble((frame[2].l))), (frame[0].d), -1)) != 0) goto label_1;
	}
	{
	if ((longCompare((frame[2].l), (jlong(4294967295ll)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return (frame[2].l);
	}
label_1:;
	{
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return (jlong(-1ll));
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeArray_toDenseIndex_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:toDenseIndex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(509);
	jlong temp0 = (jlong)SM_rhino_NativeArray_toArrayIndex_java_lang_Object_R_long(ctx, (frame[0].o));
	frame[1].l = temp0;
	LINE_NUMBER(510);
	if ((longCompare((jlong(0)), (frame[1].l))) > 0) goto label_2;
	}
	{
	if ((longCompare((frame[1].l), (jlong(2147483647ll)))) >= 0) goto label_2;
	}
	{
	jint temp0 = jint((frame[1].l));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ICONST(-1);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeArray_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:put", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(515);
	M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(516);
	if ((frame[2].o) != (frame[0].o)) goto label_2;
	}
	{
	LINE_NUMBER(518);
	jlong temp0 = (jlong)SM_rhino_NativeArray_toArrayIndex_java_lang_String_R_long(ctx, (frame[1].o));
	frame[4].l = temp0;
	LINE_NUMBER(519);
	if ((longCompare((frame[4].l), ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length))) < 0) goto label_2;
	}
	{
	LINE_NUMBER(520);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length = ((frame[4].l) + (jlong(1)));
	LINE_NUMBER(521);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly = (jint(0));
	}
label_2:;
	LINE_NUMBER(524);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_ensureCapacity_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:ensureCapacity", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(527);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(528);
	if ((frame[1].i) <= (jint(1431655764))) goto label_3;
	}
	{
	LINE_NUMBER(529);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly = (jint(0));
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(532);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jdouble((((jarray) nullCheck(ctx, sp[0].o))->length))) * (jdouble(1.5))))));
	frame[1].i = temp1;
	LINE_NUMBER(533);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(534);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	jint temp2 = jint(0);
	sp[1].o = frame[2].o;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(535);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	jint temp4 = ((jarray) nullCheck(ctx, sp[1].o))->length;
	jint temp5 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, temp4, temp5, sp[1].o);
	LINE_NUMBER(537);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense = (jref) (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:put", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(544);
	if ((frame[2].o) != (frame[0].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_rhino_NativeArray_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly) != 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = jobject(nullptr);
	jint temp0 = frame[1].i;
	jint temp1 = jint(1);
	LINE_NUMBER(545);
	jint temp2 = (jint)((func_rhino_NativeArray_isGetterOrSetter_java_lang_String_int_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_isGetterOrSetter_java_lang_String_int_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	if (temp2 != 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(546);
	jint temp0 = (jint)((func_rhino_NativeArray_isExtensible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_isExtensible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	if ((longCompare(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length), (jlong((frame[1].i))))) > 0) goto label_4;
	}
	LINE_NUMBER(547);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(548);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[3].o);
	LINE_NUMBER(550);
	if ((longCompare(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length), (jlong((frame[1].i))))) > 0) goto label_9;
	}
	{
	LINE_NUMBER(551);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length = ((jlong((frame[1].i))) + (jlong(1)));
	}
label_9:;
	LINE_NUMBER(552);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(553);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly) == 0) goto label_11;
	}
	{
	jdouble temp0 = jdouble((frame[1].i));
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if ((doubleCompare(temp0, ((jdouble((((jarray) nullCheck(ctx, sp[0].o))->length))) * (jdouble(1.5))), 1)) >= 0) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (frame[1].i) + (jint(1));
	LINE_NUMBER(554);
	jint temp1 = (jint)M_rhino_NativeArray_ensureCapacity_int_R_boolean(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_11;
	}
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[3].o);
	LINE_NUMBER(556);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length = ((jlong((frame[1].i))) + (jlong(1)));
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(559);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(562);
	M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(563);
	if ((frame[2].o) != (frame[0].o)) goto label_17;
	}
	{
	if ((((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_lengthAttr) & (jint(1))) != 0) goto label_17;
	}
	{
	LINE_NUMBER(565);
	if ((longCompare(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length), (jlong((frame[1].i))))) > 0) goto label_17;
	}
	{
	LINE_NUMBER(567);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length = ((jlong((frame[1].i))) + (jlong(1)));
	}
label_17:;
	LINE_NUMBER(570);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeArray_delete_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:delete", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(575);
	jint temp0 = (jint)((func_rhino_NativeArray_isSealed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_isSealed_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly) != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_rhino_NativeArray_isGetterOrSetter_java_lang_String_int_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_isGetterOrSetter_java_lang_String_int_boolean_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].i), (jint(1)));
	if (temp0 != 0) goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	jint temp0 = frame[1].i;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(578);
	M_rhino_ScriptableObject_delete_int(ctx, (frame[0].o), (frame[1].i));
	}
label_4:;
	LINE_NUMBER(580);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_getIds_boolean_boolean_R_Array1_java_lang_Object(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getIds", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(585);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(588);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(589);
	frame[5].l = ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length);
	LINE_NUMBER(590);
	if ((longCompare((jlong((frame[4].i))), (frame[5].l))) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(591);
	frame[4].i = (jint((frame[5].l)));
	}
label_6:;
	{
	LINE_NUMBER(593);
	if ((frame[4].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_8:;
	{
	LINE_NUMBER(596);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(597);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[4].i) + (frame[7].i)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(599);
	frame[9].i = (jint(0));
	LINE_NUMBER(600);
	frame[10].i = (jint(0));
	}
label_13:;
	{
	if ((frame[10].i) == (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i));
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(603);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[10].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(604);
	INST_IINC(9, 1);
	}
label_16:;
	{
	LINE_NUMBER(600);
	INST_IINC(10, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(607);
	if ((frame[9].i) == (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[9].i) + (frame[7].i)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(610);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[8].o), (jint(0)), (frame[10].o), (jint(0)), (frame[9].i));
	LINE_NUMBER(611);
	frame[8].o = (frame[10].o);
	}
label_19:;
	{
	LINE_NUMBER(613);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[8].o), (frame[9].i), (frame[7].i));
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_getIndexIds_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getIndexIds", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((func_rhino_NativeArray_getIds_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_getIds_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(619);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(620);
	frame[3].o = (frame[1].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(621);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(ctx, (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(622);
	if ((frame[7].i) < 0) goto label_7;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_double_R_java_lang_String(ctx, (jdouble((frame[7].i))));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(623);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[7].i));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(620);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(626);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getDefaultValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(631);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(633);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[2].o));
	if (temp0 != (120)) goto label_1;
	}
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(636);
	sp[0].o = (jobject)M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:defaultIndexPropertyDescriptor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_rhino_NativeArray_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(641);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ALOAD(0);
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(642);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(643);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Object;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(644);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[1].o), (jint(0)));
	LINE_NUMBER(645);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"writable"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(646);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enumerable"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(647);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"configurable"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeArray_getAttributes_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getAttributes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(653);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(655);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(657);
	jint temp0 = (jint)M_rhino_ScriptableObject_getAttributes_int_R_int(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getOwnPropertyDescriptor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(663);
	jint temp0 = (jint)SM_rhino_NativeArray_toDenseIndex_java_lang_Object_R_int(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(664);
	if ((jint(0)) > (frame[3].i)) goto label_1;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(666);
	sp[0].o = (jobject)M_rhino_NativeArray_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:defineOwnProperty", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(677);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	frame[5].o = sp[0].o;
	LINE_NUMBER(678);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense = (jref) (jobject(nullptr));
	LINE_NUMBER(679);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly = (jint(0));
	LINE_NUMBER(680);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_1;
	}
	{
	LINE_NUMBER(681);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i));
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(682);
	((func_rhino_NativeArray_put_int_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_put_int_rhino_Scriptable_java_lang_Object])(ctx, (frame[0].o), (frame[6].i), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))));
	}
label_8:;
	{
	LINE_NUMBER(680);
	INST_IINC(6, 1);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(686);
	jlong temp0 = (jlong)SM_rhino_NativeArray_toArrayIndex_java_lang_Object_R_long(ctx, (frame[2].o));
	frame[5].l = temp0;
	LINE_NUMBER(687);
	if ((longCompare((frame[5].l), ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length))) < 0) goto label_11;
	}
	{
	LINE_NUMBER(688);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length = ((frame[5].l) + (jlong(1)));
	}
label_11:;
	{
	LINE_NUMBER(690);
	M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(691);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:jsConstructor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(698);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_1;
	}
	{
	LINE_NUMBER(699);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray);
	init_rhino_NativeArray_long(ctx, sp[0].o, (jlong(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(704);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 != (120)) goto label_3;
	}
	{
	LINE_NUMBER(705);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray);
	init_rhino_NativeArray_Array1_java_lang_Object(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(707);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))));
	LINE_NUMBER(708);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) > (jint(1))) goto label_6;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Number)) != 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(709);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray);
	init_rhino_NativeArray_Array1_java_lang_Object(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(711);
	jlong temp0 = (jlong)SM_rhino_ScriptRuntime_toUint32_java_lang_Object_R_long(ctx, (frame[3].o));
	frame[4].l = temp0;
	LINE_NUMBER(712);
	jdouble temp1 = jdouble((frame[4].l));
	jdouble temp2 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[3].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[3].o))));
	if ((doubleCompare(temp1, temp2, -1)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.arraylength.bad"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(714);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"RangeError"_j))), (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(716);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray);
	init_rhino_NativeArray_long(ctx, sp[0].o, (frame[4].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_callConstructorOrCreateArray_rhino_Context_rhino_Scriptable_rhino_Scriptable_long_boolean_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jlong param3, jbool param4) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:callConstructorOrCreateArray", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].l = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(721);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(723);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Function)) == 0) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_EcmaError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(725);
	if ((frame[5].i) != 0) goto label_7;
	}
	{
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jlong temp1 = frame[3].l;
	LINE_NUMBER(726);
	sp[1].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp += 1;
	goto label_10;
	}
label_8:;
	clinit_rhino_ScriptRuntime(ctx);
	(sp++)->o = SF_rhino_ScriptRuntime_emptyArgs;
label_10:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(727);
	sp[0].o = (jobject)((func_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, (checkCast(ctx, &class_rhino_Function, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_Function, (frame[2].o))), (frame[0].o), (frame[1].o), (frame[7].o));
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(734);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(728);
	frame[7].o = sp[0].o;
	LINE_NUMBER(729);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"TypeError"_j));
	sp[1].o = (jobject)((func_rhino_EcmaError_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_EcmaError_getName_R_java_lang_String])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(730);
	throwException(ctx, (frame[7].o));	}
label_6:;
	{
	LINE_NUMBER(737);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(739);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((longCompare((frame[3].l), (jlong(2147483647ll)))) <= 0) goto label_16;
	}
	INST_ICONST(0);
	goto label_17;
label_16:;
	INST_LLOAD(3);
	INST_L2I();
label_17:;
	POP_N(3); // Pop method args
	sp->o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].i);
	sp++;
	INST_ASTORE(6);
label_14:;
	{
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_from_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[29];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_from", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(746);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(1))) goto label_17;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	sp += 1;
	goto label_18;
	}
label_17:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_18:;
	{
	sp -= 2;
	LINE_NUMBER(747);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(748);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(2))) goto label_20;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)));
	sp += 1;
	goto label_21;
	}
label_20:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_21:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(749);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;
	frame[6].o = sp[0].o;
	LINE_NUMBER(750);
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[5].o));
	if (temp0 != 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(751);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(753);
	if ((frame[7].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(754);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Function)) != 0) goto label_30;
	}
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.map.function.not"_j))));
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(757);
	frame[8].o = (checkCast(ctx, &class_rhino_Function, (frame[5].o)));
	LINE_NUMBER(758);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(3))) goto label_28;
	}
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(2)))));
	frame[6].o = sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(763);
	sp[0].o = frame[4].o;
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_rhino_Symbol_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(764);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeArray)) != 0) goto label_35;
	}
	{
	sp[0].o = frame[9].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_35;
	}
	{
	sp[0].o = frame[9].o;
	LINE_NUMBER(765);
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(766);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_callIterator_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, (frame[4].o), (frame[0].o), (frame[1].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(767);
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[10].o));
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)SM_rhino_NativeArray_callConstructorOrCreateArray_rhino_Context_rhino_Scriptable_rhino_Scriptable_long_boolean_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jlong(0)), (jint(0)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(769);
	frame[12].l = (jlong(0));
	LINE_NUMBER(770);
	clinit_rhino_IteratorLikeIterable(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IteratorLikeIterable);
	init_rhino_IteratorLikeIterable_rhino_Context_rhino_Scriptable_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[10].o));
	frame[14].o = sp[0].o;
	frame[15].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_15; } // goto label_8
	}
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)((func_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr])(ctx, (frame[14].o));
	frame[16].o = sp[0].o;
	}
label_43:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[16].o)))(ctx, (frame[16].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[16].o)))(ctx, (frame[16].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(772);
	if ((frame[7].i) == 0) goto label_45;
	}
	{
	LINE_NUMBER(773);
	sp[0].o = frame[8].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[6].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[17].o);
	jint temp0 = jint(1);
	sp[5].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[12].l));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[17].o = sp[0].o;
	}
label_45:;
	{
	LINE_NUMBER(775);
	SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[11].o), (frame[12].l), (frame[17].o));
	LINE_NUMBER(776);
	frame[12].l = ((frame[12].l) + (jlong(1)));
	LINE_NUMBER(777);
	goto label_43;
	}
label_5:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(778);
	if ((frame[14].o) == nullptr) goto label_49;
	}
	INST_ALOAD(15);
	if ((--sp)->o == nullptr) goto label_50;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	INST_ALOAD(14);
	POP_N(1); // Pop method args
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_49;
label_2:;
	{
	sp -= 1;
	frame[16].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[15].o), (frame[16].o));
	goto label_49;
	}
label_50:;
	{
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, (frame[14].o));
	goto label_49;
	}
label_6:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	{
	sp -= 1;
	LINE_NUMBER(770);
	frame[16].o = sp[0].o;
	frame[15].o = (frame[16].o);
	throwException(ctx, (frame[16].o));	}
label_8:;
	LINE_NUMBER(778);
	INST_ASTORE(18);
	popExceptionFrame(frameRef);
	INST_ALOAD(14);
	if ((--sp)->o == nullptr) goto label_51;
	INST_ALOAD(15);
	if ((--sp)->o == nullptr) goto label_52;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	INST_ALOAD(14);
	POP_N(1); // Pop method args
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_51;
label_12:;
	{
	sp -= 1;
	frame[19].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[15].o), (frame[19].o));
	goto label_51;
	}
label_52:;
	INST_ALOAD(14);
	POP_N(1); // Pop method args
	((func_rhino_IteratorLikeIterable_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IteratorLikeIterable_close])(ctx, sp[0].o);
label_51:;
	INST_ALOAD(18);
	INST_ATHROW();
	label_49:;
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[11].o), (frame[12].l));
	LINE_NUMBER(780);
	popStackFrame(ctx);
	return (frame[11].o);
	}
label_35:;
	{
	LINE_NUMBER(784);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[10].l = temp0;
	LINE_NUMBER(785);
	sp[0].o = (jobject)SM_rhino_NativeArray_callConstructorOrCreateArray_rhino_Context_rhino_Scriptable_rhino_Scriptable_long_boolean_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[10].l), (jint(1)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(786);
	frame[13].l = (jlong(0));
	}
label_56:;
	{
	if ((longCompare((frame[13].l), (frame[10].l))) >= 0) goto label_57;
	}
	{
	LINE_NUMBER(787);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[4].o), (frame[13].l));
	frame[15].o = sp[0].o;
	LINE_NUMBER(788);
	sp[0].o = frame[15].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_60;
	}
	{
	LINE_NUMBER(789);
	if ((frame[7].i) == 0) goto label_62;
	}
	{
	LINE_NUMBER(790);
	sp[0].o = frame[8].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[6].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[15].o);
	jint temp0 = jint(1);
	sp[5].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[13].l));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[15].o = sp[0].o;
	}
label_62:;
	{
	LINE_NUMBER(792);
	SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[12].o), (frame[13].l), (frame[15].o));
	}
label_60:;
	{
	LINE_NUMBER(786);
	frame[13].l = ((frame[13].l) + (jlong(1)));
	goto label_56;
	}
label_57:;
	{
	LINE_NUMBER(796);
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[12].o), (frame[10].l));
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return (frame[12].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_of_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_of", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(801);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jlong temp0 = jlong((((jarray) nullCheck(ctx, (frame[3].o)))->length));
	jint temp1 = jint(1);
	LINE_NUMBER(802);
	sp[0].o = (jobject)SM_rhino_NativeArray_callConstructorOrCreateArray_rhino_Context_rhino_Scriptable_rhino_Scriptable_long_boolean_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1);
	frame[4].o = sp[0].o;
	LINE_NUMBER(804);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(805);
	SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (jlong((frame[5].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))));
	LINE_NUMBER(804);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(807);
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (jlong((((jarray) nullCheck(ctx, (frame[3].o)))->length))));
	LINE_NUMBER(809);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jlong M_rhino_NativeArray_getLength_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getLength", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(813);
	popStackFrame(ctx);
	return ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length);
	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray_setDenseOnly_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:setDenseOnly", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(826);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly) != 0) goto label_1;
	}
	{
	LINE_NUMBER(827);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(828);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly = (frame[1].i);
	LINE_NUMBER(829);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray_setLength_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:setLength", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(838);
	if ((((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_lengthAttr) & (jint(1))) == 0) goto label_1;
	}
	LINE_NUMBER(839);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(842);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[1].o));
	frame[2].d = temp0;
	LINE_NUMBER(843);
	jlong temp1 = (jlong)SM_rhino_ScriptRuntime_toUint32_double_R_long(ctx, (frame[2].d));
	frame[4].l = temp1;
	LINE_NUMBER(844);
	if ((doubleCompare((jdouble((frame[4].l))), (frame[2].d), -1)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.arraylength.bad"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(846);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"RangeError"_j))), (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(849);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly) == 0) goto label_8;
	}
	{
	LINE_NUMBER(850);
	if ((longCompare((frame[4].l), ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length))) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(852);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	jint temp0 = jint((frame[4].l));
	sp[1].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_dense;
	jint temp1 = ((jarray) nullCheck(ctx, sp[1].o))->length;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(853);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length = (frame[4].l);
	LINE_NUMBER(854);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(855);
	if ((longCompare((frame[4].l), (jlong(1431655764ll)))) >= 0) goto label_14;
	}
	{
	if ((doubleCompare((jdouble((frame[4].l))), ((jdouble(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length))) * (jdouble(1.5))), 1)) >= 0) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint((frame[4].l));
	LINE_NUMBER(857);
	jint temp1 = (jint)M_rhino_NativeArray_ensureCapacity_int_R_boolean(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_14;
	}
	{
	LINE_NUMBER(858);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length = (frame[4].l);
	LINE_NUMBER(859);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(861);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_denseOnly = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(864);
	if ((longCompare((frame[4].l), ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length))) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(866);
	if ((longCompare((((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length) - (frame[4].l)), (jlong(4096ll)))) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(868);
	sp[0].o = (jobject)((func_rhino_NativeArray_getIds_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_getIds_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(869);
	frame[7].i = (jint(0));
	}
label_23:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_24;
	}
	{
	LINE_NUMBER(870);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(871);
	if ((isInstance(ctx, (frame[8].o), &class_java_lang_String)) == 0) goto label_27;
	}
	{
	LINE_NUMBER(873);
	frame[9].o = (checkCast(ctx, &class_java_lang_String, (frame[8].o)));
	LINE_NUMBER(874);
	jlong temp0 = (jlong)SM_rhino_NativeArray_toArrayIndex_java_lang_String_R_long(ctx, (frame[9].o));
	frame[10].l = temp0;
	LINE_NUMBER(875);
	if ((longCompare((frame[10].l), (frame[4].l))) < 0) goto label_31;
	}
	{
	LINE_NUMBER(876);
	((func_rhino_NativeArray_delete_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_delete_java_lang_String])(ctx, (frame[0].o), (frame[9].o));
	}
label_31:;
	LINE_NUMBER(877);
	goto label_33;
label_27:;
	{
	LINE_NUMBER(878);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[8].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[8].o))));
	frame[9].i = temp0;
	LINE_NUMBER(879);
	if ((longCompare((jlong((frame[9].i))), (frame[4].l))) < 0) goto label_33;
	}
	{
	LINE_NUMBER(880);
	((func_rhino_NativeArray_delete_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_delete_int])(ctx, (frame[0].o), (frame[9].i));
	}
label_33:;
	{
	LINE_NUMBER(869);
	INST_IINC(7, 1);
	goto label_23;
	}
label_24:;
	LINE_NUMBER(883);
	goto label_18;
label_20:;
	{
	LINE_NUMBER(885);
	frame[6].l = (frame[4].l);
	}
label_36:;
	{
	if ((longCompare((frame[6].l), ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length))) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(886);
	SM_rhino_NativeArray_deleteElem_rhino_Scriptable_long(ctx, (frame[0].o), (frame[6].l));
	LINE_NUMBER(885);
	frame[6].l = ((frame[6].l) + (jlong(1)));
	goto label_36;
	}
label_18:;
	{
	LINE_NUMBER(890);
	((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length = (frame[4].l);
	LINE_NUMBER(891);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getLengthProperty", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(901);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeString)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(902);
	jint temp0 = (jint)((func_rhino_NativeString_getLength_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeString, (frame[1].o))))->vtable)[VTABLE_rhino_NativeString_getLength_R_int])(ctx, (checkCast(ctx, &class_rhino_NativeString, (frame[1].o))));
	popStackFrame(ctx);
	return (jlong(temp0));
	}
label_1:;
	{
	LINE_NUMBER(904);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeArray)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(905);
	jlong temp0 = (jlong)((func_rhino_NativeArray_getLength_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeArray, (frame[1].o))))->vtable)[VTABLE_rhino_NativeArray_getLength_R_long])(ctx, (checkCast(ctx, &class_rhino_NativeArray, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(908);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"length"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(909);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(911);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_6:;
	{
	LINE_NUMBER(914);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[3].o));
	frame[4].d = temp0;
	LINE_NUMBER(915);
	if ((doubleCompare((frame[4].d), (jdouble(9,007199e+15)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(916);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(917);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.arraylength.bad"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(918);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"RangeError"_j))), (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(920);
	popStackFrame(ctx);
	return (jlong(2147483647ll));
	}
label_9:;
	{
	LINE_NUMBER(922);
	if ((doubleCompare((frame[4].d), (jdouble(0)), 1)) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(923);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_14:;
	{
	LINE_NUMBER(925);
	jlong temp0 = (jlong)SM_rhino_ScriptRuntime_toUint32_java_lang_Object_R_long(ctx, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jlong param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:setLengthProperty", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].l = param2;
	{
	LINE_NUMBER(930);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (jdouble((frame[2].l))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(931);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"length"_j))), (frame[4].o));
	LINE_NUMBER(932);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeArray_deleteElem_rhino_Scriptable_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:deleteElem", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(941);
	frame[3].i = (jint((frame[1].l)));
	LINE_NUMBER(942);
	if ((longCompare((jlong((frame[3].i))), (frame[1].l))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(943);
	((func_rhino_Scriptable_delete_int) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_int, (frame[0].o)))(ctx, (frame[0].o), (frame[3].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(945);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[1].l));
	((func_rhino_Scriptable_delete_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(947);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_getElem_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jlong param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getElem", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].l = param2;
	{
	LINE_NUMBER(950);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[1].o), (frame[2].l));
	frame[4].o = sp[0].o;
	LINE_NUMBER(951);
	sp[0].o = frame[4].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ALOAD(4);
	goto label_3;
label_2:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:getRawElem", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(956);
	if ((longCompare((frame[1].l), (jlong(2147483647ll)))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(957);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[1].l));
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(959);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, (frame[0].o), (jint((frame[1].l))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jlong param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:defineElem", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].l = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(964);
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[2].l));
	frame[5].o = sp[0].o;
	LINE_NUMBER(966);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o), (frame[1].o), (frame[4].o));
	LINE_NUMBER(967);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(968);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (jint((frame[2].l))), (frame[1].o), (frame[4].o));
	}
label_5:;
	LINE_NUMBER(970);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_NativeArray_setElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jlong param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:setElem", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].l = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(974);
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(975);
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[2].l));
	frame[5].o = sp[0].o;
	LINE_NUMBER(976);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[1].o), (frame[5].o), (frame[4].o));
	LINE_NUMBER(977);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(978);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_int_java_lang_Object(ctx, (frame[1].o), (jint((frame[2].l))), (frame[4].o));
	}
label_5:;
	LINE_NUMBER(980);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jlong param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:setRawElem", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].l = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(985);
	sp[0].o = frame[4].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(986);
	SM_rhino_NativeArray_deleteElem_rhino_Scriptable_long(ctx, (frame[1].o), (frame[2].l));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(988);
	SM_rhino_NativeArray_setElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].l), (frame[4].o));
	}
label_3:;
	LINE_NUMBER(990);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_toStringHelper_rhino_Context_rhino_Scriptable_rhino_Scriptable_boolean_boolean_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4) {
	jtype frame[25];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:toStringHelper", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(995);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1000);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	frame[6].l = temp0;
	LINE_NUMBER(1002);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (256));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1007);
	if ((frame[3].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[8].o), (91));
	LINE_NUMBER(1009);
	frame[9].o = (((jobject) createStringLiteral(ctx, u8", "_j)));
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(1011);
	frame[9].o = (((jobject) createStringLiteral(ctx, u8","_j)));
	}
label_14:;
	{
	LINE_NUMBER(1014);
	frame[10].i = (jint(0));
	LINE_NUMBER(1015);
	frame[11].l = (jlong(0));
	LINE_NUMBER(1018);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating;
	if (sp[0].o != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(1019);
	frame[13].i = (jint(1));
	LINE_NUMBER(1020);
	frame[14].i = (jint(0));
	LINE_NUMBER(1021);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap_int(ctx, sp[1].o, (31));
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_iterating = (jref) sp[1].o;
	goto label_0;
	}
label_17:;
	{
	LINE_NUMBER(1023);
	frame[13].i = (jint(0));
	LINE_NUMBER(1024);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	frame[14].i = temp0;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1030);
	if ((frame[14].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1032);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating;
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[5].o), (jint(0)));
	LINE_NUMBER(1035);
	if ((frame[3].i) == 0) goto label_24;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1036);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 >= (150)) goto label_26;
	}
label_24:;
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(1037);
	frame[11].l = (jlong(0));
	}
label_29:;
	{
	if ((longCompare((frame[11].l), (frame[6].l))) >= 0) goto label_30;
	}
	{
	LINE_NUMBER(1038);
	if ((longCompare((frame[11].l), (jlong(0)))) <= 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[8].o), (frame[9].o));
	}
label_32:;
	{
	LINE_NUMBER(1039);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[5].o), (frame[11].l));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1040);
	sp[0].o = frame[16].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_34;
	}
	INST_ILOAD(15);
	if ((--sp)->i == 0) goto label_35;
	INST_ALOAD(16);
	if ((--sp)->o == nullptr) goto label_34;
	{
	sp[0].o = frame[16].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_35;
	}
label_34:;
	{
	LINE_NUMBER(1042);
	frame[10].i = (jint(0));
	LINE_NUMBER(1043);
	goto label_37;
	}
label_35:;
	{
	LINE_NUMBER(1045);
	frame[10].i = (jint(1));
	LINE_NUMBER(1047);
	if ((frame[3].i) == 0) goto label_39;
	}
	{
	LINE_NUMBER(1048);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_uneval_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[16].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_37;
	}
label_39:;
	{
	LINE_NUMBER(1050);
	if ((isInstance(ctx, (frame[16].o), &class_java_lang_String)) == 0) goto label_41;
	}
	{
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[8].o), (checkCast(ctx, &class_java_lang_String, (frame[16].o))));
	goto label_37;
	}
label_41:;
	{
	LINE_NUMBER(1054);
	if ((frame[4].i) == 0) goto label_43;
	}
	{
	LINE_NUMBER(1057);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getPropFunctionAndThis_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, (frame[16].o), (((jobject) createStringLiteral(ctx, u8"toLocaleString"_j))), (frame[0].o), (frame[1].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(1059);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(1060);
	sp[0].o = frame[17].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[18].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[16].o = sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(1063);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[16].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_37:;
	{
	LINE_NUMBER(1037);
	frame[11].l = ((frame[11].l) + (jlong(1)));
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating;
	((func_rhino_ObjToIntMap_remove_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_remove_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1072);
	if ((frame[13].i) == 0) goto label_47;
	}
	{
	LINE_NUMBER(1073);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating = (jref) (jobject(nullptr));
	goto label_47;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1072);
	INST_ASTORE(19);
	popExceptionFrame(frameRef);
	INST_ILOAD(13);
	if ((--sp)->i == 0) goto label_49;
	{
	LINE_NUMBER(1073);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating = (jref) (jobject(nullptr));
	}
label_49:;
	{
	LINE_NUMBER(1075);
	throwException(ctx, (frame[19].o));	}
label_47:;
	{
	LINE_NUMBER(1077);
	if ((frame[3].i) == 0) goto label_51;
	}
	{
	LINE_NUMBER(1079);
	if ((frame[10].i) != 0) goto label_53;
	}
	{
	if ((longCompare((frame[11].l), (jlong(0)))) <= 0) goto label_53;
	}
	{
	LINE_NUMBER(1080);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8", ]"_j))));
	goto label_51;
	}
label_53:;
	{
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[8].o), (93));
	}
label_51:;
	{
	LINE_NUMBER(1084);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_join_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_join", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1092);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1094);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[5].l = temp0;
	LINE_NUMBER(1095);
	frame[7].i = (jint((frame[5].l)));
	LINE_NUMBER(1096);
	if ((longCompare((frame[5].l), (jlong((frame[7].i))))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1097);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.arraylength.too.big"_j));
	jlong temp0 = frame[5].l;
	LINE_NUMBER(1098);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, temp0);
	LINE_NUMBER(1097);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1101);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(1))) goto label_8;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_9;
	}
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8","_j));
	goto label_10;
label_9:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	LINE_NUMBER(1103);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1104);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeArray)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1105);
	frame[9].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[4].o)));
	LINE_NUMBER(1106);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[9].o)))->F_denseOnly) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1107);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(1108);
	frame[11].i = (jint(0));
	}
label_18:;
	{
	if ((frame[11].i) >= (frame[7].i)) goto label_19;
	}
	{
	LINE_NUMBER(1109);
	if ((frame[11].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[10].o), (frame[8].o));
	}
label_21:;
	{
	LINE_NUMBER(1112);
	jint temp0 = frame[11].i;
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[9].o)))->F_dense;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_23;
	}
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[9].o)))->F_dense;
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[11].i)));
	LINE_NUMBER(1114);
	if ((frame[12].o) == nullptr) goto label_23;
	}
	{
	sp[0].o = frame[12].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_23;
	}
	{
	sp[0].o = frame[12].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_23;
	}
	{
	LINE_NUMBER(1116);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[12].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_23:;
	{
	LINE_NUMBER(1108);
	INST_IINC(11, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(1120);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[10].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(1123);
	if ((frame[7].i) != 0) goto label_27;
	}
	{
	LINE_NUMBER(1124);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_27:;
	{
	LINE_NUMBER(1126);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[7].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1127);
	frame[10].i = (jint(0));
	LINE_NUMBER(1128);
	frame[11].i = (jint(0));
	}
label_31:;
	{
	if ((frame[11].i) == (frame[7].i)) goto label_32;
	}
	{
	LINE_NUMBER(1129);
	sp[0].o = (jobject)SM_rhino_NativeArray_getElem_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (jlong((frame[11].i))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1130);
	if ((frame[12].o) == nullptr) goto label_35;
	}
	{
	sp[0].o = frame[12].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_35;
	}
	{
	LINE_NUMBER(1131);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[12].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(1132);
	jint temp0 = frame[10].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[13].o));
	frame[10].i = (temp0 + temp1);
	LINE_NUMBER(1133);
	ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)) = (frame[13].o);
	}
label_35:;
	{
	LINE_NUMBER(1128);
	INST_IINC(11, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(1136);
	jint temp0 = frame[10].i;
	jint temp1 = (frame[7].i) - (jint(1));
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	frame[10].i = (temp0 + (temp1 * temp2));
	LINE_NUMBER(1137);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (frame[10].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1138);
	frame[12].i = (jint(0));
	}
label_41:;
	{
	if ((frame[12].i) == (frame[7].i)) goto label_42;
	}
	{
	LINE_NUMBER(1139);
	if ((frame[12].i) == 0) goto label_44;
	}
	{
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[11].o), (frame[8].o));
	}
label_44:;
	{
	LINE_NUMBER(1142);
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[12].i)));
	LINE_NUMBER(1143);
	if ((frame[13].o) == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(1145);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[11].o), (frame[13].o));
	}
label_47:;
	{
	LINE_NUMBER(1138);
	INST_IINC(12, 1);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(1148);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[11].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_reverse_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_reverse", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1155);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1157);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeArray)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1158);
	frame[5].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[4].o)));
	LINE_NUMBER(1159);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_denseOnly) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1160);
	frame[6].i = (jint(0));
	frame[7].i = ((jint(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_length))) - (jint(1)));
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_8;
	}
	{
	LINE_NUMBER(1161);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(1162);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[7].i)));
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)) = (frame[8].o);
	LINE_NUMBER(1160);
	INST_IINC(6, 1);
	INST_IINC(7, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1165);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
	{
	LINE_NUMBER(1168);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[5].l = temp0;
	LINE_NUMBER(1170);
	frame[7].l = ((frame[5].l) / (jlong(2ll)));
	LINE_NUMBER(1171);
	frame[9].l = (jlong(0));
	}
label_15:;
	{
	if ((longCompare((frame[9].l), (frame[7].l))) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(1172);
	frame[11].l = (((frame[5].l) - (frame[9].l)) - (jlong(1)));
	LINE_NUMBER(1173);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[4].o), (frame[9].l));
	frame[13].o = sp[0].o;
	LINE_NUMBER(1174);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[4].o), (frame[11].l));
	frame[14].o = sp[0].o;
	LINE_NUMBER(1175);
	SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[9].l), (frame[14].o));
	LINE_NUMBER(1176);
	SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[11].l), (frame[13].o));
	LINE_NUMBER(1171);
	frame[9].l = ((frame[9].l) + (jlong(1)));
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1178);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_sort_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_sort", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1186);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1189);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= 0) goto label_2;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))))) goto label_2;
	}
	{
	LINE_NUMBER(1190);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	sp[1].o = frame[0].o;
	LINE_NUMBER(1191);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getValueFunctionAndThis_java_lang_Object_rhino_Context_R_rhino_Callable(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1192);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1193);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1194);
	clinit_rhino_NativeArray$ElementComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray$ElementComparator);
	{ /* InvokeDynamic */
		clinit_rhino_NativeArray_invoke_java_util_Comparator_0(ctx);
		auto proxy = (rhino_NativeArray_invoke_java_util_Comparator_0 *) gcAlloc(ctx, &class_rhino_NativeArray_invoke_java_util_Comparator_0);
		proxy->F_field4 = (jref) (frame[7].o);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[0].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	init_rhino_NativeArray$ElementComparator_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1210);
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(1211);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = (jobject)SF_rhino_NativeArray_DEFAULT_COMPARATOR;
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(1214);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[6].l = temp0;
	LINE_NUMBER(1215);
	frame[8].i = (jint((frame[6].l)));
	LINE_NUMBER(1216);
	if ((longCompare((frame[6].l), (jlong((frame[8].i))))) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1217);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.arraylength.too.big"_j));
	jlong temp0 = frame[6].l;
	LINE_NUMBER(1218);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, temp0);
	LINE_NUMBER(1217);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(1222);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1223);
	frame[10].i = (jint(0));
	}
label_17:;
	{
	if ((frame[10].i) == (frame[8].i)) goto label_18;
	}
	{
	LINE_NUMBER(1224);
	sp[0].o = frame[9].o;
	jint temp0 = frame[10].i;
	sp[1].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[4].o), (jlong((frame[10].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1223);
	INST_IINC(10, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(1227);
	sp[0].o = (jobject)SM_rhino_Sorting_get_R_rhino_Sorting(ctx);
	((func_rhino_Sorting_hybridSort_Array1_java_lang_Object_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Sorting_hybridSort_Array1_java_lang_Object_java_util_Comparator])(ctx, sp[0].o, (frame[9].o), (frame[5].o));
	LINE_NUMBER(1230);
	frame[10].i = (jint(0));
	}
label_22:;
	{
	if ((frame[10].i) >= (frame[8].i)) goto label_23;
	}
	{
	LINE_NUMBER(1231);
	SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (jlong((frame[10].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[10].i))));
	LINE_NUMBER(1230);
	INST_IINC(10, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(1234);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_push_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_push", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1239);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1241);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeArray)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1242);
	frame[5].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[4].o)));
	LINE_NUMBER(1243);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_denseOnly) == 0) goto label_2;
	}
	{
	sp[0].o = frame[5].o;
	jint temp0 = (jint(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_length))) + (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(1244);
	jint temp1 = (jint)M_rhino_NativeArray_ensureCapacity_int_R_boolean(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1245);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_8;
	}
	{
	LINE_NUMBER(1246);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	sp[1].o = frame[5].o;
	jlong temp0 = (jlong)((rhino_NativeArray *) NULL_CHECK(sp[1].o))->F_length;
	((rhino_NativeArray *) NULL_CHECK(sp[1].o))->F_length = (temp0 + (jlong(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(temp0))) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(1245);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1248);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (jdouble(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_length))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1251);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[5].l = temp0;
	LINE_NUMBER(1252);
	frame[7].i = (jint(0));
	}
label_12:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_13;
	}
	{
	LINE_NUMBER(1253);
	SM_rhino_NativeArray_setElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), ((frame[5].l) + (jlong((frame[7].i)))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))));
	LINE_NUMBER(1252);
	INST_IINC(7, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1256);
	frame[5].l = ((frame[5].l) + (jlong((((jarray) nullCheck(ctx, (frame[3].o)))->length))));
	LINE_NUMBER(1257);
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[5].l));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1263);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 != (120)) goto label_18;
	}
	{
	LINE_NUMBER(1265);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) goto label_20;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_21;
label_20:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1))));
	sp += 1;
	}
label_21:;
	popStackFrame(ctx);
	INST_ARETURN();
label_18:;
	{
	LINE_NUMBER(1269);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_pop_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_pop", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1274);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1277);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeArray)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1278);
	frame[6].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[4].o)));
	LINE_NUMBER(1279);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[6].o)))->F_denseOnly) == 0) goto label_2;
	}
	{
	if ((longCompare(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[6].o)))->F_length), (jlong(0)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(1280);
	sp[0].o = frame[6].o;
	((rhino_NativeArray *) NULL_CHECK(sp[0].o))->F_length = (((jlong)((rhino_NativeArray *) NULL_CHECK(sp[0].o))->F_length) - (jlong(1)));
	LINE_NUMBER(1281);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[6].o)))->F_dense;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[6].o)))->F_length)))));
	LINE_NUMBER(1282);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[6].o)))->F_dense;
	jint temp0 = jint(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[6].o)))->F_length));
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1283);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_2:;
	{
	LINE_NUMBER(1286);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[6].l = temp0;
	LINE_NUMBER(1287);
	if ((longCompare((frame[6].l), (jlong(0)))) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(1288);
	frame[6].l = ((frame[6].l) - (jlong(1)));
	LINE_NUMBER(1291);
	sp[0].o = (jobject)SM_rhino_NativeArray_getElem_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[6].l));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1295);
	SM_rhino_NativeArray_deleteElem_rhino_Scriptable_long(ctx, (frame[4].o), (frame[6].l));
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(1297);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[5].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(1301);
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[6].l));
	LINE_NUMBER(1303);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_shift_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_shift", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1307);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1309);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeArray)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1310);
	frame[5].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[4].o)));
	LINE_NUMBER(1311);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_denseOnly) == 0) goto label_2;
	}
	{
	if ((longCompare(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_length), (jlong(0)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(1312);
	sp[0].o = frame[5].o;
	((rhino_NativeArray *) NULL_CHECK(sp[0].o))->F_length = (((jlong)((rhino_NativeArray *) NULL_CHECK(sp[0].o))->F_length) - (jlong(1)));
	LINE_NUMBER(1313);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(1314);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (jint(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_length))));
	LINE_NUMBER(1315);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	jint temp1 = jint(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_length));
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1316);
	sp[0].o = frame[6].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_11;
label_10:;
	INST_ALOAD(6);
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(1320);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[6].l = temp0;
	LINE_NUMBER(1321);
	if ((longCompare((frame[6].l), (jlong(0)))) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(1322);
	frame[8].l = (jlong(0));
	LINE_NUMBER(1323);
	frame[6].l = ((frame[6].l) - (jlong(1)));
	LINE_NUMBER(1326);
	sp[0].o = (jobject)SM_rhino_NativeArray_getElem_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[8].l));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1332);
	if ((longCompare((frame[6].l), (jlong(0)))) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(1333);
	frame[8].l = (jlong(1));
	}
label_20:;
	{
	if ((longCompare((frame[8].l), (frame[6].l))) > 0) goto label_18;
	}
	{
	LINE_NUMBER(1334);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[4].o), (frame[8].l));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1335);
	SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), ((frame[8].l) - (jlong(1))), (frame[10].o));
	LINE_NUMBER(1333);
	frame[8].l = ((frame[8].l) + (jlong(1)));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(1340);
	SM_rhino_NativeArray_deleteElem_rhino_Scriptable_long(ctx, (frame[4].o), (frame[6].l));
	LINE_NUMBER(1341);
	goto label_25;
	}
label_13:;
	{
	LINE_NUMBER(1342);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[5].o = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(1344);
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[6].l));
	LINE_NUMBER(1345);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_unshift_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_unshift", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1349);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1351);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeArray)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1352);
	frame[5].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[4].o)));
	LINE_NUMBER(1353);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_denseOnly) == 0) goto label_2;
	}
	{
	sp[0].o = frame[5].o;
	jint temp0 = (jint(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_length))) + (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(1354);
	jint temp1 = (jint)M_rhino_NativeArray_ensureCapacity_int_R_boolean(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1355);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((jarray) nullCheck(ctx, (frame[3].o)))->length), (jint(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_length))));
	LINE_NUMBER(1357);
	sp[0].o = frame[3].o;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (jint(0)), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	LINE_NUMBER(1358);
	sp[0].o = frame[5].o;
	((rhino_NativeArray *) NULL_CHECK(sp[0].o))->F_length = (((jlong)((rhino_NativeArray *) NULL_CHECK(sp[0].o))->F_length) + (jlong((((jarray) nullCheck(ctx, (frame[3].o)))->length))));
	LINE_NUMBER(1359);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (jdouble(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_length))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1362);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[5].l = temp0;
	LINE_NUMBER(1363);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(1365);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(1367);
	if ((longCompare((frame[5].l), (jlong(0)))) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(1368);
	frame[8].l = ((frame[5].l) - (jlong(1)));
	}
label_16:;
	{
	if ((longCompare((frame[8].l), (jlong(0)))) < 0) goto label_14;
	}
	{
	LINE_NUMBER(1369);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[4].o), (frame[8].l));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1370);
	SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), ((frame[8].l) + (jlong((frame[7].i)))), (frame[10].o));
	LINE_NUMBER(1368);
	frame[8].l = ((frame[8].l) - (jlong(1)));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(1375);
	frame[8].i = (jint(0));
	}
label_20:;
	{
	if ((frame[8].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_12;
	}
	{
	LINE_NUMBER(1376);
	SM_rhino_NativeArray_setElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (jlong((frame[8].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[8].i))));
	LINE_NUMBER(1375);
	INST_IINC(8, 1);
	goto label_20;
	}
label_12:;
	{
	LINE_NUMBER(1380);
	frame[5].l = ((frame[5].l) + (jlong((((jarray) nullCheck(ctx, (frame[3].o)))->length))));
	LINE_NUMBER(1381);
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[5].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_splice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[30];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_splice", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1386);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1388);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(1389);
	frame[6].i = (jint(0));
	LINE_NUMBER(1390);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeArray)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1391);
	frame[5].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[4].o)));
	LINE_NUMBER(1392);
	frame[6].i = ((jint)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_denseOnly);
	}
label_4:;
	{
	LINE_NUMBER(1396);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1397);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(1398);
	if ((frame[7].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(1399);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(1400);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[8].l = temp0;
	LINE_NUMBER(1403);
	jdouble temp1 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	jlong temp2 = (jlong)SM_rhino_NativeArray_toSliceIndex_double_long_R_long(ctx, temp1, (frame[8].l));
	frame[10].l = temp2;
	LINE_NUMBER(1404);
	INST_IINC(7, -1);
	LINE_NUMBER(1408);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != (jint(1))) goto label_14;
	}
	{
	LINE_NUMBER(1409);
	frame[12].l = ((frame[8].l) - (frame[10].l));
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(1411);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	frame[14].d = temp0;
	LINE_NUMBER(1412);
	if ((doubleCompare((frame[14].d), (jdouble(0)), 1)) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(1413);
	frame[12].l = (jlong(0));
	goto label_22;
	}
label_19:;
	{
	LINE_NUMBER(1414);
	if ((doubleCompare((frame[14].d), (jdouble(((frame[8].l) - (frame[10].l)))), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(1415);
	frame[12].l = ((frame[8].l) - (frame[10].l));
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(1417);
	frame[12].l = (jlong((frame[14].d)));
	}
label_22:;
	LINE_NUMBER(1419);
	INST_IINC(7, -1);
label_17:;
	{
	LINE_NUMBER(1422);
	frame[14].l = ((frame[10].l) + (frame[12].l));
	LINE_NUMBER(1426);
	if ((longCompare((frame[12].l), (jlong(0)))) == 0) goto label_27;
	}
	{
	LINE_NUMBER(1427);
	if ((longCompare((frame[12].l), (jlong(1)))) != 0) goto label_29;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1428);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 != (120)) goto label_29;
	}
	{
	LINE_NUMBER(1440);
	sp[0].o = (jobject)SM_rhino_NativeArray_getElem_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[10].l));
	frame[16].o = sp[0].o;
	goto label_33;
	}
label_29:;
	{
	LINE_NUMBER(1442);
	if ((frame[6].i) == 0) goto label_34;
	}
	{
	LINE_NUMBER(1443);
	frame[17].i = (jint(((frame[14].l) - (frame[10].l))));
	LINE_NUMBER(1444);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[17].i));
	frame[18].o = sp[0].o;
	LINE_NUMBER(1445);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint((frame[10].l))), (frame[18].o), (jint(0)), (frame[17].i));
	LINE_NUMBER(1446);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (frame[18].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1447);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(1448);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	frame[17].o = sp[0].o;
	LINE_NUMBER(1449);
	frame[18].l = (frame[10].l);
	}
label_41:;
	{
	if ((longCompare((frame[18].l), (frame[14].l))) == 0) goto label_42;
	}
	{
	LINE_NUMBER(1450);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[4].o), (frame[18].l));
	frame[20].o = sp[0].o;
	LINE_NUMBER(1451);
	sp[0].o = frame[20].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_45;
	}
	{
	LINE_NUMBER(1452);
	SM_rhino_NativeArray_setElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[17].o), ((frame[18].l) - (frame[10].l)), (frame[20].o));
	}
label_45:;
	{
	LINE_NUMBER(1449);
	frame[18].l = ((frame[18].l) + (jlong(1)));
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(1456);
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[17].o), ((frame[14].l) - (frame[10].l)));
	LINE_NUMBER(1457);
	frame[16].o = (frame[17].o);
	LINE_NUMBER(1458);
	goto label_33;
	}
label_27:;
	{
	LINE_NUMBER(1461);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 != (120)) goto label_49;
	}
	{
	LINE_NUMBER(1463);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[16].o = sp[0].o;
	goto label_33;
	}
label_49:;
	{
	LINE_NUMBER(1465);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	frame[16].o = sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(1470);
	frame[17].l = ((jlong((frame[7].i))) - (frame[12].l));
	LINE_NUMBER(1471);
	if ((frame[6].i) == 0) goto label_53;
	}
	{
	if ((longCompare(((frame[8].l) + (frame[17].l)), (jlong(2147483647ll)))) >= 0) goto label_53;
	}
	{
	sp[0].o = frame[5].o;
	jint temp0 = jint(((frame[8].l) + (frame[17].l)));
	LINE_NUMBER(1472);
	jint temp1 = (jint)M_rhino_NativeArray_ensureCapacity_int_R_boolean(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_53;
	}
	{
	LINE_NUMBER(1473);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	jint temp0 = jint((frame[14].l));
	sp[1].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(((frame[10].l) + (jlong((frame[7].i)))))), (jint(((frame[8].l) - (frame[14].l)))));
	LINE_NUMBER(1475);
	if ((frame[7].i) <= 0) goto label_57;
	}
	{
	LINE_NUMBER(1476);
	sp[0].o = frame[3].o;
	jint temp0 = jint(2);
	sp[1].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint((frame[10].l))), (frame[7].i));
	}
label_57:;
	{
	LINE_NUMBER(1478);
	if ((longCompare((frame[17].l), (jlong(0)))) >= 0) goto label_59;
	}
	{
	LINE_NUMBER(1479);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_dense;
	jint temp0 = jint(((frame[8].l) + (frame[17].l)));
	jint temp1 = jint((frame[8].l));
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, temp0, temp1, sp[1].o);
	}
label_59:;
	{
	LINE_NUMBER(1482);
	((rhino_NativeArray *) NULL_CHECK((frame[5].o)))->F_length = ((frame[8].l) + (frame[17].l));
	LINE_NUMBER(1483);
	popStackFrame(ctx);
	return (frame[16].o);
	}
label_53:;
	{
	LINE_NUMBER(1486);
	if ((longCompare((frame[17].l), (jlong(0)))) <= 0) goto label_62;
	}
	{
	LINE_NUMBER(1487);
	frame[19].l = ((frame[8].l) - (jlong(1)));
	}
label_64:;
	{
	if ((longCompare((frame[19].l), (frame[14].l))) < 0) goto label_65;
	}
	{
	LINE_NUMBER(1488);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[4].o), (frame[19].l));
	frame[21].o = sp[0].o;
	LINE_NUMBER(1489);
	SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), ((frame[19].l) + (frame[17].l)), (frame[21].o));
	LINE_NUMBER(1487);
	frame[19].l = ((frame[19].l) - (jlong(1)));
	goto label_64;
	}
label_65:;
	goto label_69;
label_62:;
	{
	LINE_NUMBER(1491);
	if ((longCompare((frame[17].l), (jlong(0)))) >= 0) goto label_69;
	}
	{
	LINE_NUMBER(1492);
	frame[19].l = (frame[14].l);
	}
label_71:;
	{
	if ((longCompare((frame[19].l), (frame[8].l))) >= 0) goto label_72;
	}
	{
	LINE_NUMBER(1493);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[4].o), (frame[19].l));
	frame[21].o = sp[0].o;
	LINE_NUMBER(1494);
	SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), ((frame[19].l) + (frame[17].l)), (frame[21].o));
	LINE_NUMBER(1492);
	frame[19].l = ((frame[19].l) + (jlong(1)));
	goto label_71;
	}
label_72:;
	{
	LINE_NUMBER(1500);
	frame[19].l = ((frame[8].l) - (jlong(1)));
	}
label_76:;
	{
	if ((longCompare((frame[19].l), ((frame[8].l) + (frame[17].l)))) < 0) goto label_69;
	}
	{
	LINE_NUMBER(1501);
	SM_rhino_NativeArray_deleteElem_rhino_Scriptable_long(ctx, (frame[4].o), (frame[19].l));
	LINE_NUMBER(1500);
	frame[19].l = ((frame[19].l) - (jlong(1)));
	goto label_76;
	}
label_69:;
	{
	LINE_NUMBER(1506);
	frame[19].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[7].i));
	LINE_NUMBER(1507);
	frame[20].i = (jint(0));
	}
label_80:;
	{
	if ((frame[20].i) >= (frame[7].i)) goto label_81;
	}
	{
	LINE_NUMBER(1508);
	SM_rhino_NativeArray_setElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), ((frame[10].l) + (jlong((frame[20].i)))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((frame[20].i) + (frame[19].i)))));
	LINE_NUMBER(1507);
	INST_IINC(20, 1);
	goto label_80;
	}
label_81:;
	{
	LINE_NUMBER(1512);
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), ((frame[8].l) + (frame[17].l)));
	LINE_NUMBER(1513);
	popStackFrame(ctx);
	return (frame[16].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_NativeArray_isConcatSpreadable_rhino_Context_rhino_Scriptable_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:isConcatSpreadable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1518);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Scriptable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1519);
	sp[0].o = checkCast(ctx, &class_rhino_Scriptable, (frame[2].o));
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = (jobject)SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE;
	LINE_NUMBER(1520);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_rhino_Symbol_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1521);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[3].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1524);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(1528);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 >= (200)) goto label_6;
	}
	{
	LINE_NUMBER(1531);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getExistingCtor_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_Function(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Array"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1532);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_instanceOf_java_lang_Object_java_lang_Object_rhino_Context_R_boolean(ctx, (frame[2].o), (frame[3].o), (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1533);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(1538);
	jint temp0 = (jint)SM_rhino_NativeArray_js_isArray_java_lang_Object_R_boolean(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_rhino_NativeArray_concatSpreadArg_rhino_Context_rhino_Scriptable_rhino_Scriptable_long_R_long(jcontext ctx, jobject param0, jobject param1, jobject param2, jlong param3) {
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:concatSpreadArg", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].l = param3;
	{
	LINE_NUMBER(1545);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	frame[5].l = temp0;
	LINE_NUMBER(1546);
	frame[7].l = ((frame[5].l) + (frame[3].l));
	LINE_NUMBER(1549);
	if ((longCompare((frame[7].l), (jlong(2147483647ll)))) > 0) goto label_3;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeArray)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1550);
	frame[9].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[1].o)));
	LINE_NUMBER(1551);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[9].o)))->F_denseOnly) == 0) goto label_3;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_rhino_NativeArray)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1552);
	frame[10].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[2].o)));
	LINE_NUMBER(1553);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[10].o)))->F_denseOnly) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1555);
	jint temp0 = (jint)M_rhino_NativeArray_ensureCapacity_int_R_boolean(ctx, (frame[9].o), (jint((frame[7].l))));
	LINE_NUMBER(1556);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[10].o)))->F_dense;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[9].o)))->F_dense;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (jint((frame[3].l))), (jint((frame[5].l))));
	LINE_NUMBER(1557);
	popStackFrame(ctx);
	return (frame[7].l);
	}
label_3:;
	{
	LINE_NUMBER(1566);
	frame[9].l = (frame[3].l);
	LINE_NUMBER(1567);
	frame[11].l = (jlong(0));
	}
label_12:;
	{
	if ((longCompare((frame[11].l), (frame[5].l))) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(1568);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[2].o), (frame[11].l));
	frame[13].o = sp[0].o;
	LINE_NUMBER(1569);
	sp[0].o = frame[13].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(1570);
	SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[9].l), (frame[13].o));
	}
label_16:;
	{
	LINE_NUMBER(1567);
	frame[11].l = ((frame[11].l) + (jlong(1)));
	frame[9].l = ((frame[9].l) + (jlong(1)));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1573);
	popStackFrame(ctx);
	return (frame[7].l);
	}

	popStackFrame(ctx);
}

jlong SM_rhino_NativeArray_doConcat_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_Object_long_R_long(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jlong param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:doConcat", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].l = param4;
	{
	LINE_NUMBER(1578);
	jint temp0 = (jint)SM_rhino_NativeArray_isConcatSpreadable_rhino_Context_rhino_Scriptable_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1579);
	jlong temp0 = (jlong)SM_rhino_NativeArray_concatSpreadArg_rhino_Context_rhino_Scriptable_rhino_Scriptable_long_R_long(ctx, (frame[0].o), (frame[2].o), (checkCast(ctx, &class_rhino_Scriptable, (frame[3].o))), (frame[4].l));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(1581);
	SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[2].o), (frame[4].l), (frame[3].o));
	LINE_NUMBER(1582);
	popStackFrame(ctx);
	return ((frame[4].l) + (jlong(1)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_concat_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_concat", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1590);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1593);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1594);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1596);
	jlong temp0 = (jlong)SM_rhino_NativeArray_doConcat_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_Object_long_R_long(ctx, (frame[0].o), (frame[1].o), (frame[5].o), (frame[4].o), (jlong(0)));
	frame[6].l = temp0;
	LINE_NUMBER(1597);
	frame[8].o = (frame[3].o);
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_5:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_6;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(1598);
	jlong temp0 = (jlong)SM_rhino_NativeArray_doConcat_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_Object_long_R_long(ctx, (frame[0].o), (frame[1].o), (frame[5].o), (frame[11].o), (frame[6].l));
	frame[6].l = temp0;
	LINE_NUMBER(1597);
	INST_IINC(10, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1601);
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[5].o), (frame[6].l));
	LINE_NUMBER(1602);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_js_slice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_slice", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1606);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[1].o), (frame[2].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1608);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[1].o), (frame[2].o), (jint(0)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1609);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[1].o), (frame[5].o), (jint(0)));
	frame[7].l = temp0;
	LINE_NUMBER(1612);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1613);
	frame[9].l = (jlong(0));
	LINE_NUMBER(1614);
	frame[11].l = (frame[7].l);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(1616);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	jlong temp1 = (jlong)SM_rhino_NativeArray_toSliceIndex_double_long_R_long(ctx, temp0, (frame[7].l));
	frame[9].l = temp1;
	LINE_NUMBER(1617);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) == (jint(1))) goto label_10;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(1618);
	frame[11].l = (frame[7].l);
	goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(1620);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	jlong temp1 = (jlong)SM_rhino_NativeArray_toSliceIndex_double_long_R_long(ctx, temp0, (frame[7].l));
	frame[11].l = temp1;
	}
label_8:;
	{
	LINE_NUMBER(1624);
	frame[13].l = (frame[9].l);
	}
label_13:;
	{
	if ((longCompare((frame[13].l), (frame[11].l))) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(1625);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[5].o), (frame[13].l));
	frame[15].o = sp[0].o;
	LINE_NUMBER(1626);
	sp[0].o = frame[15].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(1627);
	SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[1].o), (frame[6].o), ((frame[13].l) - (frame[9].l)), (frame[15].o));
	}
label_17:;
	{
	LINE_NUMBER(1624);
	frame[13].l = ((frame[13].l) + (jlong(1)));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1630);
	sp[0].o = frame[1].o;
	sp[1].o = frame[6].o;
	jlong temp0 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, (jlong(0)), ((frame[11].l) - (frame[9].l)));
	sp[0].o = (jobject)SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(1632);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jlong SM_rhino_NativeArray_toSliceIndex_double_long_R_long(jcontext ctx, jdouble param0, jlong param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:toSliceIndex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].d = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(1637);
	if ((doubleCompare((frame[0].d), (jdouble(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(1638);
	if ((doubleCompare(((frame[0].d) + (jdouble((frame[2].l)))), (jdouble(0)), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(1639);
	frame[4].l = (jlong(0));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(1641);
	frame[4].l = (jlong(((frame[0].d) + (jdouble((frame[2].l))))));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(1643);
	if ((doubleCompare((frame[0].d), (jdouble((frame[2].l))), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(1644);
	frame[4].l = (frame[2].l);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(1646);
	frame[4].l = (jlong((frame[0].d)));
	}
label_6:;
	{
	LINE_NUMBER(1648);
	popStackFrame(ctx);
	return (frame[4].l);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_indexOf_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_indexOf", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1652);
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
	LINE_NUMBER(1654);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1655);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	frame[6].l = temp0;
	LINE_NUMBER(1667);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) >= (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(1669);
	frame[8].l = (jlong(0));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(1671);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	frame[8].l = (jlong(temp0));
	LINE_NUMBER(1672);
	if ((longCompare((frame[8].l), (jlong(0)))) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(1673);
	frame[8].l = ((frame[8].l) + (frame[6].l));
	LINE_NUMBER(1674);
	if ((longCompare((frame[8].l), (jlong(0)))) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(1675);
	frame[8].l = (jlong(0));
	}
label_11:;
	{
	LINE_NUMBER(1677);
	if ((longCompare((frame[8].l), ((frame[6].l) - (jlong(1))))) <= 0) goto label_9;
	}
	clinit_rhino_NativeArray(ctx);
	(sp++)->o = SF_rhino_NativeArray_NEGATIVE_ONE;
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(1679);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_NativeArray)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1680);
	frame[10].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[5].o)));
	LINE_NUMBER(1681);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[10].o)))->F_denseOnly) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1682);
	sp[0].o = (jobject)((func_rhino_NativeArray_getPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_NativeArray_getPrototype_R_rhino_Scriptable])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1683);
	frame[12].i = (jint((frame[8].l)));
	}
label_20:;
	{
	if ((longCompare((jlong((frame[12].i))), (frame[6].l))) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(1684);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[10].o)))->F_dense;
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)));
	LINE_NUMBER(1685);
	sp[0].o = frame[13].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	INST_ALOAD(11);
	if ((--sp)->o == nullptr) goto label_24;
	{
	LINE_NUMBER(1686);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, (frame[11].o), (frame[12].i));
	frame[13].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(1688);
	sp[0].o = frame[13].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_26;
	}
	{
	sp[0].o = frame[13].o;
	sp[1].o = frame[4].o;
	LINE_NUMBER(1689);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_shallowEq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(1690);
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (jlong((frame[12].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(1683);
	INST_IINC(12, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(1693);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = (jobject)SF_rhino_NativeArray_NEGATIVE_ONE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(1696);
	frame[10].l = (frame[8].l);
	}
label_29:;
	{
	if ((longCompare((frame[10].l), (frame[6].l))) >= 0) goto label_30;
	}
	{
	LINE_NUMBER(1697);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[5].o), (frame[10].l));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1698);
	sp[0].o = frame[12].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_33;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_shallowEq_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[12].o), (frame[4].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(1699);
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[10].l));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(1696);
	frame[10].l = ((frame[10].l) + (jlong(1)));
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(1702);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = (jobject)SF_rhino_NativeArray_NEGATIVE_ONE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_lastIndexOf_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_lastIndexOf", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1706);
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
	LINE_NUMBER(1708);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1709);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	frame[6].l = temp0;
	LINE_NUMBER(1722);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) >= (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(1724);
	frame[8].l = ((frame[6].l) - (jlong(1)));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(1726);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	frame[8].l = (jlong(temp0));
	LINE_NUMBER(1727);
	if ((longCompare((frame[8].l), (frame[6].l))) < 0) goto label_11;
	}
	{
	LINE_NUMBER(1728);
	frame[8].l = ((frame[6].l) - (jlong(1)));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(1729);
	if ((longCompare((frame[8].l), (jlong(0)))) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(1730);
	frame[8].l = ((frame[8].l) + (frame[6].l));
	}
label_13:;
	{
	LINE_NUMBER(1731);
	if ((longCompare((frame[8].l), (jlong(0)))) >= 0) goto label_9;
	}
	clinit_rhino_NativeArray(ctx);
	(sp++)->o = SF_rhino_NativeArray_NEGATIVE_ONE;
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(1733);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_NativeArray)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1734);
	frame[10].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[5].o)));
	LINE_NUMBER(1735);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[10].o)))->F_denseOnly) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1736);
	sp[0].o = (jobject)((func_rhino_NativeArray_getPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_NativeArray_getPrototype_R_rhino_Scriptable])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1737);
	frame[12].i = (jint((frame[8].l)));
	}
label_20:;
	INST_ILOAD(12);
	if ((--sp)->i < 0) goto label_21;
	{
	LINE_NUMBER(1738);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[10].o)))->F_dense;
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)));
	LINE_NUMBER(1739);
	sp[0].o = frame[13].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	INST_ALOAD(11);
	if ((--sp)->o == nullptr) goto label_24;
	{
	LINE_NUMBER(1740);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, (frame[11].o), (frame[12].i));
	frame[13].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(1742);
	sp[0].o = frame[13].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_26;
	}
	{
	sp[0].o = frame[13].o;
	sp[1].o = frame[4].o;
	LINE_NUMBER(1743);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_shallowEq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(1744);
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (jlong((frame[12].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(1737);
	INST_IINC(12, -1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(1747);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = (jobject)SF_rhino_NativeArray_NEGATIVE_ONE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(1750);
	frame[10].l = (frame[8].l);
	}
label_29:;
	{
	if ((longCompare((frame[10].l), (jlong(0)))) < 0) goto label_30;
	}
	{
	LINE_NUMBER(1751);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[5].o), (frame[10].l));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1752);
	sp[0].o = frame[12].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_33;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_shallowEq_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[12].o), (frame[4].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(1753);
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[10].l));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(1750);
	frame[10].l = ((frame[10].l) - (jlong(1)));
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(1756);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = (jobject)SF_rhino_NativeArray_NEGATIVE_ONE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_includes_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_includes", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1763);
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
	LINE_NUMBER(1765);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1766);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"length"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jlong temp1 = (jlong)SM_rhino_ScriptRuntime_toLength_Array1_java_lang_Object_int_R_long(ctx, sp[0].o, (jint(0)));
	frame[6].l = temp1;
	LINE_NUMBER(1767);
	if ((longCompare((frame[6].l), (jlong(0)))) != 0) goto label_6;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(1770);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) >= (jint(2))) goto label_7;
	}
	{
	LINE_NUMBER(1771);
	frame[8].l = (jlong(0));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(1773);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	frame[8].l = (jlong(temp0));
	LINE_NUMBER(1774);
	if ((longCompare((frame[8].l), (jlong(0)))) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(1775);
	frame[8].l = ((frame[8].l) + (frame[6].l));
	LINE_NUMBER(1776);
	if ((longCompare((frame[8].l), (jlong(0)))) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(1777);
	frame[8].l = (jlong(0));
	}
label_12:;
	{
	LINE_NUMBER(1779);
	if ((longCompare((frame[8].l), ((frame[6].l) - (jlong(1))))) <= 0) goto label_10;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
	{
	LINE_NUMBER(1781);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_NativeArray)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1782);
	frame[10].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[5].o)));
	LINE_NUMBER(1783);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[10].o)))->F_denseOnly) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1784);
	sp[0].o = (jobject)((func_rhino_NativeArray_getPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_NativeArray_getPrototype_R_rhino_Scriptable])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1785);
	frame[12].i = (jint((frame[8].l)));
	}
label_21:;
	{
	if ((longCompare((jlong((frame[12].i))), (frame[6].l))) >= 0) goto label_22;
	}
	{
	LINE_NUMBER(1786);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[10].o)))->F_dense;
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)));
	LINE_NUMBER(1787);
	sp[0].o = frame[13].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_25;
	}
	INST_ALOAD(11);
	if ((--sp)->o == nullptr) goto label_25;
	{
	LINE_NUMBER(1788);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, (frame[11].o), (frame[12].i));
	frame[13].o = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(1790);
	sp[0].o = frame[13].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_27;
	}
	{
	LINE_NUMBER(1791);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[13].o = sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(1793);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_sameZero_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[13].o), (frame[4].o));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(1794);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(1785);
	INST_IINC(12, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(1797);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(1800);
	if ((longCompare((frame[8].l), (frame[6].l))) >= 0) goto label_31;
	}
	{
	LINE_NUMBER(1801);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[5].o), (frame[8].l));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1802);
	sp[0].o = frame[10].o;
	clinit_rhino_NativeArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_34;
	}
	{
	LINE_NUMBER(1803);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[10].o = sp[0].o;
	}
label_34:;
	{
	LINE_NUMBER(1805);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_sameZero_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[10].o), (frame[4].o));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(1806);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(1800);
	frame[8].l = ((frame[8].l) + (jlong(1)));
	goto label_16;
	}
label_31:;
	{
	LINE_NUMBER(1809);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_fill_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_fill", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1813);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1814);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[5].l = temp0;
	LINE_NUMBER(1816);
	frame[7].l = (jlong(0));
	LINE_NUMBER(1817);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(1818);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	frame[7].l = (jlong(temp0));
	}
label_4:;
	{
	LINE_NUMBER(1821);
	if ((longCompare((frame[7].l), (jlong(0)))) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(1822);
	jlong temp0 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, ((frame[5].l) + (frame[7].l)), (jlong(0)));
	frame[9].l = temp0;
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(1824);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (frame[7].l), (frame[5].l));
	frame[9].l = temp0;
	}
label_9:;
	{
	LINE_NUMBER(1827);
	frame[11].l = (frame[5].l);
	LINE_NUMBER(1828);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(3))) goto label_11;
	}
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(2)))));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(1829);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(2)))));
	frame[11].l = (jlong(temp0));
	}
label_11:;
	{
	LINE_NUMBER(1832);
	if ((longCompare((frame[11].l), (jlong(0)))) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(1833);
	jlong temp0 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, ((frame[5].l) + (frame[11].l)), (jlong(0)));
	frame[13].l = temp0;
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(1835);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (frame[11].l), (frame[5].l));
	frame[13].l = temp0;
	}
label_16:;
	{
	LINE_NUMBER(1838);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= 0) goto label_17;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	sp += 1;
	goto label_18;
	}
label_17:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_18:;
	{
	sp -= 1;
	frame[15].o = sp[0].o;
	LINE_NUMBER(1839);
	frame[16].l = (frame[9].l);
	}
label_20:;
	{
	if ((longCompare((frame[16].l), (frame[13].l))) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(1840);
	SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[2].o), (frame[16].l), (frame[15].o));
	LINE_NUMBER(1839);
	frame[16].l = ((frame[16].l) + (jlong(1)));
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(1843);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_js_copyWithin_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[31];
	auto stack = &frame[25];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_copyWithin", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1847);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1848);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	frame[5].l = temp0;
	LINE_NUMBER(1850);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(1))) goto label_3;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	sp += 1;
	goto label_4;
	}
label_3:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_4:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1851);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, (frame[7].o));
	frame[8].l = (jlong(temp0));
	LINE_NUMBER(1853);
	if ((longCompare((frame[8].l), (jlong(0)))) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(1854);
	jlong temp0 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, ((frame[5].l) + (frame[8].l)), (jlong(0)));
	frame[10].l = temp0;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(1856);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (frame[8].l), (frame[5].l));
	frame[10].l = temp0;
	}
label_10:;
	{
	LINE_NUMBER(1859);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(2))) goto label_11;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)));
	sp += 1;
	goto label_12;
	}
label_11:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_12:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1860);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, (frame[12].o));
	frame[13].l = (jlong(temp0));
	LINE_NUMBER(1862);
	if ((longCompare((frame[13].l), (jlong(0)))) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(1863);
	jlong temp0 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, ((frame[5].l) + (frame[13].l)), (jlong(0)));
	frame[15].l = temp0;
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(1865);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (frame[13].l), (frame[5].l));
	frame[15].l = temp0;
	}
label_18:;
	{
	LINE_NUMBER(1868);
	frame[17].l = (frame[5].l);
	LINE_NUMBER(1869);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(3))) goto label_20;
	}
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(2)))));
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(1870);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(2)))));
	frame[17].l = (jlong(temp0));
	}
label_20:;
	{
	LINE_NUMBER(1873);
	if ((longCompare((frame[17].l), (jlong(0)))) >= 0) goto label_22;
	}
	{
	LINE_NUMBER(1874);
	jlong temp0 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, ((frame[5].l) + (frame[17].l)), (jlong(0)));
	frame[19].l = temp0;
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(1876);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (frame[17].l), (frame[5].l));
	frame[19].l = temp0;
	}
label_25:;
	{
	LINE_NUMBER(1879);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, ((frame[19].l) - (frame[15].l)), ((frame[5].l) - (frame[10].l)));
	frame[21].l = temp0;
	LINE_NUMBER(1880);
	frame[23].i = (jint(1));
	LINE_NUMBER(1881);
	if ((longCompare((frame[15].l), (frame[10].l))) >= 0) goto label_28;
	}
	{
	if ((longCompare((frame[10].l), ((frame[15].l) + (frame[21].l)))) >= 0) goto label_28;
	}
	{
	LINE_NUMBER(1882);
	frame[23].i = (jint(-1));
	LINE_NUMBER(1883);
	frame[15].l = (((frame[15].l) + (frame[21].l)) - (jlong(1)));
	LINE_NUMBER(1884);
	frame[10].l = (((frame[10].l) + (frame[21].l)) - (jlong(1)));
	}
label_28:;
	{
	LINE_NUMBER(1889);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeArray)) == 0) goto label_32;
	}
	{
	if ((longCompare((frame[21].l), (jlong(2147483647ll)))) > 0) goto label_32;
	}
	{
	LINE_NUMBER(1890);
	frame[24].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[4].o)));
	LINE_NUMBER(1891);
	if (((jint)((rhino_NativeArray *) NULL_CHECK((frame[24].o)))->F_denseOnly) == 0) goto label_32;
	}
label_35:;
	{
	LINE_NUMBER(1892);
	if ((longCompare((frame[21].l), (jlong(0)))) <= 0) goto label_36;
	}
	{
	LINE_NUMBER(1893);
	sp[0].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[24].o)))->F_dense;
	jint temp0 = jint((frame[10].l));
	sp[1].o = (jobject)((rhino_NativeArray *) NULL_CHECK((frame[24].o)))->F_dense;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint((frame[15].l)))));
	LINE_NUMBER(1894);
	frame[15].l = ((frame[15].l) + (jlong((frame[23].i))));
	LINE_NUMBER(1895);
	frame[10].l = ((frame[10].l) + (jlong((frame[23].i))));
	LINE_NUMBER(1892);
	frame[21].l = ((frame[21].l) - (jlong(1)));
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(1898);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_32:;
	{
	LINE_NUMBER(1902);
	if ((longCompare((frame[21].l), (jlong(0)))) <= 0) goto label_41;
	}
	{
	LINE_NUMBER(1903);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[4].o), (frame[15].l));
	frame[24].o = sp[0].o;
	LINE_NUMBER(1904);
	sp[0].o = frame[24].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_44;
	}
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[24].o));
	if (temp0 == 0) goto label_45;
	}
label_44:;
	{
	LINE_NUMBER(1905);
	SM_rhino_NativeArray_deleteElem_rhino_Scriptable_long(ctx, (frame[4].o), (frame[10].l));
	goto label_46;
	}
label_45:;
	{
	LINE_NUMBER(1907);
	SM_rhino_NativeArray_setElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[10].l), (frame[24].o));
	}
label_46:;
	{
	LINE_NUMBER(1910);
	frame[15].l = ((frame[15].l) + (jlong((frame[23].i))));
	LINE_NUMBER(1911);
	frame[10].l = ((frame[10].l) + (jlong((frame[23].i))));
	LINE_NUMBER(1902);
	frame[21].l = ((frame[21].l) - (jlong(1)));
	goto label_32;
	}
label_41:;
	{
	LINE_NUMBER(1914);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_iterativeMethod_rhino_Context_rhino_IdFunctionObject_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[29];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:iterativeMethod", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(1922);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1928);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	frame[6].i = temp1;
	LINE_NUMBER(1929);
	if ((22) == (frame[6].i)) goto label_3;
	}
	{
	if ((23) != (frame[6].i)) goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[0].o), (frame[5].o), (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1931);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp += 2;
	if ((frame[6].i) != (20)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 3;
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, sp[0].o, sp[1].o, sp[2].i);
	frame[7].l = temp0;
	LINE_NUMBER(1932);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)));
	sp += 1;
	goto label_9;
	}
label_8:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_9:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(1933);
	if ((frame[9].o) == nullptr) goto label_11;
	}
	{
	if ((isInstance(ctx, (frame[9].o), &class_rhino_Function)) != 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(1934);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[9].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(1936);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 < (200)) goto label_13;
	}
	{
	if ((isInstance(ctx, (frame[9].o), &class_rhino_regexp_NativeRegExp)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1942);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[9].o));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(1945);
	frame[10].o = (checkCast(ctx, &class_rhino_Function, (frame[9].o)));
	LINE_NUMBER(1946);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1948);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) < (jint(2))) goto label_17;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))) == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(1949);
	frame[12].o = (frame[11].o);
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(1951);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	frame[12].o = sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(1954);
	frame[13].o = (jobject(nullptr));
	LINE_NUMBER(1955);
	if ((frame[6].i) == (18)) goto label_22;
	}
	{
	if ((frame[6].i) != (20)) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(1956);
	if ((frame[6].i) != (20)) goto label_24;
	}
	{
	jint temp0 = jint((frame[7].l));
	sp[0].i = temp0;
	sp += 1;
	goto label_25;
	}
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(1957);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[2].o), (frame[14].i));
	frame[13].o = sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(1959);
	frame[14].l = (jlong(0));
	LINE_NUMBER(1960);
	frame[16].l = (jlong(0));
	}
label_28:;
	{
	if ((longCompare((frame[16].l), (frame[7].l))) >= 0) goto label_29;
	}
	{
	LINE_NUMBER(1961);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	frame[18].o = sp[0].o;
	LINE_NUMBER(1962);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[5].o), (frame[16].l));
	frame[19].o = sp[0].o;
	LINE_NUMBER(1963);
	sp[0].o = frame[19].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_33;
	}
	{
	LINE_NUMBER(1964);
	if ((frame[6].i) == (22)) goto label_35;
	}
	{
	if ((frame[6].i) != (23)) goto label_36;
	}
label_35:;
	{
	LINE_NUMBER(1965);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[19].o = sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(1970);
	ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))) = (frame[19].o);
	LINE_NUMBER(1971);
	sp[0].o = frame[18].o;
	jint temp0 = jint(1);
	sp[1].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[16].l));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1972);
	ARRAY_ACCESS(jobject, (frame[18].o), (jint(2))) = (frame[5].o);
	LINE_NUMBER(1973);
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o), (frame[0].o), (frame[11].o), (frame[12].o), (frame[18].o));
	frame[20].o = sp[0].o;
	LINE_NUMBER(1974);
	switch((frame[6].i)) {
		case 17: goto label_41;
		case 18: goto label_42;
		case 19: goto label_43;
		case 20: goto label_44;
		case 21: goto label_45;
		case 22: goto label_46;
		case 23: goto label_47;
		default: goto label_36;
	}
	}
label_41:;
	{
	LINE_NUMBER(1976);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[20].o));
	if (temp0 != 0) goto label_36;
	}
	{
	LINE_NUMBER(1977);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(1980);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[20].o));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(1981);
	sp[0].o = frame[0].o;
	sp[1].o = frame[13].o;
	jlong temp0 = frame[14].l;
	frame[14].l = (temp0 + (jlong(1)));
	SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, sp[0].o, sp[1].o, temp0, ((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0)))));
	goto label_36;
	}
label_43:;
	LINE_NUMBER(1984);
	goto label_36;
label_44:;
	{
	LINE_NUMBER(1986);
	SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(ctx, (frame[0].o), (frame[13].o), (frame[16].l), (frame[20].o));
	LINE_NUMBER(1987);
	goto label_36;
	}
label_45:;
	{
	LINE_NUMBER(1989);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[20].o));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(1990);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_46:;
	{
	LINE_NUMBER(1993);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[20].o));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(1994);
	popStackFrame(ctx);
	return (frame[19].o);
	}
label_47:;
	{
	LINE_NUMBER(1997);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[20].o));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(1998);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (jdouble((frame[16].l))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(1960);
	frame[16].l = ((frame[16].l) + (jlong(1)));
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(2002);
	switch((frame[6].i)) {
		case 17: goto label_54;
		case 18: goto label_55;
		case 19: goto label_56;
		case 20: goto label_55;
		case 21: goto label_57;
		case 22: goto label_56;
		case 23: goto label_58;
		default: goto label_56;
	}
	}
label_54:;
	{
	LINE_NUMBER(2004);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_55:;
	{
	LINE_NUMBER(2007);
	popStackFrame(ctx);
	return (frame[13].o);
	}
label_57:;
	{
	LINE_NUMBER(2009);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_58:;
	{
	LINE_NUMBER(2011);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (jdouble(-1.0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_56:;
	{
	LINE_NUMBER(2014);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_reduceMethod_rhino_Context_int_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[24];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:reduceMethod", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(2023);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2025);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	frame[6].l = temp0;
	LINE_NUMBER(2026);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)));
	sp += 1;
	goto label_4;
	}
label_3:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_4:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(2027);
	if ((frame[8].o) == nullptr) goto label_6;
	}
	{
	if ((isInstance(ctx, (frame[8].o), &class_rhino_Function)) != 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(2028);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[8].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(2030);
	frame[9].o = (checkCast(ctx, &class_rhino_Function, (frame[8].o)));
	LINE_NUMBER(2031);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2033);
	if ((frame[1].i) != (24)) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(2034);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= (jint(1))) goto label_13;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)));
	sp += 1;
	goto label_14;
	}
label_13:;
	clinit_rhino_Scriptable(ctx);
	(sp++)->o = SF_rhino_Scriptable_NOT_FOUND;
label_14:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(2035);
	frame[13].l = (jlong(0));
	}
label_16:;
	{
	if ((longCompare((frame[13].l), (frame[6].l))) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(2036);
	if ((frame[11].i) == 0) goto label_19;
	}
	INST_LLOAD(13);
	goto label_20;
label_19:;
	{
	jlong temp0 = ((frame[6].l) - (jlong(1))) - (frame[13].l);
	sp[0].l = temp0;
	sp += 1;
	}
label_20:;
	{
	sp -= 1;
	frame[15].l = sp[0].l;
	LINE_NUMBER(2037);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[5].o), (frame[15].l));
	frame[17].o = sp[0].o;
	LINE_NUMBER(2038);
	sp[0].o = frame[17].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	LINE_NUMBER(2039);
	goto label_25;
label_23:;
	{
	LINE_NUMBER(2041);
	sp[0].o = frame[12].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_26;
	}
	{
	LINE_NUMBER(2043);
	frame[12].o = (frame[17].o);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(2045);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[12].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[17].o);
	jint temp0 = jint(2);
	sp[1].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[15].l));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (frame[5].o);
	frame[18].o = sp[0].o;
	LINE_NUMBER(2046);
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o), (frame[0].o), (frame[10].o), (frame[10].o), (frame[18].o));
	frame[12].o = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(2035);
	frame[13].l = ((frame[13].l) + (jlong(1)));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(2049);
	sp[0].o = frame[12].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_29;
	}
	{
	LINE_NUMBER(2051);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.empty.array.reduce"_j))));
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(2053);
	popStackFrame(ctx);
	return (frame[12].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_NativeArray_js_isArray_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:js_isArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2057);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2058);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2060);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Array"_j));
	sp[1].o = (jobject)((func_rhino_Scriptable_getClassName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getClassName_R_java_lang_String, (checkCast(ctx, &class_rhino_Scriptable, (frame[0].o)))))(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[0].o))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2067);
	jint temp0 = (jint)((func_rhino_NativeArray_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_indexOf_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 <= (jint(-1))) goto label_1;
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

jobject M_rhino_NativeArray_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:toArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2072);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_NativeArray_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:toArray", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2077);
	frame[2].l = ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length);
	LINE_NUMBER(2078);
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(2079);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2081);
	frame[4].i = (jint((frame[2].l)));
	LINE_NUMBER(2082);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) < (frame[4].i)) goto label_5;
	}
	INST_ALOAD(1);
	goto label_6;
label_5:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(2084);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, (frame[4].i));
	sp[0].o = checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o)));
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2085);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_10;
	}
	{
	LINE_NUMBER(2086);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((func_rhino_NativeArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[6].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2085);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(2088);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:containsAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2093);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
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
	LINE_NUMBER(2094);
	jint temp0 = (jint)((func_rhino_NativeArray_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_contains_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(2095);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	LINE_NUMBER(2094);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(2096);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeArray_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:size", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2101);
	frame[1].l = ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length);
	LINE_NUMBER(2102);
	if ((longCompare((frame[1].l), (jlong(2147483647ll)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(2103);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2105);
	popStackFrame(ctx);
	return (jint((frame[1].l)));
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:isEmpty", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2110);
	if ((longCompare(((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length), (jlong(0)))) != 0) goto label_1;
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

jobject M_rhino_NativeArray_get_long_R_java_lang_Object(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(2114);
	if ((longCompare((frame[1].l), (jlong(0)))) < 0) goto label_1;
	}
	{
	if ((longCompare((frame[1].l), ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length))) < 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2115);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2117);
	sp[0].o = (jobject)SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(ctx, (frame[0].o), (frame[1].l));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2118);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = frame[3].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(2119);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(2120);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Wrapper)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(2121);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[3].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2123);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2129);
	sp[0].o = (jobject)((func_rhino_NativeArray_get_long_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_get_long_R_java_lang_Object])(ctx, (frame[0].o), (jlong((frame[1].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeArray_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:indexOf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2134);
	frame[2].l = ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length);
	LINE_NUMBER(2135);
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(2136);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2138);
	frame[4].i = (jint((frame[2].l)));
	LINE_NUMBER(2139);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(2140);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(2141);
	sp[0].o = (jobject)((func_rhino_NativeArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[5].i));
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(2142);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_10:;
	{
	LINE_NUMBER(2140);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	goto label_12;
label_5:;
	{
	LINE_NUMBER(2146);
	frame[5].i = (jint(0));
	}
label_13:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(2147);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_rhino_NativeArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[5].i));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(2148);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_15:;
	{
	LINE_NUMBER(2146);
	INST_IINC(5, 1);
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(2152);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeArray_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:lastIndexOf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2157);
	frame[2].l = ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length);
	LINE_NUMBER(2158);
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(2159);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2161);
	frame[4].i = (jint((frame[2].l)));
	LINE_NUMBER(2162);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(2163);
	frame[5].i = ((frame[4].i) - (jint(1)));
	}
label_7:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(2164);
	sp[0].o = (jobject)((func_rhino_NativeArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[5].i));
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(2165);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_10:;
	{
	LINE_NUMBER(2163);
	INST_IINC(5, -1);
	goto label_7;
	}
label_8:;
	goto label_12;
label_5:;
	{
	LINE_NUMBER(2169);
	frame[5].i = ((frame[4].i) - (jint(1)));
	}
label_13:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_12;
	{
	LINE_NUMBER(2170);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_rhino_NativeArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[5].i));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(2171);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_15:;
	{
	LINE_NUMBER(2169);
	INST_IINC(5, -1);
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(2175);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:iterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2180);
	sp[0].o = (jobject)((func_rhino_NativeArray_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_listIterator_R_java_util_ListIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:listIterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2185);
	sp[0].o = (jobject)((func_rhino_NativeArray_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeArray_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_listIterator_int_R_java_util_ListIterator(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:listIterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2190);
	frame[2].l = ((jlong)((rhino_NativeArray *) NULL_CHECK((frame[0].o)))->F_length);
	LINE_NUMBER(2191);
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(2192);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2194);
	frame[4].i = (jint((frame[2].l)));
	LINE_NUMBER(2196);
	if ((frame[1].i) < 0) goto label_5;
	}
	{
	if ((frame[1].i) <= (frame[4].i)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(2197);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Index: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(2200);
	clinit_rhino_NativeArray$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray$1);
	init_rhino_NativeArray$1_rhino_NativeArray_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2259);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2264);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:addAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2269);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:removeAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2274);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:retainAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2279);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2284);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2289);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:addAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2294);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2299);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2304);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeArray_subList_int_int_R_java_util_List(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:subList", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2309);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_NativeArray_findPrototypeId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:findPrototypeId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2314);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2315);
	popStackFrame(ctx);
	return (32);
	}
label_1:;
	{
	LINE_NUMBER(2317);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeArray_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2384);
	frame[2].i = (jint(0));
	LINE_NUMBER(2385);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(2388);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
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
		case 13: goto label_12;
		case 14: goto label_13;
		default: goto label_12;
	}
	}
label_3:;
	{
	LINE_NUMBER(2390);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(2391);
	if ((frame[4].i) != (109)) goto label_15;
	}
	{
	LINE_NUMBER(2392);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (112)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (97)) goto label_12;
	}
	{
	LINE_NUMBER(2393);
	frame[2].i = (20);
	LINE_NUMBER(2394);
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(2396);
	if ((frame[4].i) != (112)) goto label_12;
	}
	{
	LINE_NUMBER(2397);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	if (temp0 != (112)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (111)) goto label_12;
	}
	{
	LINE_NUMBER(2398);
	frame[2].i = (9);
	LINE_NUMBER(2399);
	goto label_19;
	}
label_4:;
	{
	LINE_NUMBER(2404);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	switch(temp0) {
		case 105: goto label_23;
		case 106: goto label_24;
		case 107: goto label_24;
		case 108: goto label_25;
		case 109: goto label_26;
		case 110: goto label_27;
		case 111: goto label_24;
		case 112: goto label_24;
		case 113: goto label_24;
		case 114: goto label_28;
		case 115: goto label_29;
		case 116: goto label_24;
		case 117: goto label_24;
		case 118: goto label_24;
		case 119: goto label_24;
		case 120: goto label_24;
		case 121: goto label_30;
		default: goto label_24;
	}
	}
label_23:;
	{
	LINE_NUMBER(2406);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"join"_j)));
	LINE_NUMBER(2407);
	frame[2].i = (jint(5));
	LINE_NUMBER(2408);
	goto label_12;
	}
label_25:;
	{
	LINE_NUMBER(2410);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"fill"_j)));
	LINE_NUMBER(2411);
	frame[2].i = (26);
	LINE_NUMBER(2412);
	goto label_12;
	}
label_26:;
	{
	LINE_NUMBER(2414);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"some"_j)));
	LINE_NUMBER(2415);
	frame[2].i = (21);
	LINE_NUMBER(2416);
	goto label_12;
	}
label_27:;
	{
	LINE_NUMBER(2418);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"find"_j)));
	LINE_NUMBER(2419);
	frame[2].i = (22);
	LINE_NUMBER(2420);
	goto label_12;
	}
label_28:;
	{
	LINE_NUMBER(2422);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"sort"_j)));
	LINE_NUMBER(2423);
	frame[2].i = (7);
	LINE_NUMBER(2424);
	goto label_12;
	}
label_29:;
	{
	LINE_NUMBER(2426);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"push"_j)));
	LINE_NUMBER(2427);
	frame[2].i = (8);
	LINE_NUMBER(2428);
	goto label_12;
	}
label_30:;
	{
	LINE_NUMBER(2430);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"keys"_j)));
	LINE_NUMBER(2431);
	frame[2].i = (27);
	LINE_NUMBER(2432);
	goto label_12;
	}
label_24:;
	LINE_NUMBER(2434);
	goto label_12;
label_5:;
	{
	LINE_NUMBER(2436);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	frame[4].i = temp0;
	LINE_NUMBER(2437);
	if ((frame[4].i) != (104)) goto label_46;
	}
	{
	LINE_NUMBER(2438);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"shift"_j)));
	LINE_NUMBER(2439);
	frame[2].i = (10);
	goto label_12;
	}
label_46:;
	{
	LINE_NUMBER(2440);
	if ((frame[4].i) != (108)) goto label_49;
	}
	{
	LINE_NUMBER(2441);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"slice"_j)));
	LINE_NUMBER(2442);
	frame[2].i = (14);
	goto label_12;
	}
label_49:;
	{
	LINE_NUMBER(2443);
	if ((frame[4].i) != (118)) goto label_12;
	}
	{
	LINE_NUMBER(2444);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"every"_j)));
	LINE_NUMBER(2445);
	frame[2].i = (17);
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(2449);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	switch(temp0) {
		case 99: goto label_54;
		case 102: goto label_55;
		case 114: goto label_56;
		case 115: goto label_57;
		case 118: goto label_58;
		default: goto label_59;
	}
	}
label_54:;
	{
	LINE_NUMBER(2451);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"concat"_j)));
	LINE_NUMBER(2452);
	frame[2].i = (13);
	LINE_NUMBER(2453);
	goto label_12;
	}
label_55:;
	{
	LINE_NUMBER(2455);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"filter"_j)));
	LINE_NUMBER(2456);
	frame[2].i = (18);
	LINE_NUMBER(2457);
	goto label_12;
	}
label_56:;
	{
	LINE_NUMBER(2459);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"reduce"_j)));
	LINE_NUMBER(2460);
	frame[2].i = (24);
	LINE_NUMBER(2461);
	goto label_12;
	}
label_57:;
	{
	LINE_NUMBER(2463);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"splice"_j)));
	LINE_NUMBER(2464);
	frame[2].i = (12);
	LINE_NUMBER(2465);
	goto label_12;
	}
label_58:;
	{
	LINE_NUMBER(2467);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"values"_j)));
	LINE_NUMBER(2468);
	frame[2].i = (28);
	LINE_NUMBER(2469);
	goto label_12;
	}
label_59:;
	LINE_NUMBER(2471);
	goto label_12;
label_7:;
	{
	LINE_NUMBER(2473);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	switch(temp0) {
		case 101: goto label_70;
		case 102: goto label_71;
		case 105: goto label_72;
		case 114: goto label_73;
		case 117: goto label_74;
		default: goto label_75;
	}
	}
label_70:;
	{
	LINE_NUMBER(2475);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"entries"_j)));
	LINE_NUMBER(2476);
	frame[2].i = (29);
	LINE_NUMBER(2477);
	goto label_12;
	}
label_71:;
	{
	LINE_NUMBER(2479);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"forEach"_j)));
	LINE_NUMBER(2480);
	frame[2].i = (19);
	LINE_NUMBER(2481);
	goto label_12;
	}
label_72:;
	{
	LINE_NUMBER(2483);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"indexOf"_j)));
	LINE_NUMBER(2484);
	frame[2].i = (15);
	LINE_NUMBER(2485);
	goto label_12;
	}
label_73:;
	{
	LINE_NUMBER(2487);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"reverse"_j)));
	LINE_NUMBER(2488);
	frame[2].i = (6);
	LINE_NUMBER(2489);
	goto label_12;
	}
label_74:;
	{
	LINE_NUMBER(2491);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"unshift"_j)));
	LINE_NUMBER(2492);
	frame[2].i = (11);
	LINE_NUMBER(2493);
	goto label_12;
	}
label_75:;
	LINE_NUMBER(2495);
	goto label_12;
label_8:;
	{
	LINE_NUMBER(2497);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	frame[4].i = temp0;
	LINE_NUMBER(2498);
	if ((frame[4].i) != (108)) goto label_87;
	}
	{
	LINE_NUMBER(2499);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"includes"_j)));
	LINE_NUMBER(2500);
	frame[2].i = (30);
	goto label_12;
	}
label_87:;
	{
	LINE_NUMBER(2501);
	if ((frame[4].i) != (111)) goto label_90;
	}
	{
	LINE_NUMBER(2502);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(2503);
	frame[2].i = (jint(4));
	goto label_12;
	}
label_90:;
	{
	LINE_NUMBER(2504);
	if ((frame[4].i) != (116)) goto label_12;
	}
	{
	LINE_NUMBER(2505);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(2506);
	frame[2].i = (jint(2));
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(2510);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"findIndex"_j)));
	LINE_NUMBER(2511);
	frame[2].i = (23);
	LINE_NUMBER(2512);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(2514);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"copyWithin"_j)));
	LINE_NUMBER(2515);
	frame[2].i = (31);
	LINE_NUMBER(2516);
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(2518);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(2519);
	if ((frame[4].i) != (99)) goto label_100;
	}
	{
	LINE_NUMBER(2520);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(2521);
	frame[2].i = (jint(1));
	goto label_12;
	}
label_100:;
	{
	LINE_NUMBER(2522);
	if ((frame[4].i) != (108)) goto label_103;
	}
	{
	LINE_NUMBER(2523);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"lastIndexOf"_j)));
	LINE_NUMBER(2524);
	frame[2].i = (16);
	goto label_12;
	}
label_103:;
	{
	LINE_NUMBER(2525);
	if ((frame[4].i) != (114)) goto label_12;
	}
	{
	LINE_NUMBER(2526);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"reduceRight"_j)));
	LINE_NUMBER(2527);
	frame[2].i = (25);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(2531);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toLocaleString"_j)));
	LINE_NUMBER(2532);
	frame[2].i = (jint(3));
	}
label_12:;
	{
	LINE_NUMBER(2535);
	if ((frame[3].o) == nullptr) goto label_19;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_19;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_19;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_19:;
	{
	LINE_NUMBER(2538);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeArray_lambda$js_sort$0_Array1_java_lang_Object_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:lambda$js_sort$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(1197);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))) = (frame[5].o);
	LINE_NUMBER(1198);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))) = (frame[6].o);
	LINE_NUMBER(1199);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1201);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[7].o));
	frame[8].d = temp0;
	LINE_NUMBER(1202);
	jint temp1 = (jint)SM_java_lang_Double_compare_double_double_R_int(ctx, (frame[8].d), (jdouble(0)));
	frame[10].i = temp1;
	LINE_NUMBER(1203);
	if ((frame[10].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(1204);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(1205);
	if ((frame[10].i) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(1206);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(1208);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeArray_access$000_R_java_util_Comparator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:access$000", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	{
	LINE_NUMBER(14);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = (jobject)SF_rhino_NativeArray_STRING_COMPARATOR;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeArray_Id_length = jint(1);
	SF_rhino_NativeArray_MAX_INSTANCE_ID = jint(1);
	SF_rhino_NativeArray_Id_constructor = jint(1);
	SF_rhino_NativeArray_Id_toString = jint(2);
	SF_rhino_NativeArray_Id_toLocaleString = jint(3);
	SF_rhino_NativeArray_Id_toSource = jint(4);
	SF_rhino_NativeArray_Id_join = jint(5);
	SF_rhino_NativeArray_Id_reverse = jint(6);
	SF_rhino_NativeArray_Id_sort = jint(7);
	SF_rhino_NativeArray_Id_push = jint(8);
	SF_rhino_NativeArray_Id_pop = jint(9);
	SF_rhino_NativeArray_Id_shift = jint(10);
	SF_rhino_NativeArray_Id_unshift = jint(11);
	SF_rhino_NativeArray_Id_splice = jint(12);
	SF_rhino_NativeArray_Id_concat = jint(13);
	SF_rhino_NativeArray_Id_slice = jint(14);
	SF_rhino_NativeArray_Id_indexOf = jint(15);
	SF_rhino_NativeArray_Id_lastIndexOf = jint(16);
	SF_rhino_NativeArray_Id_every = jint(17);
	SF_rhino_NativeArray_Id_filter = jint(18);
	SF_rhino_NativeArray_Id_forEach = jint(19);
	SF_rhino_NativeArray_Id_map = jint(20);
	SF_rhino_NativeArray_Id_some = jint(21);
	SF_rhino_NativeArray_Id_find = jint(22);
	SF_rhino_NativeArray_Id_findIndex = jint(23);
	SF_rhino_NativeArray_Id_reduce = jint(24);
	SF_rhino_NativeArray_Id_reduceRight = jint(25);
	SF_rhino_NativeArray_Id_fill = jint(26);
	SF_rhino_NativeArray_Id_keys = jint(27);
	SF_rhino_NativeArray_Id_values = jint(28);
	SF_rhino_NativeArray_Id_entries = jint(29);
	SF_rhino_NativeArray_Id_includes = jint(30);
	SF_rhino_NativeArray_Id_copyWithin = jint(31);
	SF_rhino_NativeArray_SymbolId_iterator = jint(32);
	SF_rhino_NativeArray_MAX_PROTOTYPE_ID = jint(32);
	SF_rhino_NativeArray_ConstructorId_join = jint(-5);
	SF_rhino_NativeArray_ConstructorId_reverse = jint(-6);
	SF_rhino_NativeArray_ConstructorId_sort = jint(-7);
	SF_rhino_NativeArray_ConstructorId_push = jint(-8);
	SF_rhino_NativeArray_ConstructorId_pop = jint(-9);
	SF_rhino_NativeArray_ConstructorId_shift = jint(-10);
	SF_rhino_NativeArray_ConstructorId_unshift = jint(-11);
	SF_rhino_NativeArray_ConstructorId_splice = jint(-12);
	SF_rhino_NativeArray_ConstructorId_concat = jint(-13);
	SF_rhino_NativeArray_ConstructorId_slice = jint(-14);
	SF_rhino_NativeArray_ConstructorId_indexOf = jint(-15);
	SF_rhino_NativeArray_ConstructorId_lastIndexOf = jint(-16);
	SF_rhino_NativeArray_ConstructorId_every = jint(-17);
	SF_rhino_NativeArray_ConstructorId_filter = jint(-18);
	SF_rhino_NativeArray_ConstructorId_forEach = jint(-19);
	SF_rhino_NativeArray_ConstructorId_map = jint(-20);
	SF_rhino_NativeArray_ConstructorId_some = jint(-21);
	SF_rhino_NativeArray_ConstructorId_find = jint(-22);
	SF_rhino_NativeArray_ConstructorId_findIndex = jint(-23);
	SF_rhino_NativeArray_ConstructorId_reduce = jint(-24);
	SF_rhino_NativeArray_ConstructorId_reduceRight = jint(-25);
	SF_rhino_NativeArray_ConstructorId_isArray = jint(-26);
	SF_rhino_NativeArray_ConstructorId_of = jint(-27);
	SF_rhino_NativeArray_ConstructorId_from = jint(-28);
	SF_rhino_NativeArray_DEFAULT_INITIAL_CAPACITY = jint(10);
	SF_rhino_NativeArray_GROW_FACTOR = jdouble(1.5);
	SF_rhino_NativeArray_MAX_PRE_GROW_SIZE = jint(1431655764);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray(ctx);
	{
	LINE_NUMBER(27);
	clinit_rhino_NativeArray(ctx);
	SF_rhino_NativeArray_ARRAY_TAG = (((jobject) createStringLiteral(ctx, u8"Array"_j)));
	LINE_NUMBER(28);
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (jlong(-1ll)));
	clinit_rhino_NativeArray(ctx);
	SF_rhino_NativeArray_NEGATIVE_ONE = sp[0].o;
	LINE_NUMBER(2322);
	clinit_rhino_NativeArray$StringLikeComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray$StringLikeComparator);
	init_rhino_NativeArray$StringLikeComparator(ctx, sp[0].o);
	clinit_rhino_NativeArray(ctx);
	SF_rhino_NativeArray_STRING_COMPARATOR = sp[0].o;
	LINE_NUMBER(2323);
	clinit_rhino_NativeArray$ElementComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray$ElementComparator);
	init_rhino_NativeArray$ElementComparator(ctx, sp[0].o);
	clinit_rhino_NativeArray(ctx);
	SF_rhino_NativeArray_DEFAULT_COMPARATOR = sp[0].o;
	LINE_NUMBER(2629);
	clinit_rhino_NativeArray(ctx);
	SF_rhino_NativeArray_maximumInitialCapacity = (10000);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeArray[] {
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
	(void *) M_rhino_NativeArray_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeArray_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeArray_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeArray_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_java_lang_String,
	(void *) M_rhino_NativeArray_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeArray_getDefaultValue_java_lang_Class_R_java_lang_Object,
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
	(void *) M_rhino_NativeArray_getAttributes_int_R_int,
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
	(void *) M_rhino_NativeArray_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean,
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
	(void *) M_rhino_NativeArray_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeArray_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_NativeArray_size_R_int,
	(void *) M_rhino_NativeArray_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeArray_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_NativeArray_getMaxInstanceId_R_int,
	(void *) M_rhino_NativeArray_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_NativeArray_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_NativeArray_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_NativeArray_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_NativeArray_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_NativeArray_initPrototypeId_int,
	(void *) M_rhino_NativeArray_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_NativeArray_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_NativeArray_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeArray_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_List_spliterator_R_java_util_Spliterator,
	(void *) M_rhino_NativeArray_add_java_lang_Object_R_boolean,
	(void *) M_rhino_NativeArray_addAll_java_util_Collection_R_boolean,
	(void *) M_rhino_NativeArray_clear,
	(void *) M_rhino_NativeArray_contains_java_lang_Object_R_boolean,
	(void *) M_rhino_NativeArray_containsAll_java_util_Collection_R_boolean,
	(void *) M_rhino_NativeArray_remove_java_lang_Object_R_boolean,
	(void *) M_rhino_NativeArray_removeAll_java_util_Collection_R_boolean,
	(void *) M_rhino_NativeArray_retainAll_java_util_Collection_R_boolean,
	(void *) M_rhino_NativeArray_toArray_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeArray_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeArray_add_int_java_lang_Object,
	(void *) M_rhino_NativeArray_addAll_int_java_util_Collection_R_boolean,
	(void *) M_rhino_NativeArray_get_int_R_java_lang_Object,
	(void *) M_rhino_NativeArray_indexOf_java_lang_Object_R_int,
	(void *) M_rhino_NativeArray_lastIndexOf_java_lang_Object_R_int,
	(void *) M_rhino_NativeArray_listIterator_R_java_util_ListIterator,
	(void *) M_rhino_NativeArray_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_rhino_NativeArray_remove_int_R_java_lang_Object,
	(void *) M_rhino_NativeArray_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeArray_subList_int_int_R_java_util_List,
	(void *) M_rhino_NativeArray_ensureCapacity_int_R_boolean,
	(void *) M_rhino_NativeArray_getIndexIds_R_java_util_List,
	(void *) M_rhino_NativeArray_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeArray_getLength_R_long,
	(void *) M_rhino_NativeArray_setDenseOnly_boolean,
	(void *) M_rhino_NativeArray_setLength_java_lang_Object,
	(void *) M_rhino_NativeArray_js_slice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_NativeArray_get_long_R_java_lang_Object,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Ljava/util/Collection;)Z" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "containsAll", "(Ljava/util/Collection;)Z" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "removeAll", "(Ljava/util/Collection;)Z" },
	{ "retainAll", "(Ljava/util/Collection;)Z" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;" },
	{ "add", "(ILjava/lang/Object;)V" },
	{ "addAll", "(ILjava/util/Collection;)Z" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "indexOf", "(Ljava/lang/Object;)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;)I" },
	{ "listIterator", "()Ljava/util/ListIterator;" },
	{ "listIterator", "(I)Ljava/util/ListIterator;" },
	{ "sort", "(Ljava/util/Comparator;)V" },
	{ "remove", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)Ljava/lang/Object;" },
	{ "subList", "(II)Ljava/util/List;" },
	{ "ensureCapacity", "(I)Z" },
	{ "getIndexIds", "()Ljava/util/List;" },
	{ "defaultIndexPropertyDescriptor", "(Ljava/lang/Object;)Lrhino/ScriptableObject;" },
	{ "getLength", "()J" },
	{ "setDenseOnly", "(Z)V" },
	{ "setLength", "(Ljava/lang/Object;)V" },
	{ "js_slice", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "get", "(J)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_List, };

static jclass innerClasses[] {
	&class_rhino_NativeArray$ElementComparator,
	&class_rhino_NativeArray$StringLikeComparator,
};

static FieldMetadata fields[] {
	{ "ARRAY_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeArray_ARRAY_TAG, "Ljava/lang/Object;", 26 },
	{ "NEGATIVE_ONE", &class_java_lang_Long, (intptr_t) &SF_rhino_NativeArray_NEGATIVE_ONE, "Ljava/lang/Long;", 26 },
	{ "Id_length", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_length, "I", 26 },
	{ "MAX_INSTANCE_ID", &class_int, (intptr_t) &SF_rhino_NativeArray_MAX_INSTANCE_ID, "I", 26 },
	{ "STRING_COMPARATOR", &class_java_util_Comparator, (intptr_t) &SF_rhino_NativeArray_STRING_COMPARATOR, "Ljava/util/Comparator;", 26 },
	{ "DEFAULT_COMPARATOR", &class_java_util_Comparator, (intptr_t) &SF_rhino_NativeArray_DEFAULT_COMPARATOR, "Ljava/util/Comparator;", 26 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_constructor, "I", 26 },
	{ "Id_toString", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_toString, "I", 26 },
	{ "Id_toLocaleString", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_toLocaleString, "I", 26 },
	{ "Id_toSource", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_toSource, "I", 26 },
	{ "Id_join", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_join, "I", 26 },
	{ "Id_reverse", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_reverse, "I", 26 },
	{ "Id_sort", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_sort, "I", 26 },
	{ "Id_push", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_push, "I", 26 },
	{ "Id_pop", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_pop, "I", 26 },
	{ "Id_shift", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_shift, "I", 26 },
	{ "Id_unshift", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_unshift, "I", 26 },
	{ "Id_splice", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_splice, "I", 26 },
	{ "Id_concat", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_concat, "I", 26 },
	{ "Id_slice", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_slice, "I", 26 },
	{ "Id_indexOf", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_indexOf, "I", 26 },
	{ "Id_lastIndexOf", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_lastIndexOf, "I", 26 },
	{ "Id_every", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_every, "I", 26 },
	{ "Id_filter", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_filter, "I", 26 },
	{ "Id_forEach", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_forEach, "I", 26 },
	{ "Id_map", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_map, "I", 26 },
	{ "Id_some", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_some, "I", 26 },
	{ "Id_find", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_find, "I", 26 },
	{ "Id_findIndex", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_findIndex, "I", 26 },
	{ "Id_reduce", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_reduce, "I", 26 },
	{ "Id_reduceRight", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_reduceRight, "I", 26 },
	{ "Id_fill", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_fill, "I", 26 },
	{ "Id_keys", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_keys, "I", 26 },
	{ "Id_values", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_values, "I", 26 },
	{ "Id_entries", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_entries, "I", 26 },
	{ "Id_includes", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_includes, "I", 26 },
	{ "Id_copyWithin", &class_int, (intptr_t) &SF_rhino_NativeArray_Id_copyWithin, "I", 26 },
	{ "SymbolId_iterator", &class_int, (intptr_t) &SF_rhino_NativeArray_SymbolId_iterator, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeArray_MAX_PROTOTYPE_ID, "I", 26 },
	{ "ConstructorId_join", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_join, "I", 26 },
	{ "ConstructorId_reverse", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_reverse, "I", 26 },
	{ "ConstructorId_sort", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_sort, "I", 26 },
	{ "ConstructorId_push", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_push, "I", 26 },
	{ "ConstructorId_pop", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_pop, "I", 26 },
	{ "ConstructorId_shift", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_shift, "I", 26 },
	{ "ConstructorId_unshift", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_unshift, "I", 26 },
	{ "ConstructorId_splice", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_splice, "I", 26 },
	{ "ConstructorId_concat", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_concat, "I", 26 },
	{ "ConstructorId_slice", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_slice, "I", 26 },
	{ "ConstructorId_indexOf", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_indexOf, "I", 26 },
	{ "ConstructorId_lastIndexOf", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_lastIndexOf, "I", 26 },
	{ "ConstructorId_every", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_every, "I", 26 },
	{ "ConstructorId_filter", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_filter, "I", 26 },
	{ "ConstructorId_forEach", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_forEach, "I", 26 },
	{ "ConstructorId_map", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_map, "I", 26 },
	{ "ConstructorId_some", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_some, "I", 26 },
	{ "ConstructorId_find", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_find, "I", 26 },
	{ "ConstructorId_findIndex", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_findIndex, "I", 26 },
	{ "ConstructorId_reduce", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_reduce, "I", 26 },
	{ "ConstructorId_reduceRight", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_reduceRight, "I", 26 },
	{ "ConstructorId_isArray", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_isArray, "I", 26 },
	{ "ConstructorId_of", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_of, "I", 26 },
	{ "ConstructorId_from", &class_int, (intptr_t) &SF_rhino_NativeArray_ConstructorId_from, "I", 26 },
	{ "length", &class_long, offsetof(rhino_NativeArray, F_length), "J", 2 },
	{ "lengthAttr", &class_int, offsetof(rhino_NativeArray, F_lengthAttr), "I", 2 },
	{ "dense", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_NativeArray, F_dense), "[Ljava/lang/Object;", 2 },
	{ "denseOnly", &class_boolean, offsetof(rhino_NativeArray, F_denseOnly), "Z", 2 },
	{ "maximumInitialCapacity", &class_int, (intptr_t) &SF_rhino_NativeArray_maximumInitialCapacity, "I", 10 },
	{ "DEFAULT_INITIAL_CAPACITY", &class_int, (intptr_t) &SF_rhino_NativeArray_DEFAULT_INITIAL_CAPACITY, "I", 26 },
	{ "GROW_FACTOR", &class_double, (intptr_t) &SF_rhino_NativeArray_GROW_FACTOR, "D", 26 },
	{ "MAX_PRE_GROW_SIZE", &class_int, (intptr_t) &SF_rhino_NativeArray_MAX_PRE_GROW_SIZE, "I", 26 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeArray_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "getMaximumInitialCapacity", (intptr_t) SM_rhino_NativeArray_getMaximumInitialCapacity_R_int, 0, "()I", 8 },
	{ "setMaximumInitialCapacity", (intptr_t) SM_rhino_NativeArray_setMaximumInitialCapacity_int, 0, "(I)V", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeArray_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_rhino_NativeArray_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 1 },
	{ "getClassName", (intptr_t) M_rhino_NativeArray_getClassName_R_java_lang_String, VTABLE_rhino_NativeArray_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getMaxInstanceId", (intptr_t) M_rhino_NativeArray_getMaxInstanceId_R_int, VTABLE_rhino_NativeArray_getMaxInstanceId_R_int, "()I", 4 },
	{ "setInstanceIdAttributes", (intptr_t) M_rhino_NativeArray_setInstanceIdAttributes_int_int, VTABLE_rhino_NativeArray_setInstanceIdAttributes_int_int, "(II)V", 4 },
	{ "findInstanceIdInfo", (intptr_t) M_rhino_NativeArray_findInstanceIdInfo_java_lang_String_R_int, VTABLE_rhino_NativeArray_findInstanceIdInfo_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "getInstanceIdName", (intptr_t) M_rhino_NativeArray_getInstanceIdName_int_R_java_lang_String, VTABLE_rhino_NativeArray_getInstanceIdName_int_R_java_lang_String, "(I)Ljava/lang/String;", 4 },
	{ "getInstanceIdValue", (intptr_t) M_rhino_NativeArray_getInstanceIdValue_int_R_java_lang_Object, VTABLE_rhino_NativeArray_getInstanceIdValue_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 4 },
	{ "setInstanceIdValue", (intptr_t) M_rhino_NativeArray_setInstanceIdValue_int_java_lang_Object, VTABLE_rhino_NativeArray_setInstanceIdValue_int_java_lang_Object, "(ILjava/lang/Object;)V", 4 },
	{ "fillConstructorProperties", (intptr_t) M_rhino_NativeArray_fillConstructorProperties_rhino_IdFunctionObject, VTABLE_rhino_NativeArray_fillConstructorProperties_rhino_IdFunctionObject, "(Lrhino/IdFunctionObject;)V", 4 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeArray_initPrototypeId_int, VTABLE_rhino_NativeArray_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeArray_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeArray_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object, "(ILrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "has", (intptr_t) M_rhino_NativeArray_has_int_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeArray_has_int_rhino_Scriptable_R_boolean, "(ILrhino/Scriptable;)Z", 1 },
	{ "toArrayIndex", (intptr_t) SM_rhino_NativeArray_toArrayIndex_java_lang_Object_R_long, 0, "(Ljava/lang/Object;)J", 10 },
	{ "toArrayIndex", (intptr_t) SM_rhino_NativeArray_toArrayIndex_java_lang_String_R_long, 0, "(Ljava/lang/String;)J", 10 },
	{ "toArrayIndex", (intptr_t) SM_rhino_NativeArray_toArrayIndex_double_R_long, 0, "(D)J", 10 },
	{ "toDenseIndex", (intptr_t) SM_rhino_NativeArray_toDenseIndex_java_lang_Object_R_int, 0, "(Ljava/lang/Object;)I", 10 },
	{ "put", (intptr_t) M_rhino_NativeArray_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeArray_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "ensureCapacity", (intptr_t) M_rhino_NativeArray_ensureCapacity_int_R_boolean, VTABLE_rhino_NativeArray_ensureCapacity_int_R_boolean, "(I)Z", 2 },
	{ "put", (intptr_t) M_rhino_NativeArray_put_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeArray_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "delete", (intptr_t) M_rhino_NativeArray_delete_int, VTABLE_rhino_NativeArray_delete_int, "(I)V", 1 },
	{ "getIds", (intptr_t) M_rhino_NativeArray_getIds_boolean_boolean_R_Array1_java_lang_Object, VTABLE_rhino_NativeArray_getIds_boolean_boolean_R_Array1_java_lang_Object, "(ZZ)[Ljava/lang/Object;", 1 },
	{ "getIndexIds", (intptr_t) M_rhino_NativeArray_getIndexIds_R_java_util_List, VTABLE_rhino_NativeArray_getIndexIds_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "getDefaultValue", (intptr_t) M_rhino_NativeArray_getDefaultValue_java_lang_Class_R_java_lang_Object, VTABLE_rhino_NativeArray_getDefaultValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "defaultIndexPropertyDescriptor", (intptr_t) M_rhino_NativeArray_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject, VTABLE_rhino_NativeArray_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject, "(Ljava/lang/Object;)Lrhino/ScriptableObject;", 2 },
	{ "getAttributes", (intptr_t) M_rhino_NativeArray_getAttributes_int_R_int, VTABLE_rhino_NativeArray_getAttributes_int_R_int, "(I)I", 1 },
	{ "getOwnPropertyDescriptor", (intptr_t) M_rhino_NativeArray_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject, VTABLE_rhino_NativeArray_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject, "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;", 4 },
	{ "defineOwnProperty", (intptr_t) M_rhino_NativeArray_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean, VTABLE_rhino_NativeArray_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean, "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V", 4 },
	{ "jsConstructor", (intptr_t) SM_rhino_NativeArray_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "callConstructorOrCreateArray", (intptr_t) SM_rhino_NativeArray_callConstructorOrCreateArray_rhino_Context_rhino_Scriptable_rhino_Scriptable_long_boolean_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;JZ)Lrhino/Scriptable;", 10 },
	{ "js_from", (intptr_t) SM_rhino_NativeArray_js_from_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "js_of", (intptr_t) SM_rhino_NativeArray_js_of_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "getLength", (intptr_t) M_rhino_NativeArray_getLength_R_long, VTABLE_rhino_NativeArray_getLength_R_long, "()J", 1 },
	{ "setDenseOnly", (intptr_t) M_rhino_NativeArray_setDenseOnly_boolean, VTABLE_rhino_NativeArray_setDenseOnly_boolean, "(Z)V", 0 },
	{ "setLength", (intptr_t) M_rhino_NativeArray_setLength_java_lang_Object, VTABLE_rhino_NativeArray_setLength_java_lang_Object, "(Ljava/lang/Object;)V", 2 },
	{ "getLengthProperty", (intptr_t) SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long, 0, "(Lrhino/Context;Lrhino/Scriptable;Z)J", 8 },
	{ "setLengthProperty", (intptr_t) SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;J)Ljava/lang/Object;", 10 },
	{ "deleteElem", (intptr_t) SM_rhino_NativeArray_deleteElem_rhino_Scriptable_long, 0, "(Lrhino/Scriptable;J)V", 10 },
	{ "getElem", (intptr_t) SM_rhino_NativeArray_getElem_rhino_Context_rhino_Scriptable_long_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;J)Ljava/lang/Object;", 10 },
	{ "getRawElem", (intptr_t) SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object, 0, "(Lrhino/Scriptable;J)Ljava/lang/Object;", 10 },
	{ "defineElem", (intptr_t) SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;JLjava/lang/Object;)V", 10 },
	{ "setElem", (intptr_t) SM_rhino_NativeArray_setElem_rhino_Context_rhino_Scriptable_long_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;JLjava/lang/Object;)V", 10 },
	{ "setRawElem", (intptr_t) SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;JLjava/lang/Object;)V", 10 },
	{ "toStringHelper", (intptr_t) SM_rhino_NativeArray_toStringHelper_rhino_Context_rhino_Scriptable_rhino_Scriptable_boolean_boolean_R_java_lang_String, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;ZZ)Ljava/lang/String;", 10 },
	{ "js_join", (intptr_t) SM_rhino_NativeArray_js_join_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_String, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/String;", 10 },
	{ "js_reverse", (intptr_t) SM_rhino_NativeArray_js_reverse_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 10 },
	{ "js_sort", (intptr_t) SM_rhino_NativeArray_js_sort_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 10 },
	{ "js_push", (intptr_t) SM_rhino_NativeArray_js_push_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "js_pop", (intptr_t) SM_rhino_NativeArray_js_pop_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "js_shift", (intptr_t) SM_rhino_NativeArray_js_shift_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "js_unshift", (intptr_t) SM_rhino_NativeArray_js_unshift_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "js_splice", (intptr_t) SM_rhino_NativeArray_js_splice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "isConcatSpreadable", (intptr_t) SM_rhino_NativeArray_isConcatSpreadable_rhino_Context_rhino_Scriptable_java_lang_Object_R_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Z", 10 },
	{ "concatSpreadArg", (intptr_t) SM_rhino_NativeArray_concatSpreadArg_rhino_Context_rhino_Scriptable_rhino_Scriptable_long_R_long, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;J)J", 10 },
	{ "doConcat", (intptr_t) SM_rhino_NativeArray_doConcat_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_Object_long_R_long, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;Ljava/lang/Object;J)J", 10 },
	{ "js_concat", (intptr_t) SM_rhino_NativeArray_js_concat_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 10 },
	{ "js_slice", (intptr_t) M_rhino_NativeArray_js_slice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_NativeArray_js_slice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 2 },
	{ "toSliceIndex", (intptr_t) SM_rhino_NativeArray_toSliceIndex_double_long_R_long, 0, "(DJ)J", 10 },
	{ "js_indexOf", (intptr_t) SM_rhino_NativeArray_js_indexOf_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "js_lastIndexOf", (intptr_t) SM_rhino_NativeArray_js_lastIndexOf_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "js_includes", (intptr_t) SM_rhino_NativeArray_js_includes_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Boolean;", 10 },
	{ "js_fill", (intptr_t) SM_rhino_NativeArray_js_fill_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "js_copyWithin", (intptr_t) SM_rhino_NativeArray_js_copyWithin_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "iterativeMethod", (intptr_t) SM_rhino_NativeArray_iterativeMethod_rhino_Context_rhino_IdFunctionObject_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/IdFunctionObject;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "reduceMethod", (intptr_t) SM_rhino_NativeArray_reduceMethod_rhino_Context_int_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;ILrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "js_isArray", (intptr_t) SM_rhino_NativeArray_js_isArray_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 10 },
	{ "contains", (intptr_t) M_rhino_NativeArray_contains_java_lang_Object_R_boolean, VTABLE_rhino_NativeArray_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toArray", (intptr_t) M_rhino_NativeArray_toArray_R_Array1_java_lang_Object, VTABLE_rhino_NativeArray_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_rhino_NativeArray_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_rhino_NativeArray_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "containsAll", (intptr_t) M_rhino_NativeArray_containsAll_java_util_Collection_R_boolean, VTABLE_rhino_NativeArray_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "size", (intptr_t) M_rhino_NativeArray_size_R_int, VTABLE_rhino_NativeArray_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_rhino_NativeArray_isEmpty_R_boolean, VTABLE_rhino_NativeArray_isEmpty_R_boolean, "()Z", 1 },
	{ "get", (intptr_t) M_rhino_NativeArray_get_long_R_java_lang_Object, VTABLE_rhino_NativeArray_get_long_R_java_lang_Object, "(J)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_NativeArray_get_int_R_java_lang_Object, VTABLE_rhino_NativeArray_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "indexOf", (intptr_t) M_rhino_NativeArray_indexOf_java_lang_Object_R_int, VTABLE_rhino_NativeArray_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "lastIndexOf", (intptr_t) M_rhino_NativeArray_lastIndexOf_java_lang_Object_R_int, VTABLE_rhino_NativeArray_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "iterator", (intptr_t) M_rhino_NativeArray_iterator_R_java_util_Iterator, VTABLE_rhino_NativeArray_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "listIterator", (intptr_t) M_rhino_NativeArray_listIterator_R_java_util_ListIterator, VTABLE_rhino_NativeArray_listIterator_R_java_util_ListIterator, "()Ljava/util/ListIterator;", 1 },
	{ "listIterator", (intptr_t) M_rhino_NativeArray_listIterator_int_R_java_util_ListIterator, VTABLE_rhino_NativeArray_listIterator_int_R_java_util_ListIterator, "(I)Ljava/util/ListIterator;", 1 },
	{ "add", (intptr_t) M_rhino_NativeArray_add_java_lang_Object_R_boolean, VTABLE_rhino_NativeArray_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_rhino_NativeArray_remove_java_lang_Object_R_boolean, VTABLE_rhino_NativeArray_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addAll", (intptr_t) M_rhino_NativeArray_addAll_java_util_Collection_R_boolean, VTABLE_rhino_NativeArray_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "removeAll", (intptr_t) M_rhino_NativeArray_removeAll_java_util_Collection_R_boolean, VTABLE_rhino_NativeArray_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "retainAll", (intptr_t) M_rhino_NativeArray_retainAll_java_util_Collection_R_boolean, VTABLE_rhino_NativeArray_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "clear", (intptr_t) M_rhino_NativeArray_clear, VTABLE_rhino_NativeArray_clear, "()V", 1 },
	{ "add", (intptr_t) M_rhino_NativeArray_add_int_java_lang_Object, VTABLE_rhino_NativeArray_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "addAll", (intptr_t) M_rhino_NativeArray_addAll_int_java_util_Collection_R_boolean, VTABLE_rhino_NativeArray_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 1 },
	{ "set", (intptr_t) M_rhino_NativeArray_set_int_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeArray_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_rhino_NativeArray_remove_int_R_java_lang_Object, VTABLE_rhino_NativeArray_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "subList", (intptr_t) M_rhino_NativeArray_subList_int_int_R_java_util_List, VTABLE_rhino_NativeArray_subList_int_int_R_java_util_List, "(II)Ljava/util/List;", 1 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeArray_findPrototypeId_rhino_Symbol_R_int, VTABLE_rhino_NativeArray_findPrototypeId_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeArray_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeArray_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "lambda$js_sort$0", (intptr_t) SM_rhino_NativeArray_lambda$js_sort$0_Array1_java_lang_Object_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_Object_java_lang_Object_R_int, 0, "([Ljava/lang/Object;Lrhino/Callable;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "access$000", (intptr_t) SM_rhino_NativeArray_access$000_R_java_util_Comparator, 0, "()Ljava/util/Comparator;", 4104 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeArray, 0, "()V", 8 },
};

Class class_rhino_NativeArray{
		.nativeName = (intptr_t) "rhino/NativeArray",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeArray),
		.classVtable = (intptr_t) vtable_rhino_NativeArray,
		.staticInitializer = (intptr_t) clinit_rhino_NativeArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 71,
		.nativeFields = (intptr_t) fields,
		.methodCount = 99,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 145,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeArray = registerClass(&class_rhino_NativeArray);

}
