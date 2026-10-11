#include "rhino/InterfaceAdapter.h"
#include "java/lang/Integer.h"
#include "rhino/WrapFactory.h"
#include "java/lang/Boolean.h"
#include "rhino/Scriptable.h"
#include "java/lang/Float.h"
#include "rhino/Callable.h"
#include "rhino/EvaluatorException.h"
#include "java/lang/Short.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "rhino/ClassCache.h"
#include "rhino/ContextFactory.h"
#include "java/lang/reflect/Method.h"
#include "rhino/VMBridge.h"
#include "java/lang/reflect/Modifier.h"
#include "rhino/ContextAction.h"
#include "java/lang/Number.h"
#include "java/lang/Byte.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Void.h"
#include "java/lang/Long.h"
#include "rhino/InterfaceAdapter_invoke_rhino_ContextAction_0.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/InterfaceAdapter.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {


void mark_rhino_InterfaceAdapter(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_InterfaceAdapter *) object;
	if (self->F_proxyHelper)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_proxyHelper)->clazz)->markFunction)((jobject) self->F_proxyHelper, mark, depth + 1);
}

void clinit_rhino_InterfaceAdapter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject SM_rhino_InterfaceAdapter_create_rhino_Context_java_lang_Class_rhino_ScriptableObject_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterfaceAdapter:create", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterfaceAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(20);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = (jobject)SM_rhino_ClassCache_get_rhino_Scriptable_R_rhino_ClassCache(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_rhino_ClassCache_getInterfaceAdapter_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ClassCache_getInterfaceAdapter_java_lang_Class_R_java_lang_Object])(ctx, (frame[4].o), (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_rhino_InterfaceAdapter, sp[0].o));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_rhino_Context_getFactory_R_rhino_ContextFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getFactory_R_rhino_ContextFactory])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(27);
	if ((frame[5].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method])(ctx, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(29);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Callable)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(34);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	LINE_NUMBER(35);
	if ((frame[8].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.no.empty.interface.conversion"_j));
	sp[1].o = frame[1].o;
	LINE_NUMBER(37);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(39);
	if ((frame[8].i) <= (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(40);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(41);
	frame[10].o = (frame[7].o);
	frame[11].i = (((jarray) nullCheck(ctx, (frame[10].o)))->length);
	frame[12].i = (jint(0));
	}
label_18:;
	{
	if ((frame[12].i) >= (frame[11].i)) goto label_9;
	}
	{
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[12].i)));
	LINE_NUMBER(44);
	jint temp0 = (jint)SM_rhino_InterfaceAdapter_isFunctionalMethodCandidate_java_lang_reflect_Method_R_boolean(ctx, (frame[13].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(45);
	if ((frame[9].o) != nullptr) goto label_22;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[13].o));
	frame[9].o = sp[0].o;
	goto label_20;
	}
label_22:;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[13].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.no.function.interface.conversion"_j));
	sp[1].o = frame[1].o;
	LINE_NUMBER(50);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(41);
	INST_IINC(12, 1);
	goto label_18;
	}
