#include "java/util/WeakHashMap.h"
#include "java/util/WeakHashMap_KeySet.h"
#include "java/lang/StringBuilder.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/Float.h"
#include "java/util/WeakHashMap_EntrySpliterator.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/util/WeakHashMap_KeyIterator.h"
#include "java/util/WeakHashMap.h"
#include "java/util/Arrays.h"
#include "java/util/WeakHashMap_EntrySet.h"
#include "java/util/WeakHashMap_ValueSpliterator.h"
#include "java/lang/Math.h"
#include "java/util/WeakHashMap_ValueIterator.h"
#include "java/util/Iterator.h"
#include "java/util/WeakHashMap_Entry.h"
#include "java/util/WeakHashMap_KeySpliterator.h"
#include "java/util/Map_Entry.h"
#include "java/util/WeakHashMap_Values.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/WeakHashMap_1.h"
#include "java/util/Map.h"
#include "java/util/WeakHashMap_WeakHashMapSpliterator.h"
#include "java/util/WeakHashMap_HashIterator.h"
#include "java/lang/Object.h"
#include "java/util/WeakHashMap_EntryIterator.h"
#include "java/util/function/BiConsumer.h"
#include "java/lang/ref/WeakReference.h"
#include "java/util/Objects.h"
#include "java/util/AbstractMap.h"
#include "java/util/function/BiFunction.h"

extern "C" {

jint SF_java_util_WeakHashMap_DEFAULT_INITIAL_CAPACITY;
jint SF_java_util_WeakHashMap_MAXIMUM_CAPACITY;
jfloat SF_java_util_WeakHashMap_DEFAULT_LOAD_FACTOR;
jobject SF_java_util_WeakHashMap_NULL_KEY;

void mark_java_util_WeakHashMap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_WeakHashMap_NULL_KEY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_WeakHashMap_NULL_KEY)->clazz)->markFunction)((jobject) SF_java_util_WeakHashMap_NULL_KEY, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_WeakHashMap *) object;
	if (self->F_table)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_table)->clazz)->markFunction)((jobject) self->F_table, mark, depth + 1);
	if (self->F_entrySet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entrySet)->clazz)->markFunction)((jobject) self->F_entrySet, mark, depth + 1);
}

jobject M_java_util_WeakHashMap_newTable_int_R_Array1_java_util_WeakHashMap$Entry(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:newTable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_WeakHashMap$Entry, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_WeakHashMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(202);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(203);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(204);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Illegal Initial Capacity: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(206);
	if ((frame[1].i) <= (jint(1073741824))) goto label_4;
	}
	{
	LINE_NUMBER(207);
	frame[1].i = (jint(1073741824));
	}
label_4:;
	{
	LINE_NUMBER(209);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_6;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[2].f));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(210);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Illegal Load factor: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(212);
	frame[3].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(213);
	if ((frame[3].i) >= (frame[1].i)) goto label_9;
	}
	{
	LINE_NUMBER(214);
	frame[3].i = ((frame[3].i) << (jint(1)));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_WeakHashMap_newTable_int_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o), (frame[3].i));
	((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_table = (jref) sp[1].o;
	LINE_NUMBER(216);
	((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(217);
	((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_WeakHashMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(228);
	init_java_util_WeakHashMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.75f)));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_WeakHashMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(236);
	init_java_util_WeakHashMap_int_float(ctx, (frame[0].o), (16), (jfloat(0.75f)));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_WeakHashMap_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint(((jfloat(temp0)) / (jfloat(0.75f))))) + (jint(1))), (16));
	init_java_util_WeakHashMap_int_float(ctx, sp[0].o, temp1, (jfloat(0.75f)));
	LINE_NUMBER(253);
	((func_java_util_WeakHashMap_putAll_java_util_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap_putAll_java_util_Map])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_WeakHashMap_maskNull_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:maskNull", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(267);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	clinit_java_util_WeakHashMap(ctx);
	(sp++)->o = SF_java_util_WeakHashMap_NULL_KEY;
	goto label_2;
