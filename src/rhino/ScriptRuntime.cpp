#include "rhino/ScriptRuntime.h"
#include "rhino/NativeCall.h"
#include "rhino/SpecialRef.h"
#include "java/lang/Integer.h"
#include "rhino/Function.h"
#include "java/lang/StringBuilder.h"
#include "rhino/NativeArrayIterator.h"
#include "rhino/TokenStream.h"
#include "rhino/WrapFactory.h"
#include "rhino/v8dtoa/DoubleConversion.h"
#include "rhino/RefCallable.h"
#include "rhino/NativeArray.h"
#include "rhino/NativeFunction.h"
#include "rhino/NativeStringIterator.h"
#include "rhino/ScriptRuntime_IdEnumeration.h"
#include "rhino/NativeError.h"
#include "rhino/Callable.h"
#include "rhino/EvaluatorException.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/PrintStream.h"
#include "rhino/Ref.h"
#include "rhino/ConsString.h"
#include "rhino/NativeCollectionIterator.h"
#include "rhino/ObjToIntMap.h"
#include "rhino/DToA.h"
#include "rhino/NativeIterator.h"
#include "rhino/SymbolKey.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/lang/Throwable.h"
#include "rhino/NativeIterator_StopIteration.h"
#include "rhino/NativeWith.h"
#include "java/lang/Exception.h"
#include "rhino/Context.h"
#include "rhino/NativeGlobal.h"
#include "rhino/NativeJSON.h"
#include "rhino/NativeMap.h"
#include "rhino/NativeString.h"
#include "rhino/NativeDate.h"
#include "rhino/NativeSet.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/TopLevel_NativeErrors.h"
#include "rhino/ScriptRuntime_NoSuchMethodShim.h"
#include "java/lang/NumberFormatException.h"
#include "rhino/TopLevel.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "rhino/LazilyLoadedCtor.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"
#include "rhino/Symbol.h"
#include "rhino/SymbolScriptable.h"
#include "rhino/ImporterTopLevel.h"
#include "rhino/NativeScript.h"
#include "java/lang/Boolean.h"
#include "rhino/Scriptable.h"
#include "java/lang/Float.h"
#include "rhino/BaseFunction.h"
#include "rhino/Undefined.h"
#include "rhino/JavaScriptException.h"
#include "rhino/ScriptRuntime_StringIdOrIndex.h"
#include "rhino/NativeNumber.h"
#include "rhino/Kit.h"
#include "java/lang/Character.h"
#include "java/lang/String.h"
#include "rhino/ScriptRuntime_DefaultMessageProvider.h"
#include "rhino/ClassCache.h"
#include "rhino/InterpretedFunction.h"
#include "rhino/ContextFactory.h"
#include "rhino/Script.h"
#include "rhino/ErrorReporter.h"
#include "rhino/Evaluator.h"
#include "rhino/NativeBoolean.h"
#include "rhino/ScriptRuntime_1.h"
#include "rhino/v8dtoa/FastDtoa.h"
#include "java/lang/Math.h"
#include "rhino/NativeObject.h"
#include "rhino/NativeWeakMap.h"
#include "java/lang/Number.h"
#include "rhino/WrappedException.h"
#include "rhino/NativeSymbol.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/Wrapper.h"
#include "rhino/NativeMath.h"
#include "rhino/NativeWeakSet.h"
#include "rhino/ScriptRuntime_MessageProvider.h"
#include "java/lang/CharSequence.h"
#include "rhino/DefaultErrorReporter.h"
#include "rhino/RegExpProxy.h"
#include "rhino/RhinoException.h"
#include "rhino/ClassShutter.h"
#include "java/lang/Class.h"
#include "rhino/Arguments.h"

extern "C" {

jobject SF_rhino_ScriptRuntime_BooleanClass;
jobject SF_rhino_ScriptRuntime_ByteClass;
jobject SF_rhino_ScriptRuntime_CharacterClass;
jobject SF_rhino_ScriptRuntime_ClassClass;
jobject SF_rhino_ScriptRuntime_DoubleClass;
jobject SF_rhino_ScriptRuntime_FloatClass;
jobject SF_rhino_ScriptRuntime_IntegerClass;
jobject SF_rhino_ScriptRuntime_LongClass;
jobject SF_rhino_ScriptRuntime_NumberClass;
jobject SF_rhino_ScriptRuntime_ObjectClass;
jobject SF_rhino_ScriptRuntime_ShortClass;
jobject SF_rhino_ScriptRuntime_StringClass;
jobject SF_rhino_ScriptRuntime_DateClass;
jobject SF_rhino_ScriptRuntime_ContextClass;
jobject SF_rhino_ScriptRuntime_ContextFactoryClass;
jobject SF_rhino_ScriptRuntime_FunctionClass;
jobject SF_rhino_ScriptRuntime_ScriptableObjectClass;
jobject SF_rhino_ScriptRuntime_ScriptableClass;
jobject SF_rhino_ScriptRuntime_LIBRARY_SCOPE_KEY;
jdouble SF_rhino_ScriptRuntime_NaN;
jdouble SF_rhino_ScriptRuntime_negativeZero;
jobject SF_rhino_ScriptRuntime_NaNobj;
jobject SF_rhino_ScriptRuntime_DEFAULT_NS_TAG;
jint SF_rhino_ScriptRuntime_ENUMERATE_KEYS;
jint SF_rhino_ScriptRuntime_ENUMERATE_VALUES;
jint SF_rhino_ScriptRuntime_ENUMERATE_ARRAY;
jint SF_rhino_ScriptRuntime_ENUMERATE_KEYS_NO_ITERATOR;
jint SF_rhino_ScriptRuntime_ENUMERATE_VALUES_NO_ITERATOR;
jint SF_rhino_ScriptRuntime_ENUMERATE_ARRAY_NO_ITERATOR;
jint SF_rhino_ScriptRuntime_ENUMERATE_VALUES_IN_ORDER;
jobject SF_rhino_ScriptRuntime_messageProvider;
jobject SF_rhino_ScriptRuntime_emptyArgs;
jobject SF_rhino_ScriptRuntime_emptyStrings;

void mark_rhino_ScriptRuntime(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ScriptRuntime_BooleanClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_BooleanClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_BooleanClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_ByteClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_ByteClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_ByteClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_CharacterClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_CharacterClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_CharacterClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_ClassClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_ClassClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_ClassClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_DoubleClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_DoubleClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_DoubleClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_FloatClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_FloatClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_FloatClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_IntegerClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_IntegerClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_IntegerClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_LongClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_LongClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_LongClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_NumberClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_NumberClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_NumberClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_ObjectClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_ObjectClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_ObjectClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_ShortClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_ShortClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_ShortClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_StringClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_StringClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_StringClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_DateClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_DateClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_DateClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_ContextClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_ContextClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_ContextClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_ContextFactoryClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_ContextFactoryClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_ContextFactoryClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_FunctionClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_FunctionClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_FunctionClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_ScriptableObjectClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_ScriptableObjectClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_ScriptableObjectClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_ScriptableClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_ScriptableClass)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_ScriptableClass, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_LIBRARY_SCOPE_KEY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_LIBRARY_SCOPE_KEY)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_LIBRARY_SCOPE_KEY, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_NaNobj)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_NaNobj)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_NaNobj, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_DEFAULT_NS_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_DEFAULT_NS_TAG)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_DEFAULT_NS_TAG, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_messageProvider)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_messageProvider)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_messageProvider, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_emptyArgs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_emptyArgs)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_emptyArgs, mark, depth + 1);
		if (SF_rhino_ScriptRuntime_emptyStrings)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptRuntime_emptyStrings)->clazz)->markFunction)((jobject) SF_rhino_ScriptRuntime_emptyStrings, mark, depth + 1);
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
	auto self = (rhino_ScriptRuntime *) object;
}

void init_rhino_ScriptRuntime(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_typeErrorThrower_rhino_Context_R_rhino_BaseFunction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:typeErrorThrower", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_typeErrorThrower;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(29);
	clinit_rhino_ScriptRuntime$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptRuntime$1);
	init_rhino_ScriptRuntime$1(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_topCallScope;
	SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(41);
	((func_rhino_BaseFunction_preventExtensions) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_BaseFunction_preventExtensions])(ctx, (frame[1].o));
	LINE_NUMBER(42);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_typeErrorThrower = (jref) (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_typeErrorThrower;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isRhinoRuntimeType_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isRhinoRuntimeType", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o == sp[1].o) goto label_3;
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
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_BooleanClass;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	sp[1].o = frame[0].o;
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	sp[1].o = frame[0].o;
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
label_5:;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_initSafeStandardObjects_rhino_Context_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:initSafeStandardObjects", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(126);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(127);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_LIBRARY_SCOPE_KEY;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(130);
	clinit_rhino_ClassCache(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ClassCache);
	init_rhino_ClassCache(ctx, sp[0].o);
	jint temp0 = (jint)((func_rhino_ClassCache_associate_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ClassCache_associate_rhino_ScriptableObject_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(132);
	SM_rhino_BaseFunction_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(133);
	SM_rhino_NativeObject_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(135);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getClassPrototype_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Function"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(139);
	((func_rhino_Scriptable_setPrototype_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setPrototype_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(143);
	((func_rhino_ScriptableObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ScriptableObject_setPrototype_rhino_Scriptable])(ctx, (frame[1].o), (frame[3].o));
	}
label_10:;
	{
	LINE_NUMBER(146);
	SM_rhino_NativeError_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(147);
	SM_rhino_NativeGlobal_init_rhino_Context_rhino_Scriptable_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(149);
	SM_rhino_NativeArray_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_rhino_Context_getOptimizationLevel_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getOptimizationLevel_R_int])(ctx, (frame[0].o));
	if (temp0 <= 0) goto label_15;
	}
	{
	LINE_NUMBER(154);
	SM_rhino_NativeArray_setMaximumInitialCapacity_int(ctx, (jint(200000)));
	}
label_15:;
	{
	LINE_NUMBER(156);
	SM_rhino_NativeString_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(157);
	SM_rhino_NativeBoolean_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(158);
	SM_rhino_NativeNumber_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(159);
	SM_rhino_NativeDate_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(160);
	SM_rhino_NativeMath_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(161);
	SM_rhino_NativeJSON_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(163);
	SM_rhino_NativeWith_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(164);
	SM_rhino_NativeCall_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(165);
	SM_rhino_NativeScript_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(167);
	SM_rhino_NativeIterator_init_rhino_Context_rhino_ScriptableObject_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(169);
	SM_rhino_NativeArrayIterator_init_rhino_ScriptableObject_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(170);
	SM_rhino_NativeStringIterator_init_rhino_ScriptableObject_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(173);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"RegExp"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.regexp.NativeRegExp"_j))), (frame[2].i));
	LINE_NUMBER(175);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Continuation"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.NativeContinuation"_j))), (frame[2].i));
	LINE_NUMBER(178);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 < (180)) goto label_31;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = 14;
	LINE_NUMBER(179);
	jint temp1 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_33;
	}
label_31:;
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 < (200)) goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(181);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"ArrayBuffer"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeArrayBuffer"_j))), (frame[2].i));
	LINE_NUMBER(184);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Int8Array"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeInt8Array"_j))), (frame[2].i));
	LINE_NUMBER(187);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Uint8Array"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeUint8Array"_j))), (frame[2].i));
	LINE_NUMBER(190);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Uint8ClampedArray"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeUint8ClampedArray"_j))), (frame[2].i));
	LINE_NUMBER(193);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Int16Array"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeInt16Array"_j))), (frame[2].i));
	LINE_NUMBER(196);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Uint16Array"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeUint16Array"_j))), (frame[2].i));
	LINE_NUMBER(199);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Int32Array"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeInt32Array"_j))), (frame[2].i));
	LINE_NUMBER(202);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Uint32Array"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeUint32Array"_j))), (frame[2].i));
	LINE_NUMBER(205);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Float32Array"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeFloat32Array"_j))), (frame[2].i));
	LINE_NUMBER(208);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Float64Array"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeFloat64Array"_j))), (frame[2].i));
	LINE_NUMBER(211);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"DataView"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.typedarrays.NativeDataView"_j))), (frame[2].i));
	}
label_35:;
	{
	LINE_NUMBER(216);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 < (200)) goto label_46;
	}
	{
	LINE_NUMBER(217);
	SM_rhino_NativeSymbol_init_rhino_Context_rhino_Scriptable_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(218);
	SM_rhino_NativeCollectionIterator_init_rhino_ScriptableObject_java_lang_String_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Set Iterator"_j))), (frame[2].i));
	LINE_NUMBER(219);
	SM_rhino_NativeCollectionIterator_init_rhino_ScriptableObject_java_lang_String_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Map Iterator"_j))), (frame[2].i));
	LINE_NUMBER(220);
	SM_rhino_NativeMap_init_rhino_Context_rhino_Scriptable_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(221);
	SM_rhino_NativeSet_init_rhino_Context_rhino_Scriptable_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(222);
	SM_rhino_NativeWeakMap_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(223);
	SM_rhino_NativeWeakSet_init_rhino_Scriptable_boolean(ctx, (frame[1].o), (frame[2].i));
	}
label_46:;
	{
	LINE_NUMBER(226);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_TopLevel)) == 0) goto label_54;
	}
	{
	LINE_NUMBER(227);
	((func_rhino_TopLevel_cacheBuiltins_rhino_Scriptable_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_TopLevel, (frame[1].o))))->vtable)[VTABLE_rhino_TopLevel_cacheBuiltins_rhino_Scriptable_boolean])(ctx, (checkCast(ctx, &class_rhino_TopLevel, (frame[1].o))), (frame[1].o), (frame[2].i));
	}
label_54:;
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_initStandardObjects_rhino_Context_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:initStandardObjects", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_initSafeStandardObjects_rhino_Context_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(238);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"Packages"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.NativeJavaTopPackage"_j))), (frame[2].i));
	LINE_NUMBER(240);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"getClass"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.NativeJavaTopPackage"_j))), (frame[2].i));
	LINE_NUMBER(242);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"JavaAdapter"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.JavaAdapter"_j))), (frame[2].i));
	LINE_NUMBER(244);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"JavaImporter"_j))), (((jobject) createStringLiteral(ctx, u8"rhino.ImporterTopLevel"_j))), (frame[2].i));
	LINE_NUMBER(247);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getTopPackageNames_R_Array1_java_lang_String(ctx);
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_7;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(248);
	clinit_rhino_LazilyLoadedCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_LazilyLoadedCtor);
	init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, (frame[3].o), (frame[7].o), (((jobject) createStringLiteral(ctx, u8"rhino.NativeJavaTopPackage"_j))), (frame[2].i));
	LINE_NUMBER(247);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getTopPackageNames_R_Array1_java_lang_String(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getTopPackageNames", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	{
	LINE_NUMBER(257);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Dalvik"_j));
	sp[1].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.vm.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (7));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"java"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"javax"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"org"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"com"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"edu"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"net"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"android"_j)));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (6));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"java"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"javax"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"org"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"com"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"edu"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"net"_j)));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getLibraryScopeOrNull_rhino_Scriptable_R_rhino_ScriptableObject(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getLibraryScopeOrNull", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_LIBRARY_SCOPE_KEY;
	LINE_NUMBER(265);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopScopeValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_rhino_ScriptableObject, sp[0].o));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isJSLineTerminator_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isJSLineTerminator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(273);
	if (((frame[0].i) & (jint(57296))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(276);
	if ((frame[0].i) == (10)) goto label_3;
	}
	{
	if ((frame[0].i) == (13)) goto label_3;
	}
	{
	if ((frame[0].i) == (8232)) goto label_3;
	}
	{
	if ((frame[0].i) != (8233)) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isJSWhitespaceOrLineTerminator_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isJSWhitespaceOrLineTerminator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(280);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isStrWhiteSpaceChar_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSLineTerminator_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isStrWhiteSpaceChar_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isStrWhiteSpaceChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(299);
	switch((frame[0].i)) {
		case 9: goto label_1;
		case 10: goto label_1;
		case 11: goto label_1;
		case 12: goto label_1;
		case 13: goto label_1;
		case 32: goto label_1;
		case 160: goto label_1;
		case 8232: goto label_1;
		case 8233: goto label_1;
		case 65279: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)SM_java_lang_Character_getType_int_R_int(ctx, (frame[0].i));
	if (temp0 != (12)) goto label_3;
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

jobject SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:wrapBoolean", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(317);
	if ((frame[0].i) == 0) goto label_1;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_TRUE;
	goto label_2;
label_1:;
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_wrapInt_int_R_java_lang_Integer(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:wrapInt", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(jcontext ctx, jdouble param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:wrapNumber", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(325);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(326);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (frame[0].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toBoolean", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(338);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Boolean)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(339);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[0].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(340);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(342);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(343);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (checkCast(ctx, &class_java_lang_CharSequence, (frame[0].o)))))(ctx, (checkCast(ctx, &class_java_lang_CharSequence, (frame[0].o))));
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
	LINE_NUMBER(344);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(345);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	frame[1].d = temp0;
	LINE_NUMBER(346);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[1].d));
	if (temp1 != 0) goto label_12;
	}
	{
	if ((doubleCompare((frame[1].d), (jdouble(0)), -1)) == 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(348);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(349);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ScriptableObject)) == 0) goto label_16;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o));
	LINE_NUMBER(350);
	jint temp0 = (jint)((func_rhino_ScriptableObject_avoidObjectDetection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_avoidObjectDetection_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	jint temp0 = (jint)((func_rhino_Context_isVersionECMA1_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_isVersionECMA1_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return (jint(1));
	}
label_19:;
	{
	LINE_NUMBER(358);
	sp[0].o = checkCast(ctx, &class_rhino_Scriptable, (frame[0].o));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_BooleanClass;
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(359);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_0;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_0;
	}
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_errorWithClassName_java_lang_String_java_lang_Object_R_java_lang_RuntimeException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.primitive.expected"_j))), (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(363);
	SM_rhino_ScriptRuntime_warnAboutNonJSObject_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toNumber", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(375);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(376);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(377);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return (jdouble(0));
	}
label_3:;
	{
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_5:;
	{
	LINE_NUMBER(381);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(382);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_String_R_double(ctx, (checkCast(ctx, &class_java_lang_String, (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(383);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_String_R_double(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(385);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Boolean)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[0].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[0].o))));
	if (temp0 == 0) goto label_13;
	}
	INST_DCONST(1);
	goto label_14;
label_13:;
	INST_DCONST(0);
label_14:;
	popStackFrame(ctx);
	INST_DRETURN();
label_11:;
	{
	LINE_NUMBER(387);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Symbol)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.a.number"_j))));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(389);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = checkCast(ctx, &class_rhino_Scriptable, (frame[0].o));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(391);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_0;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_0;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_errorWithClassName_java_lang_String_java_lang_Object_R_java_lang_RuntimeException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.primitive.expected"_j))), (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(395);
	SM_rhino_ScriptRuntime_warnAboutNonJSObject_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toNumber", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(401);
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_1;
	}
	{
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i))));
	sp[0].d = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_2:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jdouble SM_rhino_ScriptRuntime_stringPrefixToNumber_java_lang_String_int_int_R_double(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:stringPrefixToNumber", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(412);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jdouble temp2 = (jdouble)SM_rhino_ScriptRuntime_stringToNumber_java_lang_String_int_int_int_boolean_R_double(ctx, sp[0].o, temp0, (temp1 - (jint(1))), (frame[2].i), (jint(1)));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_ScriptRuntime_stringToNumber_java_lang_String_int_int_int_R_double(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:stringToNumber", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(416);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_stringToNumber_java_lang_String_int_int_int_boolean_R_double(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_ScriptRuntime_stringToNumber_java_lang_String_int_int_int_boolean_R_double(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jbool param4) {
	jtype frame[30];
	auto stack = &frame[26];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:stringToNumber", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(423);
	frame[5].i = (57);
	LINE_NUMBER(424);
	frame[6].i = (97);
	LINE_NUMBER(425);
	frame[7].i = (65);
	LINE_NUMBER(426);
	if ((frame[3].i) >= (10)) goto label_8;
	}
	{
	LINE_NUMBER(427);
	frame[5].i = (jchar((((48) + (frame[3].i)) - (jint(1)))));
	}
label_8:;
	{
	LINE_NUMBER(429);
	if ((frame[3].i) <= (10)) goto label_10;
	}
	{
	LINE_NUMBER(430);
	frame[6].i = (jchar((((97) + (frame[3].i)) - (10))));
	LINE_NUMBER(431);
	frame[7].i = (jchar((((65) + (frame[3].i)) - (10))));
	}
label_10:;
	{
	LINE_NUMBER(434);
	frame[9].d = (jdouble(0));
	LINE_NUMBER(435);
	frame[8].i = (frame[1].i);
	}
label_14:;
	{
	if ((frame[8].i) > (frame[2].i)) goto label_15;
	}
	{
	LINE_NUMBER(436);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[8].i));
	frame[11].i = temp0;
	LINE_NUMBER(438);
	if ((48) > (frame[11].i)) goto label_18;
	}
	{
	if ((frame[11].i) > (frame[5].i)) goto label_18;
	}
	{
	LINE_NUMBER(439);
	frame[12].i = ((frame[11].i) - (48));
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(440);
	if ((97) > (frame[11].i)) goto label_22;
	}
	{
	if ((frame[11].i) >= (frame[6].i)) goto label_22;
	}
	{
	LINE_NUMBER(441);
	frame[12].i = (((frame[11].i) - (97)) + (10));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(442);
	if ((65) > (frame[11].i)) goto label_25;
	}
	{
	if ((frame[11].i) >= (frame[7].i)) goto label_25;
	}
	{
	LINE_NUMBER(443);
	frame[12].i = (((frame[11].i) - (65)) + (10));
	goto label_21;
	}
