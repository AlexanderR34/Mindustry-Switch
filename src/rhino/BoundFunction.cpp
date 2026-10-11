#include "rhino/BoundFunction.h"
#include "java/lang/Math.h"
#include "rhino/Function.h"
#include "rhino/NativeObject.h"
#include "rhino/BoundFunction.h"
#include "java/lang/Boolean.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "rhino/Scriptable.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/BaseFunction.h"
#include "rhino/Callable.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/EqualObjectGraphs.h"
#include "java/lang/System.h"

extern "C" {


void mark_rhino_BoundFunction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_BaseFunction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_BoundFunction *) object;
	if (self->F_targetFunction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetFunction)->clazz)->markFunction)((jobject) self->F_targetFunction, mark, depth + 1);
	if (self->F_boundThis)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_boundThis)->clazz)->markFunction)((jobject) self->F_boundThis, mark, depth + 1);
	if (self->F_boundArgs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_boundArgs)->clazz)->markFunction)((jobject) self->F_boundArgs, mark, depth + 1);
}

void clinit_rhino_BoundFunction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_BaseFunction(ctx);
}

void init_rhino_BoundFunction_rhino_Context_rhino_Scriptable_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BoundFunction:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BoundFunction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(16);
	init_rhino_BaseFunction(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_targetFunction = (jref) (frame[3].o);
	LINE_NUMBER(18);
	((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_boundThis = (jref) (frame[4].o);
	LINE_NUMBER(19);
	((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_boundArgs = (jref) (frame[5].o);
	LINE_NUMBER(20);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_BaseFunction)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_rhino_BaseFunction_getLength_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_BaseFunction, (frame[3].o))))->vtable)[VTABLE_rhino_BaseFunction_getLength_R_int])(ctx, (checkCast(ctx, &class_rhino_BaseFunction, (frame[3].o))));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (temp1 - (((jarray) nullCheck(ctx, (frame[5].o)))->length)));
	((rhino_BoundFunction *) NULL_CHECK(sp[0].o))->F_length = temp2;
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(23);
	((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_length = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(26);
	SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(28);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeErrorThrower_rhino_Context_R_rhino_BaseFunction(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(29);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(30);
	((func_rhino_NativeObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_NativeObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"get"_j))), (frame[7].o), (frame[6].o));
	LINE_NUMBER(31);
	((func_rhino_NativeObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_NativeObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"set"_j))), (frame[7].o), (frame[6].o));
	LINE_NUMBER(32);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enumerable"_j));
	sp[2].o = frame[7].o;
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_rhino_NativeObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(33);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"configurable"_j));
	sp[2].o = frame[7].o;
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_rhino_NativeObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(34);
	((func_rhino_NativeObject_preventExtensions) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_NativeObject_preventExtensions])(ctx, (frame[7].o));
	LINE_NUMBER(36);
	((func_rhino_BoundFunction_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BoundFunction_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"caller"_j))), (frame[7].o), (jint(0)));
	LINE_NUMBER(37);
	((func_rhino_BoundFunction_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BoundFunction_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"arguments"_j))), (frame[7].o), (jint(0)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_BoundFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BoundFunction:call", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_boundThis;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_boundThis;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_targetFunction;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[5].o;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_boundArgs;
	sp[4].o = (jobject)M_rhino_BoundFunction_concat_Array1_java_lang_Object_Array1_java_lang_Object_R_Array1_java_lang_Object(ctx, sp[4].o, sp[5].o, (frame[4].o));
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_BoundFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BoundFunction:construct", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_targetFunction;
	if ((isInstance(ctx, sp[0].o, &class_rhino_Function)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_targetFunction;
	sp[0].o = checkCast(ctx, &class_rhino_Function, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_boundArgs;
	sp[3].o = (jobject)M_rhino_BoundFunction_concat_Array1_java_lang_Object_Array1_java_lang_Object_R_Array1_java_lang_Object(ctx, sp[3].o, sp[4].o, (frame[3].o));
	sp[0].o = (jobject)((func_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.ctor"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_BoundFunction_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BoundFunction:hasInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_targetFunction;
	if ((isInstance(ctx, sp[0].o, &class_rhino_Function)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_targetFunction;
	jint temp0 = (jint)((func_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean, (checkCast(ctx, &class_rhino_Function, sp[0].o))))(ctx, (checkCast(ctx, &class_rhino_Function, sp[0].o)), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.ctor"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_BoundFunction_getLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BoundFunction:getLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return ((jint)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_length);
	}

	popStackFrame(ctx);
}

jobject M_rhino_BoundFunction_concat_Array1_java_lang_Object_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BoundFunction:concat", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) + (((jarray) nullCheck(ctx, (frame[2].o)))->length)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(69);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (jint(0)), (frame[3].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(70);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[3].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_BoundFunction_equalObjectGraphs_rhino_BoundFunction_rhino_BoundFunction_rhino_EqualObjectGraphs_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BoundFunction:equalObjectGraphs", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BoundFunction(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_boundThis;
	sp[2].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[1].o)))->F_boundThis;
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_targetFunction;
	sp[2].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[1].o)))->F_targetFunction;
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[0].o)))->F_boundArgs;
	sp[2].o = (jobject)((rhino_BoundFunction *) NULL_CHECK((frame[1].o)))->F_boundArgs;
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
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

