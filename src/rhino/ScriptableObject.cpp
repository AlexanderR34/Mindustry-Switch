#include "rhino/ScriptableObject.h"
#include "java/lang/Integer.h"
#include "rhino/Function.h"
#include "java/lang/StringBuilder.h"
#include "rhino/ScriptableObject_GetterSlot.h"
#include "rhino/ThreadSafeSlotMapContainer.h"
#include "rhino/Callable.h"
#include "rhino/EvaluatorException.h"
#include "java/lang/reflect/Constructor.h"
#include "java/util/Arrays.h"
#include "rhino/ObjToIntMap.h"
#include "rhino/ScriptableObject_Slot.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/NoSuchMethodException.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "rhino/ExternalArrayData.h"
#include "java/lang/reflect/Modifier.h"
#include "java/util/Iterator.h"
#include "rhino/Context.h"
#include "java/lang/Void.h"
#include "java/util/Map.h"
#include "rhino/annotations/JSSetter.h"
#include "rhino/MemberBox.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/TopLevel_NativeErrors.h"
#include "java/lang/AssertionError.h"
#include "rhino/TopLevel.h"
#include "rhino/SlotMapContainer.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/reflect/AccessibleObject.h"
#include "rhino/LazilyLoadedCtor.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"
#include "rhino/annotations/JSGetter.h"
#include "rhino/Symbol.h"
#include "rhino/SymbolScriptable.h"
#include "java/lang/Boolean.h"
#include "java/util/HashMap.h"
#include "rhino/Scriptable.h"
#include "rhino/BaseFunction.h"
#include "rhino/Undefined.h"
#include "rhino/JavaScriptException.h"
#include "rhino/ScriptRuntime_StringIdOrIndex.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "rhino/debug/DebuggableObject.h"
#include "java/lang/reflect/AnnotatedElement.h"
#include "java/util/Comparator.h"
#include "rhino/annotations/JSConstructor.h"
#include "rhino/ContextFactory.h"
#include "java/lang/reflect/Member.h"
#include "java/util/HashSet.h"
#include "rhino/ScriptableObject_SlotAccess.h"
#include "rhino/annotations/JSStaticFunction.h"
#include "rhino/NativeObject.h"
#include "rhino/annotations/JSFunction.h"
#include "java/lang/Number.h"
#include "java/lang/annotation/Annotation.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/Wrapper.h"
#include "rhino/FunctionObject.h"
#include "rhino/ScriptableObject_KeyComparator.h"
#include "rhino/ConstProperties.h"
#include "java/lang/Class.h"

extern "C" {

jint SF_rhino_ScriptableObject_EMPTY;
jint SF_rhino_ScriptableObject_READONLY;
jint SF_rhino_ScriptableObject_DONTENUM;
jint SF_rhino_ScriptableObject_PERMANENT;
jint SF_rhino_ScriptableObject_UNINITIALIZED_CONST;
jint SF_rhino_ScriptableObject_CONST;
jobject SF_rhino_ScriptableObject_GET_ARRAY_LENGTH;
jobject SF_rhino_ScriptableObject_KEY_COMPARATOR;
jbool SF_rhino_ScriptableObject_$assertionsDisabled;

void mark_rhino_ScriptableObject(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ScriptableObject_GET_ARRAY_LENGTH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptableObject_GET_ARRAY_LENGTH)->clazz)->markFunction)((jobject) SF_rhino_ScriptableObject_GET_ARRAY_LENGTH, mark, depth + 1);
		if (SF_rhino_ScriptableObject_KEY_COMPARATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptableObject_KEY_COMPARATOR)->clazz)->markFunction)((jobject) SF_rhino_ScriptableObject_KEY_COMPARATOR, mark, depth + 1);
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
	auto self = (rhino_ScriptableObject *) object;
	if (self->F_prototypeObject)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prototypeObject)->clazz)->markFunction)((jobject) self->F_prototypeObject, mark, depth + 1);
	if (self->F_parentScopeObject)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parentScopeObject)->clazz)->markFunction)((jobject) self->F_parentScopeObject, mark, depth + 1);
	if (self->F_slotMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_slotMap)->clazz)->markFunction)((jobject) self->F_slotMap, mark, depth + 1);
	if (self->F_externalData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_externalData)->clazz)->markFunction)((jobject) self->F_externalData, mark, depth + 1);
	if (self->F_associatedValues)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_associatedValues)->clazz)->markFunction)((jobject) self->F_associatedValues, mark, depth + 1);
}

jobject SM_rhino_ScriptableObject_buildDataDescriptor_rhino_Scriptable_java_lang_Object_int_R_rhino_ScriptableObject(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:buildDataDescriptor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(164);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(165);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Object;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(166);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[1].o), (jint(0)));
	LINE_NUMBER(167);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"writable"_j));
	sp += 2;
	if (((frame[2].i) & (jint(1))) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(168);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enumerable"_j));
	sp += 2;
	if (((frame[2].i) & (jint(2))) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(169);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"configurable"_j));
	sp += 2;
	if (((frame[2].i) & (jint(4))) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptableObject_checkValidAttributes_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:checkValidAttributes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(305);
	frame[1].i = (15);
	LINE_NUMBER(306);
	if (((frame[0].i) & (-16)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(307);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[0].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(309);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:createSlotMap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(313);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[2].o), (17));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(314);
	clinit_rhino_ThreadSafeSlotMapContainer(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ThreadSafeSlotMapContainer);
	init_rhino_ThreadSafeSlotMapContainer_int(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(316);
	clinit_rhino_SlotMapContainer(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SlotMapContainer);
	init_rhino_SlotMapContainer_int(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_rhino_ScriptableObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(319);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(97);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isExtensible = (jint(1));
	LINE_NUMBER(98);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isSealed = (jint(0));
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer(ctx, (frame[0].o), (jint(0)));
	((rhino_ScriptableObject *) NULL_CHECK(sp[0].o))->F_slotMap = (jref) sp[1].o;
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ScriptableObject_rhino_Scriptable_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(323);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(97);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isExtensible = (jint(1));
	LINE_NUMBER(98);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isSealed = (jint(0));
	LINE_NUMBER(324);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(325);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(327);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_parentScopeObject = (jref) (frame[1].o);
	LINE_NUMBER(328);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeObject = (jref) (frame[2].o);
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer(ctx, (frame[0].o), (jint(0)));
	((rhino_ScriptableObject *) NULL_CHECK(sp[0].o))->F_slotMap = (jref) sp[1].o;
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getTypeOf_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getTypeOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(338);
	jint temp0 = (jint)((func_rhino_ScriptableObject_avoidObjectDetection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_avoidObjectDetection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"undefined"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"object"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:has", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(359);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[1].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[1].o, (frame[1].o), (jint(0)));
	if (sp[0].o == sp[1].o) goto label_1;
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

jbool M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:has", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(371);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	jint temp1 = (jint)((func_rhino_ExternalArrayData_getArrayLength_R_int) resolveInterfaceMethod(ctx, &class_rhino_ExternalArrayData, INDEX_rhino_ExternalArrayData_getArrayLength_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_3;
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
	LINE_NUMBER(373);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[1].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[1].o, (jobject(nullptr)), (frame[1].i));
	if (sp[0].o == sp[1].o) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:has", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(381);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[1].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[1].o, (frame[1].o), (jint(0)));
	if (sp[0].o == sp[1].o) goto label_1;
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

jobject M_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(396);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(397);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[3].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(411);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	jint temp1 = (jint)((func_rhino_ExternalArrayData_getArrayLength_R_int) resolveInterfaceMethod(ctx, &class_rhino_ExternalArrayData, INDEX_rhino_ExternalArrayData_getArrayLength_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	sp[0].o = (jobject)((func_rhino_ExternalArrayData_getArrayElement_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_ExternalArrayData, INDEX_rhino_ExternalArrayData_getArrayElement_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(414);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (jobject(nullptr)), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(418);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(419);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((func_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[3].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(430);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(431);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((func_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[3].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(452);
	jint temp0 = (jint)M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o), (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(453);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(455);
	if ((frame[2].o) != (frame[0].o)) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_3:;
	{
	LINE_NUMBER(456);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:put", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(468);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	jint temp1 = (jint)((func_rhino_ExternalArrayData_getArrayLength_R_int) resolveInterfaceMethod(ctx, &class_rhino_ExternalArrayData, INDEX_rhino_ExternalArrayData_getArrayLength_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	((func_rhino_ExternalArrayData_setArrayElement_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_ExternalArrayData, INDEX_rhino_ExternalArrayData_setArrayElement_int_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[3].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(471);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	LINE_NUMBER(472);
	sp[1].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	sp[2].o = frame[0].o;
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[3].o = (jobject)SF_rhino_TopLevel$NativeErrors_RangeError;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"External array index out of bounds "_j)));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_newNativeError_rhino_Context_rhino_Scriptable_rhino_TopLevel$NativeErrors_Array1_java_lang_Object_R_rhino_Scriptable(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jint(0)));
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(477);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(480);
	jint temp0 = (jint)M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].i), (frame[2].o), (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	LINE_NUMBER(481);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(483);
	if ((frame[2].o) != (frame[0].o)) goto label_9;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_9:;
	{
	LINE_NUMBER(484);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(492);
	jint temp0 = (jint)M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o), (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(493);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(495);
	if ((frame[2].o) != (frame[0].o)) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_3:;
	{
	LINE_NUMBER(496);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureSymbolScriptable_java_lang_Object_R_rhino_SymbolScriptable(ctx, (frame[2].o));
	((func_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_delete_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:delete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(508);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(509);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	((func_rhino_SlotMapContainer_remove_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_remove_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_delete_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:delete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(521);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].i));
	LINE_NUMBER(522);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	((func_rhino_SlotMapContainer_remove_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_remove_java_lang_Object_int])(ctx, sp[0].o, (jobject(nullptr)), (frame[1].i));
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_delete_rhino_Symbol(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:delete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(530);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(531);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	((func_rhino_SlotMapContainer_remove_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_remove_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:putConst", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(550);
	jint temp0 = (jint)M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o), (frame[3].o), (jint(1)));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(551);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(553);
	if ((frame[2].o) != (frame[0].o)) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_3:;
	{
	LINE_NUMBER(554);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ConstProperties)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(555);
	((func_rhino_ConstProperties_putConst_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_ConstProperties, INDEX_rhino_ConstProperties_putConst_java_lang_String_rhino_Scriptable_java_lang_Object, (checkCast(ctx, &class_rhino_ConstProperties, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_ConstProperties, (frame[2].o))), (frame[1].o), (frame[2].o), (frame[3].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(557);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[2].o), (frame[3].o));
	}
label_6:;
	LINE_NUMBER(558);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineConst", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(562);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	sp[2].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[3].o = (jobject)SF_rhino_Undefined_instance;
	jint temp1 = (jint)M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, (8));
	if (temp1 == 0) goto label_1;
	}
	LINE_NUMBER(563);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(565);
	if ((frame[2].o) != (frame[0].o)) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_3:;
	{
	LINE_NUMBER(566);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ConstProperties)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(567);
	((func_rhino_ConstProperties_defineConst_java_lang_String_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_ConstProperties, INDEX_rhino_ConstProperties_defineConst_java_lang_String_rhino_Scriptable, (checkCast(ctx, &class_rhino_ConstProperties, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_ConstProperties, (frame[2].o))), (frame[1].o), (frame[2].o));
	}
label_4:;
	LINE_NUMBER(568);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:isConst", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(578);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(581);
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, (frame[2].o));
	if ((temp0 & (jint(5))) != (jint(5))) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_ScriptableObject_getAttributes_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getAttributes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(601);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_QUERY;
	sp[0].o = (jobject)M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	jint temp1 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_rhino_ScriptableObject_getAttributes_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getAttributes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(617);
	sp[0].o = frame[0].o;
	sp[1].o = jobject(nullptr);
	jint temp0 = frame[1].i;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_QUERY;
	sp[0].o = (jobject)M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	jint temp1 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_rhino_ScriptableObject_getAttributes_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getAttributes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(621);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_QUERY;
	sp[0].o = (jobject)M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_setAttributes_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:setAttributes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(646);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(647);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY;
	sp[0].o = (jobject)M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	((func_rhino_ScriptableObject$Slot_setAttributes_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_setAttributes_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_setAttributes_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:setAttributes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(662);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].i));
	LINE_NUMBER(663);
	sp[0].o = frame[0].o;
	sp[1].o = jobject(nullptr);
	jint temp0 = frame[1].i;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY;
	sp[0].o = (jobject)M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	((func_rhino_ScriptableObject$Slot_setAttributes_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_setAttributes_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_setAttributes_rhino_Symbol_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:setAttributes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(670);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(671);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY;
	sp[0].o = (jobject)M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(ctx, sp[0].o, sp[1].o, sp[2].o);
	((func_rhino_ScriptableObject$Slot_setAttributes_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_setAttributes_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:setGetterOrSetter", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(679);
	M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i), (jint(0)));
	LINE_NUMBER(680);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:setGetterOrSetter", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(684);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(685);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(687);
	if ((frame[5].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(688);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(692);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isExtensible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isExtensible_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[6].o = (checkCast(ctx, &class_rhino_ScriptableObject$GetterSlot, sp[0].o));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(696);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject$GetterSlot)) != 0) goto label_10;
	}
	LINE_NUMBER(697);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(698);
	frame[6].o = (checkCast(ctx, &class_rhino_ScriptableObject$GetterSlot, (frame[7].o)));
	}
label_8:;
	{
	LINE_NUMBER(701);
	if ((frame[5].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(702);
	jint temp0 = (jint)((func_rhino_ScriptableObject$GetterSlot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ScriptableObject$GetterSlot_getAttributes_R_int])(ctx, (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(703);
	if (((frame[7].i) & (jint(1))) == 0) goto label_12;
	}
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.modify.readonly"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(707);
	if ((frame[4].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(708);
	((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[6].o)))->F_setter = (jref) (frame[3].o);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(710);
	((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[6].o)))->F_getter = (jref) (frame[3].o);
	}
label_18:;
	{
	LINE_NUMBER(712);
	sp[0].o = frame[6].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(713);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getGetterOrSetter", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(728);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(729);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(730);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(731);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(732);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(733);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_ScriptableObject$GetterSlot)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(734);
	frame[5].o = (checkCast(ctx, &class_rhino_ScriptableObject$GetterSlot, (frame[4].o)));
	LINE_NUMBER(735);
	if ((frame[3].i) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[5].o)))->F_setter;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ALOAD(5);
	sp[-1].o = (jobject) ((rhino_ScriptableObject$GetterSlot *) NULL_CHECK(sp[-1].o))->F_getter;
label_10:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(736);
	if ((frame[6].o) == nullptr) goto label_12;
	}
	INST_ALOAD(6);
	goto label_13;
label_12:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_13:;
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(738);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:isGetterOrSetter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(749);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(750);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_ScriptableObject$GetterSlot)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(751);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((checkCast(ctx, &class_rhino_ScriptableObject$GetterSlot, (frame[4].o)))))->F_setter;
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(752);
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((checkCast(ctx, &class_rhino_ScriptableObject$GetterSlot, (frame[4].o)))))->F_getter;
	if (sp[0].o == nullptr) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(754);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:addLazilyInitializedValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(759);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(760);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(761);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(762);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[5].o = (checkCast(ctx, &class_rhino_ScriptableObject$GetterSlot, sp[0].o));
	LINE_NUMBER(764);
	((func_rhino_ScriptableObject$GetterSlot_setAttributes_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ScriptableObject$GetterSlot_setAttributes_int])(ctx, (frame[5].o), (frame[4].i));
	LINE_NUMBER(765);
	((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[5].o)))->F_getter = (jref) (jobject(nullptr));
	LINE_NUMBER(766);
	((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[5].o)))->F_setter = (jref) (jobject(nullptr));
	LINE_NUMBER(767);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_value = (jref) (frame[3].o);
	LINE_NUMBER(768);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:setExternalArrayData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(780);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData = (jref) (frame[1].o);
	LINE_NUMBER(782);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(783);
	((func_rhino_ScriptableObject_delete_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_delete_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"length"_j))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(786);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"length"_j));
	sp[2].o = jobject(nullptr);
	clinit_rhino_ScriptableObject(ctx);
	sp[3].o = (jobject)SF_rhino_ScriptableObject_GET_ARRAY_LENGTH;
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jobject(nullptr)), (jint(3)));
	}
