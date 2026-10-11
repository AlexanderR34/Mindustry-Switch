#include "rhino/HashSlotMap.h"
#include "java/util/Iterator.h"
#include "rhino/ScriptableObject_GetterSlot.h"
#include "rhino/SlotMap.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "java/util/Map.h"
#include "java/lang/Enum.h"
#include "java/lang/Iterable.h"
#include "rhino/HashSlotMap_1.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/HashSlotMap.h"
#include "java/util/LinkedHashMap.h"
#include "rhino/ScriptableObject_Slot.h"
#include "rhino/ScriptableObject_SlotAccess.h"

extern "C" {


void mark_rhino_HashSlotMap(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_HashSlotMap *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_rhino_HashSlotMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_HashSlotMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/HashSlotMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_HashSlotMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_java_util_LinkedHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_LinkedHashMap);
	init_java_util_LinkedHashMap(ctx, sp[1].o);
	((rhino_HashSlotMap *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_HashSlotMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/HashSlotMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((rhino_HashSlotMap *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_LinkedHashMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_HashSlotMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/HashSlotMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((rhino_HashSlotMap *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_LinkedHashMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_isEmpty_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_HashSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/HashSlotMap:query", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(33);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[2].i));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(34);
	sp[0].o = (jobject)((rhino_HashSlotMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_ScriptableObject$Slot, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_rhino_HashSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/HashSlotMap:get", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(39);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[2].i));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
label_2:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((rhino_HashSlotMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_rhino_ScriptableObject$Slot, sp[0].o));
	LINE_NUMBER(41);
	clinit_rhino_HashSlotMap$1(ctx);
	sp[0].o = (jobject)SF_rhino_HashSlotMap$1_$SwitchMap$rhino$ScriptableObject$SlotAccess;
	jint temp0 = (jint)((func_rhino_ScriptableObject$SlotAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ScriptableObject$SlotAccess_ordinal_R_int])(ctx, (frame[3].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_6;
		case 4: goto label_7;
		case 5: goto label_8;
		default: goto label_9;
	}
	}
label_5:;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_6:;
	{
	LINE_NUMBER(46);
	if ((frame[5].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_7:;
	{
	LINE_NUMBER(50);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ScriptableObject$GetterSlot)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_8:;
	{
	LINE_NUMBER(54);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ScriptableObject$GetterSlot)) != 0) goto label_9;
	}
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_9:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)M_rhino_HashSlotMap_createSlot_java_lang_Object_int_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[4].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_HashSlotMap_createSlot_java_lang_Object_int_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/HashSlotMap:createSlot", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((rhino_HashSlotMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[5].o = (checkCast(ctx, &class_rhino_ScriptableObject$Slot, sp[0].o));
	LINE_NUMBER(65);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = frame[4].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ScriptableObject$GetterSlot)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(70);
	clinit_rhino_ScriptableObject$GetterSlot(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$GetterSlot);
	sp[1].o = frame[3].o;
	jint temp0 = (jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_indexOrHash;
	jint temp1 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, (frame[5].o));
	init_rhino_ScriptableObject$GetterSlot_java_lang_Object_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1);
	frame[6].o = sp[0].o;
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[4].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ScriptableObject$GetterSlot)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(73);
	clinit_rhino_ScriptableObject$Slot(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$Slot);
	sp[1].o = frame[3].o;
	jint temp0 = (jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_indexOrHash;
	jint temp1 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, (frame[5].o));
	init_rhino_ScriptableObject$Slot_java_lang_Object_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1);
	frame[6].o = sp[0].o;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[4].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_7:;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_value;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)((rhino_HashSlotMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o), (frame[6].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_2:;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[4].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	clinit_rhino_ScriptableObject$GetterSlot(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$GetterSlot);
	init_rhino_ScriptableObject$GetterSlot_java_lang_Object_int_int(ctx, sp[0].o, (frame[1].o), (frame[2].i), (jint(0)));
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	clinit_rhino_ScriptableObject$Slot(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$Slot);
	init_rhino_ScriptableObject$Slot_java_lang_Object_int_int(ctx, sp[0].o, (frame[1].o), (frame[2].i), (jint(0)));
	sp += 1;
	}
label_16:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = frame[4].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST;
	if (sp[0].o != sp[1].o) goto label_18;
	}
	{
	LINE_NUMBER(88);
	((func_rhino_ScriptableObject$Slot_setAttributes_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_setAttributes_int])(ctx, (frame[6].o), (13));
	}
label_18:;
	{
	LINE_NUMBER(90);
	((func_rhino_HashSlotMap_addSlot_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_HashSlotMap_addSlot_rhino_ScriptableObject$Slot])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void M_rhino_HashSlotMap_addSlot_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/HashSlotMap:addSlot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[1].o)))->F_indexOrHash));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[-1].o))->F_name;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = (jobject)((rhino_HashSlotMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_HashSlotMap_remove_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/HashSlotMap:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(102);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[2].i));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = (jobject)((rhino_HashSlotMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_ScriptableObject$Slot, sp[0].o));
	LINE_NUMBER(104);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, (frame[4].o));
	if ((temp0 & (jint(4))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.delete.property.with.configurable.false"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_10:;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((rhino_HashSlotMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	}
label_5:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_HashSlotMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/HashSlotMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((rhino_HashSlotMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_values_R_java_util_Collection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_values_R_java_util_Collection])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_HashSlotMap[] {
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
	(void *) M_rhino_HashSlotMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_rhino_HashSlotMap_size_R_int,
	(void *) M_rhino_HashSlotMap_isEmpty_R_boolean,
	(void *) M_rhino_HashSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_HashSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_HashSlotMap_addSlot_rhino_ScriptableObject$Slot,
	(void *) M_rhino_HashSlotMap_remove_java_lang_Object_int,
	(void *) M_rhino_HashSlotMap_createSlot_java_lang_Object_int_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "query", "(Ljava/lang/Object;I)Lrhino/ScriptableObject$Slot;" },
	{ "addSlot", "(Lrhino/ScriptableObject$Slot;)V" },
	{ "remove", "(Ljava/lang/Object;I)V" },
	{ "createSlot", "(Ljava/lang/Object;ILjava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
};

static jclass interfaces[] { &class_rhino_SlotMap, };

static FieldMetadata fields[] {
	{ "map", &class_java_util_LinkedHashMap, offsetof(rhino_HashSlotMap, F_map), "Ljava/util/LinkedHashMap;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_HashSlotMap, 0, "()V", 1 },
	{ "size", (intptr_t) M_rhino_HashSlotMap_size_R_int, VTABLE_rhino_HashSlotMap_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_rhino_HashSlotMap_isEmpty_R_boolean, VTABLE_rhino_HashSlotMap_isEmpty_R_boolean, "()Z", 1 },
	{ "query", (intptr_t) M_rhino_HashSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, VTABLE_rhino_HashSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;I)Lrhino/ScriptableObject$Slot;", 1 },
	{ "get", (intptr_t) M_rhino_HashSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, VTABLE_rhino_HashSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;", 1 },
	{ "createSlot", (intptr_t) M_rhino_HashSlotMap_createSlot_java_lang_Object_int_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, VTABLE_rhino_HashSlotMap_createSlot_java_lang_Object_int_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;ILjava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;", 2 },
	{ "addSlot", (intptr_t) M_rhino_HashSlotMap_addSlot_rhino_ScriptableObject$Slot, VTABLE_rhino_HashSlotMap_addSlot_rhino_ScriptableObject$Slot, "(Lrhino/ScriptableObject$Slot;)V", 1 },
	{ "remove", (intptr_t) M_rhino_HashSlotMap_remove_java_lang_Object_int, VTABLE_rhino_HashSlotMap_remove_java_lang_Object_int, "(Ljava/lang/Object;I)V", 1 },
	{ "iterator", (intptr_t) M_rhino_HashSlotMap_iterator_R_java_util_Iterator, VTABLE_rhino_HashSlotMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_rhino_HashSlotMap{
		.nativeName = (intptr_t) "rhino/HashSlotMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_HashSlotMap),
		.classVtable = (intptr_t) vtable_rhino_HashSlotMap,
		.staticInitializer = (intptr_t) clinit_rhino_HashSlotMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_HashSlotMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_HashSlotMap = registerClass(&class_rhino_HashSlotMap);

}
