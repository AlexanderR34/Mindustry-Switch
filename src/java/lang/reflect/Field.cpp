#include "java/lang/reflect/Field.h"
#include "java/lang/Integer.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Modifier.h"
#include "java/lang/Byte.h"
#include "java/lang/Boolean.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/MalformedParameterizedTypeException.h"
#include "java/util/ArrayList.h"
#include "java/lang/Float.h"
#include "java/lang/reflect/Field_ParameterizedTypeImpl.h"
#include "java/lang/Long.h"
#include "java/lang/reflect/Type.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Short.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/reflect/Field_GenericArrayTypeImpl.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/Double.h"

extern "C" {


void mark_java_lang_reflect_Field(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_Field *) object;
	if (self->F_declaringClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_declaringClass)->clazz)->markFunction)((jobject) self->F_declaringClass, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_signature)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_signature)->clazz)->markFunction)((jobject) self->F_signature, mark, depth + 1);
	if (self->F_genericType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_genericType)->clazz)->markFunction)((jobject) self->F_genericType, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_annotations)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_annotations)->clazz)->markFunction)((jobject) self->F_annotations, mark, depth + 1);
}

void clinit_java_lang_reflect_Field(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_reflect_Field_long_java_lang_Class_java_lang_Class_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jlong param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Field(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	frame[4].o = param2;
	frame[5].o = param3;
	frame[6].o = param4;
	frame[7].i = param5;
	{
	LINE_NUMBER(62);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_annotation_Annotation, (jint(0)));
	((java_lang_reflect_Field *) NULL_CHECK(sp[0].o))->F_annotations = (jref) sp[1].o;
	LINE_NUMBER(63);
	((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_offset = (frame[1].l);
	LINE_NUMBER(64);
	((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_declaringClass = (jref) (frame[3].o);
	LINE_NUMBER(65);
	((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[4].o);
	LINE_NUMBER(66);
	((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_signature = (jref) (frame[5].o);
	LINE_NUMBER(67);
	((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[6].o);
	LINE_NUMBER(68);
	((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_modifiers = (frame[7].i);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field_parseSignature_java_lang_String_R_java_lang_reflect_Type(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:parseSignature", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[1].o), (46), (36));
	frame[1].o = sp[0].o;
	LINE_NUMBER(73);
	frame[2].i = (jint(0));
	LINE_NUMBER(74);
	frame[3].i = (jint(0));
	LINE_NUMBER(75);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8";"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = temp0 - (jint(2));
	sp[0].i = temp1;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = temp0 - (jint(1));
	sp[0].i = temp1;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 == (43)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (45)) goto label_8;
	}
label_7:;
	LINE_NUMBER(77);
	INST_IINC(2, 1);
label_8:;
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	if (temp0 != (91)) goto label_9;
	}
	{
	LINE_NUMBER(79);
	INST_IINC(3, 1);
	LINE_NUMBER(80);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	if (temp0 == (42)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	if (temp0 != (84)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(83);
	if ((frame[3].i) <= 0) goto label_14;
	}
	{
	clinit_java_lang_reflect_Field$GenericArrayTypeImpl(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_reflect_Field$GenericArrayTypeImpl);
	init_java_lang_reflect_Field$GenericArrayTypeImpl_java_lang_reflect_Type(ctx, sp[0].o, (((jobject) &class_java_lang_Object)));
	sp += 1;
	goto label_15;
	}
label_14:;
	(sp++)->o = ((jobject) &class_java_lang_Object);
label_15:;
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(84);
	INST_IINC(2, 1);
	frame[5].i = (frame[2].i);
	LINE_NUMBER(85);
	frame[6].i = (jint(-1));
	LINE_NUMBER(86);
	frame[7].i = (jint(0));
	LINE_NUMBER(87);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(88);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(89);
	if ((frame[2].i) > (frame[4].i)) goto label_21;
	}
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	if (temp0 != (60)) goto label_23;
	}
	{
	LINE_NUMBER(91);
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(92);
	frame[6].i = (frame[2].i);
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	if (temp0 != (62)) goto label_25;
	}
	{
	LINE_NUMBER(94);
	INST_IINC(7, -1);
	if ((frame[7].i) != 0) goto label_25;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[9].o), (frame[1].o), (frame[5].i), (frame[6].i));
	LINE_NUMBER(96);
	frame[5].i = ((frame[2].i) + (jint(1)));
	LINE_NUMBER(97);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(98);
	frame[11].i = ((frame[6].i) + (jint(1)));
	frame[12].i = (jint(0));
	frame[13].i = (frame[11].i);
	}
label_34:;
	{
	if ((frame[11].i) >= (frame[2].i)) goto label_35;
	}
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[11].i));
	if (temp0 != (60)) goto label_37;
	}
	{
	LINE_NUMBER(100);
	INST_IINC(12, 1);
	goto label_39;
	}
label_37:;
	{
	LINE_NUMBER(101);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[11].i));
	if (temp0 != (62)) goto label_40;
	}
	{
	LINE_NUMBER(102);
	INST_IINC(12, -1);
	goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[11].i));
	if (temp0 != (59)) goto label_39;
	}
	INST_ILOAD(12);
	if ((--sp)->i != 0) goto label_39;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[13].i), ((frame[11].i) + (jint(1))));
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	frame[13].i = ((frame[11].i) + (jint(1)));
	}