label_1:;
	INST_ALOAD(0);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_WeakHashMap_unmaskNull_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:unmaskNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	clinit_java_util_WeakHashMap(ctx);
	sp[1].o = (jobject)SF_java_util_WeakHashMap_NULL_KEY;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_java_util_WeakHashMap_eq_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:eq", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(282);
	if ((frame[0].o) == (frame[1].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
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

jint M_java_util_WeakHashMap_hash_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:hash", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(293);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(298);
	frame[2].i = ((frame[2].i) ^ ((bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (20))) ^ (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (12)))));
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return (((frame[2].i) ^ (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (7)))) ^ (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (jint(4)))));
	}

	popStackFrame(ctx);
}

jint SM_java_util_WeakHashMap_indexFor_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:indexFor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return ((frame[0].i) & ((frame[1].i) - (jint(1))));
	}

	popStackFrame(ctx);
}

void M_java_util_WeakHashMap_expungeStaleEntries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:expungeStaleEntries", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:getTable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	M_java_util_WeakHashMap_expungeStaleEntries(ctx, (frame[0].o));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_table;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_WeakHashMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	if (((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(333);
	M_java_util_WeakHashMap_expungeStaleEntries(ctx, (frame[0].o));
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return ((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

jbool M_java_util_WeakHashMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(344);
	jint temp0 = (jint)((func_java_util_WeakHashMap_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap_size_R_int])(ctx, (frame[0].o));
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

jobject M_java_util_WeakHashMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)SM_java_util_WeakHashMap_maskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(367);
	jint temp0 = (jint)((func_java_util_WeakHashMap_hash_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap_hash_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(368);
	sp[0].o = (jobject)M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(369);
	jint temp1 = (jint)SM_java_util_WeakHashMap_indexFor_int_int_R_int(ctx, (frame[3].i), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	frame[5].i = temp1;
	LINE_NUMBER(370);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	}
label_5:;
	{
	LINE_NUMBER(371);
	if ((frame[6].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(372);
	if (((jint)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[6].o)))->F_hash) != (frame[3].i)) goto label_8;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, (frame[6].o));
	jint temp0 = (jint)SM_java_util_WeakHashMap_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[6].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_util_WeakHashMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry])(ctx, (frame[0].o), (frame[1].o));
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