label_4:;
	LINE_NUMBER(789);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getExternalArrayData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(797);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getExternalArrayLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(804);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	jint temp0 = (jint)((func_rhino_ExternalArrayData_getArrayLength_R_int) resolveInterfaceMethod(ctx, &class_rhino_ExternalArrayData, INDEX_rhino_ExternalArrayData_getArrayLength_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getPrototype", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(812);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeObject;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_setPrototype_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:setPrototype", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(820);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isExtensible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isExtensible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(821);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 < (180)) goto label_1;
	}
	{
	LINE_NUMBER(822);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.extensible"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(824);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeObject = (jref) (frame[1].o);
	LINE_NUMBER(825);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getParentScope", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(832);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_parentScopeObject;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_setParentScope_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:setParentScope", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(840);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_parentScopeObject = (jref) (frame[1].o);
	LINE_NUMBER(841);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getIds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object])(ctx, (frame[0].o), (jint(0)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getAllIds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object])(ctx, (frame[0].o), (jint(1)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getDefaultValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(888);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getDefaultValue_rhino_Scriptable_java_lang_Class_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getDefaultValue_rhino_Scriptable_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getDefaultValue", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(892);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(893);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(895);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(896);
	if ((frame[3].i) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	INST_ISTORE(4);
	goto label_10;
label_5:;
	{
	LINE_NUMBER(898);
	if ((frame[3].i) != (jint(1))) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	INST_ISTORE(4);
label_10:;
	{
	LINE_NUMBER(902);
	if ((frame[4].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(903);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(905);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"valueOf"_j)));
	}
label_16:;
	{
	LINE_NUMBER(907);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(908);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_Function)) != 0) goto label_18;
	}
	LINE_NUMBER(909);
	goto label_20;
label_18:;
	{
	LINE_NUMBER(910);
	frame[7].o = (checkCast(ctx, &class_rhino_Function, (frame[6].o)));
	LINE_NUMBER(911);
	if ((frame[2].o) != nullptr) goto label_22;
	}
	{
	LINE_NUMBER(912);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(914);
	sp[0].o = frame[7].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[7].o)))(ctx, (frame[7].o));
	sp[3].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(915);
	if ((frame[6].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(916);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_Scriptable)) != 0) goto label_26;
	}
	{
	LINE_NUMBER(917);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_26:;
	{
	LINE_NUMBER(919);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	if (sp[0].o == sp[1].o) goto label_28;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_FunctionClass;
	if (sp[0].o != sp[1].o) goto label_29;
	}
label_28:;
	{
	LINE_NUMBER(921);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_29:;
	{
	LINE_NUMBER(923);
	if ((frame[4].i) == 0) goto label_20;
	}
	{
	if ((isInstance(ctx, (frame[6].o), &class_rhino_Wrapper)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(926);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[6].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[6].o))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(927);
	if ((isInstance(ctx, (frame[8].o), &class_java_lang_String)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(928);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_20:;
	{
	LINE_NUMBER(893);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(933);
	if ((frame[1].o) != nullptr) goto label_33;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"undefined"_j));
	goto label_34;
label_33:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_34:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(934);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.default.value"_j))), (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:hasInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(951);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_jsDelegatesTo_rhino_Scriptable_rhino_Scriptable_R_boolean(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_avoidObjectDetection_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:avoidObjectDetection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(966);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:equivalentValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(983);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_TRUE;
	goto label_2;
label_1:;
	clinit_rhino_Scriptable(ctx);
	(sp++)->o = SF_rhino_Scriptable_NOT_FOUND;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_rhino_ScriptableObject_defineClass_rhino_Scriptable_java_lang_Class(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineClass", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1082);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_defineClass_rhino_Scriptable_java_lang_Class_boolean_boolean_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(0)));
	LINE_NUMBER(1083);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptableObject_defineClass_rhino_Scriptable_java_lang_Class_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineClass", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1111);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_defineClass_rhino_Scriptable_java_lang_Class_boolean_boolean_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)));
	LINE_NUMBER(1112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_defineClass_rhino_Scriptable_java_lang_Class_boolean_boolean_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineClass", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1145);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_buildClassCtor_rhino_Scriptable_java_lang_Class_boolean_boolean_R_rhino_BaseFunction(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1147);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1148);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((func_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_rhino_Scriptable_getClassName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getClassName_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1150);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, (frame[0].o), (frame[5].o), (frame[4].o), (jint(2)));
	LINE_NUMBER(1151);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_buildClassCtor_rhino_Scriptable_java_lang_Class_boolean_boolean_R_rhino_BaseFunction(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3) {
	jtype frame[39];
	auto stack = &frame[33];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:buildClassCtor", 39 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1160);
	sp[0].o = (jobject)SM_rhino_FunctionObject_getMethodList_java_lang_Class_R_Array1_java_lang_reflect_Method(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1161);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(1162);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"init"_j))));
	if (temp0 != 0) goto label_6;
	}
	LINE_NUMBER(1164);
	goto label_8;
label_6:;
	{
	LINE_NUMBER(1165);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1166);
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) != (jint(3))) goto label_10;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ContextClass;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)));
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	sp[0].o = frame[6].o;
	LINE_NUMBER(1170);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_10;
	}
	{
	LINE_NUMBER(1171);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[0].o);
	jint temp1 = jint(2);
	sp[1].o = sp[0].o;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[2].i) == 0) goto label_13;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_TRUE;
	goto label_14;
label_13:;
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
label_14:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1173);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[6].o), (jobject(nullptr)), (frame[8].o));
	LINE_NUMBER(1174);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(1176);
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) != (jint(1))) goto label_8;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	sp[0].o = frame[6].o;
	LINE_NUMBER(1178);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1179);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1180);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[6].o), (jobject(nullptr)), (frame[8].o));
	LINE_NUMBER(1181);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(1161);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1189);
	sp[0].o = (jobject)((func_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1190);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(1191);
	frame[7].i = (jint(0));
	}
label_23:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_24;
	}
	{
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))))->vtable)[VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_26;
	}
	{
	LINE_NUMBER(1193);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(1194);
	goto label_24;
	}
label_26:;
	{
	LINE_NUMBER(1191);
	INST_IINC(7, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(1197);
	if ((frame[6].o) != nullptr) goto label_29;
	}
	{
	LINE_NUMBER(1198);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.zero.arg.ctor"_j));
	sp[1].o = frame[1].o;
	LINE_NUMBER(1199);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(1198);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(1202);
	sp[0].o = frame[6].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[7].o = (checkCast(ctx, &class_rhino_Scriptable, sp[0].o));
	LINE_NUMBER(1203);
	sp[0].o = (jobject)((func_rhino_Scriptable_getClassName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getClassName_R_java_lang_String, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1206);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1207);
	if ((isInstance(ctx, (frame[9].o), &class_rhino_BaseFunction)) == 0) goto label_36;
	}
	{
	LINE_NUMBER(1208);
	sp[0].o = (jobject)((func_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_BaseFunction, (frame[9].o))))->vtable)[VTABLE_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_BaseFunction, (frame[9].o))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1209);
	if ((frame[10].o) == nullptr) goto label_36;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[10].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(1210);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_BaseFunction, (frame[9].o)));
	}
label_36:;
	{
	LINE_NUMBER(1216);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(1217);
	if ((frame[3].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(1218);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1219);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, (frame[11].o));
	if (temp0 == 0) goto label_41;
	}
	{
	sp[0].o = frame[11].o;
	LINE_NUMBER(1220);
	jint temp0 = (jint)((func_java_lang_Class_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isAbstract_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_41;
	}
	{
	LINE_NUMBER(1221);
	sp[0].o = frame[11].o;
	LINE_NUMBER(1222);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_extendsScriptable_java_lang_Class_R_java_lang_Class(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(1223);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_defineClass_rhino_Scriptable_java_lang_Class_boolean_boolean_R_java_lang_String(ctx, (frame[0].o), (frame[12].o), (frame[2].i), (frame[3].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(1225);
	if ((frame[13].o) == nullptr) goto label_41;
	}
	{
	LINE_NUMBER(1226);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getClassPrototype_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, (frame[0].o), (frame[13].o));
	frame[10].o = sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(1230);
	if ((frame[10].o) != nullptr) goto label_50;
	}
	{
	LINE_NUMBER(1231);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[10].o = sp[0].o;
	}
label_50:;
	{
	LINE_NUMBER(1233);
	((func_rhino_Scriptable_setPrototype_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setPrototype_rhino_Scriptable, (frame[7].o)))(ctx, (frame[7].o), (frame[10].o));
	LINE_NUMBER(1238);
	frame[11].o = (((jobject) createStringLiteral(ctx, u8"jsFunction_"_j)));
	LINE_NUMBER(1239);
	frame[12].o = (((jobject) createStringLiteral(ctx, u8"jsStaticFunction_"_j)));
	LINE_NUMBER(1240);
	frame[13].o = (((jobject) createStringLiteral(ctx, u8"jsGet_"_j)));
	LINE_NUMBER(1241);
	frame[14].o = (((jobject) createStringLiteral(ctx, u8"jsSet_"_j)));
	LINE_NUMBER(1242);
	frame[15].o = (((jobject) createStringLiteral(ctx, u8"jsConstructor"_j)));
	LINE_NUMBER(1244);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_findAnnotatedMember_Array1_java_lang_reflect_AccessibleObject_java_lang_Class_R_java_lang_reflect_Member(ctx, (frame[4].o), (((jobject) &class_rhino_annotations_JSConstructor)));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1245);
	if ((frame[16].o) != nullptr) goto label_59;
	}
	{
	LINE_NUMBER(1246);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_findAnnotatedMember_Array1_java_lang_reflect_AccessibleObject_java_lang_Class_R_java_lang_reflect_Member(ctx, (frame[5].o), (((jobject) &class_rhino_annotations_JSConstructor)));
	frame[16].o = sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(1248);
	if ((frame[16].o) != nullptr) goto label_61;
	}
	{
	LINE_NUMBER(1249);
	sp[0].o = (jobject)SM_rhino_FunctionObject_findSingleMethod_Array1_java_lang_reflect_Method_java_lang_String_R_java_lang_reflect_Method(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"jsConstructor"_j))));
	frame[16].o = sp[0].o;
	}
label_61:;
	{
	LINE_NUMBER(1251);
	if ((frame[16].o) != nullptr) goto label_63;
	}
	{
	LINE_NUMBER(1252);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) != (jint(1))) goto label_65;
	}
	{
	LINE_NUMBER(1253);
	frame[16].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0))));
	goto label_67;
	}
