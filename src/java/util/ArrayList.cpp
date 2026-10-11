#include "java/util/ArrayList.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/lang/Cloneable.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/ArrayList.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Iterable.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"
#include "java/lang/System.h"
#include "java/util/AbstractCollection.h"

extern "C" {

jlong SF_java_util_ArrayList_serialVersionUID;

void mark_java_util_ArrayList(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractList(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_ArrayList *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
}

void clinit_java_util_ArrayList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractList(ctx);
	SF_java_util_ArrayList_serialVersionUID = jlong(8683452581122892189ll);
}

void init_java_util_ArrayList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayList(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(42);
	init_java_util_ArrayList_int(ctx, (frame[0].o), (10));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_ArrayList_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	init_java_util_ArrayList_int(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(47);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(48);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(47);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_ArrayList_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayList(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(59);
	init_java_util_AbstractList(ctx, (frame[0].o));
	LINE_NUMBER(60);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(61);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((java_util_ArrayList *) NULL_CHECK(sp[1].o))->F_size = temp0;
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_firstIndex = temp0;
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_array = (jref) sp[1].o;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_ArrayList_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	init_java_util_AbstractList(ctx, (frame[0].o));
	LINE_NUMBER(76);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex = (jint(0));
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_java_util_ArrayList_toObjectArray_java_util_Collection_R_Array1_java_lang_Object(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(78);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) + (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) / (10))));
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_array = (jref) sp[1].o;
	LINE_NUMBER(84);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(85);
	((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount = (jint(1));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_ArrayList_toObjectArray_Array1_java_lang_Object_java_util_Collection(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:toObjectArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayList(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(90);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(90);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_ArrayList_toObjectArray_java_util_Collection_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:toObjectArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayList(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(96);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(97);
	SM_java_util_ArrayList_toObjectArray_Array1_java_lang_Object_java_util_Collection(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:newElementArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(121);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) <= ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(122);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" out of: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(124);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(125);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) != 0) goto label_5;
	}
	{
	LINE_NUMBER(126);
	M_java_util_ArrayList_growAtFront_int(ctx, (frame[0].o), (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((java_util_ArrayList *) NULL_CHECK(sp[1].o))->F_firstIndex) - (jint(1));
	((java_util_ArrayList *) NULL_CHECK(sp[1].o))->F_firstIndex = temp0;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[2].o);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(129);
	if ((frame[1].i) != ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(130);
	jint temp0 = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(131);
	M_java_util_ArrayList_growAtEnd_int(ctx, (frame[0].o), (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size))) = (frame[2].o);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	LINE_NUMBER(136);
	M_java_util_ArrayList_growForInsert_int_int(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(137);
	jint temp0 = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_15;
	}
	{
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) <= 0) goto label_16;
	}
	{
	if ((frame[1].i) >= (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)))) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	sp[2].o = frame[0].o;
	jint temp1 = ((jint)((java_util_ArrayList *) NULL_CHECK(sp[2].o))->F_firstIndex) - (jint(1));
	((java_util_ArrayList *) NULL_CHECK(sp[2].o))->F_firstIndex = temp1;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (frame[1].i));
	goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(142);
	frame[3].i = ((frame[1].i) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[3].i) + (jint(1))), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	}
label_14:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex))) = (frame[2].o);
	}
label_7:;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayList_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	jint temp0 = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(163);
	M_java_util_ArrayList_growAtEnd_int(ctx, (frame[0].o), (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size))) = (frame[1].o);
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:addAll", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(187);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) <= ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(188);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" out of: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)SM_java_util_ArrayList_toObjectArray_java_util_Collection_R_Array1_java_lang_Object(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(192);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(195);
	if ((frame[4].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(199);
	if ((frame[1].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(200);
	M_java_util_ArrayList_growAtFront_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_firstIndex = (((jint)((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_firstIndex) - (frame[4].i));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(202);
	if ((frame[1].i) != ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(203);
	jint temp0 = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (frame[4].i))) goto label_10;
	}
	{
	LINE_NUMBER(204);
	M_java_util_ArrayList_growAtEnd_int(ctx, (frame[0].o), (frame[4].i));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) >= (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(208);
	M_java_util_ArrayList_growForInsert_int_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	goto label_10;
	}
label_14:;
	{
	LINE_NUMBER(209);
	jint temp0 = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 > ((((jarray) nullCheck(ctx, sp[0].o))->length) - (frame[4].i))) goto label_16;
	}
	{
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) <= 0) goto label_17;
	}
	{
	if ((frame[1].i) >= (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)))) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(211);
	frame[5].i = (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) - (frame[4].i));
	LINE_NUMBER(212);
	if ((frame[5].i) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(213);
	frame[6].i = ((frame[1].i) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[6].i) - (frame[5].i)), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(216);
	frame[5].i = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[5].i), (frame[1].i));
	LINE_NUMBER(219);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex = (frame[5].i);
	LINE_NUMBER(220);
	goto label_10;
	}
