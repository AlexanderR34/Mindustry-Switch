#include "rhino/classfile/ConstantPool.h"
#include "java/lang/Integer.h"
#include "rhino/UintMap.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Byte.h"
#include "java/lang/Number.h"
#include "java/lang/Boolean.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/classfile/ClassFileWriter_MHandle.h"
#include "java/lang/Float.h"
#include "java/lang/Long.h"
#include "java/lang/Short.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "rhino/classfile/ConstantEntry.h"
#include "rhino/classfile/FieldOrMethodRef.h"
#include "rhino/ObjToIntMap.h"
#include "rhino/classfile/ClassFileWriter.h"
#include "rhino/classfile/ConstantPool.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"

extern "C" {

jint SF_rhino_classfile_ConstantPool_ConstantPoolSize;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Class;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Fieldref;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Methodref;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_InterfaceMethodref;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_String;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Integer;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Float;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Long;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Double;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_NameAndType;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Utf8;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_MethodType;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_MethodHandle;
jbyte SF_rhino_classfile_ConstantPool_CONSTANT_InvokeDynamic;
jint SF_rhino_classfile_ConstantPool_MAX_UTF_ENCODING_SIZE;

void mark_rhino_classfile_ConstantPool(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_ConstantPool *) object;
	if (self->F_cfw)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cfw)->clazz)->markFunction)((jobject) self->F_cfw, mark, depth + 1);
	if (self->F_itsStringConstHash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsStringConstHash)->clazz)->markFunction)((jobject) self->F_itsStringConstHash, mark, depth + 1);
	if (self->F_itsUtf8Hash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsUtf8Hash)->clazz)->markFunction)((jobject) self->F_itsUtf8Hash, mark, depth + 1);
	if (self->F_itsFieldRefHash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsFieldRefHash)->clazz)->markFunction)((jobject) self->F_itsFieldRefHash, mark, depth + 1);
	if (self->F_itsMethodRefHash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsMethodRefHash)->clazz)->markFunction)((jobject) self->F_itsMethodRefHash, mark, depth + 1);
	if (self->F_itsClassHash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsClassHash)->clazz)->markFunction)((jobject) self->F_itsClassHash, mark, depth + 1);
	if (self->F_itsConstantHash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsConstantHash)->clazz)->markFunction)((jobject) self->F_itsConstantHash, mark, depth + 1);
	if (self->F_itsConstantData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsConstantData)->clazz)->markFunction)((jobject) self->F_itsConstantData, mark, depth + 1);
	if (self->F_itsPoolTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsPoolTypes)->clazz)->markFunction)((jobject) self->F_itsPoolTypes, mark, depth + 1);
	if (self->F_itsPool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsPool)->clazz)->markFunction)((jobject) self->F_itsPool, mark, depth + 1);
}

void clinit_rhino_classfile_ConstantPool(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_classfile_ConstantPool_ConstantPoolSize = jint(256);
	SF_rhino_classfile_ConstantPool_CONSTANT_Class = jint(7);
	SF_rhino_classfile_ConstantPool_CONSTANT_Fieldref = jint(9);
	SF_rhino_classfile_ConstantPool_CONSTANT_Methodref = jint(10);
	SF_rhino_classfile_ConstantPool_CONSTANT_InterfaceMethodref = jint(11);
	SF_rhino_classfile_ConstantPool_CONSTANT_String = jint(8);
	SF_rhino_classfile_ConstantPool_CONSTANT_Integer = jint(3);
	SF_rhino_classfile_ConstantPool_CONSTANT_Float = jint(4);
	SF_rhino_classfile_ConstantPool_CONSTANT_Long = jint(5);
	SF_rhino_classfile_ConstantPool_CONSTANT_Double = jint(6);
	SF_rhino_classfile_ConstantPool_CONSTANT_NameAndType = jint(12);
	SF_rhino_classfile_ConstantPool_CONSTANT_Utf8 = jint(1);
	SF_rhino_classfile_ConstantPool_CONSTANT_MethodType = jint(16);
	SF_rhino_classfile_ConstantPool_CONSTANT_MethodHandle = jint(15);
	SF_rhino_classfile_ConstantPool_CONSTANT_InvokeDynamic = jint(18);
	SF_rhino_classfile_ConstantPool_MAX_UTF_ENCODING_SIZE = jint(65535);
}

