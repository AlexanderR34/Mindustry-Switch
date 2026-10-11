#include "java/util/EnumMap.h"
#include "java/lang/ClassCastException.h"
#include "java/lang/StringBuilder.h"
#include "java/util/EnumMap_Values.h"
#include "java/util/EnumMap_EnumMapIterator.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/util/EnumMap_KeyIterator.h"
#include "java/util/EnumMap.h"
#include "java/util/EnumMap_1.h"
#include "java/util/EnumMap_EntrySet.h"
#include "java/util/Iterator.h"
#include "java/lang/Cloneable.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/EnumMap_KeySet.h"
#include "java/util/Map.h"
#include "java/lang/Enum.h"
#include "java/lang/CloneNotSupportedException.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/AssertionError.h"
#include "java/util/EnumMap_EntryIterator.h"
#include "java/util/EnumMap_ValueIterator.h"
#include "java/lang/Class.h"
#include "java/util/AbstractMap.h"

extern "C" {

jobject SF_java_util_EnumMap_NULL;
jobject SF_java_util_EnumMap_ZERO_LENGTH_ENUM_ARRAY;
jlong SF_java_util_EnumMap_serialVersionUID;

void mark_java_util_EnumMap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_EnumMap_NULL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_EnumMap_NULL)->clazz)->markFunction)((jobject) SF_java_util_EnumMap_NULL, mark, depth + 1);
		if (SF_java_util_EnumMap_ZERO_LENGTH_ENUM_ARRAY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_EnumMap_ZERO_LENGTH_ENUM_ARRAY)->clazz)->markFunction)((jobject) SF_java_util_EnumMap_ZERO_LENGTH_ENUM_ARRAY, mark, depth + 1);
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
	auto self = (java_util_EnumMap *) object;
	if (self->F_keyType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyType)->clazz)->markFunction)((jobject) self->F_keyType, mark, depth + 1);
	if (self->F_keyUniverse)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyUniverse)->clazz)->markFunction)((jobject) self->F_keyUniverse, mark, depth + 1);
	if (self->F_vals)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vals)->clazz)->markFunction)((jobject) self->F_vals, mark, depth + 1);
	if (self->F_entrySet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entrySet)->clazz)->markFunction)((jobject) self->F_entrySet, mark, depth + 1);
}

jobject M_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:maskNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	clinit_java_util_EnumMap(ctx);
	(sp++)->o = SF_java_util_EnumMap_NULL;
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:unmaskNull", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	clinit_java_util_EnumMap(ctx);
	sp[1].o = (jobject)SF_java_util_EnumMap_NULL;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void init_java_util_EnumMap_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(103);
	((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(136);
	((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyType = (jref) (frame[1].o);
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_EnumMap_getKeyUniverse_java_lang_Class_R_Array1_java_lang_Enum(ctx, (frame[1].o));
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_keyUniverse = (jref) sp[1].o;
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyUniverse;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_vals = (jref) sp[1].o;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_EnumMap_java_util_EnumMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(103);
	((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[1].o)))->F_keyType;
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_keyType = (jref) sp[1].o;
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[1].o)))->F_keyUniverse;
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_keyUniverse = (jref) sp[1].o;
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[1].o)))->F_vals;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_vals = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(152);
	((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((java_util_EnumMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_EnumMap_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(103);
	((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(168);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_EnumMap)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(169);
	frame[2].o = (checkCast(ctx, &class_java_util_EnumMap, (frame[1].o)));
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[2].o)))->F_keyType;
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_keyType = (jref) sp[1].o;
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[2].o)))->F_keyUniverse;
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_keyUniverse = (jref) sp[1].o;
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[2].o)))->F_vals;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_vals = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(173);
	((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((java_util_EnumMap *) NULL_CHECK((frame[2].o)))->F_size);
	LINE_NUMBER(174);
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_java_util_Map_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_isEmpty_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(176);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Specified map is empty"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_Enum_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Enum, sp[1].o)))->vtable)[VTABLE_java_lang_Enum_getDeclaringClass_R_java_lang_Class])(ctx, (checkCast(ctx, &class_java_lang_Enum, sp[1].o)));
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_keyType = (jref) sp[1].o;
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyType;
	sp[1].o = (jobject)SM_java_util_EnumMap_getKeyUniverse_java_lang_Class_R_Array1_java_lang_Enum(ctx, sp[1].o);
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_keyUniverse = (jref) sp[1].o;
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyUniverse;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_vals = (jref) sp[1].o;
	LINE_NUMBER(180);
	((func_java_util_EnumMap_putAll_java_util_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_EnumMap_putAll_java_util_Map])(ctx, (frame[0].o), (frame[1].o));
	}