label_39:;
	{
	LINE_NUMBER(98);
	INST_IINC(11, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	sp[0].o = (jobject)((func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[11].o = (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[0].o));
	LINE_NUMBER(109);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_reflect_Type, (((jarray) nullCheck(ctx, (frame[11].o)))->length));
	frame[12].o = sp[0].o;
	LINE_NUMBER(110);
	frame[13].i = (jint(0));
	}
label_46:;
	{
	if ((frame[13].i) >= (((jarray) nullCheck(ctx, (frame[11].o)))->length)) goto label_47;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = frame[12].o;
	jint temp0 = frame[13].i;
	sp[1].o = (jobject)M_java_lang_reflect_Field_parseSignature_java_lang_String_R_java_lang_reflect_Type(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (frame[13].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(110);
	INST_IINC(13, 1);
	goto label_46;
	}
label_47:;
	{
	LINE_NUMBER(112);
	clinit_java_lang_reflect_Field$ParameterizedTypeImpl(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_reflect_Field$ParameterizedTypeImpl);
	sp[1].o = frame[12].o;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[9].o));
	sp[2].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, sp[2].o);
	init_java_lang_reflect_Field$ParameterizedTypeImpl_Array1_java_lang_reflect_Type_java_lang_reflect_Type_java_lang_reflect_Type(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[8].o));
	frame[8].o = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(89);
	INST_IINC(2, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(116);
	if ((frame[5].i) > (frame[4].i)) goto label_50;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[9].o), (frame[1].o), (frame[5].i), ((frame[4].i) + (jint(1))));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[9].o));
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_50:;
	{
	LINE_NUMBER(120);
	if ((frame[3].i) <= 0) goto label_53;
	}
	{
	clinit_java_lang_reflect_Field$GenericArrayTypeImpl(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_reflect_Field$GenericArrayTypeImpl);
	init_java_lang_reflect_Field$GenericArrayTypeImpl_java_lang_reflect_Type(ctx, sp[0].o, (frame[8].o));
	sp += 1;
	goto label_54;
	}
label_53:;
	INST_ALOAD(8);
label_54:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getDeclaringClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_declaringClass;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Field_isAccessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:isAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Field_setAccessible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:setAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_lang_reflect_Field_getModifiers_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getModifiers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return ((jint)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_modifiers);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Field_isEnumConstant_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:isEnumConstant", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	if ((((jint)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_modifiers) & (16384)) == 0) goto label_1;
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

jbool M_java_lang_reflect_Field_isStatic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:isStatic", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	if ((((jint)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_modifiers) & (8)) == 0) goto label_1;
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