void init_rhino_classfile_ConstantPool_rhino_classfile_ClassFileWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ConstantPool(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	clinit_rhino_UintMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_UintMap);
	init_rhino_UintMap(ctx, sp[1].o);
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsStringConstHash = (jref) sp[1].o;
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap(ctx, sp[1].o);
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsUtf8Hash = (jref) sp[1].o;
	LINE_NUMBER(378);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap(ctx, sp[1].o);
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsFieldRefHash = (jref) sp[1].o;
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap(ctx, sp[1].o);
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsMethodRefHash = (jref) sp[1].o;
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap(ctx, sp[1].o);
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsClassHash = (jref) sp[1].o;
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap(ctx, sp[1].o);
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsConstantHash = (jref) sp[1].o;
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	clinit_rhino_UintMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_UintMap);
	init_rhino_UintMap(ctx, sp[1].o);
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsConstantData = (jref) sp[1].o;
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	clinit_rhino_UintMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_UintMap);
	init_rhino_UintMap(ctx, sp[1].o);
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsPoolTypes = (jref) sp[1].o;
	LINE_NUMBER(7);
	((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_cfw = (jref) (frame[1].o);
	LINE_NUMBER(8);
	((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTopIndex = (jint(1));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (256));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsPool = (jref) sp[1].o;
	LINE_NUMBER(10);
	((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop = (jint(0));
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ConstantPool_write_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(31);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (jshort(((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTopIndex))), (frame[1].o), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(32);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (frame[2].i), ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	LINE_NUMBER(33);
	frame[2].i = ((frame[2].i) + ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ConstantPool_getWriteSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:getWriteSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return ((jint(2)) + ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ConstantPool_addConstant_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addConstant", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(42);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(3));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	jint temp3 = frame[1].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, temp3, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp4;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTopIndex), (jint(3)));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp5 + (jint(1)));
	popStackFrame(ctx);
	return (jshort(temp5));
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ConstantPool_addConstant_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addConstant", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(50);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (9));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(5));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	jlong temp3 = frame[1].l;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt64_long_Array1_byte_int_R_int(ctx, temp3, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp4;
	LINE_NUMBER(53);
	frame[3].i = ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTopIndex);
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (((jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex) + (jint(2)));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[3].i), (jint(5)));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ConstantPool_addConstant_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addConstant", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(60);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(4));
	LINE_NUMBER(62);
	jint temp3 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[1].f));
	frame[2].i = temp3;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	jint temp4 = frame[2].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp5 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, temp4, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp5;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTopIndex), (jint(4)));
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	jint temp6 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp6 + (jint(1)));
	popStackFrame(ctx);
	return temp6;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ConstantPool_addConstant_double_R_int(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addConstant", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(69);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (9));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (6);
	LINE_NUMBER(71);
	jlong temp3 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[1].d));
	frame[3].l = temp3;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	jlong temp4 = frame[3].l;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp5 = (jint)SM_rhino_classfile_ClassFileWriter_putInt64_long_Array1_byte_int_R_int(ctx, temp4, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp5;
	LINE_NUMBER(73);
	frame[5].i = ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTopIndex);
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (((jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex) + (jint(2)));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[5].i), (6));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addConstant", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	jint temp0 = jint(65535);
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = (temp0 & temp1);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsStringConstHash;
	jint temp2 = (jint)((func_rhino_UintMap_getInt_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_getInt_int_int_R_int])(ctx, sp[0].o, (frame[2].i), (jint(-1)));
	frame[3].i = temp2;
	LINE_NUMBER(82);
	if ((frame[3].i) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp0 + (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(84);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp3 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp3 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = (8);
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	jint temp6 = frame[2].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp7 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp6, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp7;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsStringConstHash;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	}
label_3:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[3].i), (8));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ConstantPool_addConstant_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addConstant", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Integer)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Byte)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Short)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addConstant_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_int_R_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_2:;
	{
	LINE_NUMBER(97);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Character)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Character_charValue_R_char) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Character, (frame[1].o))))->vtable)[VTABLE_java_lang_Character_charValue_R_char])(ctx, (checkCast(ctx, &class_java_lang_Character, (frame[1].o))));
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addConstant_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_int_R_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_3:;
	{
	LINE_NUMBER(99);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Boolean)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))));
	sp += 1;
	if (temp0 == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	POP_N(2); // Pop method args
	sp->i = (jint)((func_rhino_classfile_ConstantPool_addConstant_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_int_R_int])(ctx, sp[0].o, sp[1].i);
	sp++;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(101);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Float)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[1].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[1].o))));
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addConstant_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_float_R_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_9:;
	{
	LINE_NUMBER(103);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Long)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Long, (frame[1].o))))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (checkCast(ctx, &class_java_lang_Long, (frame[1].o))));
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addConstant_long_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_long_R_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_11:;
	{
	LINE_NUMBER(105);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Double)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)((func_java_lang_Double_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Double, (frame[1].o))))->vtable)[VTABLE_java_lang_Double_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Double, (frame[1].o))));
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addConstant_double_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_double_R_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_13:;
	{
	LINE_NUMBER(107);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_String, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_15:;
	{
	LINE_NUMBER(111);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_classfile_ClassFileWriter$MHandle)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_classfile_ClassFileWriter$MHandle, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_17:;
	{
	LINE_NUMBER(114);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"value "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_ConstantPool_isUnderUtfEncodingLimit_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:isUnderUtfEncodingLimit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(121);
	if (((frame[2].i) * (jint(3))) > (jint(65535))) goto label_2;
	}
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(123);
	if ((frame[2].i) <= (jint(65535))) goto label_4;
	}
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(126);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].i));
	if (temp0 != temp1) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:getUtfEncodingLimit", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(134);
	if ((((frame[3].i) - (frame[2].i)) * (jint(3))) > (jint(65535))) goto label_1;
	}
	{
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_1:;
	{
	LINE_NUMBER(137);
	frame[4].i = (jint(65535));
	LINE_NUMBER(138);
	frame[5].i = (frame[2].i);
	}
label_4:;
	{
	if ((frame[5].i) == (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(140);
	if ((jint(0)) == (frame[6].i)) goto label_8;
	}
	{
	if ((frame[6].i) > (127)) goto label_8;
	}
	{
	LINE_NUMBER(141);
	INST_IINC(4, -1);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(142);
	if ((frame[6].i) >= (2047)) goto label_11;
	}
	{
	LINE_NUMBER(143);
	INST_IINC(4, -2);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(145);
	INST_IINC(4, -3);
label_10:;
	{
	LINE_NUMBER(147);
	if ((frame[4].i) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_13:;
	{
	LINE_NUMBER(138);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jshort M_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addUtf8", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsUtf8Hash;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(-1)));
	frame[2].i = temp0;
	LINE_NUMBER(156);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(159);
	if ((frame[3].i) <= (jint(65535))) goto label_5;
	}
	{
	LINE_NUMBER(160);
	frame[4].i = (jint(1));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(162);
	frame[4].i = (jint(0));
	LINE_NUMBER(165);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), ((jint(3)) + ((frame[3].i) * (jint(3)))));
	LINE_NUMBER(166);
	frame[5].i = ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(1));
	LINE_NUMBER(169);
	INST_IINC(5, 2);
	LINE_NUMBER(171);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_cfw;
	sp[0].o = (jobject)((func_rhino_classfile_ClassFileWriter_getCharBuffer_int_R_Array1_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getCharBuffer_int_R_Array1_char])(ctx, sp[0].o, (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(172);
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, (frame[1].o), (jint(0)), (frame[3].i), (frame[6].o), (jint(0)));
	LINE_NUMBER(174);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	if ((frame[7].i) == (frame[3].i)) goto label_17;
	}
	{
	LINE_NUMBER(175);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(176);
	if ((frame[8].i) == 0) goto label_20;
	}
	{
	if ((frame[8].i) > (127)) goto label_20;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[8].i)));
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(178);
	if ((frame[8].i) <= (2047)) goto label_23;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((224) | ((frame[8].i) >> (12)))));
	LINE_NUMBER(180);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp1 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((128) | (((frame[8].i) >> (6)) & (63)))));
	LINE_NUMBER(181);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp2 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (jbyte(((128) | ((frame[8].i) & (63)))));
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((192) | ((frame[8].i) >> (6)))));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp1 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((128) | ((frame[8].i) & (63)))));
	}