label_25:;
	{
	LINE_NUMBER(444);
	if ((frame[4].i) != 0) goto label_15;
	}
	{
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_21:;
	{
	LINE_NUMBER(448);
	frame[9].d = (((frame[9].d) * (jdouble((frame[3].i)))) + (jdouble((frame[12].i))));
	LINE_NUMBER(435);
	INST_IINC(8, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(450);
	if ((frame[1].i) != (frame[8].i)) goto label_30;
	}
	{
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_30:;
	{
	LINE_NUMBER(453);
	if ((doubleCompare((frame[9].d), (jdouble(9,007199e+15)), -1)) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(454);
	if ((frame[3].i) != (10)) goto label_34;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i), (frame[8].i));
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, sp[0].o);
	sp[0].d = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_DRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(462);
	frame[11].o = sp[0].o;
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_34:;
	{
	LINE_NUMBER(465);
	if ((frame[3].i) == (jint(2))) goto label_36;
	}
	{
	if ((frame[3].i) == (jint(4))) goto label_36;
	}
	{
	if ((frame[3].i) == (8)) goto label_36;
	}
	{
	if ((frame[3].i) == (16)) goto label_36;
	}
	{
	if ((frame[3].i) != (32)) goto label_32;
	}
label_36:;
	{
	LINE_NUMBER(477);
	frame[11].i = (jint(1));
	LINE_NUMBER(478);
	frame[12].i = (jint(0));
	LINE_NUMBER(480);
	frame[13].i = (jint(0));
	LINE_NUMBER(481);
	frame[14].i = (jint(1));
	LINE_NUMBER(482);
	frame[15].i = (jint(2));
	LINE_NUMBER(483);
	frame[16].i = (jint(3));
	LINE_NUMBER(484);
	frame[17].i = (jint(4));
	LINE_NUMBER(486);
	frame[18].i = (jint(0));
	LINE_NUMBER(487);
	frame[19].i = (53);
	LINE_NUMBER(488);
	frame[20].d = (jdouble(0));
	LINE_NUMBER(489);
	frame[22].i = (jint(0));
	LINE_NUMBER(491);
	frame[23].i = (jint(0));
	LINE_NUMBER(492);
	frame[24].i = (frame[1].i);
	}
label_49:;
	{
	LINE_NUMBER(495);
	if ((frame[11].i) != (jint(1))) goto label_50;
	}
	{
	LINE_NUMBER(496);
	if ((frame[24].i) != (frame[8].i)) goto label_52;
	}
	LINE_NUMBER(497);
	goto label_54;
label_52:;
	{
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	jint temp0 = frame[24].i;
	INST_IINC(24, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[12].i = temp1;
	LINE_NUMBER(499);
	if ((48) > (frame[12].i)) goto label_56;
	}
	{
	if ((frame[12].i) > (57)) goto label_56;
	}
	{
	LINE_NUMBER(500);
	INST_IINC(12, -48);
	goto label_58;
	}
label_56:;
	{
	LINE_NUMBER(501);
	if ((97) > (frame[12].i)) goto label_59;
	}
	{
	if ((frame[12].i) > (122)) goto label_59;
	}
	{
	LINE_NUMBER(502);
	INST_IINC(12, -87);
	goto label_58;
	}
label_59:;
	LINE_NUMBER(504);
	INST_IINC(12, -55);
label_58:;
	{
	LINE_NUMBER(505);
	frame[11].i = (frame[3].i);
	}
label_50:;
	{
	LINE_NUMBER(507);
	frame[11].i = ((frame[11].i) >> (jint(1)));
	LINE_NUMBER(508);
	if (((frame[12].i) & (frame[11].i)) == 0) goto label_62;
	}
	INST_ICONST(1);
	goto label_63;
label_62:;
	INST_ICONST(0);
label_63:;
	{
	sp -= 1;
	frame[25].i = sp[0].i;
	LINE_NUMBER(510);
	switch((frame[18].i)) {
		case 0: goto label_65;
		case 1: goto label_66;
		case 2: goto label_67;
		case 3: goto label_68;
		case 4: goto label_69;
		default: goto label_70;
	}
	}
label_65:;
	{
	LINE_NUMBER(512);
	if ((frame[25].i) == 0) goto label_70;
	}
	{
	LINE_NUMBER(513);
	INST_IINC(19, -1);
	LINE_NUMBER(514);
	frame[9].d = (jdouble(1));
	LINE_NUMBER(515);
	frame[18].i = (jint(1));
	goto label_70;
	}
label_66:;
	{
	LINE_NUMBER(519);
	frame[9].d = ((frame[9].d) * (jdouble(2.0)));
	LINE_NUMBER(520);
	if ((frame[25].i) == 0) goto label_75;
	}
	{
	LINE_NUMBER(521);
	frame[9].d = ((frame[9].d) + (jdouble(1)));
	}
label_75:;
	{
	LINE_NUMBER(522);
	INST_IINC(19, -1);
	LINE_NUMBER(523);
	if ((frame[19].i) != 0) goto label_70;
	}
	{
	LINE_NUMBER(524);
	frame[22].i = (frame[25].i);
	LINE_NUMBER(525);
	frame[18].i = (jint(2));
	goto label_70;
	}
label_67:;
	{
	LINE_NUMBER(529);
	frame[23].i = (frame[25].i);
	LINE_NUMBER(530);
	frame[20].d = (jdouble(2.0));
	LINE_NUMBER(531);
	frame[18].i = (jint(3));
	LINE_NUMBER(532);
	goto label_70;
	}
label_68:;
	{
	LINE_NUMBER(534);
	if ((frame[25].i) == 0) goto label_69;
	}
	{
	LINE_NUMBER(535);
	frame[18].i = (jint(4));
	}
label_69:;
	{
	LINE_NUMBER(539);
	frame[20].d = ((frame[20].d) * (jdouble(2.0)));
	}
label_70:;
	LINE_NUMBER(542);
	goto label_49;
label_54:;
	{
	LINE_NUMBER(543);
	switch((frame[18].i)) {
		case 0: goto label_84;
		case 1: goto label_85;
		case 2: goto label_85;
		case 3: goto label_86;
		case 4: goto label_87;
		default: goto label_32;
	}
	}
label_84:;
	{
	LINE_NUMBER(545);
	frame[9].d = (jdouble(0));
	LINE_NUMBER(546);
	goto label_32;
	}
label_85:;
	LINE_NUMBER(550);
	goto label_32;
label_86:;
	{
	LINE_NUMBER(554);
	if (((frame[23].i) & (frame[22].i)) == 0) goto label_89;
	}
	{
	LINE_NUMBER(555);
	frame[9].d = ((frame[9].d) + (jdouble(1)));
	}
label_89:;
	{
	LINE_NUMBER(556);
	frame[9].d = ((frame[9].d) * (frame[20].d));
	LINE_NUMBER(557);
	goto label_32;
	}
label_87:;
	{
	LINE_NUMBER(561);
	if ((frame[23].i) == 0) goto label_92;
	}
	{
	LINE_NUMBER(562);
	frame[9].d = ((frame[9].d) + (jdouble(1)));
	}
label_92:;
	{
	LINE_NUMBER(563);
	frame[9].d = ((frame[9].d) * (frame[20].d));
	}
label_32:;
	{
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return (frame[9].d);
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_ScriptRuntime_toNumber_java_lang_String_R_double(jcontext ctx, jobject param0) {
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toNumber", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(578);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(581);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(584);
	if ((frame[2].i) != (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return (jdouble(0));
	}
label_7:;
	{
	LINE_NUMBER(588);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(589);
	jint temp1 = (jint)SM_rhino_ScriptRuntime_isStrWhiteSpaceChar_int_R_boolean(ctx, (frame[3].i));
	if (temp1 != 0) goto label_10;
	}
	LINE_NUMBER(591);
	goto label_12;
label_10:;
	{
	LINE_NUMBER(593);
	INST_IINC(2, 1);
	goto label_6;
	}
label_12:;
	{
	LINE_NUMBER(597);
	frame[4].i = ((frame[1].i) - (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(599);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	frame[5].i = temp0;
	jint temp3 = (jint)SM_rhino_ScriptRuntime_isStrWhiteSpaceChar_int_R_boolean(ctx, temp0);
	if (temp3 == 0) goto label_15;
	}
	{
	LINE_NUMBER(600);
	INST_IINC(4, -1);
	goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(612);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[6].o = sp[0].o;
	LINE_NUMBER(613);
	if ((frame[6].o) == nullptr) goto label_18;
	}
	{
	sp[0].o = frame[6].o;
	LINE_NUMBER(614);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 >= (200)) goto label_20;
	}
label_18:;
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(617);
	if ((frame[3].i) != (48)) goto label_23;
	}
	{
	LINE_NUMBER(618);
	if (((frame[2].i) + (jint(2))) > (frame[4].i)) goto label_25;
	}
	{
	LINE_NUMBER(619);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	frame[8].i = temp0;
	LINE_NUMBER(620);
	frame[9].i = (jint(-1));
	LINE_NUMBER(621);
	if ((frame[8].i) == (120)) goto label_29;
	}
	{
	if ((frame[8].i) != (88)) goto label_30;
	}
label_29:;
	{
	LINE_NUMBER(622);
	frame[9].i = (16);
	goto label_31;
	}
label_30:;
	{
	LINE_NUMBER(623);
	if ((frame[7].i) != 0) goto label_32;
	}
	{
	if ((frame[8].i) == (111)) goto label_33;
	}
	{
	if ((frame[8].i) != (79)) goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(624);
	frame[9].i = (8);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(625);
	if ((frame[7].i) != 0) goto label_31;
	}
	{
	if ((frame[8].i) == (98)) goto label_34;
	}
	{
	if ((frame[8].i) != (66)) goto label_31;
	}
label_34:;
	{
	LINE_NUMBER(626);
	frame[9].i = (jint(2));
	}
label_31:;
	{
	LINE_NUMBER(628);
	if ((frame[9].i) == (jint(-1))) goto label_35;
	}
	{
	LINE_NUMBER(629);
	if ((frame[7].i) == 0) goto label_37;
	}
	{
	LINE_NUMBER(630);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_stringPrefixToNumber_java_lang_String_int_int_R_double(ctx, (frame[0].o), ((frame[2].i) + (jint(2))), (frame[9].i));
	popStackFrame(ctx);
	return temp0;
	}
label_37:;
	{
	LINE_NUMBER(632);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_stringToNumber_java_lang_String_int_int_int_R_double(ctx, (frame[0].o), ((frame[2].i) + (jint(2))), (frame[4].i), (frame[9].i));
	popStackFrame(ctx);
	return temp0;
	}
label_35:;
	LINE_NUMBER(634);
	goto label_25;
label_23:;
	{
	LINE_NUMBER(635);
	if ((frame[7].i) == 0) goto label_25;
	}
	{
	if ((frame[3].i) == (43)) goto label_39;
	}
	{
	if ((frame[3].i) != (45)) goto label_25;
	}
label_39:;
	{
	LINE_NUMBER(637);
	if (((frame[2].i) + (jint(3))) > (frame[4].i)) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	if (temp0 != (48)) goto label_25;
	}
	{
	LINE_NUMBER(638);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(2))));
	frame[8].i = temp0;
	LINE_NUMBER(639);
	if ((frame[8].i) == (120)) goto label_42;
	}
	{
	if ((frame[8].i) != (88)) goto label_25;
	}
label_42:;
	{
	LINE_NUMBER(640);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_stringPrefixToNumber_java_lang_String_int_int_R_double(ctx, (frame[0].o), ((frame[2].i) + (jint(3))), (16));
	frame[9].d = temp0;
	LINE_NUMBER(641);
	if ((frame[3].i) != (45)) goto label_44;
	}
	{
	jdouble temp0 = -(frame[9].d);
	sp[0].d = temp0;
	sp += 1;
	goto label_45;
	}
label_44:;
	INST_DLOAD(9);
label_45:;
	popStackFrame(ctx);
	INST_DRETURN();
label_25:;
	{
	LINE_NUMBER(646);
	if ((frame[5].i) != (121)) goto label_46;
	}
	{
	LINE_NUMBER(648);
	if ((frame[3].i) == (43)) goto label_48;
	}
	{
	if ((frame[3].i) != (45)) goto label_49;
	}
label_48:;
	LINE_NUMBER(649);
	INST_IINC(2, 1);
label_49:;
	{
	LINE_NUMBER(651);
	if (((frame[2].i) + (7)) != (frame[4].i)) goto label_50;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean])(ctx, (frame[0].o), (frame[2].i), (((jobject) createStringLiteral(ctx, u8"Infinity"_j))), (jint(0)), (8));
	if (temp0 == 0) goto label_50;
	}
	{
	LINE_NUMBER(652);
	if ((frame[3].i) != (45)) goto label_52;
	}
	(sp++)->d = jdouble(-std::numeric_limits<double>::infinity());
	goto label_53;
label_52:;
	(sp++)->d = jdouble(std::numeric_limits<double>::infinity());
label_53:;
	popStackFrame(ctx);
	INST_DRETURN();
label_50:;
	{
	LINE_NUMBER(656);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_46:;
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[2].i), ((frame[4].i) + (jint(1))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(663);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	frame[9].i = (temp0 - (jint(1)));
	}
label_55:;
	INST_ILOAD(9);
	if ((--sp)->i < 0) goto label_0;
	{
	LINE_NUMBER(664);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[8].o), (frame[9].i));
	frame[10].i = temp0;
	LINE_NUMBER(665);
	if ((48) > (frame[10].i)) goto label_58;
	}
	{
	if ((frame[10].i) <= (57)) goto label_59;
	}
label_58:;
	{
	if ((frame[10].i) == (46)) goto label_59;
	}
	{
	if ((frame[10].i) == (101)) goto label_59;
	}
	{
	if ((frame[10].i) == (69)) goto label_59;
	}
	{
	if ((frame[10].i) == (43)) goto label_59;
	}
	{
	if ((frame[10].i) != (45)) goto label_60;
	}
	LINE_NUMBER(668);
	goto label_59;
label_60:;
	{
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_59:;
	{
	LINE_NUMBER(663);
	INST_IINC(9, -1);
	goto label_55;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(672);
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[8].o));
	sp[0].d = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_DRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(673);
	frame[9].o = sp[0].o;
	LINE_NUMBER(674);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_padArguments_Array1_java_lang_Object_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:padArguments", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(685);
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_1;
	}
	{
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(690);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(691);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(690);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(694);
	if ((frame[2].i) >= (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(695);
	sp[0].o = frame[3].o;
	jint temp0 = frame[2].i;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(694);
	INST_IINC(2, 1);
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_escapeString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:escapeString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_escapeString_java_lang_String_char_R_java_lang_String(ctx, (frame[0].o), (34));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_escapeString_java_lang_String_char_R_java_lang_String(jcontext ctx, jobject param0, jchar param1) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:escapeString", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(710);
	if ((frame[1].i) == (34)) goto label_1;
	}
	{
	if ((frame[1].i) == (39)) goto label_1;
	}
	{
	if ((frame[1].i) == (96)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(711);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(713);
	frame[3].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	}
label_4:;
	{
	if ((frame[3].i) == (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(714);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(716);
	if ((32) > (frame[5].i)) goto label_8;
	}
	{
	if ((frame[5].i) > (126)) goto label_8;
	}
	{
	if ((frame[5].i) == (frame[1].i)) goto label_8;
	}
	{
	if ((frame[5].i) == (92)) goto label_8;
	}
	{
	LINE_NUMBER(719);
	if ((frame[2].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (jchar((frame[5].i))));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(724);
	if ((frame[2].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(725);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, ((frame[4].i) + (jint(3))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(726);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(727);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[2].o), (frame[3].i));
	}
label_12:;
	{
	LINE_NUMBER(730);
	frame[6].i = (jint(-1));
	LINE_NUMBER(731);
	switch((frame[5].i)) {
		case 8: goto label_17;
		case 9: goto label_18;
		case 10: goto label_19;
		case 11: goto label_20;
		case 12: goto label_21;
		case 13: goto label_22;
		case 32: goto label_23;
		case 92: goto label_24;
		default: goto label_25;
	}
	}
label_17:;
	{
	LINE_NUMBER(733);
	frame[6].i = (98);
	LINE_NUMBER(734);
	goto label_25;
	}
label_21:;
	{
	LINE_NUMBER(736);
	frame[6].i = (102);
	LINE_NUMBER(737);
	goto label_25;
	}
label_19:;
	{
	LINE_NUMBER(739);
	frame[6].i = (110);
	LINE_NUMBER(740);
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(742);
	frame[6].i = (114);
	LINE_NUMBER(743);
	goto label_25;
	}
label_18:;
	{
	LINE_NUMBER(745);
	frame[6].i = (116);
	LINE_NUMBER(746);
	goto label_25;
	}
label_20:;
	{
	LINE_NUMBER(748);
	frame[6].i = (118);
	LINE_NUMBER(749);
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(751);
	frame[6].i = (32);
	LINE_NUMBER(752);
	goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(754);
	frame[6].i = (92);
	}
label_25:;
	{
	LINE_NUMBER(757);
	if ((frame[6].i) < 0) goto label_33;
	}
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (92));
	LINE_NUMBER(760);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (jchar((frame[6].i))));
	goto label_10;
	}
label_33:;
	{
	LINE_NUMBER(761);
	if ((frame[5].i) != (frame[1].i)) goto label_36;
	}
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (92));
	LINE_NUMBER(763);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[1].i));
	goto label_10;
	}
label_36:;
	{
	LINE_NUMBER(766);
	if ((frame[5].i) >= (256)) goto label_39;
	}
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\x"_j))));
	LINE_NUMBER(769);
	frame[7].i = (jint(2));
	goto label_43;
	}
label_39:;
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\u"_j))));
	LINE_NUMBER(773);
	frame[7].i = (jint(4));
	}
label_43:;
	{
	LINE_NUMBER(776);
	frame[8].i = (((frame[7].i) - (jint(1))) * (jint(4)));
	}
label_45:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_10;
	{
	LINE_NUMBER(777);
	frame[9].i = ((15) & ((frame[5].i) >> (frame[8].i)));
	LINE_NUMBER(778);
	if ((frame[9].i) >= (10)) goto label_48;
	}
	{
	jint temp0 = (48) + (frame[9].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_49;
	}
label_48:;
	{
	jint temp0 = (87) + (frame[9].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_49:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(779);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (jchar((frame[10].i))));
	LINE_NUMBER(776);
	INST_IINC(8, -4);
	goto label_45;
	}
label_10:;
	{
	LINE_NUMBER(713);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(783);
	if ((frame[2].o) != nullptr) goto label_52;
	}
	INST_ALOAD(0);
	goto label_53;
label_52:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_53:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isValidIdentifierName_java_lang_String_rhino_Context_boolean_R_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isValidIdentifierName", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(787);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(788);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(789);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(790);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Character_isJavaIdentifierStart_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_4;
	}
	{
	LINE_NUMBER(791);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(792);
	frame[4].i = (jint(1));
	}
label_6:;
	{
	if ((frame[4].i) == (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(793);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	jint temp1 = (jint)SM_java_lang_Character_isJavaIdentifierPart_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_9;
	}
	{
	LINE_NUMBER(794);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(792);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(796);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)SM_rhino_TokenStream_isKeyword_java_lang_String_int_boolean_R_boolean(ctx, sp[0].o, temp0, (frame[2].i));
	if (temp1 != 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toCharSequence", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(800);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeString)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(801);
	sp[0].o = (jobject)((func_rhino_NativeString_toCharSequence_R_java_lang_CharSequence) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeString, (frame[0].o))))->vtable)[VTABLE_rhino_NativeString_toCharSequence_R_java_lang_CharSequence])(ctx, (checkCast(ctx, &class_rhino_NativeString, (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(803);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) == 0) goto label_3;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_lang_CharSequence, (frame[0].o));
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(813);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(814);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(816);
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;
	if (sp[0].o != sp[1].o) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(817);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"undefined"_j)));
	}
label_4:;
	{
	LINE_NUMBER(819);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(820);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, (frame[0].o)));
	}
label_5:;
	{
	LINE_NUMBER(822);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(825);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(828);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_numberToString_double_int_R_java_lang_String(ctx, temp0, (10));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(830);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Symbol)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(831);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.a.string"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(833);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(834);
	sp[0].o = checkCast(ctx, &class_rhino_Scriptable, (frame[0].o));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(835);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_0;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_0;
	}
	{
	LINE_NUMBER(836);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_errorWithClassName_java_lang_String_java_lang_Object_R_java_lang_RuntimeException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.primitive.expected"_j))), (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(840);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_defaultObjectToString_rhino_Scriptable_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:defaultObjectToString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(845);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[object Null]"_j)));
	}
label_1:;
	{
	LINE_NUMBER(847);
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(848);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[object Undefined]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(849);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[object "_j))));
	sp[1].o = (jobject)((func_rhino_Scriptable_getClassName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getClassName_R_java_lang_String, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (93));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(853);
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i))));
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"undefined"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toString_double_R_java_lang_String(jcontext ctx, jdouble param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_numberToString_double_int_R_java_lang_String(ctx, (frame[0].d), (10));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_numberToString_double_int_R_java_lang_String(jcontext ctx, jdouble param0, jint param1) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:numberToString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].d = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(864);
	if ((frame[2].i) < (jint(2))) goto label_1;
	}
	{
	if ((frame[2].i) <= (36)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(865);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.bad.radix"_j));
	jint temp0 = frame[2].i;
	LINE_NUMBER(866);
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, temp0);
	LINE_NUMBER(865);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(869);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"NaN"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(870);
	if ((doubleCompare((frame[0].d), (jdouble(std::numeric_limits<double>::infinity())), -1)) != 0) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Infinity"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(871);
	if ((doubleCompare((frame[0].d), (jdouble(-std::numeric_limits<double>::infinity())), -1)) != 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-Infinity"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(872);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) != 0) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"0"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(874);
	if ((frame[2].i) == (10)) goto label_9;
	}
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)SM_rhino_DToA_JS_dtobasestr_int_double_R_java_lang_String(ctx, (frame[2].i), (frame[0].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(879);
	sp[0].o = (jobject)SM_rhino_v8dtoa_FastDtoa_numberToString_double_R_java_lang_String(ctx, (frame[0].d));
	frame[3].o = sp[0].o;
	LINE_NUMBER(880);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_12:;
	{
	LINE_NUMBER(883);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(884);
	SM_rhino_DToA_JS_dtostr_java_lang_StringBuilder_int_int_double(ctx, (frame[4].o), (jint(0)), (jint(0)), (frame[0].d));
	LINE_NUMBER(885);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_uneval_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:uneval", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(889);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(890);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(892);
	sp[0].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"undefined"_j)));
	}
label_3:;
	{
	LINE_NUMBER(895);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_CharSequence)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_escapeString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(897);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (34));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (34));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(900);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_5:;
	{
	LINE_NUMBER(902);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Number)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(903);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))));
	frame[3].d = temp0;
	LINE_NUMBER(904);
	if ((doubleCompare((frame[3].d), (jdouble(0)), -1)) != 0) goto label_12;
	}
	{
	if ((doubleCompare(((jdouble(1)) / (frame[3].d)), (jdouble(0)), 1)) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(905);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"-0"_j)));
	}
label_12:;
	{
	LINE_NUMBER(907);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_double_R_java_lang_String(ctx, (frame[3].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(909);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Boolean)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(910);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(912);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Scriptable)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(913);
	frame[3].o = (checkCast(ctx, &class_rhino_Scriptable, (frame[2].o)));
	LINE_NUMBER(916);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"toSource"_j))));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(917);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"toSource"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(918);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Function)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(919);
	frame[5].o = (checkCast(ctx, &class_rhino_Function, (frame[4].o)));
	LINE_NUMBER(920);
	sp[0].o = frame[5].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[3].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(923);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(925);
	SM_rhino_ScriptRuntime_warnAboutNonJSObject_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(926);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_defaultObjectToSource_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:defaultObjectToSource", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(933);
	frame[4].i = (jint(1));
	LINE_NUMBER(934);
	frame[5].i = (jint(0));
	LINE_NUMBER(935);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap_int(ctx, sp[1].o, (31));
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_iterating = (jref) sp[1].o;
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(937);
	frame[4].i = (jint(0));
	LINE_NUMBER(938);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	frame[5].i = temp0;
	}
label_11:;
	{
	LINE_NUMBER(941);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (128));
	frame[6].o = sp[0].o;
	LINE_NUMBER(942);
	if ((frame[4].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(943);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"("_j))));
	}
label_14:;
	{
	LINE_NUMBER(945);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (123));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(950);
	if ((frame[5].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(951);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating;
	sp[0].o = (jobject)((func_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(952);
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(953);
	frame[8].i = (jint(0));
	}
label_19:;
	{
	if ((frame[8].i) >= (((jarray) nullCheck(ctx, (frame[7].o)))->length)) goto label_1;
	}
	{
	LINE_NUMBER(954);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i)));
	LINE_NUMBER(956);
	if ((isInstance(ctx, (frame[9].o), &class_java_lang_Integer)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(957);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[9].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[9].o))));
	frame[11].i = temp0;
	LINE_NUMBER(958);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[11].i), (frame[2].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(959);
	sp[0].o = frame[10].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_26;
	}
	LINE_NUMBER(960);
	goto label_28;
label_26:;
	{
	LINE_NUMBER(961);
	if ((frame[8].i) <= 0) goto label_29;
	}
	{
	LINE_NUMBER(962);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	}
label_29:;
	{
	LINE_NUMBER(963);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[11].i));
	LINE_NUMBER(964);
	goto label_32;
	}
label_22:;
	{
	LINE_NUMBER(965);
	frame[11].o = (checkCast(ctx, &class_java_lang_String, (frame[9].o)));
	LINE_NUMBER(966);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[11].o), (frame[2].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(967);
	sp[0].o = frame[10].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	LINE_NUMBER(968);
	goto label_28;
label_35:;
	{
	LINE_NUMBER(969);
	if ((frame[8].i) <= 0) goto label_37;
	}
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	}
label_37:;
	{
	LINE_NUMBER(971);
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[0].o));
	jint temp1 = (jint)SM_rhino_ScriptRuntime_isValidIdentifierName_java_lang_String_rhino_Context_boolean_R_boolean(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 == 0) goto label_39;
	}
	{
	LINE_NUMBER(972);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[11].o));
	goto label_32;
	}
label_39:;
	{
	LINE_NUMBER(974);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (39));
	LINE_NUMBER(975);
	sp[0].o = frame[6].o;
	sp[1].o = frame[11].o;
	jint temp0 = 39;
	LINE_NUMBER(976);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_escapeString_java_lang_String_char_R_java_lang_String(ctx, sp[1].o, temp0);
	LINE_NUMBER(975);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(977);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (39));
	}
label_32:;
	{
	LINE_NUMBER(980);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (58));
	LINE_NUMBER(981);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_uneval_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[10].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_28:;
	{
	LINE_NUMBER(953);
	INST_IINC(8, 1);
	goto label_19;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(985);
	if ((frame[4].i) == 0) goto label_46;
	}
	{
	LINE_NUMBER(986);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating = (jref) (jobject(nullptr));
	goto label_46;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(985);
	INST_ASTORE(12);
	popExceptionFrame(frameRef);
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_48;
	{
	LINE_NUMBER(986);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_iterating = (jref) (jobject(nullptr));
	}
label_48:;
	{
	LINE_NUMBER(988);
	throwException(ctx, (frame[12].o));	}
label_46:;
	{
	LINE_NUMBER(990);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (125));
	LINE_NUMBER(991);
	if ((frame[4].i) == 0) goto label_51;
	}
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (41));
	}
label_51:;
	{
	LINE_NUMBER(994);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toObject_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toObject", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(998);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(999);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o)));
	}
label_1:;
	{
	LINE_NUMBER(1001);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toObjectOrNull", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1009);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1010);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o)));
	}
label_1:;
	{
	LINE_NUMBER(1011);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(1012);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1014);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toObject", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1023);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1024);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.null.to.object"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1026);
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1027);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.undef.to.object"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1030);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1031);
	clinit_rhino_NativeSymbol(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeSymbol);
	init_rhino_NativeSymbol_rhino_NativeSymbol(ctx, sp[0].o, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[2].o))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1032);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Symbol;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1033);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_5:;
	{
	LINE_NUMBER(1035);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Scriptable)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1036);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, (frame[2].o)));
	}
label_9:;
	{
	LINE_NUMBER(1038);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_CharSequence)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1040);
	clinit_rhino_NativeString(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeString);
	init_rhino_NativeString_java_lang_CharSequence(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_CharSequence, (frame[2].o))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1041);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_String;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1042);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_11:;
	{
	LINE_NUMBER(1044);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Number)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1045);
	clinit_rhino_NativeNumber(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeNumber);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))));
	init_rhino_NativeNumber_double(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1046);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Number;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1047);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_15:;
	{
	LINE_NUMBER(1049);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Boolean)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(1050);
	clinit_rhino_NativeBoolean(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeBoolean);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))));
	init_rhino_NativeBoolean_boolean(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1051);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Boolean;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1052);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_19:;
	{
	LINE_NUMBER(1056);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1057);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Scriptable)) == 0) goto label_24;
	}
	{
	LINE_NUMBER(1058);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, (frame[3].o)));
	}
