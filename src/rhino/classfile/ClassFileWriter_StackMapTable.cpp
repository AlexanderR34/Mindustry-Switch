#include "rhino/classfile/ClassFileWriter_StackMapTable.h"
#include "rhino/classfile/SuperBlock.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "rhino/UintMap.h"
#include "rhino/classfile/ExceptionTableEntry.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/classfile/ClassFileWriter_StackMapTable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/classfile/FieldOrMethodRef.h"
#include "java/util/Arrays.h"
#include "rhino/classfile/ClassFileWriter.h"
#include "rhino/classfile/TypeInfo.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/classfile/ConstantPool.h"
#include "java/lang/System.h"

extern "C" {

jbool SF_rhino_classfile_ClassFileWriter$StackMapTable_DEBUGSTACKMAP;

void mark_rhino_classfile_ClassFileWriter$StackMapTable(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_ClassFileWriter$StackMapTable *) object;
	if (self->F_locals)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locals)->clazz)->markFunction)((jobject) self->F_locals, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_workList)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_workList)->clazz)->markFunction)((jobject) self->F_workList, mark, depth + 1);
	if (self->F_superBlocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_superBlocks)->clazz)->markFunction)((jobject) self->F_superBlocks, mark, depth + 1);
	if (self->F_superBlockDeps)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_superBlockDeps)->clazz)->markFunction)((jobject) self->F_superBlockDeps, mark, depth + 1);
	if (self->F_rawStackMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rawStackMap)->clazz)->markFunction)((jobject) self->F_rawStackMap, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_rhino_classfile_ClassFileWriter$StackMapTable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_classfile_ClassFileWriter$StackMapTable_DEBUGSTACKMAP = jint(0);
}

void init_rhino_classfile_ClassFileWriter$StackMapTable_rhino_classfile_ClassFileWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter$StackMapTable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3323);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(3324);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks = (jref) (jobject(nullptr));
	LINE_NUMBER(3325);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_stack = (jref) sp[2].o;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_locals = (jref) sp[2].o;
	LINE_NUMBER(3326);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workList = (jref) (jobject(nullptr));
	LINE_NUMBER(3327);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap = (jref) (jobject(nullptr));
	LINE_NUMBER(3328);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_localsTop = (jint(0));
	LINE_NUMBER(3329);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stackTop = (jint(0));
	LINE_NUMBER(3330);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workListTop = (jint(0));
	LINE_NUMBER(3331);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop = (jint(0));
	LINE_NUMBER(3332);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide = (jint(0));
	LINE_NUMBER(3333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_generate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:generate", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3336);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_access$000_rhino_classfile_ClassFileWriter_R_int(ctx, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_rhino_classfile_SuperBlock, temp0);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_superBlocks = (jref) sp[1].o;
	LINE_NUMBER(3337);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$100_rhino_classfile_ClassFileWriter_R_Array1_int(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(3339);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_access$000_rhino_classfile_ClassFileWriter_R_int(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(3340);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$200_rhino_classfile_ClassFileWriter_R_Array1_int(ctx, sp[0].o);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)));
	LINE_NUMBER(3342);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_access$000_rhino_classfile_ClassFileWriter_R_int(ctx, sp[0].o);
	if (temp0 != (temp1 - (jint(1)))) goto label_7;
	}
	{
	LINE_NUMBER(3343);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_access$300_rhino_classfile_ClassFileWriter_R_int(ctx, sp[0].o);
	frame[4].i = temp0;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(3345);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$200_rhino_classfile_ClassFileWriter_R_Array1_int(ctx, sp[0].o);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[2].i) + (jint(1)))));
	}
label_10:;
	{
	LINE_NUMBER(3347);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	jint temp0 = frame[2].i;
	clinit_rhino_classfile_SuperBlock(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_classfile_SuperBlock);
	init_rhino_classfile_SuperBlock_int_int_int_Array1_int(ctx, sp[1].o, (frame[2].i), (frame[3].i), (frame[4].i), (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3339);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(3360);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockDependencies_R_Array1_rhino_classfile_SuperBlock(ctx, (frame[0].o));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_superBlockDeps = (jref) sp[1].o;
	LINE_NUMBER(3362);
	M_rhino_classfile_ClassFileWriter$StackMapTable_verify(ctx, (frame[0].o));
	LINE_NUMBER(3373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:getSuperBlockFromOffset", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3376);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
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
	LINE_NUMBER(3377);
	if ((frame[5].o) != nullptr) goto label_4;
	}
	LINE_NUMBER(3378);
	goto label_2;
label_4:;
	{
	LINE_NUMBER(3379);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_rhino_classfile_SuperBlock_getStart_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getStart_R_int])(ctx, (frame[5].o));
	if (temp0 < temp1) goto label_6;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_rhino_classfile_SuperBlock_getEnd_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getEnd_R_int])(ctx, (frame[5].o));
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(3380);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_6:;
	{
	LINE_NUMBER(3376);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(3383);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad offset: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_ClassFileWriter$StackMapTable_isSuperBlockEnd_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:isSuperBlockEnd", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3391);
	switch((frame[1].i)) {
		case 167: goto label_1;
		case 168: goto label_2;
		case 169: goto label_2;
		case 170: goto label_1;
		case 171: goto label_1;
		case 172: goto label_1;
		case 173: goto label_1;
		case 174: goto label_1;
		case 175: goto label_2;
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
		case 186: goto label_2;
		case 187: goto label_2;
		case 188: goto label_2;
		case 189: goto label_2;
		case 190: goto label_2;
		case 191: goto label_1;
		case 192: goto label_2;
		case 193: goto label_2;
		case 194: goto label_2;
		case 195: goto label_2;
		case 196: goto label_2;
		case 197: goto label_2;
		case 198: goto label_2;
		case 199: goto label_2;
		case 200: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(3402);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(3404);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockDependencies_R_Array1_rhino_classfile_SuperBlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:getSuperBlockDependencies", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3415);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	sp[0].o = (jobject)createArray(ctx, &class_rhino_classfile_SuperBlock, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3417);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_access$400_rhino_classfile_ClassFileWriter_R_int(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(3418);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$500_rhino_classfile_ClassFileWriter_R_Array1_rhino_classfile_ExceptionTableEntry(ctx, sp[0].o);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(3419);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[3].o)))->F_itsStartLabel));
	frame[4].i = temp0;
	LINE_NUMBER(3420);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[3].o)))->F_itsHandlerLabel));
	frame[5].i = temp1;
	LINE_NUMBER(3421);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3422);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[4].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(3423);
	sp[0].o = frame[1].o;
	jint temp2 = (jint)((func_rhino_classfile_SuperBlock_getIndex_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getIndex_R_int])(ctx, (frame[6].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = (frame[7].o);
	LINE_NUMBER(3417);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3425);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$600_rhino_classfile_ClassFileWriter_R_rhino_UintMap(ctx, sp[0].o);
	sp[0].o = (jobject)((func_rhino_UintMap_getKeys_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_getKeys_R_Array1_int])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3426);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_12:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_13;
	}
	{
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(3427);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$600_rhino_classfile_ClassFileWriter_R_rhino_UintMap(ctx, sp[0].o);
	jint temp0 = (jint)((func_rhino_UintMap_getInt_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_getInt_int_int_R_int])(ctx, sp[0].o, (frame[6].i), (jint(-1)));
	frame[7].i = temp0;
	LINE_NUMBER(3428);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(3429);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[6].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(3430);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_rhino_classfile_SuperBlock_getIndex_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getIndex_R_int])(ctx, (frame[9].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (frame[8].o);
	LINE_NUMBER(3426);
	INST_IINC(5, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(3433);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ClassFileWriter$StackMapTable_getBranchTarget_int_R_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:getBranchTarget", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3442);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$700_rhino_classfile_ClassFileWriter_R_Array1_byte(ctx, sp[0].o);
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i))) & (255)) != (200)) goto label_1;
	}
	{
	LINE_NUMBER(3443);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (jint(4)));
	frame[2].i = (temp0 + temp1);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(3445);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (jint(2)));
	frame[2].i = (temp0 + (jshort(temp1)));
	}