label_22:;
	{
	LINE_NUMBER(174);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(188);
	frame[7].i = ((frame[5].i) - ((((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop) + (jint(1))) + (jint(2))));
	LINE_NUMBER(189);
	if ((frame[7].i) <= (jint(65535))) goto label_29;
	}
	{
	LINE_NUMBER(190);
	frame[4].i = (jint(1));
	goto label_8;
	}
label_29:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop) + (jint(1)))) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[7].i)) >> (8)))));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop) + (jint(2)))) = (jbyte((frame[7].i)));
	LINE_NUMBER(196);
	((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop = (frame[5].i);
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp0 + (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(198);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsUtf8Hash;
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	}
label_8:;
	{
	LINE_NUMBER(201);
	if ((frame[4].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(202);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too big string"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(205);
	((func_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object])(ctx, (frame[0].o), (frame[2].i), (frame[1].o));
	LINE_NUMBER(206);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[2].i), (jint(1)));
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (jshort((frame[2].i)));
	}

	popStackFrame(ctx);
}

jshort M_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addNameAndType", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(211);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(212);
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, (frame[0].o), (frame[2].o));
	frame[4].i = temp1;
	LINE_NUMBER(213);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp2 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp2 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (12);
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	jint temp5 = frame[3].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp6 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp5, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp6;
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	jint temp7 = frame[4].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp8 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp7, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp8;
	LINE_NUMBER(217);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTopIndex), (12));
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	jint temp9 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp9 + (jint(1)));
	popStackFrame(ctx);
	return (jshort(temp9));
	}

	popStackFrame(ctx);
}

