#include "rhino/EmbeddedSlotMap.h"
#include "java/util/Iterator.h"
#include "rhino/ScriptableObject_GetterSlot.h"
#include "rhino/SlotMap.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "java/lang/Enum.h"
#include "java/lang/Iterable.h"
#include "rhino/EmbeddedSlotMap_Iter.h"
#include "java/lang/Object.h"
#include "rhino/EmbeddedSlotMap.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/ScriptableObject_Slot.h"
#include "rhino/EmbeddedSlotMap_1.h"
#include "rhino/ScriptableObject_SlotAccess.h"

extern "C" {

jint SF_rhino_EmbeddedSlotMap_INITIAL_SLOT_SIZE;

void mark_rhino_EmbeddedSlotMap(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_EmbeddedSlotMap *) object;
	if (self->F_slots)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_slots)->clazz)->markFunction)((jobject) self->F_slots, mark, depth + 1);
	if (self->F_firstAdded)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_firstAdded)->clazz)->markFunction)((jobject) self->F_firstAdded, mark, depth + 1);
	if (self->F_lastAdded)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastAdded)->clazz)->markFunction)((jobject) self->F_lastAdded, mark, depth + 1);
}

void clinit_rhino_EmbeddedSlotMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_EmbeddedSlotMap_INITIAL_SLOT_SIZE = jint(4);
}

void init_rhino_EmbeddedSlotMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EmbeddedSlotMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(52);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_EmbeddedSlotMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return ((jint)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_count);
	}

	popStackFrame(ctx);
}

jbool M_rhino_EmbeddedSlotMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	if (((jint)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_count) != 0) goto label_1;
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

jobject M_rhino_EmbeddedSlotMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	clinit_rhino_EmbeddedSlotMap$Iter(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_EmbeddedSlotMap$Iter);
	sp[1].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_firstAdded;
	init_rhino_EmbeddedSlotMap$Iter_rhino_ScriptableObject$Slot(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_EmbeddedSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:query", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(79);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ILOAD(2);
label_4:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(80);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	jint temp0 = (jint)SM_rhino_EmbeddedSlotMap_getSlotIndex_int_int_R_int(ctx, (((jarray) nullCheck(ctx, sp[0].o))->length), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(81);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_7:;
	{
	LINE_NUMBER(82);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_name;
	frame[6].o = sp[0].o;
	LINE_NUMBER(85);
	if ((frame[3].i) != ((jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_indexOrHash)) goto label_11;
	}
	{
	if ((frame[6].o) == (frame[1].o)) goto label_12;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_11;
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[6].o;
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_11:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_EmbeddedSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:get", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_QUERY;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(106);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ILOAD(2);
label_4:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(107);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	jint temp0 = (jint)SM_rhino_EmbeddedSlotMap_getSlotIndex_int_int_R_int(ctx, (((jarray) nullCheck(ctx, sp[0].o))->length), (frame[4].i));
	frame[6].i = temp0;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	}
label_10:;
	{
	LINE_NUMBER(112);
	if ((frame[5].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_name;
	frame[7].o = sp[0].o;
	LINE_NUMBER(115);
	if ((frame[4].i) != ((jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_indexOrHash)) goto label_14;
	}
	{
	if ((frame[7].o) == (frame[1].o)) goto label_11;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_14;
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[7].o;
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_14;
	}
	LINE_NUMBER(118);
	goto label_11;
label_14:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(121);
	clinit_rhino_EmbeddedSlotMap$1(ctx);
	sp[0].o = (jobject)SF_rhino_EmbeddedSlotMap$1_$SwitchMap$rhino$ScriptableObject$SlotAccess;
	jint temp0 = (jint)((func_rhino_ScriptableObject$SlotAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ScriptableObject$SlotAccess_ordinal_R_int])(ctx, (frame[3].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_17;
		case 2: goto label_18;
		case 3: goto label_18;
		case 4: goto label_19;
		case 5: goto label_20;
		default: goto label_7;
	}
	}
label_17:;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_18:;
	{
	LINE_NUMBER(126);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_19:;
	{
	LINE_NUMBER(131);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ScriptableObject$GetterSlot)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_20:;
	{
	LINE_NUMBER(136);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ScriptableObject$GetterSlot)) != 0) goto label_7;
	}
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_7:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)M_rhino_EmbeddedSlotMap_createSlot_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_rhino_ScriptableObject$Slot_R_rhino_ScriptableObject$Slot(ctx, (frame[0].o), (frame[1].o), (frame[4].i), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_EmbeddedSlotMap_createSlot_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_rhino_ScriptableObject$Slot_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:createSlot", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(150);
	if (((jint)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_count) != 0) goto label_1;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_rhino_ScriptableObject$Slot, (jint(4)));
	((rhino_EmbeddedSlotMap *) NULL_CHECK(sp[0].o))->F_slots = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(153);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	jint temp0 = (jint)SM_rhino_EmbeddedSlotMap_getSlotIndex_int_int_R_int(ctx, (((jarray) nullCheck(ctx, sp[0].o))->length), (frame[2].i));
	frame[5].i = temp0;
	LINE_NUMBER(157);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(158);
	frame[7].o = (frame[6].o);
	}
label_7:;
	{
	LINE_NUMBER(159);
	if ((frame[7].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(160);
	if (((jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[7].o)))->F_indexOrHash) != (frame[2].i)) goto label_10;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[7].o)))->F_name;
	if (sp[0].o == (frame[1].o)) goto label_8;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_10;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[7].o)))->F_name;
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	LINE_NUMBER(163);
	goto label_8;