label_4:;
	{
	LINE_NUMBER(3447);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_ClassFileWriter$StackMapTable_isBranch_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:isBranch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3454);
	switch((frame[1].i)) {
		case 153: goto label_1;
		case 154: goto label_1;
		case 155: goto label_1;
		case 156: goto label_1;
		case 157: goto label_1;
		case 158: goto label_1;
		case 159: goto label_1;
		case 160: goto label_1;
		case 161: goto label_1;
		case 162: goto label_1;
		case 163: goto label_1;
		case 164: goto label_1;
		case 165: goto label_1;
		case 166: goto label_1;
		case 167: goto label_1;
		case 168: goto label_2;
		case 169: goto label_2;
		case 170: goto label_2;
		case 171: goto label_2;
		case 172: goto label_2;
		case 173: goto label_2;
		case 174: goto label_2;
		case 175: goto label_2;
		case 176: goto label_2;
		case 177: goto label_2;
		case 178: goto label_2;
		case 179: goto label_2;
		case 180: goto label_2;
		case 181: goto label_2;
		case 182: goto label_2;
		case 183: goto label_2;
		case 184: goto label_2;
		case 185: goto label_2;
		case 186: goto label_2;
		case 187: goto label_2;
		case 188: goto label_2;
		case 189: goto label_2;
		case 190: goto label_2;
		case 191: goto label_2;
		case 192: goto label_2;
		case 193: goto label_2;
		case 194: goto label_2;
		case 195: goto label_2;
		case 196: goto label_2;
		case 197: goto label_2;
		case 198: goto label_1;
		case 199: goto label_1;
		case 200: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(3473);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(3475);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:getOperand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3480);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:getOperand", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3489);
	frame[3].i = (jint(0));
	LINE_NUMBER(3490);
	if ((frame[2].i) <= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(3491);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad operand size"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(3493);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(3494);
	jint temp0 = (frame[3].i) << (8);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$700_rhino_classfile_ClassFileWriter_R_Array1_byte(ctx, sp[0].o);
	frame[3].i = (temp0 | (((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((frame[1].i) + (frame[4].i)))) & (255)));
	LINE_NUMBER(3493);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(3496);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_verify(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:verify", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3503);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$100_rhino_classfile_ClassFileWriter_R_Array1_int(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(3504);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp[1].o = frame[1].o;
	jint temp0 = ((jarray) nullCheck(ctx, (frame[1].o)))->length;
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(0)));
	jint temp1 = jint(0);
	sp[3].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(3505);
	sp[3].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[3].o);
	LINE_NUMBER(3504);
	jint temp2 = (jint)((func_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, temp1, sp[3].o);
	LINE_NUMBER(3509);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_rhino_classfile_SuperBlock, (jint(1)));
	jint temp3 = jint(0);
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0))));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_workList = (jref) sp[1].o;
	LINE_NUMBER(3510);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workListTop = (jint(1));
	LINE_NUMBER(3511);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeWorkList(ctx, (frame[0].o));
	LINE_NUMBER(3514);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_9;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(3515);
	jint temp0 = (jint)((func_rhino_classfile_SuperBlock_isInitialized_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_isInitialized_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(3516);
	M_rhino_classfile_ClassFileWriter$StackMapTable_killSuperBlock_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[5].o));
	}
label_11:;
	{
	LINE_NUMBER(3514);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3519);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeWorkList(ctx, (frame[0].o));
	LINE_NUMBER(3520);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_killSuperBlock_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:killSuperBlock", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3538);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3539);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"java/lang/Throwable"_j));
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(3540);
	sp[2].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[2].o);
	LINE_NUMBER(3539);
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_java_lang_String_rhino_classfile_ConstantPool_R_int(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(3546);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_access$400_rhino_classfile_ClassFileWriter_R_int(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(3547);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$500_rhino_classfile_ClassFileWriter_R_Array1_rhino_classfile_ExceptionTableEntry(ctx, sp[0].o);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(3548);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[5].o)))->F_itsStartLabel));
	frame[6].i = temp0;
	LINE_NUMBER(3549);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[5].o)))->F_itsEndLabel));
	frame[7].i = temp1;
	LINE_NUMBER(3550);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[5].o)))->F_itsHandlerLabel));
	frame[8].i = temp2;
	LINE_NUMBER(3551);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(3552);
	jint temp3 = (jint)((func_rhino_classfile_SuperBlock_getStart_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getStart_R_int])(ctx, (frame[1].o));
	if (temp3 <= (frame[6].i)) goto label_13;
	}
	{
	jint temp0 = (jint)((func_rhino_classfile_SuperBlock_getStart_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getStart_R_int])(ctx, (frame[1].o));
	if (temp0 < (frame[7].i)) goto label_14;
	}
label_13:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = frame[1].o;
	LINE_NUMBER(3553);
	jint temp1 = (jint)((func_rhino_classfile_SuperBlock_getStart_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_SuperBlock_getStart_R_int])(ctx, sp[0].o);
	if (temp0 <= temp1) goto label_16;
	}
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_rhino_classfile_SuperBlock_getEnd_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getEnd_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_16;
	}
	{
	sp[0].o = frame[9].o;
	LINE_NUMBER(3554);
	jint temp0 = (jint)((func_rhino_classfile_SuperBlock_isInitialized_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_SuperBlock_isInitialized_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(3555);
	sp[0].o = (jobject)((func_rhino_classfile_SuperBlock_getLocals_R_Array1_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getLocals_R_Array1_int])(ctx, (frame[9].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3556);
	goto label_6;
	}
label_16:;
	{
	LINE_NUMBER(3546);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(3563);
	frame[4].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_access$400_rhino_classfile_ClassFileWriter_R_int(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_20;
	}
	{
	LINE_NUMBER(3564);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$500_rhino_classfile_ClassFileWriter_R_Array1_rhino_classfile_ExceptionTableEntry(ctx, sp[0].o);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(3565);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[5].o)))->F_itsStartLabel));
	frame[6].i = temp0;
	LINE_NUMBER(3566);
	jint temp1 = frame[6].i;
	jint temp2 = (jint)((func_rhino_classfile_SuperBlock_getStart_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getStart_R_int])(ctx, (frame[1].o));
	if (temp1 != temp2) goto label_24;
	}
	{
	LINE_NUMBER(3567);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_access$400_rhino_classfile_ClassFileWriter_R_int(ctx, sp[0].o);
	if (((temp0 - (frame[4].i)) + (jint(1))) < 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$500_rhino_classfile_ClassFileWriter_R_Array1_rhino_classfile_ExceptionTableEntry(ctx, sp[0].o);
	jint temp0 = (frame[4].i) + (jint(1));
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$500_rhino_classfile_ClassFileWriter_R_Array1_rhino_classfile_ExceptionTableEntry(ctx, sp[1].o);
	jint temp1 = ((frame[4].i) + (jint(1))) - (jint(1));
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_access$400_rhino_classfile_ClassFileWriter_R_int(ctx, sp[2].o);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, ((temp2 - (frame[4].i)) + (jint(1))));
	}
label_26:;
	{
	LINE_NUMBER(3568);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_access$410_rhino_classfile_ClassFileWriter_R_int(ctx, sp[0].o);
	LINE_NUMBER(3569);
	INST_IINC(4, -1);
	}
label_24:;
	{
	LINE_NUMBER(3563);
	INST_IINC(4, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(3573);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jint temp0 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	sp[2].o = frame[3].o;
	jint temp1 = ((jarray) nullCheck(ctx, (frame[3].o)))->length;
	sp[3].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(3574);
	sp[3].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[3].o);
	LINE_NUMBER(3573);
	jint temp2 = (jint)((func_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, temp1, sp[3].o);
	LINE_NUMBER(3576);
	jint temp3 = (jint)((func_rhino_classfile_SuperBlock_getEnd_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getEnd_R_int])(ctx, (frame[1].o));
	frame[4].i = (temp3 - (jint(1)));
	LINE_NUMBER(3577);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$700_rhino_classfile_ClassFileWriter_R_Array1_byte(ctx, sp[0].o);
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)) = (-65);
	LINE_NUMBER(3578);
	jint temp4 = (jint)((func_rhino_classfile_SuperBlock_getStart_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getStart_R_int])(ctx, (frame[1].o));
	frame[5].i = temp4;
	}
label_33:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_34;
	}
	{
	LINE_NUMBER(3579);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$700_rhino_classfile_ClassFileWriter_R_Array1_byte(ctx, sp[0].o);
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[5].i)) = (jint(0));
	LINE_NUMBER(3578);
	INST_IINC(5, 1);
	goto label_33;
	}
label_34:;
	LINE_NUMBER(3581);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_executeWorkList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:executeWorkList", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(3584);
	if (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workListTop) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(3585);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workList;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_workListTop) - (jint(1));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_workListTop = temp0;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(3586);
	((func_rhino_classfile_SuperBlock_setInQueue_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_setInQueue_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(3587);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_classfile_SuperBlock_getLocals_R_Array1_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getLocals_R_Array1_int])(ctx, (frame[1].o));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_locals = (jref) sp[1].o;
	LINE_NUMBER(3588);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_classfile_SuperBlock_getStack_R_Array1_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getStack_R_Array1_int])(ctx, (frame[1].o));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(3589);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_locals;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_localsTop = (((jarray) nullCheck(ctx, sp[1].o))->length);
	LINE_NUMBER(3590);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stack;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_stackTop = (((jarray) nullCheck(ctx, sp[1].o))->length);
	LINE_NUMBER(3591);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeBlock_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(3592);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(3593);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_executeBlock_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:executeBlock", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3599);
	frame[2].i = (jint(0));
	LINE_NUMBER(3609);
	jint temp0 = (jint)((func_rhino_classfile_SuperBlock_getStart_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getStart_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	}
label_2:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_rhino_classfile_SuperBlock_getEnd_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getEnd_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(3610);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$700_rhino_classfile_ClassFileWriter_R_Array1_byte(ctx, sp[0].o);
	frame[2].i = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i))) & (255));
	LINE_NUMBER(3611);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_execute_int_R_int(ctx, (frame[0].o), (frame[4].i));
	frame[3].i = temp0;
	LINE_NUMBER(3618);
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_isBranch_int_R_boolean(ctx, (frame[0].o), (frame[2].i));
	if (temp1 == 0) goto label_7;
	}
	{
	LINE_NUMBER(3619);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getBranchTarget_int_R_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3630);
	M_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(3637);
	goto label_11;
	}
