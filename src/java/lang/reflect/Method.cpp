#include "java/lang/reflect/Method.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Byte.h"
#include "java/lang/Boolean.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Void.h"
#include "java/util/ArrayList.h"
#include "java/lang/Float.h"
#include "java/lang/ClassFormatError.h"
#include "java/nio/NativeUtils.h"
#include "java/lang/Long.h"
#include "java/lang/Short.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {


void mark_java_lang_reflect_Method(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_Method *) object;
	if (self->F_declaringClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_declaringClass)->clazz)->markFunction)((jobject) self->F_declaringClass, mark, depth + 1);
	if (self->F_desc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_desc)->clazz)->markFunction)((jobject) self->F_desc, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_annotations)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_annotations)->clazz)->markFunction)((jobject) self->F_annotations, mark, depth + 1);
	if (self->F_parameterTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parameterTypes)->clazz)->markFunction)((jobject) self->F_parameterTypes, mark, depth + 1);
	if (self->F_returnType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_returnType)->clazz)->markFunction)((jobject) self->F_returnType, mark, depth + 1);
}

void clinit_java_lang_reflect_Method(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_reflect_Method_long_long_java_lang_Class_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jlong param0, jlong param1, jobject param2, jobject param3, jobject param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Method(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	frame[5].o = param2;
	frame[6].o = param3;
	frame[7].o = param4;
	frame[8].i = param5;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_annotation_Annotation, (jint(0)));
	((java_lang_reflect_Method *) NULL_CHECK(sp[0].o))->F_annotations = (jref) sp[1].o;
	LINE_NUMBER(29);
	((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_address = (frame[1].l);
	LINE_NUMBER(30);
	((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_offset = (frame[3].l);
	LINE_NUMBER(31);
	((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_declaringClass = (jref) (frame[5].o);
	LINE_NUMBER(32);
	((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc = (jref) (frame[6].o);
	LINE_NUMBER(33);
	((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[7].o);
	LINE_NUMBER(34);
	((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_modifiers = (frame[8].i);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Method_ensureSignatureInitialized(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:ensureSignatureInitialized", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_parameterTypes;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_returnType;
	if (sp[0].o == nullptr) goto label_9;
	}
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, sp[0].o, (41));
	frame[1].i = temp0;
	LINE_NUMBER(42);
	if ((frame[1].i) != (jint(-1))) goto label_0;
	}
	{
	LINE_NUMBER(43);
	clinit_java_lang_ClassFormatError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassFormatError);
	init_java_lang_ClassFormatError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid method signature"_j))));
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(46);
	frame[2].i = (jint(0));
	LINE_NUMBER(47);
	frame[3].i = ((frame[1].i) + (jint(1)));
	}
label_14:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (frame[3].i));
	if (temp0 != (91)) goto label_15;
	}
	{
	LINE_NUMBER(49);
	INST_IINC(2, 1);
	LINE_NUMBER(50);
	INST_IINC(3, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (frame[3].i));
	if (temp0 != (76)) goto label_18;
	}
	{
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	jint temp0 = (frame[3].i) + (jint(1));
	sp[1].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	sp += 1;
	goto label_19;
	}
label_18:;
	{
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (frame[3].i));
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) != 0) goto label_21;
	}
	INST_ALOAD(4);
	goto label_22;
label_21:;
	{
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getArrayClass_java_lang_Class_int_R_java_lang_Class(ctx, (frame[4].o), (frame[2].i));
	sp += 1;
	}
label_22:;
	sp -= 2;
	((java_lang_reflect_Method *) NULL_CHECK(sp[0].o))->F_returnType = (jref) sp[1].o;
	popExceptionFrame(frameRef);
	LINE_NUMBER(56);
	goto label_23;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(54);
	frame[2].o = sp[0].o;
	LINE_NUMBER(55);
	clinit_java_lang_ClassFormatError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassFormatError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid method signature: "_j))));
	sp[2].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ClassFormatError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (jint(1)), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(59);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(60);
	frame[4].i = (jint(0));
	}
label_27:;
	{
	LINE_NUMBER(61);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_28;
	}
	{
	LINE_NUMBER(62);
	frame[5].i = (jint(0));
	}
label_30:;
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[4].i));
	if (temp0 != (91)) goto label_31;
	}
	{
	LINE_NUMBER(64);
	INST_IINC(5, 1);
	LINE_NUMBER(65);
	INST_IINC(4, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	switch(temp1) {
		case 66: goto label_34;
		case 67: goto label_35;
		case 68: goto label_36;
		case 69: goto label_37;
		case 70: goto label_38;
		case 71: goto label_37;
		case 72: goto label_37;
		case 73: goto label_39;
		case 74: goto label_40;
		case 75: goto label_37;
		case 76: goto label_41;
		case 77: goto label_37;
		case 78: goto label_37;
		case 79: goto label_37;
		case 80: goto label_37;
		case 81: goto label_37;
		case 82: goto label_37;
		case 83: goto label_42;
		case 84: goto label_37;
		case 85: goto label_37;
		case 86: goto label_43;
		case 87: goto label_37;
		case 88: goto label_37;
		case 89: goto label_37;
		case 90: goto label_44;
		default: goto label_37;
	}
	}
label_41:;
	{
	LINE_NUMBER(70);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[2].o), (59), (frame[4].i));
	frame[7].i = temp0;
	LINE_NUMBER(71);
	if ((frame[7].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(72);
	clinit_java_lang_ClassFormatError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassFormatError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid method signature: "_j))));
	sp[2].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ClassFormatError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (frame[4].i), (frame[7].i));
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(77);
	goto label_47;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(75);
	frame[8].o = sp[0].o;
	LINE_NUMBER(76);
	clinit_java_lang_ClassFormatError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassFormatError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid method signature: "_j))));
	sp[2].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ClassFormatError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_47:;
	{
	LINE_NUMBER(78);
	frame[4].i = ((frame[7].i) + (jint(1)));
	LINE_NUMBER(79);
	goto label_50;
	}
label_34:;
	{
	LINE_NUMBER(82);
	clinit_java_lang_Byte(ctx);
	sp[0].o = (jobject)SF_java_lang_Byte_TYPE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(83);
	goto label_50;
	}
label_35:;
	{
	LINE_NUMBER(85);
	clinit_java_lang_Character(ctx);
	sp[0].o = (jobject)SF_java_lang_Character_TYPE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(86);
	goto label_50;
	}
label_42:;
	{
	LINE_NUMBER(88);
	clinit_java_lang_Short(ctx);
	sp[0].o = (jobject)SF_java_lang_Short_TYPE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(89);
	goto label_50;
	}
label_39:;
	{
	LINE_NUMBER(91);
	clinit_java_lang_Integer(ctx);
	sp[0].o = (jobject)SF_java_lang_Integer_TYPE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(92);
	goto label_50;
	}
label_40:;
	{
	LINE_NUMBER(94);
	clinit_java_lang_Long(ctx);
	sp[0].o = (jobject)SF_java_lang_Long_TYPE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(95);
	goto label_50;
	}
label_38:;
	{
	LINE_NUMBER(97);
	clinit_java_lang_Float(ctx);
	sp[0].o = (jobject)SF_java_lang_Float_TYPE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(98);
	goto label_50;
	}
label_36:;
	{
	LINE_NUMBER(100);
	clinit_java_lang_Double(ctx);
	sp[0].o = (jobject)SF_java_lang_Double_TYPE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(101);
	goto label_50;
	}
label_44:;
	{
	LINE_NUMBER(103);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TYPE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(104);
	goto label_50;
	}
label_43:;
	{
	LINE_NUMBER(106);
	clinit_java_lang_Void(ctx);
	sp[0].o = (jobject)SF_java_lang_Void_TYPE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(107);
	goto label_50;
	}
label_37:;
	{
	LINE_NUMBER(109);
	clinit_java_lang_ClassFormatError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassFormatError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid method signature: "_j))));
	sp[2].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_desc;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ClassFormatError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_50:;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[5].i) != 0) goto label_60;
	}
	INST_ALOAD(6);
	goto label_61;