label_24:;
	{
	LINE_NUMBER(1059);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_errorWithClassName_java_lang_String_java_lang_Object_R_java_lang_RuntimeException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.invalid.type"_j))), (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_newObject_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:newObject", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1064);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1065);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getExistingCtor_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_Function(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1066);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1067);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((func_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o), (frame[0].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_newBuiltinObject_rhino_Context_rhino_Scriptable_rhino_TopLevel$Builtins_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:newBuiltinObject", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1075);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1076);
	sp[0].o = (jobject)SM_rhino_TopLevel_getBuiltinCtor_rhino_Context_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Function(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1077);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1078);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1080);
	sp[0].o = (jobject)((func_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o), (frame[0].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_newNativeError_rhino_Context_rhino_Scriptable_rhino_TopLevel$NativeErrors_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:newNativeError", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1085);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1086);
	sp[0].o = (jobject)SM_rhino_TopLevel_getNativeErrorCtor_rhino_Context_rhino_Scriptable_rhino_TopLevel$NativeErrors_R_rhino_Function(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1087);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1088);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1090);
	sp[0].o = (jobject)((func_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o), (frame[0].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toInteger", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1097);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[0].o));
	jdouble temp1 = (jdouble)SM_rhino_ScriptRuntime_toInteger_double_R_double(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_ScriptRuntime_toInteger_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toInteger", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(1103);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1104);
	popStackFrame(ctx);
	return (jdouble(0));
	}
label_1:;
	{
	LINE_NUMBER(1106);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1107);
	popStackFrame(ctx);
	return (frame[0].d);
	}
label_4:;
	{
	LINE_NUMBER(1109);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(1110);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[0].d));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(1112);
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (frame[0].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_ScriptRuntime_toInteger_Array1_java_lang_Object_int_R_double(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toInteger", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1116);
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_1;
	}
	{
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i))));
	sp[0].d = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_DCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jlong SM_rhino_ScriptRuntime_toLength_Array1_java_lang_Object_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toLength", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1120);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_Array1_java_lang_Object_int_R_double(ctx, (frame[0].o), (frame[1].i));
	frame[2].d = temp0;
	LINE_NUMBER(1121);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) > 0) goto label_2;
	}
	{
	LINE_NUMBER(1122);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_2:;
	{
	LINE_NUMBER(1124);
	jdouble temp0 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, (frame[2].d), (jdouble(9,007199e+15)));
	popStackFrame(ctx);
	return (jlong(temp0));
	}

	popStackFrame(ctx);
}

jint SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toInt32", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1132);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Integer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1133);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[0].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(1135);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[0].o));
	jint temp1 = (jint)SM_rhino_ScriptRuntime_toInt32_double_R_int(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint SM_rhino_ScriptRuntime_toInt32_Array1_java_lang_Object_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toInt32", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1139);
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_ScriptRuntime_toInt32_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toInt32", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(1143);
	jint temp0 = (jint)SM_rhino_v8dtoa_DoubleConversion_doubleToInt32_double_R_int(ctx, (frame[0].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_rhino_ScriptRuntime_toUint32_double_R_long(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toUint32", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(1151);
	jint temp0 = (jint)SM_rhino_v8dtoa_DoubleConversion_doubleToInt32_double_R_int(ctx, (frame[0].d));
	popStackFrame(ctx);
	return ((jlong(temp0)) & (jlong(4294967295ll)));
	}

	popStackFrame(ctx);
}

jlong SM_rhino_ScriptRuntime_toUint32_java_lang_Object_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toUint32", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1155);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[0].o));
	jlong temp1 = (jlong)SM_rhino_ScriptRuntime_toUint32_double_R_long(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jchar SM_rhino_ScriptRuntime_toUint16_java_lang_Object_R_char(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toUint16", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1162);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[0].o));
	frame[1].d = temp0;
	LINE_NUMBER(1163);
	jint temp1 = (jint)SM_rhino_v8dtoa_DoubleConversion_doubleToInt32_double_R_int(ctx, (frame[1].d));
	popStackFrame(ctx);
	return (jchar(temp1));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_searchDefaultNamespace_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:searchDefaultNamespace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1171);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_currentActivationCall;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1172);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1173);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1177);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1178);
	if ((frame[3].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1179);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"__default_namespace__"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1180);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(1181);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(1185);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"__default_namespace__"_j))), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1186);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	LINE_NUMBER(1187);
	goto label_8;
label_11:;
	{
	LINE_NUMBER(1189);
	frame[1].o = (frame[3].o);
	LINE_NUMBER(1190);
	goto label_2;
	}
label_8:;
	{
	LINE_NUMBER(1191);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getTopLevelProp_rhino_Scriptable_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getTopLevelProp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1195);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(1196);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getExistingCtor_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_Function(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getExistingCtor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1201);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1202);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Function)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1203);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Function, (frame[3].o)));
	}
label_2:;
	{
	LINE_NUMBER(1205);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(1206);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.ctor.not.found"_j))), (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1209);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.ctor"_j))), (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong SM_rhino_ScriptRuntime_indexFromString_java_lang_String_R_long(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:indexFromString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1220);
	frame[1].i = (10);
	LINE_NUMBER(1222);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(1223);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(1224);
	frame[3].i = (jint(0));
	LINE_NUMBER(1225);
	frame[4].i = (jint(0));
	LINE_NUMBER(1226);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	frame[5].i = temp0;
	LINE_NUMBER(1227);
	if ((frame[5].i) != (45)) goto label_8;
	}
	{
	LINE_NUMBER(1228);
	if ((frame[2].i) <= (jint(1))) goto label_8;
	}
	{
	LINE_NUMBER(1229);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(1)));
	frame[5].i = temp0;
	LINE_NUMBER(1230);
	if ((frame[5].i) != (48)) goto label_12;
	}
	(sp++)->l = jlong(-1ll);
	popStackFrame(ctx);
	INST_LRETURN();
label_12:;
	{
	LINE_NUMBER(1231);
	frame[3].i = (jint(1));
	LINE_NUMBER(1232);
	frame[4].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(1235);
	INST_IINC(5, -48);
	LINE_NUMBER(1236);
	if ((jint(0)) > (frame[5].i)) goto label_3;
	}
	{
	if ((frame[5].i) > (9)) goto label_3;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[4].i) == 0) goto label_15;
	}
	INST_BIPUSH(11);
	goto label_16;
label_15:;
	INST_BIPUSH(10);
label_16:;
	sp -= 2; if (sp[0].i > sp[1].i) goto label_3;
	{
	LINE_NUMBER(1241);
	frame[6].i = (-(frame[5].i));
	LINE_NUMBER(1242);
	frame[7].i = (jint(0));
	LINE_NUMBER(1243);
	INST_IINC(3, 1);
	LINE_NUMBER(1244);
	if ((frame[6].i) == 0) goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(1246);
	if ((frame[3].i) == (frame[2].i)) goto label_21;
	}
	{
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	jint temp2 = temp1 - (48);
	frame[5].i = temp2;
	if (temp0 > temp2) goto label_21;
	}
	{
	if ((frame[5].i) > (9)) goto label_21;
	}
	{
	LINE_NUMBER(1247);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(1248);
	frame[6].i = (((10) * (frame[6].i)) - (frame[5].i));
	LINE_NUMBER(1249);
	INST_IINC(3, 1);
	goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(1254);
	if ((frame[3].i) != (frame[2].i)) goto label_3;
	}
	{
	if ((frame[7].i) > (jint(-214748364))) goto label_26;
	}
	{
	if ((frame[7].i) != (jint(-214748364))) goto label_3;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[4].i) == 0) goto label_27;
	}
	INST_BIPUSH(8);
	goto label_28;
label_27:;
	INST_BIPUSH(7);
label_28:;
	sp -= 2; if (sp[0].i > sp[1].i) goto label_3;
label_26:;
	{
	LINE_NUMBER(1259);
	jlong temp0 = jlong(4294967295ll);
	sp[0].l = temp0;
	sp += 1;
	if ((frame[4].i) == 0) goto label_29;
	}
	INST_ILOAD(6);
	goto label_30;
label_29:;
	INST_ILOAD(6);
	INST_INEG();
label_30:;
	{
	sp -= 2;
	popStackFrame(ctx);
	return (sp[0].l & (jlong(sp[1].i)));
	}
label_3:;
	{
	LINE_NUMBER(1263);
	popStackFrame(ctx);
	return (jlong(-1ll));
	}

	popStackFrame(ctx);
}

jlong SM_rhino_ScriptRuntime_testUint32String_java_lang_String_R_long(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:testUint32String", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1273);
	frame[1].i = (10);
	LINE_NUMBER(1275);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(1276);
	if ((jint(1)) > (frame[2].i)) goto label_3;
	}
	{
	if ((frame[2].i) > (10)) goto label_3;
	}
	{
	LINE_NUMBER(1277);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	frame[3].i = temp0;
	LINE_NUMBER(1278);
	INST_IINC(3, -48);
	LINE_NUMBER(1279);
	if ((frame[3].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1281);
	if ((frame[2].i) != (jint(1))) goto label_9;
	}
	INST_LCONST(0);
	goto label_10;
label_9:;
	(sp++)->l = jlong(-1ll);
label_10:;
	popStackFrame(ctx);
	INST_LRETURN();
label_7:;
	{
	LINE_NUMBER(1283);
	if ((jint(1)) > (frame[3].i)) goto label_3;
	}
	{
	if ((frame[3].i) > (9)) goto label_3;
	}
	{
	LINE_NUMBER(1284);
	frame[4].l = (jlong((frame[3].i)));
	LINE_NUMBER(1285);
	frame[6].i = (jint(1));
	}
label_13:;
	{
	if ((frame[6].i) == (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(1286);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[6].i));
	frame[3].i = (temp0 - (48));
	LINE_NUMBER(1287);
	if ((jint(0)) > (frame[3].i)) goto label_17;
	}
	{
	if ((frame[3].i) <= (9)) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(1288);
	popStackFrame(ctx);
	return (jlong(-1ll));
	}
label_18:;
	{
	LINE_NUMBER(1290);
	frame[4].l = (((jlong(10ll)) * (frame[4].l)) + (jlong((frame[3].i))));
	LINE_NUMBER(1285);
	INST_IINC(6, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1293);
	if ((longCompare((bit_cast<jlong>(bit_cast<uint64_t>((frame[4].l)) >> (32))), (jlong(0)))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1294);
	popStackFrame(ctx);
	return (frame[4].l);
	}
label_3:;
	{
	LINE_NUMBER(1298);
	popStackFrame(ctx);
	return (jlong(-1ll));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getIndexObject_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getIndexObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1306);
	jlong temp0 = (jlong)SM_rhino_ScriptRuntime_indexFromString_java_lang_String_R_long(ctx, (frame[0].o));
	frame[1].l = temp0;
	LINE_NUMBER(1307);
	if ((longCompare((frame[1].l), (jlong(0)))) < 0) goto label_2;
	}
	{
	LINE_NUMBER(1308);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint((frame[1].l))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1310);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getIndexObject_double_R_java_lang_Object(jcontext ctx, jdouble param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getIndexObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(1318);
	frame[2].i = (jint((frame[0].d)));
	LINE_NUMBER(1319);
	if ((doubleCompare((jdouble((frame[2].i))), (frame[0].d), -1)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1320);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1322);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_double_R_java_lang_String(ctx, (frame[0].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toStringIdOrIndex", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1352);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1353);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	frame[2].d = temp0;
	LINE_NUMBER(1354);
	frame[4].i = (jint((frame[2].d)));
	LINE_NUMBER(1355);
	if ((doubleCompare((jdouble((frame[4].i))), (frame[2].d), -1)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1356);
	clinit_rhino_ScriptRuntime$StringIdOrIndex(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptRuntime$StringIdOrIndex);
	init_rhino_ScriptRuntime$StringIdOrIndex_int(ctx, sp[0].o, (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1358);
	clinit_rhino_ScriptRuntime$StringIdOrIndex(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptRuntime$StringIdOrIndex);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	init_rhino_ScriptRuntime$StringIdOrIndex_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1361);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1362);
	frame[2].o = (checkCast(ctx, &class_java_lang_String, (frame[1].o)));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(1364);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1366);
	jlong temp0 = (jlong)SM_rhino_ScriptRuntime_indexFromString_java_lang_String_R_long(ctx, (frame[2].o));
	frame[3].l = temp0;
	LINE_NUMBER(1367);
	if ((longCompare((frame[3].l), (jlong(0)))) < 0) goto label_12;
	}
	{
	LINE_NUMBER(1368);
	clinit_rhino_ScriptRuntime$StringIdOrIndex(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptRuntime$StringIdOrIndex);
	init_rhino_ScriptRuntime$StringIdOrIndex_int(ctx, sp[0].o, (jint((frame[3].l))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(1370);
	clinit_rhino_ScriptRuntime$StringIdOrIndex(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptRuntime$StringIdOrIndex);
	init_rhino_ScriptRuntime$StringIdOrIndex_java_lang_String(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getObjectElem_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getObjectElem", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1377);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o), (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1378);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1379);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefReadError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1381);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getObjectElem", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1389);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1390);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_rhino_Symbol_R_java_lang_Object(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_Symbol, (frame[1].o))));
	frame[3].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1392);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[2].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1393);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_stringId;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1394);
	frame[5].i = ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_index);
	LINE_NUMBER(1395);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, (frame[0].o), (frame[5].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1396);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(1397);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_stringId;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1401);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(1402);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[3].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1405);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getObjectProp_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getObjectProp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1414);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o), (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1415);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1416);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefReadError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1418);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectProp_rhino_Scriptable_java_lang_String_rhino_Context_R_java_lang_Object(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getObjectProp_rhino_Scriptable_java_lang_String_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getObjectProp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1424);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1425);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(1426);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[2].o), (11));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1427);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.ref.undefined.prop"_j))), (frame[1].o));
	SM_rhino_Context_reportWarning_java_lang_String(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(1430);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1433);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getObjectPropNoWarn_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getObjectPropNoWarn", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1438);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o), (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1439);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1440);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefReadError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1442);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[4].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1443);
	sp[0].o = frame[5].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(1444);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1446);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getObjectIndex_java_lang_Object_double_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jdouble param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getObjectIndex", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].d = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1453);
	sp[0].o = frame[0].o;
	jdouble temp0 = frame[1].d;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectIndex_java_lang_Object_double_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getObjectIndex_java_lang_Object_double_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jdouble param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getObjectIndex", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].d = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1461);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[3].o), (frame[0].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1462);
	if ((frame[5].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1463);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_double_R_java_lang_String(ctx, (frame[1].d));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefReadError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1466);
	frame[6].i = (jint((frame[1].d)));
	LINE_NUMBER(1467);
	if ((doubleCompare((jdouble((frame[6].i))), (frame[1].d), -1)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1468);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectIndex_rhino_Scriptable_int_rhino_Context_R_java_lang_Object(ctx, (frame[5].o), (frame[6].i), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1470);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_double_R_java_lang_String(ctx, (frame[1].d));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1471);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectProp_rhino_Scriptable_java_lang_String_rhino_Context_R_java_lang_Object(ctx, (frame[5].o), (frame[7].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getObjectIndex_rhino_Scriptable_int_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getObjectIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1475);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1476);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(1477);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1480);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_setObjectElem_java_lang_Object_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setObjectElem", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(1488);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[3].o), (frame[0].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1489);
	if ((frame[5].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1490);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefWriteError_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1492);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_setObjectElem_rhino_Scriptable_java_lang_Object_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, (frame[5].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_setObjectElem_rhino_Scriptable_java_lang_Object_java_lang_Object_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setObjectElem", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1497);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1498);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_rhino_Symbol_java_lang_Object(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_Symbol, (frame[1].o))), (frame[2].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1500);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[3].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1501);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_stringId;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1502);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_int_java_lang_Object(ctx, (frame[0].o), ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_index), (frame[2].o));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(1504);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_stringId;
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
label_3:;
	{
	LINE_NUMBER(1508);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_setObjectProp_java_lang_Object_java_lang_String_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setObjectProp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(1517);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) != 0) goto label_1;
	}
	{
	sp[0].o = frame[3].o;
	LINE_NUMBER(1518);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[3].o;
	LINE_NUMBER(1519);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 < (180)) goto label_1;
	}
	{
	LINE_NUMBER(1520);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefWriteError_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1523);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[3].o), (frame[0].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1524);
	if ((frame[5].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1525);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefWriteError_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1528);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_setObjectProp_rhino_Scriptable_java_lang_String_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, (frame[5].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_setObjectProp_rhino_Scriptable_java_lang_String_java_lang_Object_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setObjectProp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1533);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(1534);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_setObjectIndex_java_lang_Object_double_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jdouble param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setObjectIndex", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].d = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1544);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[4].o), (frame[0].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1545);
	if ((frame[6].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1546);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_double_R_java_lang_String(ctx, (frame[1].d));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefWriteError_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1549);
	frame[7].i = (jint((frame[1].d)));
	LINE_NUMBER(1550);
	if ((doubleCompare((jdouble((frame[7].i))), (frame[1].d), -1)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1551);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_setObjectIndex_rhino_Scriptable_int_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, (frame[6].o), (frame[7].i), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1553);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_double_R_java_lang_String(ctx, (frame[1].d));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1554);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_setObjectProp_rhino_Scriptable_java_lang_String_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, (frame[6].o), (frame[8].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_setObjectIndex_rhino_Scriptable_int_java_lang_Object_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setObjectIndex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1559);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(1560);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_deleteObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:deleteObjectElem", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1565);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1566);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureSymbolScriptable_java_lang_Object_R_rhino_SymbolScriptable(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1567);
	frame[4].o = (checkCast(ctx, &class_rhino_Symbol, (frame[1].o)));
	LINE_NUMBER(1568);
	((func_rhino_SymbolScriptable_delete_rhino_Symbol) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_delete_rhino_Symbol, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(1569);
	jint temp0 = (jint)((func_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o), (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1571);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[2].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1572);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[3].o)))->F_stringId;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1573);
	((func_rhino_Scriptable_delete_int) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_int, (frame[0].o)))(ctx, (frame[0].o), ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[3].o)))->F_index));
	LINE_NUMBER(1574);
	jint temp0 = (jint)((func_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean, (frame[0].o)))(ctx, (frame[0].o), ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[3].o)))->F_index), (frame[0].o));
	if (temp0 != 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(1576);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[3].o)))->F_stringId;
	((func_rhino_Scriptable_delete_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1577);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[3].o)))->F_stringId;
	jint temp0 = (jint)((func_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[0].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_hasObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:hasObjectElem", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1584);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1585);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_rhino_Symbol_R_boolean(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_Symbol, (frame[1].o))));
	frame[3].i = temp0;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1587);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[2].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_stringId;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1589);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_int_R_boolean(ctx, (frame[0].o), ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_index));
	frame[3].i = temp0;
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(1591);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_stringId;
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp0;
	}
label_4:;
	{
	LINE_NUMBER(1595);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_refGet_rhino_Ref_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:refGet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1599);
	sp[0].o = (jobject)((func_rhino_Ref_get_rhino_Context_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Ref_get_rhino_Context_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_refSet_rhino_Ref_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:refSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1604);
	sp[0].o = (jobject)((func_rhino_Ref_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Ref_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_refDel_rhino_Ref_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:refDel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1608);
	jint temp0 = (jint)((func_rhino_Ref_delete_rhino_Context_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Ref_delete_rhino_Context_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isSpecialProperty_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isSpecialProperty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1612);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"__proto__"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"__parent__"_j))));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_specialRef_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Ref(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:specialRef", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1617);
	sp[0].o = (jobject)SM_rhino_SpecialRef_createSpecial_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_String_R_rhino_Ref(ctx, (frame[2].o), (frame[3].o), (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_delete_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_boolean_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:delete", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1632);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o), (frame[0].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1633);
	if ((frame[5].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1634);
	if ((frame[4].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1635);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1637);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefDeleteError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1639);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_deleteObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_boolean(ctx, (frame[5].o), (frame[1].o), (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(1640);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_delete_java_lang_Object_java_lang_Object_rhino_Context_boolean_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:delete", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1655);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_delete_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_boolean_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_name_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:name", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1662);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1663);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1664);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_topScopeName_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1665);
	sp[0].o = frame[4].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(1666);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFoundError_rhino_Scriptable_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[1].o), (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1668);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
	{
	LINE_NUMBER(1671);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_nameOrFunction_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_String_boolean_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_nameOrFunction_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_String_boolean_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:nameOrFunction", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1678);
	frame[6].o = (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(1681);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeWith)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1682);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[1].o)))(ctx, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1684);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[7].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1685);
	sp[0].o = frame[5].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(1687);
	frame[6].o = (frame[7].o);
	LINE_NUMBER(1688);
	goto label_9;
	}
label_6:;
	LINE_NUMBER(1690);
	goto label_10;
label_2:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeCall)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1693);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1694);
	sp[0].o = frame[5].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(1695);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1698);
	sp[0].o = frame[2].o;
	LINE_NUMBER(1699);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(1706);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1707);
	sp[0].o = frame[5].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(1708);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(1709);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1712);
	frame[1].o = (frame[2].o);
	LINE_NUMBER(1713);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1714);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1715);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_topScopeName_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1716);
	sp[0].o = frame[5].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	LINE_NUMBER(1717);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFoundError_rhino_Scriptable_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[1].o), (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(1720);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(1721);
	goto label_9;
	}
label_9:;
	{
	LINE_NUMBER(1725);
	if ((frame[4].i) == 0) goto label_27;
	}
	{
	LINE_NUMBER(1726);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Callable)) != 0) goto label_29;
	}
	{
	LINE_NUMBER(1727);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[5].o), (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(1729);
	SM_rhino_ScriptRuntime_storeScriptable_rhino_Context_rhino_Scriptable(ctx, (frame[0].o), (frame[6].o));
	}
label_27:;
	{
	LINE_NUMBER(1732);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_topScopeName_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:topScopeName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1737);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_useDynamicScope) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1738);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_topCallScope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_checkDynamicScope_rhino_Scriptable_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1740);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_bind_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:bind", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1758);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1759);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1761);
	if ((frame[4].o) == nullptr) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1763);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeWith)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1764);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1765);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (frame[5].o), (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1766);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_8:;
	{
	LINE_NUMBER(1768);
	frame[1].o = (frame[4].o);
	LINE_NUMBER(1769);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1770);
	if ((frame[4].o) != nullptr) goto label_12;
	}
	LINE_NUMBER(1771);
	goto label_3;
label_12:;
	LINE_NUMBER(1773);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(1775);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(1776);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_14:;
	{
	LINE_NUMBER(1778);
	frame[1].o = (frame[4].o);
	LINE_NUMBER(1779);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1780);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	LINE_NUMBER(1781);
	goto label_3;
label_3:;
	{
	LINE_NUMBER(1786);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_useDynamicScope) == 0) goto label_19;
	}
	{
	LINE_NUMBER(1787);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_topCallScope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_checkDynamicScope_rhino_Scriptable_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(1789);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(1790);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_21:;
	{
	LINE_NUMBER(1794);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_setName_rhino_Scriptable_java_lang_Object_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setName", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(1799);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1802);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1807);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[2].o), (11));
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[2].o;
	jint temp0 = 8;
	LINE_NUMBER(1808);
	jint temp1 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1809);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.assn.create.strict"_j));
	sp[1].o = frame[4].o;
	LINE_NUMBER(1810);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1809);
	SM_rhino_Context_reportWarning_java_lang_String(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(1813);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[3].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(1814);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_useDynamicScope) == 0) goto label_10;
	}
	{
	LINE_NUMBER(1815);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_topCallScope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_checkDynamicScope_rhino_Scriptable_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o, (frame[0].o));
	frame[0].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1817);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[4].o), (frame[0].o), (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(1819);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_strictSetName_rhino_Scriptable_java_lang_Object_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:strictSetName", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(1824);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1832);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	LINE_NUMBER(1833);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(1836);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Assignment to undefined \""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\" in strict mode"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1837);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"ReferenceError"_j))), (frame[5].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_setConst_rhino_Scriptable_java_lang_Object_rhino_Context_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setConst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1841);
	SM_rhino_ScriptableObject_putConstProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[0].o), (frame[3].o), (frame[1].o));
	LINE_NUMBER(1842);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toIterator_rhino_Context_rhino_Scriptable_rhino_Scriptable_boolean_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toIterator", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1876);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"__iterator__"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1878);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"__iterator__"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1880);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Callable)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1881);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.invalid.iterator"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1883);
	frame[5].o = (checkCast(ctx, &class_rhino_Callable, (frame[4].o)));
	LINE_NUMBER(1884);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if ((frame[3].i) == 0) goto label_7;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_TRUE;
	goto label_8;
label_7:;
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
label_8:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1886);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), (frame[1].o), (frame[2].o), (frame[6].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1887);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Scriptable)) != 0) goto label_11;
	}
	{
	LINE_NUMBER(1888);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.iterator.primitive"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(1890);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, (frame[4].o)));
	}
label_1:;
	{
	LINE_NUMBER(1892);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_enumInit_java_lang_Object_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:enumInit", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1905);
	clinit_rhino_ScriptRuntime$IdEnumeration(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptRuntime$IdEnumeration);
	init_rhino_ScriptRuntime$IdEnumeration_rhino_ScriptRuntime$1(ctx, sp[0].o, (jobject(nullptr)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1906);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK(sp[0].o))->F_obj = (jref) sp[1].o;
	LINE_NUMBER(1908);
	if ((frame[3].i) != (6)) goto label_3;
	}
	{
	LINE_NUMBER(1909);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[4].o)))->F_enumType = (frame[3].i);
	LINE_NUMBER(1910);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[4].o)))->F_iterator = (jref) (jobject(nullptr));
	LINE_NUMBER(1911);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_enumInitInOrder_rhino_Context_rhino_ScriptRuntime$IdEnumeration_R_java_lang_Object(ctx, (frame[1].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1913);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[4].o)))->F_obj;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1916);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_7:;
	{
	LINE_NUMBER(1918);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[4].o)))->F_enumType = (frame[3].i);
	LINE_NUMBER(1919);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[4].o)))->F_iterator = (jref) (jobject(nullptr));
	LINE_NUMBER(1920);
	if ((frame[3].i) == (jint(3))) goto label_11;
	}
	{
	if ((frame[3].i) == (jint(4))) goto label_11;
	}
	{
	if ((frame[3].i) == (jint(5))) goto label_11;
	}
	{
	LINE_NUMBER(1923);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[4].o)))->F_obj;
	sp[2].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, sp[2].o))(ctx, sp[2].o);
	sp[3].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[4].o)))->F_obj;
	sp += 4;
	if ((frame[3].i) != 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	POP_N(4); // Pop method args
	sp->o = (jobject)SM_rhino_ScriptRuntime_toIterator_rhino_Context_rhino_Scriptable_rhino_Scriptable_boolean_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i);
	sp++;
	sp -= 2;
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK(sp[0].o))->F_iterator = (jref) sp[1].o;
label_11:;
	{
	LINE_NUMBER(1926);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[4].o)))->F_iterator;
	if (sp[0].o != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(1929);
	SM_rhino_ScriptRuntime_enumChangeObject_rhino_ScriptRuntime$IdEnumeration(ctx, (frame[4].o));
	}