label_7:;
	{
	if ((frame[2].i) != (170)) goto label_11;
	}
	{
	LINE_NUMBER(3638);
	frame[5].i = (((frame[4].i) + (jint(1))) + ((jint(3)) & ((frame[4].i) ^ (jint(-1)))));
	LINE_NUMBER(3639);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), (frame[5].i), (jint(4)));
	frame[6].i = temp0;
	LINE_NUMBER(3640);
	sp[0].o = frame[0].o;
	jint temp1 = (frame[4].i) + (frame[6].i);
	LINE_NUMBER(3641);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(ctx, sp[0].o, temp1);
	frame[7].o = sp[0].o;
	LINE_NUMBER(3646);
	M_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(3647);
	jint temp2 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[5].i) + (jint(4))), (jint(4)));
	frame[8].i = temp2;
	LINE_NUMBER(3648);
	jint temp3 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[5].i) + (8)), (jint(4)));
	frame[9].i = temp3;
	LINE_NUMBER(3649);
	frame[10].i = (((frame[9].i) - (frame[8].i)) + (jint(1)));
	LINE_NUMBER(3650);
	frame[11].i = ((frame[5].i) + (12));
	LINE_NUMBER(3651);
	frame[12].i = (jint(0));
	}
label_22:;
	{
	if ((frame[12].i) >= (frame[10].i)) goto label_11;
	}
	{
	LINE_NUMBER(3652);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[11].i) + ((jint(4)) * (frame[12].i))), (jint(4)));
	frame[13].i = (temp0 + temp1);
	LINE_NUMBER(3653);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[13].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(3659);
	M_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(3651);
	INST_IINC(12, 1);
	goto label_22;
	}
label_11:;
	{
	LINE_NUMBER(3663);
	frame[5].i = (jint(0));
	}
label_27:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_access$400_rhino_classfile_ClassFileWriter_R_int(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_28;
	}
	{
	LINE_NUMBER(3664);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$500_rhino_classfile_ClassFileWriter_R_Array1_rhino_classfile_ExceptionTableEntry(ctx, sp[0].o);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(3665);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[6].o)))->F_itsStartLabel));
	frame[7].i = temp0;
	LINE_NUMBER(3666);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[6].o)))->F_itsEndLabel));
	frame[8].i = temp1;
	LINE_NUMBER(3667);
	if ((frame[4].i) < (frame[7].i)) goto label_33;
	}
	{
	if ((frame[4].i) < (frame[8].i)) goto label_34;
	}
	LINE_NUMBER(3668);
	goto label_33;
label_34:;
	{
	LINE_NUMBER(3670);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int])(ctx, sp[0].o, ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[6].o)))->F_itsHandlerLabel));
	frame[9].i = temp0;
	LINE_NUMBER(3671);
	sp[0].o = (jobject)M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(3674);
	if (((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[6].o)))->F_itsCatchType) != 0) goto label_38;
	}
	{
	LINE_NUMBER(3675);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(3676);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[0].o);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"java/lang/Throwable"_j))));
	LINE_NUMBER(3675);
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_int_R_int(ctx, temp0);
	frame[11].i = temp1;
	goto label_43;
	}
label_38:;
	{
	LINE_NUMBER(3678);
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_int_R_int(ctx, ((jint)((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[6].o)))->F_itsCatchType));
	frame[11].i = temp0;
	}
label_43:;
	{
	LINE_NUMBER(3680);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_locals;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_localsTop;
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (frame[11].i);
	jint temp1 = jint(1);
	sp[3].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(3681);
	sp[3].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[3].o);
	LINE_NUMBER(3680);
	jint temp2 = (jint)((func_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, temp1, sp[3].o);
	LINE_NUMBER(3682);
	M_rhino_classfile_ClassFileWriter$StackMapTable_addToWorkList_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[10].o));
	}
label_33:;
	{
	LINE_NUMBER(3663);
	INST_IINC(5, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(3609);
	frame[4].i = ((frame[4].i) + (frame[3].i));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3695);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_isSuperBlockEnd_int_R_boolean(ctx, (frame[0].o), (frame[2].i));
	if (temp0 != 0) goto label_47;
	}
	{
	LINE_NUMBER(3696);
	jint temp0 = (jint)((func_rhino_classfile_SuperBlock_getIndex_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getIndex_R_int])(ctx, (frame[1].o));
	frame[4].i = (temp0 + (jint(1)));
	LINE_NUMBER(3697);
	jint temp1 = frame[4].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	if (temp1 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_47;
	}
	{
	LINE_NUMBER(3703);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	M_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i))));
	}
label_47:;
	LINE_NUMBER(3706);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:flowInto", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3713);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_locals;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_localsTop;
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp1 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stackTop;
	sp[3].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[3].o);
	jint temp2 = (jint)((func_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, temp1, sp[3].o);
	if (temp2 == 0) goto label_1;
	}
	{
	LINE_NUMBER(3714);
	M_rhino_classfile_ClassFileWriter$StackMapTable_addToWorkList_rhino_classfile_SuperBlock(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(3716);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_addToWorkList_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:addToWorkList", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3719);
	jint temp0 = (jint)((func_rhino_classfile_SuperBlock_isInQueue_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_isInQueue_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(3720);
	((func_rhino_classfile_SuperBlock_setInQueue_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_setInQueue_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(3721);
	((func_rhino_classfile_SuperBlock_setInitialized_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_setInitialized_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(3722);
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workListTop;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workList;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(3723);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_classfile_SuperBlock, (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workListTop) * (jint(2))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3724);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workList;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workListTop));
	LINE_NUMBER(3725);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workList = (jref) (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(3727);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_workList;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_workListTop;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_workListTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[1].o);
	}
label_1:;
	LINE_NUMBER(3729);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_execute_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[33];
	auto stack = &frame[29];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:execute", 33 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3737);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$700_rhino_classfile_ClassFileWriter_R_Array1_byte(ctx, sp[0].o);
	frame[2].i = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i))) & (255));
	LINE_NUMBER(3739);
	frame[6].i = (jint(0));
	LINE_NUMBER(3743);
	switch((frame[2].i)) {
		case 0: goto label_3;
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_5;
		case 4: goto label_5;
		case 5: goto label_5;
		case 6: goto label_5;
		case 7: goto label_5;
		case 8: goto label_5;
		case 9: goto label_6;
		case 10: goto label_6;
		case 11: goto label_7;
		case 12: goto label_7;
		case 13: goto label_7;
		case 14: goto label_8;
		case 15: goto label_8;
		case 16: goto label_5;
		case 17: goto label_5;
		case 18: goto label_9;
		case 19: goto label_9;
		case 20: goto label_9;
		case 21: goto label_5;
		case 22: goto label_6;
		case 23: goto label_7;
		case 24: goto label_8;
		case 25: goto label_10;
		case 26: goto label_5;
		case 27: goto label_5;
		case 28: goto label_5;
		case 29: goto label_5;
		case 30: goto label_6;
		case 31: goto label_6;
		case 32: goto label_6;
		case 33: goto label_6;
		case 34: goto label_7;
		case 35: goto label_7;
		case 36: goto label_7;
		case 37: goto label_7;
		case 38: goto label_8;
		case 39: goto label_8;
		case 40: goto label_8;
		case 41: goto label_8;
		case 42: goto label_11;
		case 43: goto label_11;
		case 44: goto label_11;
		case 45: goto label_11;
		case 46: goto label_12;
		case 47: goto label_13;
		case 48: goto label_14;
		case 49: goto label_15;
		case 50: goto label_16;
		case 51: goto label_12;
		case 52: goto label_12;
		case 53: goto label_12;
		case 54: goto label_17;
		case 55: goto label_18;
		case 56: goto label_19;
		case 57: goto label_20;
		case 58: goto label_21;
		case 59: goto label_22;
		case 60: goto label_22;
		case 61: goto label_22;
		case 62: goto label_22;
		case 63: goto label_23;
		case 64: goto label_23;
		case 65: goto label_23;
		case 66: goto label_23;
		case 67: goto label_24;
		case 68: goto label_24;
		case 69: goto label_24;
		case 70: goto label_24;
		case 71: goto label_25;
		case 72: goto label_25;
		case 73: goto label_25;
		case 74: goto label_25;
		case 75: goto label_26;
		case 76: goto label_26;
		case 77: goto label_26;
		case 78: goto label_26;
		case 79: goto label_27;
		case 80: goto label_27;
		case 81: goto label_27;
		case 82: goto label_27;
		case 83: goto label_27;
		case 84: goto label_27;
		case 85: goto label_27;
		case 86: goto label_27;
		case 87: goto label_28;
		case 88: goto label_29;
		case 89: goto label_30;
		case 90: goto label_31;
		case 91: goto label_32;
		case 92: goto label_33;
		case 93: goto label_34;
		case 94: goto label_35;
		case 95: goto label_36;
		case 96: goto label_12;
		case 97: goto label_13;
		case 98: goto label_14;
		case 99: goto label_15;
		case 100: goto label_12;
		case 101: goto label_13;
		case 102: goto label_14;
		case 103: goto label_15;
		case 104: goto label_12;
		case 105: goto label_13;
		case 106: goto label_14;
		case 107: goto label_15;
		case 108: goto label_12;
		case 109: goto label_13;
		case 110: goto label_14;
		case 111: goto label_15;
		case 112: goto label_12;
		case 113: goto label_13;
		case 114: goto label_14;
		case 115: goto label_15;
		case 116: goto label_37;
		case 117: goto label_38;
		case 118: goto label_39;
		case 119: goto label_40;
		case 120: goto label_12;
		case 121: goto label_13;
		case 122: goto label_12;
		case 123: goto label_13;
		case 124: goto label_12;
		case 125: goto label_13;
		case 126: goto label_12;
		case 127: goto label_13;
		case 128: goto label_12;
		case 129: goto label_13;
		case 130: goto label_12;
		case 131: goto label_13;
		case 132: goto label_3;
		case 133: goto label_38;
		case 134: goto label_39;
		case 135: goto label_40;
		case 136: goto label_37;
		case 137: goto label_39;
		case 138: goto label_40;
		case 139: goto label_37;
		case 140: goto label_38;
		case 141: goto label_40;
		case 142: goto label_37;
		case 143: goto label_38;
		case 144: goto label_39;
		case 145: goto label_37;
		case 146: goto label_37;
		case 147: goto label_37;
		case 148: goto label_12;
		case 149: goto label_12;
		case 150: goto label_12;
		case 151: goto label_12;
		case 152: goto label_12;
		case 153: goto label_28;
		case 154: goto label_28;
		case 155: goto label_28;
		case 156: goto label_28;
		case 157: goto label_28;
		case 158: goto label_28;
		case 159: goto label_41;
		case 160: goto label_41;
		case 161: goto label_41;
		case 162: goto label_41;
		case 163: goto label_41;
		case 164: goto label_41;
		case 165: goto label_41;
		case 166: goto label_41;
		case 167: goto label_3;
		case 168: goto label_42;
		case 169: goto label_42;
		case 170: goto label_43;
		case 171: goto label_42;
		case 172: goto label_44;
		case 173: goto label_44;
		case 174: goto label_44;
		case 175: goto label_44;
		case 176: goto label_44;
		case 177: goto label_44;
		case 178: goto label_45;
		case 179: goto label_28;
		case 180: goto label_46;
		case 181: goto label_41;
		case 182: goto label_47;
		case 183: goto label_47;
		case 184: goto label_47;
		case 185: goto label_47;
		case 186: goto label_48;
		case 187: goto label_49;
		case 188: goto label_50;
		case 189: goto label_51;
		case 190: goto label_37;
		case 191: goto label_52;
		case 192: goto label_53;
		case 193: goto label_37;
		case 194: goto label_28;
		case 195: goto label_28;
		case 196: goto label_54;
		case 197: goto label_42;
		case 198: goto label_28;
		case 199: goto label_28;
		case 200: goto label_3;
		case 201: goto label_42;
		default: goto label_42;
	}
	}