label_17:;
	{
	LINE_NUMBER(221);
	frame[5].i = ((frame[1].i) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[5].i) + (frame[4].i)), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	}
label_10:;
	{
	LINE_NUMBER(227);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex)), (frame[4].i));
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size) + (frame[4].i));
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayList_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)SM_java_util_ArrayList_toObjectArray_java_util_Collection_R_Array1_java_lang_Object(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(245);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_2;
	}
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(248);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)))) goto label_4;
	}
	{
	LINE_NUMBER(249);
	M_java_util_ArrayList_growAtEnd_int(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_4:;
	{
	LINE_NUMBER(251);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size) + (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayList_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) == 0) goto label_1;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)), (jobject(nullptr)));
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((java_util_ArrayList *) NULL_CHECK(sp[1].o))->F_size = temp0;
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_firstIndex = temp0;
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	}
label_1:;
	LINE_NUMBER(276);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_ArrayList_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:contains", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(288);
	frame[2].i = (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(289);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(290);
	frame[3].i = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(290);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(296);
	frame[3].i = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex);
	}
label_10:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(296);
	INST_IINC(3, 1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayList_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(313);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].i = (temp0 - (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(314);
	if ((frame[2].i) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(317);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(318);
	M_java_util_ArrayList_growAtFront_int(ctx, (frame[0].o), (frame[2].i));
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(320);
	M_java_util_ArrayList_growAtEnd_int(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(323);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_ArrayList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(327);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) < ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(328);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" out of: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + (frame[1].i))));
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayList_growAtEnd_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:growAtEnd", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) < (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(337);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) == 0) goto label_3;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(339);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) >= ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex)) goto label_6;
	}
	{
	jint temp0 = (jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex;
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(0);
	sp[-1].i = ((java_util_ArrayList *) NULL_CHECK(sp[-1].o))->F_size;
label_7:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(342);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, temp0, (((jarray) nullCheck(ctx, sp[1].o))->length), (jobject(nullptr)));
	}
label_3:;
	{
	LINE_NUMBER(344);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex = (jint(0));
	goto label_9;
	}
label_1:;
	{
	LINE_NUMBER(348);
	frame[2].i = (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	LINE_NUMBER(349);
	if ((frame[1].i) <= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(350);
	frame[2].i = (frame[1].i);
	}
label_11:;
	{
	LINE_NUMBER(352);
	if ((frame[2].i) >= (12)) goto label_13;
	}
	{
	LINE_NUMBER(353);
	frame[2].i = (12);
	}
label_13:;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)M_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) + (frame[2].i)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(356);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) == 0) goto label_16;
	}
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex), (frame[3].o), (jint(0)), ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(358);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(360);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[3].o);
	}
label_9:;
	LINE_NUMBER(362);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_ArrayList_growAtFront_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:growAtFront", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) < (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(369);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) == 0) goto label_4;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[2].i), ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(371);
	frame[3].i = (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(372);
	if ((frame[3].i) <= (frame[2].i)) goto label_8;
	}
	INST_ILOAD(2);
	goto label_9;
label_8:;
	INST_ILOAD(3);
label_9:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(373);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex), (frame[4].i), (jobject(nullptr)));
	}
label_4:;
	{
	LINE_NUMBER(375);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex = (frame[2].i);
	LINE_NUMBER(376);
	goto label_12;
	}
label_1:;
	{
	LINE_NUMBER(377);
	frame[2].i = (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	LINE_NUMBER(378);
	if ((frame[1].i) <= (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(379);
	frame[2].i = (frame[1].i);
	}
label_14:;
	{
	LINE_NUMBER(381);
	if ((frame[2].i) >= (12)) goto label_16;
	}
	{
	LINE_NUMBER(382);
	frame[2].i = (12);
	}
label_16:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)M_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) + (frame[2].i)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(385);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) == 0) goto label_19;
	}
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex), (frame[3].o), (frame[2].i), ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_19:;
	{
	LINE_NUMBER(388);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(389);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[3].o);
	}
