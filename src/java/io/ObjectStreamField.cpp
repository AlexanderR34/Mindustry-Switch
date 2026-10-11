#include "java/io/ObjectStreamField.h"
#include "java/lang/InternalError.h"
#include "java/lang/Integer.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Byte.h"
#include "java/lang/Comparable.h"
#include "java/lang/Boolean.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Void.h"
#include "java/lang/Float.h"
#include "java/lang/Long.h"
#include "java/lang/Short.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/io/ObjectStreamField.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {


void mark_java_io_ObjectStreamField(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_ObjectStreamField *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_signature)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_signature)->clazz)->markFunction)((jobject) self->F_signature, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_field)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field)->clazz)->markFunction)((jobject) self->F_field, mark, depth + 1);
}

void clinit_java_io_ObjectStreamField(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_ObjectStreamField(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(64);
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_ObjectStreamField_java_lang_String_java_lang_Class_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_ObjectStreamField(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(84);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(54);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(85);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(86);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(88);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(89);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(90);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_unshared = (frame[3].i);
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_io_ObjectStreamField_getClassSignature_java_lang_Class_R_java_lang_String(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_String_intern_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_intern_R_java_lang_String])(ctx, sp[1].o);
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_signature = (jref) sp[1].o;
	LINE_NUMBER(92);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_field = (jref) (jobject(nullptr));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_ObjectStreamField_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_ObjectStreamField(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(99);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(54);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(100);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(101);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(103);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_intern_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_intern_R_java_lang_String])(ctx, (frame[2].o));
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_signature = (jref) sp[1].o;
	LINE_NUMBER(105);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_unshared = (frame[3].i);
	LINE_NUMBER(106);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_field = (jref) (jobject(nullptr));
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (jint(0)));
	switch(temp0) {
		case 66: goto label_9;
		case 67: goto label_10;
		case 68: goto label_11;
		case 69: goto label_12;
		case 70: goto label_13;
		case 71: goto label_12;
		case 72: goto label_12;
		case 73: goto label_14;
		case 74: goto label_15;
		case 75: goto label_12;
		case 76: goto label_16;
		case 77: goto label_12;
		case 78: goto label_12;
		case 79: goto label_12;
		case 80: goto label_12;
		case 81: goto label_12;
		case 82: goto label_12;
		case 83: goto label_17;
		case 84: goto label_12;
		case 85: goto label_12;
		case 86: goto label_12;
		case 87: goto label_12;
		case 88: goto label_12;
		case 89: goto label_12;
		case 90: goto label_18;
		case 91: goto label_16;
		default: goto label_12;
	}
	}
label_18:;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_19;
	}
label_9:;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_java_lang_Byte(ctx);
	sp[1].o = (jobject)SF_java_lang_Byte_TYPE;
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_19;
	}
label_10:;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	clinit_java_lang_Short(ctx);
	sp[1].o = (jobject)SF_java_lang_Short_TYPE;
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_19;
	}
label_14:;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_19;
	}
label_13:;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	clinit_java_lang_Float(ctx);
	sp[1].o = (jobject)SF_java_lang_Float_TYPE;
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_19;
	}
label_11:;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(118);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_type = (jref) (((jobject) &class_java_lang_Object));
	goto label_19;
	}
label_12:;
	{
	LINE_NUMBER(119);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"illegal signature"_j))));
	throwException(ctx, sp[0].o);	}
label_19:;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_io_ObjectStreamField_java_lang_reflect_Field_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_ObjectStreamField(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(131);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(54);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(132);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_field = (jref) (frame[1].o);
	LINE_NUMBER(133);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_unshared = (frame[2].i);
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[1].o));
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) != 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
label_7:;
	INST_ALOAD(4);
	goto label_9;
label_8:;
	(sp++)->o = ((jobject) &class_java_lang_Object);
label_9:;
	{
	sp -= 2;
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_io_ObjectStreamField_getClassSignature_java_lang_Class_R_java_lang_String(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_String_intern_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_intern_R_java_lang_String])(ctx, sp[1].o);
	((java_io_ObjectStreamField *) NULL_CHECK(sp[0].o))->F_signature = (jref) sp[1].o;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_io_ObjectStreamField_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_ObjectStreamField_getType_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_java_io_ObjectStreamField_getTypeCode_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:getTypeCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_signature;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_io_ObjectStreamField_getTypeString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:getTypeString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	jint temp0 = (jint)((func_java_io_ObjectStreamField_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_ObjectStreamField_isPrimitive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((java_io_ObjectStreamField *) NULL_CHECK(sp[-1].o))->F_signature;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_java_io_ObjectStreamField_getOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:getOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return ((jint)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_offset);
	}

	popStackFrame(ctx);
}