label_3:;
	LINE_NUMBER(3749);
	goto label_55;
label_53:;
	{
	LINE_NUMBER(3751);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	LINE_NUMBER(3752);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (jint(2)));
	jint temp2 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_int_R_int(ctx, temp1);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, sp[0].o, temp2);
	LINE_NUMBER(3753);
	goto label_55;
	}
label_27:;
	{
	LINE_NUMBER(3762);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_41:;
	{
	LINE_NUMBER(3773);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_28:;
	{
	LINE_NUMBER(3787);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	LINE_NUMBER(3788);
	goto label_55;
	}
label_29:;
	{
	LINE_NUMBER(3790);
	jlong temp0 = (jlong)M_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long(ctx, (frame[0].o));
	LINE_NUMBER(3791);
	goto label_55;
	}
label_4:;
	{
	LINE_NUMBER(3793);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(3794);
	goto label_55;
	}
label_12:;
	{
	LINE_NUMBER(3815);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_37:;
	{
	LINE_NUMBER(3826);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(3842);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(3843);
	goto label_55;
	}
label_13:;
	{
	LINE_NUMBER(3856);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_38:;
	{
	LINE_NUMBER(3862);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(3871);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(3872);
	goto label_55;
	}
label_14:;
	{
	LINE_NUMBER(3879);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_39:;
	{
	LINE_NUMBER(3885);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(3895);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(3896);
	goto label_55;
	}
label_15:;
	{
	LINE_NUMBER(3903);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_40:;
	{
	LINE_NUMBER(3909);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(3918);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(3919);
	goto label_55;
	}
label_17:;
	{
	LINE_NUMBER(3921);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[2].i = temp0;
	sp += 3;
	if (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide) == 0) goto label_65;
	}
	INST_ICONST(2);
	goto label_66;
label_65:;
	INST_ICONST(1);
label_66:;
	{
	sp -= 4;
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, sp[1].o, sp[2].i, sp[3].i);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int(ctx, sp[0].o, temp0, (jint(1)));
	LINE_NUMBER(3922);
	goto label_55;
	}
label_22:;
	{
	LINE_NUMBER(3927);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int(ctx, (frame[0].o), ((frame[2].i) - (59)), (jint(1)));
	LINE_NUMBER(3928);
	goto label_55;
	}
label_18:;
	{
	LINE_NUMBER(3930);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[2].i = temp0;
	sp += 3;
	if (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide) == 0) goto label_69;
	}
	INST_ICONST(2);
	goto label_70;
label_69:;
	INST_ICONST(1);
label_70:;
	{
	sp -= 4;
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, sp[1].o, sp[2].i, sp[3].i);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int(ctx, sp[0].o, temp0, (jint(4)));
	LINE_NUMBER(3931);
	goto label_55;
	}
label_23:;
	{
	LINE_NUMBER(3936);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int(ctx, (frame[0].o), ((frame[2].i) - (63)), (jint(4)));
	LINE_NUMBER(3937);
	goto label_55;
	}
label_19:;
	{
	LINE_NUMBER(3939);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[2].i = temp0;
	sp += 3;
	if (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide) == 0) goto label_73;
	}
	INST_ICONST(2);
	goto label_74;
label_73:;
	INST_ICONST(1);
label_74:;
	{
	sp -= 4;
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, sp[1].o, sp[2].i, sp[3].i);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int(ctx, sp[0].o, temp0, (jint(2)));
	LINE_NUMBER(3940);
	goto label_55;
	}
label_24:;
	{
	LINE_NUMBER(3945);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int(ctx, (frame[0].o), ((frame[2].i) - (67)), (jint(2)));
	LINE_NUMBER(3946);
	goto label_55;
	}
label_20:;
	{
	LINE_NUMBER(3948);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[2].i = temp0;
	sp += 3;
	if (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide) == 0) goto label_77;
	}
	INST_ICONST(2);
	goto label_78;
label_77:;
	INST_ICONST(1);
label_78:;
	{
	sp -= 4;
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, sp[1].o, sp[2].i, sp[3].i);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int(ctx, sp[0].o, temp0, (jint(3)));
	LINE_NUMBER(3949);
	goto label_55;
	}
label_25:;
	{
	LINE_NUMBER(3954);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int(ctx, (frame[0].o), ((frame[2].i) - (71)), (jint(3)));
	LINE_NUMBER(3955);
	goto label_55;
	}
label_10:;
	{
	LINE_NUMBER(3957);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[2].i = temp0;
	sp += 3;
	if (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide) == 0) goto label_81;
	}
	INST_ICONST(2);
	goto label_82;
label_81:;
	INST_ICONST(1);
label_82:;
	{
	sp -= 4;
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, sp[1].o, sp[2].i, sp[3].i);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeALoad_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(3958);
	goto label_55;
	}
label_11:;
	{
	LINE_NUMBER(3963);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeALoad_int(ctx, (frame[0].o), ((frame[2].i) - (42)));
	LINE_NUMBER(3964);
	goto label_55;
	}
label_21:;
	{
	LINE_NUMBER(3966);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[2].i = temp0;
	sp += 3;
	if (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide) == 0) goto label_85;
	}
	INST_ICONST(2);
	goto label_86;
label_85:;
	INST_ICONST(1);
label_86:;
	{
	sp -= 4;
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, sp[1].o, sp[2].i, sp[3].i);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeAStore_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(3967);
	goto label_55;
	}
label_26:;
	{
	LINE_NUMBER(3972);
	M_rhino_classfile_ClassFileWriter$StackMapTable_executeAStore_int(ctx, (frame[0].o), ((frame[2].i) - (75)));
	LINE_NUMBER(3973);
	goto label_55;
	}
label_44:;
	{
	LINE_NUMBER(3980);
	M_rhino_classfile_ClassFileWriter$StackMapTable_clearStack(ctx, (frame[0].o));
	LINE_NUMBER(3981);
	goto label_55;
	}
label_52:;
	{
	LINE_NUMBER(3983);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(3984);
	M_rhino_classfile_ClassFileWriter$StackMapTable_clearStack(ctx, (frame[0].o));
	LINE_NUMBER(3985);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(3986);
	goto label_55;
	}
label_36:;
	{
	LINE_NUMBER(3988);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(3989);
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(3990);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(3991);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(3992);
	goto label_55;
	}
label_9:;
	{
	LINE_NUMBER(3996);
	if ((frame[2].i) != (18)) goto label_97;
	}
	{
	LINE_NUMBER(3997);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	frame[5].i = temp0;
	goto label_100;
	}
label_97:;
	{
	LINE_NUMBER(3999);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (jint(2)));
	frame[5].i = temp0;
	}
