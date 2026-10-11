#include "rhino/classfile/SuperBlock.h"
#include "rhino/classfile/SuperBlock.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "rhino/classfile/TypeInfo.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/classfile/ConstantPool.h"
#include "java/lang/System.h"

extern "C" {


void mark_rhino_classfile_SuperBlock(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_SuperBlock *) object;
	if (self->F_locals)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locals)->clazz)->markFunction)((jobject) self->F_locals, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
}

void clinit_rhino_classfile_SuperBlock(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_classfile_SuperBlock_int_int_int_Array1_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_SuperBlock(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_index = (frame[1].i);
	LINE_NUMBER(13);
	((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_start = (frame[2].i);
	LINE_NUMBER(14);
	((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_end = (frame[3].i);
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	((rhino_classfile_SuperBlock *) NULL_CHECK(sp[0].o))->F_locals = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(0)));
	((rhino_classfile_SuperBlock *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(18);
	((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_isInitialized = (jint(0));
	LINE_NUMBER(19);
	((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_isInQueue = (jint(0));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_SuperBlock_getIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:getIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_index);
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_SuperBlock_getLocals_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:getLocals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	jint temp0 = jint(0);
	sp[1].o = frame[1].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:getTrimmedLocals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	frame[1].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(44);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	LINE_NUMBER(45);
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_isTwoWords_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_2;
	}
	{
	LINE_NUMBER(46);
	INST_IINC(1, -1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(48);
	INST_IINC(1, 1);
	LINE_NUMBER(50);
	frame[2].i = (frame[1].i);
	LINE_NUMBER(51);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_isTwoWords_int_R_boolean(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))));
	if (temp0 == 0) goto label_10;
	}
	LINE_NUMBER(53);
	INST_IINC(2, -1);
label_10:;
	{
	LINE_NUMBER(51);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(57);
	frame[4].i = (jint(0));
	frame[5].i = (jint(0));
	}
label_14:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_15;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i)));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_isTwoWords_int_R_boolean(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))));
	if (temp1 == 0) goto label_18;
	}
	LINE_NUMBER(60);
	INST_IINC(5, 1);