label_9:;
	{
	LINE_NUMBER(56);
	clinit_rhino_InterfaceAdapter(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_InterfaceAdapter);
	init_rhino_InterfaceAdapter_rhino_ContextFactory_java_lang_Class(ctx, sp[0].o, (frame[6].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(57);
	((func_rhino_ClassCache_cacheInterfaceAdapter_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ClassCache_cacheInterfaceAdapter_java_lang_Class_java_lang_Object])(ctx, (frame[4].o), (frame[1].o), (frame[5].o));
	}
label_6:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((rhino_InterfaceAdapter *) NULL_CHECK((frame[5].o)))->F_proxyHelper;
	sp[0].o = (jobject)SM_rhino_VMBridge_newInterfaceProxy_java_lang_Object_rhino_ContextFactory_rhino_InterfaceAdapter_java_lang_Object_rhino_Scriptable_R_java_lang_Object(ctx, sp[0].o, (frame[6].o), (frame[5].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_InterfaceAdapter_isFunctionalMethodCandidate_java_lang_reflect_Method_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterfaceAdapter:isFunctionalMethodCandidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterfaceAdapter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"equals"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hashCode"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"toString"_j))));
	if (temp0 == 0) goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isAbstract_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void init_rhino_InterfaceAdapter_rhino_ContextFactory_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterfaceAdapter:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterfaceAdapter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(80);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	LINE_NUMBER(82);
	sp[1].o = (jobject)SM_rhino_VMBridge_getInterfaceProxyHelper_rhino_ContextFactory_Array1_java_lang_Class_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((rhino_InterfaceAdapter *) NULL_CHECK(sp[0].o))->F_proxyHelper = (jref) sp[1].o;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterfaceAdapter_invoke_rhino_ContextFactory_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterfaceAdapter:invoke", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_rhino_InterfaceAdapter_invoke_rhino_ContextAction_0(ctx);
		auto proxy = (rhino_InterfaceAdapter_invoke_rhino_ContextAction_0 *) gcAlloc(ctx, &class_rhino_InterfaceAdapter_invoke_rhino_ContextAction_0);
		proxy->F_field5 = (jref) (frame[6].o);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterfaceAdapter_invokeImpl_rhino_Context_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterfaceAdapter:invokeImpl", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(102);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Callable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(103);
	frame[7].o = (checkCast(ctx, &class_rhino_Callable, (frame[2].o)));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(105);
	frame[8].o = (checkCast(ctx, &class_rhino_Scriptable, (frame[2].o)));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[5].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(107);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[8].o), (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = frame[10].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.undefined.function.interface"_j))), (frame[9].o));
	SM_rhino_Context_reportWarning_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, (frame[5].o));
	sp[0].o = (jobject)SM_rhino_InterfaceAdapter_defaultPrimitiveValue_java_lang_Class_R_java_lang_Object(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(116);
	if ((isInstance(ctx, (frame[10].o), &class_rhino_Callable)) != 0) goto label_11;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.function.interface"_j))), (frame[9].o));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(120);
	frame[7].o = (checkCast(ctx, &class_rhino_Callable, (frame[10].o)));
	}
label_4:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[1].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(123);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(124);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	frame[6].o = sp[0].o;
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(126);
	frame[9].i = (jint(0));
	frame[10].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	}
label_18:;
	{
	if ((frame[9].i) == (frame[10].i)) goto label_16;
	}
	{
	LINE_NUMBER(127);
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[9].i)));
	LINE_NUMBER(129);
	if ((isInstance(ctx, (frame[11].o), &class_java_lang_String)) != 0) goto label_21;
	}
	{
	if ((isInstance(ctx, (frame[11].o), &class_java_lang_Number)) != 0) goto label_21;
	}
	{
	if ((isInstance(ctx, (frame[11].o), &class_java_lang_Boolean)) != 0) goto label_21;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = frame[6].o;
	jint temp0 = frame[9].i;
	sp[1].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, (frame[8].o), (frame[1].o), (frame[3].o), (frame[11].o), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_21:;
	{
	LINE_NUMBER(126);
	INST_IINC(9, 1);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable])(ctx, (frame[8].o), (frame[1].o), (frame[3].o), (frame[4].o), (jobject(nullptr)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o), (frame[1].o), (frame[3].o), (frame[9].o), (frame[6].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, (frame[5].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = frame[11].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	if (sp[0].o != sp[1].o) goto label_26;
	}
	{
	LINE_NUMBER(140);
	frame[10].o = (jobject(nullptr));
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, (frame[10].o), (frame[11].o));
	frame[10].o = sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_InterfaceAdapter_defaultPrimitiveValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterfaceAdapter:defaultPrimitiveValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterfaceAdapter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	clinit_java_lang_Byte(ctx);
	sp[1].o = (jobject)SF_java_lang_Byte_TYPE;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	clinit_java_lang_Short(ctx);
	sp[1].o = (jobject)SF_java_lang_Short_TYPE;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (jlong(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	clinit_java_lang_Float(ctx);
	sp[1].o = (jobject)SF_java_lang_Float_TYPE;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterfaceAdapter_lambda$invoke$0_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_rhino_Context_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterfaceAdapter:lambda$invoke$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_rhino_InterfaceAdapter_invokeImpl_rhino_Context_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_InterfaceAdapter_invokeImpl_rhino_Context_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[6].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_InterfaceAdapter[] {
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
	(void *) M_rhino_InterfaceAdapter_invoke_rhino_ContextFactory_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_InterfaceAdapter_invokeImpl_rhino_Context_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_InterfaceAdapter_lambda$invoke$0_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_rhino_Context_R_java_lang_Object,
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
	{ "invoke", "(Lrhino/ContextFactory;Ljava/lang/Object;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "invokeImpl", "(Lrhino/Context;Ljava/lang/Object;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "lambda$invoke$0", "(Ljava/lang/Object;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;Lrhino/Context;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "proxyHelper", &class_java_lang_Object, offsetof(rhino_InterfaceAdapter, F_proxyHelper), "Ljava/lang/Object;", 18 },
};

static MethodMetadata methods[] {
	{ "create", (intptr_t) SM_rhino_InterfaceAdapter_create_rhino_Context_java_lang_Class_rhino_ScriptableObject_R_java_lang_Object, 0, "(Lrhino/Context;Ljava/lang/Class;Lrhino/ScriptableObject;)Ljava/lang/Object;", 8 },
	{ "isFunctionalMethodCandidate", (intptr_t) SM_rhino_InterfaceAdapter_isFunctionalMethodCandidate_java_lang_reflect_Method_R_boolean, 0, "(Ljava/lang/reflect/Method;)Z", 10 },
	{ "<init>", (intptr_t) init_rhino_InterfaceAdapter_rhino_ContextFactory_java_lang_Class, 0, "(Lrhino/ContextFactory;Ljava/lang/Class;)V", 2 },
	{ "invoke", (intptr_t) M_rhino_InterfaceAdapter_invoke_rhino_ContextFactory_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_InterfaceAdapter_invoke_rhino_ContextFactory_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/ContextFactory;Ljava/lang/Object;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "invokeImpl", (intptr_t) M_rhino_InterfaceAdapter_invokeImpl_rhino_Context_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_InterfaceAdapter_invokeImpl_rhino_Context_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Ljava/lang/Object;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", 0 },
	{ "defaultPrimitiveValue", (intptr_t) SM_rhino_InterfaceAdapter_defaultPrimitiveValue_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Class;)Ljava/lang/Object;", 10 },
	{ "lambda$invoke$0", (intptr_t) M_rhino_InterfaceAdapter_lambda$invoke$0_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_rhino_Context_R_java_lang_Object, VTABLE_rhino_InterfaceAdapter_lambda$invoke$0_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_rhino_Context_R_java_lang_Object, "(Ljava/lang/Object;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;Lrhino/Context;)Ljava/lang/Object;", 4098 },
};

Class class_rhino_InterfaceAdapter{
		.nativeName = (intptr_t) "rhino/InterfaceAdapter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_InterfaceAdapter),
		.classVtable = (intptr_t) vtable_rhino_InterfaceAdapter,
		.staticInitializer = (intptr_t) clinit_rhino_InterfaceAdapter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_InterfaceAdapter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_InterfaceAdapter = registerClass(&class_rhino_InterfaceAdapter);

}
