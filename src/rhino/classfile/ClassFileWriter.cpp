#include "rhino/classfile/ClassFileWriter.h"
#include "java/lang/StringBuilder.h"
#include "rhino/classfile/ExceptionTableEntry.h"
#include "rhino/classfile/ClassFileWriter_MHandle.h"
#include "rhino/classfile/ClassFileWriter_BootstrapEntry.h"
#include "rhino/classfile/ClassFileWriter_ClassFileFormatException.h"
#include "java/lang/Short.h"
#include "java/io/InputStream.h"
#include "rhino/classfile/ClassFileWriter_StackMapTable.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "rhino/classfile/ClassFileField.h"
#include "rhino/classfile/TypeInfo.h"
#include "java/io/IOException.h"
#include "rhino/classfile/ConstantPool.h"
#include "rhino/classfile/ClassFileMethod.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "rhino/UintMap.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/ObjArray.h"
#include "java/io/OutputStream.h"
#include "java/lang/Object.h"
#include "rhino/classfile/ClassFileWriter.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jshort SF_rhino_classfile_ClassFileWriter_ACC_PUBLIC;
jshort SF_rhino_classfile_ClassFileWriter_ACC_PRIVATE;
jshort SF_rhino_classfile_ClassFileWriter_ACC_PROTECTED;
jshort SF_rhino_classfile_ClassFileWriter_ACC_STATIC;
jshort SF_rhino_classfile_ClassFileWriter_ACC_FINAL;
jshort SF_rhino_classfile_ClassFileWriter_ACC_SUPER;
jshort SF_rhino_classfile_ClassFileWriter_ACC_SYNCHRONIZED;
jshort SF_rhino_classfile_ClassFileWriter_ACC_VOLATILE;
jshort SF_rhino_classfile_ClassFileWriter_ACC_TRANSIENT;
jshort SF_rhino_classfile_ClassFileWriter_ACC_NATIVE;
jshort SF_rhino_classfile_ClassFileWriter_ACC_ABSTRACT;
jint SF_rhino_classfile_ClassFileWriter_SuperBlockStartsSize;
jint SF_rhino_classfile_ClassFileWriter_LineNumberTableSize;
jint SF_rhino_classfile_ClassFileWriter_ExceptionTableSize;
jint SF_rhino_classfile_ClassFileWriter_MajorVersion;
jint SF_rhino_classfile_ClassFileWriter_MinorVersion;
jbool SF_rhino_classfile_ClassFileWriter_GenerateStackMap;
jint SF_rhino_classfile_ClassFileWriter_FileHeaderConstant;
jbool SF_rhino_classfile_ClassFileWriter_DEBUGSTACK;
jbool SF_rhino_classfile_ClassFileWriter_DEBUGLABELS;
jbool SF_rhino_classfile_ClassFileWriter_DEBUGCODE;
jint SF_rhino_classfile_ClassFileWriter_MIN_LABEL_TABLE_SIZE;
jint SF_rhino_classfile_ClassFileWriter_MIN_FIXUP_TABLE_SIZE;

void mark_rhino_classfile_ClassFileWriter(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_ClassFileWriter *) object;
	if (self->F_itsSuperBlockStarts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsSuperBlockStarts)->clazz)->markFunction)((jobject) self->F_itsSuperBlockStarts, mark, depth + 1);
	if (self->F_itsJumpFroms)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsJumpFroms)->clazz)->markFunction)((jobject) self->F_itsJumpFroms, mark, depth + 1);
	if (self->F_generatedClassName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_generatedClassName)->clazz)->markFunction)((jobject) self->F_generatedClassName, mark, depth + 1);
	if (self->F_itsExceptionTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsExceptionTable)->clazz)->markFunction)((jobject) self->F_itsExceptionTable, mark, depth + 1);
	if (self->F_itsLineNumberTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsLineNumberTable)->clazz)->markFunction)((jobject) self->F_itsLineNumberTable, mark, depth + 1);
	if (self->F_itsCodeBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsCodeBuffer)->clazz)->markFunction)((jobject) self->F_itsCodeBuffer, mark, depth + 1);
	if (self->F_itsConstantPool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsConstantPool)->clazz)->markFunction)((jobject) self->F_itsConstantPool, mark, depth + 1);
	if (self->F_itsCurrentMethod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsCurrentMethod)->clazz)->markFunction)((jobject) self->F_itsCurrentMethod, mark, depth + 1);
	if (self->F_itsMethods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsMethods)->clazz)->markFunction)((jobject) self->F_itsMethods, mark, depth + 1);
	if (self->F_itsFields)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsFields)->clazz)->markFunction)((jobject) self->F_itsFields, mark, depth + 1);
	if (self->F_itsInterfaces)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsInterfaces)->clazz)->markFunction)((jobject) self->F_itsInterfaces, mark, depth + 1);
	if (self->F_itsLabelTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsLabelTable)->clazz)->markFunction)((jobject) self->F_itsLabelTable, mark, depth + 1);
	if (self->F_itsFixupTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsFixupTable)->clazz)->markFunction)((jobject) self->F_itsFixupTable, mark, depth + 1);
	if (self->F_itsVarDescriptors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsVarDescriptors)->clazz)->markFunction)((jobject) self->F_itsVarDescriptors, mark, depth + 1);
	if (self->F_itsBootstrapMethods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsBootstrapMethods)->clazz)->markFunction)((jobject) self->F_itsBootstrapMethods, mark, depth + 1);
	if (self->F_tmpCharBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpCharBuffer)->clazz)->markFunction)((jobject) self->F_tmpCharBuffer, mark, depth + 1);
}

void init_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(134);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(91);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts = (jref) (jobject(nullptr));
	LINE_NUMBER(92);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStartsTop = (jint(0));
	LINE_NUMBER(97);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsJumpFroms = (jref) (jobject(nullptr));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (256));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsCodeBuffer = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsMethods = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsFields = (jref) sp[1].o;
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsInterfaces = (jref) sp[1].o;
	LINE_NUMBER(123);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethodsLength = (jint(0));
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (64));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_tmpCharBuffer = (jref) sp[1].o;
	LINE_NUMBER(135);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_generatedClassName = (jref) (frame[1].o);
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	clinit_rhino_classfile_ConstantPool(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_classfile_ConstantPool);
	init_rhino_classfile_ConstantPool_rhino_classfile_ClassFileWriter(ctx, sp[1].o, (frame[0].o));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsConstantPool = (jref) sp[1].o;
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, sp[1].o, (frame[1].o));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsThisClassIndex = temp0;
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, sp[1].o, (frame[2].o));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsSuperClassIndex = temp1;
	LINE_NUMBER(139);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[1].o, (frame[3].o));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsSourceFileNameIndex = temp0;
	}
label_15:;
	{
	LINE_NUMBER(144);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFlags = (33);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_getSlashedForm_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:getSlashedForm", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[0].o), (46), (47));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_classNameToSignature_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:classNameToSignature", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(157);
	frame[2].i = ((jint(1)) + (frame[1].i));
	LINE_NUMBER(158);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((frame[2].i) + (jint(1))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(159);
	ARRAY_ACCESS(jchar, (frame[3].o), (jint(0))) = (76);
	LINE_NUMBER(160);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[2].i)) = (59);
	LINE_NUMBER(161);
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, (frame[0].o), (jint(0)), (frame[1].i), (frame[3].o), (jint(1)));
	LINE_NUMBER(162);
	frame[4].i = (jint(1));
	}
label_7:;
	{
	if ((frame[4].i) == (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(163);
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i))) != (46)) goto label_10;
	}
	{
	LINE_NUMBER(164);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i)) = (47);
	}
label_10:;
	{
	LINE_NUMBER(162);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(167);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[3].o), (jint(0)), ((frame[2].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar SM_rhino_classfile_ClassFileWriter_arrayTypeToName_int_R_char(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:arrayTypeToName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(174);
	switch((frame[0].i)) {
		case 4: goto label_1;
		case 5: goto label_2;
		case 6: goto label_3;
		case 7: goto label_4;
		case 8: goto label_5;
		case 9: goto label_6;
		case 10: goto label_7;
		case 11: goto label_8;
		default: goto label_9;
	}
	}
label_1:;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (90);
	}
label_2:;
	{
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return (67);
	}
label_3:;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (70);
	}
label_4:;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (68);
	}
label_5:;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (66);
	}
label_6:;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (83);
	}
label_7:;
	{
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (73);
	}
label_8:;
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (74);
	}
label_9:;
	{
	LINE_NUMBER(192);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad operand"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_classDescriptorToInternalName_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:classDescriptorToInternalName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_descriptorToInternalName_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:descriptorToInternalName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(210);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	switch(temp0) {
		case 66: goto label_1;
		case 67: goto label_1;
		case 68: goto label_1;
		case 69: goto label_2;
		case 70: goto label_1;
		case 71: goto label_2;
		case 72: goto label_2;
		case 73: goto label_1;
		case 74: goto label_1;
		case 75: goto label_2;
		case 76: goto label_3;
		case 77: goto label_2;
		case 78: goto label_2;
		case 79: goto label_2;
		case 80: goto label_2;
		case 81: goto label_2;
		case 82: goto label_2;
		case 83: goto label_1;
		case 84: goto label_2;
		case 85: goto label_2;
		case 86: goto label_1;
		case 87: goto label_2;
		case 88: goto label_2;
		case 89: goto label_2;
		case 90: goto label_1;
		case 91: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_3:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_classDescriptorToInternalName_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(225);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad descriptor:"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_putInt64_long_Array1_byte_int_R_int(jcontext ctx, jlong param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:putInt64", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32))))), (frame[2].o), (frame[3].i));
	frame[3].i = temp0;
	LINE_NUMBER(232);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, (jint((frame[0].l))), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void SM_rhino_classfile_ClassFileWriter_badStack_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:badStack", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(237);
	if ((frame[0].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(238);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stack underflow: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(240);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too big stack: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(242);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_sizeOfParameters_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:sizeOfParameters", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(255);
	jint temp1 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[0].o), (41));
	frame[2].i = temp1;
	LINE_NUMBER(256);
	if ((jint(3)) > (frame[1].i)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	LINE_NUMBER(257);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 != (40)) goto label_3;
	}
	{
	if ((jint(1)) > (frame[2].i)) goto label_3;
	}
	{
	if (((frame[2].i) + (jint(1))) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(259);
	frame[3].i = (jint(1));
	LINE_NUMBER(260);
	frame[4].i = (jint(1));
	LINE_NUMBER(261);
	frame[5].i = (jint(0));
	LINE_NUMBER(262);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(264);
	if ((frame[4].i) == (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(265);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	switch(temp0) {
		case 66: goto label_12;
		case 67: goto label_12;
		case 68: goto label_13;
		case 69: goto label_14;
		case 70: goto label_12;
		case 71: goto label_14;
		case 72: goto label_14;
		case 73: goto label_12;
		case 74: goto label_13;
		case 75: goto label_14;
		case 76: goto label_15;
		case 77: goto label_14;
		case 78: goto label_14;
		case 79: goto label_14;
		case 80: goto label_14;
		case 81: goto label_14;
		case 82: goto label_14;
		case 83: goto label_12;
		case 84: goto label_14;
		case 85: goto label_14;
		case 86: goto label_14;
		case 87: goto label_14;
		case 88: goto label_14;
		case 89: goto label_14;
		case 90: goto label_12;
		case 91: goto label_16;
		default: goto label_14;
	}
	}
label_14:;
	{
	LINE_NUMBER(267);
	frame[3].i = (jint(0));
	LINE_NUMBER(268);
	goto label_10;
	}
label_13:;
	LINE_NUMBER(271);
	INST_IINC(5, -1);
label_12:;
	{
	LINE_NUMBER(279);
	INST_IINC(5, -1);
	LINE_NUMBER(280);
	INST_IINC(6, 1);
	LINE_NUMBER(281);
	INST_IINC(4, 1);
	LINE_NUMBER(282);
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(284);
	INST_IINC(4, 1);
	LINE_NUMBER(285);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	frame[7].i = temp0;
	}
label_22:;
	{
	LINE_NUMBER(286);
	if ((frame[7].i) != (91)) goto label_23;
	}
	{
	LINE_NUMBER(287);
	INST_IINC(4, 1);
	LINE_NUMBER(288);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	frame[7].i = temp0;
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(290);
	switch((frame[7].i)) {
		case 66: goto label_26;
		case 67: goto label_26;
		case 68: goto label_26;
		case 69: goto label_27;
		case 70: goto label_26;
		case 71: goto label_27;
		case 72: goto label_27;
		case 73: goto label_26;
		case 74: goto label_26;
		case 75: goto label_27;
		case 76: goto label_15;
		case 77: goto label_27;
		case 78: goto label_27;
		case 79: goto label_27;
		case 80: goto label_27;
		case 81: goto label_27;
		case 82: goto label_27;
		case 83: goto label_26;
		case 84: goto label_27;
		case 85: goto label_27;
		case 86: goto label_27;
		case 87: goto label_27;
		case 88: goto label_27;
		case 89: goto label_27;
		case 90: goto label_26;
		default: goto label_27;
	}
	}
label_27:;
	{
	LINE_NUMBER(292);
	frame[3].i = (jint(0));
	LINE_NUMBER(293);
	goto label_10;
	}
label_26:;
	{
	LINE_NUMBER(302);
	INST_IINC(5, -1);
	LINE_NUMBER(303);
	INST_IINC(6, 1);
	LINE_NUMBER(304);
	INST_IINC(4, 1);
	LINE_NUMBER(305);
	goto label_9;
	}
label_15:;
	{
	LINE_NUMBER(311);
	INST_IINC(5, -1);
	LINE_NUMBER(312);
	INST_IINC(6, 1);
	LINE_NUMBER(313);
	INST_IINC(4, 1);
	LINE_NUMBER(314);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[0].o), (59), (frame[4].i));
	frame[8].i = temp0;
	LINE_NUMBER(315);
	if (((frame[4].i) + (jint(1))) > (frame[8].i)) goto label_36;
	}
	{
	if ((frame[8].i) < (frame[2].i)) goto label_37;
	}
label_36:;
	{
	LINE_NUMBER(317);
	frame[3].i = (jint(0));
	LINE_NUMBER(318);
	goto label_10;
	}
label_37:;
	{
	LINE_NUMBER(320);
	frame[4].i = ((frame[8].i) + (jint(1)));
	LINE_NUMBER(321);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(325);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(326);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	switch(temp0) {
		case 66: goto label_41;
		case 67: goto label_41;
		case 68: goto label_42;
		case 69: goto label_43;
		case 70: goto label_41;
		case 71: goto label_43;
		case 72: goto label_43;
		case 73: goto label_41;
		case 74: goto label_42;
		case 75: goto label_43;
		case 76: goto label_41;
		case 77: goto label_43;
		case 78: goto label_43;
		case 79: goto label_43;
		case 80: goto label_43;
		case 81: goto label_43;
		case 82: goto label_43;
		case 83: goto label_41;
		case 84: goto label_43;
		case 85: goto label_43;
		case 86: goto label_44;
		case 87: goto label_43;
		case 88: goto label_43;
		case 89: goto label_43;
		case 90: goto label_41;
		case 91: goto label_41;
		default: goto label_43;
	}
	}
label_43:;
	{
	LINE_NUMBER(328);
	frame[3].i = (jint(0));
	LINE_NUMBER(329);
	goto label_44;
	}
label_42:;
	LINE_NUMBER(332);
	INST_IINC(5, 1);
label_41:;
	LINE_NUMBER(342);
	INST_IINC(5, 1);
label_44:;
	{
	LINE_NUMBER(347);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return (((frame[6].i) << (16)) | ((jint(65535)) & (frame[5].i)));
	}
label_3:;
	{
	LINE_NUMBER(352);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad parameter signature: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:putInt16", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(357);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(0)))) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (8)))));
	LINE_NUMBER(358);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(1)))) = (jbyte((frame[0].i)));
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return ((frame[2].i) + (jint(2)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:putInt32", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(363);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(0)))) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (24)))));
	LINE_NUMBER(364);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(1)))) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (16)))));
	LINE_NUMBER(365);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(2)))) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (8)))));
	LINE_NUMBER(366);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (jint(3)))) = (jbyte((frame[0].i)));
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return ((frame[2].i) + (jint(4)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_opcodeLength_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:opcodeLength", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(376);
	switch((frame[0].i)) {
		case 0: goto label_1;
		case 1: goto label_1;
		case 2: goto label_1;
		case 3: goto label_1;
		case 4: goto label_1;
		case 5: goto label_1;
		case 6: goto label_1;
		case 7: goto label_1;
		case 8: goto label_1;
		case 9: goto label_1;
		case 10: goto label_1;
		case 11: goto label_1;
		case 12: goto label_1;
		case 13: goto label_1;
		case 14: goto label_1;
		case 15: goto label_1;
		case 16: goto label_2;
		case 17: goto label_3;
		case 18: goto label_2;
		case 19: goto label_3;
		case 20: goto label_3;
		case 21: goto label_4;
		case 22: goto label_4;
		case 23: goto label_4;
		case 24: goto label_4;
		case 25: goto label_4;
		case 26: goto label_1;
		case 27: goto label_1;
		case 28: goto label_1;
		case 29: goto label_1;
		case 30: goto label_1;
		case 31: goto label_1;
		case 32: goto label_1;
		case 33: goto label_1;
		case 34: goto label_1;
		case 35: goto label_1;
		case 36: goto label_1;
		case 37: goto label_1;
		case 38: goto label_1;
		case 39: goto label_1;
		case 40: goto label_1;
		case 41: goto label_1;
		case 42: goto label_1;
		case 43: goto label_1;
		case 44: goto label_1;
		case 45: goto label_1;
		case 46: goto label_1;
		case 47: goto label_1;
		case 48: goto label_1;
		case 49: goto label_1;
		case 50: goto label_1;
		case 51: goto label_1;
		case 52: goto label_1;
		case 53: goto label_1;
		case 54: goto label_4;
		case 55: goto label_4;
		case 56: goto label_4;
		case 57: goto label_4;
		case 58: goto label_4;
		case 59: goto label_1;
		case 60: goto label_1;
		case 61: goto label_1;
		case 62: goto label_1;
		case 63: goto label_1;
		case 64: goto label_1;
		case 65: goto label_1;
		case 66: goto label_1;
		case 67: goto label_1;
		case 68: goto label_1;
		case 69: goto label_1;
		case 70: goto label_1;
		case 71: goto label_1;
		case 72: goto label_1;
		case 73: goto label_1;
		case 74: goto label_1;
		case 75: goto label_1;
		case 76: goto label_1;
		case 77: goto label_1;
		case 78: goto label_1;
		case 79: goto label_1;
		case 80: goto label_1;
		case 81: goto label_1;
		case 82: goto label_1;
		case 83: goto label_1;
		case 84: goto label_1;
		case 85: goto label_1;
		case 86: goto label_1;
		case 87: goto label_1;
		case 88: goto label_1;
		case 89: goto label_1;
		case 90: goto label_1;
		case 91: goto label_1;
		case 92: goto label_1;
		case 93: goto label_1;
		case 94: goto label_1;
		case 95: goto label_1;
		case 96: goto label_1;
		case 97: goto label_1;
		case 98: goto label_1;
		case 99: goto label_1;
		case 100: goto label_1;
		case 101: goto label_1;
		case 102: goto label_1;
		case 103: goto label_1;
		case 104: goto label_1;
		case 105: goto label_1;
		case 106: goto label_1;
		case 107: goto label_1;
		case 108: goto label_1;
		case 109: goto label_1;
		case 110: goto label_1;
		case 111: goto label_1;
		case 112: goto label_1;
		case 113: goto label_1;
		case 114: goto label_1;
		case 115: goto label_1;
		case 116: goto label_1;
		case 117: goto label_1;
		case 118: goto label_1;
		case 119: goto label_1;
		case 120: goto label_1;
		case 121: goto label_1;
		case 122: goto label_1;
		case 123: goto label_1;
		case 124: goto label_1;
		case 125: goto label_1;
		case 126: goto label_1;
		case 127: goto label_1;
		case 128: goto label_1;
		case 129: goto label_1;
		case 130: goto label_1;
		case 131: goto label_1;
		case 132: goto label_5;
		case 133: goto label_1;
		case 134: goto label_1;
		case 135: goto label_1;
		case 136: goto label_1;
		case 137: goto label_1;
		case 138: goto label_1;
		case 139: goto label_1;
		case 140: goto label_1;
		case 141: goto label_1;
		case 142: goto label_1;
		case 143: goto label_1;
		case 144: goto label_1;
		case 145: goto label_1;
		case 146: goto label_1;
		case 147: goto label_1;
		case 148: goto label_1;
		case 149: goto label_1;
		case 150: goto label_1;
		case 151: goto label_1;
		case 152: goto label_1;
		case 153: goto label_3;
		case 154: goto label_3;
		case 155: goto label_3;
		case 156: goto label_3;
		case 157: goto label_3;
		case 158: goto label_3;
		case 159: goto label_3;
		case 160: goto label_3;
		case 161: goto label_3;
		case 162: goto label_3;
		case 163: goto label_3;
		case 164: goto label_3;
		case 165: goto label_3;
		case 166: goto label_3;
		case 167: goto label_3;
		case 168: goto label_3;
		case 169: goto label_4;
		case 170: goto label_6;
		case 171: goto label_6;
		case 172: goto label_1;
		case 173: goto label_1;
		case 174: goto label_1;
		case 175: goto label_1;
		case 176: goto label_1;
		case 177: goto label_1;
		case 178: goto label_3;
		case 179: goto label_3;
		case 180: goto label_3;
		case 181: goto label_3;
		case 182: goto label_3;
		case 183: goto label_3;
		case 184: goto label_3;
		case 185: goto label_7;
		case 186: goto label_7;
		case 187: goto label_3;
		case 188: goto label_2;
		case 189: goto label_3;
		case 190: goto label_1;
		case 191: goto label_1;
		case 192: goto label_3;
		case 193: goto label_3;
		case 194: goto label_1;
		case 195: goto label_1;
		case 196: goto label_1;
		case 197: goto label_8;
		case 198: goto label_3;
		case 199: goto label_3;
		case 200: goto label_7;
		case 201: goto label_7;
		case 202: goto label_1;
		case 203: goto label_6;
		case 204: goto label_6;
		case 205: goto label_6;
		case 206: goto label_6;
		case 207: goto label_6;
		case 208: goto label_6;
		case 209: goto label_6;
		case 210: goto label_6;
		case 211: goto label_6;
		case 212: goto label_6;
		case 213: goto label_6;
		case 214: goto label_6;
		case 215: goto label_6;
		case 216: goto label_6;
		case 217: goto label_6;
		case 218: goto label_6;
		case 219: goto label_6;
		case 220: goto label_6;
		case 221: goto label_6;
		case 222: goto label_6;
		case 223: goto label_6;
		case 224: goto label_6;
		case 225: goto label_6;
		case 226: goto label_6;
		case 227: goto label_6;
		case 228: goto label_6;
		case 229: goto label_6;
		case 230: goto label_6;
		case 231: goto label_6;
		case 232: goto label_6;
		case 233: goto label_6;
		case 234: goto label_6;
		case 235: goto label_6;
		case 236: goto label_6;
		case 237: goto label_6;
		case 238: goto label_6;
		case 239: goto label_6;
		case 240: goto label_6;
		case 241: goto label_6;
		case 242: goto label_6;
		case 243: goto label_6;
		case 244: goto label_6;
		case 245: goto label_6;
		case 246: goto label_6;
		case 247: goto label_6;
		case 248: goto label_6;
		case 249: goto label_6;
		case 250: goto label_6;
		case 251: goto label_6;
		case 252: goto label_6;
		case 253: goto label_6;
		case 254: goto label_1;
		case 255: goto label_1;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return (jint(2));
	}
label_4:;
	{
	LINE_NUMBER(544);
	if ((frame[1].i) == 0) goto label_9;
	}
	INST_ICONST(3);
	goto label_10;
label_9:;
	INST_ICONST(2);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (jint(3));
	}
label_5:;
	{
	LINE_NUMBER(581);
	if ((frame[1].i) == 0) goto label_11;
	}
	INST_ICONST(5);
	goto label_12;
label_11:;
	INST_ICONST(3);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return (jint(4));
	}