label_65:;
	{
	LINE_NUMBER(1254);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) != (jint(2))) goto label_67;
	}
	{
	LINE_NUMBER(1255);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_69;
	}
	{
	LINE_NUMBER(1256);
	frame[16].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1))));
	goto label_67;
	}
label_69:;
	{
	LINE_NUMBER(1257);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))))->vtable)[VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_67;
	}
	{
	LINE_NUMBER(1258);
	frame[16].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0))));
	}
label_67:;
	{
	LINE_NUMBER(1260);
	if ((frame[16].o) != nullptr) goto label_63;
	}
	{
	LINE_NUMBER(1261);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.ctor.multiple.parms"_j));
	sp[1].o = frame[1].o;
	LINE_NUMBER(1262);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(1261);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_63:;
	{
	LINE_NUMBER(1266);
	clinit_rhino_FunctionObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_FunctionObject);
	init_rhino_FunctionObject_java_lang_String_java_lang_reflect_Member_rhino_Scriptable(ctx, sp[0].o, (frame[8].o), (frame[16].o), (frame[0].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(1267);
	jint temp0 = (jint)((func_rhino_FunctionObject_isVarArgsMethod_R_boolean) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_rhino_FunctionObject_isVarArgsMethod_R_boolean])(ctx, (frame[17].o));
	if (temp0 == 0) goto label_76;
	}
	{
	LINE_NUMBER(1268);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.varargs.ctor"_j));
	sp[1].o = frame[16].o;
	LINE_NUMBER(1269);
	sp[1].o = (jobject)((func_java_lang_reflect_Member_getName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_lang_reflect_Member, INDEX_java_lang_reflect_Member_getName_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_76:;
	{
	LINE_NUMBER(1271);
	((func_rhino_FunctionObject_initAsConstructor_rhino_Scriptable_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_rhino_FunctionObject_initAsConstructor_rhino_Scriptable_rhino_Scriptable])(ctx, (frame[17].o), (frame[0].o), (frame[7].o));
	LINE_NUMBER(1273);
	frame[18].o = (jobject(nullptr));
	LINE_NUMBER(1274);
	clinit_java_util_HashSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[0].o);
	frame[19].o = sp[0].o;
	LINE_NUMBER(1275);
	clinit_java_util_HashSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[0].o);
	frame[20].o = sp[0].o;
	LINE_NUMBER(1276);
	frame[21].o = (frame[4].o);
	frame[22].i = (((jarray) nullCheck(ctx, (frame[21].o)))->length);
	frame[23].i = (jint(0));
	}
label_83:;
	{
	if ((frame[23].i) >= (frame[22].i)) goto label_84;
	}
	{
	frame[24].o = ((jobject)ARRAY_ACCESS(jobject, (frame[21].o), (frame[23].i)));
	LINE_NUMBER(1277);
	if ((frame[24].o) != (frame[16].o)) goto label_86;
	}
	LINE_NUMBER(1278);
	goto label_88;
label_86:;
	{
	LINE_NUMBER(1280);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[24].o));
	frame[25].o = sp[0].o;
	LINE_NUMBER(1281);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[25].o), (((jobject) createStringLiteral(ctx, u8"finishInit"_j))));
	if (temp0 == 0) goto label_90;
	}
	{
	LINE_NUMBER(1282);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[24].o));
	frame[26].o = sp[0].o;
	LINE_NUMBER(1283);
	if ((((jarray) nullCheck(ctx, (frame[26].o)))->length) != (jint(3))) goto label_90;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[26].o), (jint(0)));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	if (sp[0].o != sp[1].o) goto label_90;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[26].o), (jint(1)))) != (((jobject) &class_rhino_FunctionObject))) goto label_90;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[26].o), (jint(2)));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	if (sp[0].o != sp[1].o) goto label_90;
	}
	{
	sp[0].o = frame[24].o;
	LINE_NUMBER(1287);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_90;
	}
	{
	LINE_NUMBER(1288);
	frame[18].o = (frame[24].o);
	LINE_NUMBER(1289);
	goto label_88;
	}
label_90:;
	{
	LINE_NUMBER(1293);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[25].o), (36));
	if (temp0 == (jint(-1))) goto label_96;
	}
	LINE_NUMBER(1294);
	goto label_88;
label_96:;
	{
	LINE_NUMBER(1295);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[25].o), (((jobject) createStringLiteral(ctx, u8"jsConstructor"_j))));
	if (temp0 == 0) goto label_98;
	}
	LINE_NUMBER(1296);
	goto label_88;
label_98:;
	{
	LINE_NUMBER(1298);
	frame[26].o = (jobject(nullptr));
	LINE_NUMBER(1299);
	frame[27].o = (jobject(nullptr));
	LINE_NUMBER(1300);
	jint temp0 = (jint)((func_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[24].o), (((jobject) &class_rhino_annotations_JSFunction)));
	if (temp0 == 0) goto label_102;
	}
	{
	LINE_NUMBER(1301);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation])(ctx, (frame[24].o), (((jobject) &class_rhino_annotations_JSFunction)));
	frame[26].o = sp[0].o;
	goto label_104;
	}
label_102:;
	{
	LINE_NUMBER(1302);
	jint temp0 = (jint)((func_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[24].o), (((jobject) &class_rhino_annotations_JSStaticFunction)));
	if (temp0 == 0) goto label_105;
	}
	{
	LINE_NUMBER(1303);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation])(ctx, (frame[24].o), (((jobject) &class_rhino_annotations_JSStaticFunction)));
	frame[26].o = sp[0].o;
	goto label_104;
	}
label_105:;
	{
	LINE_NUMBER(1304);
	jint temp0 = (jint)((func_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[24].o), (((jobject) &class_rhino_annotations_JSGetter)));
	if (temp0 == 0) goto label_107;
	}
	{
	LINE_NUMBER(1305);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation])(ctx, (frame[24].o), (((jobject) &class_rhino_annotations_JSGetter)));
	frame[26].o = sp[0].o;
	goto label_104;
	}
label_107:;
	{
	LINE_NUMBER(1306);
	jint temp0 = (jint)((func_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[24].o), (((jobject) &class_rhino_annotations_JSSetter)));
	if (temp0 == 0) goto label_104;
	}
	LINE_NUMBER(1307);
	goto label_88;
label_104:;
	{
	LINE_NUMBER(1310);
	if ((frame[26].o) != nullptr) goto label_110;
	}
	{
	LINE_NUMBER(1311);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[25].o), (((jobject) createStringLiteral(ctx, u8"jsFunction_"_j))));
	if (temp0 == 0) goto label_112;
	}
	{
	LINE_NUMBER(1312);
	frame[27].o = (((jobject) createStringLiteral(ctx, u8"jsFunction_"_j)));
	goto label_110;
	}
label_112:;
	{
	LINE_NUMBER(1313);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[25].o), (((jobject) createStringLiteral(ctx, u8"jsStaticFunction_"_j))));
	if (temp0 == 0) goto label_114;
	}
	{
	LINE_NUMBER(1314);
	frame[27].o = (((jobject) createStringLiteral(ctx, u8"jsStaticFunction_"_j)));
	goto label_110;
	}
label_114:;
	{
	LINE_NUMBER(1315);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[25].o), (((jobject) createStringLiteral(ctx, u8"jsGet_"_j))));
	if (temp0 == 0) goto label_88;
	}
	{
	LINE_NUMBER(1316);
	frame[27].o = (((jobject) createStringLiteral(ctx, u8"jsGet_"_j)));
	}
label_110:;
	{
	LINE_NUMBER(1324);
	if ((isInstance(ctx, (frame[26].o), &class_rhino_annotations_JSStaticFunction)) != 0) goto label_117;
	}
	{
	if ((frame[27].o) != (((jobject) createStringLiteral(ctx, u8"jsStaticFunction_"_j)))) goto label_118;
	}
label_117:;
	INST_ICONST(1);
	goto label_119;
label_118:;
	INST_ICONST(0);
label_119:;
	{
	sp -= 1;
	frame[28].i = sp[0].i;
	LINE_NUMBER(1326);
	if ((frame[28].i) == 0) goto label_121;
	}
	INST_ALOAD(19);
	goto label_122;
label_121:;
	INST_ALOAD(20);
label_122:;
	{
	sp -= 1;
	frame[29].o = sp[0].o;
	LINE_NUMBER(1327);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getPropertyName_java_lang_String_java_lang_String_java_lang_annotation_Annotation_R_java_lang_String(ctx, (frame[25].o), (frame[27].o), (frame[26].o));
	frame[30].o = sp[0].o;
	LINE_NUMBER(1328);
	jint temp0 = (jint)((func_java_util_HashSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_util_HashSet_contains_java_lang_Object_R_boolean])(ctx, (frame[29].o), (frame[30].o));
	if (temp0 == 0) goto label_125;
	}
	{
	LINE_NUMBER(1329);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"duplicate.defineClass.name"_j))), (frame[25].o), (frame[30].o));
	throwException(ctx, sp[0].o);	}
label_125:;
	{
	LINE_NUMBER(1332);
	jint temp0 = (jint)((func_java_util_HashSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean])(ctx, (frame[29].o), (frame[30].o));
	LINE_NUMBER(1333);
	frame[25].o = (frame[30].o);
	LINE_NUMBER(1335);
	if ((isInstance(ctx, (frame[26].o), &class_rhino_annotations_JSGetter)) != 0) goto label_129;
	}
	{
	if ((frame[27].o) != (((jobject) createStringLiteral(ctx, u8"jsGet_"_j)))) goto label_130;
	}
label_129:;
	{
	LINE_NUMBER(1336);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject)) != 0) goto label_131;
	}
	{
	LINE_NUMBER(1337);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.extend.scriptable"_j));
	sp[1].o = frame[7].o;
	LINE_NUMBER(1339);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_Class_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = frame[25].o;
	LINE_NUMBER(1337);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_131:;
	{
	LINE_NUMBER(1341);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_findSetterMethod_Array1_java_lang_reflect_Method_java_lang_String_java_lang_String_R_java_lang_reflect_Method(ctx, (frame[4].o), (frame[25].o), (((jobject) createStringLiteral(ctx, u8"jsSet_"_j))));
	frame[31].o = sp[0].o;
	LINE_NUMBER(1342);
	jint temp0 = 6;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[31].o) == nullptr) goto label_136;
	}
	INST_ICONST(0);
	goto label_137;
label_136:;
	INST_ICONST(1);
label_137:;
	{
	sp -= 2;
	frame[32].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(1346);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[7].o))))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[7].o))), (frame[25].o), (jobject(nullptr)), (frame[24].o), (frame[31].o), (frame[32].i));
	LINE_NUMBER(1349);
	goto label_88;
	}
label_130:;
	{
	LINE_NUMBER(1352);
	if ((frame[28].i) == 0) goto label_140;
	}
	{
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[24].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_140;
	}
	{
	LINE_NUMBER(1353);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"jsStaticFunction must be used with static method."_j))));
	throwException(ctx, sp[0].o);	}
label_140:;
	{
	LINE_NUMBER(1357);
	clinit_rhino_FunctionObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_FunctionObject);
	init_rhino_FunctionObject_java_lang_String_java_lang_reflect_Member_rhino_Scriptable(ctx, sp[0].o, (frame[25].o), (frame[24].o), (frame[7].o));
	frame[31].o = sp[0].o;
	LINE_NUMBER(1358);
	jint temp0 = (jint)((func_rhino_FunctionObject_isVarArgsConstructor_R_boolean) ((void **) nullCheck(ctx, (frame[31].o))->vtable)[VTABLE_rhino_FunctionObject_isVarArgsConstructor_R_boolean])(ctx, (frame[31].o));
	if (temp0 == 0) goto label_143;
	}
	{
	LINE_NUMBER(1359);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.varargs.fun"_j));
	sp[1].o = frame[16].o;
	LINE_NUMBER(1360);
	sp[1].o = (jobject)((func_java_lang_reflect_Member_getName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_lang_reflect_Member, INDEX_java_lang_reflect_Member_getName_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_143:;
	{
	LINE_NUMBER(1362);
	if ((frame[28].i) == 0) goto label_146;
	}
	INST_ALOAD(17);
	goto label_147;
label_146:;
	INST_ALOAD(7);
label_147:;
	{
	sp -= 1;
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, sp[0].o, (frame[25].o), (frame[31].o), (jint(2)));
	LINE_NUMBER(1363);
	if ((frame[2].i) == 0) goto label_88;
	}
	{
	LINE_NUMBER(1364);
	((func_rhino_FunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[31].o))->vtable)[VTABLE_rhino_FunctionObject_sealObject])(ctx, (frame[31].o));
	}
label_88:;
	{
	LINE_NUMBER(1276);
	INST_IINC(23, 1);
	goto label_83;
	}
label_84:;
	{
	LINE_NUMBER(1369);
	if ((frame[18].o) == nullptr) goto label_150;
	}
	{
	LINE_NUMBER(1370);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[0].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[17].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (frame[7].o);
	frame[21].o = sp[0].o;
	LINE_NUMBER(1371);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[18].o), (jobject(nullptr)), (frame[21].o));
	}
label_150:;
	{
	LINE_NUMBER(1375);
	if ((frame[2].i) == 0) goto label_153;
	}
	{
	LINE_NUMBER(1376);
	((func_rhino_FunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_rhino_FunctionObject_sealObject])(ctx, (frame[17].o));
	LINE_NUMBER(1377);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject)) == 0) goto label_153;
	}
	{
	LINE_NUMBER(1378);
	((func_rhino_ScriptableObject_sealObject) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[7].o))))->vtable)[VTABLE_rhino_ScriptableObject_sealObject])(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[7].o))));
	}