jbool M_java_lang_reflect_Field_isSynthetic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:isSynthetic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isSynthetic_int_R_boolean(ctx, ((jint)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_modifiers));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field_getType_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getGenericType", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_genericType;
	if (sp[0].o != nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_signature;
	sp += 1;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_signature;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_type;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_signature;
	sp[0].o = (jobject)M_java_lang_reflect_Field_parseSignature_java_lang_String_R_java_lang_reflect_Type(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_8:;
	sp -= 2;
	((java_lang_reflect_Field *) NULL_CHECK(sp[0].o))->F_genericType = (jref) sp[1].o;
	popExceptionFrame(frameRef);
	LINE_NUMBER(165);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(163);
	frame[1].o = sp[0].o;
	LINE_NUMBER(164);
	clinit_java_lang_reflect_MalformedParameterizedTypeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_reflect_MalformedParameterizedTypeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Failed to find class: "_j))));
	sp[2].o = (jobject)((func_java_lang_ClassNotFoundException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_ClassNotFoundException_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_reflect_MalformedParameterizedTypeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_genericType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbyte M_java_lang_reflect_Field_getByte_java_lang_Object_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getByte", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Byte_byteValue_R_byte) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Byte, sp[0].o)))->vtable)[VTABLE_java_lang_Byte_byteValue_R_byte])(ctx, (checkCast(ctx, &class_java_lang_Byte, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jshort M_java_lang_reflect_Field_getShort_java_lang_Object_R_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getShort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Short_shortValue_R_short) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Short, sp[0].o)))->vtable)[VTABLE_java_lang_Short_shortValue_R_short])(ctx, (checkCast(ctx, &class_java_lang_Short, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar M_java_lang_reflect_Field_getChar_java_lang_Object_R_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Character_charValue_R_char) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Character, sp[0].o)))->vtable)[VTABLE_java_lang_Character_charValue_R_char])(ctx, (checkCast(ctx, &class_java_lang_Character, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_reflect_Field_getInt_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_lang_reflect_Field_getLong_java_lang_Object_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getLong", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	jlong temp0 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Long, sp[0].o)))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (checkCast(ctx, &class_java_lang_Long, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_java_lang_reflect_Field_getFloat_java_lang_Object_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getFloat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_java_lang_reflect_Field_getDouble_java_lang_Object_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getDouble", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	jdouble temp0 = (jdouble)((func_java_lang_Double_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Double, sp[0].o)))->vtable)[VTABLE_java_lang_Double_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Double, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Field_getBoolean_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getBoolean", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Field_setByte_java_lang_Object_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:setByte", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(ctx, (frame[2].i));
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Field_setShort_java_lang_Object_short(jcontext ctx, jobject self, jobject param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:setShort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, (frame[2].i));
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Field_setChar_java_lang_Object_char(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:setChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (frame[2].i));
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Field_setInt_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:setInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Field_setLong_java_lang_Object_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:setLong", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[2].l));
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Field_setFloat_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:setFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (frame[2].f));
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Field_setDouble_java_lang_Object_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:setDouble", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (frame[2].d));
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Field_setBoolean_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:setBoolean", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[2].i));
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getDeclaredAnnotations", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_annotations;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:isAnnotationPresent", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_annotations;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(243);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[5].o));
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(242);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field_getAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getAnnotations", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_annotations;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_annotation_Annotation, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field:getAnnotation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((java_lang_reflect_Field *) NULL_CHECK((frame[0].o)))->F_annotations;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(254);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, (frame[5].o)))(ctx, (frame[5].o));
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_4:;
	{
	LINE_NUMBER(253);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_Field[] {
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
	(void *) M_java_lang_reflect_Field_parseSignature_java_lang_String_R_java_lang_reflect_Type,
	(void *) M_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class,
	(void *) M_java_lang_reflect_Field_getName_R_java_lang_String,
	(void *) M_java_lang_reflect_Field_isAccessible_R_boolean,
	(void *) M_java_lang_reflect_Field_setAccessible_boolean,
	(void *) M_java_lang_reflect_Field_getModifiers_R_int,
	(void *) M_java_lang_reflect_Field_isEnumConstant_R_boolean,
	(void *) M_java_lang_reflect_Field_isStatic_R_boolean,
	(void *) M_java_lang_reflect_Field_isSynthetic_R_boolean,
	(void *) M_java_lang_reflect_Field_getType_R_java_lang_Class,
	(void *) M_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type,
	(void *) M_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object,
	(void *) M_java_lang_reflect_Field_getByte_java_lang_Object_R_byte,
	(void *) M_java_lang_reflect_Field_getShort_java_lang_Object_R_short,
	(void *) M_java_lang_reflect_Field_getChar_java_lang_Object_R_char,
	(void *) M_java_lang_reflect_Field_getInt_java_lang_Object_R_int,
	(void *) M_java_lang_reflect_Field_getLong_java_lang_Object_R_long,
	(void *) M_java_lang_reflect_Field_getFloat_java_lang_Object_R_float,
	(void *) M_java_lang_reflect_Field_getDouble_java_lang_Object_R_double,
	(void *) M_java_lang_reflect_Field_getBoolean_java_lang_Object_R_boolean,
	(void *) M_java_lang_reflect_Field_setByte_java_lang_Object_byte,
	(void *) M_java_lang_reflect_Field_setShort_java_lang_Object_short,
	(void *) M_java_lang_reflect_Field_setChar_java_lang_Object_char,
	(void *) M_java_lang_reflect_Field_setInt_java_lang_Object_int,
	(void *) M_java_lang_reflect_Field_setLong_java_lang_Object_long,
	(void *) M_java_lang_reflect_Field_setFloat_java_lang_Object_float,
	(void *) M_java_lang_reflect_Field_setDouble_java_lang_Object_double,
	(void *) M_java_lang_reflect_Field_setBoolean_java_lang_Object_boolean,
	(void *) M_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation,
	(void *) M_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean,
	(void *) M_java_lang_reflect_Field_getAnnotations_R_Array1_java_lang_annotation_Annotation,
	(void *) M_java_lang_reflect_Field_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation,
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
	{ "parseSignature", "(Ljava/lang/String;)Ljava/lang/reflect/Type;" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "isAccessible", "()Z" },
	{ "setAccessible", "(Z)V" },
	{ "getModifiers", "()I" },
	{ "isEnumConstant", "()Z" },
	{ "isStatic", "()Z" },
	{ "isSynthetic", "()Z" },
	{ "getType", "()Ljava/lang/Class;" },
	{ "getGenericType", "()Ljava/lang/reflect/Type;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "set", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "getByte", "(Ljava/lang/Object;)B" },
	{ "getShort", "(Ljava/lang/Object;)S" },
	{ "getChar", "(Ljava/lang/Object;)C" },
	{ "getInt", "(Ljava/lang/Object;)I" },
	{ "getLong", "(Ljava/lang/Object;)J" },
	{ "getFloat", "(Ljava/lang/Object;)F" },
	{ "getDouble", "(Ljava/lang/Object;)D" },
	{ "getBoolean", "(Ljava/lang/Object;)Z" },
	{ "setByte", "(Ljava/lang/Object;B)V" },
	{ "setShort", "(Ljava/lang/Object;S)V" },
	{ "setChar", "(Ljava/lang/Object;C)V" },
	{ "setInt", "(Ljava/lang/Object;I)V" },
	{ "setLong", "(Ljava/lang/Object;J)V" },
	{ "setFloat", "(Ljava/lang/Object;F)V" },
	{ "setDouble", "(Ljava/lang/Object;D)V" },
	{ "setBoolean", "(Ljava/lang/Object;Z)V" },
	{ "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;" },
	{ "isAnnotationPresent", "(Ljava/lang/Class;)Z" },
	{ "getAnnotations", "()[Ljava/lang/annotation/Annotation;" },
	{ "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;" },
};

static jclass innerClasses[] {
	&class_java_lang_reflect_Field$GenericArrayTypeImpl,
	&class_java_lang_reflect_Field$ParameterizedTypeImpl,
};

static FieldMetadata fields[] {
	{ "offset", &class_long, offsetof(java_lang_reflect_Field, F_offset), "J", 18 },
	{ "declaringClass", &class_java_lang_Class, offsetof(java_lang_reflect_Field, F_declaringClass), "Ljava/lang/Class;", 18 },
	{ "type", &class_java_lang_Class, offsetof(java_lang_reflect_Field, F_type), "Ljava/lang/Class;", 18 },
	{ "signature", &class_java_lang_String, offsetof(java_lang_reflect_Field, F_signature), "Ljava/lang/String;", 2 },
	{ "genericType", &class_java_lang_reflect_Type, offsetof(java_lang_reflect_Field, F_genericType), "Ljava/lang/reflect/Type;", 2 },
	{ "name", &class_java_lang_String, offsetof(java_lang_reflect_Field, F_name), "Ljava/lang/String;", 18 },
	{ "modifiers", &class_int, offsetof(java_lang_reflect_Field, F_modifiers), "I", 18 },
	{ "annotations", getArrayClass(&class_java_lang_annotation_Annotation, 1), offsetof(java_lang_reflect_Field, F_annotations), "[Ljava/lang/annotation/Annotation;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_reflect_Field_long_java_lang_Class_java_lang_Class_java_lang_String_java_lang_String_int, 0, "(JLjava/lang/Class;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;I)V", 2 },
	{ "parseSignature", (intptr_t) M_java_lang_reflect_Field_parseSignature_java_lang_String_R_java_lang_reflect_Type, VTABLE_java_lang_reflect_Field_parseSignature_java_lang_String_R_java_lang_reflect_Type, "(Ljava/lang/String;)Ljava/lang/reflect/Type;", 2 },
	{ "getDeclaringClass", (intptr_t) M_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class, VTABLE_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getName", (intptr_t) M_java_lang_reflect_Field_getName_R_java_lang_String, VTABLE_java_lang_reflect_Field_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isAccessible", (intptr_t) M_java_lang_reflect_Field_isAccessible_R_boolean, VTABLE_java_lang_reflect_Field_isAccessible_R_boolean, "()Z", 1 },
	{ "setAccessible", (intptr_t) M_java_lang_reflect_Field_setAccessible_boolean, VTABLE_java_lang_reflect_Field_setAccessible_boolean, "(Z)V", 1 },
	{ "getModifiers", (intptr_t) M_java_lang_reflect_Field_getModifiers_R_int, VTABLE_java_lang_reflect_Field_getModifiers_R_int, "()I", 1 },
	{ "isEnumConstant", (intptr_t) M_java_lang_reflect_Field_isEnumConstant_R_boolean, VTABLE_java_lang_reflect_Field_isEnumConstant_R_boolean, "()Z", 1 },
	{ "isStatic", (intptr_t) M_java_lang_reflect_Field_isStatic_R_boolean, VTABLE_java_lang_reflect_Field_isStatic_R_boolean, "()Z", 1 },
	{ "isSynthetic", (intptr_t) M_java_lang_reflect_Field_isSynthetic_R_boolean, VTABLE_java_lang_reflect_Field_isSynthetic_R_boolean, "()Z", 1 },
	{ "getType", (intptr_t) M_java_lang_reflect_Field_getType_R_java_lang_Class, VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getGenericType", (intptr_t) M_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type, VTABLE_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type, "()Ljava/lang/reflect/Type;", 1 },
	{ "get", (intptr_t) M_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object, VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 257 },
	{ "set", (intptr_t) M_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object, VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 257 },
	{ "getByte", (intptr_t) M_java_lang_reflect_Field_getByte_java_lang_Object_R_byte, VTABLE_java_lang_reflect_Field_getByte_java_lang_Object_R_byte, "(Ljava/lang/Object;)B", 1 },
	{ "getShort", (intptr_t) M_java_lang_reflect_Field_getShort_java_lang_Object_R_short, VTABLE_java_lang_reflect_Field_getShort_java_lang_Object_R_short, "(Ljava/lang/Object;)S", 1 },
	{ "getChar", (intptr_t) M_java_lang_reflect_Field_getChar_java_lang_Object_R_char, VTABLE_java_lang_reflect_Field_getChar_java_lang_Object_R_char, "(Ljava/lang/Object;)C", 1 },
	{ "getInt", (intptr_t) M_java_lang_reflect_Field_getInt_java_lang_Object_R_int, VTABLE_java_lang_reflect_Field_getInt_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "getLong", (intptr_t) M_java_lang_reflect_Field_getLong_java_lang_Object_R_long, VTABLE_java_lang_reflect_Field_getLong_java_lang_Object_R_long, "(Ljava/lang/Object;)J", 1 },
	{ "getFloat", (intptr_t) M_java_lang_reflect_Field_getFloat_java_lang_Object_R_float, VTABLE_java_lang_reflect_Field_getFloat_java_lang_Object_R_float, "(Ljava/lang/Object;)F", 1 },
	{ "getDouble", (intptr_t) M_java_lang_reflect_Field_getDouble_java_lang_Object_R_double, VTABLE_java_lang_reflect_Field_getDouble_java_lang_Object_R_double, "(Ljava/lang/Object;)D", 1 },
	{ "getBoolean", (intptr_t) M_java_lang_reflect_Field_getBoolean_java_lang_Object_R_boolean, VTABLE_java_lang_reflect_Field_getBoolean_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "setByte", (intptr_t) M_java_lang_reflect_Field_setByte_java_lang_Object_byte, VTABLE_java_lang_reflect_Field_setByte_java_lang_Object_byte, "(Ljava/lang/Object;B)V", 1 },
	{ "setShort", (intptr_t) M_java_lang_reflect_Field_setShort_java_lang_Object_short, VTABLE_java_lang_reflect_Field_setShort_java_lang_Object_short, "(Ljava/lang/Object;S)V", 1 },
	{ "setChar", (intptr_t) M_java_lang_reflect_Field_setChar_java_lang_Object_char, VTABLE_java_lang_reflect_Field_setChar_java_lang_Object_char, "(Ljava/lang/Object;C)V", 1 },
	{ "setInt", (intptr_t) M_java_lang_reflect_Field_setInt_java_lang_Object_int, VTABLE_java_lang_reflect_Field_setInt_java_lang_Object_int, "(Ljava/lang/Object;I)V", 1 },
	{ "setLong", (intptr_t) M_java_lang_reflect_Field_setLong_java_lang_Object_long, VTABLE_java_lang_reflect_Field_setLong_java_lang_Object_long, "(Ljava/lang/Object;J)V", 1 },
	{ "setFloat", (intptr_t) M_java_lang_reflect_Field_setFloat_java_lang_Object_float, VTABLE_java_lang_reflect_Field_setFloat_java_lang_Object_float, "(Ljava/lang/Object;F)V", 1 },
	{ "setDouble", (intptr_t) M_java_lang_reflect_Field_setDouble_java_lang_Object_double, VTABLE_java_lang_reflect_Field_setDouble_java_lang_Object_double, "(Ljava/lang/Object;D)V", 1 },
	{ "setBoolean", (intptr_t) M_java_lang_reflect_Field_setBoolean_java_lang_Object_boolean, VTABLE_java_lang_reflect_Field_setBoolean_java_lang_Object_boolean, "(Ljava/lang/Object;Z)V", 1 },
	{ "getDeclaredAnnotations", (intptr_t) M_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, VTABLE_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, "()[Ljava/lang/annotation/Annotation;", 1 },
	{ "isAnnotationPresent", (intptr_t) M_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean, VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean, "(Ljava/lang/Class;)Z", 1 },
	{ "getAnnotations", (intptr_t) M_java_lang_reflect_Field_getAnnotations_R_Array1_java_lang_annotation_Annotation, VTABLE_java_lang_reflect_Field_getAnnotations_R_Array1_java_lang_annotation_Annotation, "()[Ljava/lang/annotation/Annotation;", 1 },
	{ "getAnnotation", (intptr_t) M_java_lang_reflect_Field_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, VTABLE_java_lang_reflect_Field_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", 1 },
};

Class class_java_lang_reflect_Field{
		.nativeName = (intptr_t) "java/lang/reflect/Field",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_Field),
		.classVtable = (intptr_t) vtable_java_lang_reflect_Field,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_Field,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_Field,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_Field = registerClass(&class_java_lang_reflect_Field);

}