label_18:;
	{
	LINE_NUMBER(57);
	INST_IINC(4, 1);
	INST_IINC(5, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_SuperBlock_getStack_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:getStack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = jint(0);
	sp[1].o = frame[1].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_stack;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:merge", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(74);
	if (((jint)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_isInitialized) != 0) goto label_1;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[2].i));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	((rhino_classfile_SuperBlock *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = frame[3].o;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_stack;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (jint(0)), (frame[4].i));
	LINE_NUMBER(78);
	((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_isInitialized = (jint(1));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (frame[2].i)) goto label_7;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_stack;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_locals;
	jint temp0 = (jint)M_rhino_classfile_SuperBlock_mergeState_Array1_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].i), (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp1 = (jint)M_rhino_classfile_SuperBlock_mergeState_Array1_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean(ctx, sp[0].o, sp[1].o, (frame[3].o), (frame[4].i), (frame[5].o));
	frame[7].i = temp1;
	LINE_NUMBER(86);
	if ((frame[6].i) != 0) goto label_11;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_12;
label_11:;
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(95);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad merge attempt"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_SuperBlock_mergeState_Array1_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:mergeState", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(109);
	frame[5].i = (jint(0));
	LINE_NUMBER(110);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(111);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(113);
	sp[0].o = frame[1].o;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_merge_int_int_rhino_classfile_ConstantPool_R_int(ctx, ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[6].i))), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[6].i))), (frame[4].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(114);
	if ((frame[7].i) == ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[6].i)))) goto label_7;
	}
	{
	LINE_NUMBER(115);
	frame[5].i = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(110);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_SuperBlock_getStart_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:getStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_start);
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_SuperBlock_getEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:getEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_end);
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_SuperBlock_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sb "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_index));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_SuperBlock_isInitialized_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:isInitialized", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_isInitialized);
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_SuperBlock_setInitialized_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:setInitialized", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(139);
	((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_isInitialized = (frame[1].i);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_SuperBlock_isInQueue_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:isInQueue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_isInQueue);
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_SuperBlock_setInQueue_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/SuperBlock:setInQueue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(147);
	((rhino_classfile_SuperBlock *) NULL_CHECK((frame[0].o)))->F_isInQueue = (frame[1].i);
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_SuperBlock[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_classfile_SuperBlock_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_classfile_SuperBlock_getIndex_R_int,
	(void *) M_rhino_classfile_SuperBlock_getLocals_R_Array1_int,
	(void *) M_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int,
	(void *) M_rhino_classfile_SuperBlock_getStack_R_Array1_int,
	(void *) M_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean,
	(void *) M_rhino_classfile_SuperBlock_mergeState_Array1_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean,
	(void *) M_rhino_classfile_SuperBlock_getStart_R_int,
	(void *) M_rhino_classfile_SuperBlock_getEnd_R_int,
	(void *) M_rhino_classfile_SuperBlock_isInitialized_R_boolean,
	(void *) M_rhino_classfile_SuperBlock_setInitialized_boolean,
	(void *) M_rhino_classfile_SuperBlock_isInQueue_R_boolean,
	(void *) M_rhino_classfile_SuperBlock_setInQueue_boolean,
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
	{ "getIndex", "()I" },
	{ "getLocals", "()[I" },
	{ "getTrimmedLocals", "()[I" },
	{ "getStack", "()[I" },
	{ "merge", "([II[IILrhino/classfile/ConstantPool;)Z" },
	{ "mergeState", "([I[IILrhino/classfile/ConstantPool;)Z" },
	{ "getStart", "()I" },
	{ "getEnd", "()I" },
	{ "isInitialized", "()Z" },
	{ "setInitialized", "(Z)V" },
	{ "isInQueue", "()Z" },
	{ "setInQueue", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(rhino_classfile_SuperBlock, F_index), "I", 18 },
	{ "start", &class_int, offsetof(rhino_classfile_SuperBlock, F_start), "I", 18 },
	{ "end", &class_int, offsetof(rhino_classfile_SuperBlock, F_end), "I", 18 },
	{ "locals", getArrayClass(&class_int, 1), offsetof(rhino_classfile_SuperBlock, F_locals), "[I", 18 },
	{ "stack", getArrayClass(&class_int, 1), offsetof(rhino_classfile_SuperBlock, F_stack), "[I", 2 },
	{ "isInitialized", &class_boolean, offsetof(rhino_classfile_SuperBlock, F_isInitialized), "Z", 2 },
	{ "isInQueue", &class_boolean, offsetof(rhino_classfile_SuperBlock, F_isInQueue), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_SuperBlock_int_int_int_Array1_int, 0, "(III[I)V", 0 },
	{ "getIndex", (intptr_t) M_rhino_classfile_SuperBlock_getIndex_R_int, VTABLE_rhino_classfile_SuperBlock_getIndex_R_int, "()I", 0 },
	{ "getLocals", (intptr_t) M_rhino_classfile_SuperBlock_getLocals_R_Array1_int, VTABLE_rhino_classfile_SuperBlock_getLocals_R_Array1_int, "()[I", 0 },
	{ "getTrimmedLocals", (intptr_t) M_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int, VTABLE_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int, "()[I", 0 },
	{ "getStack", (intptr_t) M_rhino_classfile_SuperBlock_getStack_R_Array1_int, VTABLE_rhino_classfile_SuperBlock_getStack_R_Array1_int, "()[I", 0 },
	{ "merge", (intptr_t) M_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean, VTABLE_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean, "([II[IILrhino/classfile/ConstantPool;)Z", 0 },
	{ "mergeState", (intptr_t) M_rhino_classfile_SuperBlock_mergeState_Array1_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean, VTABLE_rhino_classfile_SuperBlock_mergeState_Array1_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean, "([I[IILrhino/classfile/ConstantPool;)Z", 2 },
	{ "getStart", (intptr_t) M_rhino_classfile_SuperBlock_getStart_R_int, VTABLE_rhino_classfile_SuperBlock_getStart_R_int, "()I", 0 },
	{ "getEnd", (intptr_t) M_rhino_classfile_SuperBlock_getEnd_R_int, VTABLE_rhino_classfile_SuperBlock_getEnd_R_int, "()I", 0 },
	{ "toString", (intptr_t) M_rhino_classfile_SuperBlock_toString_R_java_lang_String, VTABLE_rhino_classfile_SuperBlock_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isInitialized", (intptr_t) M_rhino_classfile_SuperBlock_isInitialized_R_boolean, VTABLE_rhino_classfile_SuperBlock_isInitialized_R_boolean, "()Z", 0 },
	{ "setInitialized", (intptr_t) M_rhino_classfile_SuperBlock_setInitialized_boolean, VTABLE_rhino_classfile_SuperBlock_setInitialized_boolean, "(Z)V", 0 },
	{ "isInQueue", (intptr_t) M_rhino_classfile_SuperBlock_isInQueue_R_boolean, VTABLE_rhino_classfile_SuperBlock_isInQueue_R_boolean, "()Z", 0 },
	{ "setInQueue", (intptr_t) M_rhino_classfile_SuperBlock_setInQueue_boolean, VTABLE_rhino_classfile_SuperBlock_setInQueue_boolean, "(Z)V", 0 },
};

Class class_rhino_classfile_SuperBlock{
		.nativeName = (intptr_t) "rhino/classfile/SuperBlock",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_SuperBlock),
		.classVtable = (intptr_t) vtable_rhino_classfile_SuperBlock,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_SuperBlock,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_SuperBlock,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_SuperBlock = registerClass(&class_rhino_classfile_SuperBlock);

}