void *vtable_rhino_BoundFunction[] {
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
	(void *) M_rhino_BaseFunction_getClassName_R_java_lang_String,
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
	(void *) M_rhino_BoundFunction_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_BaseFunction_getTypeOf_R_java_lang_String,
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
	(void *) M_rhino_BaseFunction_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_BaseFunction_getMaxInstanceId_R_int,
	(void *) M_rhino_BaseFunction_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_BaseFunction_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_BaseFunction_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_BaseFunction_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_BaseFunction_initPrototypeId_int,
	(void *) M_rhino_BaseFunction_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_BaseFunction_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_BoundFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_BoundFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_isGeneratorFunction_R_boolean,
	(void *) M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction,
	(void *) M_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object,
	(void *) M_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_decompile_int_int_R_java_lang_String,
	(void *) M_rhino_BaseFunction_getArity_R_int,
	(void *) M_rhino_BoundFunction_getLength_R_int,
	(void *) M_rhino_BaseFunction_getFunctionName_R_java_lang_String,
	(void *) M_rhino_BaseFunction_hasPrototypeProperty_R_boolean,
	(void *) M_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_getArguments_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_BoundFunction_concat_Array1_java_lang_Object_Array1_java_lang_Object_R_Array1_java_lang_Object,
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
	{ "call", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "construct", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "isGeneratorFunction", "()Z" },
	{ "realFunction", "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/BaseFunction;" },
	{ "setImmunePrototypeProperty", "(Ljava/lang/Object;)V" },
	{ "getClassPrototype", "()Lrhino/Scriptable;" },
	{ "createObject", "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;" },
	{ "decompile", "(II)Ljava/lang/String;" },
	{ "getArity", "()I" },
	{ "getLength", "()I" },
	{ "getFunctionName", "()Ljava/lang/String;" },
	{ "hasPrototypeProperty", "()Z" },
	{ "getPrototypeProperty", "()Ljava/lang/Object;" },
	{ "setupDefaultPrototype", "()Ljava/lang/Object;" },
	{ "getArguments", "()Ljava/lang/Object;" },
	{ "jsConstructor", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "concat", "([Ljava/lang/Object;[Ljava/lang/Object;)[Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "targetFunction", &class_rhino_Callable, offsetof(rhino_BoundFunction, F_targetFunction), "Lrhino/Callable;", 18 },
	{ "boundThis", &class_rhino_Scriptable, offsetof(rhino_BoundFunction, F_boundThis), "Lrhino/Scriptable;", 18 },
	{ "boundArgs", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_BoundFunction, F_boundArgs), "[Ljava/lang/Object;", 18 },
	{ "length", &class_int, offsetof(rhino_BoundFunction, F_length), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_BoundFunction_rhino_Context_rhino_Scriptable_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Callable;Lrhino/Scriptable;[Ljava/lang/Object;)V", 1 },
	{ "call", (intptr_t) M_rhino_BoundFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_BoundFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "construct", (intptr_t) M_rhino_BoundFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_BoundFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "hasInstance", (intptr_t) M_rhino_BoundFunction_hasInstance_rhino_Scriptable_R_boolean, VTABLE_rhino_BoundFunction_hasInstance_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1 },
	{ "getLength", (intptr_t) M_rhino_BoundFunction_getLength_R_int, VTABLE_rhino_BoundFunction_getLength_R_int, "()I", 1 },
	{ "concat", (intptr_t) M_rhino_BoundFunction_concat_Array1_java_lang_Object_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_rhino_BoundFunction_concat_Array1_java_lang_Object_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;[Ljava/lang/Object;)[Ljava/lang/Object;", 2 },
	{ "equalObjectGraphs", (intptr_t) SM_rhino_BoundFunction_equalObjectGraphs_rhino_BoundFunction_rhino_BoundFunction_rhino_EqualObjectGraphs_R_boolean, 0, "(Lrhino/BoundFunction;Lrhino/BoundFunction;Lrhino/EqualObjectGraphs;)Z", 8 },
};

Class class_rhino_BoundFunction{
		.nativeName = (intptr_t) "rhino/BoundFunction",
		.parentClass = (intptr_t) &class_rhino_BaseFunction,
		.size = sizeof(rhino_BoundFunction),
		.classVtable = (intptr_t) vtable_rhino_BoundFunction,
		.staticInitializer = (intptr_t) clinit_rhino_BoundFunction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_BoundFunction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 130,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_BoundFunction = registerClass(&class_rhino_BoundFunction);

}