jshort M_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addClass", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsClassHash;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(-1)));
	frame[2].i = temp0;
	LINE_NUMBER(223);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(224);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(225);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (46));
	if (temp0 <= 0) goto label_5;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_getSlashedForm_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsClassHash;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[3].o), (jint(-1)));
	frame[2].i = temp0;
	LINE_NUMBER(228);
	if ((frame[2].i) == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsClassHash;
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	}
label_5:;
	{
	LINE_NUMBER(232);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(233);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short])(ctx, (frame[0].o), (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(234);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(235);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp1 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp1 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (7);
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	jint temp4 = frame[4].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp5 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp4, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp5;
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	jint temp6 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp6 + (jint(1)));
	frame[2].i = temp6;
	LINE_NUMBER(238);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsClassHash;
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[3].o), (frame[2].i));
	LINE_NUMBER(239);
	jint temp9 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[3].o));
	if (temp9 != 0) goto label_2;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsClassHash;
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(244);
	((func_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object])(ctx, (frame[0].o), (frame[2].i), (frame[1].o));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[2].i), (7));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (jshort((frame[2].i)));
	}

	popStackFrame(ctx);
}

jshort M_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addFieldRef", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(250);
	clinit_rhino_classfile_FieldOrMethodRef(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_FieldOrMethodRef);
	init_rhino_classfile_FieldOrMethodRef_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(253);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsFieldRefHash;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[4].o), (jint(-1)));
	frame[5].i = temp0;
	LINE_NUMBER(254);
	if ((frame[5].i) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(255);
	jint temp0 = (jint)M_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	frame[6].i = temp0;
	LINE_NUMBER(256);
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, (frame[0].o), (frame[1].o));
	frame[7].i = temp1;
	LINE_NUMBER(257);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(258);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp2 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp2 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (9);
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	jint temp5 = frame[7].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp6 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp5, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp6;
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	jint temp7 = frame[6].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp8 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp7, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp8;
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	jint temp9 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp9 + (jint(1)));
	frame[5].i = temp9;
	LINE_NUMBER(262);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsFieldRefHash;
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[4].o), (frame[5].i));
	}
label_3:;
	{
	LINE_NUMBER(264);
	((func_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object])(ctx, (frame[0].o), (frame[5].i), (frame[4].o));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[5].i), (9));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (jshort((frame[5].i)));
	}

	popStackFrame(ctx);
}