label_7:;
	{
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return (jint(5));
	}
label_6:;
	{
	LINE_NUMBER(598);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad opcode: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_opcodeCount_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:opcodeCount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(605);
	switch((frame[0].i)) {
		case 0: goto label_1;
		case 1: goto label_1;
		case 2: goto label_1;
		case 3: goto label_1;
		case 4: goto label_1;
		case 5: goto label_1;
		case 6: goto label_1;
		case 7: goto label_1;
		case 8: goto label_1;
		case 9: goto label_1;
		case 10: goto label_1;
		case 11: goto label_1;
		case 12: goto label_1;
		case 13: goto label_1;
		case 14: goto label_1;
		case 15: goto label_1;
		case 16: goto label_2;
		case 17: goto label_2;
		case 18: goto label_2;
		case 19: goto label_2;
		case 20: goto label_2;
		case 21: goto label_2;
		case 22: goto label_2;
		case 23: goto label_2;
		case 24: goto label_2;
		case 25: goto label_2;
		case 26: goto label_1;
		case 27: goto label_1;
		case 28: goto label_1;
		case 29: goto label_1;
		case 30: goto label_1;
		case 31: goto label_1;
		case 32: goto label_1;
		case 33: goto label_1;
		case 34: goto label_1;
		case 35: goto label_1;
		case 36: goto label_1;
		case 37: goto label_1;
		case 38: goto label_1;
		case 39: goto label_1;
		case 40: goto label_1;
		case 41: goto label_1;
		case 42: goto label_1;
		case 43: goto label_1;
		case 44: goto label_1;
		case 45: goto label_1;
		case 46: goto label_1;
		case 47: goto label_1;
		case 48: goto label_1;
		case 49: goto label_1;
		case 50: goto label_1;
		case 51: goto label_1;
		case 52: goto label_1;
		case 53: goto label_1;
		case 54: goto label_2;
		case 55: goto label_2;
		case 56: goto label_2;
		case 57: goto label_2;
		case 58: goto label_2;
		case 59: goto label_1;
		case 60: goto label_1;
		case 61: goto label_1;
		case 62: goto label_1;
		case 63: goto label_1;
		case 64: goto label_1;
		case 65: goto label_1;
		case 66: goto label_1;
		case 67: goto label_1;
		case 68: goto label_1;
		case 69: goto label_1;
		case 70: goto label_1;
		case 71: goto label_1;
		case 72: goto label_1;
		case 73: goto label_1;
		case 74: goto label_1;
		case 75: goto label_1;
		case 76: goto label_1;
		case 77: goto label_1;
		case 78: goto label_1;
		case 79: goto label_1;
		case 80: goto label_1;
		case 81: goto label_1;
		case 82: goto label_1;
		case 83: goto label_1;
		case 84: goto label_1;
		case 85: goto label_1;
		case 86: goto label_1;
		case 87: goto label_1;
		case 88: goto label_1;
		case 89: goto label_1;
		case 90: goto label_1;
		case 91: goto label_1;
		case 92: goto label_1;
		case 93: goto label_1;
		case 94: goto label_1;
		case 95: goto label_1;
		case 96: goto label_1;
		case 97: goto label_1;
		case 98: goto label_1;
		case 99: goto label_1;
		case 100: goto label_1;
		case 101: goto label_1;
		case 102: goto label_1;
		case 103: goto label_1;
		case 104: goto label_1;
		case 105: goto label_1;
		case 106: goto label_1;
		case 107: goto label_1;
		case 108: goto label_1;
		case 109: goto label_1;
		case 110: goto label_1;
		case 111: goto label_1;
		case 112: goto label_1;
		case 113: goto label_1;
		case 114: goto label_1;
		case 115: goto label_1;
		case 116: goto label_1;
		case 117: goto label_1;
		case 118: goto label_1;
		case 119: goto label_1;
		case 120: goto label_1;
		case 121: goto label_1;
		case 122: goto label_1;
		case 123: goto label_1;
		case 124: goto label_1;
		case 125: goto label_1;
		case 126: goto label_1;
		case 127: goto label_1;
		case 128: goto label_1;
		case 129: goto label_1;
		case 130: goto label_1;
		case 131: goto label_1;
		case 132: goto label_3;
		case 133: goto label_1;
		case 134: goto label_1;
		case 135: goto label_1;
		case 136: goto label_1;
		case 137: goto label_1;
		case 138: goto label_1;
		case 139: goto label_1;
		case 140: goto label_1;
		case 141: goto label_1;
		case 142: goto label_1;
		case 143: goto label_1;
		case 144: goto label_1;
		case 145: goto label_1;
		case 146: goto label_1;
		case 147: goto label_1;
		case 148: goto label_1;
		case 149: goto label_1;
		case 150: goto label_1;
		case 151: goto label_1;
		case 152: goto label_1;
		case 153: goto label_2;
		case 154: goto label_2;
		case 155: goto label_2;
		case 156: goto label_2;
		case 157: goto label_2;
		case 158: goto label_2;
		case 159: goto label_2;
		case 160: goto label_2;
		case 161: goto label_2;
		case 162: goto label_2;
		case 163: goto label_2;
		case 164: goto label_2;
		case 165: goto label_2;
		case 166: goto label_2;
		case 167: goto label_2;
		case 168: goto label_2;
		case 169: goto label_2;
		case 170: goto label_4;
		case 171: goto label_4;
		case 172: goto label_1;
		case 173: goto label_1;
		case 174: goto label_1;
		case 175: goto label_1;
		case 176: goto label_1;
		case 177: goto label_1;
		case 178: goto label_2;
		case 179: goto label_2;
		case 180: goto label_2;
		case 181: goto label_2;
		case 182: goto label_2;
		case 183: goto label_2;
		case 184: goto label_2;
		case 185: goto label_2;
		case 186: goto label_5;
		case 187: goto label_2;
		case 188: goto label_2;
		case 189: goto label_2;
		case 190: goto label_1;
		case 191: goto label_1;
		case 192: goto label_2;
		case 193: goto label_2;
		case 194: goto label_1;
		case 195: goto label_1;
		case 196: goto label_1;
		case 197: goto label_3;
		case 198: goto label_2;
		case 199: goto label_2;
		case 200: goto label_2;
		case 201: goto label_2;
		case 202: goto label_1;
		case 203: goto label_5;
		case 204: goto label_5;
		case 205: goto label_5;
		case 206: goto label_5;
		case 207: goto label_5;
		case 208: goto label_5;
		case 209: goto label_5;
		case 210: goto label_5;
		case 211: goto label_5;
		case 212: goto label_5;
		case 213: goto label_5;
		case 214: goto label_5;
		case 215: goto label_5;
		case 216: goto label_5;
		case 217: goto label_5;
		case 218: goto label_5;
		case 219: goto label_5;
		case 220: goto label_5;
		case 221: goto label_5;
		case 222: goto label_5;
		case 223: goto label_5;
		case 224: goto label_5;
		case 225: goto label_5;
		case 226: goto label_5;
		case 227: goto label_5;
		case 228: goto label_5;
		case 229: goto label_5;
		case 230: goto label_5;
		case 231: goto label_5;
		case 232: goto label_5;
		case 233: goto label_5;
		case 234: goto label_5;
		case 235: goto label_5;
		case 236: goto label_5;
		case 237: goto label_5;
		case 238: goto label_5;
		case 239: goto label_5;
		case 240: goto label_5;
		case 241: goto label_5;
		case 242: goto label_5;
		case 243: goto label_5;
		case 244: goto label_5;
		case 245: goto label_5;
		case 246: goto label_5;
		case 247: goto label_5;
		case 248: goto label_5;
		case 249: goto label_5;
		case 250: goto label_5;
		case 251: goto label_5;
		case 252: goto label_5;
		case 253: goto label_5;
		case 254: goto label_1;
		case 255: goto label_1;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(757);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(807);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return (jint(2));
	}
label_4:;
	{
	LINE_NUMBER(815);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_5:;
	{
	LINE_NUMBER(817);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad opcode: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_stackChange_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:stackChange", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(826);
	switch((frame[0].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_2;
		case 3: goto label_2;
		case 4: goto label_2;
		case 5: goto label_2;
		case 6: goto label_2;
		case 7: goto label_2;
		case 8: goto label_2;
		case 9: goto label_3;
		case 10: goto label_3;
		case 11: goto label_2;
		case 12: goto label_2;
		case 13: goto label_2;
		case 14: goto label_3;
		case 15: goto label_3;
		case 16: goto label_2;
		case 17: goto label_2;
		case 18: goto label_2;
		case 19: goto label_2;
		case 20: goto label_3;
		case 21: goto label_2;
		case 22: goto label_3;
		case 23: goto label_2;
		case 24: goto label_3;
		case 25: goto label_2;
		case 26: goto label_2;
		case 27: goto label_2;
		case 28: goto label_2;
		case 29: goto label_2;
		case 30: goto label_3;
		case 31: goto label_3;
		case 32: goto label_3;
		case 33: goto label_3;
		case 34: goto label_2;
		case 35: goto label_2;
		case 36: goto label_2;
		case 37: goto label_2;
		case 38: goto label_3;
		case 39: goto label_3;
		case 40: goto label_3;
		case 41: goto label_3;
		case 42: goto label_2;
		case 43: goto label_2;
		case 44: goto label_2;
		case 45: goto label_2;
		case 46: goto label_4;
		case 47: goto label_1;
		case 48: goto label_4;
		case 49: goto label_1;
		case 50: goto label_4;
		case 51: goto label_4;
		case 52: goto label_4;
		case 53: goto label_4;
		case 54: goto label_4;
		case 55: goto label_5;
		case 56: goto label_4;
		case 57: goto label_5;
		case 58: goto label_4;
		case 59: goto label_4;
		case 60: goto label_4;
		case 61: goto label_4;
		case 62: goto label_4;
		case 63: goto label_5;
		case 64: goto label_5;
		case 65: goto label_5;
		case 66: goto label_5;
		case 67: goto label_4;
		case 68: goto label_4;
		case 69: goto label_4;
		case 70: goto label_4;
		case 71: goto label_5;
		case 72: goto label_5;
		case 73: goto label_5;
		case 74: goto label_5;
		case 75: goto label_4;
		case 76: goto label_4;
		case 77: goto label_4;
		case 78: goto label_4;
		case 79: goto label_6;
		case 80: goto label_7;
		case 81: goto label_6;
		case 82: goto label_7;
		case 83: goto label_6;
		case 84: goto label_6;
		case 85: goto label_6;
		case 86: goto label_6;
		case 87: goto label_4;
		case 88: goto label_5;
		case 89: goto label_2;
		case 90: goto label_2;
		case 91: goto label_2;
		case 92: goto label_3;
		case 93: goto label_3;
		case 94: goto label_3;
		case 95: goto label_1;
		case 96: goto label_4;
		case 97: goto label_5;
		case 98: goto label_4;
		case 99: goto label_5;
		case 100: goto label_4;
		case 101: goto label_5;
		case 102: goto label_4;
		case 103: goto label_5;
		case 104: goto label_4;
		case 105: goto label_5;
		case 106: goto label_4;
		case 107: goto label_5;
		case 108: goto label_4;
		case 109: goto label_5;
		case 110: goto label_4;
		case 111: goto label_5;
		case 112: goto label_4;
		case 113: goto label_5;
		case 114: goto label_4;
		case 115: goto label_5;
		case 116: goto label_1;
		case 117: goto label_1;
		case 118: goto label_1;
		case 119: goto label_1;
		case 120: goto label_4;
		case 121: goto label_4;
		case 122: goto label_4;
		case 123: goto label_4;
		case 124: goto label_4;
		case 125: goto label_4;
		case 126: goto label_4;
		case 127: goto label_5;
		case 128: goto label_4;
		case 129: goto label_5;
		case 130: goto label_4;
		case 131: goto label_5;
		case 132: goto label_1;
		case 133: goto label_2;
		case 134: goto label_1;
		case 135: goto label_2;
		case 136: goto label_4;
		case 137: goto label_4;
		case 138: goto label_1;
		case 139: goto label_1;
		case 140: goto label_2;
		case 141: goto label_2;
		case 142: goto label_4;
		case 143: goto label_1;
		case 144: goto label_4;
		case 145: goto label_1;
		case 146: goto label_1;
		case 147: goto label_1;
		case 148: goto label_6;
		case 149: goto label_4;
		case 150: goto label_4;
		case 151: goto label_6;
		case 152: goto label_6;
		case 153: goto label_4;
		case 154: goto label_4;
		case 155: goto label_4;
		case 156: goto label_4;
		case 157: goto label_4;
		case 158: goto label_4;
		case 159: goto label_5;
		case 160: goto label_5;
		case 161: goto label_5;
		case 162: goto label_5;
		case 163: goto label_5;
		case 164: goto label_5;
		case 165: goto label_5;
		case 166: goto label_5;
		case 167: goto label_1;
		case 168: goto label_2;
		case 169: goto label_1;
		case 170: goto label_4;
		case 171: goto label_4;
		case 172: goto label_4;
		case 173: goto label_5;
		case 174: goto label_4;
		case 175: goto label_5;
		case 176: goto label_4;
		case 177: goto label_1;
		case 178: goto label_1;
		case 179: goto label_1;
		case 180: goto label_4;
		case 181: goto label_4;
		case 182: goto label_4;
		case 183: goto label_4;
		case 184: goto label_1;
		case 185: goto label_4;
		case 186: goto label_1;
		case 187: goto label_2;
		case 188: goto label_1;
		case 189: goto label_1;
		case 190: goto label_1;
		case 191: goto label_4;
		case 192: goto label_1;
		case 193: goto label_1;
		case 194: goto label_4;
		case 195: goto label_4;
		case 196: goto label_1;
		case 197: goto label_2;
		case 198: goto label_4;
		case 199: goto label_4;
		case 200: goto label_1;
		case 201: goto label_2;
		case 202: goto label_1;
		case 203: goto label_8;
		case 204: goto label_8;
		case 205: goto label_8;
		case 206: goto label_8;
		case 207: goto label_8;
		case 208: goto label_8;
		case 209: goto label_8;
		case 210: goto label_8;
		case 211: goto label_8;
		case 212: goto label_8;
		case 213: goto label_8;
		case 214: goto label_8;
		case 215: goto label_8;
		case 216: goto label_8;
		case 217: goto label_8;
		case 218: goto label_8;
		case 219: goto label_8;
		case 220: goto label_8;
		case 221: goto label_8;
		case 222: goto label_8;
		case 223: goto label_8;
		case 224: goto label_8;
		case 225: goto label_8;
		case 226: goto label_8;
		case 227: goto label_8;
		case 228: goto label_8;
		case 229: goto label_8;
		case 230: goto label_8;
		case 231: goto label_8;
		case 232: goto label_8;
		case 233: goto label_8;
		case 234: goto label_8;
		case 235: goto label_8;
		case 236: goto label_8;
		case 237: goto label_8;
		case 238: goto label_8;
		case 239: goto label_8;
		case 240: goto label_8;
		case 241: goto label_8;
		case 242: goto label_8;
		case 243: goto label_8;
		case 244: goto label_8;
		case 245: goto label_8;
		case 246: goto label_8;
		case 247: goto label_8;
		case 248: goto label_8;
		case 249: goto label_8;
		case 250: goto label_8;
		case 251: goto label_8;
		case 252: goto label_8;
		case 253: goto label_8;
		case 254: goto label_1;
		case 255: goto label_1;
		default: goto label_8;
	}
	}
label_7:;
	{
	LINE_NUMBER(829);
	popStackFrame(ctx);
	return (-4);
	}
label_6:;
	{
	LINE_NUMBER(840);
	popStackFrame(ctx);
	return (-3);
	}
label_5:;
	{
	LINE_NUMBER(876);
	popStackFrame(ctx);
	return (-2);
	}
label_4:;
	{
	LINE_NUMBER(946);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(981);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(1024);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(1044);
	popStackFrame(ctx);
	return (jint(2));
	}
label_8:;
	{
	LINE_NUMBER(1046);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad opcode: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_bytecodeStr_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:bytecodeStr", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1466);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ClassFileWriter_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1470);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_generatedClassName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addInterface_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addInterface", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1481);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, sp[0].o, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1482);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsInterfaces;
	sp[1].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, (frame[2].i));
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1483);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_setFlags_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:setFlags", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1493);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFlags = (frame[1].i);
	LINE_NUMBER(1494);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addField", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1503);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(1504);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[2].o));
	frame[5].i = temp1;
	LINE_NUMBER(1505);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFields;
	clinit_rhino_classfile_ClassFileField(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileField);
	init_rhino_classfile_ClassFileField_short_short_short(ctx, sp[1].o, (frame[4].i), (frame[5].i), (frame[3].i));
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_int(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addField", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1517);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(1518);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[2].o));
	frame[6].i = temp1;
	LINE_NUMBER(1519);
	clinit_rhino_classfile_ClassFileField(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileField);
	init_rhino_classfile_ClassFileField_short_short_short(ctx, sp[0].o, (frame[5].i), (frame[6].i), (frame[3].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1521);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp2 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ConstantValue"_j))));
	jint temp3 = jint(0);
	jint temp4 = jint(0);
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp5 = frame[4].i;
	LINE_NUMBER(1524);
	jint temp6 = (jint)((func_rhino_classfile_ConstantPool_addConstant_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_int_R_int])(ctx, sp[1].o, temp5);
	LINE_NUMBER(1521);
	((func_rhino_classfile_ClassFileField_setAttributes_short_short_short_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileField_setAttributes_short_short_short_int])(ctx, sp[0].o, temp2, temp3, temp4, temp6);
	LINE_NUMBER(1525);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFields;
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(1526);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_long(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2, jlong param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addField", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].l = param3;
	{
	LINE_NUMBER(1537);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(1538);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[2].o));
	frame[7].i = temp1;
	LINE_NUMBER(1539);
	clinit_rhino_classfile_ClassFileField(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileField);
	init_rhino_classfile_ClassFileField_short_short_short(ctx, sp[0].o, (frame[6].i), (frame[7].i), (frame[3].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1541);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp2 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ConstantValue"_j))));
	jint temp3 = jint(0);
	jint temp4 = jint(2);
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jlong temp5 = frame[4].l;
	LINE_NUMBER(1544);
	jint temp6 = (jint)((func_rhino_classfile_ConstantPool_addConstant_long_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_long_R_int])(ctx, sp[1].o, temp5);
	LINE_NUMBER(1541);
	((func_rhino_classfile_ClassFileField_setAttributes_short_short_short_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileField_setAttributes_short_short_short_int])(ctx, sp[0].o, temp2, temp3, temp4, temp6);
	LINE_NUMBER(1545);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFields;
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(1546);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_double(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2, jdouble param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addField", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].d = param3;
	{
	LINE_NUMBER(1557);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(1558);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[2].o));
	frame[7].i = temp1;
	LINE_NUMBER(1559);
	clinit_rhino_classfile_ClassFileField(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileField);
	init_rhino_classfile_ClassFileField_short_short_short(ctx, sp[0].o, (frame[6].i), (frame[7].i), (frame[3].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1561);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp2 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ConstantValue"_j))));
	jint temp3 = jint(0);
	jint temp4 = jint(2);
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jdouble temp5 = frame[4].d;
	LINE_NUMBER(1564);
	jint temp6 = (jint)((func_rhino_classfile_ConstantPool_addConstant_double_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_double_R_int])(ctx, sp[1].o, temp5);
	LINE_NUMBER(1561);
	((func_rhino_classfile_ClassFileField_setAttributes_short_short_short_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileField_setAttributes_short_short_short_int])(ctx, sp[0].o, temp2, temp3, temp4, temp6);
	LINE_NUMBER(1565);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFields;
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(1566);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addVariableDescriptor_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addVariableDescriptor", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1578);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(1579);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[2].o));
	frame[6].i = temp1;
	LINE_NUMBER(1580);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[5].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (frame[6].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (frame[3].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (frame[4].i);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1581);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsVarDescriptors;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1582);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsVarDescriptors = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(1584);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsVarDescriptors;
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(1585);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:startMethod", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1597);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(1598);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (frame[2].o));
	frame[5].i = temp1;
	LINE_NUMBER(1599);
	sp[0].o = frame[0].o;
	clinit_rhino_classfile_ClassFileMethod(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileMethod);
	init_rhino_classfile_ClassFileMethod_java_lang_String_short_java_lang_String_short_short(ctx, sp[1].o, (frame[1].o), (frame[4].i), (frame[2].o), (frame[5].i), (frame[3].i));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsCurrentMethod = (jref) sp[1].o;
	LINE_NUMBER(1601);
	sp[0].o = frame[0].o;
	clinit_rhino_UintMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_UintMap);
	init_rhino_UintMap(ctx, sp[1].o);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsJumpFroms = (jref) sp[1].o;
	LINE_NUMBER(1602);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMethods;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCurrentMethod;
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1603);
	M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(1604);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_stopMethod_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:stopMethod", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1615);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCurrentMethod;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1616);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No method to stop"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1618);
	M_rhino_classfile_ClassFileWriter_fixLabelGotos(ctx, (frame[0].o));
	LINE_NUMBER(1620);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxLocals = (frame[1].i);
	LINE_NUMBER(1622);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(1623);
	if ((clinit_rhino_classfile_ClassFileWriter(ctx), (jint)SF_rhino_classfile_ClassFileWriter_GenerateStackMap) == 0) goto label_6;
	}
	{
	LINE_NUMBER(1624);
	M_rhino_classfile_ClassFileWriter_finalizeSuperBlockStarts(ctx, (frame[0].o));
	LINE_NUMBER(1625);
	clinit_rhino_classfile_ClassFileWriter$StackMapTable(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter$StackMapTable);
	init_rhino_classfile_ClassFileWriter$StackMapTable_rhino_classfile_ClassFileWriter(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1626);
	((func_rhino_classfile_ClassFileWriter$StackMapTable_generate) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_generate])(ctx, (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(1629);
	frame[3].i = (jint(0));
	LINE_NUMBER(1630);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTable;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1634);
	frame[3].i = ((8) + (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTableTop) * (jint(4))));
	}