label_15:;
	{
	LINE_NUMBER(1932);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_enumInitInOrder_rhino_Context_rhino_ScriptRuntime$IdEnumeration_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:enumInitInOrder", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1936);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	if ((isInstance(ctx, sp[0].o, &class_rhino_SymbolScriptable)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_rhino_Symbol_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1937);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.not.iterable"_j));
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1940);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_rhino_Symbol_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1941);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Callable)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1942);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.not.iterable"_j));
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1944);
	frame[3].o = (checkCast(ctx, &class_rhino_Callable, (frame[2].o)));
	LINE_NUMBER(1945);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1946);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1947);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1948);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_Scriptable)) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1949);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.not.iterable"_j));
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(1951);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_iterator = (jref) (checkCast(ctx, &class_rhino_Scriptable, (frame[6].o)));
	LINE_NUMBER(1952);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_setEnumNumbers_java_lang_Object_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setEnumNumbers", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1956);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((checkCast(ctx, &class_rhino_ScriptRuntime$IdEnumeration, (frame[0].o)))))->F_enumNumbers = (frame[1].i);
	LINE_NUMBER(1957);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_enumNext_java_lang_Object_R_java_lang_Boolean(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:enumNext", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1960);
	frame[1].o = (checkCast(ctx, &class_rhino_ScriptRuntime$IdEnumeration, (frame[0].o)));
	LINE_NUMBER(1961);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_iterator;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1962);
	if (((jint)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_enumType) != (6)) goto label_8;
	}
	{
	LINE_NUMBER(1963);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_enumNextInOrder_rhino_ScriptRuntime$IdEnumeration_R_java_lang_Boolean(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1965);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_iterator;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1966);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Callable)) != 0) goto label_11;
	}
	{
	LINE_NUMBER(1967);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(1968);
	frame[3].o = (checkCast(ctx, &class_rhino_Callable, (frame[2].o)));
	LINE_NUMBER(1969);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_JavaScriptException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1971);
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_iterator;
	sp[3].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, sp[3].o))(ctx, sp[3].o);
	sp[4].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_iterator;
	clinit_rhino_ScriptRuntime(ctx);
	sp[5].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[1].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK(sp[0].o))->F_currentId = (jref) sp[1].o;
	LINE_NUMBER(1973);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1974);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1975);
	sp[0].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, (frame[5].o));
	if ((isInstance(ctx, sp[0].o, &class_rhino_NativeIterator$StopIteration)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1976);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(1978);
	throwException(ctx, (frame[5].o));	}
label_6:;
	{
	LINE_NUMBER(1982);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	if (sp[0].o != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1983);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(1985);
	jint temp0 = (jint)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_index;
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_ids;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_20;
	}
	{
	LINE_NUMBER(1986);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	sp[1].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, sp[1].o))(ctx, sp[1].o);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK(sp[0].o))->F_obj = (jref) sp[1].o;
	LINE_NUMBER(1987);
	SM_rhino_ScriptRuntime_enumChangeObject_rhino_ScriptRuntime$IdEnumeration(ctx, (frame[1].o));
	LINE_NUMBER(1988);
	goto label_6;
	}
label_20:;
	{
	LINE_NUMBER(1990);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_ids;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK(sp[1].o))->F_index;
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK(sp[1].o))->F_index = (temp0 + (jint(1)));
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(1991);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_used;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_used;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_25;
	}
	LINE_NUMBER(1992);
	goto label_6;
label_25:;
	{
	LINE_NUMBER(1994);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Symbol)) == 0) goto label_27;
	}
	LINE_NUMBER(1995);
	goto label_6;
label_27:;
	{
	LINE_NUMBER(1996);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_String)) == 0) goto label_29;
	}
	{
	LINE_NUMBER(1997);
	frame[3].o = (checkCast(ctx, &class_java_lang_String, (frame[2].o)));
	LINE_NUMBER(1998);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	jint temp0 = (jint)((func_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_32;
	}
	LINE_NUMBER(1999);
	goto label_6;
label_32:;
	{
	LINE_NUMBER(2000);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_currentId = (jref) (frame[3].o);
	LINE_NUMBER(2001);
	goto label_35;
	}
label_29:;
	{
	LINE_NUMBER(2002);
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))));
	frame[3].i = temp0;
	LINE_NUMBER(2003);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_obj;
	jint temp2 = (jint)((func_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, temp1, sp[1].o);
	if (temp2 != 0) goto label_37;
	}
	LINE_NUMBER(2004);
	goto label_6;
label_37:;
	{
	LINE_NUMBER(2005);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[1].o)))->F_enumNumbers) == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[3].i));
	sp += 1;
	goto label_40;
	}
label_39:;
	{
	jint temp0 = frame[3].i;
	LINE_NUMBER(2006);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, temp0);
	sp += 1;
	}
label_40:;
	sp -= 2;
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK(sp[0].o))->F_currentId = (jref) sp[1].o;
label_35:;
	{
	LINE_NUMBER(2008);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_enumNextInOrder_rhino_ScriptRuntime$IdEnumeration_R_java_lang_Boolean(jcontext ctx, jobject param0) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:enumNextInOrder", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2013);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_iterator;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2014);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Callable)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2015);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_iterator;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2017);
	frame[2].o = (checkCast(ctx, &class_rhino_Callable, (frame[1].o)));
	LINE_NUMBER(2018);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2019);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_iterator;
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2020);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_iterator;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2021);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[3].o), (frame[4].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2022);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"done"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2023);
	sp[0].o = frame[7].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[7].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(2024);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(2026);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK(sp[0].o))->F_currentId = (jref) sp[1].o;
	LINE_NUMBER(2027);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_enumId_java_lang_Object_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:enumId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2031);
	frame[2].o = (checkCast(ctx, &class_rhino_ScriptRuntime$IdEnumeration, (frame[0].o)));
	LINE_NUMBER(2032);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_iterator;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2033);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_currentId;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2035);
	switch(((jint)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_enumType)) {
		case 0: goto label_4;
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		default: goto label_7;
	}
	}
label_4:;
	{
	LINE_NUMBER(2038);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_currentId;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2041);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_enumValue_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2044);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_currentId;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_enumValue_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2045);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_obj;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[1].o);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(2047);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_enumValue_java_lang_Object_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:enumValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2052);
	frame[2].o = (checkCast(ctx, &class_rhino_ScriptRuntime$IdEnumeration, (frame[0].o)));
	LINE_NUMBER(2056);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_currentId;
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2057);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_obj;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureSymbolScriptable_java_lang_Object_R_rhino_SymbolScriptable(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2058);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_currentId;
	sp[1].o = checkCast(ctx, &class_rhino_Symbol, sp[1].o);
	sp[2].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_obj;
	sp[0].o = (jobject)((func_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2059);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(2060);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_currentId;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2061);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_stringId;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2062);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_obj;
	jint temp0 = (jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_index;
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_obj;
	sp[0].o = (jobject)((func_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	frame[3].o = sp[0].o;
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(2064);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_obj;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_stringId;
	sp[2].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[2].o)))->F_obj;
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2068);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_enumChangeObject_rhino_ScriptRuntime$IdEnumeration(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:enumChangeObject", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2072);
	frame[1].o = (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(2073);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_obj;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2074);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_obj;
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2075);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == 0) goto label_5;
	}
	LINE_NUMBER(2076);
	goto label_2;
label_5:;
	{
	LINE_NUMBER(2078);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_obj;
	sp[1].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, sp[1].o))(ctx, sp[1].o);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK(sp[0].o))->F_obj = (jref) sp[1].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2080);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_obj;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_ids;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(2081);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_ids;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2082);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(2083);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_used;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2084);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap_int(ctx, sp[1].o, (frame[3].i));
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK(sp[0].o))->F_used = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(2086);
	frame[4].i = (jint(0));
	}
label_13:;
	{
	if ((frame[4].i) == (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(2087);
	sp[0].o = (jobject)((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_used;
	sp[0].o = (jobject)((func_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(2086);
	INST_IINC(4, 1);
	goto label_13;
	}
label_7:;
	{
	LINE_NUMBER(2090);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_ids = (jref) (frame[1].o);
	LINE_NUMBER(2091);
	((rhino_ScriptRuntime$IdEnumeration *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(2092);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getNameFunctionAndThis_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getNameFunctionAndThis", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2104);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2105);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2106);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_topScopeName_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o), (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2107);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Callable)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(2108);
	sp[0].o = frame[4].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(2109);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFoundError_rhino_Scriptable_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[2].o), (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(2111);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[4].o), (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(2114);
	frame[5].o = (frame[2].o);
	LINE_NUMBER(2115);
	SM_rhino_ScriptRuntime_storeScriptable_rhino_Context_rhino_Scriptable(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(2116);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Callable, (frame[4].o)));
	}
label_2:;
	{
	LINE_NUMBER(2120);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_nameOrFunction_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_String_boolean_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Callable, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getElemFunctionAndThis_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_rhino_Callable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getElemFunctionAndThis", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2135);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2136);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o), (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2137);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2138);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefCallError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(2140);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_rhino_Symbol_R_java_lang_Object(ctx, (frame[4].o), (checkCast(ctx, &class_rhino_Symbol, (frame[1].o))));
	frame[5].o = sp[0].o;
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(2143);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[2].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2144);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[6].o)))->F_stringId;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(2145);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[6].o)))->F_stringId;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getPropFunctionAndThis_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(2148);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o), (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2149);
	if ((frame[4].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(2150);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefCallError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(2153);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, (frame[4].o), ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[6].o)))->F_index));
	frame[5].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(2156);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Callable)) != 0) goto label_14;
	}
	{
	LINE_NUMBER(2157);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[5].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(2160);
	SM_rhino_ScriptRuntime_storeScriptable_rhino_Context_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(2161);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Callable, (frame[5].o)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getPropFunctionAndThis_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getPropFunctionAndThis", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2174);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o), (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2175);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getPropFunctionAndThisHelper_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getPropFunctionAndThisHelper_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getPropFunctionAndThisHelper", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2180);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2181);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefCallError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2184);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2185);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Callable)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(2186);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"__noSuchMethod__"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2187);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Callable)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2188);
	clinit_rhino_ScriptRuntime$NoSuchMethodShim(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptRuntime$NoSuchMethodShim);
	init_rhino_ScriptRuntime$NoSuchMethodShim_rhino_Callable_java_lang_String(ctx, sp[0].o, (checkCast(ctx, &class_rhino_Callable, (frame[5].o))), (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2191);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Callable)) != 0) goto label_8;
	}
	{
	LINE_NUMBER(2192);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[3].o), (frame[4].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(2195);
	SM_rhino_ScriptRuntime_storeScriptable_rhino_Context_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(2196);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Callable, (frame[4].o)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getValueFunctionAndThis_java_lang_Object_rhino_Context_R_rhino_Callable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getValueFunctionAndThis", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2207);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Callable)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2208);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2211);
	frame[2].o = (checkCast(ctx, &class_rhino_Callable, (frame[0].o)));
	LINE_NUMBER(2212);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(2213);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Scriptable)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2214);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (checkCast(ctx, &class_rhino_Scriptable, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[2].o))));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2216);
	if ((frame[3].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(2217);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_topCallScope;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(2218);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_topCallScope;
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(2220);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[3].o)))(ctx, (frame[3].o));
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(2221);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_NativeWith)) == 0) goto label_12;
	}
	goto label_10;
label_12:;
	{
	LINE_NUMBER(2224);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_NativeCall)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(2226);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(2229);
	SM_rhino_ScriptRuntime_storeScriptable_rhino_Context_rhino_Scriptable(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(2230);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_callIterator_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:callIterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2239);
	sp[0].o = frame[0].o;
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	LINE_NUMBER(2240);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getElemFunctionAndThis_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2241);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2242);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[4].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isIteratorDone_rhino_Context_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isIteratorDone", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2250);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2251);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2253);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectProp_rhino_Scriptable_java_lang_String_rhino_Context_R_java_lang_Object(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o))), (((jobject) createStringLiteral(ctx, u8"done"_j))), (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2254);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_callRef_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_rhino_Context_R_rhino_Ref(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:callRef", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2268);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_RefCallable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2269);
	frame[4].o = (checkCast(ctx, &class_rhino_RefCallable, (frame[0].o)));
	LINE_NUMBER(2270);
	sp[0].o = (jobject)((func_rhino_RefCallable_refCall_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Ref) resolveInterfaceMethod(ctx, &class_rhino_RefCallable, INDEX_rhino_RefCallable_refCall_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Ref, (frame[4].o)))(ctx, (frame[4].o), (frame[3].o), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2271);
	if ((frame[5].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(2272);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[4].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".refCall() returned null"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(2274);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_1:;
	{
	LINE_NUMBER(2277);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.no.ref.from.function"_j));
	sp[1].o = frame[0].o;
	LINE_NUMBER(2278);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	LINE_NUMBER(2277);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2279);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"ReferenceError"_j))), (frame[4].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_newObject_java_lang_Object_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:newObject", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2289);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Function)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2290);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2292);
	frame[4].o = (checkCast(ctx, &class_rhino_Function, (frame[0].o)));
	LINE_NUMBER(2293);
	sp[0].o = (jobject)((func_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_callSpecial_rhino_Context_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_rhino_Scriptable_rhino_Scriptable_int_java_lang_String_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jint param6, jobject param7, jint param8) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:callSpecial", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	frame[7].o = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(2301);
	if ((frame[6].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(2302);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o));
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)SM_rhino_NativeGlobal_isEvalFunction_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2303);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_evalSpecial_rhino_Context_rhino_Scriptable_java_lang_Object_Array1_java_lang_Object_java_lang_String_int_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o), (frame[5].o), (frame[3].o), (frame[7].o), (frame[8].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2306);
	if ((frame[6].i) != (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(2307);
	jint temp0 = (jint)SM_rhino_NativeWith_isWithFunction_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2308);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.only.from.new"_j))), (((jobject) createStringLiteral(ctx, u8"With"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(2312);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2315);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o), (frame[4].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_newSpecial_rhino_Context_java_lang_Object_Array1_java_lang_Object_rhino_Scriptable_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:newSpecial", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2321);
	if ((frame[4].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(2322);
	jint temp0 = (jint)SM_rhino_NativeGlobal_isEvalFunction_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2323);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.ctor"_j))), (((jobject) createStringLiteral(ctx, u8"eval"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2325);
	if ((frame[4].i) != (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(2326);
	jint temp0 = (jint)SM_rhino_NativeWith_isWithFunction_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2327);
	sp[0].o = (jobject)SM_rhino_NativeWith_newWithSpecial_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2330);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2333);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_newObject_java_lang_Object_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(ctx, (frame[1].o), (frame[0].o), (frame[3].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_applyOrCall_boolean_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jbool param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:applyOrCall", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(2344);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(2345);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getCallable_rhino_Scriptable_R_rhino_Callable(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2347);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(2348);
	if ((frame[5].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2349);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[1].o), (15));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(2350);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), (frame[2].o));
	frame[7].o = sp[0].o;
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(2352);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;
	goto label_9;
label_8:;
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), (frame[2].o));
	sp += 1;
	}
label_9:;
	INST_ASTORE(7);
label_4:;
	{
	LINE_NUMBER(2355);
	if ((frame[7].o) != nullptr) goto label_10;
	}
	{
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[1].o), (15));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(2356);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[7].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(2360);
	if ((frame[0].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(2362);
	if ((frame[5].i) > (jint(1))) goto label_14;
	}
	clinit_rhino_ScriptRuntime(ctx);
	(sp++)->o = SF_rhino_ScriptRuntime_emptyArgs;
	goto label_15;
label_14:;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)));
	LINE_NUMBER(2363);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getApplyArguments_rhino_Context_java_lang_Object_R_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_15:;
	INST_ASTORE(8);
	goto label_18;
label_12:;
	{
	LINE_NUMBER(2366);
	if ((frame[5].i) > (jint(1))) goto label_19;
	}
	{
	LINE_NUMBER(2367);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	frame[8].o = sp[0].o;
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(2369);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[5].i) - (jint(1))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2370);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (jint(1)), (frame[8].o), (jint(0)), ((frame[5].i) - (jint(1))));
	}
label_18:;
	{
	LINE_NUMBER(2374);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[1].o), (frame[2].o), (frame[7].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isArrayLike_rhino_Scriptable_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isArrayLike", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2381);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeArray)) != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Arguments)) != 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"length"_j));
	LINE_NUMBER(2384);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(2381);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getApplyArguments_rhino_Context_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getApplyArguments", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2389);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2390);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2391);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isArrayLike_rhino_Scriptable_R_boolean(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2392);
	sp[0].o = (jobject)((func_rhino_Context_getElements_rhino_Scriptable_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getElements_rhino_Scriptable_R_Array1_java_lang_Object])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2393);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ScriptableObject)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2394);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2396);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.arg.isnt.array"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getCallable_rhino_Scriptable_R_rhino_Callable(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getCallable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2402);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Callable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2403);
	frame[1].o = (checkCast(ctx, &class_rhino_Callable, (frame[0].o)));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(2405);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_FunctionClass;
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2406);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Callable)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(2407);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[2].o), (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(2409);
	frame[1].o = (checkCast(ctx, &class_rhino_Callable, (frame[2].o)));
	}
label_4:;
	{
	LINE_NUMBER(2411);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_evalSpecial_rhino_Context_rhino_Scriptable_java_lang_Object_Array1_java_lang_Object_java_lang_String_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:evalSpecial", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(2422);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) >= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(2423);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2424);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))));
	LINE_NUMBER(2425);
	if ((isInstance(ctx, (frame[6].o), &class_java_lang_CharSequence)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(2426);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[0].o), (11));
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = 9;
	LINE_NUMBER(2427);
	jint temp1 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(2428);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.eval.nonstring.strict"_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(2430);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.eval.nonstring"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2431);
	SM_rhino_Context_reportWarning_java_lang_String(ctx, (frame[7].o));
	LINE_NUMBER(2432);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_4:;
	{
	LINE_NUMBER(2434);
	if ((frame[4].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2435);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2436);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[7].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2437);
	if ((frame[4].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(2438);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0))));
	goto label_11;
	}
label_15:;
	{
	LINE_NUMBER(2440);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_11:;
	{
	LINE_NUMBER(2443);
	jint temp0 = jint(1);
	sp[0].o = frame[4].o;
	jint temp1 = frame[5].i;
	LINE_NUMBER(2444);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_makeUrlForGeneratedScript_boolean_java_lang_String_int_R_java_lang_String(ctx, temp0, sp[0].o, temp1);
	frame[7].o = sp[0].o;
	LINE_NUMBER(2447);
	sp[0].o = (jobject)((func_rhino_Context_getErrorReporter_R_rhino_ErrorReporter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getErrorReporter_R_rhino_ErrorReporter])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_DefaultErrorReporter_forEval_rhino_ErrorReporter_R_rhino_ErrorReporter(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(2449);
	sp[0].o = (jobject)SM_rhino_Context_createInterpreter_R_rhino_Evaluator(ctx);
	frame[9].o = sp[0].o;
	LINE_NUMBER(2450);
	if ((frame[9].o) != nullptr) goto label_21;
	}
	{
	LINE_NUMBER(2451);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Interpreter not present"_j))), (frame[4].o), (frame[5].i));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(2457);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script])(ctx, sp[0].o, sp[1].o, (frame[9].o), (frame[8].o), (frame[7].o), (jint(1)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2459);
	((func_rhino_Evaluator_setEvalScriptFlag_rhino_Script) resolveInterfaceMethod(ctx, &class_rhino_Evaluator, INDEX_rhino_Evaluator_setEvalScriptFlag_rhino_Script, (frame[9].o)))(ctx, (frame[9].o), (frame[10].o));
	LINE_NUMBER(2460);
	frame[11].o = (checkCast(ctx, &class_rhino_Callable, (frame[10].o)));
	LINE_NUMBER(2461);
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = checkCast(ctx, &class_rhino_Scriptable, (frame[2].o));
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:typeof", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2468);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2469);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"object"_j)));
	}
label_1:;
	{
	LINE_NUMBER(2470);
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(2471);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"undefined"_j)));
	}
label_3:;
	{
	LINE_NUMBER(2472);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ScriptableObject)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2473);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getTypeOf_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o))))->vtable)[VTABLE_rhino_ScriptableObject_getTypeOf_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2474);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(2475);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Callable)) == 0) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"function"_j));
	goto label_10;
label_9:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"object"_j));
label_10:;
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(2476);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2477);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"string"_j)));
	}
label_11:;
	{
	LINE_NUMBER(2478);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(2479);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"number"_j)));
	}
label_13:;
	{
	LINE_NUMBER(2480);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Boolean)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(2481);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"boolean"_j)));
	}
label_15:;
	{
	LINE_NUMBER(2482);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_errorWithClassName_java_lang_String_java_lang_Object_R_java_lang_RuntimeException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.invalid.type"_j))), (frame[0].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_typeofName_rhino_Scriptable_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:typeofName", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2489);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2490);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_bind_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, (frame[2].o), (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2491);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2492);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"undefined"_j)));
	}
label_3:;
	{
	LINE_NUMBER(2493);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectProp_rhino_Scriptable_java_lang_String_rhino_Context_R_java_lang_Object(ctx, (frame[3].o), (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isObject_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2497);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2498);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2500);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2501);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2503);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ScriptableObject)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2504);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getTypeOf_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o))))->vtable)[VTABLE_rhino_ScriptableObject_getTypeOf_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2505);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"object"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"object"_j))), (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"function"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"function"_j))), (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
label_8:;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(2507);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2508);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Callable)) != 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(2510);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_add_java_lang_Object_java_lang_Object_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2526);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2527);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	sp[0].o = checkCast(ctx, &class_java_lang_Number, (frame[1].o));
	LINE_NUMBER(2528);
	jdouble temp1 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, sp[0].o);
	jdouble temp2 = temp0 + temp1;
	LINE_NUMBER(2527);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2530);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Symbol)) != 0) goto label_5;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Symbol)) == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(2531);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.a.number"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(2533);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(2534);
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, (checkCast(ctx, &class_rhino_Scriptable, (frame[0].o)))))(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[0].o))), (jobject(nullptr)));
	frame[0].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(2535);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(2536);
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o))), (jobject(nullptr)));
	frame[1].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(2537);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) != 0) goto label_11;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_CharSequence)) != 0) goto label_11;
	}
	{
	LINE_NUMBER(2538);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_13;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(2539);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	jdouble temp1 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (temp0 + temp1));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(2541);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[0].o));
	jdouble temp1 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (temp0 + temp1));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(2543);
	clinit_rhino_ConsString(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ConsString);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, (frame[1].o));
	init_rhino_ConsString_java_lang_CharSequence_java_lang_CharSequence(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_add_java_lang_CharSequence_java_lang_Object_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2547);
	clinit_rhino_ConsString(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ConsString);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, (frame[1].o));
	init_rhino_ConsString_java_lang_CharSequence_java_lang_CharSequence(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_add_java_lang_Object_java_lang_CharSequence_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2551);
	clinit_rhino_ConsString(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ConsString);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, (frame[0].o));
	init_rhino_ConsString_java_lang_CharSequence_java_lang_CharSequence(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_nameIncrDecr_rhino_Scriptable_java_lang_String_rhino_Context_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:nameIncrDecr", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
label_0:;
	{
	LINE_NUMBER(2561);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_useDynamicScope) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2562);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_topCallScope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_checkDynamicScope_rhino_Scriptable_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o, (frame[0].o));
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2564);
	frame[4].o = (frame[0].o);
	}
label_3:;
	{
	LINE_NUMBER(2566);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o), (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2567);
	sp[0].o = frame[5].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	LINE_NUMBER(2568);
	goto label_7;
label_5:;
	{
	LINE_NUMBER(2570);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2571);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2572);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(2573);
	if ((frame[0].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(2574);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFoundError_rhino_Scriptable_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(2576);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_doScriptableIncrDecr_rhino_Scriptable_java_lang_String_rhino_Scriptable_java_lang_Object_int_R_java_lang_Object(ctx, (frame[4].o), (frame[1].o), (frame[0].o), (frame[5].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_propIncrDecr_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:propIncrDecr", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2583);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o), (frame[0].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2584);
	if ((frame[5].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2585);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefReadError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2588);
	frame[6].o = (frame[5].o);
	}
label_4:;
	{
	LINE_NUMBER(2593);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[1].o), (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2594);
	sp[0].o = frame[7].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	LINE_NUMBER(2595);
	goto label_8;
label_6:;
	{
	LINE_NUMBER(2597);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[6].o)))(ctx, (frame[6].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2598);
	if ((frame[6].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2599);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[5].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[3].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(2600);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2602);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_doScriptableIncrDecr_rhino_Scriptable_java_lang_String_rhino_Scriptable_java_lang_Object_int_R_java_lang_Object(ctx, (frame[6].o), (frame[1].o), (frame[5].o), (frame[7].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_doScriptableIncrDecr_rhino_Scriptable_java_lang_String_rhino_Scriptable_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:doScriptableIncrDecr", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2611);
	if (((frame[4].i) & (jint(2))) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(2613);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Integer)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2614);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[3].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[3].o))));
	frame[6].i = temp0;
	LINE_NUMBER(2615);
	if (((frame[4].i) & (jint(1))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(2616);
	INST_IINC(6, 1);
	goto label_9;
	}
label_7:;
	LINE_NUMBER(2618);
	INST_IINC(6, -1);
label_9:;
	{
	LINE_NUMBER(2620);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapInt_int_R_java_lang_Integer(ctx, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2621);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[7].o));
	LINE_NUMBER(2622);
	if ((frame[5].i) == 0) goto label_12;
	}
	INST_ALOAD(3);
	goto label_13;