label_10:;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_EnumMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return ((jint)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:containsValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)M_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(205);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(205);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)M_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	jint temp0 = (jint)((func_java_lang_Enum_ordinal_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))))->vtable)[VTABLE_java_lang_Enum_ordinal_R_int])(ctx, (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)) == nullptr) goto label_1;
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

jbool M_java_util_EnumMap_containsMapping_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:containsMapping", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(225);
	jint temp0 = (jint)M_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	LINE_NUMBER(226);
	sp[0].o = (jobject)M_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	jint temp0 = (jint)((func_java_lang_Enum_ordinal_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))))->vtable)[VTABLE_java_lang_Enum_ordinal_R_int])(ctx, (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	jint temp1 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)));
	if (temp1 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(225);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)M_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	jint temp0 = (jint)((func_java_lang_Enum_ordinal_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))))->vtable)[VTABLE_java_lang_Enum_ordinal_R_int])(ctx, (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	sp[0].o = (jobject)M_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)));
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ACONST_NULL();
label_3:;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(266);
	M_java_util_EnumMap_typeCheck_java_lang_Enum(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(268);
	jint temp0 = (jint)((func_java_lang_Enum_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Enum_ordinal_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(269);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(270);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)M_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(271);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)M_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)M_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(288);
	jint temp0 = (jint)((func_java_lang_Enum_ordinal_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))))->vtable)[VTABLE_java_lang_Enum_ordinal_R_int])(ctx, (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	frame[2].i = temp0;
	LINE_NUMBER(289);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(291);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)M_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap_removeMapping_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:removeMapping", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(297);
	jint temp0 = (jint)M_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(299);
	jint temp0 = (jint)((func_java_lang_Enum_ordinal_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))))->vtable)[VTABLE_java_lang_Enum_ordinal_R_int])(ctx, (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	frame[3].i = temp0;
	LINE_NUMBER(300);
	sp[0].o = (jobject)M_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[2].o));
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	jint temp1 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp1 == 0) goto label_4;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:isValidKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(313);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(318);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyType;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyType;
	if (sp[0].o != sp[1].o) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_EnumMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:putAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(333);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_EnumMap)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(334);
	frame[2].o = (checkCast(ctx, &class_java_util_EnumMap, (frame[1].o)));
	LINE_NUMBER(335);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[2].o)))->F_keyType;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyType;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_java_util_EnumMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_EnumMap_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	LINE_NUMBER(337);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(338);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[2].o)))->F_keyType;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" != "_j))));
	sp[2].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyType;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ClassCastException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(341);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyUniverse;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[2].o)))->F_vals;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(343);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_14:;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[4].o);
	}