label_153:;
	{
	LINE_NUMBER(1382);
	popStackFrame(ctx);
	return (frame[17].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_findAnnotatedMember_Array1_java_lang_reflect_AccessibleObject_java_lang_Class_R_java_lang_reflect_Member(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:findAnnotatedMember", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1387);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1388);
	jint temp0 = (jint)((func_java_lang_reflect_AccessibleObject_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_AccessibleObject_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[5].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1389);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_reflect_Member, (frame[5].o)));
	}
label_4:;
	{
	LINE_NUMBER(1387);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1392);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_findSetterMethod_Array1_java_lang_reflect_Method_java_lang_String_java_lang_String_R_java_lang_reflect_Method(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:findSetterMethod", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1398);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"set"_j))));
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	LINE_NUMBER(1399);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, temp0);
	jint temp2 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp2);
	sp[1].o = frame[1].o;
	jint temp3 = jint(1);
	LINE_NUMBER(1400);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, temp3);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1401);
	frame[4].o = (frame[0].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(1402);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation])(ctx, (frame[7].o), (((jobject) &class_rhino_annotations_JSSetter)));
	frame[8].o = (checkCast(ctx, &class_rhino_annotations_JSSetter, sp[0].o));
	LINE_NUMBER(1403);
	if ((frame[8].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1404);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_rhino_annotations_JSSetter_value_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_annotations_JSSetter, INDEX_rhino_annotations_JSSetter_value_R_java_lang_String, (frame[8].o)))(ctx, (frame[8].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[1].o = frame[8].o;
	LINE_NUMBER(1405);
	sp[1].o = (jobject)((func_rhino_annotations_JSSetter_value_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_annotations_JSSetter, INDEX_rhino_annotations_JSSetter_value_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(1406);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_8:;
	{
	LINE_NUMBER(1401);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1410);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1411);
	frame[5].o = (frame[0].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_13:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_14;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(1412);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[8].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(1413);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_16:;
	{
	LINE_NUMBER(1411);
	INST_IINC(7, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1416);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getPropertyName_java_lang_String_java_lang_String_java_lang_annotation_Annotation_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getPropertyName", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1422);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1423);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1425);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1426);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_annotations_JSGetter)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1427);
	sp[0].o = (jobject)((func_rhino_annotations_JSGetter_value_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_annotations_JSGetter, INDEX_rhino_annotations_JSGetter_value_R_java_lang_String, (checkCast(ctx, &class_rhino_annotations_JSGetter, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_annotations_JSGetter, (frame[2].o))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1428);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(1429);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 <= (jint(3))) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"get"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1430);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[0].o), (jint(3)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1431);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Character_isUpperCase_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1432);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 != (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(1433);
	sp[0].o = frame[3].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	goto label_8;
	}
label_12:;
	{
	LINE_NUMBER(1434);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(1)));
	jint temp1 = (jint)SM_java_lang_Character_isUpperCase_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_8;
	}
	{
	LINE_NUMBER(1435);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	sp[1].o = frame[3].o;
	jint temp2 = jint(1);
	LINE_NUMBER(1436);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, temp2);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(1441);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_annotations_JSFunction)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1442);
	sp[0].o = (jobject)((func_rhino_annotations_JSFunction_value_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_annotations_JSFunction, INDEX_rhino_annotations_JSFunction_value_R_java_lang_String, (checkCast(ctx, &class_rhino_annotations_JSFunction, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_annotations_JSFunction, (frame[2].o))));
	frame[3].o = sp[0].o;
	goto label_8;
	}
label_16:;
	{
	LINE_NUMBER(1443);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_annotations_JSStaticFunction)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1444);
	sp[0].o = (jobject)((func_rhino_annotations_JSStaticFunction_value_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_annotations_JSStaticFunction, INDEX_rhino_annotations_JSStaticFunction_value_R_java_lang_String, (checkCast(ctx, &class_rhino_annotations_JSStaticFunction, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_annotations_JSStaticFunction, (frame[2].o))));
	frame[3].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1446);
	if ((frame[3].o) == nullptr) goto label_19;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(1447);
	frame[3].o = (frame[0].o);
	}
label_20:;
	{
	LINE_NUMBER(1449);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_extendsScriptable_java_lang_Class_R_java_lang_Class(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:extendsScriptable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1454);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1455);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(1456);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineProperty", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1470);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(1471);
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(1472);
	((func_rhino_ScriptableObject_setAttributes_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_setAttributes_java_lang_String_int])(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	LINE_NUMBER(1473);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineProperty", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1483);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(1484);
	((func_rhino_ScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(1485);
	((func_rhino_ScriptableObject_setAttributes_rhino_Symbol_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_setAttributes_rhino_Symbol_int])(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	LINE_NUMBER(1486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineProperty", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1501);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ScriptableObject)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1502);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(1503);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(1505);
	frame[4].o = (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o)));
	LINE_NUMBER(1506);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[4].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(1507);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptableObject_defineConstProperty_rhino_Scriptable_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineConstProperty", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1519);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ConstProperties)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1520);
	frame[2].o = (checkCast(ctx, &class_rhino_ConstProperties, (frame[0].o)));
	LINE_NUMBER(1521);
	((func_rhino_ConstProperties_defineConst_java_lang_String_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_ConstProperties, INDEX_rhino_ConstProperties_defineConst_java_lang_String_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[0].o));
	LINE_NUMBER(1522);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(1523);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_Undefined(ctx);
	sp[2].o = (jobject)SF_rhino_Undefined_instance;
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, sp[0].o, sp[1].o, sp[2].o, (13));
	}
label_5:;
	LINE_NUMBER(1524);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineProperty", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1545);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(1546);
	if ((frame[4].i) != 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1547);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((jint(3)) + (frame[4].i)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1548);
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, (frame[1].o), (jint(0)), (frame[4].i), (frame[5].o), (jint(3)));
	LINE_NUMBER(1549);
	sp[0].o = frame[5].o;
	jint temp0 = jint(3);
	jint temp1 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (jint(3)))));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1550);
	ARRAY_ACCESS(jchar, (frame[5].o), (jint(0))) = (103);
	LINE_NUMBER(1551);
	ARRAY_ACCESS(jchar, (frame[5].o), (jint(1))) = (101);
	LINE_NUMBER(1552);
	ARRAY_ACCESS(jchar, (frame[5].o), (jint(2))) = (116);
	LINE_NUMBER(1553);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1554);
	ARRAY_ACCESS(jchar, (frame[5].o), (jint(0))) = (115);
	LINE_NUMBER(1555);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1557);
	sp[0].o = (jobject)SM_rhino_FunctionObject_getMethodList_java_lang_Class_R_Array1_java_lang_reflect_Method(ctx, (frame[2].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1558);
	sp[0].o = (jobject)SM_rhino_FunctionObject_findSingleMethod_Array1_java_lang_reflect_Method_java_lang_String_R_java_lang_reflect_Method(ctx, (frame[8].o), (frame[6].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1559);
	sp[0].o = (jobject)SM_rhino_FunctionObject_findSingleMethod_Array1_java_lang_reflect_Method_java_lang_String_R_java_lang_reflect_Method(ctx, (frame[8].o), (frame[7].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1560);
	if ((frame[10].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(1561);
	frame[3].i = ((frame[3].i) | (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(1562);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[9].o), (frame[10].o), (frame[3].i));
	LINE_NUMBER(1564);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineProperty", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1608);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(1609);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1610);
	clinit_rhino_MemberBox(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_MemberBox);
	init_rhino_MemberBox_java_lang_reflect_Method(ctx, sp[0].o, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1613);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[3].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1614);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1615);
	((rhino_MemberBox *) NULL_CHECK((frame[6].o)))->F_delegateTo = (jref) (frame[2].o);
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(1617);
	frame[7].i = (jint(1));
	LINE_NUMBER(1620);
	sp[0].o = frame[6].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	((rhino_MemberBox *) NULL_CHECK(sp[0].o))->F_delegateTo = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(1623);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(1624);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[3].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1625);
	if ((((jarray) nullCheck(ctx, (frame[9].o)))->length) != 0) goto label_14;
	}
	{
	LINE_NUMBER(1626);
	if ((frame[7].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1627);
	frame[8].o = (((jobject) createStringLiteral(ctx, u8"msg.obj.getter.parms"_j)));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(1629);
	if ((((jarray) nullCheck(ctx, (frame[9].o)))->length) != (jint(1))) goto label_18;
	}
	{
	LINE_NUMBER(1630);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (jint(0))));
	LINE_NUMBER(1632);
	sp[0].o = frame[10].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	sp[0].o = frame[10].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableObjectClass;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	LINE_NUMBER(1634);
	frame[8].o = (((jobject) createStringLiteral(ctx, u8"msg.bad.getter.parms"_j)));
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(1635);
	if ((frame[7].i) != 0) goto label_23;
	}
	{
	LINE_NUMBER(1636);
	frame[8].o = (((jobject) createStringLiteral(ctx, u8"msg.bad.getter.parms"_j)));
	}
label_23:;
	LINE_NUMBER(1638);
	goto label_16;
label_18:;
	{
	LINE_NUMBER(1639);
	frame[8].o = (((jobject) createStringLiteral(ctx, u8"msg.bad.getter.parms"_j)));
	}
label_16:;
	{
	LINE_NUMBER(1641);
	if ((frame[8].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1642);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Method_toString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1646);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(1647);
	if ((frame[4].o) == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(1648);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, (frame[4].o));
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	if (sp[0].o == sp[1].o) goto label_29;
	}
	{
	LINE_NUMBER(1649);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.setter.return"_j));
	sp[1].o = frame[4].o;
	LINE_NUMBER(1650);
	sp[1].o = (jobject)((func_java_lang_reflect_Method_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_reflect_Method_toString_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(1649);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(1652);
	clinit_rhino_MemberBox(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_MemberBox);
	init_rhino_MemberBox_java_lang_reflect_Method(ctx, sp[0].o, (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1655);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_34;
	}
	{
	LINE_NUMBER(1656);
	if ((frame[2].o) == nullptr) goto label_36;
	}
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(1657);
	((rhino_MemberBox *) NULL_CHECK((frame[7].o)))->F_delegateTo = (jref) (frame[2].o);
	goto label_39;
	}
label_34:;
	{
	LINE_NUMBER(1659);
	frame[8].i = (jint(1));
	LINE_NUMBER(1662);
	sp[0].o = frame[7].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	((rhino_MemberBox *) NULL_CHECK(sp[0].o))->F_delegateTo = (jref) sp[1].o;
	}
label_39:;
	{
	LINE_NUMBER(1665);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(1666);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[4].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1667);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) != (jint(1))) goto label_43;
	}
	{
	LINE_NUMBER(1668);
	if ((frame[8].i) == 0) goto label_45;
	}
	{
	LINE_NUMBER(1669);
	frame[9].o = (((jobject) createStringLiteral(ctx, u8"msg.setter2.expected"_j)));
	goto label_45;
	}
label_43:;
	{
	LINE_NUMBER(1671);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) != (jint(2))) goto label_47;
	}
	{
	LINE_NUMBER(1672);
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0))));
	LINE_NUMBER(1674);
	sp[0].o = frame[11].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	if (sp[0].o == sp[1].o) goto label_50;
	}
	{
	sp[0].o = frame[11].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableObjectClass;
	if (sp[0].o == sp[1].o) goto label_50;
	}
	{
	LINE_NUMBER(1676);
	frame[9].o = (((jobject) createStringLiteral(ctx, u8"msg.setter2.parms"_j)));
	goto label_52;
	}
label_50:;
	{
	LINE_NUMBER(1677);
	if ((frame[8].i) != 0) goto label_52;
	}
	{
	LINE_NUMBER(1678);
	frame[9].o = (((jobject) createStringLiteral(ctx, u8"msg.setter1.parms"_j)));
	}
label_52:;
	LINE_NUMBER(1680);
	goto label_45;
label_47:;
	{
	LINE_NUMBER(1681);
	frame[9].o = (((jobject) createStringLiteral(ctx, u8"msg.setter.parms"_j)));
	}