label_12:;
	INST_ALOAD(7);
label_13:;
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(2625);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Double)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(2626);
	jdouble temp0 = (jdouble)((func_java_lang_Double_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Double, (frame[3].o))))->vtable)[VTABLE_java_lang_Double_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Double, (frame[3].o))));
	frame[6].d = temp0;
	LINE_NUMBER(2627);
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[6].d));
	if ((doubleCompare(temp1, (frame[6].d), -1)) != 0) goto label_14;
	}
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[6].d));
	if ((doubleCompare(temp0, (jdouble(9,007199e+15)), 1)) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(2628);
	frame[8].i = (jint((frame[6].d)));
	LINE_NUMBER(2629);
	if (((frame[4].i) & (jint(1))) != 0) goto label_19;
	}
	{
	LINE_NUMBER(2630);
	INST_IINC(8, 1);
	goto label_21;
	}
label_19:;
	LINE_NUMBER(2632);
	INST_IINC(8, -1);
label_21:;
	{
	LINE_NUMBER(2634);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapInt_int_R_java_lang_Integer(ctx, (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2635);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[9].o));
	LINE_NUMBER(2636);
	if ((frame[5].i) == 0) goto label_24;
	}
	INST_ALOAD(3);
	goto label_25;
label_24:;
	INST_ALOAD(9);
label_25:;
	popStackFrame(ctx);
	INST_ARETURN();
label_14:;
	{
	LINE_NUMBER(2641);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Number)) == 0) goto label_26;
	}
	{
	LINE_NUMBER(2642);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[3].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[3].o))));
	frame[6].d = temp0;
	goto label_29;
	}
label_26:;
	{
	LINE_NUMBER(2644);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[3].o));
	frame[6].d = temp0;
	LINE_NUMBER(2645);
	if ((frame[5].i) == 0) goto label_29;
	}
	{
	LINE_NUMBER(2647);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[6].d));
	frame[3].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(2650);
	if (((frame[4].i) & (jint(1))) != 0) goto label_32;
	}
	{
	LINE_NUMBER(2651);
	frame[6].d = ((frame[6].d) + (jdouble(1)));
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(2653);
	frame[6].d = ((frame[6].d) - (jdouble(1)));
	}
label_34:;
	{
	LINE_NUMBER(2655);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[6].d));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2656);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[8].o));
	LINE_NUMBER(2657);
	if ((frame[5].i) == 0) goto label_37;
	}
	{
	LINE_NUMBER(2658);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_37:;
	{
	LINE_NUMBER(2660);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_elemIncrDecr_java_lang_Object_java_lang_Object_rhino_Context_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:elemIncrDecr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2664);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_elemIncrDecr_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_elemIncrDecr_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:elemIncrDecr", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2668);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectElem_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2669);
	if (((frame[4].i) & (jint(2))) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(2671);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_Number)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2672);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[5].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[5].o))));
	frame[7].d = temp0;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(2674);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[5].o));
	frame[7].d = temp0;
	LINE_NUMBER(2675);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2677);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[7].d));
	frame[5].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2680);
	if (((frame[4].i) & (jint(1))) != 0) goto label_11;
	}
	{
	LINE_NUMBER(2681);
	frame[7].d = ((frame[7].d) + (jdouble(1)));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(2683);
	frame[7].d = ((frame[7].d) - (jdouble(1)));
	}
label_13:;
	{
	LINE_NUMBER(2685);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[7].d));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2686);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_setObjectElem_java_lang_Object_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[9].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(2687);
	if ((frame[6].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(2688);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_16:;
	{
	LINE_NUMBER(2690);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_refIncrDecr_rhino_Ref_rhino_Context_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:refIncrDecr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2694);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_refIncrDecr_rhino_Ref_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_refIncrDecr_rhino_Ref_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:refIncrDecr", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2699);
	sp[0].o = (jobject)((func_rhino_Ref_get_rhino_Context_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Ref_get_rhino_Context_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2700);
	if (((frame[3].i) & (jint(2))) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(2702);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Number)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2703);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[4].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[4].o))));
	frame[6].d = temp0;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(2705);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[4].o));
	frame[6].d = temp0;
	LINE_NUMBER(2706);
	if ((frame[5].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2708);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[6].d));
	frame[4].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2711);
	if (((frame[3].i) & (jint(1))) != 0) goto label_11;
	}
	{
	LINE_NUMBER(2712);
	frame[6].d = ((frame[6].d) + (jdouble(1)));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(2714);
	frame[6].d = ((frame[6].d) - (jdouble(1)));
	}
label_13:;
	{
	LINE_NUMBER(2716);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[6].d));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2717);
	sp[0].o = (jobject)((func_rhino_Ref_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Ref_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[8].o));
	LINE_NUMBER(2718);
	if ((frame[5].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(2719);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_16:;
	{
	LINE_NUMBER(2721);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toPrimitive_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toPrimitive", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2725);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toPrimitive_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_toPrimitive_java_lang_Object_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:toPrimitive", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2729);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2730);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(2732);
	frame[2].o = (checkCast(ctx, &class_rhino_Scriptable, (frame[0].o)));
	LINE_NUMBER(2733);
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2734);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Scriptable)) == 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[3].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(2735);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.bad.default.value"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(2736);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_eq_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:eq", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2745);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2746);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2747);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(2749);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ScriptableObject)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2750);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[1].o))))->vtable)[VTABLE_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[1].o))), (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2751);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(2752);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(2755);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(2756);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(2757);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	jint temp1 = (jint)SM_rhino_ScriptRuntime_eqNumber_double_java_lang_Object_R_boolean(ctx, temp0, (frame[1].o));
	popStackFrame(ctx);
	return temp1;
	}
label_9:;
	{
	LINE_NUMBER(2758);
	if ((frame[0].o) != (frame[1].o)) goto label_11;
	}
	{
	LINE_NUMBER(2759);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(2760);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(2761);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eqString_java_lang_CharSequence_java_lang_Object_R_boolean(ctx, (checkCast(ctx, &class_java_lang_CharSequence, (frame[0].o))), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_13:;
	{
	LINE_NUMBER(2762);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Boolean)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(2763);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[0].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[0].o))));
	frame[2].i = temp0;
	LINE_NUMBER(2764);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Boolean)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(2765);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))));
	if (temp0 != temp1) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(2767);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ScriptableObject)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(2768);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[1].o))))->vtable)[VTABLE_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[1].o))), (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2769);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_22;
	}
	{
	LINE_NUMBER(2770);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[3].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[3].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_22:;
	{
	LINE_NUMBER(2773);
	if ((frame[2].i) == 0) goto label_26;
	}
	INST_DCONST(1);
	goto label_27;
label_26:;
	INST_DCONST(0);
label_27:;
	{
	sp -= 1;
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eqNumber_double_java_lang_Object_R_boolean(ctx, sp[0].d, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_15:;
	{
	LINE_NUMBER(2774);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_28;
	}
	{
	LINE_NUMBER(2775);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(2776);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ScriptableObject)) == 0) goto label_32;
	}
	{
	LINE_NUMBER(2777);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o))))->vtable)[VTABLE_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o))), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2778);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_32;
	}
	{
	LINE_NUMBER(2779);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_32:;
	{
	LINE_NUMBER(2782);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ScriptableObject)) == 0) goto label_36;
	}
	{
	LINE_NUMBER(2783);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[1].o))))->vtable)[VTABLE_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[1].o))), (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2784);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_36;
	}
	{
	LINE_NUMBER(2785);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_36:;
	{
	LINE_NUMBER(2788);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Wrapper)) == 0) goto label_40;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Wrapper)) == 0) goto label_40;
	}
	{
	LINE_NUMBER(2791);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[0].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[0].o))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2792);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2793);
	if ((frame[2].o) == (frame[3].o)) goto label_44;
	}
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(2794);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isPrimitive_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_46;
	}
	{
	sp[0].o = frame[3].o;
	LINE_NUMBER(2795);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isPrimitive_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_46;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	LINE_NUMBER(2796);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_46;
	}
label_44:;
	INST_ICONST(1);
	goto label_49;
label_46:;
	INST_ICONST(0);
label_49:;
	LINE_NUMBER(2793);
	popStackFrame(ctx);
	INST_IRETURN();
label_40:;
	{
	LINE_NUMBER(2798);
	popStackFrame(ctx);
	return (jint(0));
	}
label_30:;
	{
	LINE_NUMBER(2799);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Boolean)) == 0) goto label_50;
	}
	{
	LINE_NUMBER(2800);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ScriptableObject)) == 0) goto label_52;
	}
	{
	LINE_NUMBER(2801);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o))))->vtable)[VTABLE_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o))), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2802);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_52;
	}
	{
	LINE_NUMBER(2803);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_52:;
	{
	LINE_NUMBER(2806);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))));
	if (temp0 == 0) goto label_56;
	}
	INST_DCONST(1);
	goto label_57;
label_56:;
	INST_DCONST(0);
label_57:;
	{
	sp -= 1;
	frame[2].d = sp[0].d;
	LINE_NUMBER(2807);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eqNumber_double_java_lang_Object_R_boolean(ctx, (frame[2].d), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_50:;
	{
	LINE_NUMBER(2808);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_59;
	}
	{
	LINE_NUMBER(2809);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	jint temp1 = (jint)SM_rhino_ScriptRuntime_eqNumber_double_java_lang_Object_R_boolean(ctx, temp0, (frame[0].o));
	popStackFrame(ctx);
	return temp1;
	}
label_59:;
	{
	LINE_NUMBER(2810);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_CharSequence)) == 0) goto label_61;
	}
	{
	LINE_NUMBER(2811);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eqString_java_lang_CharSequence_java_lang_Object_R_boolean(ctx, (checkCast(ctx, &class_java_lang_CharSequence, (frame[1].o))), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_61:;
	{
	LINE_NUMBER(2814);
	popStackFrame(ctx);
	return (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(2816);
	SM_rhino_ScriptRuntime_warnAboutNonJSObject_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2817);
	if ((frame[0].o) != (frame[1].o)) goto label_64;
	}
	INST_ICONST(1);
	goto label_65;
label_64:;
	INST_ICONST(0);
label_65:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_same_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:same", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2826);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2827);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2829);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2830);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isNaN_java_lang_Object_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isNaN_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(2831);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(2833);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(2835);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_sameZero_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:sameZero", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2842);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2843);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2845);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2846);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isNaN_java_lang_Object_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isNaN_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(2847);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(2849);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	frame[2].d = temp0;
	LINE_NUMBER(2850);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2851);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	frame[4].d = temp0;
	LINE_NUMBER(2852);
	if ((doubleCompare((frame[2].d), (clinit_rhino_ScriptRuntime(ctx), (jdouble)SF_rhino_ScriptRuntime_negativeZero), -1)) != 0) goto label_11;
	}
	{
	if ((doubleCompare((frame[4].d), (jdouble(0)), -1)) == 0) goto label_12;
	}
label_11:;
	{
	if ((doubleCompare((frame[2].d), (jdouble(0)), -1)) != 0) goto label_8;
	}
	{
	if ((doubleCompare((frame[4].d), (clinit_rhino_ScriptRuntime(ctx), (jdouble)SF_rhino_ScriptRuntime_negativeZero), -1)) != 0) goto label_8;
	}
label_12:;
	{
	LINE_NUMBER(2854);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(2857);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eqNumber_double_java_lang_Object_R_boolean(ctx, (frame[2].d), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(2859);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isNaN_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isNaN", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2863);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Double)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2864);
	jdouble temp0 = (jdouble)((func_java_lang_Double_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Double, (frame[0].o))))->vtable)[VTABLE_java_lang_Double_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Double, (frame[0].o))));
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_1:;
	{
	LINE_NUMBER(2866);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Float)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2867);
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[0].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[0].o))));
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_3:;
	{
	LINE_NUMBER(2869);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isPrimitive_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isPrimitive", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2873);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Boolean)) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_eqNumber_double_java_lang_Object_R_boolean(jcontext ctx, jdouble param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:eqNumber", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].d = param0;
	frame[2].o = param1;
label_0:;
	{
	LINE_NUMBER(2880);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2881);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(2882);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Number)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2883);
	jdouble temp0 = frame[0].d;
	jdouble temp1 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))));
	if ((doubleCompare(temp0, temp1, -1)) != 0) goto label_5;
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
	LINE_NUMBER(2884);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_CharSequence)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(2885);
	jdouble temp0 = frame[0].d;
	jdouble temp1 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[2].o));
	if ((doubleCompare(temp0, temp1, -1)) != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(2886);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Boolean)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2887);
	jdouble temp0 = frame[0].d;
	jint temp1 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))));
	sp[0].d = temp0;
	sp += 1;
	if (temp1 == 0) goto label_13;
	}
	INST_DCONST(1);
	goto label_14;
label_13:;
	INST_DCONST(0);
label_14:;
	INST_DCMPL();
	if ((--sp)->i != 0) goto label_15;
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(2888);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(2889);
	popStackFrame(ctx);
	return (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(2890);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Scriptable)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(2891);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ScriptableObject)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(2892);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[0].d));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2893);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[2].o))))->vtable)[VTABLE_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[2].o))), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2894);
	sp[0].o = frame[4].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	LINE_NUMBER(2895);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[4].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[4].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_21:;
	{
	LINE_NUMBER(2898);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toPrimitive_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	goto label_0;
	}
label_19:;
	{
	LINE_NUMBER(2900);
	SM_rhino_ScriptRuntime_warnAboutNonJSObject_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(2901);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_eqString_java_lang_CharSequence_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:eqString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_0:;
	{
	LINE_NUMBER(2908);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2909);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(2910);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_CharSequence)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2911);
	frame[2].o = (checkCast(ctx, &class_java_lang_CharSequence, (frame[1].o)));
	LINE_NUMBER(2912);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 != temp1) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(2913);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2914);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_String_R_double(ctx, sp[0].o);
	jdouble temp1 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	if ((doubleCompare(temp0, temp1, -1)) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(2915);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Boolean)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(2916);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_String_R_double(ctx, sp[0].o);
	jint temp1 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))));
	sp[0].d = temp0;
	sp += 1;
	if (temp1 == 0) goto label_14;
	}
	INST_DCONST(1);
	goto label_15;
label_14:;
	INST_DCONST(0);
label_15:;
	INST_DCMPL();
	if ((--sp)->i != 0) goto label_16;
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(2917);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(2918);
	popStackFrame(ctx);
	return (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(2919);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(2920);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ScriptableObject)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(2921);
	sp[0].o = checkCast(ctx, &class_rhino_ScriptableObject, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2922);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_22;
	}
	{
	LINE_NUMBER(2923);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_22:;
	{
	LINE_NUMBER(2926);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toPrimitive_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	goto label_0;
	}
label_20:;
	{
	LINE_NUMBER(2928);
	SM_rhino_ScriptRuntime_warnAboutNonJSObject_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(2929);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_shallowEq_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:shallowEq", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2935);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(2936);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(2937);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(2940);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	frame[2].d = temp0;
	LINE_NUMBER(2941);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp1 != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2943);
	if ((frame[0].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;
	if (sp[0].o != sp[1].o) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(2944);
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;
	if (sp[0].o == sp[1].o) goto label_11;
	}
label_10:;
	{
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_12;
	}
label_11:;
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(2946);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(2947);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(2948);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	jdouble temp1 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	if ((doubleCompare(temp0, temp1, -1)) != 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(2950);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(2951);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_CharSequence)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(2952);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_20:;
	{
	LINE_NUMBER(2954);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Boolean)) == 0) goto label_23;
	}
	{
	LINE_NUMBER(2955);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Boolean)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(2956);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_23:;
	{
	LINE_NUMBER(2958);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_26;
	}
	{
	LINE_NUMBER(2959);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Wrapper)) == 0) goto label_16;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Wrapper)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(2960);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[0].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[0].o))));
	sp[1].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o))));
	if (sp[0].o != sp[1].o) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	popStackFrame(ctx);
	INST_IRETURN();
label_26:;
	{
	LINE_NUMBER(2963);
	SM_rhino_ScriptRuntime_warnAboutNonJSObject_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2964);
	if ((frame[0].o) != (frame[1].o)) goto label_32;
	}
	INST_ICONST(1);
	goto label_33;
label_32:;
	INST_ICONST(0);
label_33:;
	popStackFrame(ctx);
	INST_IRETURN();
label_16:;
	{
	LINE_NUMBER(2966);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_instanceOf_java_lang_Object_java_lang_Object_rhino_Context_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:instanceOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2975);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2976);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.instanceof.not.object"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2980);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(2981);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2983);
	jint temp0 = (jint)((func_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean, (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o))), (checkCast(ctx, &class_rhino_Scriptable, (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_jsDelegatesTo_rhino_Scriptable_rhino_Scriptable_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:jsDelegatesTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2991);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2993);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2994);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(2995);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2998);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_in_java_lang_Object_java_lang_Object_rhino_Context_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:in", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3015);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3016);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.in.not.object"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3019);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_hasObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_boolean(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o))), (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_cmp_LT_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:cmp_LT", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3024);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3025);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	frame[2].d = temp0;
	LINE_NUMBER(3026);
	jdouble temp1 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	frame[4].d = temp1;
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(3028);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Symbol)) != 0) goto label_6;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Symbol)) == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(3029);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.compare.symbol"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(3031);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(3032);
	sp[0].o = checkCast(ctx, &class_rhino_Scriptable, (frame[0].o));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[0].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(3033);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(3034);
	sp[0].o = checkCast(ctx, &class_rhino_Scriptable, (frame[1].o));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(3035);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) == 0) goto label_12;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_CharSequence)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(3036);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 >= 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(3038);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[0].o));
	frame[2].d = temp0;
	LINE_NUMBER(3039);
	jdouble temp1 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[1].o));
	frame[4].d = temp1;
	}
label_5:;
	{
	LINE_NUMBER(3041);
	if ((doubleCompare((frame[2].d), (frame[4].d), 1)) >= 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_cmp_LE_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:cmp_LE", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3046);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3047);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	frame[2].d = temp0;
	LINE_NUMBER(3048);
	jdouble temp1 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	frame[4].d = temp1;
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(3050);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Symbol)) != 0) goto label_6;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Symbol)) == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(3051);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.compare.symbol"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(3053);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(3054);
	sp[0].o = checkCast(ctx, &class_rhino_Scriptable, (frame[0].o));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[0].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(3055);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(3056);
	sp[0].o = checkCast(ctx, &class_rhino_Scriptable, (frame[1].o));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(3057);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) == 0) goto label_12;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_CharSequence)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(3058);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 > 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(3060);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[0].o));
	frame[2].d = temp0;
	LINE_NUMBER(3061);
	jdouble temp1 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[1].o));
	frame[4].d = temp1;
	}
label_5:;
	{
	LINE_NUMBER(3063);
	if ((doubleCompare((frame[2].d), (frame[4].d), 1)) > 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getGlobal_rhino_Context_R_rhino_ScriptableObject(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getGlobal", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3071);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"rhino.tools.shell.Global"_j)));
	LINE_NUMBER(3072);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"rhino.tools.shell.Global"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3073);
	if ((frame[2].o) == nullptr) goto label_9;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(3075);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	jint temp0 = jint(0);
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ContextClass;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[3].o = sp[0].o;
	LINE_NUMBER(3076);
	sp[0].o = (jobject)((func_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3077);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(3078);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[5].o));
	sp[0].o = checkCast(ctx, &class_rhino_ScriptableObject, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(3079);
	frame[3].o = sp[0].o;
	LINE_NUMBER(3080);
	throwException(ctx, (frame[3].o));	}
label_4:;
	LINE_NUMBER(3081);
	INST_ASTORE(3);
label_9:;
	{
	LINE_NUMBER(3085);
	clinit_rhino_ImporterTopLevel(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ImporterTopLevel);
	init_rhino_ImporterTopLevel_rhino_Context(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_hasTopCall_rhino_Context_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:hasTopCall", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3089);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_topCallScope;
	if (sp[0].o == nullptr) goto label_1;
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

jobject SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getTopCallScope", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3093);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_topCallScope;
	frame[1].o = sp[0].o;
	LINE_NUMBER(3094);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(3095);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(3097);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:doTopCall", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(3103);
	if ((frame[2].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(3104);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(3105);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_topCallScope;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(3108);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o));
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_topCallScope = (jref) sp[1].o;
	LINE_NUMBER(3109);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[1].o), (7));
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_useDynamicScope = temp0;
	LINE_NUMBER(3110);
	frame[7].i = ((jint)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_isTopLevelStrict);
	LINE_NUMBER(3111);
	((rhino_Context *) NULL_CHECK((frame[1].o)))->F_isTopLevelStrict = (frame[5].i);
	LINE_NUMBER(3112);
	sp[0].o = (jobject)((func_rhino_Context_getFactory_R_rhino_ContextFactory) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getFactory_R_rhino_ContextFactory])(ctx, (frame[1].o));
	frame[8].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(3114);
	sp[0].o = (jobject)((func_rhino_ContextFactory_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ContextFactory_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[8].o), (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(3116);
	((rhino_Context *) NULL_CHECK((frame[1].o)))->F_topCallScope = (jref) (jobject(nullptr));
	LINE_NUMBER(3118);
	((rhino_Context *) NULL_CHECK((frame[1].o)))->F_isTopLevelStrict = (frame[7].i);
	LINE_NUMBER(3120);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_currentActivationCall;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(3123);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(3116);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	((rhino_Context *) NULL_CHECK((frame[1].o)))->F_topCallScope = (jref) (jobject(nullptr));
	LINE_NUMBER(3118);
	((rhino_Context *) NULL_CHECK((frame[1].o)))->F_isTopLevelStrict = (frame[7].i);
	LINE_NUMBER(3120);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_currentActivationCall;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(3123);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(3125);
	throwException(ctx, (frame[9].o));	}
label_16:;
	{
	LINE_NUMBER(3126);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_checkDynamicScope_rhino_Scriptable_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:checkDynamicScope", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3138);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(3139);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(3141);
	frame[2].o = (frame[0].o);
	}
label_3:;
	{
	LINE_NUMBER(3143);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3144);
	if ((frame[2].o) != (frame[1].o)) goto label_5;
	}
	{
	LINE_NUMBER(3145);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(3147);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(3148);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_addInstructionCount_rhino_Context_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:addInstructionCount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3154);
	sp[0].o = frame[0].o;
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_instructionCount = (((jint)((rhino_Context *) NULL_CHECK(sp[0].o))->F_instructionCount) + (frame[1].i));
	LINE_NUMBER(3155);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionCount) <= ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionThreshold)) goto label_2;
	}
	{
	LINE_NUMBER(3156);
	((func_rhino_Context_observeInstructionCount_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_observeInstructionCount_int])(ctx, (frame[0].o), ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionCount));
	LINE_NUMBER(3157);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionCount = (jint(0));
	}
label_2:;
	LINE_NUMBER(3159);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_initScript_rhino_NativeFunction_rhino_Scriptable_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:initScript", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3164);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_topCallScope;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3165);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3167);
	jint temp0 = (jint)((func_rhino_NativeFunction_getParamAndVarCount_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeFunction_getParamAndVarCount_R_int])(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(3168);
	if ((frame[5].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(3170);
	frame[6].o = (frame[3].o);
	}
label_6:;
	{
	LINE_NUMBER(3173);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_NativeWith)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(3174);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[6].o)))(ctx, (frame[6].o));
	frame[6].o = sp[0].o;
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(3177);
	frame[7].i = (frame[5].i);
	}
label_9:;
	{
	jint temp0 = frame[7].i;
	INST_IINC(7, -1);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(3178);
	sp[0].o = (jobject)((func_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String])(ctx, (frame[0].o), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(3179);
	jint temp0 = (jint)((func_rhino_NativeFunction_getParamOrVarConst_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeFunction_getParamOrVarConst_int_R_boolean])(ctx, (frame[0].o), (frame[7].i));
	frame[9].i = temp0;
	LINE_NUMBER(3182);
	jint temp1 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (frame[3].o), (frame[8].o));
	if (temp1 != 0) goto label_13;
	}
	{
	LINE_NUMBER(3183);
	if ((frame[9].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(3184);
	SM_rhino_ScriptableObject_defineConstProperty_rhino_Scriptable_java_lang_String(ctx, (frame[6].o), (frame[8].o));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(3185);
	if ((frame[4].i) != 0) goto label_18;
	}
	{
	LINE_NUMBER(3186);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_InterpretedFunction)) == 0) goto label_20;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_InterpretedFunction, (frame[0].o));
	sp[1].o = frame[8].o;
	LINE_NUMBER(3187);
	jint temp0 = (jint)((func_rhino_InterpretedFunction_hasFunctionNamed_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpretedFunction_hasFunctionNamed_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_17;
	}
label_20:;
	{
	LINE_NUMBER(3189);
	sp[0].o = frame[6].o;
	sp[1].o = frame[8].o;
	clinit_rhino_Undefined(ctx);
	sp[2].o = (jobject)SF_rhino_Undefined_instance;
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(4)));
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(3192);
	sp[0].o = frame[6].o;
	sp[1].o = frame[8].o;
	sp[2].o = frame[6].o;
	clinit_rhino_Undefined(ctx);
	sp[3].o = (jobject)SF_rhino_Undefined_instance;
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(3195);
	SM_rhino_ScriptableObject_redefineProperty_rhino_Scriptable_java_lang_String_boolean(ctx, (frame[3].o), (frame[8].o), (frame[9].i));
	}
label_17:;
	LINE_NUMBER(3197);
	goto label_9;