label_10:;
	{
	LINE_NUMBER(165);
	frame[6].o = (frame[7].o);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[7].o)))->F_next;
	frame[7].o = sp[0].o;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(169);
	if ((frame[7].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject$GetterSlot)) != 0) goto label_15;
	}
	{
	LINE_NUMBER(179);
	clinit_rhino_ScriptableObject$GetterSlot(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$GetterSlot);
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = frame[7].o;
	LINE_NUMBER(180);
	jint temp1 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, sp[2].o);
	init_rhino_ScriptableObject$GetterSlot_java_lang_Object_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1);
	frame[8].o = sp[0].o;
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA;
	if (sp[0].o != sp[1].o) goto label_20;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ScriptableObject$GetterSlot)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(183);
	clinit_rhino_ScriptableObject$Slot(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$Slot);
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, (frame[7].o));
	init_rhino_ScriptableObject$Slot_java_lang_Object_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1);
	frame[8].o = sp[0].o;
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_23:;
	{
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_19:;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[7].o)))->F_value;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(191);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[7].o)))->F_next;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(194);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_firstAdded;
	if (sp[0].o != sp[1].o) goto label_27;
	}
	{
	LINE_NUMBER(195);
	((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_firstAdded = (jref) (frame[8].o);
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_firstAdded;
	frame[9].o = sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(198);
	if ((frame[9].o) == nullptr) goto label_31;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[9].o)))->F_orderedNext;
	if (sp[0].o == (frame[7].o)) goto label_31;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[9].o)))->F_orderedNext;
	frame[9].o = sp[0].o;
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(201);
	if ((frame[9].o) == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(202);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[9].o)))->F_orderedNext = (jref) (frame[8].o);
	}
label_29:;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[7].o)))->F_orderedNext;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_orderedNext = (jref) sp[1].o;
	LINE_NUMBER(206);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	LINE_NUMBER(207);
	((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_lastAdded = (jref) (frame[8].o);
	}
label_35:;
	{
	LINE_NUMBER(211);
	if ((frame[6].o) != (frame[7].o)) goto label_37;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)) = (frame[8].o);
	goto label_39;
	}
label_37:;
	{
	LINE_NUMBER(214);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[8].o);
	}