label_45:;
	{
	LINE_NUMBER(1683);
	if ((frame[9].o) == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(1684);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_reflect_Method_toString_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(1688);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[8].o = (checkCast(ctx, &class_rhino_ScriptableObject$GetterSlot, sp[0].o));
	LINE_NUMBER(1690);
	((func_rhino_ScriptableObject$GetterSlot_setAttributes_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject$GetterSlot_setAttributes_int])(ctx, (frame[8].o), (frame[5].i));
	LINE_NUMBER(1691);
	((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[8].o)))->F_getter = (jref) (frame[6].o);
	LINE_NUMBER(1692);
	((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[8].o)))->F_setter = (jref) (frame[7].o);
	LINE_NUMBER(1693);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineOwnProperties", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1701);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object])(ctx, (frame[2].o), (jint(0)), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1702);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_ScriptableObject, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1703);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(1704);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))), (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1705);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1706);
	((func_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(1707);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)) = (frame[8].o);
	LINE_NUMBER(1703);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1709);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_12:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_13;
	}
	{
	LINE_NUMBER(1710);
	((func_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))));
	LINE_NUMBER(1709);
	INST_IINC(5, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(1712);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineOwnProperty", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1721);
	((func_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(1722);
	((func_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jint(1)));
	LINE_NUMBER(1723);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineOwnProperty", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1737);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[3].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_QUERY;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1738);
	if ((frame[5].o) != nullptr) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1740);
	if ((frame[4].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1741);
	if ((frame[5].o) != nullptr) goto label_7;
	}
	INST_ACONST_NULL();
	goto label_8;
label_7:;
	{
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	LINE_NUMBER(1742);
	sp[0].o = (jobject)((func_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1743);
	((func_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[2].o), (frame[7].o), (frame[3].o));
	}
label_5:;
	{
	LINE_NUMBER(1746);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	frame[7].i = temp0;
	LINE_NUMBER(1749);
	if ((frame[5].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(1750);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp += 3;
	if ((frame[7].i) == 0) goto label_14;
	}
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	(sp++)->o = SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
	goto label_15;
label_14:;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	(sp++)->o = SF_rhino_ScriptableObject$SlotAccess_MODIFY;
label_15:;
	{
	sp -= 4;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1751);
	jint temp0 = (jint)((func_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int])(ctx, (frame[0].o), (7), (frame[3].o));
	frame[8].i = temp0;
	goto label_18;
	}
label_12:;
	{
	LINE_NUMBER(1753);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, (frame[5].o));
	jint temp1 = (jint)((func_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int])(ctx, sp[0].o, temp0, (frame[3].o));
	frame[8].i = temp1;
	}
label_18:;
	{
	LINE_NUMBER(1756);
	if ((frame[7].i) == 0) goto label_19;
	}
	{
	LINE_NUMBER(1757);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ScriptableObject$GetterSlot)) != 0) goto label_21;
	}
	{
	LINE_NUMBER(1758);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[3].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(1761);
	frame[9].o = (checkCast(ctx, &class_rhino_ScriptableObject$GetterSlot, (frame[5].o)));
	LINE_NUMBER(1763);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"get"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1764);
	sp[0].o = frame[10].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_25;
	}
	{
	LINE_NUMBER(1765);
	((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[9].o)))->F_getter = (jref) (frame[10].o);
	}
label_25:;
	{
	LINE_NUMBER(1767);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"set"_j))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1768);
	sp[0].o = frame[11].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_28;
	}
	{
	LINE_NUMBER(1769);
	((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[9].o)))->F_setter = (jref) (frame[11].o);
	}
label_28:;
	{
	LINE_NUMBER(1772);
	sp[0].o = frame[9].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(1773);
	((func_rhino_ScriptableObject$GetterSlot_setAttributes_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject$GetterSlot_setAttributes_int])(ctx, (frame[9].o), (frame[8].i));
	LINE_NUMBER(1774);
	goto label_32;
	}
label_19:;
	{
	LINE_NUMBER(1775);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ScriptableObject$GetterSlot)) == 0) goto label_33;
	}
	{
	jint temp0 = (jint)((func_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(1776);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[3].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].o = sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(1779);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1780);
	sp[0].o = frame[9].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_36;
	}
	{
	LINE_NUMBER(1781);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_value = (jref) (frame[9].o);
	goto label_38;
	}
label_36:;
	{
	LINE_NUMBER(1782);
	if ((frame[6].i) == 0) goto label_38;
	}
	{
	LINE_NUMBER(1783);
	sp[0].o = frame[5].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_38:;
	{
	LINE_NUMBER(1785);
	((func_rhino_ScriptableObject$Slot_setAttributes_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_setAttributes_int])(ctx, (frame[5].o), (frame[8].i));
	}
label_32:;
	LINE_NUMBER(1787);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:checkPropertyDefinition", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1790);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"get"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1791);
	sp[0].o = frame[2].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Callable)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1793);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1795);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"set"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1796);
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Callable)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1798);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1800);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1801);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.both.data.and.accessor.desc"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(1803);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:checkPropertyChange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1807);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1808);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isExtensible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isExtensible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.extensible"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1810);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"configurable"_j))), (frame[2].o));
	jint temp0 = (jint)SM_rhino_ScriptableObject_isFalse_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1811);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"configurable"_j))));
	jint temp0 = (jint)SM_rhino_ScriptableObject_isTrue_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1812);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.change.configurable.false.to.true"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1814);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"enumerable"_j))), (frame[2].o));
	jint temp0 = (jint)SM_rhino_ScriptableObject_isTrue_java_lang_Object_R_boolean(ctx, sp[0].o);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"enumerable"_j))));
	jint temp1 = (jint)SM_rhino_ScriptableObject_isTrue_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 == temp1) goto label_7;
	}
	{
	LINE_NUMBER(1815);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.change.enumerable.with.configurable.false"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1817);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(1818);
	jint temp1 = (jint)((func_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	frame[5].i = temp1;
	LINE_NUMBER(1819);
	if ((frame[4].i) != 0) goto label_11;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_11;
	goto label_3;
label_11:;
	{
	LINE_NUMBER(1821);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(1822);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"writable"_j))), (frame[2].o));
	jint temp0 = (jint)SM_rhino_ScriptableObject_isFalse_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1823);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"writable"_j))));
	jint temp0 = (jint)SM_rhino_ScriptableObject_isTrue_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(1824);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.change.writable.false.to.true.with.configurable.false"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(1827);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	sp[2].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[2].o));
	jint temp0 = (jint)((func_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(1828);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.change.value.with.writable.false"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(1831);
	if ((frame[5].i) == 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(1832);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"set"_j))));
	sp[2].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"set"_j))), (frame[2].o));
	jint temp0 = (jint)((func_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(1833);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.change.setter.with.configurable.false"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(1836);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"get"_j))));
	sp[2].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"get"_j))), (frame[2].o));
	jint temp0 = (jint)((func_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(1837);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.change.getter.with.configurable.false"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(1840);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(1841);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.change.property.data.to.accessor.with.configurable.false"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(1843);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.change.property.accessor.to.data.with.configurable.false"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(1848);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptableObject_isTrue_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:isTrue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1851);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[0].o));
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

jbool SM_rhino_ScriptableObject_isFalse_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:isFalse", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1855);
	jint temp0 = (jint)SM_rhino_ScriptableObject_isTrue_java_lang_Object_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool M_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:sameValue", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1866);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(1867);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1869);
	sp[0].o = frame[2].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(1870);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1874);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Number)) == 0) goto label_5;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1875);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))));
	frame[3].d = temp0;
	LINE_NUMBER(1876);
	jdouble temp1 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	frame[5].d = temp1;
	LINE_NUMBER(1877);
	jint temp2 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[3].d));
	if (temp2 == 0) goto label_9;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[5].d));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1878);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(1880);
	if ((doubleCompare((frame[3].d), (jdouble(0)), -1)) != 0) goto label_5;
	}
	{
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[3].d));
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[5].d));
	if ((longCompare(temp0, temp1)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1881);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(1884);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_shallowEq_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:applyDescriptorToAttributeBitset", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1889);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"enumerable"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1890);
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(1891);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (frame[1].i) & (-3);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jint temp0 = (frame[1].i) | (jint(2));
	sp[0].i = temp0;
	sp += 1;
	}
label_5:;
	INST_ISTORE(1);
label_2:;
	{
	LINE_NUMBER(1895);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"writable"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1896);
	sp[0].o = frame[4].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(1897);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[4].o));
	if (temp0 == 0) goto label_9;
	}
	{
	jint temp0 = (frame[1].i) & (-2);
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	jint temp0 = (frame[1].i) | (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	INST_ISTORE(1);
label_7:;
	{
	LINE_NUMBER(1901);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"configurable"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1902);
	sp[0].o = frame[5].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(1903);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[5].o));
	if (temp0 == 0) goto label_14;
	}
	{
	jint temp0 = (frame[1].i) & (-5);
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	jint temp0 = (frame[1].i) | (jint(4));
	sp[0].i = temp0;
	sp += 1;
	}
label_15:;
	INST_ISTORE(1);
label_12:;
	{
	LINE_NUMBER(1907);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:isDataDescriptor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1916);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"writable"_j))));
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

jbool M_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:isAccessorDescriptor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1925);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"get"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"set"_j))));
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

jbool M_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:isGenericDescriptor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1934);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
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

jobject SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:ensureScriptable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1938);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1939);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.arg.not.object"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1940);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, (frame[0].o)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_ensureSymbolScriptable_java_lang_Object_R_rhino_SymbolScriptable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:ensureSymbolScriptable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1944);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_SymbolScriptable)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1945);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.object.not.symbolscriptable"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1946);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[0].o)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:ensureScriptableObject", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1950);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ScriptableObject)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1951);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.arg.not.object"_j));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1952);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o)));
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:defineFunctionProperties", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1969);
	sp[0].o = (jobject)SM_rhino_FunctionObject_getMethodList_java_lang_Class_R_Array1_java_lang_reflect_Method(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1970);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(1971);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(1972);
	sp[0].o = (jobject)SM_rhino_FunctionObject_findSingleMethod_Array1_java_lang_reflect_Method_java_lang_String_R_java_lang_reflect_Method(ctx, (frame[4].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1973);
	if ((frame[7].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1974);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.method.not.found"_j));
	sp[1].o = frame[6].o;
	sp[2].o = frame[2].o;
	LINE_NUMBER(1975);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	LINE_NUMBER(1974);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1977);
	clinit_rhino_FunctionObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_FunctionObject);
	init_rhino_FunctionObject_java_lang_String_java_lang_reflect_Member_rhino_Scriptable(ctx, sp[0].o, (frame[6].o), (frame[7].o), (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1978);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[0].o), (frame[6].o), (frame[8].o), (frame[3].i));
	LINE_NUMBER(1970);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1980);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getObjectPrototype", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1988);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_Object;
	sp[0].o = (jobject)SM_rhino_TopLevel_getBuiltinPrototype_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getFunctionPrototype_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getFunctionPrototype", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1998);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_Function;
	sp[0].o = (jobject)SM_rhino_TopLevel_getBuiltinPrototype_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getGeneratorFunctionPrototype_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getGeneratorFunctionPrototype", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2003);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_GeneratorFunction;
	sp[0].o = (jobject)SM_rhino_TopLevel_getBuiltinPrototype_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getArrayPrototype_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getArrayPrototype", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2008);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_Array;
	sp[0].o = (jobject)SM_rhino_TopLevel_getBuiltinPrototype_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getClassPrototype_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getClassPrototype", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2028);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(2029);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2031);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_BaseFunction)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2032);
	sp[0].o = (jobject)((func_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_BaseFunction, (frame[2].o))))->vtable)[VTABLE_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_BaseFunction, (frame[2].o))));
	frame[3].o = sp[0].o;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(2033);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Scriptable)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(2034);
	frame[4].o = (checkCast(ctx, &class_rhino_Scriptable, (frame[2].o)));
	LINE_NUMBER(2035);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"prototype"_j))), (frame[4].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2036);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(2037);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(2039);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Scriptable)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2040);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, (frame[3].o)));
	}
label_11:;
	{
	LINE_NUMBER(2042);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getTopLevelScope", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(2055);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2056);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2057);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(2059);
	frame[0].o = (frame[1].o);
	LINE_NUMBER(2060);
	goto label_0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_isExtensible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:isExtensible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2064);
	popStackFrame(ctx);
	return ((jint)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isExtensible);
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_preventExtensions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:preventExtensions", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2068);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isExtensible = (jint(0));
	LINE_NUMBER(2069);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_sealObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:sealObject", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2080);
	if (((jint)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isSealed) != 0) goto label_13;
	}
	{
	LINE_NUMBER(2081);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	jlong temp0 = (jlong)((func_rhino_SlotMapContainer_readLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_readLock_R_long])(ctx, sp[0].o);
	frame[1].l = temp0;
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(2083);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_ScriptableObject$Slot, sp[0].o));
	LINE_NUMBER(2084);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[4].o)))->F_value;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2085);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_LazilyLoadedCtor)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(2086);
	frame[6].o = (checkCast(ctx, &class_rhino_LazilyLoadedCtor, (frame[5].o)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2088);
	((func_rhino_LazilyLoadedCtor_init) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_LazilyLoadedCtor_init])(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(2090);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object])(ctx, (frame[6].o));
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(2091);
	goto label_19;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(2090);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object])(ctx, (frame[6].o));
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(2091);
	throwException(ctx, (frame[7].o));	}
label_19:;
	LINE_NUMBER(2093);
	goto label_15;
label_16:;
	{
	LINE_NUMBER(2094);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isSealed = (jint(1));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(2096);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	((func_rhino_SlotMapContainer_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_unlockRead_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(2097);
	goto label_13;
	}
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	LINE_NUMBER(2096);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	((func_rhino_SlotMapContainer_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_unlockRead_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(2097);
	throwException(ctx, (frame[8].o));	}
label_13:;
	LINE_NUMBER(2099);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_isSealed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:isSealed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2108);
	popStackFrame(ctx);
	return ((jint)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isSealed);
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:checkNotSealed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2112);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	LINE_NUMBER(2113);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2115);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ILOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, sp[0].i);
	sp++;
label_4:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2116);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.modify.sealed"_j))), (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getProperty", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2132);
	frame[2].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(2135);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2136);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	LINE_NUMBER(2137);
	goto label_5;