label_12:;
	LINE_NUMBER(391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_ArrayList_growForInsert_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:growForInsert", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(397);
	frame[3].i = (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	LINE_NUMBER(398);
	if ((frame[2].i) <= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(399);
	frame[3].i = (frame[2].i);
	}
label_2:;
	{
	LINE_NUMBER(401);
	if ((frame[3].i) >= (12)) goto label_4;
	}
	{
	LINE_NUMBER(402);
	frame[3].i = (12);
	}
label_4:;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)M_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(407);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(410);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((frame[1].i) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex)), (frame[4].o), (((frame[5].i) + (frame[1].i)) + (frame[2].i)), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(413);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex), (frame[4].o), (frame[5].i), (frame[1].i));
	LINE_NUMBER(414);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex = (frame[5].i);
	LINE_NUMBER(415);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[4].o);
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_ArrayList_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(421);
	frame[2].i = (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(422);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(423);
	frame[3].i = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(424);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return ((frame[3].i) - ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex));
	}
label_7:;
	{
	LINE_NUMBER(423);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(429);
	frame[3].i = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex);
	}
label_10:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return ((frame[3].i) - ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex));
	}
label_12:;
	{
	LINE_NUMBER(429);
	INST_IINC(3, 1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(435);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayList_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(440);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jint M_java_util_ArrayList_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:lastIndexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(445);
	frame[2].i = (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(446);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(447);
	frame[3].i = ((frame[2].i) - (jint(1)));
	}
label_4:;
	{
	if ((frame[3].i) < ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex)) goto label_5;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return ((frame[3].i) - ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex));
	}
label_7:;
	{
	LINE_NUMBER(447);
	INST_IINC(3, -1);
	goto label_4;
	}
label_5:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(453);
	frame[3].i = ((frame[2].i) - (jint(1)));
	}
label_10:;
	{
	if ((frame[3].i) < ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex)) goto label_9;
	}
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return ((frame[3].i) - ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex));
	}