label_100:;
	{
	LINE_NUMBER(4001);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[0].o);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_getConstantType_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getConstantType_int_R_byte])(ctx, sp[0].o, (frame[5].i));
	frame[12].i = temp0;
	LINE_NUMBER(4002);
	switch((frame[12].i)) {
		case 3: goto label_102;
		case 4: goto label_103;
		case 5: goto label_104;
		case 6: goto label_105;
		case 7: goto label_106;
		case 8: goto label_107;
		default: goto label_106;
	}
	}
label_105:;
	{
	LINE_NUMBER(4004);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(4005);
	goto label_55;
	}
label_103:;
	{
	LINE_NUMBER(4007);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(4008);
	goto label_55;
	}
label_104:;
	{
	LINE_NUMBER(4010);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(4011);
	goto label_55;
	}
label_102:;
	{
	LINE_NUMBER(4013);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(4014);
	goto label_55;
	}
label_107:;
	{
	LINE_NUMBER(4016);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"java/lang/String"_j));
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(4017);
	sp[2].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[2].o);
	LINE_NUMBER(4016);
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_java_lang_String_rhino_classfile_ConstantPool_R_int(ctx, sp[1].o, sp[2].o);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(4018);
	goto label_55;
	}
label_106:;
	{
	LINE_NUMBER(4020);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad const type "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[12].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_49:;
	{
	LINE_NUMBER(4025);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_UNINITIALIZED_VARIABLE_int_R_int(ctx, (frame[1].i));
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(4026);
	goto label_55;
	}
label_50:;
	{
	LINE_NUMBER(4028);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	LINE_NUMBER(4029);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(4030);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$700_rhino_classfile_ClassFileWriter_R_Array1_byte(ctx, sp[0].o);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_access$900_int_R_char(ctx, ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((frame[1].i) + (jint(1))))));
	frame[13].i = temp1;
	LINE_NUMBER(4031);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[0].o);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[13].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp2 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, sp[0].o, sp[1].o);
	frame[5].i = temp2;
	LINE_NUMBER(4032);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_int_R_int(ctx, (jshort((frame[5].i))));
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, sp[0].o, temp3);
	LINE_NUMBER(4033);
	goto label_55;
	}
label_51:;
	{
	LINE_NUMBER(4035);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (jint(2)));
	frame[5].i = temp0;
	LINE_NUMBER(4036);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[0].o);
	sp[0].o = (jobject)((func_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[11].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(4037);
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	LINE_NUMBER(4038);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[L"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[11].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (59));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(4039);
	sp[2].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[2].o);
	LINE_NUMBER(4038);
	jint temp2 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_java_lang_String_rhino_classfile_ConstantPool_R_int(ctx, sp[1].o, sp[2].o);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, sp[0].o, temp2);
	LINE_NUMBER(4040);
	goto label_55;
	}
label_47:;
	{
	LINE_NUMBER(4045);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (jint(2)));
	frame[5].i = temp0;
	LINE_NUMBER(4046);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(4047);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[0].o);
	sp[0].o = (jobject)((func_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[14].o = (checkCast(ctx, &class_rhino_classfile_FieldOrMethodRef, sp[0].o));
	LINE_NUMBER(4048);
	sp[0].o = (jobject)((func_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String])(ctx, (frame[14].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(4049);
	sp[0].o = (jobject)((func_rhino_classfile_FieldOrMethodRef_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_classfile_FieldOrMethodRef_getName_R_java_lang_String])(ctx, (frame[14].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(4050);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_access$1000_java_lang_String_R_int(ctx, (frame[15].o));
	frame[17].i = (bit_cast<jint>(bit_cast<uint32_t>(temp1) >> (16)));
	LINE_NUMBER(4051);
	frame[18].i = (jint(0));
	}
label_133:;
	{
	if ((frame[18].i) >= (frame[17].i)) goto label_134;
	}
	{
	LINE_NUMBER(4052);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	LINE_NUMBER(4051);
	INST_IINC(18, 1);
	goto label_133;
	}
label_134:;
	{
	LINE_NUMBER(4054);
	if ((frame[2].i) == (184)) goto label_137;
	}
	{
	LINE_NUMBER(4055);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[18].i = temp0;
	LINE_NUMBER(4056);
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_getTag_int_R_int(ctx, (frame[18].i));
	frame[19].i = temp1;
	LINE_NUMBER(4057);
	jint temp2 = frame[19].i;
	jint temp3 = (jint)SM_rhino_classfile_TypeInfo_UNINITIALIZED_VARIABLE_int_R_int(ctx, (jint(0)));
	if (temp2 == temp3) goto label_141;
	}
	{
	if ((frame[19].i) != (6)) goto label_137;
	}
label_141:;
	{
	LINE_NUMBER(4059);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"<init>"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (frame[16].o));
	if (temp0 == 0) goto label_142;
	}
	{
	LINE_NUMBER(4060);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(4061);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_access$1100_rhino_classfile_ClassFileWriter_R_short(ctx, sp[0].o);
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_int_R_int(ctx, temp0);
	frame[20].i = temp1;
	LINE_NUMBER(4062);
	M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int(ctx, (frame[0].o), (frame[18].i), (frame[20].i));
	LINE_NUMBER(4063);
	goto label_137;
	}
label_142:;
	{
	LINE_NUMBER(4064);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad instance"_j))));
	throwException(ctx, sp[0].o);	}
label_137:;
	{
	LINE_NUMBER(4068);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[15].o), (41));
	frame[18].i = temp0;
	LINE_NUMBER(4069);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[15].o), ((frame[18].i) + (jint(1))));
	frame[19].o = sp[0].o;
	LINE_NUMBER(4070);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$1200_java_lang_String_R_java_lang_String(ctx, (frame[19].o));
	frame[19].o = sp[0].o;
	LINE_NUMBER(4071);
	jint temp1 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[19].o), (((jobject) createStringLiteral(ctx, u8"V"_j))));
	if (temp1 != 0) goto label_55;
	}
	{
	LINE_NUMBER(4072);
	sp[0].o = frame[0].o;
	sp[1].o = frame[19].o;
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[2].o);
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_fromType_java_lang_String_rhino_classfile_ConstantPool_R_int(ctx, sp[1].o, sp[2].o);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, sp[0].o, temp0);
	goto label_55;
	}
label_48:;
	{
	LINE_NUMBER(4076);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (jint(2)));
	frame[5].i = temp0;
	LINE_NUMBER(4077);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[0].o);
	sp[0].o = (jobject)((func_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[15].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(4078);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_access$1000_java_lang_String_R_int(ctx, (frame[15].o));
	frame[17].i = (bit_cast<jint>(bit_cast<uint32_t>(temp1) >> (16)));
	LINE_NUMBER(4079);
	frame[20].i = (jint(0));
	}
label_154:;
	{
	if ((frame[20].i) >= (frame[17].i)) goto label_155;
	}
	{
	LINE_NUMBER(4080);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	LINE_NUMBER(4079);
	INST_IINC(20, 1);
	goto label_154;
	}
label_155:;
	{
	LINE_NUMBER(4082);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[15].o), (41));
	frame[18].i = temp0;
	LINE_NUMBER(4083);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[15].o), ((frame[18].i) + (jint(1))));
	frame[19].o = sp[0].o;
	LINE_NUMBER(4084);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$1200_java_lang_String_R_java_lang_String(ctx, (frame[19].o));
	frame[19].o = sp[0].o;
	LINE_NUMBER(4085);
	jint temp1 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[19].o), (((jobject) createStringLiteral(ctx, u8"V"_j))));
	if (temp1 != 0) goto label_55;
	}
	{
	LINE_NUMBER(4086);
	sp[0].o = frame[0].o;
	sp[1].o = frame[19].o;
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[2].o);
	jint temp0 = (jint)SM_rhino_classfile_TypeInfo_fromType_java_lang_String_rhino_classfile_ConstantPool_R_int(ctx, sp[1].o, sp[2].o);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, sp[0].o, temp0);
	goto label_55;
	}
label_46:;
	{
	LINE_NUMBER(4090);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	}
label_45:;
	{
	LINE_NUMBER(4093);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (jint(2)));
	frame[5].i = temp0;
	LINE_NUMBER(4094);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(4095);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[0].o);
	sp[0].o = (jobject)((func_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[20].o = (checkCast(ctx, &class_rhino_classfile_FieldOrMethodRef, sp[0].o));
	LINE_NUMBER(4096);
	sp[0].o = (jobject)((func_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String])(ctx, (frame[20].o));
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$1200_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[21].o = sp[0].o;
	LINE_NUMBER(4097);
	sp[0].o = frame[0].o;
	sp[1].o = frame[21].o;
	sp[2].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[2].o);
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_fromType_java_lang_String_rhino_classfile_ConstantPool_R_int(ctx, sp[1].o, sp[2].o);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, sp[0].o, temp1);
	LINE_NUMBER(4098);
	goto label_55;
	}
label_30:;
	{
	LINE_NUMBER(4100);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(4101);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(4102);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(4103);
	goto label_55;
	}
label_31:;
	{
	LINE_NUMBER(4105);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(4106);
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(4107);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(4108);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(4109);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(4110);
	goto label_55;
	}