jobject M_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:getEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)SM_java_util_WeakHashMap_maskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(397);
	jint temp0 = (jint)((func_java_util_WeakHashMap_hash_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap_hash_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(398);
	sp[0].o = (jobject)M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(399);
	jint temp1 = (jint)SM_java_util_WeakHashMap_indexFor_int_int_R_int(ctx, (frame[3].i), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	frame[5].i = temp1;
	LINE_NUMBER(400);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	}
label_5:;
	{
	LINE_NUMBER(401);
	if ((frame[6].o) == nullptr) goto label_6;
	}
	{
	if (((jint)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[6].o)))->F_hash) != (frame[3].i)) goto label_7;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, (frame[6].o));
	jint temp0 = (jint)SM_java_util_WeakHashMap_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:put", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)SM_java_util_WeakHashMap_maskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(420);
	jint temp0 = (jint)((func_java_util_WeakHashMap_hash_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap_hash_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(421);
	sp[0].o = (jobject)M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(422);
	jint temp1 = (jint)SM_java_util_WeakHashMap_indexFor_int_int_R_int(ctx, (frame[4].i), (((jarray) nullCheck(ctx, (frame[5].o)))->length));
	frame[6].i = temp1;
	LINE_NUMBER(424);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	}
label_5:;
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_6;
	{
	LINE_NUMBER(425);
	if ((frame[4].i) != ((jint)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_hash)) goto label_8;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, (frame[7].o));
	jint temp0 = (jint)SM_java_util_WeakHashMap_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	frame[8].o = sp[0].o;
	LINE_NUMBER(427);
	if ((frame[2].o) == (frame[8].o)) goto label_11;
	}
	{
	LINE_NUMBER(428);
	((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_value = (jref) (frame[2].o);
	}
label_11:;
	{
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_8:;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_next;
	frame[7].o = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(434);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(435);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	clinit_java_util_WeakHashMap$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_WeakHashMap$Entry);
	init_java_util_WeakHashMap$Entry_java_lang_Object_java_lang_Object_int_java_util_WeakHashMap$Entry(ctx, sp[1].o, (frame[3].o), (frame[2].o), (frame[4].i), (frame[7].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(436);
	sp[0].o = frame[0].o;
	jint temp1 = ((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_size = temp1;
	if (temp1 < ((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_16;
	}
	{
	LINE_NUMBER(437);
	((func_java_util_WeakHashMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap_resize_int])(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[5].o)))->length) * (jint(2))));
	}
label_16:;
	{
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_util_WeakHashMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:resize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(457);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(458);
	if ((frame[3].i) != (jint(1073741824))) goto label_3;
	}
	{
	LINE_NUMBER(459);
	((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(2147483647));
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)M_java_util_WeakHashMap_newTable_int_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o), (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(464);
	M_java_util_WeakHashMap_transfer_Array1_java_util_WeakHashMap$Entry_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o), (frame[2].o), (frame[4].o));
	LINE_NUMBER(465);
	((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_table = (jref) (frame[4].o);
	LINE_NUMBER(472);
	if (((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_size) < (((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_threshold) / (jint(2)))) goto label_9;
	}
	{
	LINE_NUMBER(473);
	((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(475);
	M_java_util_WeakHashMap_expungeStaleEntries(ctx, (frame[0].o));
	LINE_NUMBER(476);
	M_java_util_WeakHashMap_transfer_Array1_java_util_WeakHashMap$Entry_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(477);
	((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_table = (jref) (frame[2].o);
	}
label_11:;
	LINE_NUMBER(479);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_WeakHashMap_transfer_Array1_java_util_WeakHashMap$Entry_Array1_java_util_WeakHashMap$Entry(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:transfer", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(483);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(484);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(485);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(486);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[4].o)))->F_next;
	frame[5].o = sp[0].o;
	LINE_NUMBER(488);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(489);
	if ((frame[6].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(490);
	((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[4].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(491);
	((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[4].o)))->F_value = (jref) (jobject(nullptr));
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(494);
	jint temp0 = (jint)SM_java_util_WeakHashMap_indexFor_int_int_R_int(ctx, ((jint)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[4].o)))->F_hash), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	frame[7].i = temp0;
	LINE_NUMBER(495);
	((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[4].o)))->F_next = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(496);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[7].i)) = (frame[4].o);
	}
label_14:;
	{
	LINE_NUMBER(498);
	frame[4].o = (frame[5].o);
	LINE_NUMBER(499);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(483);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(501);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_WeakHashMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:putAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(512);
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(513);
	if ((frame[2].i) != 0) goto label_2;
	}
	LINE_NUMBER(514);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(525);
	if ((frame[2].i) <= ((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_4;
	}
	{
	LINE_NUMBER(526);
	frame[3].i = (jint((((jfloat((frame[2].i))) / ((jfloat)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_loadFactor)) + (jfloat(1)))));
	LINE_NUMBER(527);
	if ((frame[3].i) <= (jint(1073741824))) goto label_7;
	}
	{
	LINE_NUMBER(528);
	frame[3].i = (jint(1073741824));
	}
label_7:;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_table;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_9:;
	{
	LINE_NUMBER(530);
	if ((frame[4].i) >= (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(531);
	frame[4].i = ((frame[4].i) << (jint(1)));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(532);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_table;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(533);
	((func_java_util_WeakHashMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap_resize_int])(ctx, (frame[0].o), (frame[4].i));
	}
label_4:;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_util_WeakHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_WeakHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_13;
	}
label_14:;
	LINE_NUMBER(538);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:remove", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)SM_java_util_WeakHashMap_maskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(562);
	jint temp0 = (jint)((func_java_util_WeakHashMap_hash_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap_hash_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(563);
	sp[0].o = (jobject)M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(564);
	jint temp1 = (jint)SM_java_util_WeakHashMap_indexFor_int_int_R_int(ctx, (frame[3].i), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	frame[5].i = temp1;
	LINE_NUMBER(565);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(566);
	frame[7].o = (frame[6].o);
	}
label_6:;
	{
	LINE_NUMBER(568);
	if ((frame[7].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_next;
	frame[8].o = sp[0].o;
	LINE_NUMBER(570);
	if ((frame[3].i) != ((jint)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_hash)) goto label_10;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, (frame[7].o));
	jint temp0 = (jint)SM_java_util_WeakHashMap_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(571);
	sp[0].o = frame[0].o;
	((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(572);
	sp[0].o = frame[0].o;
	((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(573);
	if ((frame[6].o) != (frame[7].o)) goto label_14;
	}
	{
	LINE_NUMBER(574);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)) = (frame[8].o);
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(576);
	((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[8].o);
	}
label_16:;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(579);
	frame[6].o = (frame[7].o);
	LINE_NUMBER(580);
	frame[7].o = (frame[8].o);
	LINE_NUMBER(581);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_util_WeakHashMap_removeMapping_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:removeMapping", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(588);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(591);
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)));
	LINE_NUMBER(592);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_util_WeakHashMap_maskNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(593);
	jint temp0 = (jint)((func_java_util_WeakHashMap_hash_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap_hash_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(594);
	jint temp1 = (jint)SM_java_util_WeakHashMap_indexFor_int_int_R_int(ctx, (frame[5].i), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	frame[6].i = temp1;
	LINE_NUMBER(595);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(596);
	frame[8].o = (frame[7].o);
	}
label_9:;
	{
	LINE_NUMBER(598);
	if ((frame[8].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[8].o)))->F_next;
	frame[9].o = sp[0].o;
	LINE_NUMBER(600);
	if ((frame[5].i) != ((jint)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[8].o)))->F_hash)) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean])(ctx, (frame[8].o), (frame[3].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(601);
	sp[0].o = frame[0].o;
	((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(602);
	sp[0].o = frame[0].o;
	((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(603);
	if ((frame[7].o) != (frame[8].o)) goto label_17;
	}
	{
	LINE_NUMBER(604);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[6].i)) = (frame[9].o);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(606);
	((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_next = (jref) (frame[9].o);
	}
label_19:;
	{
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(609);
	frame[7].o = (frame[8].o);
	LINE_NUMBER(610);
	frame[8].o = (frame[9].o);
	LINE_NUMBER(611);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_WeakHashMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(621);
	sp[0].o = frame[0].o;
	((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(622);
	sp[0].o = (jobject)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_table;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(623);
	((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_WeakHashMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:containsValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(635);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(636);
	jint temp0 = (jint)M_java_util_WeakHashMap_containsNullValue_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(639);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_4:;
	{
	jint temp0 = frame[3].i;
	INST_IINC(3, -1);
	if (temp0 <= 0) goto label_5;
	}
	{
	LINE_NUMBER(640);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	}
label_7:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_8;
	{
	LINE_NUMBER(641);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[4].o)))->F_next;
	frame[4].o = sp[0].o;
	goto label_7;
	}
label_8:;
	goto label_4;
label_5:;
	{
	LINE_NUMBER(643);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_WeakHashMap_containsNullValue_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:containsNullValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(651);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	INST_IINC(2, -1);
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(652);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	}
label_5:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_6;
	{
	LINE_NUMBER(653);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(652);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_5;
	}
label_6:;
	goto label_2;
label_3:;
	{
	LINE_NUMBER(655);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:keySet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(826);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	frame[1].o = sp[0].o;
	LINE_NUMBER(827);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(828);
	clinit_java_util_WeakHashMap$KeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_WeakHashMap$KeySet);
	init_java_util_WeakHashMap$KeySet_java_util_WeakHashMap_java_util_WeakHashMap$1(ctx, sp[0].o, (frame[0].o), (jobject(nullptr)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(829);
	((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet = (jref) (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:values", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(879);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(880);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(881);
	clinit_java_util_WeakHashMap$Values(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_WeakHashMap$Values);
	init_java_util_WeakHashMap$Values_java_util_WeakHashMap_java_util_WeakHashMap$1(ctx, sp[0].o, (frame[0].o), (jobject(nullptr)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(882);
	((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values = (jref) (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(884);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:entrySet", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(924);
	sp[0].o = (jobject)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_entrySet;
	frame[1].o = sp[0].o;
	LINE_NUMBER(925);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	INST_ALOAD(1);
	goto label_3;
label_2:;
	{
	sp[0].o = frame[0].o;
	clinit_java_util_WeakHashMap$EntrySet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_WeakHashMap$EntrySet);
	init_java_util_WeakHashMap$EntrySet_java_util_WeakHashMap_java_util_WeakHashMap$1(ctx, sp[1].o, (frame[0].o), (jobject(nullptr)));
	((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_entrySet = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_java_util_WeakHashMap_forEach_java_util_function_BiConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:forEach", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(976);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(977);
	frame[2].i = ((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_modCount);
	LINE_NUMBER(979);
	sp[0].o = (jobject)M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(980);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	}
label_6:;
	{
	LINE_NUMBER(981);
	if ((frame[7].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(982);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(983);
	if ((frame[8].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(984);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_util_WeakHashMap_unmaskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[8].o));
	sp[2].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	((func_java_util_function_BiConsumer_accept_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiConsumer, INDEX_java_util_function_BiConsumer_accept_java_lang_Object_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_10:;
	{
	LINE_NUMBER(986);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_next;
	frame[7].o = sp[0].o;
	LINE_NUMBER(988);
	if ((frame[2].i) == ((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_modCount)) goto label_13;
	}
	{
	LINE_NUMBER(989);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	LINE_NUMBER(991);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(980);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(993);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_WeakHashMap_replaceAll_java_util_function_BiFunction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:replaceAll", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(998);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(999);
	frame[2].i = ((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_modCount);
	LINE_NUMBER(1001);
	sp[0].o = (jobject)M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1002);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	}
label_6:;
	{
	LINE_NUMBER(1003);
	if ((frame[7].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1005);
	if ((frame[8].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1006);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_WeakHashMap_unmaskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[8].o));
	sp[3].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	sp[1].o = (jobject)((func_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiFunction, INDEX_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, sp[2].o, sp[3].o);
	((java_util_WeakHashMap$Entry *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_next;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1010);
	if ((frame[2].i) == ((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[0].o)))->F_modCount)) goto label_13;
	}
	{
	LINE_NUMBER(1011);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	LINE_NUMBER(1013);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(1002);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(1015);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_java_util_WeakHashMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractMap(ctx);
	SF_java_util_WeakHashMap_DEFAULT_INITIAL_CAPACITY = jint(16);
	SF_java_util_WeakHashMap_MAXIMUM_CAPACITY = jint(1073741824);
	SF_java_util_WeakHashMap_DEFAULT_LOAD_FACTOR = jfloat(0.75f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap(ctx);
	{
	LINE_NUMBER(261);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_java_util_WeakHashMap(ctx);
	SF_java_util_WeakHashMap_NULL_KEY = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_WeakHashMap[] {
	(void *) M_java_util_AbstractMap_hashCode_R_int,
	(void *) M_java_util_AbstractMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_WeakHashMap_clear,
	(void *) M_java_util_WeakHashMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_WeakHashMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_WeakHashMap_entrySet_R_java_util_Set,
	(void *) M_java_util_WeakHashMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_WeakHashMap_isEmpty_R_boolean,
	(void *) M_java_util_WeakHashMap_keySet_R_java_util_Set,
	(void *) M_java_util_WeakHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_WeakHashMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_WeakHashMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_WeakHashMap_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_WeakHashMap_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_WeakHashMap_size_R_int,
	(void *) M_java_util_WeakHashMap_values_R_java_util_Collection,
	(void *) M_java_util_WeakHashMap_newTable_int_R_Array1_java_util_WeakHashMap$Entry,
	(void *) M_java_util_WeakHashMap_hash_java_lang_Object_R_int,
	(void *) M_java_util_WeakHashMap_expungeStaleEntries,
	(void *) M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry,
	(void *) M_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry,
	(void *) M_java_util_WeakHashMap_resize_int,
	(void *) M_java_util_WeakHashMap_transfer_Array1_java_util_WeakHashMap$Entry_Array1_java_util_WeakHashMap$Entry,
	(void *) M_java_util_WeakHashMap_removeMapping_java_lang_Object_R_boolean,
	(void *) M_java_util_WeakHashMap_containsNullValue_R_boolean,
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
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "forEach", "(Ljava/util/function/BiConsumer;)V" },
	{ "replaceAll", "(Ljava/util/function/BiFunction;)V" },
	{ "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" },
	{ "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "values", "()Ljava/util/Collection;" },
	{ "newTable", "(I)[Ljava/util/WeakHashMap$Entry;" },
	{ "hash", "(Ljava/lang/Object;)I" },
	{ "expungeStaleEntries", "()V" },
	{ "getTable", "()[Ljava/util/WeakHashMap$Entry;" },
	{ "getEntry", "(Ljava/lang/Object;)Ljava/util/WeakHashMap$Entry;" },
	{ "resize", "(I)V" },
	{ "transfer", "([Ljava/util/WeakHashMap$Entry;[Ljava/util/WeakHashMap$Entry;)V" },
	{ "removeMapping", "(Ljava/lang/Object;)Z" },
	{ "containsNullValue", "()Z" },
};

static jclass interfaces[] { &class_java_util_Map, };

static jclass innerClasses[] {
	&class_java_util_WeakHashMap$Entry,
	&class_java_util_WeakHashMap$KeySet,
	&class_java_util_WeakHashMap$Values,
	&class_java_util_WeakHashMap$EntrySet,
	&class_java_util_WeakHashMap$EntrySpliterator,
	&class_java_util_WeakHashMap$ValueSpliterator,
	&class_java_util_WeakHashMap$KeySpliterator,
	&class_java_util_WeakHashMap$WeakHashMapSpliterator,
	&class_java_util_WeakHashMap$EntryIterator,
	&class_java_util_WeakHashMap$KeyIterator,
	&class_java_util_WeakHashMap$ValueIterator,
	&class_java_util_WeakHashMap$HashIterator,
};

static FieldMetadata fields[] {
	{ "DEFAULT_INITIAL_CAPACITY", &class_int, (intptr_t) &SF_java_util_WeakHashMap_DEFAULT_INITIAL_CAPACITY, "I", 26 },
	{ "MAXIMUM_CAPACITY", &class_int, (intptr_t) &SF_java_util_WeakHashMap_MAXIMUM_CAPACITY, "I", 26 },
	{ "DEFAULT_LOAD_FACTOR", &class_float, (intptr_t) &SF_java_util_WeakHashMap_DEFAULT_LOAD_FACTOR, "F", 26 },
	{ "table", getArrayClass(&class_java_util_WeakHashMap$Entry, 1), offsetof(java_util_WeakHashMap, F_table), "[Ljava/util/WeakHashMap$Entry;", 0 },
	{ "size", &class_int, offsetof(java_util_WeakHashMap, F_size), "I", 2 },
	{ "threshold", &class_int, offsetof(java_util_WeakHashMap, F_threshold), "I", 2 },
	{ "loadFactor", &class_float, offsetof(java_util_WeakHashMap, F_loadFactor), "F", 18 },
	{ "modCount", &class_int, offsetof(java_util_WeakHashMap, F_modCount), "I", 0 },
	{ "NULL_KEY", &class_java_lang_Object, (intptr_t) &SF_java_util_WeakHashMap_NULL_KEY, "Ljava/lang/Object;", 26 },
	{ "entrySet", &class_java_util_Set, offsetof(java_util_WeakHashMap, F_entrySet), "Ljava/util/Set;", 130 },
};

static MethodMetadata methods[] {
	{ "newTable", (intptr_t) M_java_util_WeakHashMap_newTable_int_R_Array1_java_util_WeakHashMap$Entry, VTABLE_java_util_WeakHashMap_newTable_int_R_Array1_java_util_WeakHashMap$Entry, "(I)[Ljava/util/WeakHashMap$Entry;", 2 },
	{ "<init>", (intptr_t) init_java_util_WeakHashMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_java_util_WeakHashMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_WeakHashMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_WeakHashMap_java_util_Map, 0, "(Ljava/util/Map;)V", 1 },
	{ "maskNull", (intptr_t) SM_java_util_WeakHashMap_maskNull_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "unmaskNull", (intptr_t) SM_java_util_WeakHashMap_unmaskNull_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "eq", (intptr_t) SM_java_util_WeakHashMap_eq_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 10 },
	{ "hash", (intptr_t) M_java_util_WeakHashMap_hash_java_lang_Object_R_int, VTABLE_java_util_WeakHashMap_hash_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 16 },
	{ "indexFor", (intptr_t) SM_java_util_WeakHashMap_indexFor_int_int_R_int, 0, "(II)I", 10 },
	{ "expungeStaleEntries", (intptr_t) M_java_util_WeakHashMap_expungeStaleEntries, VTABLE_java_util_WeakHashMap_expungeStaleEntries, "()V", 2 },
	{ "getTable", (intptr_t) M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry, VTABLE_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry, "()[Ljava/util/WeakHashMap$Entry;", 2 },
	{ "size", (intptr_t) M_java_util_WeakHashMap_size_R_int, VTABLE_java_util_WeakHashMap_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_java_util_WeakHashMap_isEmpty_R_boolean, VTABLE_java_util_WeakHashMap_isEmpty_R_boolean, "()Z", 1 },
	{ "get", (intptr_t) M_java_util_WeakHashMap_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_WeakHashMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "containsKey", (intptr_t) M_java_util_WeakHashMap_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_WeakHashMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getEntry", (intptr_t) M_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry, VTABLE_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry, "(Ljava/lang/Object;)Ljava/util/WeakHashMap$Entry;", 0 },
	{ "put", (intptr_t) M_java_util_WeakHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_WeakHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "resize", (intptr_t) M_java_util_WeakHashMap_resize_int, VTABLE_java_util_WeakHashMap_resize_int, "(I)V", 0 },
	{ "transfer", (intptr_t) M_java_util_WeakHashMap_transfer_Array1_java_util_WeakHashMap$Entry_Array1_java_util_WeakHashMap$Entry, VTABLE_java_util_WeakHashMap_transfer_Array1_java_util_WeakHashMap$Entry_Array1_java_util_WeakHashMap$Entry, "([Ljava/util/WeakHashMap$Entry;[Ljava/util/WeakHashMap$Entry;)V", 2 },
	{ "putAll", (intptr_t) M_java_util_WeakHashMap_putAll_java_util_Map, VTABLE_java_util_WeakHashMap_putAll_java_util_Map, "(Ljava/util/Map;)V", 1 },
	{ "remove", (intptr_t) M_java_util_WeakHashMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_WeakHashMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "removeMapping", (intptr_t) M_java_util_WeakHashMap_removeMapping_java_lang_Object_R_boolean, VTABLE_java_util_WeakHashMap_removeMapping_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 0 },
	{ "clear", (intptr_t) M_java_util_WeakHashMap_clear, VTABLE_java_util_WeakHashMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_java_util_WeakHashMap_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_WeakHashMap_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsNullValue", (intptr_t) M_java_util_WeakHashMap_containsNullValue_R_boolean, VTABLE_java_util_WeakHashMap_containsNullValue_R_boolean, "()Z", 2 },
	{ "keySet", (intptr_t) M_java_util_WeakHashMap_keySet_R_java_util_Set, VTABLE_java_util_WeakHashMap_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "values", (intptr_t) M_java_util_WeakHashMap_values_R_java_util_Collection, VTABLE_java_util_WeakHashMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "entrySet", (intptr_t) M_java_util_WeakHashMap_entrySet_R_java_util_Set, VTABLE_java_util_WeakHashMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "forEach", (intptr_t) M_java_util_WeakHashMap_forEach_java_util_function_BiConsumer, VTABLE_java_util_WeakHashMap_forEach_java_util_function_BiConsumer, "(Ljava/util/function/BiConsumer;)V", 1 },
	{ "replaceAll", (intptr_t) M_java_util_WeakHashMap_replaceAll_java_util_function_BiFunction, VTABLE_java_util_WeakHashMap_replaceAll_java_util_function_BiFunction, "(Ljava/util/function/BiFunction;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_java_util_WeakHashMap, 0, "()V", 8 },
};

Class class_java_util_WeakHashMap{
		.nativeName = (intptr_t) "java/util/WeakHashMap",
		.parentClass = (intptr_t) &class_java_util_AbstractMap,
		.size = sizeof(java_util_WeakHashMap),
		.classVtable = (intptr_t) vtable_java_util_WeakHashMap,
		.staticInitializer = (intptr_t) clinit_java_util_WeakHashMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_WeakHashMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 12,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 32,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_WeakHashMap = registerClass(&class_java_util_WeakHashMap);

}