label_60:;
	{
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getArrayClass_java_lang_Class_int_R_java_lang_Class(ctx, (frame[6].o), (frame[5].i));
	sp += 1;
	}
label_61:;
	{
	sp -= 2;
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[1].o = (jobject)((func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((java_lang_reflect_Method *) NULL_CHECK(sp[0].o))->F_parameterTypes = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Class, 1), sp[1].o));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:getDeclaringClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_declaringClass;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Method_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Method_isAccessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:isAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Method_setAccessible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:setAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(130);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Method_isVarArgs_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:isVarArgs", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	if (((128) & ((jint)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_modifiers)) == 0) goto label_1;
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

jint M_java_lang_reflect_Method_getModifiers_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:getModifiers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return ((jint)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_modifiers);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:getDeclaredAnnotations", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_annotations;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:isAnnotationPresent", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_annotations;
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
	LINE_NUMBER(148);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[5].o));
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(147);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:getAnnotation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_annotations;
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
	LINE_NUMBER(155);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, (frame[5].o)))(ctx, (frame[5].o));
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_4:;
	{
	LINE_NUMBER(154);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:getParameterTypes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	M_java_lang_reflect_Method_ensureSignatureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_parameterTypes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Method_getReturnType_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:getReturnType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	M_java_lang_reflect_Method_ensureSignatureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((java_lang_reflect_Method *) NULL_CHECK((frame[0].o)))->F_returnType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Method_isDefault_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Method:isDefault", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_Method[] {
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
	(void *) M_java_lang_reflect_Method_ensureSignatureInitialized,
	(void *) M_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class,
	(void *) M_java_lang_reflect_Method_getName_R_java_lang_String,
	(void *) M_java_lang_reflect_Method_isAccessible_R_boolean,
	(void *) M_java_lang_reflect_Method_setAccessible_boolean,
	(void *) M_java_lang_reflect_Method_isVarArgs_R_boolean,
	(void *) M_java_lang_reflect_Method_getModifiers_R_int,
	(void *) M_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation,
	(void *) M_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean,
	(void *) M_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation,
	(void *) M_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class,
	(void *) M_java_lang_reflect_Method_getReturnType_R_java_lang_Class,
	(void *) M_java_lang_reflect_Method_isDefault_R_boolean,
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
	{ "ensureSignatureInitialized", "()V" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "isAccessible", "()Z" },
	{ "setAccessible", "(Z)V" },
	{ "isVarArgs", "()Z" },
	{ "getModifiers", "()I" },
	{ "invoke", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;" },
	{ "isAnnotationPresent", "(Ljava/lang/Class;)Z" },
	{ "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;" },
	{ "getParameterTypes", "()[Ljava/lang/Class;" },
	{ "getReturnType", "()Ljava/lang/Class;" },
	{ "isDefault", "()Z" },
};

static FieldMetadata fields[] {
	{ "address", &class_long, offsetof(java_lang_reflect_Method, F_address), "J", 18 },
	{ "offset", &class_long, offsetof(java_lang_reflect_Method, F_offset), "J", 18 },
	{ "declaringClass", &class_java_lang_Class, offsetof(java_lang_reflect_Method, F_declaringClass), "Ljava/lang/Class;", 18 },
	{ "desc", &class_java_lang_String, offsetof(java_lang_reflect_Method, F_desc), "Ljava/lang/String;", 18 },
	{ "name", &class_java_lang_String, offsetof(java_lang_reflect_Method, F_name), "Ljava/lang/String;", 18 },
	{ "modifiers", &class_int, offsetof(java_lang_reflect_Method, F_modifiers), "I", 18 },
	{ "annotations", getArrayClass(&class_java_lang_annotation_Annotation, 1), offsetof(java_lang_reflect_Method, F_annotations), "[Ljava/lang/annotation/Annotation;", 2 },
	{ "parameterTypes", getArrayClass(&class_java_lang_Class, 1), offsetof(java_lang_reflect_Method, F_parameterTypes), "[Ljava/lang/Class;", 2 },
	{ "returnType", &class_java_lang_Class, offsetof(java_lang_reflect_Method, F_returnType), "Ljava/lang/Class;", 2 },
	{ "nativeFunc", &class_long, offsetof(java_lang_reflect_Method, F_nativeFunc), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_reflect_Method_long_long_java_lang_Class_java_lang_String_java_lang_String_int, 0, "(JJLjava/lang/Class;Ljava/lang/String;Ljava/lang/String;I)V", 2 },
	{ "ensureSignatureInitialized", (intptr_t) M_java_lang_reflect_Method_ensureSignatureInitialized, VTABLE_java_lang_reflect_Method_ensureSignatureInitialized, "()V", 2 },
	{ "getDeclaringClass", (intptr_t) M_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class, VTABLE_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getName", (intptr_t) M_java_lang_reflect_Method_getName_R_java_lang_String, VTABLE_java_lang_reflect_Method_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isAccessible", (intptr_t) M_java_lang_reflect_Method_isAccessible_R_boolean, VTABLE_java_lang_reflect_Method_isAccessible_R_boolean, "()Z", 1 },
	{ "setAccessible", (intptr_t) M_java_lang_reflect_Method_setAccessible_boolean, VTABLE_java_lang_reflect_Method_setAccessible_boolean, "(Z)V", 1 },
	{ "isVarArgs", (intptr_t) M_java_lang_reflect_Method_isVarArgs_R_boolean, VTABLE_java_lang_reflect_Method_isVarArgs_R_boolean, "()Z", 1 },
	{ "getModifiers", (intptr_t) M_java_lang_reflect_Method_getModifiers_R_int, VTABLE_java_lang_reflect_Method_getModifiers_R_int, "()I", 1 },
	{ "invoke", (intptr_t) M_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object, VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", 385 },
	{ "getDeclaredAnnotations", (intptr_t) M_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, VTABLE_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, "()[Ljava/lang/annotation/Annotation;", 1 },
	{ "isAnnotationPresent", (intptr_t) M_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean, VTABLE_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean, "(Ljava/lang/Class;)Z", 1 },
	{ "getAnnotation", (intptr_t) M_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, VTABLE_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", 1 },
	{ "getParameterTypes", (intptr_t) M_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class, VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class, "()[Ljava/lang/Class;", 1 },
	{ "getReturnType", (intptr_t) M_java_lang_reflect_Method_getReturnType_R_java_lang_Class, VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "isDefault", (intptr_t) M_java_lang_reflect_Method_isDefault_R_boolean, VTABLE_java_lang_reflect_Method_isDefault_R_boolean, "()Z", 1 },
};

Class class_java_lang_reflect_Method{
		.nativeName = (intptr_t) "java/lang/reflect/Method",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_Method),
		.classVtable = (intptr_t) vtable_java_lang_reflect_Method,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_Method,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_Method,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_Method = registerClass(&class_java_lang_reflect_Method);

}