label_32:;
	{
	LINE_NUMBER(4112);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(4113);
	jlong temp1 = (jlong)M_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long(ctx, (frame[0].o));
	frame[7].l = temp1;
	LINE_NUMBER(4114);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(4115);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long(ctx, (frame[0].o), (frame[7].l));
	LINE_NUMBER(4116);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(4117);
	goto label_55;
	}
label_33:;
	{
	LINE_NUMBER(4119);
	jlong temp0 = (jlong)M_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long(ctx, (frame[0].o));
	frame[7].l = temp0;
	LINE_NUMBER(4120);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long(ctx, (frame[0].o), (frame[7].l));
	LINE_NUMBER(4121);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long(ctx, (frame[0].o), (frame[7].l));
	LINE_NUMBER(4122);
	goto label_55;
	}
label_34:;
	{
	LINE_NUMBER(4124);
	jlong temp0 = (jlong)M_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long(ctx, (frame[0].o));
	frame[7].l = temp0;
	LINE_NUMBER(4125);
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[3].i = temp1;
	LINE_NUMBER(4126);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long(ctx, (frame[0].o), (frame[7].l));
	LINE_NUMBER(4127);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(4128);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long(ctx, (frame[0].o), (frame[7].l));
	LINE_NUMBER(4129);
	goto label_55;
	}
label_35:;
	{
	LINE_NUMBER(4131);
	jlong temp0 = (jlong)M_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long(ctx, (frame[0].o));
	frame[7].l = temp0;
	LINE_NUMBER(4132);
	jlong temp1 = (jlong)M_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long(ctx, (frame[0].o));
	frame[9].l = temp1;
	LINE_NUMBER(4133);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long(ctx, (frame[0].o), (frame[7].l));
	LINE_NUMBER(4134);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long(ctx, (frame[0].o), (frame[9].l));
	LINE_NUMBER(4135);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long(ctx, (frame[0].o), (frame[7].l));
	LINE_NUMBER(4136);
	goto label_55;
	}
label_43:;
	{
	LINE_NUMBER(4138);
	frame[22].i = (((frame[1].i) + (jint(1))) + ((jint(3)) & ((frame[1].i) ^ (jint(-1)))));
	LINE_NUMBER(4139);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[22].i) + (jint(4))), (jint(4)));
	frame[23].i = temp0;
	LINE_NUMBER(4140);
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(ctx, (frame[0].o), ((frame[22].i) + (8)), (jint(4)));
	frame[24].i = temp1;
	LINE_NUMBER(4141);
	frame[6].i = ((((jint(4)) * (((frame[24].i) - (frame[23].i)) + (jint(4)))) + (frame[22].i)) - (frame[1].i));
	LINE_NUMBER(4142);
	jint temp2 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	LINE_NUMBER(4143);
	goto label_55;
	}
label_16:;
	{
	LINE_NUMBER(4145);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	LINE_NUMBER(4146);
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[25].i = (bit_cast<jint>(bit_cast<uint32_t>(temp1) >> (8)));
	LINE_NUMBER(4147);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(4148);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[0].o);
	sp[0].o = (jobject)((func_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object])(ctx, sp[0].o, (frame[25].i));
	frame[11].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(4149);
	frame[26].o = (frame[11].o);
	LINE_NUMBER(4150);
	jint temp2 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[26].o), (jint(0)));
	if (temp2 == (91)) goto label_203;
	}
	{
	LINE_NUMBER(4151);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad array type"_j))));
	throwException(ctx, sp[0].o);	}
label_203:;
	{
	LINE_NUMBER(4153);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[26].o), (jint(1)));
	frame[27].o = sp[0].o;
	LINE_NUMBER(4154);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$1200_java_lang_String_R_java_lang_String(ctx, (frame[27].o));
	frame[28].o = sp[0].o;
	LINE_NUMBER(4155);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, sp[0].o);
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short])(ctx, sp[0].o, (frame[28].o));
	frame[25].i = temp0;
	LINE_NUMBER(4156);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_OBJECT_int_R_int(ctx, (frame[25].i));
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, sp[0].o, temp1);
	LINE_NUMBER(4157);
	goto label_55;
	}
label_54:;
	{
	LINE_NUMBER(4160);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide = (jint(1));
	LINE_NUMBER(4161);
	goto label_55;
	}
label_42:;
	{
	LINE_NUMBER(4169);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad opcode: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_55:;
	{
	LINE_NUMBER(4172);
	if ((frame[6].i) != 0) goto label_210;
	}
	{
	LINE_NUMBER(4173);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_access$1300_int_boolean_R_int(ctx, (frame[2].i), ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide));
	frame[6].i = temp0;
	}
label_210:;
	{
	LINE_NUMBER(4175);
	if (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide) == 0) goto label_212;
	}
	{
	if ((frame[2].i) == (196)) goto label_212;
	}
	{
	LINE_NUMBER(4176);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_wide = (jint(0));
	}
label_212:;
	{
	LINE_NUMBER(4178);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_executeALoad_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:executeALoad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(4182);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getLocal_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(4183);
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_getTag_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp1;
	LINE_NUMBER(4184);
	if ((frame[3].i) == (7)) goto label_3;
	}
	{
	if ((frame[3].i) == (6)) goto label_3;
	}
	{
	if ((frame[3].i) == (8)) goto label_3;
	}
	{
	if ((frame[3].i) != (jint(5))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(4188);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (frame[2].i));
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(4190);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bad local variable type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" at index: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(4194);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_executeAStore_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:executeAStore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(4197);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	M_rhino_classfile_ClassFileWriter$StackMapTable_setLocal_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(4198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:executeStore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4201);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	LINE_NUMBER(4202);
	M_rhino_classfile_ClassFileWriter$StackMapTable_setLocal_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(4203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:initializeTypeInfo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4210);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_locals;
	M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int_Array1_int_int(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_localsTop));
	LINE_NUMBER(4211);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	jint temp3 = frame[2].i;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stack;
	M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int_Array1_int_int(ctx, sp[0].o, temp2, temp3, sp[1].o, ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stackTop));
	LINE_NUMBER(4212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:initializeTypeInfo", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(4216);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	LINE_NUMBER(4217);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i))) != (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(4218);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)) = (frame[2].i);
	}
label_4:;
	{
	LINE_NUMBER(4216);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(4221);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_getLocal_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:getLocal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(4224);
	if ((frame[1].i) >= ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_localsTop)) goto label_1;
	}
	{
	LINE_NUMBER(4225);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_locals;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}
label_1:;
	{
	LINE_NUMBER(4227);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_setLocal_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:setLocal", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4231);
	if ((frame[1].i) < ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_localsTop)) goto label_1;
	}
	{
	LINE_NUMBER(4232);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[1].i) + (jint(1))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(4233);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_locals;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_localsTop));
	LINE_NUMBER(4234);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_locals = (jref) (frame[3].o);
	LINE_NUMBER(4235);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_localsTop = ((frame[1].i) + (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(4237);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_locals;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(4238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:push", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(4241);
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stackTop;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stack;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(4242);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stackTop) * (jint(2))), (jint(4)));
	sp[0].o = (jobject) createArray(ctx, &class_int, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(4243);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stack;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stackTop));
	LINE_NUMBER(4244);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stack = (jref) (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(4246);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_stackTop;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_stackTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(4247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4250);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_stackTop) - (jint(1));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_stackTop = temp0;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:push2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(4260);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(((frame[1].l) & (jlong(16777215ll))))));
	LINE_NUMBER(4261);
	frame[1].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32)));
	LINE_NUMBER(4262);
	if ((longCompare((frame[1].l), (jlong(0)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(4263);
	M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(ctx, (frame[0].o), (jint(((frame[1].l) & (jlong(16777215ll))))));
	}
label_3:;
	LINE_NUMBER(4265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:pop2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4275);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	frame[1].l = (jlong(temp0));
	LINE_NUMBER(4276);
	jint temp1 = (jint)SM_rhino_classfile_TypeInfo_isTwoWords_int_R_boolean(ctx, (jint((frame[1].l))));
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(4277);
	popStackFrame(ctx);
	return (frame[1].l);
	}
label_2:;
	{
	LINE_NUMBER(4279);
	jlong temp0 = (frame[1].l) << (32);
	jint temp1 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 | (jlong((temp1 & (jint(16777215))))));
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_clearStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:clearStack", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4283);
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_stackTop = (jint(0));
	LINE_NUMBER(4284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_computeWriteSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:computeWriteSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4296);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_getWorstCaseWriteSize_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(4297);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMap = (jref) sp[1].o;
	LINE_NUMBER(4298);
	M_rhino_classfile_ClassFileWriter$StackMapTable_computeRawStackMap(ctx, (frame[0].o));
	LINE_NUMBER(4299);
	popStackFrame(ctx);
	return (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop) + (jint(2)));
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_write_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4303);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(ctx, (((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop) + (jint(2))), (frame[1].o), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(4304);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1))), (frame[1].o), (frame[2].i));
	frame[2].i = temp1;
	LINE_NUMBER(4305);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (frame[2].i), ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop));
	LINE_NUMBER(4306);
	popStackFrame(ctx);
	return ((frame[2].i) + ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop));
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_computeRawStackMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:computeRawStackMap", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4313);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(4314);
	sp[0].o = (jobject)((func_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(4315);
	frame[3].i = (jint(-1));
	LINE_NUMBER(4316);
	frame[4].i = (jint(1));
	}
label_4:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(4317);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(4318);
	sp[0].o = (jobject)((func_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(4319);
	sp[0].o = (jobject)((func_rhino_classfile_SuperBlock_getStack_R_Array1_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getStack_R_Array1_int])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(4320);
	jint temp0 = (jint)((func_rhino_classfile_SuperBlock_getStart_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getStart_R_int])(ctx, (frame[5].o));
	frame[8].i = ((temp0 - (frame[3].i)) - (jint(1)));
	LINE_NUMBER(4322);
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) != 0) goto label_11;
	}
	{
	LINE_NUMBER(4323);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) <= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_13;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[6].o)))->length;
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ALOAD(2);
	INST_ARRAYLENGTH();