label_3:;
	{
	LINE_NUMBER(2138);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(2139);
	if ((frame[0].o) != nullptr) goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(2140);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_rhino_Symbol_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getProperty", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2147);
	frame[2].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(2150);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureSymbolScriptable_java_lang_Object_R_rhino_SymbolScriptable(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2151);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	LINE_NUMBER(2152);
	goto label_5;
label_3:;
	{
	LINE_NUMBER(2153);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(2154);
	if ((frame[0].o) != nullptr) goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(2155);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getTypedProperty_rhino_Scriptable_int_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getTypedProperty", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2178);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2179);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(2180);
	frame[3].o = (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2182);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, (frame[3].o), (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_Class_cast_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_cast_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getProperty", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2201);
	frame[2].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(2204);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2205);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	LINE_NUMBER(2206);
	goto label_5;
label_3:;
	{
	LINE_NUMBER(2207);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(2208);
	if ((frame[0].o) != nullptr) goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(2209);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getTypedProperty_rhino_Scriptable_java_lang_String_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getTypedProperty", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2229);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2230);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(2231);
	frame[3].o = (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2233);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, (frame[3].o), (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_Class_cast_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_cast_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:hasProperty", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2248);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getBase_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_1;
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

void SM_rhino_ScriptableObject_redefineProperty_rhino_Scriptable_java_lang_String_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:redefineProperty", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2262);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getBase_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2263);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	LINE_NUMBER(2264);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2265);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_ConstProperties)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2266);
	frame[4].o = (checkCast(ctx, &class_rhino_ConstProperties, (frame[3].o)));
	LINE_NUMBER(2268);
	jint temp0 = (jint)((func_rhino_ConstProperties_isConst_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ConstProperties, INDEX_rhino_ConstProperties_isConst_java_lang_String_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2269);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.const.redecl"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(2271);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2272);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.var.redecl"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(2273);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_int_R_boolean(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:hasProperty", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2287);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getBase_rhino_Scriptable_int_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].i));
	if (sp[0].o == sp[1].o) goto label_1;
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

jbool SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_rhino_Symbol_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:hasProperty", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2294);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getBase_rhino_Scriptable_rhino_Symbol_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_1;
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

void SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:putProperty", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2313);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getBase_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2314);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2315);
	frame[3].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(2316);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(2317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_rhino_Symbol_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:putProperty", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2323);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getBase_rhino_Scriptable_rhino_Symbol_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2324);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2325);
	frame[3].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(2326);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureSymbolScriptable_java_lang_Object_R_rhino_SymbolScriptable(ctx, (frame[3].o));
	((func_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(2327);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_ScriptableObject_putConstProperty_rhino_Scriptable_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:putConstProperty", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2345);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getBase_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2346);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ALOAD(0);
	INST_ASTORE(3);
label_2:;
	{
	LINE_NUMBER(2347);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_ConstProperties)) == 0) goto label_3;
	}
	{
	((func_rhino_ConstProperties_putConst_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_ConstProperties, INDEX_rhino_ConstProperties_putConst_java_lang_String_rhino_Scriptable_java_lang_Object, (checkCast(ctx, &class_rhino_ConstProperties, (frame[3].o)))))(ctx, (checkCast(ctx, &class_rhino_ConstProperties, (frame[3].o))), (frame[1].o), (frame[0].o), (frame[2].o));
	}
label_3:;
	LINE_NUMBER(2348);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:putProperty", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2366);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getBase_rhino_Scriptable_int_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2367);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2368);
	frame[3].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(2369);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[1].i), (frame[0].o), (frame[2].o));
	LINE_NUMBER(2370);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptableObject_deleteProperty_rhino_Scriptable_java_lang_String_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:deleteProperty", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2384);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getBase_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2385);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2386);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(2387);
	((func_rhino_Scriptable_delete_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_java_lang_String, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(2388);
	jint temp0 = (jint)((func_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[0].o));
	if (temp0 != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_ScriptableObject_deleteProperty_rhino_Scriptable_int_R_boolean(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:deleteProperty", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2403);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getBase_rhino_Scriptable_int_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2404);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2405);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(2406);
	((func_rhino_Scriptable_delete_int) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(2407);
	jint temp0 = (jint)((func_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i), (frame[0].o));
	if (temp0 != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getPropertyIds_rhino_Scriptable_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getPropertyIds", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2420);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2421);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2423);
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2424);
	frame[2].o = (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(2426);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(2427);
	if ((frame[0].o) != nullptr) goto label_6;
	}
	LINE_NUMBER(2428);
	goto label_8;
label_6:;
	{
	LINE_NUMBER(2430);
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2431);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) goto label_10;
	}
	LINE_NUMBER(2432);
	goto label_4;
label_10:;
	{
	LINE_NUMBER(2434);
	if ((frame[2].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(2435);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_14;
	}
	{
	LINE_NUMBER(2436);
	frame[1].o = (frame[3].o);
	LINE_NUMBER(2437);
	goto label_4;
	}
label_14:;
	{
	LINE_NUMBER(2439);
	clinit_rhino_ObjToIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2440);
	frame[4].i = (jint(0));
	}
label_18:;
	{
	if ((frame[4].i) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_19;
	}
	{
	LINE_NUMBER(2441);
	sp[0].o = (jobject)((func_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	LINE_NUMBER(2440);
	INST_IINC(4, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(2443);
	frame[1].o = (jobject(nullptr));
	}
label_12:;
	{
	LINE_NUMBER(2445);
	frame[4].i = (jint(0));
	}
label_22:;
	{
	if ((frame[4].i) == (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_23;
	}
	{
	LINE_NUMBER(2446);
	sp[0].o = (jobject)((func_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(2445);
	INST_IINC(4, 1);
	goto label_22;
	}
label_23:;
	LINE_NUMBER(2448);
	goto label_4;
label_8:;
	{
	LINE_NUMBER(2449);
	if ((frame[2].o) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(2450);
	sp[0].o = (jobject)((func_rhino_ObjToIntMap_getKeys_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ObjToIntMap_getKeys_R_Array1_java_lang_Object])(ctx, (frame[2].o));
	frame[1].o = sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(2452);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_callMethod_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:callMethod", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2464);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_callMethod_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object(ctx, (jobject(nullptr)), (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_callMethod_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:callMethod", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2477);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2478);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Function)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2479);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[1].o), (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2481);
	frame[5].o = (checkCast(ctx, &class_rhino_Function, (frame[4].o)));
	LINE_NUMBER(2489);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2490);
	if ((frame[0].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(2491);
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), (frame[6].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2493);
	sp[0].o = (jobject)SM_rhino_Context_call_rhino_ContextFactory_rhino_Callable_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (jobject(nullptr)), (frame[5].o), (frame[6].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getBase_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getBase", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_0:;
	{
	LINE_NUMBER(2498);
	jint temp0 = (jint)((func_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(2499);
	goto label_3;
label_1:;
	{
	LINE_NUMBER(2500);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(2501);
	if ((frame[0].o) != nullptr) goto label_0;
	}
label_3:;
	{
	LINE_NUMBER(2502);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getBase_rhino_Scriptable_int_R_rhino_Scriptable(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getBase", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
label_0:;
	{
	LINE_NUMBER(2507);
	jint temp0 = (jint)((func_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].i), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(2508);
	goto label_3;
label_1:;
	{
	LINE_NUMBER(2509);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(2510);
	if ((frame[0].o) != nullptr) goto label_0;
	}
label_3:;
	{
	LINE_NUMBER(2511);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getBase_rhino_Scriptable_rhino_Symbol_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getBase", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_0:;
	{
	LINE_NUMBER(2516);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureSymbolScriptable_java_lang_Object_R_rhino_SymbolScriptable(ctx, (frame[0].o));
	jint temp0 = (jint)((func_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(2517);
	goto label_3;
label_1:;
	{
	LINE_NUMBER(2518);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(2519);
	if ((frame[0].o) != nullptr) goto label_0;
	}
label_3:;
	{
	LINE_NUMBER(2520);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getAssociatedValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2529);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_associatedValues;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2530);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2531);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2532);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject_getTopScopeValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getTopScopeValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2546);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2548);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ScriptableObject)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2549);
	frame[2].o = (checkCast(ctx, &class_rhino_ScriptableObject, (frame[0].o)));
	LINE_NUMBER(2550);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2551);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2552);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(2555);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(2556);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2557);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:associateValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2575);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2576);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_associatedValues;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2577);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2578);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2579);
	((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_associatedValues = (jref) (frame[3].o);
	}
label_3:;
	{
	LINE_NUMBER(2581);
	sp[0].o = (jobject)SM_rhino_Kit_initHash_java_util_Map_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, (frame[3].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:putImpl", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(2593);
	if ((frame[0].o) == (frame[3].o)) goto label_1;
	}
	{
	LINE_NUMBER(2594);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2595);
	if (((jint)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isExtensible) != 0) goto label_4;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_5;
	{
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ScriptableObject$GetterSlot)) != 0) goto label_4;
	}
	{
	sp[0].o = frame[5].o;
	LINE_NUMBER(2598);
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, sp[0].o);
	if ((temp0 & (jint(1))) == 0) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2599);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2600);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.extensible"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(2602);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2603);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2605);
	if (((jint)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isExtensible) != 0) goto label_10;
	}
	{
	LINE_NUMBER(2606);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2607);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ScriptableObject$GetterSlot)) != 0) goto label_14;
	}
	{
	sp[0].o = frame[5].o;
	LINE_NUMBER(2608);
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, sp[0].o);
	if ((temp0 & (jint(1))) == 0) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(2609);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(2610);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.extensible"_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(2612);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2613);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(2616);
	if (((jint)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isSealed) == 0) goto label_18;
	}
	{
	LINE_NUMBER(2617);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	}
label_18:;
	{
	LINE_NUMBER(2619);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[5].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2623);
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, (frame[5].o));
	if ((temp0 & (jint(1))) == 0) goto label_20;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.const.redecl"_j));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(2625);
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean])(ctx, (frame[5].o), (frame[4].o), (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:putConstImpl", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(2637);
	if ((clinit_rhino_ScriptableObject(ctx), (jint)SF_rhino_ScriptableObject_$assertionsDisabled) != 0) goto label_1;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_1;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2638);
	if (((jint)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_isExtensible) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2639);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2640);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2641);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.extensible"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2645);
	if ((frame[0].o) == (frame[3].o)) goto label_6;
	}
	{
	LINE_NUMBER(2646);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2647);
	if ((frame[6].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(2648);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(2650);
	jint temp0 = (jint)((func_rhino_ScriptableObject_isExtensible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_isExtensible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(2651);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2652);
	if ((frame[6].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(2653);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(2656);
	M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(2658);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2659);
	jint temp1 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, (frame[6].o));
	frame[7].i = temp1;
	LINE_NUMBER(2662);
	if ((frame[7].i) != 0) goto label_18;
	}
	{
	LINE_NUMBER(2663);
	frame[7].i = ((frame[7].i) | (8));
	LINE_NUMBER(2664);
	frame[7].i = ((frame[7].i) | (jint(1)));
	LINE_NUMBER(2665);
	((func_rhino_ScriptableObject$Slot_setAttributes_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_setAttributes_int])(ctx, (frame[6].o), (frame[7].i));
	}
label_18:;
	{
	LINE_NUMBER(2668);
	if (((frame[7].i) & (jint(1))) != 0) goto label_22;
	}
	{
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.const.redecl"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(2669);
	if (((frame[7].i) & (8)) == 0) goto label_23;
	}
	{
	LINE_NUMBER(2670);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_value = (jref) (frame[4].o);
	LINE_NUMBER(2672);
	if ((frame[5].i) == (8)) goto label_23;
	}
	{
	LINE_NUMBER(2673);
	((func_rhino_ScriptableObject$Slot_setAttributes_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_setAttributes_int])(ctx, (frame[6].o), ((frame[7].i) & (-9)));
	}
label_23:;
	{
	LINE_NUMBER(2675);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(2677);
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean])(ctx, (frame[6].o), (frame[4].o), (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:findAttributeSlot", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2681);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2682);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2683);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	INST_ALOAD(1);
	goto label_5;
label_4:;
	INST_ILOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, sp[0].i);
	sp++;
label_5:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2684);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.prop.not.found"_j))), (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2686);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:findAttributeSlot", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2690);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[1].o), (jint(0)), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2691);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2692);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.prop.not.found"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2694);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getIds", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2699);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	if (sp[0].o != nullptr) goto label_7;
	}
	INST_ICONST(0);
	goto label_8;
label_7:;
	{
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_externalData;
	jint temp0 = (jint)((func_rhino_ExternalArrayData_getArrayLength_R_int) resolveInterfaceMethod(ctx, &class_rhino_ExternalArrayData, INDEX_rhino_ExternalArrayData_getArrayLength_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2701);
	if ((frame[4].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(2702);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	frame[3].o = sp[0].o;
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(2704);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[4].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2705);
	frame[5].i = (jint(0));
	}
label_15:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(2706);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[5].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2705);
	INST_IINC(5, 1);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(2709);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	jint temp0 = (jint)((func_rhino_SlotMapContainer_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(2710);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_18:;
	{
	LINE_NUMBER(2713);
	frame[5].i = (frame[4].i);
	LINE_NUMBER(2714);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	jlong temp0 = (jlong)((func_rhino_SlotMapContainer_readLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_readLock_R_long])(ctx, sp[0].o);
	frame[6].l = temp0;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2716);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_rhino_ScriptableObject$Slot, sp[0].o));
	LINE_NUMBER(2717);
	if ((frame[1].i) != 0) goto label_23;
	}
	{
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, (frame[9].o));
	if ((temp0 & (jint(2))) != 0) goto label_24;
	}