label_4:;
	LINE_NUMBER(3199);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_createFunctionActivation_rhino_NativeFunction_rhino_Scriptable_Array1_java_lang_Object_boolean_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:createFunctionActivation", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(3205);
	clinit_rhino_NativeCall(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCall);
	init_rhino_NativeCall_rhino_NativeFunction_rhino_Scriptable_Array1_java_lang_Object_boolean_boolean(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_createArrowFunctionActivation_rhino_NativeFunction_rhino_Scriptable_Array1_java_lang_Object_boolean_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:createArrowFunctionActivation", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(3212);
	clinit_rhino_NativeCall(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCall);
	init_rhino_NativeCall_rhino_NativeFunction_rhino_Scriptable_Array1_java_lang_Object_boolean_boolean(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_enterActivationFunction_rhino_Context_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:enterActivationFunction", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3217);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_topCallScope;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3218);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3219);
	frame[2].o = (checkCast(ctx, &class_rhino_NativeCall, (frame[1].o)));
	LINE_NUMBER(3220);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_currentActivationCall;
	((rhino_NativeCall *) NULL_CHECK(sp[0].o))->F_parentActivationCall = (jref) sp[1].o;
	LINE_NUMBER(3221);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_currentActivationCall = (jref) (frame[2].o);
	LINE_NUMBER(3222);
	((func_rhino_NativeCall_defineAttributesForArguments) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeCall_defineAttributesForArguments])(ctx, (frame[2].o));
	LINE_NUMBER(3223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_exitActivationFunction_rhino_Context(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:exitActivationFunction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3226);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_currentActivationCall;
	frame[1].o = sp[0].o;
	LINE_NUMBER(3227);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_NativeCall *) NULL_CHECK((frame[1].o)))->F_parentActivationCall;
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_currentActivationCall = (jref) sp[1].o;
	LINE_NUMBER(3228);
	((rhino_NativeCall *) NULL_CHECK((frame[1].o)))->F_parentActivationCall = (jref) (jobject(nullptr));
	LINE_NUMBER(3229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_findFunctionActivation_rhino_Context_rhino_Function_R_rhino_NativeCall(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:findFunctionActivation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3232);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_currentActivationCall;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3233);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(3234);
	sp[0].o = (jobject)((rhino_NativeCall *) NULL_CHECK((frame[2].o)))->F_function;
	if (sp[0].o != (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(3235);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(3236);
	sp[0].o = (jobject)((rhino_NativeCall *) NULL_CHECK((frame[2].o)))->F_parentActivationCall;
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(3238);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_newCatchScope_java_lang_Throwable_rhino_Scriptable_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:newCatchScope", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(3249);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_JavaScriptException)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3250);
	frame[6].i = (jint(0));
	LINE_NUMBER(3251);
	sp[0].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_JavaScriptException, (frame[0].o))))->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_JavaScriptException, (frame[0].o))));
	frame[5].o = sp[0].o;
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(3253);
	frame[6].i = (jint(1));
	LINE_NUMBER(3258);
	if ((frame[1].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(3259);
	frame[7].o = (checkCast(ctx, &class_rhino_NativeObject, (frame[1].o)));
	LINE_NUMBER(3260);
	sp[0].o = (jobject)((func_rhino_NativeObject_getAssociatedValue_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_NativeObject_getAssociatedValue_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3261);
	if ((frame[5].o) != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(3268);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(3270);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_EcmaError)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(3271);
	frame[11].o = (checkCast(ctx, &class_rhino_EcmaError, (frame[0].o)));
	LINE_NUMBER(3272);
	frame[7].o = (frame[11].o);
	LINE_NUMBER(3273);
	sp[0].o = (jobject)((func_rhino_EcmaError_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_EcmaError_getName_R_java_lang_String])(ctx, (frame[11].o));
	sp[0].o = (jobject)SM_rhino_TopLevel$NativeErrors_valueOf_java_lang_String_R_rhino_TopLevel$NativeErrors(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(3274);
	sp[0].o = (jobject)((func_rhino_EcmaError_getErrorMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_EcmaError_getErrorMessage_R_java_lang_String])(ctx, (frame[11].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(3275);
	goto label_18;
	}
label_12:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_WrappedException)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(3276);
	frame[11].o = (checkCast(ctx, &class_rhino_WrappedException, (frame[0].o)));
	LINE_NUMBER(3277);
	frame[7].o = (frame[11].o);
	LINE_NUMBER(3278);
	sp[0].o = (jobject)((func_rhino_WrappedException_getWrappedException_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_WrappedException_getWrappedException_R_java_lang_Throwable])(ctx, (frame[11].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(3279);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = (jobject)SF_rhino_TopLevel$NativeErrors_JavaException;
	frame[8].o = sp[0].o;
	LINE_NUMBER(3280);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[10].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = frame[10].o;
	LINE_NUMBER(3281);
	sp[1].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(3282);
	goto label_18;
	}
label_19:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_EvaluatorException)) == 0) goto label_27;
	}
	{
	LINE_NUMBER(3284);
	frame[11].o = (checkCast(ctx, &class_rhino_EvaluatorException, (frame[0].o)));
	LINE_NUMBER(3285);
	frame[7].o = (frame[11].o);
	LINE_NUMBER(3286);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = (jobject)SF_rhino_TopLevel$NativeErrors_InternalError;
	frame[8].o = sp[0].o;
	LINE_NUMBER(3287);
	sp[0].o = (jobject)((func_rhino_EvaluatorException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_EvaluatorException_getMessage_R_java_lang_String])(ctx, (frame[11].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(3288);
	goto label_18;
	}
label_27:;
	{
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[3].o), (13));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(3291);
	clinit_rhino_WrappedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_WrappedException);
	init_rhino_WrappedException_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(3292);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = (jobject)SF_rhino_TopLevel$NativeErrors_JavaException;
	frame[8].o = sp[0].o;
	LINE_NUMBER(3293);
	sp[0].o = (jobject)((func_java_lang_Throwable_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_toString_R_java_lang_String])(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	goto label_18;
	}
label_33:;
	{
	LINE_NUMBER(3297);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(3300);
	sp[0].o = (jobject)((func_rhino_RhinoException_sourceName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_RhinoException_sourceName_R_java_lang_String])(ctx, (frame[7].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(3301);
	if ((frame[11].o) != nullptr) goto label_39;
	}
	{
	LINE_NUMBER(3302);
	frame[11].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_39:;
	{
	LINE_NUMBER(3304);
	jint temp0 = (jint)((func_rhino_RhinoException_lineNumber_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_RhinoException_lineNumber_R_int])(ctx, (frame[7].o));
	frame[12].i = temp0;
	LINE_NUMBER(3306);
	if ((frame[12].i) <= 0) goto label_42;
	}
	{
	LINE_NUMBER(3307);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[9].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[11].o);
	jint temp0 = jint(2);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[12].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[13].o = sp[0].o;
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(3309);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[9].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[11].o);
	frame[13].o = sp[0].o;
	}
label_45:;
	{
	LINE_NUMBER(3312);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_newNativeError_rhino_Context_rhino_Scriptable_rhino_TopLevel$NativeErrors_Array1_java_lang_Object_R_rhino_Scriptable(ctx, (frame[3].o), (frame[4].o), (frame[8].o), (frame[13].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(3314);
	if ((isInstance(ctx, (frame[14].o), &class_rhino_NativeError)) == 0) goto label_47;
	}
	{
	LINE_NUMBER(3315);
	((func_rhino_NativeError_setStackProvider_rhino_RhinoException) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeError, (frame[14].o))))->vtable)[VTABLE_rhino_NativeError_setStackProvider_rhino_RhinoException])(ctx, (checkCast(ctx, &class_rhino_NativeError, (frame[14].o))), (frame[7].o));
	}
label_47:;
	{
	LINE_NUMBER(3318);
	if ((frame[10].o) == nullptr) goto label_49;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isVisible_rhino_Context_java_lang_Object_R_boolean(ctx, (frame[3].o), (frame[10].o));
	if (temp0 == 0) goto label_49;
	}
	{
	LINE_NUMBER(3319);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o), (frame[4].o), (frame[10].o), (jobject(nullptr)));
	frame[15].o = sp[0].o;
	LINE_NUMBER(3321);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, (frame[14].o), (((jobject) createStringLiteral(ctx, u8"javaException"_j))), (frame[15].o), (7));
	}
label_49:;
	{
	LINE_NUMBER(3325);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isVisible_rhino_Context_java_lang_Object_R_boolean(ctx, (frame[3].o), (frame[7].o));
	if (temp0 == 0) goto label_52;
	}
	{
	LINE_NUMBER(3326);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o), (frame[4].o), (frame[7].o), (jobject(nullptr)));
	frame[15].o = sp[0].o;
	LINE_NUMBER(3327);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, (frame[14].o), (((jobject) createStringLiteral(ctx, u8"rhinoException"_j))), (frame[15].o), (7));
	}
label_52:;
	{
	LINE_NUMBER(3331);
	frame[5].o = (frame[14].o);
	}
label_5:;
	{
	LINE_NUMBER(3334);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(3336);
	((func_rhino_NativeObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_NativeObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[7].o), (frame[2].o), (frame[5].o), (jint(4)));
	LINE_NUMBER(3339);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isVisible_rhino_Context_java_lang_Object_R_boolean(ctx, (frame[3].o), (frame[0].o));
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(3343);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"__exception__"_j));
	sp[2].o = frame[0].o;
	sp[3].o = frame[4].o;
	LINE_NUMBER(3344);
	sp[2].o = (jobject)SM_rhino_Context_javaToJS_java_lang_Object_rhino_Scriptable_R_java_lang_Object(ctx, sp[2].o, sp[3].o);
	jint temp0 = 6;
	LINE_NUMBER(3343);
	((func_rhino_NativeObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	}
label_57:;
	{
	LINE_NUMBER(3348);
	if ((frame[6].i) == 0) goto label_61;
	}
	{
	LINE_NUMBER(3349);
	sp[0].o = (jobject)((func_rhino_NativeObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_NativeObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), (frame[0].o), (frame[5].o));
	}
label_61:;
	{
	LINE_NUMBER(3351);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_wrapException_java_lang_Throwable_rhino_Scriptable_rhino_Context_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:wrapException", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3360);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(3362);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_EcmaError)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3363);
	frame[7].o = (checkCast(ctx, &class_rhino_EcmaError, (frame[0].o)));
	LINE_NUMBER(3364);
	frame[3].o = (frame[7].o);
	LINE_NUMBER(3365);
	sp[0].o = (jobject)((func_rhino_EcmaError_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_EcmaError_getName_R_java_lang_String])(ctx, (frame[7].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3366);
	sp[0].o = (jobject)((func_rhino_EcmaError_getErrorMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_EcmaError_getErrorMessage_R_java_lang_String])(ctx, (frame[7].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3367);
	goto label_8;
	}
label_2:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_WrappedException)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(3368);
	frame[7].o = (checkCast(ctx, &class_rhino_WrappedException, (frame[0].o)));
	LINE_NUMBER(3369);
	frame[3].o = (frame[7].o);
	LINE_NUMBER(3370);
	sp[0].o = (jobject)((func_rhino_WrappedException_getWrappedException_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_WrappedException_getWrappedException_R_java_lang_Throwable])(ctx, (frame[7].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3371);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"JavaException"_j)));
	LINE_NUMBER(3372);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = frame[6].o;
	LINE_NUMBER(3373);
	sp[1].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(3374);
	goto label_8;
	}
label_9:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_EvaluatorException)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(3376);
	frame[7].o = (checkCast(ctx, &class_rhino_EvaluatorException, (frame[0].o)));
	LINE_NUMBER(3377);
	frame[3].o = (frame[7].o);
	LINE_NUMBER(3378);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"InternalError"_j)));
	LINE_NUMBER(3379);
	sp[0].o = (jobject)((func_rhino_EvaluatorException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_EvaluatorException_getMessage_R_java_lang_String])(ctx, (frame[7].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3380);
	goto label_8;
	}
label_17:;
	{
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[2].o), (13));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(3383);
	clinit_rhino_WrappedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_WrappedException);
	init_rhino_WrappedException_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3384);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"JavaException"_j)));
	LINE_NUMBER(3385);
	sp[0].o = (jobject)((func_java_lang_Throwable_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_toString_R_java_lang_String])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	goto label_8;
	}
label_23:;
	{
	LINE_NUMBER(3389);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(3392);
	sp[0].o = (jobject)((func_rhino_RhinoException_sourceName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_RhinoException_sourceName_R_java_lang_String])(ctx, (frame[3].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(3393);
	if ((frame[7].o) != nullptr) goto label_29;
	}
	{
	LINE_NUMBER(3394);
	frame[7].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_29:;
	{
	LINE_NUMBER(3396);
	jint temp0 = (jint)((func_rhino_RhinoException_lineNumber_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_RhinoException_lineNumber_R_int])(ctx, (frame[3].o));
	frame[8].i = temp0;
	LINE_NUMBER(3398);
	if ((frame[8].i) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(3399);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[7].o);
	jint temp0 = jint(2);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[8].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[9].o = sp[0].o;
	goto label_35;
	}
label_32:;
	{
	LINE_NUMBER(3401);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[7].o);
	frame[9].o = sp[0].o;
	}
label_35:;
	{
	LINE_NUMBER(3404);
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[2].o), (frame[1].o), (frame[4].o), (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(3405);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"name"_j))), (frame[4].o));
	LINE_NUMBER(3407);
	if ((isInstance(ctx, (frame[10].o), &class_rhino_NativeError)) == 0) goto label_38;
	}
	{
	LINE_NUMBER(3408);
	((func_rhino_NativeError_setStackProvider_rhino_RhinoException) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeError, (frame[10].o))))->vtable)[VTABLE_rhino_NativeError_setStackProvider_rhino_RhinoException])(ctx, (checkCast(ctx, &class_rhino_NativeError, (frame[10].o))), (frame[3].o));
	}
label_38:;
	{
	LINE_NUMBER(3411);
	if ((frame[6].o) == nullptr) goto label_40;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isVisible_rhino_Context_java_lang_Object_R_boolean(ctx, (frame[2].o), (frame[6].o));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(3412);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[1].o), (frame[6].o), (jobject(nullptr)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(3414);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"javaException"_j))), (frame[11].o), (7));
	}
label_40:;
	{
	LINE_NUMBER(3418);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isVisible_rhino_Context_java_lang_Object_R_boolean(ctx, (frame[2].o), (frame[3].o));
	if (temp0 == 0) goto label_43;
	}
	{
	LINE_NUMBER(3419);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[1].o), (frame[3].o), (jobject(nullptr)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(3420);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"rhinoException"_j))), (frame[11].o), (7));
	}
label_43:;
	{
	LINE_NUMBER(3424);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isVisible_rhino_Context_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isVisible", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3428);
	sp[0].o = (jobject)((func_rhino_Context_getClassShutter_R_rhino_ClassShutter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getClassShutter_R_rhino_ClassShutter])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3429);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(3430);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_rhino_ClassShutter_visibleToScripts_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ClassShutter, INDEX_rhino_ClassShutter_visibleToScripts_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_2:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(3429);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_enterWith_java_lang_Object_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:enterWith", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3435);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3436);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(3437);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.undef.with"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(3439);
	clinit_rhino_NativeWith(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeWith);
	init_rhino_NativeWith_rhino_Scriptable_rhino_Scriptable(ctx, sp[0].o, (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_leaveWith_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:leaveWith", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3443);
	frame[1].o = (checkCast(ctx, &class_rhino_NativeWith, (frame[0].o)));
	LINE_NUMBER(3444);
	sp[0].o = (jobject)((func_rhino_NativeWith_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeWith_getParentScope_R_rhino_Scriptable])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_updateDotQuery_boolean_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jbool param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:updateDotQuery", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3449);
	frame[2].o = (checkCast(ctx, &class_rhino_NativeWith, (frame[1].o)));
	LINE_NUMBER(3450);
	sp[0].o = (jobject)((func_rhino_NativeWith_updateDotQuery_boolean_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeWith_updateDotQuery_boolean_R_java_lang_Object])(ctx, (frame[2].o), (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_leaveDotQuery_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:leaveDotQuery", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3454);
	frame[1].o = (checkCast(ctx, &class_rhino_NativeWith, (frame[0].o)));
	LINE_NUMBER(3455);
	sp[0].o = (jobject)((func_rhino_NativeWith_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeWith_getParentScope_R_rhino_Scriptable])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setFunctionProtoAndParent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3460);
	SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(3461);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setFunctionProtoAndParent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3466);
	((func_rhino_BaseFunction_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_setParentScope_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(3467);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3468);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getGeneratorFunctionPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	((func_rhino_BaseFunction_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_BaseFunction_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(3470);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getFunctionPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	((func_rhino_BaseFunction_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_BaseFunction_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(3472);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_setObjectProtoAndParent_rhino_ScriptableObject_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setObjectProtoAndParent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3477);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3478);
	((func_rhino_ScriptableObject_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_setParentScope_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(3479);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	LINE_NUMBER(3480);
	sp[1].o = (jobject)((func_rhino_ScriptableObject_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ScriptableObject_getClassName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getClassPrototype_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3481);
	((func_rhino_ScriptableObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_setPrototype_rhino_Scriptable])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(3482);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setBuiltinProtoAndParent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3487);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3488);
	((func_rhino_ScriptableObject_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_setParentScope_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(3489);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_TopLevel_getBuiltinPrototype_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Scriptable(ctx, (frame[1].o), (frame[2].o));
	((func_rhino_ScriptableObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3490);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_initFunction_rhino_Context_rhino_Scriptable_rhino_NativeFunction_int_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jbool param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:initFunction", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3496);
	if ((frame[3].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(3497);
	sp[0].o = (jobject)((func_rhino_NativeFunction_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeFunction_getFunctionName_R_java_lang_String])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3498);
	if ((frame[5].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(3499);
	if ((frame[4].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(3502);
	sp[0].o = frame[1].o;
	sp[1].o = frame[5].o;
	sp[2].o = frame[2].o;
	jint temp0 = jint(4);
	LINE_NUMBER(3503);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(3505);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o), (frame[1].o), (frame[2].o));
	}
label_4:;
	LINE_NUMBER(3508);
	goto label_9;
label_1:;
	{
	if ((frame[3].i) != (jint(3))) goto label_10;
	}
	{
	LINE_NUMBER(3509);
	sp[0].o = (jobject)((func_rhino_NativeFunction_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeFunction_getFunctionName_R_java_lang_String])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3510);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(3514);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeWith)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(3515);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[1].o)))(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(3517);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o), (frame[1].o), (frame[2].o));
	}
label_13:;
	LINE_NUMBER(3519);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(3520);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(3522);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_newArrayLiteral_Array1_java_lang_Object_Array1_int_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:newArrayLiteral", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(3527);
	frame[4].i = (jint(2));
	LINE_NUMBER(3528);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(3529);
	frame[6].i = (jint(0));
	LINE_NUMBER(3530);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(3531);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_4:;
	{
	LINE_NUMBER(3533);
	frame[7].i = ((frame[5].i) + (frame[6].i));
	LINE_NUMBER(3534);
	if ((frame[7].i) <= (jint(1))) goto label_7;
	}
	{
	if (((frame[6].i) * (jint(2))) >= (frame[7].i)) goto label_7;
	}
	{
	LINE_NUMBER(3537);
	if ((frame[6].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(3538);
	frame[8].o = (frame[0].o);
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(3540);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(3541);
	frame[9].i = (jint(0));
	LINE_NUMBER(3542);
	frame[10].i = (jint(0));
	frame[11].i = (jint(0));
	}
label_16:;
	{
	if ((frame[10].i) == (frame[7].i)) goto label_12;
	}
	{
	LINE_NUMBER(3543);
	if ((frame[9].i) == (frame[6].i)) goto label_18;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[9].i))) != (frame[10].i)) goto label_18;
	}
	{
	LINE_NUMBER(3544);
	sp[0].o = frame[8].o;
	jint temp0 = frame[10].i;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3545);
	INST_IINC(9, 1);
	LINE_NUMBER(3546);
	goto label_22;
	}
label_18:;
	{
	LINE_NUMBER(3548);
	ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[11].i)));
	LINE_NUMBER(3549);
	INST_IINC(11, 1);
	}
label_22:;
	{
	LINE_NUMBER(3542);
	INST_IINC(10, 1);
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(3552);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[2].o), (frame[3].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(3555);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[2].o), (frame[3].o), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(3557);
	frame[9].i = (jint(0));
	LINE_NUMBER(3558);
	frame[10].i = (jint(0));
	frame[11].i = (jint(0));
	}
label_27:;
	{
	if ((frame[10].i) == (frame[7].i)) goto label_28;
	}
	{
	LINE_NUMBER(3559);
	if ((frame[9].i) == (frame[6].i)) goto label_30;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[9].i))) != (frame[10].i)) goto label_30;
	}
	{
	LINE_NUMBER(3560);
	INST_IINC(9, 1);
	LINE_NUMBER(3561);
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(3563);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o), (frame[10].i), (frame[8].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[11].i))));
	LINE_NUMBER(3564);
	INST_IINC(11, 1);
	}
label_33:;
	{
	LINE_NUMBER(3558);
	INST_IINC(10, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(3566);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_newObjectLiteral_Array1_java_lang_Object_Array1_java_lang_Object_Array1_int_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:newObjectLiteral", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(3573);
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable])(ctx, (frame[3].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3574);
	frame[6].i = (jint(0));
	frame[7].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	}
label_3:;
	{
	if ((frame[6].i) == (frame[7].i)) goto label_4;
	}
	{
	LINE_NUMBER(3575);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i)));
	LINE_NUMBER(3576);
	if ((frame[2].o) != nullptr) goto label_7;
	}
	INST_ICONST(0);
	goto label_8;
label_7:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[6].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(3577);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(3578);
	if ((isInstance(ctx, (frame[8].o), &class_java_lang_String)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(3579);
	if ((frame[9].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(3580);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSpecialProperty_java_lang_String_R_boolean(ctx, (checkCast(ctx, &class_java_lang_String, (frame[8].o))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(3581);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_specialRef_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Ref(ctx, (frame[5].o), (checkCast(ctx, &class_java_lang_String, (frame[8].o))), (frame[3].o), (frame[4].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(3582);
	sp[0].o = (jobject)((func_rhino_Ref_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Ref_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object])(ctx, (frame[11].o), (frame[3].o), (frame[4].o), (frame[10].o));
	LINE_NUMBER(3583);
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(3584);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (checkCast(ctx, &class_java_lang_String, (frame[8].o))), (frame[5].o), (frame[10].o));
	goto label_19;
	}
label_13:;
	{
	LINE_NUMBER(3587);
	frame[11].o = (checkCast(ctx, &class_rhino_ScriptableObject, (frame[5].o)));
	LINE_NUMBER(3588);
	frame[12].o = (checkCast(ctx, &class_rhino_Callable, (frame[10].o)));
	LINE_NUMBER(3589);
	if ((frame[9].i) != (jint(1))) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	frame[13].i = sp[0].i;
	LINE_NUMBER(3590);
	((func_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean])(ctx, (frame[11].o), (checkCast(ctx, &class_java_lang_String, (frame[8].o))), (jint(0)), (frame[12].o), (frame[13].i));
	LINE_NUMBER(3591);
	goto label_19;
	}
label_11:;
	{
	LINE_NUMBER(3593);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[8].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[8].o))));
	frame[11].i = temp0;
	LINE_NUMBER(3594);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[11].i), (frame[5].o), (frame[10].o));
	}
label_19:;
	{
	LINE_NUMBER(3574);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(3597);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isArrayObject_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isArrayObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3601);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeArray)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Arguments)) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getArrayElements_rhino_Scriptable_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getArrayElements", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3605);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(3606);
	jlong temp0 = (jlong)SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(ctx, (frame[1].o), (frame[0].o), (jint(0)));
	frame[2].l = temp0;
	LINE_NUMBER(3607);
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(3609);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(3611);
	frame[4].i = (jint((frame[2].l)));
	LINE_NUMBER(3612);
	if ((frame[4].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(3613);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(3615);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3616);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_10;
	}
	{
	LINE_NUMBER(3617);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, (frame[0].o), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(3618);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	sp[1].o = frame[7].o;
	clinit_rhino_Scriptable(ctx);
	sp[2].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 != sp[0].o) goto label_13;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_14;
label_13:;
	INST_ALOAD(7);