label_14:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(4325);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (((jarray) nullCheck(ctx, (frame[6].o)))->length)));
	frame[10].i = temp0;
	LINE_NUMBER(4330);
	frame[11].i = (jint(0));
	}
label_17:;
	{
	if ((frame[11].i) >= (frame[9].i)) goto label_18;
	}
	{
	LINE_NUMBER(4331);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[11].i))) == ((jint)ARRAY_ACCESS(jint, (frame[6].o), (frame[11].i)))) goto label_20;
	}
	LINE_NUMBER(4332);
	goto label_18;
label_20:;
	{
	LINE_NUMBER(4330);
	INST_IINC(11, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(4335);
	if ((frame[11].i) != (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_22;
	}
	INST_ILOAD(10);
	if ((--sp)->i != 0) goto label_22;
	{
	LINE_NUMBER(4338);
	M_rhino_classfile_ClassFileWriter$StackMapTable_writeSameFrame_int(ctx, (frame[0].o), (frame[8].i));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(4339);
	if ((frame[11].i) != (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_25;
	}
	{
	if ((frame[10].i) > (jint(3))) goto label_25;
	}
	{
	LINE_NUMBER(4342);
	M_rhino_classfile_ClassFileWriter$StackMapTable_writeChopFrame_int_int(ctx, (frame[0].o), (frame[10].i), (frame[8].i));
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(4343);
	if ((frame[11].i) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_27;
	}
	{
	if ((frame[10].i) > (jint(3))) goto label_27;
	}
	{
	LINE_NUMBER(4346);
	M_rhino_classfile_ClassFileWriter$StackMapTable_writeAppendFrame_Array1_int_int_int(ctx, (frame[0].o), (frame[6].o), (frame[10].i), (frame[8].i));
	goto label_24;
	}
label_27:;
	{
	LINE_NUMBER(4350);
	M_rhino_classfile_ClassFileWriter$StackMapTable_writeFullFrame_Array1_int_Array1_int_int(ctx, (frame[0].o), (frame[6].o), (frame[7].o), (frame[8].i));
	}
label_24:;
	LINE_NUMBER(4353);
	goto label_29;
label_11:;
	{
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) != (jint(1))) goto label_30;
	}
	{
	LINE_NUMBER(4354);
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_int_Array1_int_R_boolean(ctx, (frame[2].o), (frame[6].o));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(4355);
	M_rhino_classfile_ClassFileWriter$StackMapTable_writeSameLocalsOneStackItemFrame_Array1_int_int(ctx, (frame[0].o), (frame[7].o), (frame[8].i));
	goto label_29;
	}
label_32:;
	{
	LINE_NUMBER(4359);
	M_rhino_classfile_ClassFileWriter$StackMapTable_writeFullFrame_Array1_int_Array1_int_int(ctx, (frame[0].o), (frame[6].o), (frame[7].o), (frame[8].i));
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(4366);
	M_rhino_classfile_ClassFileWriter$StackMapTable_writeFullFrame_Array1_int_Array1_int_int(ctx, (frame[0].o), (frame[6].o), (frame[7].o), (frame[8].i));
	}
label_29:;
	{
	LINE_NUMBER(4369);
	frame[2].o = (frame[6].o);
	LINE_NUMBER(4370);
	jint temp0 = (jint)((func_rhino_classfile_SuperBlock_getStart_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_SuperBlock_getStart_R_int])(ctx, (frame[5].o));
	frame[3].i = temp0;
	LINE_NUMBER(4316);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(4372);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_getWorstCaseWriteSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:getWorstCaseWriteSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4381);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_superBlocks;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1));
	jint temp1 = 7;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_access$1400_rhino_classfile_ClassFileWriter_R_short(ctx, sp[0].o);
	jint temp3 = temp1 + (temp2 * (jint(3)));
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(4382);
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_access$1500_rhino_classfile_ClassFileWriter_R_short(ctx, sp[0].o);
	jint temp5 = temp0 * (temp3 + (temp4 * (jint(3))));
	LINE_NUMBER(4381);
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_writeSameFrame_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:writeSameFrame", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(4386);
	if ((frame[1].i) > (63)) goto label_1;
	}
	{
	LINE_NUMBER(4390);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[1].i)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(4394);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (-5);
	LINE_NUMBER(4395);
	sp[0].o = frame[0].o;
	jint temp3 = frame[1].i;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp3, sp[1].o, ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp4;
	}
label_3:;
	LINE_NUMBER(4398);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_writeSameLocalsOneStackItemFrame_Array1_int_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:writeSameLocalsOneStackItemFrame", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4401);
	if ((frame[2].i) > (63)) goto label_1;
	}
	{
	LINE_NUMBER(4405);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((64) + (frame[2].i))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(4410);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (-9);
	LINE_NUMBER(4411);
	sp[0].o = frame[0].o;
	jint temp3 = frame[2].i;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp3, sp[1].o, ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp4;
	}
label_3:;
	{
	LINE_NUMBER(4414);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_writeType_int_R_int(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))));
	LINE_NUMBER(4415);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_writeFullFrame_Array1_int_Array1_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:writeFullFrame", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(4419);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(-1));
	LINE_NUMBER(4420);
	sp[0].o = frame[0].o;
	jint temp3 = frame[3].i;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp3, sp[1].o, ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp4;
	LINE_NUMBER(4421);
	sp[0].o = frame[0].o;
	jint temp5 = ((jarray) nullCheck(ctx, (frame[1].o)))->length;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	jint temp6 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp5, sp[1].o, ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp6;
	LINE_NUMBER(4423);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_R_int(ctx, (frame[0].o), (frame[1].o));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp7;
	LINE_NUMBER(4424);
	sp[0].o = frame[0].o;
	jint temp8 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	jint temp9 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp8, sp[1].o, ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp9;
	LINE_NUMBER(4426);
	sp[0].o = frame[0].o;
	jint temp10 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_R_int(ctx, (frame[0].o), (frame[2].o));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp10;
	LINE_NUMBER(4427);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_writeAppendFrame_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:writeAppendFrame", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(4431);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i));
	LINE_NUMBER(4432);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((251) + (frame[2].i))));
	LINE_NUMBER(4433);
	sp[0].o = frame[0].o;
	jint temp3 = frame[3].i;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp3, sp[1].o, ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp4;
	LINE_NUMBER(4434);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[4].i));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp5;
	LINE_NUMBER(4435);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileWriter$StackMapTable_writeChopFrame_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:writeChopFrame", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4438);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((251) - (frame[1].i))));
	LINE_NUMBER(4439);
	sp[0].o = frame[0].o;
	jint temp3 = frame[2].i;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp3, sp[1].o, ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp4;
	LINE_NUMBER(4440);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:writeTypes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4443);
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:writeTypes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4447);
	frame[3].i = (frame[2].i);
	}
label_1:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(4448);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_rhino_classfile_ClassFileWriter$StackMapTable_writeType_int_R_int(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i))));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp0;
	LINE_NUMBER(4447);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(4450);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop);
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$StackMapTable_writeType_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$StackMapTable:writeType", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(4454);
	frame[2].i = ((frame[1].i) & (255));
	LINE_NUMBER(4455);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop;
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[1].o))->F_rawStackMapTop = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[2].i)));
	LINE_NUMBER(4456);
	if ((frame[2].i) == (7)) goto label_3;
	}
	{
	if ((frame[2].i) != (8)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(4458);
	sp[0].o = frame[0].o;
	jint temp0 = bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (8));
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMap;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp0, sp[1].o, ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop));
	((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK(sp[0].o))->F_rawStackMapTop = temp1;
	}