label_11:;
	{
	LINE_NUMBER(1637);
	frame[4].i = (jint(0));
	LINE_NUMBER(1638);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsVarDescriptors;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1642);
	jint temp0 = 8;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsVarDescriptors;
	jint temp1 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	frame[4].i = (temp0 + (temp1 * (10)));
	}
label_14:;
	{
	LINE_NUMBER(1645);
	frame[5].i = (jint(0));
	LINE_NUMBER(1646);
	if ((frame[2].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(1647);
	jint temp0 = (jint)((func_rhino_classfile_ClassFileWriter$StackMapTable_computeWriteSize_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_computeWriteSize_R_int])(ctx, (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(1648);
	if ((frame[6].i) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(1649);
	frame[5].i = ((6) + (frame[6].i));
	}
label_17:;
	{
	LINE_NUMBER(1653);
	frame[6].i = ((((((((14) + ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop)) + (jint(2))) + (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTableTop) * (8))) + (jint(2))) + (frame[3].i)) + (frame[4].i)) + (frame[5].i));
	LINE_NUMBER(1666);
	if ((frame[6].i) <= (jint(65536))) goto label_22;
	}
	{
	LINE_NUMBER(1670);
	clinit_rhino_classfile_ClassFileWriter$ClassFileFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter$ClassFileFormatException);
	init_rhino_classfile_ClassFileWriter$ClassFileFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"generated bytecode for method exceeds 64K limit."_j))));
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(1672);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1673);
	frame[8].i = (jint(0));
	LINE_NUMBER(1674);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Code"_j))));
	frame[9].i = temp0;
	LINE_NUMBER(1675);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[9].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp1;
	LINE_NUMBER(1676);
	INST_IINC(6, -6);
	LINE_NUMBER(1677);
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, (frame[6].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp2;
	LINE_NUMBER(1678);
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack), (frame[7].o), (frame[8].i));
	frame[8].i = temp3;
	LINE_NUMBER(1679);
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxLocals), (frame[7].o), (frame[8].i));
	frame[8].i = temp4;
	LINE_NUMBER(1680);
	jint temp5 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop), (frame[7].o), (frame[8].i));
	frame[8].i = temp5;
	LINE_NUMBER(1681);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[7].o), (frame[8].i), ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop));
	LINE_NUMBER(1683);
	frame[8].i = ((frame[8].i) + ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop));
	LINE_NUMBER(1685);
	if (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTableTop) <= 0) goto label_35;
	}
	{
	LINE_NUMBER(1686);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTableTop), (frame[7].o), (frame[8].i));
	frame[8].i = temp0;
	LINE_NUMBER(1687);
	frame[10].i = (jint(0));
	}
label_38:;
	{
	if ((frame[10].i) >= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTableTop)) goto label_39;
	}
	{
	LINE_NUMBER(1688);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTable;
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i)));
	LINE_NUMBER(1689);
	jint temp0 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, (frame[0].o), ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[11].o)))->F_itsStartLabel));
	frame[12].i = temp0;
	LINE_NUMBER(1690);
	jint temp1 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, (frame[0].o), ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[11].o)))->F_itsEndLabel));
	frame[13].i = temp1;
	LINE_NUMBER(1691);
	jint temp2 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, (frame[0].o), ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[11].o)))->F_itsHandlerLabel));
	frame[14].i = temp2;
	LINE_NUMBER(1692);
	frame[15].i = ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[11].o)))->F_itsCatchType);
	LINE_NUMBER(1693);
	if ((frame[12].i) != (jint(-1))) goto label_46;
	}
	{
	LINE_NUMBER(1694);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"start label not defined"_j))));
	throwException(ctx, sp[0].o);	}
label_46:;
	{
	LINE_NUMBER(1695);
	if ((frame[13].i) != (jint(-1))) goto label_48;
	}
	{
	LINE_NUMBER(1696);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"end label not defined"_j))));
	throwException(ctx, sp[0].o);	}
label_48:;
	{
	LINE_NUMBER(1697);
	if ((frame[14].i) != (jint(-1))) goto label_50;
	}
	{
	LINE_NUMBER(1698);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"handler label not defined"_j))));
	throwException(ctx, sp[0].o);	}
label_50:;
	{
	LINE_NUMBER(1703);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[12].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp0;
	LINE_NUMBER(1704);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[13].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp1;
	LINE_NUMBER(1705);
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[14].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp2;
	LINE_NUMBER(1706);
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[15].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp3;
	LINE_NUMBER(1687);
	INST_IINC(10, 1);
	goto label_38;
	}
label_39:;
	goto label_56;
label_35:;
	{
	LINE_NUMBER(1710);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (jint(0)), (frame[7].o), (frame[8].i));
	frame[8].i = temp0;
	}
label_56:;
	{
	LINE_NUMBER(1713);
	frame[10].i = (jint(0));
	LINE_NUMBER(1714);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTable;
	if (sp[0].o == nullptr) goto label_58;
	}
	LINE_NUMBER(1715);
	INST_IINC(10, 1);
label_58:;
	{
	LINE_NUMBER(1716);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsVarDescriptors;
	if (sp[0].o == nullptr) goto label_60;
	}
	LINE_NUMBER(1717);
	INST_IINC(10, 1);
label_60:;
	{
	LINE_NUMBER(1718);
	if ((frame[5].i) <= 0) goto label_62;
	}
	LINE_NUMBER(1719);
	INST_IINC(10, 1);
label_62:;
	{
	LINE_NUMBER(1721);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[10].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp0;
	LINE_NUMBER(1723);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTable;
	if (sp[0].o == nullptr) goto label_65;
	}
	{
	LINE_NUMBER(1724);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"LineNumberTable"_j));
	LINE_NUMBER(1725);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, sp[1].o);
	frame[11].i = temp0;
	LINE_NUMBER(1726);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[11].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp1;
	LINE_NUMBER(1727);
	frame[12].i = ((jint(2)) + (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTableTop) * (jint(4))));
	LINE_NUMBER(1728);
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, (frame[12].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp2;
	LINE_NUMBER(1729);
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTableTop), (frame[7].o), (frame[8].i));
	frame[8].i = temp3;
	LINE_NUMBER(1730);
	frame[13].i = (jint(0));
	}
label_73:;
	{
	if ((frame[13].i) >= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTableTop)) goto label_65;
	}
	{
	LINE_NUMBER(1731);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTable;
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[13].i))), (frame[7].o), (frame[8].i));
	frame[8].i = temp0;
	LINE_NUMBER(1730);
	INST_IINC(13, 1);
	goto label_73;
	}
label_65:;
	{
	LINE_NUMBER(1735);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsVarDescriptors;
	if (sp[0].o == nullptr) goto label_76;
	}
	{
	LINE_NUMBER(1736);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"LocalVariableTable"_j));
	LINE_NUMBER(1737);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, sp[1].o);
	frame[11].i = temp0;
	LINE_NUMBER(1738);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[11].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp1;
	LINE_NUMBER(1739);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsVarDescriptors;
	jint temp2 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	frame[12].i = temp2;
	LINE_NUMBER(1740);
	frame[13].i = ((jint(2)) + ((frame[12].i) * (10)));
	LINE_NUMBER(1741);
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, (frame[13].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp3;
	LINE_NUMBER(1742);
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[12].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp4;
	LINE_NUMBER(1743);
	frame[14].i = (jint(0));
	}
label_85:;
	{
	if ((frame[14].i) >= (frame[12].i)) goto label_76;
	}
	{
	LINE_NUMBER(1744);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsVarDescriptors;
	sp[0].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[14].i));
	frame[15].o = (checkCast(ctx, getArrayClass(&class_int, 1), (checkCast(ctx, getArrayClass(&class_int, 1), sp[0].o))));
	LINE_NUMBER(1745);
	frame[16].i = ((jint)ARRAY_ACCESS(jint, (frame[15].o), (jint(0))));
	LINE_NUMBER(1746);
	frame[17].i = ((jint)ARRAY_ACCESS(jint, (frame[15].o), (jint(1))));
	LINE_NUMBER(1747);
	frame[18].i = ((jint)ARRAY_ACCESS(jint, (frame[15].o), (jint(2))));
	LINE_NUMBER(1748);
	frame[19].i = ((jint)ARRAY_ACCESS(jint, (frame[15].o), (jint(3))));
	LINE_NUMBER(1749);
	frame[20].i = (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop) - (frame[18].i));
	LINE_NUMBER(1751);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[18].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp0;
	LINE_NUMBER(1752);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[20].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp1;
	LINE_NUMBER(1753);
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[16].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp2;
	LINE_NUMBER(1754);
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[17].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp3;
	LINE_NUMBER(1755);
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[19].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp4;
	LINE_NUMBER(1743);
	INST_IINC(14, 1);
	goto label_85;
	}
label_76:;
	{
	LINE_NUMBER(1759);
	if ((frame[5].i) <= 0) goto label_98;
	}
	{
	LINE_NUMBER(1760);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"StackMapTable"_j));
	LINE_NUMBER(1761);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, sp[1].o);
	frame[11].i = temp0;
	LINE_NUMBER(1762);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[11].i), (frame[7].o), (frame[8].i));
	frame[8].i = temp1;
	LINE_NUMBER(1763);
	jint temp2 = (jint)((func_rhino_classfile_ClassFileWriter$StackMapTable_write_Array1_byte_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_write_Array1_byte_int_R_int])(ctx, (frame[2].o), (frame[7].o), (frame[8].i));
	frame[8].i = temp2;
	}
label_98:;
	{
	LINE_NUMBER(1766);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCurrentMethod;
	((func_rhino_classfile_ClassFileMethod_setCodeAttribute_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileMethod_setCodeAttribute_Array1_byte])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(1768);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTable = (jref) (jobject(nullptr));
	LINE_NUMBER(1769);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTableTop = (jint(0));
	LINE_NUMBER(1770);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTableTop = (jint(0));
	LINE_NUMBER(1771);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop = (jint(0));
	LINE_NUMBER(1772);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCurrentMethod = (jref) (jobject(nullptr));
	LINE_NUMBER(1773);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack = (jint(0));
	LINE_NUMBER(1774);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jint(0));
	LINE_NUMBER(1775);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTableTop = (jint(0));
	LINE_NUMBER(1776);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTableTop = (jint(0));
	LINE_NUMBER(1777);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsVarDescriptors = (jref) (jobject(nullptr));
	LINE_NUMBER(1778);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts = (jref) (jobject(nullptr));
	LINE_NUMBER(1779);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStartsTop = (jint(0));
	LINE_NUMBER(1780);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsJumpFroms = (jref) (jobject(nullptr));
	LINE_NUMBER(1781);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_add_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1788);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_opcodeCount_int_R_int(ctx, (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1789);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected operands"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1790);
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_stackChange_int_R_int(ctx, (frame[1].i));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(1791);
	if ((frame[2].i) < 0) goto label_4;
	}
	{
	if ((32767) >= (frame[2].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1792);
	SM_rhino_classfile_ClassFileWriter_badStack_int(ctx, (frame[2].i));
	}
label_5:;
	{
	LINE_NUMBER(1795);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1796);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jshort((frame[2].i)));
	LINE_NUMBER(1797);
	if ((frame[2].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack)) goto label_8;
	}
	{
	LINE_NUMBER(1798);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack = (jshort((frame[2].i)));
	}
label_8:;
	{
	LINE_NUMBER(1803);
	if ((frame[1].i) != (191)) goto label_10;
	}
	{
	LINE_NUMBER(1804);
	M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(ctx, (frame[0].o), ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop));
	}
label_10:;
	LINE_NUMBER(1806);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_add_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1818);
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_stackChange_int_R_int(ctx, (frame[1].i));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(1819);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	if ((32767) >= (frame[3].i)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1820);
	SM_rhino_classfile_ClassFileWriter_badStack_int(ctx, (frame[3].i));
	}
label_3:;
	{
	LINE_NUMBER(1822);
	switch((frame[1].i)) {
		case 16: goto label_4;
		case 17: goto label_5;
		case 18: goto label_6;
		case 19: goto label_6;
		case 20: goto label_6;
		case 21: goto label_7;
		case 22: goto label_7;
		case 23: goto label_7;
		case 24: goto label_7;
		case 25: goto label_7;
		case 54: goto label_7;
		case 55: goto label_7;
		case 56: goto label_7;
		case 57: goto label_7;
		case 58: goto label_7;
		case 153: goto label_8;
		case 154: goto label_8;
		case 155: goto label_8;
		case 156: goto label_8;
		case 157: goto label_8;
		case 158: goto label_8;
		case 159: goto label_8;
		case 160: goto label_8;
		case 161: goto label_8;
		case 162: goto label_8;
		case 163: goto label_8;
		case 164: goto label_8;
		case 165: goto label_8;
		case 166: goto label_8;
		case 167: goto label_9;
		case 168: goto label_8;
		case 169: goto label_7;
		case 180: goto label_10;
		case 181: goto label_10;
		case 188: goto label_11;
		case 198: goto label_8;
		case 199: goto label_8;
		default: goto label_12;
	}
	}
label_9:;
	{
	LINE_NUMBER(1827);
	M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(ctx, (frame[0].o), (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop) + (jint(3))));
	}