label_14:;
	{
	sp -= 3;
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(3616);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(3621);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_checkDeprecated_rhino_Context_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:checkDeprecated", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3625);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(3626);
	if ((frame[2].i) >= (140)) goto label_2;
	}
	{
	if ((frame[2].i) != (200)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(3627);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.deprec.ctor"_j))), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3628);
	if ((frame[2].i) != (200)) goto label_5;
	}
	{
	LINE_NUMBER(3629);
	SM_rhino_Context_reportWarning_java_lang_String(ctx, (frame[3].o));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(3631);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(ctx, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(3633);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getMessage0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3636);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getMessage1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3640);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3641);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getMessage2_java_lang_String_java_lang_Object_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getMessage2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3646);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(3647);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getMessage3_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getMessage3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(3652);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (frame[3].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(3653);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getMessage4_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getMessage4", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(3658);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (frame[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (frame[4].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(3659);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3681);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_messageProvider;
	sp[0].o = (jobject)((func_rhino_ScriptRuntime$MessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_ScriptRuntime$MessageProvider, INDEX_rhino_ScriptRuntime$MessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:constructError", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3719);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3720);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3721);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EcmaError(ctx, (frame[0].o), (frame[1].o), (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))), (jobject(nullptr)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_int_R_rhino_EcmaError(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:constructError", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3727);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3728);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3729);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3730);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(3732);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EcmaError(ctx, (frame[0].o), (frame[1].o), (frame[4].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))), (jobject(nullptr)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EcmaError(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jint param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:constructError", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(3741);
	clinit_rhino_EcmaError(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_EcmaError);
	init_rhino_EcmaError_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_int(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_rangeError_java_lang_String_R_rhino_EcmaError(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:rangeError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3746);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"RangeError"_j))), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_typeError_java_lang_String_R_rhino_EcmaError(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:typeError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3750);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"TypeError"_j))), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:typeError0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3754);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3755);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError_java_lang_String_R_rhino_EcmaError(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:typeError1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3759);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3760);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError_java_lang_String_R_rhino_EcmaError(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:typeError2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3765);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage2_java_lang_String_java_lang_Object_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3766);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError_java_lang_String_R_rhino_EcmaError(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_typeError3_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_rhino_EcmaError(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:typeError3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(3771);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage3_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3772);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError_java_lang_String_R_rhino_EcmaError(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_undefReadError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:undefReadError", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3776);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.undef.prop.read"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_undefCallError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:undefCallError", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3780);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.undef.method.call"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_undefWriteError_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:undefWriteError", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3786);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.undef.prop.write"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[3].o = frame[2].o;
	LINE_NUMBER(3787);
	sp[3].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[3].o);
	LINE_NUMBER(3786);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError3_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_undefDeleteError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:undefDeleteError", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3791);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.undef.prop.delete"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_notFoundError_rhino_Scriptable_java_lang_String_R_java_lang_RuntimeException(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:notFoundError", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3797);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.is.not.defined"_j))), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3798);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"ReferenceError"_j))), (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:notFunctionError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3802);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:notFunctionError", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3808);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(3809);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3810);
	sp[0].o = frame[0].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(3811);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.function.not.found"_j))), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3813);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.isnt.function"_j));
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_java_lang_String_R_java_lang_RuntimeException(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:notFunctionError", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3819);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3820);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeFunction)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3822);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[3].o), (41));
	frame[4].i = temp0;
	LINE_NUMBER(3823);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[3].o), (123), (frame[4].i));
	frame[5].i = temp1;
	LINE_NUMBER(3824);
	if ((frame[5].i) <= (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(3825);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[3].o), (jint(0)), ((frame[5].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"...}"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(3828);
	sp[0].o = frame[1].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(3829);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.function.not.found.in"_j))), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(3832);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.isnt.function.in"_j));
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = frame[1].o;
	LINE_NUMBER(3833);
	sp[3].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, sp[3].o);
	LINE_NUMBER(3832);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError3_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_notXmlError_java_lang_Object_R_java_lang_RuntimeException(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:notXmlError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3837);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.isnt.xml.object"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_warnAboutNonJSObject_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:warnAboutNonJSObject", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3841);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"params.omit.non.js.object.warning"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3842);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"true"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"true"_j))), (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(3843);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.non.js.object.warning"_j));
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage2_java_lang_String_java_lang_Object_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3844);
	SM_rhino_Context_reportWarning_java_lang_String(ctx, (frame[2].o));
	LINE_NUMBER(3846);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_err;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	}
label_2:;
	LINE_NUMBER(3848);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_getRegExpProxy_rhino_Context_R_rhino_RegExpProxy(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:getRegExpProxy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3851);
	sp[0].o = (jobject)((func_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_setRegExpProxy_rhino_Context_rhino_RegExpProxy(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:setRegExpProxy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3855);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3856);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_regExpProxy = (jref) (frame[1].o);
	LINE_NUMBER(3857);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_checkRegExpProxy_rhino_Context_R_rhino_RegExpProxy(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:checkRegExpProxy", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3860);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getRegExpProxy_rhino_Context_R_rhino_RegExpProxy(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3861);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(3862);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.no.regexp"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(3864);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:wrapRegExp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3869);
	sp[0].o = (jobject)((func_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_RegExpProxy_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_RegExpProxy, INDEX_rhino_RegExpProxy_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_storeUint32Result_rhino_Context_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:storeUint32Result", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(3873);
	if ((longCompare((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32))), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3874);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3875);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_scratchUint32 = (frame[1].l);
	LINE_NUMBER(3876);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong SM_rhino_ScriptRuntime_lastUint32Result_rhino_Context_R_long(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:lastUint32Result", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3879);
	frame[1].l = ((jlong)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_scratchUint32);
	LINE_NUMBER(3880);
	if ((longCompare((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32))), (jlong(0)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3881);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(3882);
	popStackFrame(ctx);
	return (frame[1].l);
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptRuntime_storeScriptable_rhino_Context_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:storeScriptable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3887);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_scratchScriptable;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3888);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3889);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_scratchScriptable = (jref) (frame[1].o);
	LINE_NUMBER(3890);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:lastStoredScriptable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3893);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_scratchScriptable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(3894);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_scratchScriptable = (jref) (jobject(nullptr));
	LINE_NUMBER(3895);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_makeUrlForGeneratedScript_boolean_java_lang_String_int_R_java_lang_String(jcontext ctx, jbool param0, jobject param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:makeUrlForGeneratedScript", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3900);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3901);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (35));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(eval)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3903);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (35));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(Function)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isGeneratedScript_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isGeneratedScript", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3909);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"(eval)"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"(Function)"_j));
	LINE_NUMBER(3910);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(3909);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:isSymbol", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3918);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeSymbol)) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_rhino_NativeSymbol_isSymbol_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[0].o))))->vtable)[VTABLE_rhino_NativeSymbol_isSymbol_R_boolean])(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[0].o))));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_SymbolKey)) == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_errorWithClassName_java_lang_String_java_lang_Object_R_java_lang_RuntimeException(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:errorWithClassName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3923);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_throwError_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_JavaScriptException(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:throwError", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3935);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3936);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3937);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Error;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (frame[4].o);
	jint temp0 = jint(2);
	jint temp1 = (jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)));
	LINE_NUMBER(3938);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	LINE_NUMBER(3937);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_newBuiltinObject_rhino_Context_rhino_Scriptable_rhino_TopLevel$Builtins_Array1_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(3939);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, (frame[5].o), (frame[4].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptRuntime_throwCustomError_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_R_rhino_JavaScriptException(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:throwCustomError", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(3952);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3953);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3954);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[3].o);
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (frame[5].o);
	jint temp0 = jint(2);
	jint temp1 = (jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0)));
	LINE_NUMBER(3955);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	LINE_NUMBER(3954);
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(3956);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, (frame[6].o), (frame[5].o), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_ScriptRuntime(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_ScriptRuntime_NaN = jdouble(std::numeric_limits<double>::quiet_NaN());
	SF_rhino_ScriptRuntime_DEFAULT_NS_TAG = ((jobject) createStringLiteral(ctx, u8"__default_namespace__"_j));
	SF_rhino_ScriptRuntime_ENUMERATE_KEYS = jint(0);
	SF_rhino_ScriptRuntime_ENUMERATE_VALUES = jint(1);
	SF_rhino_ScriptRuntime_ENUMERATE_ARRAY = jint(2);
	SF_rhino_ScriptRuntime_ENUMERATE_KEYS_NO_ITERATOR = jint(3);
	SF_rhino_ScriptRuntime_ENUMERATE_VALUES_NO_ITERATOR = jint(4);
	SF_rhino_ScriptRuntime_ENUMERATE_ARRAY_NO_ITERATOR = jint(5);
	SF_rhino_ScriptRuntime_ENUMERATE_VALUES_IN_ORDER = jint(6);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime(ctx);
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Boolean"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_BooleanClass = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Byte"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_ByteClass = sp[0].o;
	LINE_NUMBER(88);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Character"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_CharacterClass = sp[0].o;
	LINE_NUMBER(89);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Class"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_ClassClass = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Double"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_DoubleClass = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Float"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_FloatClass = sp[0].o;
	LINE_NUMBER(92);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Integer"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_IntegerClass = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Long"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_LongClass = sp[0].o;
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Number"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_NumberClass = sp[0].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Object"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_ObjectClass = sp[0].o;
	LINE_NUMBER(96);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.Short"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_ShortClass = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.lang.String"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_StringClass = sp[0].o;
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"java.util.Date"_j))));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_DateClass = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"rhino.Context"_j));
	LINE_NUMBER(102);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_ContextClass = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"rhino.ContextFactory"_j));
	LINE_NUMBER(104);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_ContextFactoryClass = sp[0].o;
	LINE_NUMBER(105);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"rhino.Function"_j));
	LINE_NUMBER(106);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_FunctionClass = sp[0].o;
	LINE_NUMBER(107);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"rhino.ScriptableObject"_j));
	LINE_NUMBER(108);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_ScriptableObjectClass = sp[0].o;
	LINE_NUMBER(109);
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_ScriptableClass = (((jobject) &class_rhino_Scriptable));
	LINE_NUMBER(112);
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_LIBRARY_SCOPE_KEY = (((jobject) createStringLiteral(ctx, u8"LIBRARY_SCOPE"_j)));
	LINE_NUMBER(407);
	jdouble temp0 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, (bit_cast<jlong>(0x8000000000000000ll)));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_negativeZero = temp0;
	LINE_NUMBER(409);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(std::numeric_limits<double>::quiet_NaN())));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_NaNobj = sp[0].o;
	LINE_NUMBER(3678);
	clinit_rhino_ScriptRuntime$DefaultMessageProvider(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptRuntime$DefaultMessageProvider);
	init_rhino_ScriptRuntime$DefaultMessageProvider_rhino_ScriptRuntime$1(ctx, sp[0].o, (jobject(nullptr)));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_messageProvider = sp[0].o;
	LINE_NUMBER(3959);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_emptyArgs = sp[0].o;
	LINE_NUMBER(3960);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	clinit_rhino_ScriptRuntime(ctx);
	SF_rhino_ScriptRuntime_emptyStrings = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ScriptRuntime[] {
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
	&class_rhino_ScriptRuntime$DefaultMessageProvider,
	&class_rhino_ScriptRuntime$MessageProvider,
	&class_rhino_ScriptRuntime$IdEnumeration,
	&class_rhino_ScriptRuntime$StringIdOrIndex,
	&class_rhino_ScriptRuntime$NoSuchMethodShim,
};

