#include "rhino/IdFunctionObjectES6.h"
#include "rhino/IdFunctionCall.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/ScriptableObject.h"
#include "rhino/IdFunctionObjectES6.h"
#include "rhino/Scriptable.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/BaseFunction.h"

extern "C" {

jint SF_rhino_IdFunctionObjectES6_Id_length;
jint SF_rhino_IdFunctionObjectES6_Id_name;

void mark_rhino_IdFunctionObjectES6(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_IdFunctionObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_IdFunctionObjectES6 *) object;
}

void clinit_rhino_IdFunctionObjectES6(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdFunctionObject(ctx);
	SF_rhino_IdFunctionObjectES6_Id_length = jint(1);
	SF_rhino_IdFunctionObjectES6_Id_name = jint(3);
}

void init_rhino_IdFunctionObjectES6_rhino_IdFunctionCall_java_lang_Object_int_java_lang_String_int_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdFunctionObjectES6:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IdFunctionObjectES6(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(6);
	init_rhino_IdFunctionObject_rhino_IdFunctionCall_java_lang_Object_int_java_lang_String_int_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i), (frame[6].o));
	LINE_NUMBER(10);
	((rhino_IdFunctionObjectES6 *) NULL_CHECK((frame[0].o)))->F_myLength = (jint(1));
	LINE_NUMBER(11);
	((rhino_IdFunctionObjectES6 *) NULL_CHECK((frame[0].o)))->F_myName = (jint(1));
	LINE_NUMBER(7);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_IdFunctionObjectES6_findInstanceIdInfo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdFunctionObjectES6:findInstanceIdInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"length"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_rhino_IdScriptableObject_instanceIdInfo_int_int_R_int(ctx, (jint(3)), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(16);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_rhino_IdScriptableObject_instanceIdInfo_int_int_R_int(ctx, (jint(3)), (jint(3)));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(17);
	jint temp0 = (jint)M_rhino_BaseFunction_findInstanceIdInfo_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdFunctionObjectES6_getInstanceIdValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdFunctionObjectES6:getInstanceIdValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(22);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	if (((jint)((rhino_IdFunctionObjectES6 *) NULL_CHECK((frame[0].o)))->F_myLength) != 0) goto label_1;
	}
	{
	LINE_NUMBER(23);
	clinit_rhino_IdFunctionObjectES6(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(24);
	if ((frame[1].i) != (jint(3))) goto label_3;
	}
	{
	if (((jint)((rhino_IdFunctionObjectES6 *) NULL_CHECK((frame[0].o)))->F_myName) != 0) goto label_3;
	}
	{
	LINE_NUMBER(25);
	clinit_rhino_IdFunctionObjectES6(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)M_rhino_BaseFunction_getInstanceIdValue_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_IdFunctionObjectES6_setInstanceIdValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdFunctionObjectES6:setInstanceIdValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	clinit_rhino_IdFunctionObjectES6(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(33);
	((rhino_IdFunctionObjectES6 *) NULL_CHECK((frame[0].o)))->F_myLength = (jint(0));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(35);
	if ((frame[1].i) != (jint(3))) goto label_4;
	}
	{
	sp[0].o = frame[2].o;
	clinit_rhino_IdFunctionObjectES6(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(36);
	((rhino_IdFunctionObjectES6 *) NULL_CHECK((frame[0].o)))->F_myName = (jint(0));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(39);
	M_rhino_BaseFunction_setInstanceIdValue_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_IdFunctionObjectES6[] {
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
	(void *) M_rhino_IdFunctionObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_hasInstance_rhino_Scriptable_R_boolean,
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
	(void *) M_rhino_IdFunctionObjectES6_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_BaseFunction_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_IdFunctionObjectES6_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_IdFunctionObjectES6_setInstanceIdValue_int_java_lang_Object,
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
	(void *) M_rhino_IdFunctionObject_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_isGeneratorFunction_R_boolean,
	(void *) M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction,
	(void *) M_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object,
	(void *) M_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable,
	(void *) M_rhino_IdFunctionObject_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable,
	(void *) M_rhino_IdFunctionObject_decompile_int_int_R_java_lang_String,
	(void *) M_rhino_IdFunctionObject_getArity_R_int,
	(void *) M_rhino_IdFunctionObject_getLength_R_int,
	(void *) M_rhino_IdFunctionObject_getFunctionName_R_java_lang_String,
	(void *) M_rhino_BaseFunction_hasPrototypeProperty_R_boolean,
	(void *) M_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_getArguments_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdFunctionObject_initFunction_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean,
	(void *) M_rhino_IdFunctionObject_getTag_R_java_lang_Object,
	(void *) M_rhino_IdFunctionObject_methodId_R_int,
	(void *) M_rhino_IdFunctionObject_markAsConstructor_rhino_Scriptable,
	(void *) M_rhino_IdFunctionObject_addAsProperty_rhino_Scriptable,
	(void *) M_rhino_IdFunctionObject_exportAsScopeProperty,
	(void *) M_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException,
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
	{ "initFunction", "(Ljava/lang/String;Lrhino/Scriptable;)V" },
	{ "hasTag", "(Ljava/lang/Object;)Z" },
	{ "getTag", "()Ljava/lang/Object;" },
	{ "methodId", "()I" },
	{ "markAsConstructor", "(Lrhino/Scriptable;)V" },
	{ "addAsProperty", "(Lrhino/Scriptable;)V" },
	{ "exportAsScopeProperty", "()V" },
	{ "unknown", "()Ljava/lang/RuntimeException;" },
};

static FieldMetadata fields[] {
	{ "Id_length", &class_int, (intptr_t) &SF_rhino_IdFunctionObjectES6_Id_length, "I", 26 },
	{ "Id_name", &class_int, (intptr_t) &SF_rhino_IdFunctionObjectES6_Id_name, "I", 26 },
	{ "myLength", &class_boolean, offsetof(rhino_IdFunctionObjectES6, F_myLength), "Z", 2 },
	{ "myName", &class_boolean, offsetof(rhino_IdFunctionObjectES6, F_myName), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_IdFunctionObjectES6_rhino_IdFunctionCall_java_lang_Object_int_java_lang_String_int_rhino_Scriptable, 0, "(Lrhino/IdFunctionCall;Ljava/lang/Object;ILjava/lang/String;ILrhino/Scriptable;)V", 1 },
	{ "findInstanceIdInfo", (intptr_t) M_rhino_IdFunctionObjectES6_findInstanceIdInfo_java_lang_String_R_int, VTABLE_rhino_IdFunctionObjectES6_findInstanceIdInfo_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "getInstanceIdValue", (intptr_t) M_rhino_IdFunctionObjectES6_getInstanceIdValue_int_R_java_lang_Object, VTABLE_rhino_IdFunctionObjectES6_getInstanceIdValue_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 4 },
	{ "setInstanceIdValue", (intptr_t) M_rhino_IdFunctionObjectES6_setInstanceIdValue_int_java_lang_Object, VTABLE_rhino_IdFunctionObjectES6_setInstanceIdValue_int_java_lang_Object, "(ILjava/lang/Object;)V", 4 },
};

Class class_rhino_IdFunctionObjectES6{
		.nativeName = (intptr_t) "rhino/IdFunctionObjectES6",
		.parentClass = (intptr_t) &class_rhino_IdFunctionObject,
		.size = sizeof(rhino_IdFunctionObjectES6),
		.classVtable = (intptr_t) vtable_rhino_IdFunctionObjectES6,
		.staticInitializer = (intptr_t) clinit_rhino_IdFunctionObjectES6,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_IdFunctionObjectES6,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 137,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_IdFunctionObjectES6 = registerClass(&class_rhino_IdFunctionObjectES6);

}