label_8:;
	{
	LINE_NUMBER(1846);
	if (((frame[2].i) & (bit_cast<jint>(0x80000000))) == (bit_cast<jint>(0x80000000))) goto label_13;
	}
	{
	LINE_NUMBER(1847);
	if ((frame[2].i) < 0) goto label_15;
	}
	{
	if ((frame[2].i) <= (jint(65535))) goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(1848);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad label for branch"_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(1851);
	frame[4].i = ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop);
	LINE_NUMBER(1852);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1853);
	if (((frame[2].i) & (bit_cast<jint>(0x80000000))) == (bit_cast<jint>(0x80000000))) goto label_18;
	}
	{
	LINE_NUMBER(1855);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1856);
	frame[5].i = ((frame[2].i) + (frame[4].i));
	LINE_NUMBER(1857);
	M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(1858);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsJumpFroms;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[5].i), (frame[4].i));
	LINE_NUMBER(1859);
	goto label_24;
	}
label_18:;
	{
	LINE_NUMBER(1860);
	jint temp0 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, (frame[0].o), (frame[2].i));
	frame[5].i = temp0;
	LINE_NUMBER(1867);
	if ((frame[5].i) == (jint(-1))) goto label_26;
	}
	{
	LINE_NUMBER(1868);
	frame[6].i = ((frame[5].i) - (frame[4].i));
	LINE_NUMBER(1869);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(1870);
	M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(1871);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsJumpFroms;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[5].i), (frame[4].i));
	LINE_NUMBER(1872);
	goto label_24;
	}
label_26:;
	{
	LINE_NUMBER(1873);
	M_rhino_classfile_ClassFileWriter_addLabelFixup_int_int(ctx, (frame[0].o), (frame[2].i), ((frame[4].i) + (jint(1))));
	LINE_NUMBER(1874);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (jint(0)));
	}
label_24:;
	LINE_NUMBER(1878);
	goto label_33;
label_4:;
	{
	LINE_NUMBER(1881);
	if ((jbyte((frame[2].i))) == (frame[2].i)) goto label_34;
	}
	{
	LINE_NUMBER(1882);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out of range byte"_j))));
	throwException(ctx, sp[0].o);	}
label_34:;
	{
	LINE_NUMBER(1883);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1884);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (jbyte((frame[2].i))));
	LINE_NUMBER(1885);
	goto label_33;
	}
label_5:;
	{
	LINE_NUMBER(1888);
	if ((jshort((frame[2].i))) == (frame[2].i)) goto label_38;
	}
	{
	LINE_NUMBER(1889);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out of range short"_j))));
	throwException(ctx, sp[0].o);	}
label_38:;
	{
	LINE_NUMBER(1890);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1891);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1892);
	goto label_33;
	}
label_11:;
	{
	LINE_NUMBER(1895);
	if ((jint(0)) > (frame[2].i)) goto label_42;
	}
	{
	if ((frame[2].i) < (256)) goto label_43;
	}
label_42:;
	{
	LINE_NUMBER(1896);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out of range index"_j))));
	throwException(ctx, sp[0].o);	}
label_43:;
	{
	LINE_NUMBER(1897);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1898);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1899);
	goto label_33;
	}
label_10:;
	{
	LINE_NUMBER(1903);
	if ((jint(0)) > (frame[2].i)) goto label_46;
	}
	{
	if ((frame[2].i) < (jint(65536))) goto label_47;
	}
label_46:;
	{
	LINE_NUMBER(1904);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out of range field"_j))));
	throwException(ctx, sp[0].o);	}
label_47:;
	{
	LINE_NUMBER(1905);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1906);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1907);
	goto label_33;
	}
label_6:;
	{
	LINE_NUMBER(1912);
	if ((jint(0)) > (frame[2].i)) goto label_50;
	}
	{
	if ((frame[2].i) < (jint(65536))) goto label_51;
	}
label_50:;
	{
	LINE_NUMBER(1913);
	clinit_rhino_classfile_ClassFileWriter$ClassFileFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter$ClassFileFormatException);
	init_rhino_classfile_ClassFileWriter$ClassFileFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out of range index"_j))));
	throwException(ctx, sp[0].o);	}
label_51:;
	{
	LINE_NUMBER(1914);
	if ((frame[2].i) >= (256)) goto label_52;
	}
	{
	if ((frame[1].i) == (19)) goto label_52;
	}
	{
	if ((frame[1].i) != (20)) goto label_53;
	}
label_52:;
	{
	LINE_NUMBER(1917);
	if ((frame[1].i) != (18)) goto label_54;
	}
	{
	LINE_NUMBER(1918);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (19));
	goto label_56;
	}
label_54:;
	{
	LINE_NUMBER(1920);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	}
label_56:;
	{
	LINE_NUMBER(1922);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[2].i));
	goto label_33;
	}
label_53:;
	{
	LINE_NUMBER(1924);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1925);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1927);
	goto label_33;
	}
label_7:;
	{
	LINE_NUMBER(1940);
	if ((frame[2].i) < 0) goto label_59;
	}
	{
	if ((jint(65536)) > (frame[2].i)) goto label_60;
	}
label_59:;
	{
	LINE_NUMBER(1941);
	clinit_rhino_classfile_ClassFileWriter$ClassFileFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter$ClassFileFormatException);
	init_rhino_classfile_ClassFileWriter$ClassFileFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out of range variable"_j))));
	throwException(ctx, sp[0].o);	}
label_60:;
	{
	LINE_NUMBER(1942);
	if ((frame[2].i) < (256)) goto label_61;
	}
	{
	LINE_NUMBER(1943);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (196));
	LINE_NUMBER(1944);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1945);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[2].i));
	goto label_33;
	}
label_61:;
	{
	LINE_NUMBER(1947);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1948);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1950);
	goto label_33;
	}
label_12:;
	{
	LINE_NUMBER(1953);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected opcode for 1 operand"_j))));
	throwException(ctx, sp[0].o);	}
label_33:;
	{
	LINE_NUMBER(1957);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jshort((frame[3].i)));
	LINE_NUMBER(1958);
	if ((frame[3].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack)) goto label_68;
	}
	{
	LINE_NUMBER(1959);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack = (jshort((frame[3].i)));
	}
label_68:;
	LINE_NUMBER(1964);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addLoadConstant_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addLoadConstant", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1971);
	switch((frame[1].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		default: goto label_7;
	}
	}
label_1:;
	{
	LINE_NUMBER(1973);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(1974);
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(1976);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(1977);
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(1979);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(1980);
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(1982);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (6));
	LINE_NUMBER(1983);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(1985);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (7));
	LINE_NUMBER(1986);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(1988);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (8));
	LINE_NUMBER(1989);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(1991);
	sp[0].o = frame[0].o;
	jint temp0 = 18;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addConstant_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_int_R_int])(ctx, sp[1].o, (frame[1].i));
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_9:;
	LINE_NUMBER(1994);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addLoadConstant_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addLoadConstant", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(2001);
	sp[0].o = frame[0].o;
	jint temp0 = 20;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addConstant_long_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_long_R_int])(ctx, sp[1].o, (frame[1].l));
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(2002);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addLoadConstant_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addLoadConstant", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2009);
	sp[0].o = frame[0].o;
	jint temp0 = 18;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addConstant_float_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_float_R_int])(ctx, sp[1].o, (frame[1].f));
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(2010);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addLoadConstant_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addLoadConstant", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(2017);
	sp[0].o = frame[0].o;
	jint temp0 = 20;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addConstant_double_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_double_R_int])(ctx, sp[1].o, (frame[1].d));
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(2018);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addLoadConstant", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2025);
	sp[0].o = frame[0].o;
	jint temp0 = 18;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int])(ctx, sp[1].o, (frame[1].o));
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(2026);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_add_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2040);
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_stackChange_int_R_int(ctx, (frame[1].i));
	frame[4].i = (temp0 + temp1);
	LINE_NUMBER(2041);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	if ((32767) >= (frame[4].i)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2042);
	SM_rhino_classfile_ClassFileWriter_badStack_int(ctx, (frame[4].i));
	}
label_3:;
	{
	LINE_NUMBER(2044);
	if ((frame[1].i) != (132)) goto label_4;
	}
	{
	LINE_NUMBER(2045);
	if ((frame[2].i) < 0) goto label_6;
	}
	{
	if ((jint(65536)) > (frame[2].i)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(2046);
	clinit_rhino_classfile_ClassFileWriter$ClassFileFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter$ClassFileFormatException);
	init_rhino_classfile_ClassFileWriter$ClassFileFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out of range variable"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(2047);
	if ((frame[3].i) < 0) goto label_8;
	}
	{
	if ((jint(65536)) > (frame[3].i)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(2048);
	clinit_rhino_classfile_ClassFileWriter$ClassFileFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter$ClassFileFormatException);
	init_rhino_classfile_ClassFileWriter$ClassFileFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out of range increment"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(2050);
	if ((frame[2].i) > (255)) goto label_10;
	}
	{
	if ((frame[3].i) <= (127)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(2051);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (196));
	LINE_NUMBER(2052);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (132));
	LINE_NUMBER(2053);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(2054);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[3].i));
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(2056);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (132));
	LINE_NUMBER(2057);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(2058);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[3].i));
	goto label_15;
	}
label_4:;
	{
	LINE_NUMBER(2060);
	if ((frame[1].i) != (197)) goto label_18;
	}
	{
	LINE_NUMBER(2061);
	if ((jint(0)) > (frame[2].i)) goto label_20;
	}
	{
	if ((frame[2].i) < (jint(65536))) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(2062);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out of range index"_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(2063);
	if ((jint(0)) > (frame[3].i)) goto label_22;
	}
	{
	if ((frame[3].i) < (256)) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(2064);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out of range dimensions"_j))));
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(2066);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (197));
	LINE_NUMBER(2067);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(2068);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[3].i));
	goto label_15;
	}
label_18:;
	{
	LINE_NUMBER(2070);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected opcode for 2 operands"_j))));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(2073);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jshort((frame[4].i)));
	LINE_NUMBER(2074);
	if ((frame[4].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack)) goto label_27;
	}
	{
	LINE_NUMBER(2075);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack = (jshort((frame[4].i)));
	}
label_27:;
	LINE_NUMBER(2081);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_add_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2088);
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_stackChange_int_R_int(ctx, (frame[1].i));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(2089);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	if ((32767) >= (frame[3].i)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2090);
	SM_rhino_classfile_ClassFileWriter_badStack_int(ctx, (frame[3].i));
	}
label_3:;
	{
	LINE_NUMBER(2091);
	switch((frame[1].i)) {
		case 187: goto label_4;
		case 188: goto label_5;
		case 189: goto label_4;
		case 190: goto label_5;
		case 191: goto label_5;
		case 192: goto label_4;
		case 193: goto label_4;
		default: goto label_5;
	}
	}
label_4:;
	{
	LINE_NUMBER(2096);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, sp[0].o, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(2097);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2098);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(2100);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(2103);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad opcode for class reference"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(2106);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jshort((frame[3].i)));
	LINE_NUMBER(2107);
	if ((frame[3].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack)) goto label_11;
	}
	{
	LINE_NUMBER(2108);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack = (jshort((frame[3].i)));
	}
label_11:;
	LINE_NUMBER(2113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:add", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(2121);
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_stackChange_int_R_int(ctx, (frame[1].i));
	frame[5].i = (temp0 + temp1);
	LINE_NUMBER(2122);
	jint temp2 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[4].o), (jint(0)));
	frame[6].i = temp2;
	LINE_NUMBER(2123);
	if ((frame[6].i) == (74)) goto label_3;
	}
	{
	if ((frame[6].i) != (68)) goto label_4;
	}
label_3:;
	INST_ICONST(2);
	goto label_5;
label_4:;
	INST_ICONST(1);
label_5:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(2125);
	switch((frame[1].i)) {
		case 178: goto label_7;
		case 179: goto label_8;
		case 180: goto label_7;
		case 181: goto label_8;
		default: goto label_9;
	}
	}
label_7:;
	{
	LINE_NUMBER(2128);
	frame[5].i = ((frame[5].i) + (frame[7].i));
	LINE_NUMBER(2129);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(2132);
	frame[5].i = ((frame[5].i) - (frame[7].i));
	LINE_NUMBER(2133);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(2135);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad opcode for field reference"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(2138);
	if ((frame[5].i) < 0) goto label_13;
	}
	{
	if ((32767) >= (frame[5].i)) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(2139);
	SM_rhino_classfile_ClassFileWriter_badStack_int(ctx, (frame[5].i));
	}
label_14:;
	{
	LINE_NUMBER(2140);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short])(ctx, sp[0].o, (frame[2].o), (frame[3].o), (frame[4].o));
	frame[8].i = temp0;
	LINE_NUMBER(2142);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2143);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(2145);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jshort((frame[5].i)));
	LINE_NUMBER(2146);
	if ((frame[5].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack)) goto label_19;
	}
	{
	LINE_NUMBER(2147);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack = (jshort((frame[5].i)));
	}
label_19:;
	LINE_NUMBER(2152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addInvoke", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(2161);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_sizeOfParameters_java_lang_String_R_int(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(2162);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (16)));
	LINE_NUMBER(2163);
	frame[7].i = (jshort((frame[5].i)));
	LINE_NUMBER(2165);
	frame[8].i = (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop) + (frame[7].i));
	LINE_NUMBER(2166);
	jint temp1 = frame[8].i;
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_stackChange_int_R_int(ctx, (frame[1].i));
	frame[8].i = (temp1 + temp2);
	LINE_NUMBER(2167);
	if ((frame[8].i) < 0) goto label_6;
	}
	{
	if ((32767) >= (frame[8].i)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(2168);
	SM_rhino_classfile_ClassFileWriter_badStack_int(ctx, (frame[8].i));
	}
label_7:;
	{
	LINE_NUMBER(2170);
	switch((frame[1].i)) {
		case 182: goto label_8;
		case 183: goto label_8;
		case 184: goto label_8;
		case 185: goto label_8;
		default: goto label_9;
	}
	}
label_8:;
	{
	LINE_NUMBER(2175);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2176);
	if ((frame[1].i) != (185)) goto label_11;
	}
	{
	LINE_NUMBER(2177);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = frame[4].o;
	LINE_NUMBER(2178);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[9].i = temp0;
	LINE_NUMBER(2181);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[9].i));
	LINE_NUMBER(2182);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), ((frame[6].i) + (jint(1))));
	LINE_NUMBER(2183);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(2184);
	goto label_18;
	}
label_11:;
	{
	LINE_NUMBER(2185);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short])(ctx, sp[0].o, (frame[2].o), (frame[3].o), (frame[4].o));
	frame[9].i = temp0;
	LINE_NUMBER(2188);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[9].i));
	LINE_NUMBER(2191);
	goto label_18;
	}
label_9:;
	{
	LINE_NUMBER(2194);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad opcode for method reference"_j))));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(2197);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jshort((frame[8].i)));
	LINE_NUMBER(2198);
	if ((frame[8].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack)) goto label_22;
	}
	{
	LINE_NUMBER(2199);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack = (jshort((frame[8].i)));
	}
label_22:;
	LINE_NUMBER(2204);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addInvokeDynamic_java_lang_String_java_lang_String_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addInvokeDynamic", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(2212);
	if ((clinit_rhino_classfile_ClassFileWriter(ctx), (jint)SF_rhino_classfile_ClassFileWriter_MajorVersion) >= (51)) goto label_1;
	}
	{
	LINE_NUMBER(2213);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Please build and run with JDK 1.7 for invokedynamic support"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2217);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_sizeOfParameters_java_lang_String_R_int(ctx, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(2219);
	frame[6].i = (jshort((frame[5].i)));
	LINE_NUMBER(2221);
	frame[7].i = (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop) + (frame[6].i));
	LINE_NUMBER(2222);
	if ((frame[7].i) < 0) goto label_6;
	}
	{
	if ((32767) >= (frame[7].i)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(2223);
	SM_rhino_classfile_ClassFileWriter_badStack_int(ctx, (frame[7].i));
	}
label_7:;
	{
	LINE_NUMBER(2225);
	clinit_rhino_classfile_ClassFileWriter$BootstrapEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter$BootstrapEntry);
	init_rhino_classfile_ClassFileWriter$BootstrapEntry_rhino_classfile_ClassFileWriter_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[3].o), (frame[4].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2227);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethods;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(2228);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsBootstrapMethods = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(2230);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethods;
	jint temp0 = (jint)((func_rhino_ObjArray_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, (frame[8].o));
	frame[9].i = temp0;
	LINE_NUMBER(2231);
	if ((frame[9].i) != (jint(-1))) goto label_12;
	}
	{
	LINE_NUMBER(2232);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethods;
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	frame[9].i = temp0;
	LINE_NUMBER(2233);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethods;
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(2234);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsBootstrapMethodsLength;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((frame[8].o)))->F_code;
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsBootstrapMethodsLength = (temp1 + (((jarray) nullCheck(ctx, sp[1].o))->length));
	}
label_12:;
	{
	LINE_NUMBER(2237);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addInvokeDynamic_java_lang_String_java_lang_String_int_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addInvokeDynamic_java_lang_String_java_lang_String_int_R_short])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[9].i));
	frame[10].i = temp0;
	LINE_NUMBER(2240);
	M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(ctx, (frame[0].o), (186));
	LINE_NUMBER(2241);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (frame[10].i));
	LINE_NUMBER(2242);
	M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(2244);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jshort((frame[7].i)));
	LINE_NUMBER(2245);
	if ((frame[7].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack)) goto label_21;
	}
	{
	LINE_NUMBER(2246);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack = (jshort((frame[7].i)));
	}
label_21:;
	LINE_NUMBER(2251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addPush_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addPush", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2258);
	if ((jbyte((frame[1].i))) != (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(2259);
	if ((frame[1].i) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(2260);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (jint(2)));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(2261);
	if ((jint(0)) > (frame[1].i)) goto label_6;
	}
	{
	if ((frame[1].i) > (jint(5))) goto label_6;
	}
	{
	LINE_NUMBER(2262);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (jbyte(((jint(3)) + (frame[1].i)))));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2264);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (16), (jbyte((frame[1].i))));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(2266);
	if ((jshort((frame[1].i))) != (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(2267);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (17), (jshort((frame[1].i))));
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(2269);
	((func_rhino_classfile_ClassFileWriter_addLoadConstant_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_int])(ctx, (frame[0].o), (frame[1].i));
	}
label_5:;
	LINE_NUMBER(2271);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addPush_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addPush", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2502);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_ICONST(4);
	goto label_2;
label_1:;
	INST_ICONST(3);