static FieldMetadata fields[] {
	{ "BooleanClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_BooleanClass, "Ljava/lang/Class;", 25 },
	{ "ByteClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_ByteClass, "Ljava/lang/Class;", 25 },
	{ "CharacterClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_CharacterClass, "Ljava/lang/Class;", 25 },
	{ "ClassClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_ClassClass, "Ljava/lang/Class;", 25 },
	{ "DoubleClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_DoubleClass, "Ljava/lang/Class;", 25 },
	{ "FloatClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_FloatClass, "Ljava/lang/Class;", 25 },
	{ "IntegerClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_IntegerClass, "Ljava/lang/Class;", 25 },
	{ "LongClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_LongClass, "Ljava/lang/Class;", 25 },
	{ "NumberClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_NumberClass, "Ljava/lang/Class;", 25 },
	{ "ObjectClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_ObjectClass, "Ljava/lang/Class;", 25 },
	{ "ShortClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_ShortClass, "Ljava/lang/Class;", 25 },
	{ "StringClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_StringClass, "Ljava/lang/Class;", 25 },
	{ "DateClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_DateClass, "Ljava/lang/Class;", 25 },
	{ "ContextClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_ContextClass, "Ljava/lang/Class;", 25 },
	{ "ContextFactoryClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_ContextFactoryClass, "Ljava/lang/Class;", 25 },
	{ "FunctionClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_FunctionClass, "Ljava/lang/Class;", 25 },
	{ "ScriptableObjectClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_ScriptableObjectClass, "Ljava/lang/Class;", 25 },
	{ "ScriptableClass", &class_java_lang_Class, (intptr_t) &SF_rhino_ScriptRuntime_ScriptableClass, "Ljava/lang/Class;", 25 },
	{ "LIBRARY_SCOPE_KEY", &class_java_lang_Object, (intptr_t) &SF_rhino_ScriptRuntime_LIBRARY_SCOPE_KEY, "Ljava/lang/Object;", 26 },
	{ "NaN", &class_double, (intptr_t) &SF_rhino_ScriptRuntime_NaN, "D", 25 },
	{ "negativeZero", &class_double, (intptr_t) &SF_rhino_ScriptRuntime_negativeZero, "D", 25 },
	{ "NaNobj", &class_java_lang_Double, (intptr_t) &SF_rhino_ScriptRuntime_NaNobj, "Ljava/lang/Double;", 25 },
	{ "DEFAULT_NS_TAG", &class_java_lang_String, (intptr_t) &SF_rhino_ScriptRuntime_DEFAULT_NS_TAG, "Ljava/lang/String;", 26 },
	{ "ENUMERATE_KEYS", &class_int, (intptr_t) &SF_rhino_ScriptRuntime_ENUMERATE_KEYS, "I", 25 },
	{ "ENUMERATE_VALUES", &class_int, (intptr_t) &SF_rhino_ScriptRuntime_ENUMERATE_VALUES, "I", 25 },
	{ "ENUMERATE_ARRAY", &class_int, (intptr_t) &SF_rhino_ScriptRuntime_ENUMERATE_ARRAY, "I", 25 },
	{ "ENUMERATE_KEYS_NO_ITERATOR", &class_int, (intptr_t) &SF_rhino_ScriptRuntime_ENUMERATE_KEYS_NO_ITERATOR, "I", 25 },
	{ "ENUMERATE_VALUES_NO_ITERATOR", &class_int, (intptr_t) &SF_rhino_ScriptRuntime_ENUMERATE_VALUES_NO_ITERATOR, "I", 25 },
	{ "ENUMERATE_ARRAY_NO_ITERATOR", &class_int, (intptr_t) &SF_rhino_ScriptRuntime_ENUMERATE_ARRAY_NO_ITERATOR, "I", 25 },
	{ "ENUMERATE_VALUES_IN_ORDER", &class_int, (intptr_t) &SF_rhino_ScriptRuntime_ENUMERATE_VALUES_IN_ORDER, "I", 25 },
	{ "messageProvider", &class_rhino_ScriptRuntime$MessageProvider, (intptr_t) &SF_rhino_ScriptRuntime_messageProvider, "Lrhino/ScriptRuntime$MessageProvider;", 25 },
	{ "emptyArgs", getArrayClass(&class_java_lang_Object, 1), (intptr_t) &SF_rhino_ScriptRuntime_emptyArgs, "[Ljava/lang/Object;", 25 },
	{ "emptyStrings", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_rhino_ScriptRuntime_emptyStrings, "[Ljava/lang/String;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ScriptRuntime, 0, "()V", 4 },
	{ "typeErrorThrower", (intptr_t) SM_rhino_ScriptRuntime_typeErrorThrower_rhino_Context_R_rhino_BaseFunction, 0, "(Lrhino/Context;)Lrhino/BaseFunction;", 9 },
	{ "isRhinoRuntimeType", (intptr_t) SM_rhino_ScriptRuntime_isRhinoRuntimeType_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "initSafeStandardObjects", (intptr_t) SM_rhino_ScriptRuntime_initSafeStandardObjects_rhino_Context_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject, 0, "(Lrhino/Context;Lrhino/ScriptableObject;Z)Lrhino/ScriptableObject;", 9 },
	{ "initStandardObjects", (intptr_t) SM_rhino_ScriptRuntime_initStandardObjects_rhino_Context_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject, 0, "(Lrhino/Context;Lrhino/ScriptableObject;Z)Lrhino/ScriptableObject;", 9 },
	{ "getTopPackageNames", (intptr_t) SM_rhino_ScriptRuntime_getTopPackageNames_R_Array1_java_lang_String, 0, "()[Ljava/lang/String;", 8 },
	{ "getLibraryScopeOrNull", (intptr_t) SM_rhino_ScriptRuntime_getLibraryScopeOrNull_rhino_Scriptable_R_rhino_ScriptableObject, 0, "(Lrhino/Scriptable;)Lrhino/ScriptableObject;", 9 },
	{ "isJSLineTerminator", (intptr_t) SM_rhino_ScriptRuntime_isJSLineTerminator_int_R_boolean, 0, "(I)Z", 9 },
	{ "isJSWhitespaceOrLineTerminator", (intptr_t) SM_rhino_ScriptRuntime_isJSWhitespaceOrLineTerminator_int_R_boolean, 0, "(I)Z", 9 },
	{ "isStrWhiteSpaceChar", (intptr_t) SM_rhino_ScriptRuntime_isStrWhiteSpaceChar_int_R_boolean, 0, "(I)Z", 8 },
	{ "wrapBoolean", (intptr_t) SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean, 0, "(Z)Ljava/lang/Boolean;", 9 },
	{ "wrapInt", (intptr_t) SM_rhino_ScriptRuntime_wrapInt_int_R_java_lang_Integer, 0, "(I)Ljava/lang/Integer;", 9 },
	{ "wrapNumber", (intptr_t) SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number, 0, "(D)Ljava/lang/Number;", 9 },
	{ "toBoolean", (intptr_t) SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 9 },
	{ "toNumber", (intptr_t) SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double, 0, "(Ljava/lang/Object;)D", 9 },
	{ "toNumber", (intptr_t) SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double, 0, "([Ljava/lang/Object;I)D", 9 },
	{ "stringPrefixToNumber", (intptr_t) SM_rhino_ScriptRuntime_stringPrefixToNumber_java_lang_String_int_int_R_double, 0, "(Ljava/lang/String;II)D", 8 },
	{ "stringToNumber", (intptr_t) SM_rhino_ScriptRuntime_stringToNumber_java_lang_String_int_int_int_R_double, 0, "(Ljava/lang/String;III)D", 8 },
	{ "stringToNumber", (intptr_t) SM_rhino_ScriptRuntime_stringToNumber_java_lang_String_int_int_int_boolean_R_double, 0, "(Ljava/lang/String;IIIZ)D", 10 },
	{ "toNumber", (intptr_t) SM_rhino_ScriptRuntime_toNumber_java_lang_String_R_double, 0, "(Ljava/lang/String;)D", 9 },
	{ "padArguments", (intptr_t) SM_rhino_ScriptRuntime_padArguments_Array1_java_lang_Object_int_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;I)[Ljava/lang/Object;", 9 },
	{ "escapeString", (intptr_t) SM_rhino_ScriptRuntime_escapeString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "escapeString", (intptr_t) SM_rhino_ScriptRuntime_escapeString_java_lang_String_char_R_java_lang_String, 0, "(Ljava/lang/String;C)Ljava/lang/String;", 9 },
	{ "isValidIdentifierName", (intptr_t) SM_rhino_ScriptRuntime_isValidIdentifierName_java_lang_String_rhino_Context_boolean_R_boolean, 0, "(Ljava/lang/String;Lrhino/Context;Z)Z", 8 },
	{ "toCharSequence", (intptr_t) SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence, 0, "(Ljava/lang/Object;)Ljava/lang/CharSequence;", 9 },
	{ "toString", (intptr_t) SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "defaultObjectToString", (intptr_t) SM_rhino_ScriptRuntime_defaultObjectToString_rhino_Scriptable_R_java_lang_String, 0, "(Lrhino/Scriptable;)Ljava/lang/String;", 8 },
	{ "toString", (intptr_t) SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String, 0, "([Ljava/lang/Object;I)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_rhino_ScriptRuntime_toString_double_R_java_lang_String, 0, "(D)Ljava/lang/String;", 9 },
	{ "numberToString", (intptr_t) SM_rhino_ScriptRuntime_numberToString_double_int_R_java_lang_String, 0, "(DI)Ljava/lang/String;", 9 },
	{ "uneval", (intptr_t) SM_rhino_ScriptRuntime_uneval_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_String, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/String;", 8 },
	{ "defaultObjectToSource", (intptr_t) SM_rhino_ScriptRuntime_defaultObjectToSource_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_String, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/String;", 8 },
	{ "toObject", (intptr_t) SM_rhino_ScriptRuntime_toObject_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 9 },
	{ "toObjectOrNull", (intptr_t) SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable, 0, "(Lrhino/Context;Ljava/lang/Object;Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "toObject", (intptr_t) SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 9 },
	{ "newObject", (intptr_t) SM_rhino_ScriptRuntime_newObject_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;[Ljava/lang/Object;)Lrhino/Scriptable;", 9 },
	{ "newBuiltinObject", (intptr_t) SM_rhino_ScriptRuntime_newBuiltinObject_rhino_Context_rhino_Scriptable_rhino_TopLevel$Builtins_Array1_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/TopLevel$Builtins;[Ljava/lang/Object;)Lrhino/Scriptable;", 9 },
	{ "newNativeError", (intptr_t) SM_rhino_ScriptRuntime_newNativeError_rhino_Context_rhino_Scriptable_rhino_TopLevel$NativeErrors_Array1_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/TopLevel$NativeErrors;[Ljava/lang/Object;)Lrhino/Scriptable;", 8 },
	{ "toInteger", (intptr_t) SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double, 0, "(Ljava/lang/Object;)D", 9 },
	{ "toInteger", (intptr_t) SM_rhino_ScriptRuntime_toInteger_double_R_double, 0, "(D)D", 9 },
	{ "toInteger", (intptr_t) SM_rhino_ScriptRuntime_toInteger_Array1_java_lang_Object_int_R_double, 0, "([Ljava/lang/Object;I)D", 9 },
	{ "toLength", (intptr_t) SM_rhino_ScriptRuntime_toLength_Array1_java_lang_Object_int_R_long, 0, "([Ljava/lang/Object;I)J", 9 },
	{ "toInt32", (intptr_t) SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int, 0, "(Ljava/lang/Object;)I", 9 },
	{ "toInt32", (intptr_t) SM_rhino_ScriptRuntime_toInt32_Array1_java_lang_Object_int_R_int, 0, "([Ljava/lang/Object;I)I", 9 },
	{ "toInt32", (intptr_t) SM_rhino_ScriptRuntime_toInt32_double_R_int, 0, "(D)I", 9 },
	{ "toUint32", (intptr_t) SM_rhino_ScriptRuntime_toUint32_double_R_long, 0, "(D)J", 9 },
	{ "toUint32", (intptr_t) SM_rhino_ScriptRuntime_toUint32_java_lang_Object_R_long, 0, "(Ljava/lang/Object;)J", 9 },
	{ "toUint16", (intptr_t) SM_rhino_ScriptRuntime_toUint16_java_lang_Object_R_char, 0, "(Ljava/lang/Object;)C", 9 },
	{ "searchDefaultNamespace", (intptr_t) SM_rhino_ScriptRuntime_searchDefaultNamespace_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "getTopLevelProp", (intptr_t) SM_rhino_ScriptRuntime_getTopLevelProp_rhino_Scriptable_java_lang_String_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "getExistingCtor", (intptr_t) SM_rhino_ScriptRuntime_getExistingCtor_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_Function, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;)Lrhino/Function;", 8 },
	{ "indexFromString", (intptr_t) SM_rhino_ScriptRuntime_indexFromString_java_lang_String_R_long, 0, "(Ljava/lang/String;)J", 9 },
	{ "testUint32String", (intptr_t) SM_rhino_ScriptRuntime_testUint32String_java_lang_String_R_long, 0, "(Ljava/lang/String;)J", 9 },
	{ "getIndexObject", (intptr_t) SM_rhino_ScriptRuntime_getIndexObject_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/String;)Ljava/lang/Object;", 8 },
	{ "getIndexObject", (intptr_t) SM_rhino_ScriptRuntime_getIndexObject_double_R_java_lang_Object, 0, "(D)Ljava/lang/Object;", 8 },
	{ "toStringIdOrIndex", (intptr_t) SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex, 0, "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptRuntime$StringIdOrIndex;", 8 },
	{ "getObjectElem", (intptr_t) SM_rhino_ScriptRuntime_getObjectElem_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "getObjectElem", (intptr_t) SM_rhino_ScriptRuntime_getObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/Object;Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "getObjectProp", (intptr_t) SM_rhino_ScriptRuntime_getObjectProp_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/String;Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "getObjectProp", (intptr_t) SM_rhino_ScriptRuntime_getObjectProp_rhino_Scriptable_java_lang_String_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/String;Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "getObjectPropNoWarn", (intptr_t) SM_rhino_ScriptRuntime_getObjectPropNoWarn_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/String;Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "getObjectIndex", (intptr_t) SM_rhino_ScriptRuntime_getObjectIndex_java_lang_Object_double_rhino_Context_R_java_lang_Object, 0, "(Ljava/lang/Object;DLrhino/Context;)Ljava/lang/Object;", 9 },
	{ "getObjectIndex", (intptr_t) SM_rhino_ScriptRuntime_getObjectIndex_java_lang_Object_double_rhino_Context_rhino_Scriptable_R_java_lang_Object, 0, "(Ljava/lang/Object;DLrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "getObjectIndex", (intptr_t) SM_rhino_ScriptRuntime_getObjectIndex_rhino_Scriptable_int_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Scriptable;ILrhino/Context;)Ljava/lang/Object;", 9 },
	{ "setObjectElem", (intptr_t) SM_rhino_ScriptRuntime_setObjectElem_java_lang_Object_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "setObjectElem", (intptr_t) SM_rhino_ScriptRuntime_setObjectElem_rhino_Scriptable_java_lang_Object_java_lang_Object_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "setObjectProp", (intptr_t) SM_rhino_ScriptRuntime_setObjectProp_java_lang_Object_java_lang_String_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "setObjectProp", (intptr_t) SM_rhino_ScriptRuntime_setObjectProp_rhino_Scriptable_java_lang_String_java_lang_Object_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Object;Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "setObjectIndex", (intptr_t) SM_rhino_ScriptRuntime_setObjectIndex_java_lang_Object_double_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object, 0, "(Ljava/lang/Object;DLjava/lang/Object;Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "setObjectIndex", (intptr_t) SM_rhino_ScriptRuntime_setObjectIndex_rhino_Scriptable_int_java_lang_Object_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Scriptable;ILjava/lang/Object;Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "deleteObjectElem", (intptr_t) SM_rhino_ScriptRuntime_deleteObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_boolean, 0, "(Lrhino/Scriptable;Ljava/lang/Object;Lrhino/Context;)Z", 9 },
	{ "hasObjectElem", (intptr_t) SM_rhino_ScriptRuntime_hasObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_boolean, 0, "(Lrhino/Scriptable;Ljava/lang/Object;Lrhino/Context;)Z", 9 },
	{ "refGet", (intptr_t) SM_rhino_ScriptRuntime_refGet_rhino_Ref_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Ref;Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "refSet", (intptr_t) SM_rhino_ScriptRuntime_refSet_rhino_Ref_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object, 0, "(Lrhino/Ref;Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "refDel", (intptr_t) SM_rhino_ScriptRuntime_refDel_rhino_Ref_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Ref;Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "isSpecialProperty", (intptr_t) SM_rhino_ScriptRuntime_isSpecialProperty_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 8 },
	{ "specialRef", (intptr_t) SM_rhino_ScriptRuntime_specialRef_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Ref, 0, "(Ljava/lang/Object;Ljava/lang/String;Lrhino/Context;Lrhino/Scriptable;)Lrhino/Ref;", 9 },
	{ "delete", (intptr_t) SM_rhino_ScriptRuntime_delete_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_boolean_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;Z)Ljava/lang/Object;", 9 },
	{ "delete", (intptr_t) SM_rhino_ScriptRuntime_delete_java_lang_Object_java_lang_Object_rhino_Context_boolean_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;Z)Ljava/lang/Object;", 9 },
	{ "name", (intptr_t) SM_rhino_ScriptRuntime_name_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "nameOrFunction", (intptr_t) SM_rhino_ScriptRuntime_nameOrFunction_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_String_boolean_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;Ljava/lang/String;Z)Ljava/lang/Object;", 10 },
	{ "topScopeName", (intptr_t) SM_rhino_ScriptRuntime_topScopeName_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;)Ljava/lang/Object;", 10 },
	{ "bind", (intptr_t) SM_rhino_ScriptRuntime_bind_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;)Lrhino/Scriptable;", 9 },
	{ "setName", (intptr_t) SM_rhino_ScriptRuntime_setName_rhino_Scriptable_java_lang_Object_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "strictSetName", (intptr_t) SM_rhino_ScriptRuntime_strictSetName_rhino_Scriptable_java_lang_Object_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "setConst", (intptr_t) SM_rhino_ScriptRuntime_setConst_rhino_Scriptable_java_lang_Object_rhino_Context_java_lang_String_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/Object;Lrhino/Context;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "toIterator", (intptr_t) SM_rhino_ScriptRuntime_toIterator_rhino_Context_rhino_Scriptable_rhino_Scriptable_boolean_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;Z)Lrhino/Scriptable;", 9 },
	{ "enumInit", (intptr_t) SM_rhino_ScriptRuntime_enumInit_java_lang_Object_rhino_Context_rhino_Scriptable_int_R_java_lang_Object, 0, "(Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;I)Ljava/lang/Object;", 9 },
	{ "enumInitInOrder", (intptr_t) SM_rhino_ScriptRuntime_enumInitInOrder_rhino_Context_rhino_ScriptRuntime$IdEnumeration_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/ScriptRuntime$IdEnumeration;)Ljava/lang/Object;", 10 },
	{ "setEnumNumbers", (intptr_t) SM_rhino_ScriptRuntime_setEnumNumbers_java_lang_Object_boolean, 0, "(Ljava/lang/Object;Z)V", 9 },
	{ "enumNext", (intptr_t) SM_rhino_ScriptRuntime_enumNext_java_lang_Object_R_java_lang_Boolean, 0, "(Ljava/lang/Object;)Ljava/lang/Boolean;", 9 },
	{ "enumNextInOrder", (intptr_t) SM_rhino_ScriptRuntime_enumNextInOrder_rhino_ScriptRuntime$IdEnumeration_R_java_lang_Boolean, 0, "(Lrhino/ScriptRuntime$IdEnumeration;)Ljava/lang/Boolean;", 10 },
	{ "enumId", (intptr_t) SM_rhino_ScriptRuntime_enumId_java_lang_Object_rhino_Context_R_java_lang_Object, 0, "(Ljava/lang/Object;Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "enumValue", (intptr_t) SM_rhino_ScriptRuntime_enumValue_java_lang_Object_rhino_Context_R_java_lang_Object, 0, "(Ljava/lang/Object;Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "enumChangeObject", (intptr_t) SM_rhino_ScriptRuntime_enumChangeObject_rhino_ScriptRuntime$IdEnumeration, 0, "(Lrhino/ScriptRuntime$IdEnumeration;)V", 10 },
	{ "getNameFunctionAndThis", (intptr_t) SM_rhino_ScriptRuntime_getNameFunctionAndThis_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable, 0, "(Ljava/lang/String;Lrhino/Context;Lrhino/Scriptable;)Lrhino/Callable;", 9 },
	{ "getElemFunctionAndThis", (intptr_t) SM_rhino_ScriptRuntime_getElemFunctionAndThis_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_rhino_Callable, 0, "(Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;)Lrhino/Callable;", 9 },
	{ "getPropFunctionAndThis", (intptr_t) SM_rhino_ScriptRuntime_getPropFunctionAndThis_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable, 0, "(Ljava/lang/Object;Ljava/lang/String;Lrhino/Context;Lrhino/Scriptable;)Lrhino/Callable;", 9 },
	{ "getPropFunctionAndThisHelper", (intptr_t) SM_rhino_ScriptRuntime_getPropFunctionAndThisHelper_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable, 0, "(Ljava/lang/Object;Ljava/lang/String;Lrhino/Context;Lrhino/Scriptable;)Lrhino/Callable;", 10 },
	{ "getValueFunctionAndThis", (intptr_t) SM_rhino_ScriptRuntime_getValueFunctionAndThis_java_lang_Object_rhino_Context_R_rhino_Callable, 0, "(Ljava/lang/Object;Lrhino/Context;)Lrhino/Callable;", 9 },
	{ "callIterator", (intptr_t) SM_rhino_ScriptRuntime_callIterator_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object, 0, "(Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "isIteratorDone", (intptr_t) SM_rhino_ScriptRuntime_isIteratorDone_rhino_Context_java_lang_Object_R_boolean, 0, "(Lrhino/Context;Ljava/lang/Object;)Z", 9 },
	{ "callRef", (intptr_t) SM_rhino_ScriptRuntime_callRef_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_rhino_Context_R_rhino_Ref, 0, "(Lrhino/Callable;Lrhino/Scriptable;[Ljava/lang/Object;Lrhino/Context;)Lrhino/Ref;", 9 },
	{ "newObject", (intptr_t) SM_rhino_ScriptRuntime_newObject_java_lang_Object_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, 0, "(Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 9 },
	{ "callSpecial", (intptr_t) SM_rhino_ScriptRuntime_callSpecial_rhino_Context_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_rhino_Scriptable_rhino_Scriptable_int_java_lang_String_int_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Callable;Lrhino/Scriptable;[Ljava/lang/Object;Lrhino/Scriptable;Lrhino/Scriptable;ILjava/lang/String;I)Ljava/lang/Object;", 9 },
	{ "newSpecial", (intptr_t) SM_rhino_ScriptRuntime_newSpecial_rhino_Context_java_lang_Object_Array1_java_lang_Object_rhino_Scriptable_int_R_java_lang_Object, 0, "(Lrhino/Context;Ljava/lang/Object;[Ljava/lang/Object;Lrhino/Scriptable;I)Ljava/lang/Object;", 9 },
	{ "applyOrCall", (intptr_t) SM_rhino_ScriptRuntime_applyOrCall_boolean_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(ZLrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "isArrayLike", (intptr_t) SM_rhino_ScriptRuntime_isArrayLike_rhino_Scriptable_R_boolean, 0, "(Lrhino/Scriptable;)Z", 10 },
	{ "getApplyArguments", (intptr_t) SM_rhino_ScriptRuntime_getApplyArguments_rhino_Context_java_lang_Object_R_Array1_java_lang_Object, 0, "(Lrhino/Context;Ljava/lang/Object;)[Ljava/lang/Object;", 8 },
	{ "getCallable", (intptr_t) SM_rhino_ScriptRuntime_getCallable_rhino_Scriptable_R_rhino_Callable, 0, "(Lrhino/Scriptable;)Lrhino/Callable;", 8 },
	{ "evalSpecial", (intptr_t) SM_rhino_ScriptRuntime_evalSpecial_rhino_Context_rhino_Scriptable_java_lang_Object_Array1_java_lang_Object_java_lang_String_int_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/String;I)Ljava/lang/Object;", 9 },
	{ "typeof", (intptr_t) SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "typeofName", (intptr_t) SM_rhino_ScriptRuntime_typeofName_rhino_Scriptable_java_lang_String_R_java_lang_String, 0, "(Lrhino/Scriptable;Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "isObject", (intptr_t) SM_rhino_ScriptRuntime_isObject_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 9 },
	{ "add", (intptr_t) SM_rhino_ScriptRuntime_add_java_lang_Object_java_lang_Object_rhino_Context_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;)Ljava/lang/Object;", 9 },
	{ "add", (intptr_t) SM_rhino_ScriptRuntime_add_java_lang_CharSequence_java_lang_Object_R_java_lang_CharSequence, 0, "(Ljava/lang/CharSequence;Ljava/lang/Object;)Ljava/lang/CharSequence;", 9 },
	{ "add", (intptr_t) SM_rhino_ScriptRuntime_add_java_lang_Object_java_lang_CharSequence_R_java_lang_CharSequence, 0, "(Ljava/lang/Object;Ljava/lang/CharSequence;)Ljava/lang/CharSequence;", 9 },
	{ "nameIncrDecr", (intptr_t) SM_rhino_ScriptRuntime_nameIncrDecr_rhino_Scriptable_java_lang_String_rhino_Context_int_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/String;Lrhino/Context;I)Ljava/lang/Object;", 9 },
	{ "propIncrDecr", (intptr_t) SM_rhino_ScriptRuntime_propIncrDecr_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_int_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/String;Lrhino/Context;Lrhino/Scriptable;I)Ljava/lang/Object;", 9 },
	{ "doScriptableIncrDecr", (intptr_t) SM_rhino_ScriptRuntime_doScriptableIncrDecr_rhino_Scriptable_java_lang_String_rhino_Scriptable_java_lang_Object_int_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;I)Ljava/lang/Object;", 10 },
	{ "elemIncrDecr", (intptr_t) SM_rhino_ScriptRuntime_elemIncrDecr_java_lang_Object_java_lang_Object_rhino_Context_int_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;I)Ljava/lang/Object;", 9 },
	{ "elemIncrDecr", (intptr_t) SM_rhino_ScriptRuntime_elemIncrDecr_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_int_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;I)Ljava/lang/Object;", 9 },
	{ "refIncrDecr", (intptr_t) SM_rhino_ScriptRuntime_refIncrDecr_rhino_Ref_rhino_Context_int_R_java_lang_Object, 0, "(Lrhino/Ref;Lrhino/Context;I)Ljava/lang/Object;", 9 },
	{ "refIncrDecr", (intptr_t) SM_rhino_ScriptRuntime_refIncrDecr_rhino_Ref_rhino_Context_rhino_Scriptable_int_R_java_lang_Object, 0, "(Lrhino/Ref;Lrhino/Context;Lrhino/Scriptable;I)Ljava/lang/Object;", 9 },
	{ "toPrimitive", (intptr_t) SM_rhino_ScriptRuntime_toPrimitive_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "toPrimitive", (intptr_t) SM_rhino_ScriptRuntime_toPrimitive_java_lang_Object_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", 9 },
	{ "eq", (intptr_t) SM_rhino_ScriptRuntime_eq_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "same", (intptr_t) SM_rhino_ScriptRuntime_same_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "sameZero", (intptr_t) SM_rhino_ScriptRuntime_sameZero_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "isNaN", (intptr_t) SM_rhino_ScriptRuntime_isNaN_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 9 },
	{ "isPrimitive", (intptr_t) SM_rhino_ScriptRuntime_isPrimitive_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 9 },
	{ "eqNumber", (intptr_t) SM_rhino_ScriptRuntime_eqNumber_double_java_lang_Object_R_boolean, 0, "(DLjava/lang/Object;)Z", 8 },
	{ "eqString", (intptr_t) SM_rhino_ScriptRuntime_eqString_java_lang_CharSequence_java_lang_Object_R_boolean, 0, "(Ljava/lang/CharSequence;Ljava/lang/Object;)Z", 10 },
	{ "shallowEq", (intptr_t) SM_rhino_ScriptRuntime_shallowEq_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "instanceOf", (intptr_t) SM_rhino_ScriptRuntime_instanceOf_java_lang_Object_java_lang_Object_rhino_Context_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;)Z", 9 },
	{ "jsDelegatesTo", (intptr_t) SM_rhino_ScriptRuntime_jsDelegatesTo_rhino_Scriptable_rhino_Scriptable_R_boolean, 0, "(Lrhino/Scriptable;Lrhino/Scriptable;)Z", 9 },
	{ "in", (intptr_t) SM_rhino_ScriptRuntime_in_java_lang_Object_java_lang_Object_rhino_Context_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;Lrhino/Context;)Z", 9 },
	{ "cmp_LT", (intptr_t) SM_rhino_ScriptRuntime_cmp_LT_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "cmp_LE", (intptr_t) SM_rhino_ScriptRuntime_cmp_LE_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "getGlobal", (intptr_t) SM_rhino_ScriptRuntime_getGlobal_rhino_Context_R_rhino_ScriptableObject, 0, "(Lrhino/Context;)Lrhino/ScriptableObject;", 9 },
	{ "hasTopCall", (intptr_t) SM_rhino_ScriptRuntime_hasTopCall_rhino_Context_R_boolean, 0, "(Lrhino/Context;)Z", 9 },
	{ "getTopCallScope", (intptr_t) SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable, 0, "(Lrhino/Context;)Lrhino/Scriptable;", 9 },
	{ "doTopCall", (intptr_t) SM_rhino_ScriptRuntime_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_boolean_R_java_lang_Object, 0, "(Lrhino/Callable;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;Z)Ljava/lang/Object;", 9 },
	{ "checkDynamicScope", (intptr_t) SM_rhino_ScriptRuntime_checkDynamicScope_rhino_Scriptable_rhino_Scriptable_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;Lrhino/Scriptable;)Lrhino/Scriptable;", 8 },
	{ "addInstructionCount", (intptr_t) SM_rhino_ScriptRuntime_addInstructionCount_rhino_Context_int, 0, "(Lrhino/Context;I)V", 9 },
	{ "initScript", (intptr_t) SM_rhino_ScriptRuntime_initScript_rhino_NativeFunction_rhino_Scriptable_rhino_Context_rhino_Scriptable_boolean, 0, "(Lrhino/NativeFunction;Lrhino/Scriptable;Lrhino/Context;Lrhino/Scriptable;Z)V", 9 },
	{ "createFunctionActivation", (intptr_t) SM_rhino_ScriptRuntime_createFunctionActivation_rhino_NativeFunction_rhino_Scriptable_Array1_java_lang_Object_boolean_R_rhino_Scriptable, 0, "(Lrhino/NativeFunction;Lrhino/Scriptable;[Ljava/lang/Object;Z)Lrhino/Scriptable;", 9 },
	{ "createArrowFunctionActivation", (intptr_t) SM_rhino_ScriptRuntime_createArrowFunctionActivation_rhino_NativeFunction_rhino_Scriptable_Array1_java_lang_Object_boolean_R_rhino_Scriptable, 0, "(Lrhino/NativeFunction;Lrhino/Scriptable;[Ljava/lang/Object;Z)Lrhino/Scriptable;", 9 },
	{ "enterActivationFunction", (intptr_t) SM_rhino_ScriptRuntime_enterActivationFunction_rhino_Context_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;)V", 9 },
	{ "exitActivationFunction", (intptr_t) SM_rhino_ScriptRuntime_exitActivationFunction_rhino_Context, 0, "(Lrhino/Context;)V", 9 },
	{ "findFunctionActivation", (intptr_t) SM_rhino_ScriptRuntime_findFunctionActivation_rhino_Context_rhino_Function_R_rhino_NativeCall, 0, "(Lrhino/Context;Lrhino/Function;)Lrhino/NativeCall;", 8 },
	{ "newCatchScope", (intptr_t) SM_rhino_ScriptRuntime_newCatchScope_java_lang_Throwable_rhino_Scriptable_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Scriptable, 0, "(Ljava/lang/Throwable;Lrhino/Scriptable;Ljava/lang/String;Lrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "wrapException", (intptr_t) SM_rhino_ScriptRuntime_wrapException_java_lang_Throwable_rhino_Scriptable_rhino_Context_R_rhino_Scriptable, 0, "(Ljava/lang/Throwable;Lrhino/Scriptable;Lrhino/Context;)Lrhino/Scriptable;", 9 },
	{ "isVisible", (intptr_t) SM_rhino_ScriptRuntime_isVisible_rhino_Context_java_lang_Object_R_boolean, 0, "(Lrhino/Context;Ljava/lang/Object;)Z", 10 },
	{ "enterWith", (intptr_t) SM_rhino_ScriptRuntime_enterWith_java_lang_Object_rhino_Context_rhino_Scriptable_R_rhino_Scriptable, 0, "(Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "leaveWith", (intptr_t) SM_rhino_ScriptRuntime_leaveWith_rhino_Scriptable_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "updateDotQuery", (intptr_t) SM_rhino_ScriptRuntime_updateDotQuery_boolean_rhino_Scriptable_R_java_lang_Object, 0, "(ZLrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "leaveDotQuery", (intptr_t) SM_rhino_ScriptRuntime_leaveDotQuery_rhino_Scriptable_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "setFunctionProtoAndParent", (intptr_t) SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable, 0, "(Lrhino/BaseFunction;Lrhino/Scriptable;)V", 9 },
	{ "setFunctionProtoAndParent", (intptr_t) SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable_boolean, 0, "(Lrhino/BaseFunction;Lrhino/Scriptable;Z)V", 9 },
	{ "setObjectProtoAndParent", (intptr_t) SM_rhino_ScriptRuntime_setObjectProtoAndParent_rhino_ScriptableObject_rhino_Scriptable, 0, "(Lrhino/ScriptableObject;Lrhino/Scriptable;)V", 9 },
	{ "setBuiltinProtoAndParent", (intptr_t) SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins, 0, "(Lrhino/ScriptableObject;Lrhino/Scriptable;Lrhino/TopLevel$Builtins;)V", 9 },
	{ "initFunction", (intptr_t) SM_rhino_ScriptRuntime_initFunction_rhino_Context_rhino_Scriptable_rhino_NativeFunction_int_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/NativeFunction;IZ)V", 9 },
	{ "newArrayLiteral", (intptr_t) SM_rhino_ScriptRuntime_newArrayLiteral_Array1_java_lang_Object_Array1_int_rhino_Context_rhino_Scriptable_R_rhino_Scriptable, 0, "([Ljava/lang/Object;[ILrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "newObjectLiteral", (intptr_t) SM_rhino_ScriptRuntime_newObjectLiteral_Array1_java_lang_Object_Array1_java_lang_Object_Array1_int_rhino_Context_rhino_Scriptable_R_rhino_Scriptable, 0, "([Ljava/lang/Object;[Ljava/lang/Object;[ILrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "isArrayObject", (intptr_t) SM_rhino_ScriptRuntime_isArrayObject_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 9 },
	{ "getArrayElements", (intptr_t) SM_rhino_ScriptRuntime_getArrayElements_rhino_Scriptable_R_Array1_java_lang_Object, 0, "(Lrhino/Scriptable;)[Ljava/lang/Object;", 9 },
	{ "checkDeprecated", (intptr_t) SM_rhino_ScriptRuntime_checkDeprecated_rhino_Context_java_lang_String, 0, "(Lrhino/Context;Ljava/lang/String;)V", 8 },
	{ "getMessage0", (intptr_t) SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "getMessage1", (intptr_t) SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "getMessage2", (intptr_t) SM_rhino_ScriptRuntime_getMessage2_java_lang_String_java_lang_Object_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "getMessage3", (intptr_t) SM_rhino_ScriptRuntime_getMessage3_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "getMessage4", (intptr_t) SM_rhino_ScriptRuntime_getMessage4_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "getMessage", (intptr_t) SM_rhino_ScriptRuntime_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "constructError", (intptr_t) SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError, 0, "(Ljava/lang/String;Ljava/lang/String;)Lrhino/EcmaError;", 9 },
	{ "constructError", (intptr_t) SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_int_R_rhino_EcmaError, 0, "(Ljava/lang/String;Ljava/lang/String;I)Lrhino/EcmaError;", 9 },
	{ "constructError", (intptr_t) SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EcmaError, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)Lrhino/EcmaError;", 9 },
	{ "rangeError", (intptr_t) SM_rhino_ScriptRuntime_rangeError_java_lang_String_R_rhino_EcmaError, 0, "(Ljava/lang/String;)Lrhino/EcmaError;", 9 },
	{ "typeError", (intptr_t) SM_rhino_ScriptRuntime_typeError_java_lang_String_R_rhino_EcmaError, 0, "(Ljava/lang/String;)Lrhino/EcmaError;", 9 },
	{ "typeError0", (intptr_t) SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError, 0, "(Ljava/lang/String;)Lrhino/EcmaError;", 9 },
	{ "typeError1", (intptr_t) SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError, 0, "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/EcmaError;", 9 },
	{ "typeError2", (intptr_t) SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError, 0, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lrhino/EcmaError;", 9 },
	{ "typeError3", (intptr_t) SM_rhino_ScriptRuntime_typeError3_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_rhino_EcmaError, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lrhino/EcmaError;", 9 },
	{ "undefReadError", (intptr_t) SM_rhino_ScriptRuntime_undefReadError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/RuntimeException;", 9 },
	{ "undefCallError", (intptr_t) SM_rhino_ScriptRuntime_undefCallError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/RuntimeException;", 9 },
	{ "undefWriteError", (intptr_t) SM_rhino_ScriptRuntime_undefWriteError_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException, 0, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/RuntimeException;", 9 },
	{ "undefDeleteError", (intptr_t) SM_rhino_ScriptRuntime_undefDeleteError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/RuntimeException;", 10 },
	{ "notFoundError", (intptr_t) SM_rhino_ScriptRuntime_notFoundError_rhino_Scriptable_java_lang_String_R_java_lang_RuntimeException, 0, "(Lrhino/Scriptable;Ljava/lang/String;)Ljava/lang/RuntimeException;", 9 },
	{ "notFunctionError", (intptr_t) SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException, 0, "(Ljava/lang/Object;)Ljava/lang/RuntimeException;", 9 },
	{ "notFunctionError", (intptr_t) SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/RuntimeException;", 9 },
	{ "notFunctionError", (intptr_t) SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_java_lang_String_R_java_lang_RuntimeException, 0, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/RuntimeException;", 9 },
	{ "notXmlError", (intptr_t) SM_rhino_ScriptRuntime_notXmlError_java_lang_Object_R_java_lang_RuntimeException, 0, "(Ljava/lang/Object;)Ljava/lang/RuntimeException;", 10 },
	{ "warnAboutNonJSObject", (intptr_t) SM_rhino_ScriptRuntime_warnAboutNonJSObject_java_lang_Object, 0, "(Ljava/lang/Object;)V", 10 },
	{ "getRegExpProxy", (intptr_t) SM_rhino_ScriptRuntime_getRegExpProxy_rhino_Context_R_rhino_RegExpProxy, 0, "(Lrhino/Context;)Lrhino/RegExpProxy;", 9 },
	{ "setRegExpProxy", (intptr_t) SM_rhino_ScriptRuntime_setRegExpProxy_rhino_Context_rhino_RegExpProxy, 0, "(Lrhino/Context;Lrhino/RegExpProxy;)V", 9 },
	{ "checkRegExpProxy", (intptr_t) SM_rhino_ScriptRuntime_checkRegExpProxy_rhino_Context_R_rhino_RegExpProxy, 0, "(Lrhino/Context;)Lrhino/RegExpProxy;", 9 },
	{ "wrapRegExp", (intptr_t) SM_rhino_ScriptRuntime_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 9 },
	{ "storeUint32Result", (intptr_t) SM_rhino_ScriptRuntime_storeUint32Result_rhino_Context_long, 0, "(Lrhino/Context;J)V", 9 },
	{ "lastUint32Result", (intptr_t) SM_rhino_ScriptRuntime_lastUint32Result_rhino_Context_R_long, 0, "(Lrhino/Context;)J", 9 },
	{ "storeScriptable", (intptr_t) SM_rhino_ScriptRuntime_storeScriptable_rhino_Context_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;)V", 10 },
	{ "lastStoredScriptable", (intptr_t) SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable, 0, "(Lrhino/Context;)Lrhino/Scriptable;", 9 },
	{ "makeUrlForGeneratedScript", (intptr_t) SM_rhino_ScriptRuntime_makeUrlForGeneratedScript_boolean_java_lang_String_int_R_java_lang_String, 0, "(ZLjava/lang/String;I)Ljava/lang/String;", 8 },
	{ "isGeneratedScript", (intptr_t) SM_rhino_ScriptRuntime_isGeneratedScript_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 8 },
	{ "isSymbol", (intptr_t) SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 8 },
	{ "errorWithClassName", (intptr_t) SM_rhino_ScriptRuntime_errorWithClassName_java_lang_String_java_lang_Object_R_java_lang_RuntimeException, 0, "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/RuntimeException;", 10 },
	{ "throwError", (intptr_t) SM_rhino_ScriptRuntime_throwError_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_JavaScriptException, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;)Lrhino/JavaScriptException;", 9 },
	{ "throwCustomError", (intptr_t) SM_rhino_ScriptRuntime_throwCustomError_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_R_rhino_JavaScriptException, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;)Lrhino/JavaScriptException;", 9 },
	{ "<clinit>", (intptr_t) clinit_rhino_ScriptRuntime, 0, "()V", 8 },
};

Class class_rhino_ScriptRuntime{
		.nativeName = (intptr_t) "rhino/ScriptRuntime",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ScriptRuntime),
		.classVtable = (intptr_t) vtable_rhino_ScriptRuntime,
		.staticInitializer = (intptr_t) clinit_rhino_ScriptRuntime,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ScriptRuntime,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 33,
		.nativeFields = (intptr_t) fields,
		.methodCount = 208,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ScriptRuntime = registerClass(&class_rhino_ScriptRuntime);

}