label_4:;
	{
	LINE_NUMBER(4461);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileWriter$StackMapTable *) NULL_CHECK((frame[0].o)))->F_rawStackMapTop);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_ClassFileWriter$StackMapTable[] {
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
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_generate,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_isSuperBlockEnd_int_R_boolean,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockDependencies_R_Array1_rhino_classfile_SuperBlock,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_getBranchTarget_int_R_rhino_classfile_SuperBlock,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_isBranch_int_R_boolean,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_verify,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_killSuperBlock_rhino_classfile_SuperBlock,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_executeWorkList,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_executeBlock_rhino_classfile_SuperBlock,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_addToWorkList_rhino_classfile_SuperBlock,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_execute_int_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_executeALoad_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_executeAStore_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int_Array1_int_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_getLocal_int_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_setLocal_int_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_push_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_clearStack,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_computeWriteSize_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_write_Array1_byte_int_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_computeRawStackMap,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_getWorstCaseWriteSize_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_writeSameFrame_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_writeSameLocalsOneStackItemFrame_Array1_int_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_writeFullFrame_Array1_int_Array1_int_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_writeAppendFrame_Array1_int_int_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_writeChopFrame_int_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_int_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$StackMapTable_writeType_int_R_int,
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
	{ "generate", "()V" },
	{ "getSuperBlockFromOffset", "(I)Lrhino/classfile/SuperBlock;" },
	{ "isSuperBlockEnd", "(I)Z" },
	{ "getSuperBlockDependencies", "()[Lrhino/classfile/SuperBlock;" },
	{ "getBranchTarget", "(I)Lrhino/classfile/SuperBlock;" },
	{ "isBranch", "(I)Z" },
	{ "getOperand", "(I)I" },
	{ "getOperand", "(II)I" },
	{ "verify", "()V" },
	{ "killSuperBlock", "(Lrhino/classfile/SuperBlock;)V" },
	{ "executeWorkList", "()V" },
	{ "executeBlock", "(Lrhino/classfile/SuperBlock;)V" },
	{ "flowInto", "(Lrhino/classfile/SuperBlock;)V" },
	{ "addToWorkList", "(Lrhino/classfile/SuperBlock;)V" },
	{ "execute", "(I)I" },
	{ "executeALoad", "(I)V" },
	{ "executeAStore", "(I)V" },
	{ "executeStore", "(II)V" },
	{ "initializeTypeInfo", "(II)V" },
	{ "initializeTypeInfo", "(II[II)V" },
	{ "getLocal", "(I)I" },
	{ "setLocal", "(II)V" },
	{ "push", "(I)V" },
	{ "pop", "()I" },
	{ "push2", "(J)V" },
	{ "pop2", "()J" },
	{ "clearStack", "()V" },
	{ "computeWriteSize", "()I" },
	{ "write", "([BI)I" },
	{ "computeRawStackMap", "()V" },
	{ "getWorstCaseWriteSize", "()I" },
	{ "writeSameFrame", "(I)V" },
	{ "writeSameLocalsOneStackItemFrame", "([II)V" },
	{ "writeFullFrame", "([I[II)V" },
	{ "writeAppendFrame", "([III)V" },
	{ "writeChopFrame", "(II)V" },
	{ "writeTypes", "([I)I" },
	{ "writeTypes", "([II)I" },
	{ "writeType", "(I)I" },
};

static FieldMetadata fields[] {
	{ "DEBUGSTACKMAP", &class_boolean, (intptr_t) &SF_rhino_classfile_ClassFileWriter$StackMapTable_DEBUGSTACKMAP, "Z", 24 },
	{ "locals", getArrayClass(&class_int, 1), offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_locals), "[I", 2 },
	{ "localsTop", &class_int, offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_localsTop), "I", 2 },
	{ "stack", getArrayClass(&class_int, 1), offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_stack), "[I", 2 },
	{ "stackTop", &class_int, offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_stackTop), "I", 2 },
	{ "workList", getArrayClass(&class_rhino_classfile_SuperBlock, 1), offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_workList), "[Lrhino/classfile/SuperBlock;", 2 },
	{ "workListTop", &class_int, offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_workListTop), "I", 2 },
	{ "superBlocks", getArrayClass(&class_rhino_classfile_SuperBlock, 1), offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_superBlocks), "[Lrhino/classfile/SuperBlock;", 2 },
	{ "superBlockDeps", getArrayClass(&class_rhino_classfile_SuperBlock, 1), offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_superBlockDeps), "[Lrhino/classfile/SuperBlock;", 2 },
	{ "rawStackMap", getArrayClass(&class_byte, 1), offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_rawStackMap), "[B", 2 },
	{ "rawStackMapTop", &class_int, offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_rawStackMapTop), "I", 2 },
	{ "wide", &class_boolean, offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_wide), "Z", 2 },
	{ "this$0", &class_rhino_classfile_ClassFileWriter, offsetof(rhino_classfile_ClassFileWriter$StackMapTable, F_this$0), "Lrhino/classfile/ClassFileWriter;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_ClassFileWriter$StackMapTable_rhino_classfile_ClassFileWriter, 0, "(Lrhino/classfile/ClassFileWriter;)V", 0 },
	{ "generate", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_generate, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_generate, "()V", 0 },
	{ "getSuperBlockFromOffset", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock, "(I)Lrhino/classfile/SuperBlock;", 2 },
	{ "isSuperBlockEnd", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_isSuperBlockEnd_int_R_boolean, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_isSuperBlockEnd_int_R_boolean, "(I)Z", 2 },
	{ "getSuperBlockDependencies", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockDependencies_R_Array1_rhino_classfile_SuperBlock, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockDependencies_R_Array1_rhino_classfile_SuperBlock, "()[Lrhino/classfile/SuperBlock;", 2 },
	{ "getBranchTarget", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_getBranchTarget_int_R_rhino_classfile_SuperBlock, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getBranchTarget_int_R_rhino_classfile_SuperBlock, "(I)Lrhino/classfile/SuperBlock;", 2 },
	{ "isBranch", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_isBranch_int_R_boolean, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_isBranch_int_R_boolean, "(I)Z", 2 },
	{ "getOperand", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_R_int, "(I)I", 2 },
	{ "getOperand", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int, "(II)I", 2 },
	{ "verify", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_verify, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_verify, "()V", 2 },
	{ "killSuperBlock", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_killSuperBlock_rhino_classfile_SuperBlock, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_killSuperBlock_rhino_classfile_SuperBlock, "(Lrhino/classfile/SuperBlock;)V", 2 },
	{ "executeWorkList", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_executeWorkList, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_executeWorkList, "()V", 2 },
	{ "executeBlock", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_executeBlock_rhino_classfile_SuperBlock, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_executeBlock_rhino_classfile_SuperBlock, "(Lrhino/classfile/SuperBlock;)V", 2 },
	{ "flowInto", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock, "(Lrhino/classfile/SuperBlock;)V", 2 },
	{ "addToWorkList", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_addToWorkList_rhino_classfile_SuperBlock, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_addToWorkList_rhino_classfile_SuperBlock, "(Lrhino/classfile/SuperBlock;)V", 2 },
	{ "execute", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_execute_int_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_execute_int_R_int, "(I)I", 2 },
	{ "executeALoad", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_executeALoad_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_executeALoad_int, "(I)V", 2 },
	{ "executeAStore", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_executeAStore_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_executeAStore_int, "(I)V", 2 },
	{ "executeStore", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int, "(II)V", 2 },
	{ "initializeTypeInfo", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int, "(II)V", 2 },
	{ "initializeTypeInfo", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int_Array1_int_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int_Array1_int_int, "(II[II)V", 2 },
	{ "getLocal", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_getLocal_int_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getLocal_int_R_int, "(I)I", 2 },
	{ "setLocal", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_setLocal_int_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_setLocal_int_int, "(II)V", 2 },
	{ "push", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_push_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_push_int, "(I)V", 2 },
	{ "pop", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int, "()I", 2 },
	{ "push2", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_push2_long, "(J)V", 2 },
	{ "pop2", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long, "()J", 2 },
	{ "clearStack", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_clearStack, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_clearStack, "()V", 2 },
	{ "computeWriteSize", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_computeWriteSize_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_computeWriteSize_R_int, "()I", 0 },
	{ "write", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_write_Array1_byte_int_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_write_Array1_byte_int_R_int, "([BI)I", 0 },
	{ "computeRawStackMap", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_computeRawStackMap, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_computeRawStackMap, "()V", 2 },
	{ "getWorstCaseWriteSize", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_getWorstCaseWriteSize_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getWorstCaseWriteSize_R_int, "()I", 2 },
	{ "writeSameFrame", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_writeSameFrame_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeSameFrame_int, "(I)V", 2 },
	{ "writeSameLocalsOneStackItemFrame", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_writeSameLocalsOneStackItemFrame_Array1_int_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeSameLocalsOneStackItemFrame_Array1_int_int, "([II)V", 2 },
	{ "writeFullFrame", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_writeFullFrame_Array1_int_Array1_int_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeFullFrame_Array1_int_Array1_int_int, "([I[II)V", 2 },
	{ "writeAppendFrame", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_writeAppendFrame_Array1_int_int_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeAppendFrame_Array1_int_int_int, "([III)V", 2 },
	{ "writeChopFrame", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_writeChopFrame_int_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeChopFrame_int_int, "(II)V", 2 },
	{ "writeTypes", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_R_int, "([I)I", 2 },
	{ "writeTypes", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_int_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_int_R_int, "([II)I", 2 },
	{ "writeType", (intptr_t) M_rhino_classfile_ClassFileWriter$StackMapTable_writeType_int_R_int, VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeType_int_R_int, "(I)I", 2 },
};

Class class_rhino_classfile_ClassFileWriter$StackMapTable{
		.nativeName = (intptr_t) "rhino/classfile/ClassFileWriter$StackMapTable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_ClassFileWriter$StackMapTable),
		.classVtable = (intptr_t) vtable_rhino_classfile_ClassFileWriter$StackMapTable,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_ClassFileWriter$StackMapTable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_ClassFileWriter$StackMapTable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_classfile_ClassFileWriter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 40,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 50,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_ClassFileWriter$StackMapTable = registerClass(&class_rhino_classfile_ClassFileWriter$StackMapTable);

}