label_12:;
	{
	LINE_NUMBER(341);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(349);
	goto label_16;
label_1:;
	{
	LINE_NUMBER(350);
	M_java_util_AbstractMap_putAll_java_util_Map(ctx, (frame[0].o), (frame[1].o));
	}
label_16:;
	LINE_NUMBER(352);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_EnumMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(359);
	((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:keySet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	frame[1].o = sp[0].o;
	LINE_NUMBER(382);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(383);
	clinit_java_util_EnumMap$KeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_EnumMap$KeySet);
	init_java_util_EnumMap$KeySet_java_util_EnumMap_java_util_EnumMap$1(ctx, sp[0].o, (frame[0].o), (jobject(nullptr)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(384);
	((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet = (jref) (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:values", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(421);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(422);
	clinit_java_util_EnumMap$Values(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_EnumMap$Values);
	init_java_util_EnumMap$Values_java_util_EnumMap_java_util_EnumMap$1(ctx, sp[0].o, (frame[0].o), (jobject(nullptr)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(423);
	((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values = (jref) (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:entrySet", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_entrySet;
	frame[1].o = sp[0].o;
	LINE_NUMBER(466);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	clinit_java_util_EnumMap$EntrySet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_EnumMap$EntrySet);
	init_java_util_EnumMap$EntrySet_java_util_EnumMap_java_util_EnumMap$1(ctx, sp[1].o, (frame[0].o), (jobject(nullptr)));
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_entrySet = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:equals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(656);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(657);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(658);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_EnumMap)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(659);
	jint temp0 = (jint)M_java_util_EnumMap_equals_java_util_EnumMap_R_boolean(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_EnumMap, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(660);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(661);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(663);
	frame[2].o = (checkCast(ctx, &class_java_util_Map, (frame[1].o)));
	LINE_NUMBER(664);
	jint temp0 = (jint)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_size;
	jint temp1 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == temp1) goto label_8;
	}
	{
	LINE_NUMBER(665);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(667);
	frame[3].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyUniverse;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(668);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	if (sp[0].o == ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i)))) goto label_13;
	}
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyUniverse;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(670);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	sp[0].o = (jobject)M_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(671);
	if ((jobject(nullptr)) != (frame[5].o)) goto label_17;
	}
	{
	LINE_NUMBER(672);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	if (temp0 != 0) goto label_13;
	}
label_19:;
	{
	LINE_NUMBER(673);
	popStackFrame(ctx);
	return (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(675);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(667);
	INST_IINC(3, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap_equals_java_util_EnumMap_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:equals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[1].o)))->F_keyType;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyType;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(686);
	if (((jint)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_3;
	}
	{
	if (((jint)((java_util_EnumMap *) NULL_CHECK((frame[1].o)))->F_size) != 0) goto label_3;
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
	LINE_NUMBER(689);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyUniverse;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(691);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[1].o)))->F_vals;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(692);
	if ((frame[4].o) == (frame[3].o)) goto label_10;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_11;
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[3].o;
	LINE_NUMBER(693);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(689);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(696);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_java_util_EnumMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:hashCode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(704);
	frame[1].i = (jint(0));
	LINE_NUMBER(706);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyUniverse;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(707);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	if (sp[0].o == ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))) goto label_5;
	}
	{
	LINE_NUMBER(708);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_java_util_EnumMap_entryHashCode_int_R_int(ctx, (frame[0].o), (frame[2].i));
	frame[1].i = (temp0 + temp1);
	}
label_5:;
	{
	LINE_NUMBER(706);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_EnumMap_entryHashCode_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:entryHashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyUniverse;
	jint temp0 = (jint)((func_java_lang_Enum_hashCode_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_java_lang_Enum_hashCode_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	popStackFrame(ctx);
	return (temp0 ^ temp1);
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap_clone_R_java_util_EnumMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:clone", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(727);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(729);
	sp[0].o = (jobject)M_java_lang_Object_clone_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_java_util_EnumMap, sp[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(732);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(730);
	frame[2].o = sp[0].o;
	LINE_NUMBER(731);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(733);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[1].o)))->F_vals;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_vals = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(734);
	((java_util_EnumMap *) NULL_CHECK((frame[1].o)))->F_entrySet = (jref) (jobject(nullptr));
	LINE_NUMBER(735);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_java_util_EnumMap_typeCheck_java_lang_Enum(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:typeCheck", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(743);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyType;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[1].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyType;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(744);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" != "_j))));
	sp[2].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyType;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ClassCastException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(745);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_EnumMap_getKeyUniverse_java_lang_Class_R_Array1_java_lang_Enum(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:getKeyUniverse", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(752);
	sp[0].o = (jobject)((func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Enum, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:clone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_java_util_EnumMap_clone_R_java_util_EnumMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_EnumMap_clone_R_java_util_EnumMap])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_EnumMap_access$200_java_util_EnumMap_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:access$200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return ((jint)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_EnumMap_access$500_java_util_EnumMap_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:access$500", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)M_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:access$600", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_vals;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_EnumMap_access$210_java_util_EnumMap_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:access$210", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_size;
	((java_util_EnumMap *) NULL_CHECK(sp[0].o))->F_size = (temp0 - (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_EnumMap_access$900_java_util_EnumMap_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:access$900", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)M_java_util_EnumMap_containsMapping_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_EnumMap_access$1000_java_util_EnumMap_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:access$1000", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)M_java_util_EnumMap_removeMapping_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_EnumMap_access$1100_java_util_EnumMap_R_Array1_java_lang_Enum(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:access$1100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((java_util_EnumMap *) NULL_CHECK((frame[0].o)))->F_keyUniverse;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_EnumMap_access$1200_java_util_EnumMap_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:access$1200", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)M_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_EnumMap_access$1600_java_util_EnumMap_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:access$1600", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)M_java_util_EnumMap_entryHashCode_int_R_int(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_util_EnumMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractMap(ctx);
	SF_java_util_EnumMap_serialVersionUID = jlong(458661240069192865ll);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap(ctx);
	{
	LINE_NUMBER(108);
	clinit_java_util_EnumMap$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_EnumMap$1);
	init_java_util_EnumMap$1(ctx, sp[0].o);
	clinit_java_util_EnumMap(ctx);
	SF_java_util_EnumMap_NULL = sp[0].o;
	LINE_NUMBER(127);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Enum, (jint(0)));
	clinit_java_util_EnumMap(ctx);
	SF_java_util_EnumMap_ZERO_LENGTH_ENUM_ARRAY = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_EnumMap[] {
	(void *) M_java_util_EnumMap_hashCode_R_int,
	(void *) M_java_util_EnumMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_EnumMap_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_EnumMap_clear,
	(void *) M_java_util_EnumMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_EnumMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_EnumMap_entrySet_R_java_util_Set,
	(void *) M_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractMap_isEmpty_R_boolean,
	(void *) M_java_util_EnumMap_keySet_R_java_util_Set,
	(void *) M_java_util_EnumMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_EnumMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_EnumMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_EnumMap_size_R_int,
	(void *) M_java_util_EnumMap_values_R_java_util_Collection,
	(void *) M_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_EnumMap_containsMapping_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_EnumMap_removeMapping_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean,
	(void *) M_java_util_EnumMap_equals_java_util_EnumMap_R_boolean,
	(void *) M_java_util_EnumMap_entryHashCode_int_R_int,
	(void *) M_java_util_EnumMap_clone_R_java_util_EnumMap,
	(void *) M_java_util_EnumMap_typeCheck_java_lang_Enum,
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
	{ "maskNull", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "unmaskNull", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "containsMapping", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "put", "(Ljava/lang/Enum;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "removeMapping", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "isValidKey", "(Ljava/lang/Object;)Z" },
	{ "equals", "(Ljava/util/EnumMap;)Z" },
	{ "entryHashCode", "(I)I" },
	{ "clone", "()Ljava/util/EnumMap;" },
	{ "typeCheck", "(Ljava/lang/Enum;)V" },
};

static jclass interfaces[] { &class_java_io_Serializable, &class_java_lang_Cloneable, };

static jclass innerClasses[] {
	&class_java_util_EnumMap$KeySet,
	&class_java_util_EnumMap$Values,
	&class_java_util_EnumMap$EntrySet,
	&class_java_util_EnumMap$EntryIterator,
	&class_java_util_EnumMap$ValueIterator,
	&class_java_util_EnumMap$KeyIterator,
	&class_java_util_EnumMap$EnumMapIterator,
};

static FieldMetadata fields[] {
	{ "keyType", &class_java_lang_Class, offsetof(java_util_EnumMap, F_keyType), "Ljava/lang/Class;", 18 },
	{ "keyUniverse", getArrayClass(&class_java_lang_Enum, 1), offsetof(java_util_EnumMap, F_keyUniverse), "[Ljava/lang/Enum;", 130 },
	{ "vals", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_EnumMap, F_vals), "[Ljava/lang/Object;", 130 },
	{ "size", &class_int, offsetof(java_util_EnumMap, F_size), "I", 130 },
	{ "NULL", &class_java_lang_Object, (intptr_t) &SF_java_util_EnumMap_NULL, "Ljava/lang/Object;", 26 },
	{ "ZERO_LENGTH_ENUM_ARRAY", getArrayClass(&class_java_lang_Enum, 1), (intptr_t) &SF_java_util_EnumMap_ZERO_LENGTH_ENUM_ARRAY, "[Ljava/lang/Enum;", 26 },
	{ "entrySet", &class_java_util_Set, offsetof(java_util_EnumMap, F_entrySet), "Ljava/util/Set;", 130 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_EnumMap_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "maskNull", (intptr_t) M_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object, VTABLE_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "unmaskNull", (intptr_t) M_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object, VTABLE_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "<init>", (intptr_t) init_java_util_EnumMap_java_lang_Class, 0, "(Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_EnumMap_java_util_EnumMap, 0, "(Ljava/util/EnumMap;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_EnumMap_java_util_Map, 0, "(Ljava/util/Map;)V", 1 },
	{ "size", (intptr_t) M_java_util_EnumMap_size_R_int, VTABLE_java_util_EnumMap_size_R_int, "()I", 1 },
	{ "containsValue", (intptr_t) M_java_util_EnumMap_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsKey", (intptr_t) M_java_util_EnumMap_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsMapping", (intptr_t) M_java_util_EnumMap_containsMapping_java_lang_Object_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap_containsMapping_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 2 },
	{ "get", (intptr_t) M_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "put", (intptr_t) M_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object, VTABLE_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Enum;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_EnumMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_EnumMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "removeMapping", (intptr_t) M_java_util_EnumMap_removeMapping_java_lang_Object_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap_removeMapping_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 2 },
	{ "isValidKey", (intptr_t) M_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 2 },
	{ "putAll", (intptr_t) M_java_util_EnumMap_putAll_java_util_Map, VTABLE_java_util_EnumMap_putAll_java_util_Map, "(Ljava/util/Map;)V", 1 },
	{ "clear", (intptr_t) M_java_util_EnumMap_clear, VTABLE_java_util_EnumMap_clear, "()V", 1 },
	{ "keySet", (intptr_t) M_java_util_EnumMap_keySet_R_java_util_Set, VTABLE_java_util_EnumMap_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "values", (intptr_t) M_java_util_EnumMap_values_R_java_util_Collection, VTABLE_java_util_EnumMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "entrySet", (intptr_t) M_java_util_EnumMap_entrySet_R_java_util_Set, VTABLE_java_util_EnumMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "equals", (intptr_t) M_java_util_EnumMap_equals_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equals", (intptr_t) M_java_util_EnumMap_equals_java_util_EnumMap_R_boolean, VTABLE_java_util_EnumMap_equals_java_util_EnumMap_R_boolean, "(Ljava/util/EnumMap;)Z", 2 },
	{ "hashCode", (intptr_t) M_java_util_EnumMap_hashCode_R_int, VTABLE_java_util_EnumMap_hashCode_R_int, "()I", 1 },
	{ "entryHashCode", (intptr_t) M_java_util_EnumMap_entryHashCode_int_R_int, VTABLE_java_util_EnumMap_entryHashCode_int_R_int, "(I)I", 2 },
	{ "clone", (intptr_t) M_java_util_EnumMap_clone_R_java_util_EnumMap, VTABLE_java_util_EnumMap_clone_R_java_util_EnumMap, "()Ljava/util/EnumMap;", 1 },
	{ "typeCheck", (intptr_t) M_java_util_EnumMap_typeCheck_java_lang_Enum, VTABLE_java_util_EnumMap_typeCheck_java_lang_Enum, "(Ljava/lang/Enum;)V", 2 },
	{ "getKeyUniverse", (intptr_t) SM_java_util_EnumMap_getKeyUniverse_java_lang_Class_R_Array1_java_lang_Enum, 0, "(Ljava/lang/Class;)[Ljava/lang/Enum;", 10 },
	{ "put", (intptr_t) M_java_util_EnumMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_EnumMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 4161 },
	{ "clone", (intptr_t) M_java_util_EnumMap_clone_R_java_lang_Object, VTABLE_java_util_EnumMap_clone_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "access$200", (intptr_t) SM_java_util_EnumMap_access$200_java_util_EnumMap_R_int, 0, "(Ljava/util/EnumMap;)I", 4104 },
	{ "access$500", (intptr_t) SM_java_util_EnumMap_access$500_java_util_EnumMap_java_lang_Object_R_java_lang_Object, 0, "(Ljava/util/EnumMap;Ljava/lang/Object;)Ljava/lang/Object;", 4104 },
	{ "access$600", (intptr_t) SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object, 0, "(Ljava/util/EnumMap;)[Ljava/lang/Object;", 4104 },
	{ "access$210", (intptr_t) SM_java_util_EnumMap_access$210_java_util_EnumMap_R_int, 0, "(Ljava/util/EnumMap;)I", 4104 },
	{ "access$900", (intptr_t) SM_java_util_EnumMap_access$900_java_util_EnumMap_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/util/EnumMap;Ljava/lang/Object;Ljava/lang/Object;)Z", 4104 },
	{ "access$1000", (intptr_t) SM_java_util_EnumMap_access$1000_java_util_EnumMap_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/util/EnumMap;Ljava/lang/Object;Ljava/lang/Object;)Z", 4104 },
	{ "access$1100", (intptr_t) SM_java_util_EnumMap_access$1100_java_util_EnumMap_R_Array1_java_lang_Enum, 0, "(Ljava/util/EnumMap;)[Ljava/lang/Enum;", 4104 },
	{ "access$1200", (intptr_t) SM_java_util_EnumMap_access$1200_java_util_EnumMap_java_lang_Object_R_java_lang_Object, 0, "(Ljava/util/EnumMap;Ljava/lang/Object;)Ljava/lang/Object;", 4104 },
	{ "access$1600", (intptr_t) SM_java_util_EnumMap_access$1600_java_util_EnumMap_int_R_int, 0, "(Ljava/util/EnumMap;I)I", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_util_EnumMap, 0, "()V", 8 },
};

Class class_java_util_EnumMap{
		.nativeName = (intptr_t) "java/util/EnumMap",
		.parentClass = (intptr_t) &class_java_util_AbstractMap,
		.size = sizeof(java_util_EnumMap),
		.classVtable = (intptr_t) vtable_java_util_EnumMap,
		.staticInitializer = (intptr_t) clinit_java_util_EnumMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_EnumMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 7,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_EnumMap = registerClass(&class_java_util_EnumMap);

}