label_12:;
	{
	LINE_NUMBER(453);
	INST_IINC(3, -1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(474);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) < ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(475);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" out of: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(477);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex)));
	LINE_NUMBER(479);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_util_ArrayList *) NULL_CHECK(sp[1].o))->F_firstIndex;
	((java_util_ArrayList *) NULL_CHECK(sp[1].o))->F_firstIndex = (temp0 + (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (jobject(nullptr));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(480);
	if ((frame[1].i) != (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))) goto label_7;
	}
	{
	LINE_NUMBER(481);
	frame[3].i = ((((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) - (jint(1)));
	LINE_NUMBER(482);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(483);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(484);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(485);
	frame[3].i = (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + (frame[1].i));
	LINE_NUMBER(486);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(487);
	if ((frame[1].i) >= (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)))) goto label_14;
	}
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex;
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + (jint(1))), (frame[1].i));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = frame[0].o;
	jint temp1 = (jint)((java_util_ArrayList *) NULL_CHECK(sp[1].o))->F_firstIndex;
	((java_util_ArrayList *) NULL_CHECK(sp[1].o))->F_firstIndex = (temp1 + (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (jobject(nullptr));
	goto label_6;
	}
label_14:;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (frame[3].i) + (jint(1));
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[3].i), ((((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)) - (jint(1))));
	LINE_NUMBER(494);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, ((((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) - (jint(1)))) = (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(501);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_19;
	}
	{
	LINE_NUMBER(502);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(505);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayList_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(511);
	jint temp0 = (jint)((func_java_util_ArrayList_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayList_indexOf_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(512);
	if ((frame[2].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((func_java_util_ArrayList_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayList_remove_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(516);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayList_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:removeRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(533);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(534);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(535);
	if ((frame[2].i) <= ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(536);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" out of: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(537);
	if ((frame[1].i) <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(538);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" out of: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(541);
	if ((frame[1].i) != (frame[2].i)) goto label_7;
	}
	LINE_NUMBER(542);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(544);
	if ((frame[2].i) != ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_9;
	}
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + (frame[1].i)), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)), (jobject(nullptr)));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(546);
	if ((frame[1].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(547);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + (frame[2].i)), (jobject(nullptr)));
	LINE_NUMBER(548);
	sp[0].o = frame[0].o;
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_firstIndex = (((jint)((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_firstIndex) + (frame[2].i));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + (frame[2].i);
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + (frame[1].i)), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) - (frame[2].i)));
	LINE_NUMBER(553);
	frame[3].i = (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(554);
	frame[4].i = (((frame[3].i) + (frame[1].i)) - (frame[2].i));
	LINE_NUMBER(555);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (frame[4].i), (frame[3].i), (jobject(nullptr)));
	}
label_11:;
	{
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_ArrayList *) NULL_CHECK(sp[0].o))->F_size) - ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(558);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(575);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) < ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(576);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" out of: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + (frame[1].i))));
	LINE_NUMBER(579);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + (frame[1].i))) = (frame[2].o);
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_ArrayList_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayList_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:clone", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(600);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	init_java_util_ArrayList_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(601);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[1].o)))->F_array;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(602);
	((java_util_ArrayList *) NULL_CHECK((frame[1].o)))->F_firstIndex = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex);
	LINE_NUMBER(603);
	((java_util_ArrayList *) NULL_CHECK((frame[1].o)))->F_size = ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayList_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(616);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex), (frame[1].o), (jint(0)), ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:toArray", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(638);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(639);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex), (frame[2].o), (jint(0)), ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(643);
	if (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(646);
	ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayList_trimToSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:trimToSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)M_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object(ctx, (frame[0].o), ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(659);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex), (frame[1].o), (jint(0)), ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(660);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(661);
	((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex = (jint(0));
	LINE_NUMBER(662);
	((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount = (jint(0));
	LINE_NUMBER(663);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayList_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayList:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_util_Arrays_sort_Array1_java_lang_Object_int_int_java_util_Comparator(ctx, sp[0].o, ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex), (((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_firstIndex) + ((jint)((java_util_ArrayList *) NULL_CHECK((frame[0].o)))->F_size)), (frame[1].o));
	LINE_NUMBER(668);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_ArrayList[] {
	(void *) M_java_util_AbstractList_hashCode_R_int,
	(void *) M_java_util_AbstractList_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_ArrayList_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_AbstractList_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_ArrayList_add_java_lang_Object_R_boolean,
	(void *) M_java_util_ArrayList_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_ArrayList_clear,
	(void *) M_java_util_ArrayList_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_ArrayList_isEmpty_R_boolean,
	(void *) M_java_util_ArrayList_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_ArrayList_size_R_int,
	(void *) M_java_util_ArrayList_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_ArrayList_add_int_java_lang_Object,
	(void *) M_java_util_ArrayList_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_ArrayList_get_int_R_java_lang_Object,
	(void *) M_java_util_ArrayList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_ArrayList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_AbstractList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_ArrayList_sort_java_util_Comparator,
	(void *) M_java_util_ArrayList_remove_int_R_java_lang_Object,
	(void *) M_java_util_ArrayList_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractList_subList_int_int_R_java_util_List,
	(void *) M_java_util_ArrayList_removeRange_int_int,
	(void *) M_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object,
	(void *) M_java_util_ArrayList_ensureCapacity_int,
	(void *) M_java_util_ArrayList_growAtEnd_int,
	(void *) M_java_util_ArrayList_growAtFront_int,
	(void *) M_java_util_ArrayList_growForInsert_int_int,
	(void *) M_java_util_ArrayList_trimToSize,
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
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Ljava/util/Collection;)Z" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "containsAll", "(Ljava/util/Collection;)Z" },
	{ "isEmpty", "()Z" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "removeAll", "(Ljava/util/Collection;)Z" },
	{ "retainAll", "(Ljava/util/Collection;)Z" },
	{ "size", "()I" },
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
	{ "removeRange", "(II)V" },
	{ "newElementArray", "(I)[Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "growAtEnd", "(I)V" },
	{ "growAtFront", "(I)V" },
	{ "growForInsert", "(II)V" },
	{ "trimToSize", "()V" },
};

static jclass interfaces[] { &class_java_util_List, &class_java_util_RandomAccess, &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_ArrayList_serialVersionUID, "J", 26 },
	{ "firstIndex", &class_int, offsetof(java_util_ArrayList, F_firstIndex), "I", 130 },
	{ "size", &class_int, offsetof(java_util_ArrayList, F_size), "I", 130 },
	{ "array", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_ArrayList, F_array), "[Ljava/lang/Object;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_ArrayList, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_ArrayList_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 129 },
	{ "<init>", (intptr_t) init_java_util_ArrayList_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_ArrayList_java_util_Collection, 0, "(Ljava/util/Collection;)V", 1 },
	{ "toObjectArray", (intptr_t) SM_java_util_ArrayList_toObjectArray_Array1_java_lang_Object_java_util_Collection, 0, "([Ljava/lang/Object;Ljava/util/Collection;)V", 8 },
	{ "toObjectArray", (intptr_t) SM_java_util_ArrayList_toObjectArray_java_util_Collection_R_Array1_java_lang_Object, 0, "(Ljava/util/Collection;)[Ljava/lang/Object;", 8 },
	{ "newElementArray", (intptr_t) M_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object, VTABLE_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 2 },
	{ "add", (intptr_t) M_java_util_ArrayList_add_int_java_lang_Object, VTABLE_java_util_ArrayList_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_java_util_ArrayList_add_java_lang_Object_R_boolean, VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_ArrayList_addAll_int_java_util_Collection_R_boolean, VTABLE_java_util_ArrayList_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_ArrayList_addAll_java_util_Collection_R_boolean, VTABLE_java_util_ArrayList_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_ArrayList_clear, VTABLE_java_util_ArrayList_clear, "()V", 1 },
	{ "contains", (intptr_t) M_java_util_ArrayList_contains_java_lang_Object_R_boolean, VTABLE_java_util_ArrayList_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "ensureCapacity", (intptr_t) M_java_util_ArrayList_ensureCapacity_int, VTABLE_java_util_ArrayList_ensureCapacity_int, "(I)V", 1 },
	{ "get", (intptr_t) M_java_util_ArrayList_get_int_R_java_lang_Object, VTABLE_java_util_ArrayList_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "growAtEnd", (intptr_t) M_java_util_ArrayList_growAtEnd_int, VTABLE_java_util_ArrayList_growAtEnd_int, "(I)V", 2 },
	{ "growAtFront", (intptr_t) M_java_util_ArrayList_growAtFront_int, VTABLE_java_util_ArrayList_growAtFront_int, "(I)V", 2 },
	{ "growForInsert", (intptr_t) M_java_util_ArrayList_growForInsert_int_int, VTABLE_java_util_ArrayList_growForInsert_int_int, "(II)V", 2 },
	{ "indexOf", (intptr_t) M_java_util_ArrayList_indexOf_java_lang_Object_R_int, VTABLE_java_util_ArrayList_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "isEmpty", (intptr_t) M_java_util_ArrayList_isEmpty_R_boolean, VTABLE_java_util_ArrayList_isEmpty_R_boolean, "()Z", 1 },
	{ "lastIndexOf", (intptr_t) M_java_util_ArrayList_lastIndexOf_java_lang_Object_R_int, VTABLE_java_util_ArrayList_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "remove", (intptr_t) M_java_util_ArrayList_remove_int_R_java_lang_Object, VTABLE_java_util_ArrayList_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_ArrayList_remove_java_lang_Object_R_boolean, VTABLE_java_util_ArrayList_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeRange", (intptr_t) M_java_util_ArrayList_removeRange_int_int, VTABLE_java_util_ArrayList_removeRange_int_int, "(II)V", 4 },
	{ "set", (intptr_t) M_java_util_ArrayList_set_int_java_lang_Object_R_java_lang_Object, VTABLE_java_util_ArrayList_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "size", (intptr_t) M_java_util_ArrayList_size_R_int, VTABLE_java_util_ArrayList_size_R_int, "()I", 1 },
	{ "clone", (intptr_t) M_java_util_ArrayList_clone_R_java_lang_Object, VTABLE_java_util_ArrayList_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_ArrayList_toArray_R_Array1_java_lang_Object, VTABLE_java_util_ArrayList_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "trimToSize", (intptr_t) M_java_util_ArrayList_trimToSize, VTABLE_java_util_ArrayList_trimToSize, "()V", 1 },
	{ "sort", (intptr_t) M_java_util_ArrayList_sort_java_util_Comparator, VTABLE_java_util_ArrayList_sort_java_util_Comparator, "(Ljava/util/Comparator;)V", 1 },
};

Class class_java_util_ArrayList{
		.nativeName = (intptr_t) "java/util/ArrayList",
		.parentClass = (intptr_t) &class_java_util_AbstractList,
		.size = sizeof(java_util_ArrayList),
		.classVtable = (intptr_t) vtable_java_util_ArrayList,
		.staticInitializer = (intptr_t) clinit_java_util_ArrayList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_ArrayList,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_ArrayList = registerClass(&class_java_util_ArrayList);

}