label_23:;
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_25;
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[9].o)))->F_name;
	if ((isInstance(ctx, sp[0].o, &class_rhino_Symbol)) != 0) goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(2719);
	if ((frame[5].i) != (frame[4].i)) goto label_26;
	}
	{
	LINE_NUMBER(2721);
	frame[10].o = (frame[3].o);
	LINE_NUMBER(2722);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	jint temp0 = (jint)((func_rhino_SlotMapContainer_dirtySize_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_dirtySize_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (temp0 + (frame[4].i)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2723);
	if ((frame[10].o) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(2724);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[10].o), (jint(0)), (frame[3].o), (jint(0)), (frame[4].i));
	}
label_26:;
	{
	LINE_NUMBER(2727);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[9].o)))->F_name;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == nullptr) goto label_31;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[9].o)))->F_name;
	sp += 1;
	goto label_32;
	}
label_31:;
	{
	jint temp0 = (jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[9].o)))->F_indexOrHash;
	LINE_NUMBER(2729);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp += 1;
	}
label_32:;
	INST_AASTORE();
label_24:;
	LINE_NUMBER(2731);
	goto label_21;
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(2733);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	((func_rhino_SlotMapContainer_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_unlockRead_long])(ctx, sp[0].o, (frame[6].l));
	LINE_NUMBER(2734);
	goto label_35;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(2733);
	INST_ASTORE(11);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	((func_rhino_SlotMapContainer_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_unlockRead_long])(ctx, sp[0].o, (frame[6].l));
	LINE_NUMBER(2734);
	throwException(ctx, (frame[11].o));	}
label_35:;
	{
	LINE_NUMBER(2737);
	if ((frame[5].i) != ((((jarray) nullCheck(ctx, (frame[3].o)))->length) + (frame[4].i))) goto label_37;
	}
	{
	LINE_NUMBER(2738);
	frame[8].o = (frame[3].o);
	goto label_40;
	}
label_37:;
	{
	LINE_NUMBER(2740);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[5].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2741);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[8].o), (jint(0)), (frame[5].i));
	}
label_40:;
	{
	LINE_NUMBER(2744);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[9].o = sp[0].o;
	LINE_NUMBER(2745);
	if ((frame[9].o) == nullptr) goto label_43;
	}
	{
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[9].o), (16));
	if (temp0 == 0) goto label_43;
	}
	{
	LINE_NUMBER(2747);
	sp[0].o = frame[8].o;
	clinit_rhino_ScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject_KEY_COMPARATOR;
	SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	}
label_43:;
	{
	LINE_NUMBER(2750);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getOwnPropertyDescriptor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2754);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[3].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_QUERY;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2755);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(2756);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2757);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[4].o) != nullptr) goto label_4;
	}
	INST_ALOAD(0);
	goto label_5;
label_4:;
	INST_ALOAD(4);
label_5:;
	POP_N(3); // Pop method args
	sp->o = (jobject)((func_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:getSlot", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2761);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Symbol)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2762);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (frame[2].o), (jint(0)), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2764);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2765);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_stringId;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2766);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, (jobject(nullptr)), ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_index), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2768);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	sp[1].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[4].o)))->F_stringId;
	sp[0].o = (jobject)((func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_ScriptableObject_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2775);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	jint temp0 = (jint)((func_rhino_SlotMapContainer_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2779);
	sp[0].o = (jobject)((rhino_ScriptableObject *) NULL_CHECK((frame[0].o)))->F_slotMap;
	jint temp0 = (jint)((func_rhino_SlotMapContainer_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SlotMapContainer_isEmpty_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2784);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(2785);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2786);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_String, (frame[1].o))), (frame[0].o));
	frame[2].o = sp[0].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(2787);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Symbol)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2788);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_Symbol, (frame[1].o))), (frame[0].o));
	frame[2].o = sp[0].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2789);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2790);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	sp[0].o = (jobject)((func_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object])(ctx, sp[0].o, temp0, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2792);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	sp[0].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(2793);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(2794);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Wrapper)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(2795);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(2797);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void clinit_rhino_ScriptableObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_ScriptableObject_EMPTY = jint(0);
	SF_rhino_ScriptableObject_READONLY = jint(1);
	SF_rhino_ScriptableObject_DONTENUM = jint(2);
	SF_rhino_ScriptableObject_PERMANENT = jint(4);
	SF_rhino_ScriptableObject_UNINITIALIZED_CONST = jint(8);
	SF_rhino_ScriptableObject_CONST = jint(13);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject(ctx);
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_ScriptableObject)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_ScriptableObject)));
	if (temp0 != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	clinit_rhino_ScriptableObject(ctx);
	SF_rhino_ScriptableObject_$assertionsDisabled = (--sp)->i;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchMethodException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(104);
	sp[0].o = ((jobject) &class_rhino_ScriptableObject);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"getExternalArrayLength"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_rhino_ScriptableObject(ctx);
	SF_rhino_ScriptableObject_GET_ARRAY_LENGTH = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(107);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(105);
	frame[0].o = sp[0].o;
	LINE_NUMBER(106);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(2801);
	clinit_rhino_ScriptableObject$KeyComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$KeyComparator);
	init_rhino_ScriptableObject$KeyComparator(ctx, sp[0].o);
	clinit_rhino_ScriptableObject(ctx);
	SF_rhino_ScriptableObject_KEY_COMPARATOR = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ScriptableObject[] {
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
	(void *) nullptr,
	(void *) M_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String,
	(void *) M_rhino_ScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_ScriptableObject_setAttributes_java_lang_String_int,
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
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
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
	(void *) M_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
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
};

static jclass interfaces[] { &class_rhino_Scriptable, &class_rhino_SymbolScriptable, &class_rhino_debug_DebuggableObject, &class_rhino_ConstProperties, };

static jclass innerClasses[] {
	&class_rhino_ScriptableObject$KeyComparator,
	&class_rhino_ScriptableObject$GetterSlot,
	&class_rhino_ScriptableObject$Slot,
	&class_rhino_ScriptableObject$SlotAccess,
};