label_2:;
	{
	sp -= 2;
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(2503);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addPush_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addPush", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(2510);
	frame[3].i = (jint((frame[1].l)));
	LINE_NUMBER(2511);
	if ((longCompare((jlong((frame[3].i))), (frame[1].l))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2512);
	((func_rhino_classfile_ClassFileWriter_addPush_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addPush_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(2513);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (133));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(2515);
	((func_rhino_classfile_ClassFileWriter_addLoadConstant_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_long])(ctx, (frame[0].o), (frame[1].l));
	}
label_5:;
	LINE_NUMBER(2517);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addPush_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addPush", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(2524);
	if ((doubleCompare((frame[1].d), (jdouble(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2526);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (14));
	LINE_NUMBER(2527);
	if ((doubleCompare(((jdouble(1)) / (frame[1].d)), (jdouble(0)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(2529);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (119));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(2531);
	if ((doubleCompare((frame[1].d), (jdouble(1)), -1)) == 0) goto label_6;
	}
	{
	if ((doubleCompare((frame[1].d), (jdouble(-1.0)), -1)) != 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(2532);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (15));
	LINE_NUMBER(2533);
	if ((doubleCompare((frame[1].d), (jdouble(0)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(2534);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (119));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(2537);
	((func_rhino_classfile_ClassFileWriter_addLoadConstant_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_double])(ctx, (frame[0].o), (frame[1].d));
	}
label_4:;
	LINE_NUMBER(2539);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addPush_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addPush", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2547);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(2548);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)), (frame[2].i));
	frame[3].i = temp1;
	LINE_NUMBER(2549);
	if ((frame[3].i) != (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(2550);
	((func_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2551);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(2559);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"java/lang/StringBuilder"_j)));
	LINE_NUMBER(2560);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String])(ctx, (frame[0].o), (187), (((jobject) createStringLiteral(ctx, u8"java/lang/StringBuilder"_j))));
	LINE_NUMBER(2561);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (89));
	LINE_NUMBER(2562);
	((func_rhino_classfile_ClassFileWriter_addPush_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addPush_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(2563);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (183), (((jobject) createStringLiteral(ctx, u8"java/lang/StringBuilder"_j))), (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (((jobject) createStringLiteral(ctx, u8"(I)V"_j))));
	LINE_NUMBER(2564);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(2566);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (89));
	LINE_NUMBER(2567);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[5].i), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2568);
	((func_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(2569);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (182), (((jobject) createStringLiteral(ctx, u8"java/lang/StringBuilder"_j))), (((jobject) createStringLiteral(ctx, u8"append"_j))), (((jobject) createStringLiteral(ctx, u8"(Ljava/lang/String;)Ljava/lang/StringBuilder;"_j))));
	LINE_NUMBER(2571);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (87));
	LINE_NUMBER(2572);
	if ((frame[3].i) != (frame[2].i)) goto label_17;
	}
	LINE_NUMBER(2573);
	goto label_19;
label_17:;
	{
	LINE_NUMBER(2575);
	frame[5].i = (frame[3].i);
	LINE_NUMBER(2576);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[3].i), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(2577);
	goto label_11;
	}
label_19:;
	{
	LINE_NUMBER(2578);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (182), (((jobject) createStringLiteral(ctx, u8"java/lang/StringBuilder"_j))), (((jobject) createStringLiteral(ctx, u8"toString"_j))), (((jobject) createStringLiteral(ctx, u8"()Ljava/lang/String;"_j))));
	LINE_NUMBER(2580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_ClassFileWriter_isUnderStringSizeLimit_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:isUnderStringSizeLimit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2587);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_isUnderUtfEncodingLimit_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_isUnderUtfEncodingLimit_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addIStore_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addIStore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2595);
	M_rhino_classfile_ClassFileWriter_xop_int_int_int(ctx, (frame[0].o), (59), (54), (frame[1].i));
	LINE_NUMBER(2596);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addLStore_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addLStore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2603);
	M_rhino_classfile_ClassFileWriter_xop_int_int_int(ctx, (frame[0].o), (63), (55), (frame[1].i));
	LINE_NUMBER(2604);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addFStore_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addFStore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2611);
	M_rhino_classfile_ClassFileWriter_xop_int_int_int(ctx, (frame[0].o), (67), (56), (frame[1].i));
	LINE_NUMBER(2612);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addDStore_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addDStore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2619);
	M_rhino_classfile_ClassFileWriter_xop_int_int_int(ctx, (frame[0].o), (71), (57), (frame[1].i));
	LINE_NUMBER(2620);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addAStore_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addAStore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2627);
	M_rhino_classfile_ClassFileWriter_xop_int_int_int(ctx, (frame[0].o), (75), (58), (frame[1].i));
	LINE_NUMBER(2628);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addILoad_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addILoad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2635);
	M_rhino_classfile_ClassFileWriter_xop_int_int_int(ctx, (frame[0].o), (26), (21), (frame[1].i));
	LINE_NUMBER(2636);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addLLoad_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addLLoad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2643);
	M_rhino_classfile_ClassFileWriter_xop_int_int_int(ctx, (frame[0].o), (30), (22), (frame[1].i));
	LINE_NUMBER(2644);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addFLoad_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addFLoad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2651);
	M_rhino_classfile_ClassFileWriter_xop_int_int_int(ctx, (frame[0].o), (34), (23), (frame[1].i));
	LINE_NUMBER(2652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addDLoad_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addDLoad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2659);
	M_rhino_classfile_ClassFileWriter_xop_int_int_int(ctx, (frame[0].o), (38), (24), (frame[1].i));
	LINE_NUMBER(2660);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addALoad_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addALoad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2667);
	M_rhino_classfile_ClassFileWriter_xop_int_int_int(ctx, (frame[0].o), (42), (25), (frame[1].i));
	LINE_NUMBER(2668);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addLoadThis(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addLoadThis", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2674);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(2675);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_xop_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:xop", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2678);
	switch((frame[3].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(2680);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2681);
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(2683);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	LINE_NUMBER(2684);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(2686);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(2))));
	LINE_NUMBER(2687);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(2689);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(3))));
	LINE_NUMBER(2690);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(2692);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (frame[2].i), (frame[3].i));
	}
label_7:;
	LINE_NUMBER(2694);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter_addTableSwitch_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addTableSwitch", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2701);
	if ((frame[1].i) <= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(2702);
	clinit_rhino_classfile_ClassFileWriter$ClassFileFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter$ClassFileFormatException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad bounds: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (32));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_classfile_ClassFileWriter$ClassFileFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2704);
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_stackChange_int_R_int(ctx, (170));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(2705);
	if ((frame[3].i) < 0) goto label_4;
	}
	{
	if ((32767) >= (frame[3].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(2706);
	SM_rhino_classfile_ClassFileWriter_badStack_int(ctx, (frame[3].i));
	}
label_5:;
	{
	LINE_NUMBER(2708);
	frame[4].i = (((frame[2].i) - (frame[1].i)) + (jint(1)));
	LINE_NUMBER(2709);
	frame[5].i = ((jint(3)) & (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop) ^ (jint(-1))));
	LINE_NUMBER(2711);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter_addReservedCodeSpace_int_R_int(ctx, (frame[0].o), (((jint(1)) + (frame[5].i)) + ((jint(4)) * ((jint(3)) + (frame[4].i)))));
	frame[6].i = temp0;
	LINE_NUMBER(2712);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(2713);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	jint temp1 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (-86);
	}
label_10:;
	{
	LINE_NUMBER(2714);
	if ((frame[5].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2715);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(0));
	LINE_NUMBER(2716);
	INST_IINC(5, -1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(2718);
	INST_IINC(6, 4);
	LINE_NUMBER(2719);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, temp0, sp[0].o, (frame[6].i));
	frame[6].i = temp1;
	LINE_NUMBER(2720);
	jint temp2 = frame[2].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, temp2, sp[0].o, (frame[6].i));
	LINE_NUMBER(2722);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jshort((frame[3].i)));
	LINE_NUMBER(2723);
	if ((frame[3].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack)) goto label_18;
	}
	{
	LINE_NUMBER(2724);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack = (jshort((frame[3].i)));
	}
label_18:;
	{
	LINE_NUMBER(2730);
	popStackFrame(ctx);
	return (frame[7].i);
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_markTableSwitchDefault_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:markTableSwitchDefault", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2734);
	M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(ctx, (frame[0].o), ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop));
	LINE_NUMBER(2735);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsJumpFroms;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop), (frame[1].i));
	LINE_NUMBER(2736);
	((func_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int])(ctx, (frame[0].o), (frame[1].i), (jint(-1)), ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop));
	LINE_NUMBER(2737);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:markTableSwitchCase", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2740);
	M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(ctx, (frame[0].o), ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop));
	LINE_NUMBER(2741);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsJumpFroms;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop), (frame[1].i));
	LINE_NUMBER(2742);
	((func_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop));
	LINE_NUMBER(2743);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:markTableSwitchCase", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2747);
	if ((jint(0)) > (frame[3].i)) goto label_1;
	}
	{
	if ((frame[3].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2748);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad stack index: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2749);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jshort((frame[3].i)));
	LINE_NUMBER(2750);
	M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(ctx, (frame[0].o), ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop));
	LINE_NUMBER(2751);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsJumpFroms;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop), (frame[1].i));
	LINE_NUMBER(2752);
	((func_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop));
	LINE_NUMBER(2753);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:setTableSwitchJump", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2761);
	if ((frame[3].i) < 0) goto label_1;
	}
	{
	if (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop) >= (frame[3].i)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2762);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad jump target: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2763);
	if ((frame[2].i) >= (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(2764);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad case index: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2766);
	frame[4].i = ((jint(3)) & ((frame[1].i) ^ (jint(-1))));
	LINE_NUMBER(2768);
	if ((frame[2].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(2770);
	frame[5].i = (((frame[1].i) + (jint(1))) + (frame[4].i));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(2772);
	frame[5].i = ((((frame[1].i) + (jint(1))) + (frame[4].i)) + ((jint(4)) * ((jint(3)) + (frame[2].i))));
	}
label_9:;
	{
	LINE_NUMBER(2774);
	if ((frame[1].i) < 0) goto label_10;
	}
	{
	if ((((((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop) - (16)) - (frame[4].i)) - (jint(1))) >= (frame[1].i)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(2775);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" is outside a possible range of tableswitch in already generated code"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(2779);
	jint temp0 = 255;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	if ((temp0 & ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)))) == (170)) goto label_12;
	}
	{
	LINE_NUMBER(2780);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" is not offset of tableswitch statement"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(2783);
	if ((frame[5].i) < 0) goto label_14;
	}
	{
	if (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop) >= ((frame[5].i) + (jint(4)))) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(2786);
	clinit_rhino_classfile_ClassFileWriter$ClassFileFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter$ClassFileFormatException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Too big case index: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_classfile_ClassFileWriter$ClassFileFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(2789);
	jint temp0 = (frame[3].i) - (frame[1].i);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, temp0, sp[0].o, (frame[5].i));
	LINE_NUMBER(2790);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter_acquireLabel_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:acquireLabel", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2793);
	frame[1].i = ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTableTop);
	LINE_NUMBER(2794);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2795);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2796);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (32));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsLabelTable = (jref) sp[1].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2798);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable;
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2799);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(2800);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable = (jref) (frame[2].o);
	}
label_3:;
	{
	LINE_NUMBER(2803);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTableTop = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(2804);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (jint(-1));
	LINE_NUMBER(2805);
	popStackFrame(ctx);
	return ((frame[1].i) | (bit_cast<jint>(0x80000000)));
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_markLabel_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:markLabel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2809);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	LINE_NUMBER(2810);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad label, no biscuit"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2812);
	frame[1].i = ((frame[1].i) & (jint(2147483647)));
	LINE_NUMBER(2813);
	if ((frame[1].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTableTop)) goto label_4;
	}
	{
	LINE_NUMBER(2814);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad label"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(2816);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(2817);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can only mark label once"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(2820);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop);
	LINE_NUMBER(2821);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_markLabel_int_short(jcontext ctx, jobject self, jint param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:markLabel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2824);
	((func_rhino_classfile_ClassFileWriter_markLabel_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_markLabel_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2825);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (frame[2].i);
	LINE_NUMBER(2826);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_markHandler_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:markHandler", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2829);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jint(1));
	LINE_NUMBER(2830);
	((func_rhino_classfile_ClassFileWriter_markLabel_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_markLabel_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2831);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:getLabelPC", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2834);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	LINE_NUMBER(2835);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad label, no biscuit"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2836);
	frame[1].i = ((frame[1].i) & (jint(2147483647)));
	LINE_NUMBER(2837);
	if ((frame[1].i) < ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTableTop)) goto label_4;
	}
	{
	LINE_NUMBER(2838);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad label"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(2839);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addLabelFixup_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addLabelFixup", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2843);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	LINE_NUMBER(2844);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad label, no biscuit"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2845);
	frame[1].i = ((frame[1].i) & (jint(2147483647)));
	LINE_NUMBER(2846);
	if ((frame[1].i) < ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTableTop)) goto label_4;
	}
	{
	LINE_NUMBER(2847);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad label"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(2848);
	frame[3].i = ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTableTop);
	LINE_NUMBER(2849);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTable;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTable;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(2850);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTable;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(2851);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (40));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsFixupTable = (jref) sp[1].o;
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2853);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTable;
	sp[0].o = (jobject) createArray(ctx, &class_long, ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2854);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[4].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(2855);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTable = (jref) (frame[4].o);
	}
label_8:;
	{
	LINE_NUMBER(2858);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTableTop = ((frame[3].i) + (jint(1)));
	LINE_NUMBER(2859);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTable;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[3].i)) = (((jlong((frame[1].i))) << (32)) | (jlong((frame[2].i))));
	LINE_NUMBER(2860);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_fixLabelGotos(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:fixLabelGotos", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2863);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	frame[1].o = sp[0].o;
	LINE_NUMBER(2864);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTableTop)) goto label_3;
	}
	{
	LINE_NUMBER(2865);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTable;
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[2].i)));
	LINE_NUMBER(2866);
	frame[5].i = (jint(((frame[3].l) >> (32))));
	LINE_NUMBER(2867);
	frame[6].i = (jint((frame[3].l)));
	LINE_NUMBER(2868);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLabelTable;
	frame[7].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	LINE_NUMBER(2869);
	if ((frame[7].i) != (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(2871);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unlocated label"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(2874);
	M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(ctx, (frame[0].o), (frame[7].i));
	LINE_NUMBER(2875);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsJumpFroms;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[7].i), ((frame[6].i) - (jint(1))));
	LINE_NUMBER(2876);
	frame[8].i = ((frame[7].i) - ((frame[6].i) - (jint(1))));
	LINE_NUMBER(2877);
	if ((jshort((frame[8].i))) == (frame[8].i)) goto label_14;
	}
	{
	LINE_NUMBER(2878);
	clinit_rhino_classfile_ClassFileWriter$ClassFileFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter$ClassFileFormatException);
	init_rhino_classfile_ClassFileWriter$ClassFileFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Program too complex: too big jump offset"_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(2880);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[6].i)) = (jbyte(((frame[8].i) >> (8))));
	LINE_NUMBER(2881);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[6].i) + (jint(1)))) = (jbyte((frame[8].i)));
	LINE_NUMBER(2864);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(2883);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFixupTableTop = (jint(0));
	LINE_NUMBER(2884);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter_getCurrentCodeOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:getCurrentCodeOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2891);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop);
	}

	popStackFrame(ctx);
}

jshort M_rhino_classfile_ClassFileWriter_getStackTop_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:getStackTop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2895);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop);
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_setStackTop_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:setStackTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2899);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (frame[1].i);
	LINE_NUMBER(2900);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_adjustStackTop_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:adjustStackTop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2903);
	frame[2].i = (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop) + (frame[1].i));
	LINE_NUMBER(2904);
	if ((frame[2].i) < 0) goto label_2;
	}
	{
	if ((32767) >= (frame[2].i)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2905);
	SM_rhino_classfile_ClassFileWriter_badStack_int(ctx, (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(2906);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsStackTop = (jshort((frame[2].i)));
	LINE_NUMBER(2907);
	if ((frame[2].i) <= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack)) goto label_5;
	}
	{
	LINE_NUMBER(2908);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack = (jshort((frame[2].i)));
	}
label_5:;
	LINE_NUMBER(2913);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addToCodeBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2916);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter_addReservedCodeSpace_int_R_int(ctx, (frame[0].o), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(2917);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)) = (jbyte((frame[1].i)));
	LINE_NUMBER(2918);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addToCodeInt16", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2921);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter_addReservedCodeSpace_int_R_int(ctx, (frame[0].o), (jint(2)));
	frame[2].i = temp0;
	LINE_NUMBER(2922);
	jint temp1 = frame[1].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp1, sp[0].o, (frame[2].i));
	LINE_NUMBER(2923);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter_addReservedCodeSpace_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addReservedCodeSpace", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2926);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCurrentMethod;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2927);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No method to add to"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2928);
	frame[2].i = ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop);
	LINE_NUMBER(2929);
	frame[3].i = ((frame[2].i) + (frame[1].i));
	LINE_NUMBER(2930);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(2931);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	frame[4].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2)));
	LINE_NUMBER(2932);
	if ((frame[3].i) <= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(2933);
	frame[4].i = (frame[3].i);
	}
label_8:;
	{
	LINE_NUMBER(2935);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2936);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[5].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(2937);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer = (jref) (frame[5].o);
	}
label_5:;
	{
	LINE_NUMBER(2939);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop = (frame[3].i);
	LINE_NUMBER(2940);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addExceptionHandler_int_int_int_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addExceptionHandler", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(2945);
	if (((frame[1].i) & (bit_cast<jint>(0x80000000))) == (bit_cast<jint>(0x80000000))) goto label_1;
	}
	{
	LINE_NUMBER(2946);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad startLabel"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2947);
	if (((frame[2].i) & (bit_cast<jint>(0x80000000))) == (bit_cast<jint>(0x80000000))) goto label_3;
	}
	{
	LINE_NUMBER(2948);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad endLabel"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2949);
	if (((frame[3].i) & (bit_cast<jint>(0x80000000))) == (bit_cast<jint>(0x80000000))) goto label_5;
	}
	{
	LINE_NUMBER(2950);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad handlerLabel"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(2957);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	INST_ICONST(0);
	goto label_8;
label_7:;
	{
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	sp[1].o = frame[4].o;
	LINE_NUMBER(2959);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(2960);
	clinit_rhino_classfile_ExceptionTableEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ExceptionTableEntry);
	init_rhino_classfile_ExceptionTableEntry_int_int_int_short(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2965);
	frame[7].i = ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTableTop);
	LINE_NUMBER(2966);
	if ((frame[7].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(2967);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_rhino_classfile_ExceptionTableEntry, (jint(4)));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsExceptionTable = (jref) sp[1].o;
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(2968);
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTable;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_15;
	}
	{
	LINE_NUMBER(2969);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_classfile_ExceptionTableEntry, ((frame[7].i) * (jint(2))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2970);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[8].o), (jint(0)), (frame[7].i));
	LINE_NUMBER(2971);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTable = (jref) (frame[8].o);
	}
label_15:;
	{
	LINE_NUMBER(2973);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)) = (frame[6].o);
	LINE_NUMBER(2974);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTableTop = ((frame[7].i) + (jint(1)));
	LINE_NUMBER(2976);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addLineNumberEntry_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addLineNumberEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2979);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCurrentMethod;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2980);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No method to stop"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2981);
	frame[2].i = ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTableTop);
	LINE_NUMBER(2982);
	if ((frame[2].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(2983);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (16));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsLineNumberTable = (jref) sp[1].o;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(2984);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTable;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(2985);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[2].i) * (jint(2))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2986);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(2987);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTable = (jref) (frame[3].o);
	}
label_6:;
	{
	LINE_NUMBER(2989);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = ((((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop) << (16)) + (frame[1].i));
	LINE_NUMBER(2990);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsLineNumberTableTop = ((frame[2].i) + (jint(1)));
	LINE_NUMBER(2991);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ClassFileWriter_createInitialLocals_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:createInitialLocals", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3000);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxLocals));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3001);
	frame[2].i = (jint(0));
	LINE_NUMBER(3006);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCurrentMethod;
	jint temp0 = (jint)((func_rhino_classfile_ClassFileMethod_getFlags_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileMethod_getFlags_R_short])(ctx, sp[0].o);
	if ((temp0 & (8)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3007);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"<init>"_j));
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCurrentMethod;
	sp[1].o = (jobject)((func_rhino_classfile_ClassFileMethod_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_classfile_ClassFileMethod_getName_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(3008);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (6);
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(3010);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsThisClassIndex));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	}
label_3:;
	{
	LINE_NUMBER(3015);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCurrentMethod;
	sp[0].o = (jobject)((func_rhino_classfile_ClassFileMethod_getType_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileMethod_getType_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(3016);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[3].o), (40));
	frame[4].i = temp0;
	LINE_NUMBER(3017);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[3].o), (41));
	frame[5].i = temp1;
	LINE_NUMBER(3018);
	if ((frame[4].i) != 0) goto label_10;
	}
	INST_ILOAD(5);
	if ((--sp)->i >= 0) goto label_11;