jshort M_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addMethodRef", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(271);
	clinit_rhino_classfile_FieldOrMethodRef(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_FieldOrMethodRef);
	init_rhino_classfile_FieldOrMethodRef_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(274);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsMethodRefHash;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[4].o), (jint(-1)));
	frame[5].i = temp0;
	LINE_NUMBER(275);
	if ((frame[5].i) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(276);
	jint temp0 = (jint)M_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	frame[6].i = temp0;
	LINE_NUMBER(277);
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, (frame[0].o), (frame[1].o));
	frame[7].i = temp1;
	LINE_NUMBER(278);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(279);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp2 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp2 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (10);
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	jint temp5 = frame[7].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp6 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp5, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp6;
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	jint temp7 = frame[6].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp8 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp7, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp8;
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	jint temp9 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp9 + (jint(1)));
	frame[5].i = temp9;
	LINE_NUMBER(283);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsMethodRefHash;
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[4].o), (frame[5].i));
	}
label_3:;
	{
	LINE_NUMBER(285);
	((func_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object])(ctx, (frame[0].o), (frame[5].i), (frame[4].o));
	LINE_NUMBER(286);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[5].i), (10));
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (jshort((frame[5].i)));
	}

	popStackFrame(ctx);
}

jshort M_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addInterfaceMethodRef", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)M_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(293);
	jint temp1 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp1;
	LINE_NUMBER(294);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(295);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp2 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp2 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (11);
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	jint temp5 = frame[5].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp6 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp5, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp6;
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	jint temp7 = frame[4].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp8 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp7, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp8;
	LINE_NUMBER(298);
	clinit_rhino_classfile_FieldOrMethodRef(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_FieldOrMethodRef);
	init_rhino_classfile_FieldOrMethodRef_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(300);
	((func_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object])(ctx, (frame[0].o), ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTopIndex), (frame[6].o));
	LINE_NUMBER(301);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTopIndex), (11));
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	jint temp9 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp9 + (jint(1)));
	popStackFrame(ctx);
	return (jshort(temp9));
	}

	popStackFrame(ctx);
}

jshort M_rhino_classfile_ConstantPool_addInvokeDynamic_java_lang_String_java_lang_String_int_R_short(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addInvokeDynamic", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(306);
	clinit_rhino_classfile_ConstantEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ConstantEntry);
	init_rhino_classfile_ConstantEntry_int_int_java_lang_String_java_lang_String(ctx, sp[0].o, (18), (frame[3].i), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(308);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsConstantHash;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[4].o), (jint(-1)));
	frame[5].i = temp0;
	LINE_NUMBER(310);
	if ((frame[5].i) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)M_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(312);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(313);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp1 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp1 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (18);
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	jint temp4 = frame[3].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp5 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp4, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp5;
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	jint temp6 = frame[6].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp7 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp6, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp7;
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp8 + (jint(1)));
	frame[5].i = temp8;
	LINE_NUMBER(317);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsConstantHash;
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[4].o), (frame[5].i));
	LINE_NUMBER(318);
	((func_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object])(ctx, (frame[0].o), (frame[5].i), (frame[2].o));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[5].i), (18));
	}
label_3:;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (jshort((frame[5].i)));
	}

	popStackFrame(ctx);
}

jshort M_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:addMethodHandle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsConstantHash;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(-1)));
	frame[2].i = temp0;
	LINE_NUMBER(327);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(329);
	if (((jint)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_tag) > (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_owner;
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_desc;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[3].i = temp0;
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(331);
	if (((jint)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_tag) != (9)) goto label_8;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_owner;
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_desc;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[3].i = temp0;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_owner;
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_desc;
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[3].i = temp0;
	}
label_7:;
	{
	LINE_NUMBER(337);
	M_rhino_classfile_ConstantPool_ensure_int(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(338);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (15);
	LINE_NUMBER(339);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	sp[1].o = frame[0].o;
	jint temp3 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[1].o))->F_itsTop = (temp3 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = ((jint)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[1].o)))->F_tag);
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	jint temp6 = frame[3].i;
	sp[1].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	jint temp7 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp6, sp[1].o, ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTop = temp7;
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex;
	((rhino_classfile_ConstantPool *) NULL_CHECK(sp[0].o))->F_itsTopIndex = (temp8 + (jint(1)));
	frame[2].i = temp8;
	LINE_NUMBER(342);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsConstantHash;
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[2].i), (15));
	}