void M_java_io_ObjectStreamField_setOffset_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:setOffset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(215);
	((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_offset = (frame[1].i);
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_io_ObjectStreamField_isPrimitive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:isPrimitive", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_signature;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	frame[1].i = temp0;
	LINE_NUMBER(226);
	if ((frame[1].i) == (76)) goto label_2;
	}
	{
	if ((frame[1].i) == (91)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_io_ObjectStreamField_isUnshared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:isUnshared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return ((jint)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_unshared);
	}

	popStackFrame(ctx);
}

jint M_java_io_ObjectStreamField_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:compareTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(249);
	frame[2].o = (checkCast(ctx, &class_java_io_ObjectStreamField, (frame[1].o)));
	LINE_NUMBER(250);
	jint temp0 = (jint)((func_java_io_ObjectStreamField_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_ObjectStreamField_isPrimitive_R_boolean])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(251);
	jint temp1 = frame[3].i;
	jint temp2 = (jint)((func_java_io_ObjectStreamField_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ObjectStreamField_isPrimitive_R_boolean])(ctx, (frame[2].o));
	if (temp1 == temp2) goto label_3;
	}
	{
	LINE_NUMBER(252);
	if ((frame[3].i) == 0) goto label_5;
	}
	INST_ICONST(-1);
	goto label_6;
label_5:;
	INST_ICONST(1);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((java_io_ObjectStreamField *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_io_ObjectStreamField_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_signature;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (32));
	sp[1].o = (jobject)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_ObjectStreamField_getField_R_java_lang_reflect_Field(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:getField", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_field;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_ObjectStreamField_getSignature_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:getSignature", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((java_io_ObjectStreamField *) NULL_CHECK((frame[0].o)))->F_signature;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_io_ObjectStreamField_getClassSignature_java_lang_Class_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectStreamField:getClassSignature", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_ObjectStreamField(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(284);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(285);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (91));
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (73));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	clinit_java_lang_Byte(ctx);
	sp[1].o = (jobject)SF_java_lang_Byte_TYPE;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (66));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (74));
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	clinit_java_lang_Float(ctx);
	sp[1].o = (jobject)SF_java_lang_Float_TYPE;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (70));
	goto label_9;
	}
label_14:;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (68));
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	clinit_java_lang_Short(ctx);
	sp[1].o = (jobject)SF_java_lang_Short_TYPE;
	if (sp[0].o != sp[1].o) goto label_18;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (83));
	goto label_9;
	}
label_18:;
	{
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o != sp[1].o) goto label_20;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (67));
	goto label_9;
	}
label_20:;
	{
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_22;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (90));
	goto label_9;
	}
label_22:;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (86));
	goto label_9;
	}