label_39:;
	{
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_3:;
	{
	LINE_NUMBER(222);
	jint temp0 = (jint(4)) * (((jint)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_count) + (jint(1)));
	jint temp1 = jint(3);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	if (temp0 <= (temp1 * (((jarray) nullCheck(ctx, sp[0].o))->length))) goto label_40;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	sp[0].o = (jobject)createArray(ctx, &class_rhino_ScriptableObject$Slot, ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	M_rhino_EmbeddedSlotMap_copyTable_Array1_rhino_ScriptableObject$Slot_Array1_rhino_ScriptableObject$Slot(ctx, sp[0].o, sp[1].o, (frame[5].o));
	LINE_NUMBER(226);
	((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots = (jref) (frame[5].o);
	}
label_40:;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
	if (sp[0].o != sp[1].o) goto label_44;
	}
	{
	clinit_rhino_ScriptableObject$GetterSlot(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$GetterSlot);
	init_rhino_ScriptableObject$GetterSlot_java_lang_Object_int_int(ctx, sp[0].o, (frame[1].o), (frame[2].i), (jint(0)));
	sp += 1;
	goto label_45;
	}
label_44:;
	{
	clinit_rhino_ScriptableObject$Slot(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$Slot);
	init_rhino_ScriptableObject$Slot_java_lang_Object_int_int(ctx, sp[0].o, (frame[1].o), (frame[2].i), (jint(0)));
	sp += 1;
	}
label_45:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(232);
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST;
	if (sp[0].o != sp[1].o) goto label_47;
	}
	{
	LINE_NUMBER(233);
	((func_rhino_ScriptableObject$Slot_setAttributes_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_setAttributes_int])(ctx, (frame[5].o), (13));
	}
label_47:;
	{
	LINE_NUMBER(235);
	M_rhino_EmbeddedSlotMap_insertNewSlot_rhino_ScriptableObject$Slot(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void M_rhino_EmbeddedSlotMap_addSlot_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:addSlot", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_rhino_ScriptableObject$Slot, (jint(4)));
	((rhino_EmbeddedSlotMap *) NULL_CHECK(sp[0].o))->F_slots = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(244);
	M_rhino_EmbeddedSlotMap_insertNewSlot_rhino_ScriptableObject$Slot(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_EmbeddedSlotMap_insertNewSlot_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:insertNewSlot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	((rhino_EmbeddedSlotMap *) NULL_CHECK(sp[0].o))->F_count = (((jint)((rhino_EmbeddedSlotMap *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	LINE_NUMBER(250);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_orderedNext = (jref) (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_firstAdded;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(254);
	((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_firstAdded = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(256);
	((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_lastAdded = (jref) (frame[1].o);
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	M_rhino_EmbeddedSlotMap_addKnownAbsentSlot_Array1_rhino_ScriptableObject$Slot_rhino_ScriptableObject$Slot(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_EmbeddedSlotMap_remove_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:remove", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(263);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ILOAD(2);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(265);
	if (((jint)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_count) == 0) goto label_4;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	jint temp0 = (jint)SM_rhino_EmbeddedSlotMap_getSlotIndex_int_int_R_int(ctx, (((jarray) nullCheck(ctx, sp[0].o))->length), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(268);
	frame[6].o = (frame[5].o);
	}
label_8:;
	{
	LINE_NUMBER(269);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(270);
	if (((jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_indexOrHash) != (frame[3].i)) goto label_11;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_name;
	if (sp[0].o == (frame[1].o)) goto label_9;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_11;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_name;
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	LINE_NUMBER(273);
	goto label_9;
label_11:;
	{
	LINE_NUMBER(275);
	frame[5].o = (frame[6].o);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(278);
	if ((frame[6].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(280);
	jint temp0 = (jint)((func_rhino_ScriptableObject$Slot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int])(ctx, (frame[6].o));
	if ((temp0 & (jint(4))) == 0) goto label_16;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[7].o = sp[0].o;
	LINE_NUMBER(282);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.delete.property.with.configurable.false"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_19:;
	LINE_NUMBER(285);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	((rhino_EmbeddedSlotMap *) NULL_CHECK(sp[0].o))->F_count = (((jint)((rhino_EmbeddedSlotMap *) NULL_CHECK(sp[0].o))->F_count) - (jint(1)));
	LINE_NUMBER(289);
	if ((frame[5].o) != (frame[6].o)) goto label_22;
	}
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_slots;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_next;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_next;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(300);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_firstAdded;
	if (sp[0].o != sp[1].o) goto label_25;
	}
	{
	LINE_NUMBER(301);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_orderedNext;
	((rhino_EmbeddedSlotMap *) NULL_CHECK(sp[0].o))->F_firstAdded = (jref) sp[1].o;
	goto label_28;
	}
label_25:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_firstAdded;
	frame[5].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_orderedNext;
	if (sp[0].o == (frame[6].o)) goto label_30;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[5].o)))->F_orderedNext;
	frame[5].o = sp[0].o;
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(308);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_orderedNext;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_orderedNext = (jref) sp[1].o;
	}
label_28:;
	{
	LINE_NUMBER(310);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(311);
	((rhino_EmbeddedSlotMap *) NULL_CHECK((frame[0].o)))->F_lastAdded = (jref) (frame[5].o);
	}
label_4:;
	LINE_NUMBER(315);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_EmbeddedSlotMap_copyTable_Array1_rhino_ScriptableObject$Slot_Array1_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:copyTable", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(318);
	frame[3].o = (frame[1].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	}
label_3:;
	{
	LINE_NUMBER(319);
	if ((frame[6].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_next;
	frame[7].o = sp[0].o;
	LINE_NUMBER(321);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[6].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(322);
	M_rhino_EmbeddedSlotMap_addKnownAbsentSlot_Array1_rhino_ScriptableObject$Slot_rhino_ScriptableObject$Slot(ctx, (frame[0].o), (frame[2].o), (frame[6].o));
	LINE_NUMBER(323);
	frame[6].o = (frame[7].o);
	LINE_NUMBER(324);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(318);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_EmbeddedSlotMap_addKnownAbsentSlot_Array1_rhino_ScriptableObject$Slot_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:addKnownAbsentSlot", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(334);
	jint temp0 = (jint)SM_rhino_EmbeddedSlotMap_getSlotIndex_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), ((jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[2].o)))->F_indexOrHash));
	frame[3].i = temp0;
	LINE_NUMBER(335);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(336);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(337);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[4].o);
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_rhino_EmbeddedSlotMap_getSlotIndex_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap:getSlotIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EmbeddedSlotMap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return ((frame[1].i) & ((frame[0].i) - (jint(1))));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_EmbeddedSlotMap[] {
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
	(void *) M_rhino_EmbeddedSlotMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_rhino_EmbeddedSlotMap_size_R_int,
	(void *) M_rhino_EmbeddedSlotMap_isEmpty_R_boolean,
	(void *) M_rhino_EmbeddedSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_EmbeddedSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_EmbeddedSlotMap_addSlot_rhino_ScriptableObject$Slot,
	(void *) M_rhino_EmbeddedSlotMap_remove_java_lang_Object_int,
	(void *) M_rhino_EmbeddedSlotMap_createSlot_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_rhino_ScriptableObject$Slot_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_EmbeddedSlotMap_insertNewSlot_rhino_ScriptableObject$Slot,
	(void *) M_rhino_EmbeddedSlotMap_copyTable_Array1_rhino_ScriptableObject$Slot_Array1_rhino_ScriptableObject$Slot,
	(void *) M_rhino_EmbeddedSlotMap_addKnownAbsentSlot_Array1_rhino_ScriptableObject$Slot_rhino_ScriptableObject$Slot,
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
	{ "createSlot", "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;Lrhino/ScriptableObject$Slot;)Lrhino/ScriptableObject$Slot;" },
	{ "insertNewSlot", "(Lrhino/ScriptableObject$Slot;)V" },
	{ "copyTable", "([Lrhino/ScriptableObject$Slot;[Lrhino/ScriptableObject$Slot;)V" },
	{ "addKnownAbsentSlot", "([Lrhino/ScriptableObject$Slot;Lrhino/ScriptableObject$Slot;)V" },
};

static jclass interfaces[] { &class_rhino_SlotMap, };

static jclass innerClasses[] {
	&class_rhino_EmbeddedSlotMap$Iter,
};

static FieldMetadata fields[] {
	{ "slots", getArrayClass(&class_rhino_ScriptableObject$Slot, 1), offsetof(rhino_EmbeddedSlotMap, F_slots), "[Lrhino/ScriptableObject$Slot;", 2 },
	{ "firstAdded", &class_rhino_ScriptableObject$Slot, offsetof(rhino_EmbeddedSlotMap, F_firstAdded), "Lrhino/ScriptableObject$Slot;", 2 },
	{ "lastAdded", &class_rhino_ScriptableObject$Slot, offsetof(rhino_EmbeddedSlotMap, F_lastAdded), "Lrhino/ScriptableObject$Slot;", 2 },
	{ "count", &class_int, offsetof(rhino_EmbeddedSlotMap, F_count), "I", 2 },
	{ "INITIAL_SLOT_SIZE", &class_int, (intptr_t) &SF_rhino_EmbeddedSlotMap_INITIAL_SLOT_SIZE, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_EmbeddedSlotMap, 0, "()V", 1 },
	{ "size", (intptr_t) M_rhino_EmbeddedSlotMap_size_R_int, VTABLE_rhino_EmbeddedSlotMap_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_rhino_EmbeddedSlotMap_isEmpty_R_boolean, VTABLE_rhino_EmbeddedSlotMap_isEmpty_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_rhino_EmbeddedSlotMap_iterator_R_java_util_Iterator, VTABLE_rhino_EmbeddedSlotMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "query", (intptr_t) M_rhino_EmbeddedSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, VTABLE_rhino_EmbeddedSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;I)Lrhino/ScriptableObject$Slot;", 1 },
	{ "get", (intptr_t) M_rhino_EmbeddedSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, VTABLE_rhino_EmbeddedSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;", 1 },
	{ "createSlot", (intptr_t) M_rhino_EmbeddedSlotMap_createSlot_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_rhino_ScriptableObject$Slot_R_rhino_ScriptableObject$Slot, VTABLE_rhino_EmbeddedSlotMap_createSlot_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_rhino_ScriptableObject$Slot_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;Lrhino/ScriptableObject$Slot;)Lrhino/ScriptableObject$Slot;", 2 },
	{ "addSlot", (intptr_t) M_rhino_EmbeddedSlotMap_addSlot_rhino_ScriptableObject$Slot, VTABLE_rhino_EmbeddedSlotMap_addSlot_rhino_ScriptableObject$Slot, "(Lrhino/ScriptableObject$Slot;)V", 1 },
	{ "insertNewSlot", (intptr_t) M_rhino_EmbeddedSlotMap_insertNewSlot_rhino_ScriptableObject$Slot, VTABLE_rhino_EmbeddedSlotMap_insertNewSlot_rhino_ScriptableObject$Slot, "(Lrhino/ScriptableObject$Slot;)V", 2 },
	{ "remove", (intptr_t) M_rhino_EmbeddedSlotMap_remove_java_lang_Object_int, VTABLE_rhino_EmbeddedSlotMap_remove_java_lang_Object_int, "(Ljava/lang/Object;I)V", 1 },
	{ "copyTable", (intptr_t) M_rhino_EmbeddedSlotMap_copyTable_Array1_rhino_ScriptableObject$Slot_Array1_rhino_ScriptableObject$Slot, VTABLE_rhino_EmbeddedSlotMap_copyTable_Array1_rhino_ScriptableObject$Slot_Array1_rhino_ScriptableObject$Slot, "([Lrhino/ScriptableObject$Slot;[Lrhino/ScriptableObject$Slot;)V", 2 },
	{ "addKnownAbsentSlot", (intptr_t) M_rhino_EmbeddedSlotMap_addKnownAbsentSlot_Array1_rhino_ScriptableObject$Slot_rhino_ScriptableObject$Slot, VTABLE_rhino_EmbeddedSlotMap_addKnownAbsentSlot_Array1_rhino_ScriptableObject$Slot_rhino_ScriptableObject$Slot, "([Lrhino/ScriptableObject$Slot;Lrhino/ScriptableObject$Slot;)V", 2 },
	{ "getSlotIndex", (intptr_t) SM_rhino_EmbeddedSlotMap_getSlotIndex_int_int_R_int, 0, "(II)I", 10 },
};

Class class_rhino_EmbeddedSlotMap{
		.nativeName = (intptr_t) "rhino/EmbeddedSlotMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_EmbeddedSlotMap),
		.classVtable = (intptr_t) vtable_rhino_EmbeddedSlotMap,
		.staticInitializer = (intptr_t) clinit_rhino_EmbeddedSlotMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_EmbeddedSlotMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_EmbeddedSlotMap = registerClass(&class_rhino_EmbeddedSlotMap);

}