label_10:;
	{
	LINE_NUMBER(3019);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad method type"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(3021);
	frame[6].i = ((frame[4].i) + (jint(1)));
	LINE_NUMBER(3022);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(3023);
	if ((frame[6].i) >= (frame[5].i)) goto label_14;
	}
	{
	LINE_NUMBER(3024);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (frame[6].i));
	switch(temp0) {
		case 66: goto label_16;
		case 67: goto label_16;
		case 68: goto label_16;
		case 69: goto label_17;
		case 70: goto label_16;
		case 71: goto label_17;
		case 72: goto label_17;
		case 73: goto label_16;
		case 74: goto label_16;
		case 75: goto label_17;
		case 76: goto label_18;
		case 77: goto label_17;
		case 78: goto label_17;
		case 79: goto label_17;
		case 80: goto label_17;
		case 81: goto label_17;
		case 82: goto label_17;
		case 83: goto label_16;
		case 84: goto label_17;
		case 85: goto label_17;
		case 86: goto label_17;
		case 87: goto label_17;
		case 88: goto label_17;
		case 89: goto label_17;
		case 90: goto label_16;
		case 91: goto label_19;
		default: goto label_17;
	}
	}
label_16:;
	{
	LINE_NUMBER(3033);
	sp[0].o = frame[7].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (frame[6].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(3034);
	INST_IINC(6, 1);
	LINE_NUMBER(3035);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(3037);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[3].o), (59), (frame[6].i));
	frame[8].i = (temp0 + (jint(1)));
	LINE_NUMBER(3038);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[3].o), (frame[6].i), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(3039);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (frame[9].o));
	LINE_NUMBER(3040);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(3041);
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(3043);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (91));
	LINE_NUMBER(3044);
	INST_IINC(6, 1);
	LINE_NUMBER(3045);
	goto label_13;
	}
label_17:;
	{
	LINE_NUMBER(3047);
	sp[0].o = frame[7].o;
	LINE_NUMBER(3048);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_descriptorToInternalName_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(3049);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_fromType_java_lang_String_rhino_classfile_ConstantPool_R_int(ctx, sp[0].o, sp[1].o);
	frame[9].i = temp0;
	LINE_NUMBER(3050);
	sp[0].o = frame[1].o;
	jint temp1 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (frame[9].i);
	LINE_NUMBER(3051);
	jint temp2 = (jint)SM_rhino_classfile_TypeInfo_isTwoWords_int_R_boolean(ctx, (frame[9].i));
	if (temp2 == 0) goto label_32;
	}
	LINE_NUMBER(3052);
	INST_IINC(2, 1);
label_32:;
	{
	LINE_NUMBER(3054);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[7].o), (jint(0)));
	LINE_NUMBER(3055);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(3056);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_write_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3066);
	sp[0].o = (jobject)((func_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3067);
	((func_java_io_OutputStream_write_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(3068);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter_getWriteSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:getWriteSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3071);
	frame[1].i = (jint(0));
	LINE_NUMBER(3073);
	if (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSourceFileNameIndex) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3074);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SourceFile"_j))));
	}
label_2:;
	{
	LINE_NUMBER(3077);
	INST_IINC(1, 8);
	LINE_NUMBER(3078);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_getWriteSize_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getWriteSize_R_int])(ctx, sp[0].o);
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(3079);
	INST_IINC(1, 2);
	LINE_NUMBER(3080);
	INST_IINC(1, 2);
	LINE_NUMBER(3081);
	INST_IINC(1, 2);
	LINE_NUMBER(3082);
	INST_IINC(1, 2);
	LINE_NUMBER(3083);
	jint temp2 = frame[1].i;
	jint temp3 = jint(2);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsInterfaces;
	jint temp4 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	frame[1].i = (temp2 + (temp3 * temp4));
	LINE_NUMBER(3085);
	INST_IINC(1, 2);
	LINE_NUMBER(3086);
	frame[2].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFields;
	jint temp1 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_13;
	}
	{
	LINE_NUMBER(3087);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFields;
	sp[0].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	jint temp1 = (jint)((func_rhino_classfile_ClassFileField_getWriteSize_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_classfile_ClassFileField, (checkCast(ctx, &class_rhino_classfile_ClassFileField, sp[0].o)))))->vtable)[VTABLE_rhino_classfile_ClassFileField_getWriteSize_R_int])(ctx, (checkCast(ctx, &class_rhino_classfile_ClassFileField, (checkCast(ctx, &class_rhino_classfile_ClassFileField, sp[0].o)))));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(3086);
	INST_IINC(2, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(3090);
	INST_IINC(1, 2);
	LINE_NUMBER(3091);
	frame[2].i = (jint(0));
	}
label_17:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMethods;
	jint temp1 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_18;
	}
	{
	LINE_NUMBER(3092);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMethods;
	sp[0].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	jint temp1 = (jint)((func_rhino_classfile_ClassFileMethod_getWriteSize_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_classfile_ClassFileMethod, (checkCast(ctx, &class_rhino_classfile_ClassFileMethod, sp[0].o)))))->vtable)[VTABLE_rhino_classfile_ClassFileMethod_getWriteSize_R_int])(ctx, (checkCast(ctx, &class_rhino_classfile_ClassFileMethod, (checkCast(ctx, &class_rhino_classfile_ClassFileMethod, sp[0].o)))));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(3091);
	INST_IINC(2, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(3095);
	INST_IINC(1, 2);
	LINE_NUMBER(3096);
	if (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSourceFileNameIndex) == 0) goto label_22;
	}
	{
	LINE_NUMBER(3097);
	INST_IINC(1, 2);
	LINE_NUMBER(3098);
	INST_IINC(1, 4);
	LINE_NUMBER(3099);
	INST_IINC(1, 2);
	}
label_22:;
	{
	LINE_NUMBER(3101);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethods;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(3102);
	INST_IINC(1, 2);
	LINE_NUMBER(3103);
	INST_IINC(1, 4);
	LINE_NUMBER(3104);
	INST_IINC(1, 2);
	LINE_NUMBER(3105);
	frame[1].i = ((frame[1].i) + ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethodsLength));
	}
label_26:;
	{
	LINE_NUMBER(3108);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:toByteArray", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3115);
	frame[1].i = (jint(0));
	LINE_NUMBER(3116);
	frame[2].i = (jint(0));
	LINE_NUMBER(3118);
	frame[3].i = (jint(0));
	LINE_NUMBER(3119);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethods;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(3120);
	INST_IINC(2, 1);
	LINE_NUMBER(3121);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BootstrapMethods"_j))));
	frame[1].i = temp0;
	}
label_4:;
	{
	LINE_NUMBER(3124);
	if (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSourceFileNameIndex) == 0) goto label_7;
	}
	{
	LINE_NUMBER(3125);
	INST_IINC(2, 1);
	LINE_NUMBER(3126);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SourceFile"_j))));
	frame[3].i = temp0;
	}
label_7:;
	{
	LINE_NUMBER(3132);
	frame[4].i = (jint(0));
	LINE_NUMBER(3133);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter_getWriteSize_R_int(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(3134);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3136);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, (jint(-889275714)), (frame[6].o), (frame[4].i));
	frame[4].i = temp1;
	LINE_NUMBER(3137);
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (clinit_rhino_classfile_ClassFileWriter(ctx), (jint)SF_rhino_classfile_ClassFileWriter_MinorVersion), (frame[6].o), (frame[4].i));
	frame[4].i = temp2;
	LINE_NUMBER(3138);
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (clinit_rhino_classfile_ClassFileWriter(ctx), (jint)SF_rhino_classfile_ClassFileWriter_MajorVersion), (frame[6].o), (frame[4].i));
	frame[4].i = temp3;
	LINE_NUMBER(3139);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	jint temp4 = (jint)((func_rhino_classfile_ConstantPool_write_Array1_byte_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_write_Array1_byte_int_R_int])(ctx, sp[0].o, (frame[6].o), (frame[4].i));
	frame[4].i = temp4;
	LINE_NUMBER(3140);
	jint temp5 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFlags), (frame[6].o), (frame[4].i));
	frame[4].i = temp5;
	LINE_NUMBER(3141);
	jint temp6 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsThisClassIndex), (frame[6].o), (frame[4].i));
	frame[4].i = temp6;
	LINE_NUMBER(3142);
	jint temp7 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperClassIndex), (frame[6].o), (frame[4].i));
	frame[4].i = temp7;
	LINE_NUMBER(3143);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsInterfaces;
	jint temp8 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	jint temp9 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp8, (frame[6].o), (frame[4].i));
	frame[4].i = temp9;
	LINE_NUMBER(3144);
	frame[7].i = (jint(0));
	}
label_21:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsInterfaces;
	jint temp1 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_22;
	}
	{
	LINE_NUMBER(3145);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsInterfaces;
	sp[0].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	jint temp0 = (jint)((func_java_lang_Short_shortValue_R_short) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Short, (checkCast(ctx, &class_java_lang_Short, sp[0].o)))))->vtable)[VTABLE_java_lang_Short_shortValue_R_short])(ctx, (checkCast(ctx, &class_java_lang_Short, (checkCast(ctx, &class_java_lang_Short, sp[0].o)))));
	frame[8].i = temp0;
	LINE_NUMBER(3146);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[8].i), (frame[6].o), (frame[4].i));
	frame[4].i = temp1;
	LINE_NUMBER(3144);
	INST_IINC(7, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(3148);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFields;
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp0, (frame[6].o), (frame[4].i));
	frame[4].i = temp1;
	LINE_NUMBER(3149);
	frame[7].i = (jint(0));
	}
label_27:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFields;
	jint temp1 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_28;
	}
	{
	LINE_NUMBER(3150);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsFields;
	sp[0].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_rhino_classfile_ClassFileField, sp[0].o));
	LINE_NUMBER(3151);
	jint temp0 = (jint)((func_rhino_classfile_ClassFileField_write_Array1_byte_int_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_classfile_ClassFileField_write_Array1_byte_int_R_int])(ctx, (frame[8].o), (frame[6].o), (frame[4].i));
	frame[4].i = temp0;
	LINE_NUMBER(3149);
	INST_IINC(7, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(3153);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMethods;
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp0, (frame[6].o), (frame[4].i));
	frame[4].i = temp1;
	LINE_NUMBER(3154);
	frame[7].i = (jint(0));
	}
label_33:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMethods;
	jint temp1 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_34;
	}
	{
	LINE_NUMBER(3155);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMethods;
	sp[0].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_rhino_classfile_ClassFileMethod, sp[0].o));
	LINE_NUMBER(3156);
	jint temp0 = (jint)((func_rhino_classfile_ClassFileMethod_write_Array1_byte_int_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_classfile_ClassFileMethod_write_Array1_byte_int_R_int])(ctx, (frame[8].o), (frame[6].o), (frame[4].i));
	frame[4].i = temp0;
	LINE_NUMBER(3154);
	INST_IINC(7, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(3158);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[2].i), (frame[6].o), (frame[4].i));
	frame[4].i = temp0;
	LINE_NUMBER(3159);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethods;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(3160);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[1].i), (frame[6].o), (frame[4].i));
	frame[4].i = temp0;
	LINE_NUMBER(3161);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethodsLength) + (jint(2))), (frame[6].o), (frame[4].i));
	frame[4].i = temp1;
	LINE_NUMBER(3162);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethods;
	jint temp2 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp2, (frame[6].o), (frame[4].i));
	frame[4].i = temp3;
	LINE_NUMBER(3163);
	frame[7].i = (jint(0));
	}
label_44:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethods;
	jint temp1 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_39;
	}
	{
	LINE_NUMBER(3164);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsBootstrapMethods;
	sp[0].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_rhino_classfile_ClassFileWriter$BootstrapEntry, sp[0].o));
	LINE_NUMBER(3165);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((frame[8].o)))->F_code;
	jint temp0 = jint(0);
	sp[1].o = frame[6].o;
	jint temp1 = frame[4].i;
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((frame[8].o)))->F_code;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(3166);
	jint temp2 = frame[4].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((frame[8].o)))->F_code;
	frame[4].i = (temp2 + (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(3163);
	INST_IINC(7, 1);
	goto label_44;
	}
label_39:;
	{
	LINE_NUMBER(3169);
	if (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSourceFileNameIndex) == 0) goto label_49;
	}
	{
	LINE_NUMBER(3170);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (frame[3].i), (frame[6].o), (frame[4].i));
	frame[4].i = temp0;
	LINE_NUMBER(3171);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, (jint(2)), (frame[6].o), (frame[4].i));
	frame[4].i = temp1;
	LINE_NUMBER(3172);
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSourceFileNameIndex), (frame[6].o), (frame[4].i));
	frame[4].i = temp2;
	}
label_49:;
	{
	LINE_NUMBER(3175);
	if ((frame[4].i) == (frame[5].i)) goto label_53;
	}
	{
	LINE_NUMBER(3177);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_53:;
	{
	LINE_NUMBER(3180);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ClassFileWriter_getCharBuffer_int_R_Array1_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:getCharBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3184);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_tmpCharBuffer;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(3185);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_tmpCharBuffer;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2)));
	LINE_NUMBER(3186);
	if ((frame[1].i) <= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(3187);
	frame[2].i = (frame[1].i);
	}
label_4:;
	{
	LINE_NUMBER(3189);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[2].i));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_tmpCharBuffer = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(3191);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_tmpCharBuffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:addSuperBlockStart", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3201);
	if ((clinit_rhino_classfile_ClassFileWriter(ctx), (jint)SF_rhino_classfile_ClassFileWriter_GenerateStackMap) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3202);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(3203);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsSuperBlockStarts = (jref) sp[1].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(3204);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStartsTop)) goto label_5;
	}
	{
	LINE_NUMBER(3205);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStartsTop) * (jint(2))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3206);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStartsTop));
	LINE_NUMBER(3208);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts = (jref) (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(3210);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[1].o))->F_itsSuperBlockStartsTop;
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[1].o))->F_itsSuperBlockStartsTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[1].i);
	}
label_1:;
	LINE_NUMBER(3212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter_finalizeSuperBlockStarts(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:finalizeSuperBlockStarts", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3221);
	if ((clinit_rhino_classfile_ClassFileWriter(ctx), (jint)SF_rhino_classfile_ClassFileWriter_GenerateStackMap) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3222);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	if ((frame[1].i) >= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTableTop)) goto label_4;
	}
	{
	LINE_NUMBER(3223);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTable;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(3224);
	jint temp0 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, (frame[0].o), ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[2].o)))->F_itsHandlerLabel));
	frame[3].i = temp0;
	LINE_NUMBER(3225);
	M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(3222);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(3227);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts;
	SM_java_util_Arrays_sort_Array1_int_int_int(ctx, sp[0].o, (jint(0)), ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStartsTop));
	LINE_NUMBER(3228);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts;
	frame[1].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	LINE_NUMBER(3229);
	frame[2].i = (jint(1));
	LINE_NUMBER(3230);
	frame[3].i = (jint(1));
	}
label_12:;
	{
	if ((frame[3].i) >= ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStartsTop)) goto label_13;
	}
	{
	LINE_NUMBER(3231);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)));
	LINE_NUMBER(3232);
	if ((frame[1].i) == (frame[4].i)) goto label_16;
	}
	{
	LINE_NUMBER(3233);
	if ((frame[2].i) == (frame[3].i)) goto label_18;
	}
	{
	LINE_NUMBER(3234);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (frame[4].i);
	}
label_18:;
	{
	LINE_NUMBER(3236);
	INST_IINC(2, 1);
	LINE_NUMBER(3237);
	frame[1].i = (frame[4].i);
	}
label_16:;
	{
	LINE_NUMBER(3230);
	INST_IINC(3, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(3240);
	((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStartsTop = (frame[2].i);
	LINE_NUMBER(3241);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[2].i) - (jint(1))))) != ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop)) goto label_1;
	}
	{
	LINE_NUMBER(3242);
	sp[0].o = frame[0].o;
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsSuperBlockStartsTop = (((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsSuperBlockStartsTop) - (jint(1)));
	}
label_1:;
	LINE_NUMBER(3245);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_access$000_rhino_classfile_ClassFileWriter_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStartsTop);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_access$100_rhino_classfile_ClassFileWriter_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter_createInitialLocals_R_Array1_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_access$200_rhino_classfile_ClassFileWriter_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsSuperBlockStarts;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_access$300_rhino_classfile_ClassFileWriter_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBufferTop);
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_access$400_rhino_classfile_ClassFileWriter_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTableTop);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_access$500_rhino_classfile_ClassFileWriter_R_Array1_rhino_classfile_ExceptionTableEntry(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsExceptionTable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_access$600_rhino_classfile_ClassFileWriter_R_rhino_UintMap(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$600", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsJumpFroms;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_access$700_rhino_classfile_ClassFileWriter_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$700", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsCodeBuffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$800", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsConstantPool;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_access$410_rhino_classfile_ClassFileWriter_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$410", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsExceptionTableTop;
	((rhino_classfile_ClassFileWriter *) NULL_CHECK(sp[0].o))->F_itsExceptionTableTop = (temp0 - (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar SM_rhino_classfile_ClassFileWriter_access$900_int_R_char(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$900", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(16);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_arrayTypeToName_int_R_char(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_access$1000_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$1000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_sizeOfParameters_java_lang_String_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jshort SM_rhino_classfile_ClassFileWriter_access$1100_rhino_classfile_ClassFileWriter_R_short(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$1100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsThisClassIndex);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_classfile_ClassFileWriter_access$1200_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$1200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_descriptorToInternalName_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_rhino_classfile_ClassFileWriter_access$1300_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$1300", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(16);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_opcodeLength_int_boolean_R_int(ctx, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jshort SM_rhino_classfile_ClassFileWriter_access$1400_rhino_classfile_ClassFileWriter_R_short(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$1400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxLocals);
	}

	popStackFrame(ctx);
}

jshort SM_rhino_classfile_ClassFileWriter_access$1500_rhino_classfile_ClassFileWriter_R_short(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:access$1500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileWriter *) NULL_CHECK((frame[0].o)))->F_itsMaxStack);
	}

	popStackFrame(ctx);
}