label_24:;
	{
	LINE_NUMBER(309);
	clinit_java_lang_InternalError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InternalError);
	init_java_lang_InternalError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(312);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (76));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[2].o, (46), (47));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (59));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_ObjectStreamField[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_io_ObjectStreamField_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_io_ObjectStreamField_compareTo_java_lang_Object_R_int,
	(void *) M_java_io_ObjectStreamField_getName_R_java_lang_String,
	(void *) M_java_io_ObjectStreamField_getType_R_java_lang_Class,
	(void *) M_java_io_ObjectStreamField_getTypeCode_R_char,
	(void *) M_java_io_ObjectStreamField_getTypeString_R_java_lang_String,
	(void *) M_java_io_ObjectStreamField_getOffset_R_int,
	(void *) M_java_io_ObjectStreamField_setOffset_int,
	(void *) M_java_io_ObjectStreamField_isPrimitive_R_boolean,
	(void *) M_java_io_ObjectStreamField_isUnshared_R_boolean,
	(void *) M_java_io_ObjectStreamField_getField_R_java_lang_reflect_Field,
	(void *) M_java_io_ObjectStreamField_getSignature_R_java_lang_String,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getType", "()Ljava/lang/Class;" },
	{ "getTypeCode", "()C" },
	{ "getTypeString", "()Ljava/lang/String;" },
	{ "getOffset", "()I" },
	{ "setOffset", "(I)V" },
	{ "isPrimitive", "()Z" },
	{ "isUnshared", "()Z" },
	{ "getField", "()Ljava/lang/reflect/Field;" },
	{ "getSignature", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(java_io_ObjectStreamField, F_name), "Ljava/lang/String;", 18 },
	{ "signature", &class_java_lang_String, offsetof(java_io_ObjectStreamField, F_signature), "Ljava/lang/String;", 18 },
	{ "type", &class_java_lang_Class, offsetof(java_io_ObjectStreamField, F_type), "Ljava/lang/Class;", 18 },
	{ "unshared", &class_boolean, offsetof(java_io_ObjectStreamField, F_unshared), "Z", 18 },
	{ "field", &class_java_lang_reflect_Field, offsetof(java_io_ObjectStreamField, F_field), "Ljava/lang/reflect/Field;", 18 },
	{ "offset", &class_int, offsetof(java_io_ObjectStreamField, F_offset), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_ObjectStreamField_java_lang_String_java_lang_Class, 0, "(Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_ObjectStreamField_java_lang_String_java_lang_Class_boolean, 0, "(Ljava/lang/String;Ljava/lang/Class;Z)V", 1 },
	{ "<init>", (intptr_t) init_java_io_ObjectStreamField_java_lang_String_java_lang_String_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;Z)V", 0 },
	{ "<init>", (intptr_t) init_java_io_ObjectStreamField_java_lang_reflect_Field_boolean_boolean, 0, "(Ljava/lang/reflect/Field;ZZ)V", 0 },
	{ "getName", (intptr_t) M_java_io_ObjectStreamField_getName_R_java_lang_String, VTABLE_java_io_ObjectStreamField_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getType", (intptr_t) M_java_io_ObjectStreamField_getType_R_java_lang_Class, VTABLE_java_io_ObjectStreamField_getType_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getTypeCode", (intptr_t) M_java_io_ObjectStreamField_getTypeCode_R_char, VTABLE_java_io_ObjectStreamField_getTypeCode_R_char, "()C", 1 },
	{ "getTypeString", (intptr_t) M_java_io_ObjectStreamField_getTypeString_R_java_lang_String, VTABLE_java_io_ObjectStreamField_getTypeString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getOffset", (intptr_t) M_java_io_ObjectStreamField_getOffset_R_int, VTABLE_java_io_ObjectStreamField_getOffset_R_int, "()I", 1 },
	{ "setOffset", (intptr_t) M_java_io_ObjectStreamField_setOffset_int, VTABLE_java_io_ObjectStreamField_setOffset_int, "(I)V", 4 },
	{ "isPrimitive", (intptr_t) M_java_io_ObjectStreamField_isPrimitive_R_boolean, VTABLE_java_io_ObjectStreamField_isPrimitive_R_boolean, "()Z", 1 },
	{ "isUnshared", (intptr_t) M_java_io_ObjectStreamField_isUnshared_R_boolean, VTABLE_java_io_ObjectStreamField_isUnshared_R_boolean, "()Z", 1 },
	{ "compareTo", (intptr_t) M_java_io_ObjectStreamField_compareTo_java_lang_Object_R_int, VTABLE_java_io_ObjectStreamField_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "toString", (intptr_t) M_java_io_ObjectStreamField_toString_R_java_lang_String, VTABLE_java_io_ObjectStreamField_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getField", (intptr_t) M_java_io_ObjectStreamField_getField_R_java_lang_reflect_Field, VTABLE_java_io_ObjectStreamField_getField_R_java_lang_reflect_Field, "()Ljava/lang/reflect/Field;", 0 },
	{ "getSignature", (intptr_t) M_java_io_ObjectStreamField_getSignature_R_java_lang_String, VTABLE_java_io_ObjectStreamField_getSignature_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "getClassSignature", (intptr_t) SM_java_io_ObjectStreamField_getClassSignature_java_lang_Class_R_java_lang_String, 0, "(Ljava/lang/Class;)Ljava/lang/String;", 10 },
};

Class class_java_io_ObjectStreamField{
		.nativeName = (intptr_t) "java/io/ObjectStreamField",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_io_ObjectStreamField),
		.classVtable = (intptr_t) vtable_java_io_ObjectStreamField,
		.staticInitializer = (intptr_t) clinit_java_io_ObjectStreamField,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_ObjectStreamField,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_ObjectStreamField = registerClass(&class_java_io_ObjectStreamField);

}