label_2:;
	{
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return (jshort((frame[2].i)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:getConstantData", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsConstantData;
	sp[0].o = (jobject)((func_rhino_UintMap_getObject_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_getObject_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:setConstantData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsConstantData;
	((func_rhino_UintMap_put_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_rhino_classfile_ConstantPool_getConstantType_int_R_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:getConstantType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPoolTypes;
	jint temp0 = (jint)((func_rhino_UintMap_getInt_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_getInt_int_int_R_int])(ctx, sp[0].o, (frame[1].i), (jint(0)));
	popStackFrame(ctx);
	return (jbyte(temp0));
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ConstantPool_ensure_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantPool:ensure", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(361);
	jint temp0 = ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop) + (frame[1].i);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2)));
	LINE_NUMBER(363);
	if ((((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop) + (frame[1].i)) <= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(364);
	frame[2].i = (((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop) + (frame[1].i));
	}
label_4:;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(367);
	sp[0].o = (jobject)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), ((jint)((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsTop));
	LINE_NUMBER(368);
	((rhino_classfile_ConstantPool *) NULL_CHECK((frame[0].o)))->F_itsPool = (jref) (frame[3].o);
	}
label_1:;
	LINE_NUMBER(370);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_ConstantPool[] {
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
	(void *) M_rhino_classfile_ConstantPool_write_Array1_byte_int_R_int,
	(void *) M_rhino_classfile_ConstantPool_getWriteSize_R_int,
	(void *) M_rhino_classfile_ConstantPool_addConstant_int_R_int,
	(void *) M_rhino_classfile_ConstantPool_addConstant_long_R_int,
	(void *) M_rhino_classfile_ConstantPool_addConstant_float_R_int,
	(void *) M_rhino_classfile_ConstantPool_addConstant_double_R_int,
	(void *) M_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int,
	(void *) M_rhino_classfile_ConstantPool_addConstant_java_lang_Object_R_int,
	(void *) M_rhino_classfile_ConstantPool_isUnderUtfEncodingLimit_java_lang_String_R_boolean,
	(void *) M_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int,
	(void *) M_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short,
	(void *) M_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short,
	(void *) M_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short,
	(void *) M_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short,
	(void *) M_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short,
	(void *) M_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short,
	(void *) M_rhino_classfile_ConstantPool_addInvokeDynamic_java_lang_String_java_lang_String_int_R_short,
	(void *) M_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short,
	(void *) M_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object,
	(void *) M_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object,
	(void *) M_rhino_classfile_ConstantPool_getConstantType_int_R_byte,
	(void *) M_rhino_classfile_ConstantPool_ensure_int,
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
	{ "write", "([BI)I" },
	{ "getWriteSize", "()I" },
	{ "addConstant", "(I)I" },
	{ "addConstant", "(J)I" },
	{ "addConstant", "(F)I" },
	{ "addConstant", "(D)I" },
	{ "addConstant", "(Ljava/lang/String;)I" },
	{ "addConstant", "(Ljava/lang/Object;)I" },
	{ "isUnderUtfEncodingLimit", "(Ljava/lang/String;)Z" },
	{ "getUtfEncodingLimit", "(Ljava/lang/String;II)I" },
	{ "addUtf8", "(Ljava/lang/String;)S" },
	{ "addNameAndType", "(Ljava/lang/String;Ljava/lang/String;)S" },
	{ "addClass", "(Ljava/lang/String;)S" },
	{ "addFieldRef", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)S" },
	{ "addMethodRef", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)S" },
	{ "addInterfaceMethodRef", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)S" },
	{ "addInvokeDynamic", "(Ljava/lang/String;Ljava/lang/String;I)S" },
	{ "addMethodHandle", "(Lrhino/classfile/ClassFileWriter$MHandle;)S" },
	{ "getConstantData", "(I)Ljava/lang/Object;" },
	{ "setConstantData", "(ILjava/lang/Object;)V" },
	{ "getConstantType", "(I)B" },
	{ "ensure", "(I)V" },
};

static FieldMetadata fields[] {
	{ "ConstantPoolSize", &class_int, (intptr_t) &SF_rhino_classfile_ConstantPool_ConstantPoolSize, "I", 26 },
	{ "CONSTANT_Class", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_Class, "B", 24 },
	{ "CONSTANT_Fieldref", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_Fieldref, "B", 24 },
	{ "CONSTANT_Methodref", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_Methodref, "B", 24 },
	{ "CONSTANT_InterfaceMethodref", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_InterfaceMethodref, "B", 24 },
	{ "CONSTANT_String", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_String, "B", 24 },
	{ "CONSTANT_Integer", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_Integer, "B", 24 },
	{ "CONSTANT_Float", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_Float, "B", 24 },
	{ "CONSTANT_Long", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_Long, "B", 24 },
	{ "CONSTANT_Double", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_Double, "B", 24 },
	{ "CONSTANT_NameAndType", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_NameAndType, "B", 24 },
	{ "CONSTANT_Utf8", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_Utf8, "B", 24 },
	{ "CONSTANT_MethodType", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_MethodType, "B", 24 },
	{ "CONSTANT_MethodHandle", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_MethodHandle, "B", 24 },
	{ "CONSTANT_InvokeDynamic", &class_byte, (intptr_t) &SF_rhino_classfile_ConstantPool_CONSTANT_InvokeDynamic, "B", 24 },
	{ "cfw", &class_rhino_classfile_ClassFileWriter, offsetof(rhino_classfile_ConstantPool, F_cfw), "Lrhino/classfile/ClassFileWriter;", 18 },
	{ "MAX_UTF_ENCODING_SIZE", &class_int, (intptr_t) &SF_rhino_classfile_ConstantPool_MAX_UTF_ENCODING_SIZE, "I", 26 },
	{ "itsStringConstHash", &class_rhino_UintMap, offsetof(rhino_classfile_ConstantPool, F_itsStringConstHash), "Lrhino/UintMap;", 18 },
	{ "itsUtf8Hash", &class_rhino_ObjToIntMap, offsetof(rhino_classfile_ConstantPool, F_itsUtf8Hash), "Lrhino/ObjToIntMap;", 18 },
	{ "itsFieldRefHash", &class_rhino_ObjToIntMap, offsetof(rhino_classfile_ConstantPool, F_itsFieldRefHash), "Lrhino/ObjToIntMap;", 18 },
	{ "itsMethodRefHash", &class_rhino_ObjToIntMap, offsetof(rhino_classfile_ConstantPool, F_itsMethodRefHash), "Lrhino/ObjToIntMap;", 18 },
	{ "itsClassHash", &class_rhino_ObjToIntMap, offsetof(rhino_classfile_ConstantPool, F_itsClassHash), "Lrhino/ObjToIntMap;", 18 },
	{ "itsConstantHash", &class_rhino_ObjToIntMap, offsetof(rhino_classfile_ConstantPool, F_itsConstantHash), "Lrhino/ObjToIntMap;", 18 },
	{ "itsTop", &class_int, offsetof(rhino_classfile_ConstantPool, F_itsTop), "I", 2 },
	{ "itsTopIndex", &class_int, offsetof(rhino_classfile_ConstantPool, F_itsTopIndex), "I", 2 },
	{ "itsConstantData", &class_rhino_UintMap, offsetof(rhino_classfile_ConstantPool, F_itsConstantData), "Lrhino/UintMap;", 18 },
	{ "itsPoolTypes", &class_rhino_UintMap, offsetof(rhino_classfile_ConstantPool, F_itsPoolTypes), "Lrhino/UintMap;", 18 },
	{ "itsPool", getArrayClass(&class_byte, 1), offsetof(rhino_classfile_ConstantPool, F_itsPool), "[B", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_ConstantPool_rhino_classfile_ClassFileWriter, 0, "(Lrhino/classfile/ClassFileWriter;)V", 0 },
	{ "write", (intptr_t) M_rhino_classfile_ConstantPool_write_Array1_byte_int_R_int, VTABLE_rhino_classfile_ConstantPool_write_Array1_byte_int_R_int, "([BI)I", 0 },
	{ "getWriteSize", (intptr_t) M_rhino_classfile_ConstantPool_getWriteSize_R_int, VTABLE_rhino_classfile_ConstantPool_getWriteSize_R_int, "()I", 0 },
	{ "addConstant", (intptr_t) M_rhino_classfile_ConstantPool_addConstant_int_R_int, VTABLE_rhino_classfile_ConstantPool_addConstant_int_R_int, "(I)I", 0 },
	{ "addConstant", (intptr_t) M_rhino_classfile_ConstantPool_addConstant_long_R_int, VTABLE_rhino_classfile_ConstantPool_addConstant_long_R_int, "(J)I", 0 },
	{ "addConstant", (intptr_t) M_rhino_classfile_ConstantPool_addConstant_float_R_int, VTABLE_rhino_classfile_ConstantPool_addConstant_float_R_int, "(F)I", 0 },
	{ "addConstant", (intptr_t) M_rhino_classfile_ConstantPool_addConstant_double_R_int, VTABLE_rhino_classfile_ConstantPool_addConstant_double_R_int, "(D)I", 0 },
	{ "addConstant", (intptr_t) M_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int, VTABLE_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int, "(Ljava/lang/String;)I", 0 },
	{ "addConstant", (intptr_t) M_rhino_classfile_ConstantPool_addConstant_java_lang_Object_R_int, VTABLE_rhino_classfile_ConstantPool_addConstant_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 0 },
	{ "isUnderUtfEncodingLimit", (intptr_t) M_rhino_classfile_ConstantPool_isUnderUtfEncodingLimit_java_lang_String_R_boolean, VTABLE_rhino_classfile_ConstantPool_isUnderUtfEncodingLimit_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 0 },
	{ "getUtfEncodingLimit", (intptr_t) M_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int, VTABLE_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int, "(Ljava/lang/String;II)I", 0 },
	{ "addUtf8", (intptr_t) M_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short, VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short, "(Ljava/lang/String;)S", 0 },
	{ "addNameAndType", (intptr_t) M_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short, VTABLE_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short, "(Ljava/lang/String;Ljava/lang/String;)S", 2 },
	{ "addClass", (intptr_t) M_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short, VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short, "(Ljava/lang/String;)S", 0 },
	{ "addFieldRef", (intptr_t) M_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short, VTABLE_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)S", 0 },
	{ "addMethodRef", (intptr_t) M_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short, VTABLE_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)S", 0 },
	{ "addInterfaceMethodRef", (intptr_t) M_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short, VTABLE_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)S", 0 },
	{ "addInvokeDynamic", (intptr_t) M_rhino_classfile_ConstantPool_addInvokeDynamic_java_lang_String_java_lang_String_int_R_short, VTABLE_rhino_classfile_ConstantPool_addInvokeDynamic_java_lang_String_java_lang_String_int_R_short, "(Ljava/lang/String;Ljava/lang/String;I)S", 0 },
	{ "addMethodHandle", (intptr_t) M_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short, VTABLE_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short, "(Lrhino/classfile/ClassFileWriter$MHandle;)S", 0 },
	{ "getConstantData", (intptr_t) M_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object, VTABLE_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 0 },
	{ "setConstantData", (intptr_t) M_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object, VTABLE_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object, "(ILjava/lang/Object;)V", 0 },
	{ "getConstantType", (intptr_t) M_rhino_classfile_ConstantPool_getConstantType_int_R_byte, VTABLE_rhino_classfile_ConstantPool_getConstantType_int_R_byte, "(I)B", 0 },
	{ "ensure", (intptr_t) M_rhino_classfile_ConstantPool_ensure_int, VTABLE_rhino_classfile_ConstantPool_ensure_int, "(I)V", 2 },
};

Class class_rhino_classfile_ConstantPool{
		.nativeName = (intptr_t) "rhino/classfile/ConstantPool",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_ConstantPool),
		.classVtable = (intptr_t) vtable_rhino_classfile_ConstantPool,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_ConstantPool,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_ConstantPool,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_ConstantPool = registerClass(&class_rhino_classfile_ConstantPool);

}