static FieldMetadata fields[] {
	{ "EMPTY", &class_int, (intptr_t) &SF_rhino_ScriptableObject_EMPTY, "I", 25 },
	{ "READONLY", &class_int, (intptr_t) &SF_rhino_ScriptableObject_READONLY, "I", 25 },
	{ "DONTENUM", &class_int, (intptr_t) &SF_rhino_ScriptableObject_DONTENUM, "I", 25 },
	{ "PERMANENT", &class_int, (intptr_t) &SF_rhino_ScriptableObject_PERMANENT, "I", 25 },
	{ "UNINITIALIZED_CONST", &class_int, (intptr_t) &SF_rhino_ScriptableObject_UNINITIALIZED_CONST, "I", 25 },
	{ "CONST", &class_int, (intptr_t) &SF_rhino_ScriptableObject_CONST, "I", 25 },
	{ "prototypeObject", &class_rhino_Scriptable, offsetof(rhino_ScriptableObject, F_prototypeObject), "Lrhino/Scriptable;", 2 },
	{ "parentScopeObject", &class_rhino_Scriptable, offsetof(rhino_ScriptableObject, F_parentScopeObject), "Lrhino/Scriptable;", 2 },
	{ "slotMap", &class_rhino_SlotMapContainer, offsetof(rhino_ScriptableObject, F_slotMap), "Lrhino/SlotMapContainer;", 130 },
	{ "externalData", &class_rhino_ExternalArrayData, offsetof(rhino_ScriptableObject, F_externalData), "Lrhino/ExternalArrayData;", 130 },
	{ "associatedValues", &class_java_util_Map, offsetof(rhino_ScriptableObject, F_associatedValues), "Ljava/util/Map;", 66 },
	{ "isExtensible", &class_boolean, offsetof(rhino_ScriptableObject, F_isExtensible), "Z", 2 },
	{ "isSealed", &class_boolean, offsetof(rhino_ScriptableObject, F_isSealed), "Z", 2 },
	{ "GET_ARRAY_LENGTH", &class_java_lang_reflect_Method, (intptr_t) &SF_rhino_ScriptableObject_GET_ARRAY_LENGTH, "Ljava/lang/reflect/Method;", 26 },
	{ "KEY_COMPARATOR", &class_java_util_Comparator, (intptr_t) &SF_rhino_ScriptableObject_KEY_COMPARATOR, "Ljava/util/Comparator;", 26 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_ScriptableObject_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "buildDataDescriptor", (intptr_t) SM_rhino_ScriptableObject_buildDataDescriptor_rhino_Scriptable_java_lang_Object_int_R_rhino_ScriptableObject, 0, "(Lrhino/Scriptable;Ljava/lang/Object;I)Lrhino/ScriptableObject;", 12 },
	{ "checkValidAttributes", (intptr_t) SM_rhino_ScriptableObject_checkValidAttributes_int, 0, "(I)V", 8 },
	{ "createSlotMap", (intptr_t) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer, VTABLE_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer, "(I)Lrhino/SlotMapContainer;", 2 },
	{ "<init>", (intptr_t) init_rhino_ScriptableObject, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ScriptableObject_rhino_Scriptable_rhino_Scriptable, 0, "(Lrhino/Scriptable;Lrhino/Scriptable;)V", 1 },
	{ "getTypeOf", (intptr_t) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String, VTABLE_rhino_ScriptableObject_getTypeOf_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getClassName", 0, VTABLE_rhino_ScriptableObject_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "has", (intptr_t) M_rhino_ScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean, VTABLE_rhino_ScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean, "(Ljava/lang/String;Lrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean, VTABLE_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean, "(ILrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_ScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean, VTABLE_rhino_ScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean, "(Lrhino/Symbol;Lrhino/Scriptable;)Z", 1 },
	{ "get", (intptr_t) M_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object, "(ILrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_ScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_ScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "put", (intptr_t) M_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_ScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, VTABLE_rhino_ScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "delete", (intptr_t) M_rhino_ScriptableObject_delete_java_lang_String, VTABLE_rhino_ScriptableObject_delete_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "delete", (intptr_t) M_rhino_ScriptableObject_delete_int, VTABLE_rhino_ScriptableObject_delete_int, "(I)V", 1 },
	{ "delete", (intptr_t) M_rhino_ScriptableObject_delete_rhino_Symbol, VTABLE_rhino_ScriptableObject_delete_rhino_Symbol, "(Lrhino/Symbol;)V", 1 },
	{ "putConst", (intptr_t) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "defineConst", (intptr_t) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable, VTABLE_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable, "(Ljava/lang/String;Lrhino/Scriptable;)V", 1 },
	{ "isConst", (intptr_t) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean, VTABLE_rhino_ScriptableObject_isConst_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getAttributes", (intptr_t) M_rhino_ScriptableObject_getAttributes_java_lang_String_R_int, VTABLE_rhino_ScriptableObject_getAttributes_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getAttributes", (intptr_t) M_rhino_ScriptableObject_getAttributes_int_R_int, VTABLE_rhino_ScriptableObject_getAttributes_int_R_int, "(I)I", 1 },
	{ "getAttributes", (intptr_t) M_rhino_ScriptableObject_getAttributes_rhino_Symbol_R_int, VTABLE_rhino_ScriptableObject_getAttributes_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 1 },
	{ "setAttributes", (intptr_t) M_rhino_ScriptableObject_setAttributes_java_lang_String_int, VTABLE_rhino_ScriptableObject_setAttributes_java_lang_String_int, "(Ljava/lang/String;I)V", 1 },
	{ "setAttributes", (intptr_t) M_rhino_ScriptableObject_setAttributes_int_int, VTABLE_rhino_ScriptableObject_setAttributes_int_int, "(II)V", 1 },
	{ "setAttributes", (intptr_t) M_rhino_ScriptableObject_setAttributes_rhino_Symbol_int, VTABLE_rhino_ScriptableObject_setAttributes_rhino_Symbol_int, "(Lrhino/Symbol;I)V", 1 },
	{ "setGetterOrSetter", (intptr_t) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean, VTABLE_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean, "(Ljava/lang/String;ILrhino/Callable;Z)V", 1 },
	{ "setGetterOrSetter", (intptr_t) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean, VTABLE_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean, "(Ljava/lang/String;ILrhino/Callable;ZZ)V", 2 },
	{ "getGetterOrSetter", (intptr_t) M_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object, VTABLE_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object, "(Ljava/lang/String;IZ)Ljava/lang/Object;", 1 },
	{ "isGetterOrSetter", (intptr_t) M_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean, VTABLE_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean, "(Ljava/lang/String;IZ)Z", 4 },
	{ "addLazilyInitializedValue", (intptr_t) M_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int, VTABLE_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int, "(Ljava/lang/String;ILrhino/LazilyLoadedCtor;I)V", 0 },
	{ "setExternalArrayData", (intptr_t) M_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData, VTABLE_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData, "(Lrhino/ExternalArrayData;)V", 1 },
	{ "getExternalArrayData", (intptr_t) M_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData, VTABLE_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData, "()Lrhino/ExternalArrayData;", 1 },
	{ "getExternalArrayLength", (intptr_t) M_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object, VTABLE_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getPrototype", (intptr_t) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable, VTABLE_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1 },
	{ "setPrototype", (intptr_t) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable, VTABLE_rhino_ScriptableObject_setPrototype_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1 },
	{ "getParentScope", (intptr_t) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable, VTABLE_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1 },
	{ "setParentScope", (intptr_t) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable, VTABLE_rhino_ScriptableObject_setParentScope_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1 },
	{ "getIds", (intptr_t) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object, VTABLE_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "getAllIds", (intptr_t) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object, VTABLE_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "getDefaultValue", (intptr_t) M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object, VTABLE_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "getDefaultValue", (intptr_t) SM_rhino_ScriptableObject_getDefaultValue_rhino_Scriptable_java_lang_Class_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/Class;)Ljava/lang/Object;", 9 },
	{ "hasInstance", (intptr_t) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean, VTABLE_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1 },
	{ "avoidObjectDetection", (intptr_t) M_rhino_ScriptableObject_avoidObjectDetection_R_boolean, VTABLE_rhino_ScriptableObject_avoidObjectDetection_R_boolean, "()Z", 1 },
	{ "equivalentValues", (intptr_t) M_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 4 },
	{ "defineClass", (intptr_t) SM_rhino_ScriptableObject_defineClass_rhino_Scriptable_java_lang_Class, 0, "(Lrhino/Scriptable;Ljava/lang/Class;)V", 9 },
	{ "defineClass", (intptr_t) SM_rhino_ScriptableObject_defineClass_rhino_Scriptable_java_lang_Class_boolean, 0, "(Lrhino/Scriptable;Ljava/lang/Class;Z)V", 9 },
	{ "defineClass", (intptr_t) SM_rhino_ScriptableObject_defineClass_rhino_Scriptable_java_lang_Class_boolean_boolean_R_java_lang_String, 0, "(Lrhino/Scriptable;Ljava/lang/Class;ZZ)Ljava/lang/String;", 9 },
	{ "buildClassCtor", (intptr_t) SM_rhino_ScriptableObject_buildClassCtor_rhino_Scriptable_java_lang_Class_boolean_boolean_R_rhino_BaseFunction, 0, "(Lrhino/Scriptable;Ljava/lang/Class;ZZ)Lrhino/BaseFunction;", 8 },
	{ "findAnnotatedMember", (intptr_t) SM_rhino_ScriptableObject_findAnnotatedMember_Array1_java_lang_reflect_AccessibleObject_java_lang_Class_R_java_lang_reflect_Member, 0, "([Ljava/lang/reflect/AccessibleObject;Ljava/lang/Class;)Ljava/lang/reflect/Member;", 10 },
	{ "findSetterMethod", (intptr_t) SM_rhino_ScriptableObject_findSetterMethod_Array1_java_lang_reflect_Method_java_lang_String_java_lang_String_R_java_lang_reflect_Method, 0, "([Ljava/lang/reflect/Method;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/reflect/Method;", 10 },
	{ "getPropertyName", (intptr_t) SM_rhino_ScriptableObject_getPropertyName_java_lang_String_java_lang_String_java_lang_annotation_Annotation_R_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/annotation/Annotation;)Ljava/lang/String;", 10 },
	{ "extendsScriptable", (intptr_t) SM_rhino_ScriptableObject_extendsScriptable_java_lang_Class_R_java_lang_Class, 0, "(Ljava/lang/Class;)Ljava/lang/Class;", 10 },
	{ "defineProperty", (intptr_t) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int, VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int, "(Ljava/lang/String;Ljava/lang/Object;I)V", 1 },
	{ "defineProperty", (intptr_t) M_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int, VTABLE_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int, "(Lrhino/Symbol;Ljava/lang/Object;I)V", 1 },
	{ "defineProperty", (intptr_t) SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int, 0, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Object;I)V", 9 },
	{ "defineConstProperty", (intptr_t) SM_rhino_ScriptableObject_defineConstProperty_rhino_Scriptable_java_lang_String, 0, "(Lrhino/Scriptable;Ljava/lang/String;)V", 9 },
	{ "defineProperty", (intptr_t) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int, VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int, "(Ljava/lang/String;Ljava/lang/Class;I)V", 1 },
	{ "defineProperty", (intptr_t) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int, VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;I)V", 1 },
	{ "defineOwnProperties", (intptr_t) M_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject, VTABLE_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject, "(Lrhino/Context;Lrhino/ScriptableObject;)V", 1 },
	{ "defineOwnProperty", (intptr_t) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject, VTABLE_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject, "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;)V", 1 },
	{ "defineOwnProperty", (intptr_t) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean, VTABLE_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean, "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V", 4 },
	{ "checkPropertyDefinition", (intptr_t) M_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject, VTABLE_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject, "(Lrhino/ScriptableObject;)V", 4 },
	{ "checkPropertyChange", (intptr_t) M_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject, VTABLE_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject, "(Ljava/lang/Object;Lrhino/ScriptableObject;Lrhino/ScriptableObject;)V", 4 },
	{ "isTrue", (intptr_t) SM_rhino_ScriptableObject_isTrue_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 12 },
	{ "isFalse", (intptr_t) SM_rhino_ScriptableObject_isFalse_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 12 },
	{ "sameValue", (intptr_t) M_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean, VTABLE_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 4 },
	{ "applyDescriptorToAttributeBitset", (intptr_t) M_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int, VTABLE_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int, "(ILrhino/ScriptableObject;)I", 4 },
	{ "isDataDescriptor", (intptr_t) M_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean, VTABLE_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean, "(Lrhino/ScriptableObject;)Z", 4 },
	{ "isAccessorDescriptor", (intptr_t) M_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean, VTABLE_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean, "(Lrhino/ScriptableObject;)Z", 4 },
	{ "isGenericDescriptor", (intptr_t) M_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean, VTABLE_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean, "(Lrhino/ScriptableObject;)Z", 4 },
	{ "ensureScriptable", (intptr_t) SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable, 0, "(Ljava/lang/Object;)Lrhino/Scriptable;", 12 },
	{ "ensureSymbolScriptable", (intptr_t) SM_rhino_ScriptableObject_ensureSymbolScriptable_java_lang_Object_R_rhino_SymbolScriptable, 0, "(Ljava/lang/Object;)Lrhino/SymbolScriptable;", 12 },
	{ "ensureScriptableObject", (intptr_t) SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject, 0, "(Ljava/lang/Object;)Lrhino/ScriptableObject;", 12 },
	{ "defineFunctionProperties", (intptr_t) M_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int, VTABLE_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int, "([Ljava/lang/String;Ljava/lang/Class;I)V", 1 },
	{ "getObjectPrototype", (intptr_t) SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "getFunctionPrototype", (intptr_t) SM_rhino_ScriptableObject_getFunctionPrototype_rhino_Scriptable_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "getGeneratorFunctionPrototype", (intptr_t) SM_rhino_ScriptableObject_getGeneratorFunctionPrototype_rhino_Scriptable_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "getArrayPrototype", (intptr_t) SM_rhino_ScriptableObject_getArrayPrototype_rhino_Scriptable_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "getClassPrototype", (intptr_t) SM_rhino_ScriptableObject_getClassPrototype_rhino_Scriptable_java_lang_String_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;Ljava/lang/String;)Lrhino/Scriptable;", 9 },
	{ "getTopLevelScope", (intptr_t) SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "isExtensible", (intptr_t) M_rhino_ScriptableObject_isExtensible_R_boolean, VTABLE_rhino_ScriptableObject_isExtensible_R_boolean, "()Z", 1 },
	{ "preventExtensions", (intptr_t) M_rhino_ScriptableObject_preventExtensions, VTABLE_rhino_ScriptableObject_preventExtensions, "()V", 1 },
	{ "sealObject", (intptr_t) M_rhino_ScriptableObject_sealObject, VTABLE_rhino_ScriptableObject_sealObject, "()V", 1 },
	{ "isSealed", (intptr_t) M_rhino_ScriptableObject_isSealed_R_boolean, VTABLE_rhino_ScriptableObject_isSealed_R_boolean, "()Z", 17 },
	{ "checkNotSealed", (intptr_t) M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int, VTABLE_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int, "(Ljava/lang/Object;I)V", 2 },
	{ "getProperty", (intptr_t) SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "getProperty", (intptr_t) SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_rhino_Symbol_R_java_lang_Object, 0, "(Lrhino/Scriptable;Lrhino/Symbol;)Ljava/lang/Object;", 9 },
	{ "getTypedProperty", (intptr_t) SM_rhino_ScriptableObject_getTypedProperty_rhino_Scriptable_int_java_lang_Class_R_java_lang_Object, 0, "(Lrhino/Scriptable;ILjava/lang/Class;)Ljava/lang/Object;", 9 },
	{ "getProperty", (intptr_t) SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_int_R_java_lang_Object, 0, "(Lrhino/Scriptable;I)Ljava/lang/Object;", 9 },
	{ "getTypedProperty", (intptr_t) SM_rhino_ScriptableObject_getTypedProperty_rhino_Scriptable_java_lang_String_java_lang_Class_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", 9 },
	{ "hasProperty", (intptr_t) SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean, 0, "(Lrhino/Scriptable;Ljava/lang/String;)Z", 9 },
	{ "redefineProperty", (intptr_t) SM_rhino_ScriptableObject_redefineProperty_rhino_Scriptable_java_lang_String_boolean, 0, "(Lrhino/Scriptable;Ljava/lang/String;Z)V", 9 },
	{ "hasProperty", (intptr_t) SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_int_R_boolean, 0, "(Lrhino/Scriptable;I)Z", 9 },
	{ "hasProperty", (intptr_t) SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_rhino_Symbol_R_boolean, 0, "(Lrhino/Scriptable;Lrhino/Symbol;)Z", 9 },
	{ "putProperty", (intptr_t) SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Object;)V", 9 },
	{ "putProperty", (intptr_t) SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_rhino_Symbol_java_lang_Object, 0, "(Lrhino/Scriptable;Lrhino/Symbol;Ljava/lang/Object;)V", 9 },
	{ "putConstProperty", (intptr_t) SM_rhino_ScriptableObject_putConstProperty_rhino_Scriptable_java_lang_String_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Object;)V", 9 },
	{ "putProperty", (intptr_t) SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_int_java_lang_Object, 0, "(Lrhino/Scriptable;ILjava/lang/Object;)V", 9 },
	{ "deleteProperty", (intptr_t) SM_rhino_ScriptableObject_deleteProperty_rhino_Scriptable_java_lang_String_R_boolean, 0, "(Lrhino/Scriptable;Ljava/lang/String;)Z", 9 },
	{ "deleteProperty", (intptr_t) SM_rhino_ScriptableObject_deleteProperty_rhino_Scriptable_int_R_boolean, 0, "(Lrhino/Scriptable;I)Z", 9 },
	{ "getPropertyIds", (intptr_t) SM_rhino_ScriptableObject_getPropertyIds_rhino_Scriptable_R_Array1_java_lang_Object, 0, "(Lrhino/Scriptable;)[Ljava/lang/Object;", 9 },
	{ "callMethod", (intptr_t) SM_rhino_ScriptableObject_callMethod_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "callMethod", (intptr_t) SM_rhino_ScriptableObject_callMethod_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "getBase", (intptr_t) SM_rhino_ScriptableObject_getBase_rhino_Scriptable_java_lang_String_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;Ljava/lang/String;)Lrhino/Scriptable;", 10 },
	{ "getBase", (intptr_t) SM_rhino_ScriptableObject_getBase_rhino_Scriptable_int_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;I)Lrhino/Scriptable;", 10 },
	{ "getBase", (intptr_t) SM_rhino_ScriptableObject_getBase_rhino_Scriptable_rhino_Symbol_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;Lrhino/Symbol;)Lrhino/Scriptable;", 10 },
	{ "getAssociatedValue", (intptr_t) M_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 17 },
	{ "getTopScopeValue", (intptr_t) SM_rhino_ScriptableObject_getTopScopeValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "associateValue", (intptr_t) M_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 49 },
	{ "putImpl", (intptr_t) M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean, VTABLE_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean, "(Ljava/lang/Object;ILrhino/Scriptable;Ljava/lang/Object;)Z", 2 },
	{ "putConstImpl", (intptr_t) M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean, VTABLE_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean, "(Ljava/lang/String;ILrhino/Scriptable;Ljava/lang/Object;I)Z", 2 },
	{ "findAttributeSlot", (intptr_t) M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, VTABLE_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, "(Ljava/lang/String;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;", 2 },
	{ "findAttributeSlot", (intptr_t) M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, VTABLE_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, "(Lrhino/Symbol;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;", 2 },
	{ "getIds", (intptr_t) M_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object, VTABLE_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object, "(ZZ)[Ljava/lang/Object;", 0 },
	{ "getOwnPropertyDescriptor", (intptr_t) M_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject, VTABLE_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject, "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;", 4 },
	{ "getSlot", (intptr_t) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, VTABLE_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;", 4 },
	{ "size", (intptr_t) M_rhino_ScriptableObject_size_R_int, VTABLE_rhino_ScriptableObject_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_rhino_ScriptableObject_isEmpty_R_boolean, VTABLE_rhino_ScriptableObject_isEmpty_R_boolean, "()Z", 1 },
	{ "get", (intptr_t) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_ScriptableObject, 0, "()V", 8 },
};

Class class_rhino_ScriptableObject{
		.nativeName = (intptr_t) "rhino/ScriptableObject",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ScriptableObject),
		.classVtable = (intptr_t) vtable_rhino_ScriptableObject,
		.staticInitializer = (intptr_t) clinit_rhino_ScriptableObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ScriptableObject,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 123,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 85,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ScriptableObject = registerClass(&class_rhino_ScriptableObject);

}