void clinit_rhino_classfile_ClassFileWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_classfile_ClassFileWriter_ACC_PUBLIC = jint(1);
	SF_rhino_classfile_ClassFileWriter_ACC_PRIVATE = jint(2);
	SF_rhino_classfile_ClassFileWriter_ACC_PROTECTED = jint(4);
	SF_rhino_classfile_ClassFileWriter_ACC_STATIC = jint(8);
	SF_rhino_classfile_ClassFileWriter_ACC_FINAL = jint(16);
	SF_rhino_classfile_ClassFileWriter_ACC_SUPER = jint(32);
	SF_rhino_classfile_ClassFileWriter_ACC_SYNCHRONIZED = jint(32);
	SF_rhino_classfile_ClassFileWriter_ACC_VOLATILE = jint(64);
	SF_rhino_classfile_ClassFileWriter_ACC_TRANSIENT = jint(128);
	SF_rhino_classfile_ClassFileWriter_ACC_NATIVE = jint(256);
	SF_rhino_classfile_ClassFileWriter_ACC_ABSTRACT = jint(1024);
	SF_rhino_classfile_ClassFileWriter_SuperBlockStartsSize = jint(4);
	SF_rhino_classfile_ClassFileWriter_LineNumberTableSize = jint(16);
	SF_rhino_classfile_ClassFileWriter_ExceptionTableSize = jint(4);
	SF_rhino_classfile_ClassFileWriter_FileHeaderConstant = jint(-889275714);
	SF_rhino_classfile_ClassFileWriter_DEBUGSTACK = jint(0);
	SF_rhino_classfile_ClassFileWriter_DEBUGLABELS = jint(0);
	SF_rhino_classfile_ClassFileWriter_DEBUGCODE = jint(0);
	SF_rhino_classfile_ClassFileWriter_MIN_LABEL_TABLE_SIZE = jint(32);
	SF_rhino_classfile_ClassFileWriter_MIN_FIXUP_TABLE_SIZE = jint(40);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter:<clinit>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter(ctx);
	{
	LINE_NUMBER(56);
	frame[0].o = (jobject(nullptr));
	LINE_NUMBER(57);
	frame[1].i = (48);
	frame[2].i = (jint(0));
	}
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_6; }
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, (((jobject) &class_rhino_classfile_ClassFileWriter)))->vtable)[VTABLE_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream])(ctx, (((jobject) &class_rhino_classfile_ClassFileWriter)), (((jobject) createStringLiteral(ctx, u8"ClassFileWriter.class"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(60);
	if ((frame[0].o) != nullptr) goto label_24;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)SM_java_lang_ClassLoader_getSystemResourceAsStream_java_lang_String_R_java_io_InputStream(ctx, (((jobject) createStringLiteral(ctx, u8"org/mozilla/classfile/ClassFileWriter.class"_j))));
	frame[0].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (8));
	frame[3].o = sp[0].o;
	LINE_NUMBER(67);
	frame[4].i = (jint(0));
	}
label_27:;
	{
	LINE_NUMBER(68);
	if ((frame[4].i) >= (8)) goto label_28;
	}
	{
	LINE_NUMBER(69);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[3].o), (frame[4].i), ((8) - (frame[4].i)));
	frame[5].i = temp0;
	LINE_NUMBER(70);
	if ((frame[5].i) >= 0) goto label_31;
	}
	{
	LINE_NUMBER(71);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_31:;
	{
	LINE_NUMBER(72);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(73);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(74);
	frame[2].i = ((((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (jint(4)))) << (8)) | (((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (jint(5)))) & (255)));
	LINE_NUMBER(75);
	frame[1].i = ((((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (6))) << (8)) | (((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (7))) & (255)));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(79);
	clinit_rhino_classfile_ClassFileWriter(ctx);
	SF_rhino_classfile_ClassFileWriter_MinorVersion = (frame[2].i);
	LINE_NUMBER(80);
	clinit_rhino_classfile_ClassFileWriter(ctx);
	SF_rhino_classfile_ClassFileWriter_MajorVersion = (frame[1].i);
	LINE_NUMBER(81);
	if ((frame[1].i) < (50)) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 1;
	clinit_rhino_classfile_ClassFileWriter(ctx);
	SF_rhino_classfile_ClassFileWriter_GenerateStackMap = sp[0].i;
	LINE_NUMBER(82);
	if ((frame[0].o) == nullptr) goto label_40;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(84);
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_close])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(86);
	goto label_40;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(85);
	frame[3].o = sp[0].o;
	LINE_NUMBER(86);
	goto label_40;
	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(76);
	frame[3].o = sp[0].o;
	LINE_NUMBER(79);
	clinit_rhino_classfile_ClassFileWriter(ctx);
	SF_rhino_classfile_ClassFileWriter_MinorVersion = (frame[2].i);
	LINE_NUMBER(80);
	clinit_rhino_classfile_ClassFileWriter(ctx);
	SF_rhino_classfile_ClassFileWriter_MajorVersion = (frame[1].i);
	LINE_NUMBER(81);
	if ((frame[1].i) < (50)) goto label_45;
	}
	INST_ICONST(1);
	goto label_46;
label_45:;
	INST_ICONST(0);
label_46:;
	{
	sp -= 1;
	clinit_rhino_classfile_ClassFileWriter(ctx);
	SF_rhino_classfile_ClassFileWriter_GenerateStackMap = sp[0].i;
	LINE_NUMBER(82);
	if ((frame[0].o) == nullptr) goto label_40;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(84);
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_close])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(86);
	goto label_40;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(85);
	frame[3].o = sp[0].o;
	LINE_NUMBER(86);
	goto label_40;
	}
label_12:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	LINE_NUMBER(79);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	clinit_rhino_classfile_ClassFileWriter(ctx);
	SF_rhino_classfile_ClassFileWriter_MinorVersion = (frame[2].i);
	LINE_NUMBER(80);
	clinit_rhino_classfile_ClassFileWriter(ctx);
	SF_rhino_classfile_ClassFileWriter_MajorVersion = (frame[1].i);
	LINE_NUMBER(81);
	if ((frame[1].i) < (50)) goto label_51;
	}
	INST_ICONST(1);
	goto label_52;
label_51:;
	INST_ICONST(0);
label_52:;
	{
	sp -= 1;
	clinit_rhino_classfile_ClassFileWriter(ctx);
	SF_rhino_classfile_ClassFileWriter_GenerateStackMap = sp[0].i;
	LINE_NUMBER(82);
	if ((frame[0].o) == nullptr) goto label_54;
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(84);
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_close])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(86);
	goto label_54;
label_16:;
	LINE_NUMBER(85);
	INST_ASTORE(7);
label_54:;
	{
	LINE_NUMBER(88);
	throwException(ctx, (frame[6].o));	}
label_40:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_ClassFileWriter[] {
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
	(void *) M_rhino_classfile_ClassFileWriter_getClassName_R_java_lang_String,
	(void *) M_rhino_classfile_ClassFileWriter_addInterface_java_lang_String,
	(void *) M_rhino_classfile_ClassFileWriter_setFlags_short,
	(void *) M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short,
	(void *) M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_int,
	(void *) M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_long,
	(void *) M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_double,
	(void *) M_rhino_classfile_ClassFileWriter_addVariableDescriptor_java_lang_String_java_lang_String_int_int,
	(void *) M_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short,
	(void *) M_rhino_classfile_ClassFileWriter_stopMethod_short,
	(void *) M_rhino_classfile_ClassFileWriter_add_int,
	(void *) M_rhino_classfile_ClassFileWriter_add_int_int,
	(void *) M_rhino_classfile_ClassFileWriter_addLoadConstant_int,
	(void *) M_rhino_classfile_ClassFileWriter_addLoadConstant_long,
	(void *) M_rhino_classfile_ClassFileWriter_addLoadConstant_float,
	(void *) M_rhino_classfile_ClassFileWriter_addLoadConstant_double,
	(void *) M_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String,
	(void *) M_rhino_classfile_ClassFileWriter_add_int_int_int,
	(void *) M_rhino_classfile_ClassFileWriter_add_int_java_lang_String,
	(void *) M_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String,
	(void *) M_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String,
	(void *) M_rhino_classfile_ClassFileWriter_addInvokeDynamic_java_lang_String_java_lang_String_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object,
	(void *) M_rhino_classfile_ClassFileWriter_addPush_int,
	(void *) M_rhino_classfile_ClassFileWriter_addPush_boolean,
	(void *) M_rhino_classfile_ClassFileWriter_addPush_long,
	(void *) M_rhino_classfile_ClassFileWriter_addPush_double,
	(void *) M_rhino_classfile_ClassFileWriter_addPush_java_lang_String,
	(void *) M_rhino_classfile_ClassFileWriter_isUnderStringSizeLimit_java_lang_String_R_boolean,
	(void *) M_rhino_classfile_ClassFileWriter_addIStore_int,
	(void *) M_rhino_classfile_ClassFileWriter_addLStore_int,
	(void *) M_rhino_classfile_ClassFileWriter_addFStore_int,
	(void *) M_rhino_classfile_ClassFileWriter_addDStore_int,
	(void *) M_rhino_classfile_ClassFileWriter_addAStore_int,
	(void *) M_rhino_classfile_ClassFileWriter_addILoad_int,
	(void *) M_rhino_classfile_ClassFileWriter_addLLoad_int,
	(void *) M_rhino_classfile_ClassFileWriter_addFLoad_int,
	(void *) M_rhino_classfile_ClassFileWriter_addDLoad_int,
	(void *) M_rhino_classfile_ClassFileWriter_addALoad_int,
	(void *) M_rhino_classfile_ClassFileWriter_addLoadThis,
	(void *) M_rhino_classfile_ClassFileWriter_xop_int_int_int,
	(void *) M_rhino_classfile_ClassFileWriter_addTableSwitch_int_int_R_int,
	(void *) M_rhino_classfile_ClassFileWriter_markTableSwitchDefault_int,
	(void *) M_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int,
	(void *) M_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int_int,
	(void *) M_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int,
	(void *) M_rhino_classfile_ClassFileWriter_acquireLabel_R_int,
	(void *) M_rhino_classfile_ClassFileWriter_markLabel_int,
	(void *) M_rhino_classfile_ClassFileWriter_markLabel_int_short,
	(void *) M_rhino_classfile_ClassFileWriter_markHandler_int,
	(void *) M_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int,
	(void *) M_rhino_classfile_ClassFileWriter_addLabelFixup_int_int,
	(void *) M_rhino_classfile_ClassFileWriter_fixLabelGotos,
	(void *) M_rhino_classfile_ClassFileWriter_getCurrentCodeOffset_R_int,
	(void *) M_rhino_classfile_ClassFileWriter_getStackTop_R_short,
	(void *) M_rhino_classfile_ClassFileWriter_setStackTop_short,
	(void *) M_rhino_classfile_ClassFileWriter_adjustStackTop_int,
	(void *) M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int,
	(void *) M_rhino_classfile_ClassFileWriter_addToCodeInt16_int,
	(void *) M_rhino_classfile_ClassFileWriter_addReservedCodeSpace_int_R_int,
	(void *) M_rhino_classfile_ClassFileWriter_addExceptionHandler_int_int_int_java_lang_String,
	(void *) M_rhino_classfile_ClassFileWriter_addLineNumberEntry_short,
	(void *) M_rhino_classfile_ClassFileWriter_createInitialLocals_R_Array1_int,
	(void *) M_rhino_classfile_ClassFileWriter_write_java_io_OutputStream,
	(void *) M_rhino_classfile_ClassFileWriter_getWriteSize_R_int,
	(void *) M_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte,
	(void *) M_rhino_classfile_ClassFileWriter_getCharBuffer_int_R_Array1_char,
	(void *) M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int,
	(void *) M_rhino_classfile_ClassFileWriter_finalizeSuperBlockStarts,
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
	{ "addInterface", "(Ljava/lang/String;)V" },
	{ "setFlags", "(S)V" },
	{ "addField", "(Ljava/lang/String;Ljava/lang/String;S)V" },
	{ "addField", "(Ljava/lang/String;Ljava/lang/String;SI)V" },
	{ "addField", "(Ljava/lang/String;Ljava/lang/String;SJ)V" },
	{ "addField", "(Ljava/lang/String;Ljava/lang/String;SD)V" },
	{ "addVariableDescriptor", "(Ljava/lang/String;Ljava/lang/String;II)V" },
	{ "startMethod", "(Ljava/lang/String;Ljava/lang/String;S)V" },
	{ "stopMethod", "(S)V" },
	{ "add", "(I)V" },
	{ "add", "(II)V" },
	{ "addLoadConstant", "(I)V" },
	{ "addLoadConstant", "(J)V" },
	{ "addLoadConstant", "(F)V" },
	{ "addLoadConstant", "(D)V" },
	{ "addLoadConstant", "(Ljava/lang/String;)V" },
	{ "add", "(III)V" },
	{ "add", "(ILjava/lang/String;)V" },
	{ "add", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "addInvoke", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "addInvokeDynamic", "(Ljava/lang/String;Ljava/lang/String;Lrhino/classfile/ClassFileWriter$MHandle;[Ljava/lang/Object;)V" },
	{ "addPush", "(I)V" },
	{ "addPush", "(Z)V" },
	{ "addPush", "(J)V" },
	{ "addPush", "(D)V" },
	{ "addPush", "(Ljava/lang/String;)V" },
	{ "isUnderStringSizeLimit", "(Ljava/lang/String;)Z" },
	{ "addIStore", "(I)V" },
	{ "addLStore", "(I)V" },
	{ "addFStore", "(I)V" },
	{ "addDStore", "(I)V" },
	{ "addAStore", "(I)V" },
	{ "addILoad", "(I)V" },
	{ "addLLoad", "(I)V" },
	{ "addFLoad", "(I)V" },
	{ "addDLoad", "(I)V" },
	{ "addALoad", "(I)V" },
	{ "addLoadThis", "()V" },
	{ "xop", "(III)V" },
	{ "addTableSwitch", "(II)I" },
	{ "markTableSwitchDefault", "(I)V" },
	{ "markTableSwitchCase", "(II)V" },
	{ "markTableSwitchCase", "(III)V" },
	{ "setTableSwitchJump", "(III)V" },
	{ "acquireLabel", "()I" },
	{ "markLabel", "(I)V" },
	{ "markLabel", "(IS)V" },
	{ "markHandler", "(I)V" },
	{ "getLabelPC", "(I)I" },
	{ "addLabelFixup", "(II)V" },
	{ "fixLabelGotos", "()V" },
	{ "getCurrentCodeOffset", "()I" },
	{ "getStackTop", "()S" },
	{ "setStackTop", "(S)V" },
	{ "adjustStackTop", "(I)V" },
	{ "addToCodeBuffer", "(I)V" },
	{ "addToCodeInt16", "(I)V" },
	{ "addReservedCodeSpace", "(I)I" },
	{ "addExceptionHandler", "(IIILjava/lang/String;)V" },
	{ "addLineNumberEntry", "(S)V" },
	{ "createInitialLocals", "()[I" },
	{ "write", "(Ljava/io/OutputStream;)V" },
	{ "getWriteSize", "()I" },
	{ "toByteArray", "()[B" },
	{ "getCharBuffer", "(I)[C" },
	{ "addSuperBlockStart", "(I)V" },
	{ "finalizeSuperBlockStarts", "()V" },
};

static jclass innerClasses[] {
	&class_rhino_classfile_ClassFileWriter$BootstrapEntry,
	&class_rhino_classfile_ClassFileWriter$StackMapTable,
	&class_rhino_classfile_ClassFileWriter$MHandle,
	&class_rhino_classfile_ClassFileWriter$ClassFileFormatException,
};

static FieldMetadata fields[] {
	{ "ACC_PUBLIC", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_PUBLIC, "S", 25 },
	{ "ACC_PRIVATE", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_PRIVATE, "S", 25 },
	{ "ACC_PROTECTED", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_PROTECTED, "S", 25 },
	{ "ACC_STATIC", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_STATIC, "S", 25 },
	{ "ACC_FINAL", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_FINAL, "S", 25 },
	{ "ACC_SUPER", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_SUPER, "S", 25 },
	{ "ACC_SYNCHRONIZED", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_SYNCHRONIZED, "S", 25 },
	{ "ACC_VOLATILE", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_VOLATILE, "S", 25 },
	{ "ACC_TRANSIENT", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_TRANSIENT, "S", 25 },
	{ "ACC_NATIVE", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_NATIVE, "S", 25 },
	{ "ACC_ABSTRACT", &class_short, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ACC_ABSTRACT, "S", 25 },
	{ "SuperBlockStartsSize", &class_int, (intptr_t) &SF_rhino_classfile_ClassFileWriter_SuperBlockStartsSize, "I", 26 },
	{ "LineNumberTableSize", &class_int, (intptr_t) &SF_rhino_classfile_ClassFileWriter_LineNumberTableSize, "I", 26 },
	{ "ExceptionTableSize", &class_int, (intptr_t) &SF_rhino_classfile_ClassFileWriter_ExceptionTableSize, "I", 26 },
	{ "MajorVersion", &class_int, (intptr_t) &SF_rhino_classfile_ClassFileWriter_MajorVersion, "I", 26 },
	{ "MinorVersion", &class_int, (intptr_t) &SF_rhino_classfile_ClassFileWriter_MinorVersion, "I", 26 },
	{ "GenerateStackMap", &class_boolean, (intptr_t) &SF_rhino_classfile_ClassFileWriter_GenerateStackMap, "Z", 26 },
	{ "FileHeaderConstant", &class_int, (intptr_t) &SF_rhino_classfile_ClassFileWriter_FileHeaderConstant, "I", 26 },
	{ "DEBUGSTACK", &class_boolean, (intptr_t) &SF_rhino_classfile_ClassFileWriter_DEBUGSTACK, "Z", 26 },
	{ "DEBUGLABELS", &class_boolean, (intptr_t) &SF_rhino_classfile_ClassFileWriter_DEBUGLABELS, "Z", 26 },
	{ "DEBUGCODE", &class_boolean, (intptr_t) &SF_rhino_classfile_ClassFileWriter_DEBUGCODE, "Z", 26 },
	{ "MIN_LABEL_TABLE_SIZE", &class_int, (intptr_t) &SF_rhino_classfile_ClassFileWriter_MIN_LABEL_TABLE_SIZE, "I", 26 },
	{ "MIN_FIXUP_TABLE_SIZE", &class_int, (intptr_t) &SF_rhino_classfile_ClassFileWriter_MIN_FIXUP_TABLE_SIZE, "I", 26 },
	{ "itsSuperBlockStarts", getArrayClass(&class_int, 1), offsetof(rhino_classfile_ClassFileWriter, F_itsSuperBlockStarts), "[I", 2 },
	{ "itsSuperBlockStartsTop", &class_int, offsetof(rhino_classfile_ClassFileWriter, F_itsSuperBlockStartsTop), "I", 2 },
	{ "itsJumpFroms", &class_rhino_UintMap, offsetof(rhino_classfile_ClassFileWriter, F_itsJumpFroms), "Lrhino/UintMap;", 2 },
	{ "generatedClassName", &class_java_lang_String, offsetof(rhino_classfile_ClassFileWriter, F_generatedClassName), "Ljava/lang/String;", 2 },
	{ "itsExceptionTable", getArrayClass(&class_rhino_classfile_ExceptionTableEntry, 1), offsetof(rhino_classfile_ClassFileWriter, F_itsExceptionTable), "[Lrhino/classfile/ExceptionTableEntry;", 2 },
	{ "itsExceptionTableTop", &class_int, offsetof(rhino_classfile_ClassFileWriter, F_itsExceptionTableTop), "I", 2 },
	{ "itsLineNumberTable", getArrayClass(&class_int, 1), offsetof(rhino_classfile_ClassFileWriter, F_itsLineNumberTable), "[I", 2 },
	{ "itsLineNumberTableTop", &class_int, offsetof(rhino_classfile_ClassFileWriter, F_itsLineNumberTableTop), "I", 2 },
	{ "itsCodeBuffer", getArrayClass(&class_byte, 1), offsetof(rhino_classfile_ClassFileWriter, F_itsCodeBuffer), "[B", 2 },
	{ "itsCodeBufferTop", &class_int, offsetof(rhino_classfile_ClassFileWriter, F_itsCodeBufferTop), "I", 2 },
	{ "itsConstantPool", &class_rhino_classfile_ConstantPool, offsetof(rhino_classfile_ClassFileWriter, F_itsConstantPool), "Lrhino/classfile/ConstantPool;", 2 },
	{ "itsCurrentMethod", &class_rhino_classfile_ClassFileMethod, offsetof(rhino_classfile_ClassFileWriter, F_itsCurrentMethod), "Lrhino/classfile/ClassFileMethod;", 2 },
	{ "itsStackTop", &class_short, offsetof(rhino_classfile_ClassFileWriter, F_itsStackTop), "S", 2 },
	{ "itsMaxStack", &class_short, offsetof(rhino_classfile_ClassFileWriter, F_itsMaxStack), "S", 2 },
	{ "itsMaxLocals", &class_short, offsetof(rhino_classfile_ClassFileWriter, F_itsMaxLocals), "S", 2 },
	{ "itsMethods", &class_rhino_ObjArray, offsetof(rhino_classfile_ClassFileWriter, F_itsMethods), "Lrhino/ObjArray;", 2 },
	{ "itsFields", &class_rhino_ObjArray, offsetof(rhino_classfile_ClassFileWriter, F_itsFields), "Lrhino/ObjArray;", 2 },
	{ "itsInterfaces", &class_rhino_ObjArray, offsetof(rhino_classfile_ClassFileWriter, F_itsInterfaces), "Lrhino/ObjArray;", 2 },
	{ "itsFlags", &class_short, offsetof(rhino_classfile_ClassFileWriter, F_itsFlags), "S", 2 },
	{ "itsThisClassIndex", &class_short, offsetof(rhino_classfile_ClassFileWriter, F_itsThisClassIndex), "S", 2 },
	{ "itsSuperClassIndex", &class_short, offsetof(rhino_classfile_ClassFileWriter, F_itsSuperClassIndex), "S", 2 },
	{ "itsSourceFileNameIndex", &class_short, offsetof(rhino_classfile_ClassFileWriter, F_itsSourceFileNameIndex), "S", 2 },
	{ "itsLabelTable", getArrayClass(&class_int, 1), offsetof(rhino_classfile_ClassFileWriter, F_itsLabelTable), "[I", 2 },
	{ "itsLabelTableTop", &class_int, offsetof(rhino_classfile_ClassFileWriter, F_itsLabelTableTop), "I", 2 },
	{ "itsFixupTable", getArrayClass(&class_long, 1), offsetof(rhino_classfile_ClassFileWriter, F_itsFixupTable), "[J", 2 },
	{ "itsFixupTableTop", &class_int, offsetof(rhino_classfile_ClassFileWriter, F_itsFixupTableTop), "I", 2 },
	{ "itsVarDescriptors", &class_rhino_ObjArray, offsetof(rhino_classfile_ClassFileWriter, F_itsVarDescriptors), "Lrhino/ObjArray;", 2 },
	{ "itsBootstrapMethods", &class_rhino_ObjArray, offsetof(rhino_classfile_ClassFileWriter, F_itsBootstrapMethods), "Lrhino/ObjArray;", 2 },
	{ "itsBootstrapMethodsLength", &class_int, offsetof(rhino_classfile_ClassFileWriter, F_itsBootstrapMethodsLength), "I", 2 },
	{ "tmpCharBuffer", getArrayClass(&class_char, 1), offsetof(rhino_classfile_ClassFileWriter, F_tmpCharBuffer), "[C", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "getSlashedForm", (intptr_t) SM_rhino_classfile_ClassFileWriter_getSlashedForm_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 8 },
	{ "classNameToSignature", (intptr_t) SM_rhino_classfile_ClassFileWriter_classNameToSignature_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "arrayTypeToName", (intptr_t) SM_rhino_classfile_ClassFileWriter_arrayTypeToName_int_R_char, 0, "(I)C", 10 },
	{ "classDescriptorToInternalName", (intptr_t) SM_rhino_classfile_ClassFileWriter_classDescriptorToInternalName_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "descriptorToInternalName", (intptr_t) SM_rhino_classfile_ClassFileWriter_descriptorToInternalName_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "putInt64", (intptr_t) SM_rhino_classfile_ClassFileWriter_putInt64_long_Array1_byte_int_R_int, 0, "(J[BI)I", 8 },
	{ "badStack", (intptr_t) SM_rhino_classfile_ClassFileWriter_badStack_int, 0, "(I)V", 10 },
	{ "sizeOfParameters", (intptr_t) SM_rhino_classfile_ClassFileWriter_sizeOfParameters_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 10 },
	{ "putInt16", (intptr_t) SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int, 0, "(I[BI)I", 8 },
	{ "putInt32", (intptr_t) SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int, 0, "(I[BI)I", 8 },
	{ "opcodeLength", (intptr_t) SM_rhino_classfile_ClassFileWriter_opcodeLength_int_boolean_R_int, 0, "(IZ)I", 10 },
	{ "opcodeCount", (intptr_t) SM_rhino_classfile_ClassFileWriter_opcodeCount_int_R_int, 0, "(I)I", 10 },
	{ "stackChange", (intptr_t) SM_rhino_classfile_ClassFileWriter_stackChange_int_R_int, 0, "(I)I", 10 },
	{ "bytecodeStr", (intptr_t) SM_rhino_classfile_ClassFileWriter_bytecodeStr_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 10 },
	{ "getClassName", (intptr_t) M_rhino_classfile_ClassFileWriter_getClassName_R_java_lang_String, VTABLE_rhino_classfile_ClassFileWriter_getClassName_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "addInterface", (intptr_t) M_rhino_classfile_ClassFileWriter_addInterface_java_lang_String, VTABLE_rhino_classfile_ClassFileWriter_addInterface_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setFlags", (intptr_t) M_rhino_classfile_ClassFileWriter_setFlags_short, VTABLE_rhino_classfile_ClassFileWriter_setFlags_short, "(S)V", 1 },
	{ "addField", (intptr_t) M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short, VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short, "(Ljava/lang/String;Ljava/lang/String;S)V", 1 },
	{ "addField", (intptr_t) M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_int, VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_int, "(Ljava/lang/String;Ljava/lang/String;SI)V", 1 },
	{ "addField", (intptr_t) M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_long, VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_long, "(Ljava/lang/String;Ljava/lang/String;SJ)V", 1 },
	{ "addField", (intptr_t) M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_double, VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_double, "(Ljava/lang/String;Ljava/lang/String;SD)V", 1 },
	{ "addVariableDescriptor", (intptr_t) M_rhino_classfile_ClassFileWriter_addVariableDescriptor_java_lang_String_java_lang_String_int_int, VTABLE_rhino_classfile_ClassFileWriter_addVariableDescriptor_java_lang_String_java_lang_String_int_int, "(Ljava/lang/String;Ljava/lang/String;II)V", 1 },
	{ "startMethod", (intptr_t) M_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short, VTABLE_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short, "(Ljava/lang/String;Ljava/lang/String;S)V", 1 },
	{ "stopMethod", (intptr_t) M_rhino_classfile_ClassFileWriter_stopMethod_short, VTABLE_rhino_classfile_ClassFileWriter_stopMethod_short, "(S)V", 1 },
	{ "add", (intptr_t) M_rhino_classfile_ClassFileWriter_add_int, VTABLE_rhino_classfile_ClassFileWriter_add_int, "(I)V", 1 },
	{ "add", (intptr_t) M_rhino_classfile_ClassFileWriter_add_int_int, VTABLE_rhino_classfile_ClassFileWriter_add_int_int, "(II)V", 1 },
	{ "addLoadConstant", (intptr_t) M_rhino_classfile_ClassFileWriter_addLoadConstant_int, VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_int, "(I)V", 1 },
	{ "addLoadConstant", (intptr_t) M_rhino_classfile_ClassFileWriter_addLoadConstant_long, VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_long, "(J)V", 1 },
	{ "addLoadConstant", (intptr_t) M_rhino_classfile_ClassFileWriter_addLoadConstant_float, VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_float, "(F)V", 1 },
	{ "addLoadConstant", (intptr_t) M_rhino_classfile_ClassFileWriter_addLoadConstant_double, VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_double, "(D)V", 1 },
	{ "addLoadConstant", (intptr_t) M_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String, VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "add", (intptr_t) M_rhino_classfile_ClassFileWriter_add_int_int_int, VTABLE_rhino_classfile_ClassFileWriter_add_int_int_int, "(III)V", 1 },
	{ "add", (intptr_t) M_rhino_classfile_ClassFileWriter_add_int_java_lang_String, VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String, "(ILjava/lang/String;)V", 1 },
	{ "add", (intptr_t) M_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String, VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String, "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "addInvoke", (intptr_t) M_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String, VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String, "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "addInvokeDynamic", (intptr_t) M_rhino_classfile_ClassFileWriter_addInvokeDynamic_java_lang_String_java_lang_String_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object, VTABLE_rhino_classfile_ClassFileWriter_addInvokeDynamic_java_lang_String_java_lang_String_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object, "(Ljava/lang/String;Ljava/lang/String;Lrhino/classfile/ClassFileWriter$MHandle;[Ljava/lang/Object;)V", 129 },
	{ "addPush", (intptr_t) M_rhino_classfile_ClassFileWriter_addPush_int, VTABLE_rhino_classfile_ClassFileWriter_addPush_int, "(I)V", 1 },
	{ "addPush", (intptr_t) M_rhino_classfile_ClassFileWriter_addPush_boolean, VTABLE_rhino_classfile_ClassFileWriter_addPush_boolean, "(Z)V", 1 },
	{ "addPush", (intptr_t) M_rhino_classfile_ClassFileWriter_addPush_long, VTABLE_rhino_classfile_ClassFileWriter_addPush_long, "(J)V", 1 },
	{ "addPush", (intptr_t) M_rhino_classfile_ClassFileWriter_addPush_double, VTABLE_rhino_classfile_ClassFileWriter_addPush_double, "(D)V", 1 },
	{ "addPush", (intptr_t) M_rhino_classfile_ClassFileWriter_addPush_java_lang_String, VTABLE_rhino_classfile_ClassFileWriter_addPush_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "isUnderStringSizeLimit", (intptr_t) M_rhino_classfile_ClassFileWriter_isUnderStringSizeLimit_java_lang_String_R_boolean, VTABLE_rhino_classfile_ClassFileWriter_isUnderStringSizeLimit_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "addIStore", (intptr_t) M_rhino_classfile_ClassFileWriter_addIStore_int, VTABLE_rhino_classfile_ClassFileWriter_addIStore_int, "(I)V", 1 },
	{ "addLStore", (intptr_t) M_rhino_classfile_ClassFileWriter_addLStore_int, VTABLE_rhino_classfile_ClassFileWriter_addLStore_int, "(I)V", 1 },
	{ "addFStore", (intptr_t) M_rhino_classfile_ClassFileWriter_addFStore_int, VTABLE_rhino_classfile_ClassFileWriter_addFStore_int, "(I)V", 1 },
	{ "addDStore", (intptr_t) M_rhino_classfile_ClassFileWriter_addDStore_int, VTABLE_rhino_classfile_ClassFileWriter_addDStore_int, "(I)V", 1 },
	{ "addAStore", (intptr_t) M_rhino_classfile_ClassFileWriter_addAStore_int, VTABLE_rhino_classfile_ClassFileWriter_addAStore_int, "(I)V", 1 },
	{ "addILoad", (intptr_t) M_rhino_classfile_ClassFileWriter_addILoad_int, VTABLE_rhino_classfile_ClassFileWriter_addILoad_int, "(I)V", 1 },
	{ "addLLoad", (intptr_t) M_rhino_classfile_ClassFileWriter_addLLoad_int, VTABLE_rhino_classfile_ClassFileWriter_addLLoad_int, "(I)V", 1 },
	{ "addFLoad", (intptr_t) M_rhino_classfile_ClassFileWriter_addFLoad_int, VTABLE_rhino_classfile_ClassFileWriter_addFLoad_int, "(I)V", 1 },
	{ "addDLoad", (intptr_t) M_rhino_classfile_ClassFileWriter_addDLoad_int, VTABLE_rhino_classfile_ClassFileWriter_addDLoad_int, "(I)V", 1 },
	{ "addALoad", (intptr_t) M_rhino_classfile_ClassFileWriter_addALoad_int, VTABLE_rhino_classfile_ClassFileWriter_addALoad_int, "(I)V", 1 },
	{ "addLoadThis", (intptr_t) M_rhino_classfile_ClassFileWriter_addLoadThis, VTABLE_rhino_classfile_ClassFileWriter_addLoadThis, "()V", 1 },
	{ "xop", (intptr_t) M_rhino_classfile_ClassFileWriter_xop_int_int_int, VTABLE_rhino_classfile_ClassFileWriter_xop_int_int_int, "(III)V", 2 },
	{ "addTableSwitch", (intptr_t) M_rhino_classfile_ClassFileWriter_addTableSwitch_int_int_R_int, VTABLE_rhino_classfile_ClassFileWriter_addTableSwitch_int_int_R_int, "(II)I", 1 },
	{ "markTableSwitchDefault", (intptr_t) M_rhino_classfile_ClassFileWriter_markTableSwitchDefault_int, VTABLE_rhino_classfile_ClassFileWriter_markTableSwitchDefault_int, "(I)V", 17 },
	{ "markTableSwitchCase", (intptr_t) M_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int, VTABLE_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int, "(II)V", 17 },
	{ "markTableSwitchCase", (intptr_t) M_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int_int, VTABLE_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int_int, "(III)V", 17 },
	{ "setTableSwitchJump", (intptr_t) M_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int, VTABLE_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int, "(III)V", 1 },
	{ "acquireLabel", (intptr_t) M_rhino_classfile_ClassFileWriter_acquireLabel_R_int, VTABLE_rhino_classfile_ClassFileWriter_acquireLabel_R_int, "()I", 1 },
	{ "markLabel", (intptr_t) M_rhino_classfile_ClassFileWriter_markLabel_int, VTABLE_rhino_classfile_ClassFileWriter_markLabel_int, "(I)V", 1 },
	{ "markLabel", (intptr_t) M_rhino_classfile_ClassFileWriter_markLabel_int_short, VTABLE_rhino_classfile_ClassFileWriter_markLabel_int_short, "(IS)V", 1 },
	{ "markHandler", (intptr_t) M_rhino_classfile_ClassFileWriter_markHandler_int, VTABLE_rhino_classfile_ClassFileWriter_markHandler_int, "(I)V", 1 },
	{ "getLabelPC", (intptr_t) M_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int, VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int, "(I)I", 1 },
	{ "addLabelFixup", (intptr_t) M_rhino_classfile_ClassFileWriter_addLabelFixup_int_int, VTABLE_rhino_classfile_ClassFileWriter_addLabelFixup_int_int, "(II)V", 2 },
	{ "fixLabelGotos", (intptr_t) M_rhino_classfile_ClassFileWriter_fixLabelGotos, VTABLE_rhino_classfile_ClassFileWriter_fixLabelGotos, "()V", 2 },
	{ "getCurrentCodeOffset", (intptr_t) M_rhino_classfile_ClassFileWriter_getCurrentCodeOffset_R_int, VTABLE_rhino_classfile_ClassFileWriter_getCurrentCodeOffset_R_int, "()I", 1 },
	{ "getStackTop", (intptr_t) M_rhino_classfile_ClassFileWriter_getStackTop_R_short, VTABLE_rhino_classfile_ClassFileWriter_getStackTop_R_short, "()S", 1 },
	{ "setStackTop", (intptr_t) M_rhino_classfile_ClassFileWriter_setStackTop_short, VTABLE_rhino_classfile_ClassFileWriter_setStackTop_short, "(S)V", 1 },
	{ "adjustStackTop", (intptr_t) M_rhino_classfile_ClassFileWriter_adjustStackTop_int, VTABLE_rhino_classfile_ClassFileWriter_adjustStackTop_int, "(I)V", 1 },
	{ "addToCodeBuffer", (intptr_t) M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int, VTABLE_rhino_classfile_ClassFileWriter_addToCodeBuffer_int, "(I)V", 2 },
	{ "addToCodeInt16", (intptr_t) M_rhino_classfile_ClassFileWriter_addToCodeInt16_int, VTABLE_rhino_classfile_ClassFileWriter_addToCodeInt16_int, "(I)V", 2 },
	{ "addReservedCodeSpace", (intptr_t) M_rhino_classfile_ClassFileWriter_addReservedCodeSpace_int_R_int, VTABLE_rhino_classfile_ClassFileWriter_addReservedCodeSpace_int_R_int, "(I)I", 2 },
	{ "addExceptionHandler", (intptr_t) M_rhino_classfile_ClassFileWriter_addExceptionHandler_int_int_int_java_lang_String, VTABLE_rhino_classfile_ClassFileWriter_addExceptionHandler_int_int_int_java_lang_String, "(IIILjava/lang/String;)V", 1 },
	{ "addLineNumberEntry", (intptr_t) M_rhino_classfile_ClassFileWriter_addLineNumberEntry_short, VTABLE_rhino_classfile_ClassFileWriter_addLineNumberEntry_short, "(S)V", 1 },
	{ "createInitialLocals", (intptr_t) M_rhino_classfile_ClassFileWriter_createInitialLocals_R_Array1_int, VTABLE_rhino_classfile_ClassFileWriter_createInitialLocals_R_Array1_int, "()[I", 2 },
	{ "write", (intptr_t) M_rhino_classfile_ClassFileWriter_write_java_io_OutputStream, VTABLE_rhino_classfile_ClassFileWriter_write_java_io_OutputStream, "(Ljava/io/OutputStream;)V", 1 },
	{ "getWriteSize", (intptr_t) M_rhino_classfile_ClassFileWriter_getWriteSize_R_int, VTABLE_rhino_classfile_ClassFileWriter_getWriteSize_R_int, "()I", 2 },
	{ "toByteArray", (intptr_t) M_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte, VTABLE_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte, "()[B", 1 },
	{ "getCharBuffer", (intptr_t) M_rhino_classfile_ClassFileWriter_getCharBuffer_int_R_Array1_char, VTABLE_rhino_classfile_ClassFileWriter_getCharBuffer_int_R_Array1_char, "(I)[C", 16 },
	{ "addSuperBlockStart", (intptr_t) M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int, VTABLE_rhino_classfile_ClassFileWriter_addSuperBlockStart_int, "(I)V", 2 },
	{ "finalizeSuperBlockStarts", (intptr_t) M_rhino_classfile_ClassFileWriter_finalizeSuperBlockStarts, VTABLE_rhino_classfile_ClassFileWriter_finalizeSuperBlockStarts, "()V", 2 },
	{ "access$000", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$000_rhino_classfile_ClassFileWriter_R_int, 0, "(Lrhino/classfile/ClassFileWriter;)I", 4104 },
	{ "access$100", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$100_rhino_classfile_ClassFileWriter_R_Array1_int, 0, "(Lrhino/classfile/ClassFileWriter;)[I", 4104 },
	{ "access$200", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$200_rhino_classfile_ClassFileWriter_R_Array1_int, 0, "(Lrhino/classfile/ClassFileWriter;)[I", 4104 },
	{ "access$300", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$300_rhino_classfile_ClassFileWriter_R_int, 0, "(Lrhino/classfile/ClassFileWriter;)I", 4104 },
	{ "access$400", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$400_rhino_classfile_ClassFileWriter_R_int, 0, "(Lrhino/classfile/ClassFileWriter;)I", 4104 },
	{ "access$500", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$500_rhino_classfile_ClassFileWriter_R_Array1_rhino_classfile_ExceptionTableEntry, 0, "(Lrhino/classfile/ClassFileWriter;)[Lrhino/classfile/ExceptionTableEntry;", 4104 },
	{ "access$600", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$600_rhino_classfile_ClassFileWriter_R_rhino_UintMap, 0, "(Lrhino/classfile/ClassFileWriter;)Lrhino/UintMap;", 4104 },
	{ "access$700", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$700_rhino_classfile_ClassFileWriter_R_Array1_byte, 0, "(Lrhino/classfile/ClassFileWriter;)[B", 4104 },
	{ "access$800", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool, 0, "(Lrhino/classfile/ClassFileWriter;)Lrhino/classfile/ConstantPool;", 4104 },
	{ "access$410", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$410_rhino_classfile_ClassFileWriter_R_int, 0, "(Lrhino/classfile/ClassFileWriter;)I", 4104 },
	{ "access$900", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$900_int_R_char, 0, "(I)C", 4104 },
	{ "access$1000", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$1000_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 4104 },
	{ "access$1100", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$1100_rhino_classfile_ClassFileWriter_R_short, 0, "(Lrhino/classfile/ClassFileWriter;)S", 4104 },
	{ "access$1200", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$1200_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 4104 },
	{ "access$1300", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$1300_int_boolean_R_int, 0, "(IZ)I", 4104 },
	{ "access$1400", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$1400_rhino_classfile_ClassFileWriter_R_short, 0, "(Lrhino/classfile/ClassFileWriter;)S", 4104 },
	{ "access$1500", (intptr_t) SM_rhino_classfile_ClassFileWriter_access$1500_rhino_classfile_ClassFileWriter_R_short, 0, "(Lrhino/classfile/ClassFileWriter;)S", 4104 },
	{ "<clinit>", (intptr_t) clinit_rhino_classfile_ClassFileWriter, 0, "()V", 8 },
};

Class class_rhino_classfile_ClassFileWriter{
		.nativeName = (intptr_t) "rhino/classfile/ClassFileWriter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_ClassFileWriter),
		.classVtable = (intptr_t) vtable_rhino_classfile_ClassFileWriter,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_ClassFileWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_ClassFileWriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 53,
		.nativeFields = (intptr_t) fields,
		.methodCount = 101,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 79,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_ClassFileWriter = registerClass(&class_rhino_classfile_ClassFileWriter);

}
