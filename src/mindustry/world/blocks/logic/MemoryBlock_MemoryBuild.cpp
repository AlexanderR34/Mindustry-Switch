#include "mindustry/world/blocks/logic/MemoryBlock_MemoryBuild.h"
#include "mindustry/world/Block.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/world/blocks/logic/MemoryBlock_1.h"
#include "mindustry/logic/LWritable.h"
#include "mindustry/world/blocks/logic/MemoryBlock.h"
#include "mindustry/logic/LAccess.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "mindustry/io/TypeIO_ContentMapper.h"
#include "mindustry/io/TypeIO_Boxed.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "java/util/Arrays.h"
#include "mindustry/logic/LReadable.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/game/Team.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/logic/MemoryBlock_MemoryBuild.h"
#include "arc/util/io/Writes.h"

extern "C" {

jobject SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel;

void mark_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_gen_Building(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) object;
	if (self->F_objectMemory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_objectMemory)->clazz)->markFunction)((jobject) self->F_objectMemory, mark, depth + 1);
	if (self->F_numberMemory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_numberMemory)->clazz)->markFunction)((jobject) self->F_numberMemory, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void init_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_mindustry_world_blocks_logic_MemoryBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((mindustry_world_blocks_logic_MemoryBlock *) NULL_CHECK(sp[1].o))->F_memoryCapacity));
	((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK(sp[0].o))->F_objectMemory = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject) createArray(ctx, &class_double, ((jint)((mindustry_world_blocks_logic_MemoryBlock *) NULL_CHECK(sp[1].o))->F_memoryCapacity));
	((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK(sp[0].o))->F_numberMemory = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_canPickup_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:canPickup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_collide_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:collide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_1;
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

jbool M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_displayable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:displayable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_MemoryBlock_accessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_MemoryBlock_accessible_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_readable_mindustry_logic_LExecutor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:readable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_read_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(93);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(94);
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(99);
	sp[0].o = frame[4].o;
	clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_numberMemory;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, ((jdouble)ARRAY_ACCESS(jdouble, sp[1].o, (frame[3].i))));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(102);
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, (frame[2].o), (frame[4].o));
	}
label_8:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_writable_mindustry_logic_LExecutor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:writable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_readable_mindustry_logic_LExecutor_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_readable_mindustry_logic_LExecutor_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_write_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(114);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(116);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_isobj) == 0) goto label_4;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_objval;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	jint temp0 = frame[3].i;
	clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_numberMemory;
	ARRAY_ACCESS(jdouble, sp[0].o, (frame[3].i)) = ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_numval);
	}
label_6:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	clinit_mindustry_world_blocks_logic_MemoryBlock$1(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_MemoryBlock$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jdouble temp0 = jdouble(((jint)((mindustry_world_blocks_logic_MemoryBlock *) NULL_CHECK(sp[0].o))->F_memoryCapacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(128);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	sp[0].d = temp0;
	sp += 1;
	}
label_3:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:damage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(135);
	M_mindustry_gen_Building_damage_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(147);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(148);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(150);
	sp[0].o = frame[3].o;
	clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_numberMemory;
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_double(ctx, sp[0].o, ((jdouble)ARRAY_ACCESS(jdouble, sp[1].o, (frame[2].i))));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(153);
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, (frame[1].o), (frame[3].o));
	}
label_9:;
	{
	LINE_NUMBER(148);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:read", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(160);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(164);
	if ((frame[2].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(165);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(166);
	jdouble temp0 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	frame[5].d = temp0;
	LINE_NUMBER(167);
	jint temp1 = frame[4].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	if (temp1 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	jint temp0 = frame[4].i;
	clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_numberMemory;
	ARRAY_ACCESS(jdouble, sp[0].o, (frame[4].i)) = (frame[5].d);
	}
label_9:;
	{
	LINE_NUMBER(165);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(176);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(177);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(178);
	if ((frame[5].i) != (11)) goto label_16;
	}
	{
	LINE_NUMBER(180);
	jdouble temp0 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	frame[6].d = temp0;
	LINE_NUMBER(181);
	jint temp1 = frame[4].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	if (temp1 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_19;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	jint temp0 = frame[4].i;
	clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_numberMemory;
	ARRAY_ACCESS(jdouble, sp[0].o, (frame[4].i)) = (frame[6].d);
	}
label_19:;
	LINE_NUMBER(185);
	goto label_22;
label_16:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_boolean_byte_R_java_lang_Object(ctx, (frame[1].o), (jint(1)), (jobject(nullptr)), (jint(0)), (jint(1)), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(187);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_22;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[6].o);
	}
label_22:;
	{
	LINE_NUMBER(176);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:afterReadAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	M_mindustry_gen_Building_afterReadAll(ctx, (frame[0].o));
	LINE_NUMBER(198);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_io_TypeIO$Boxed)) == 0) goto label_5;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_io_TypeIO$Boxed, (frame[3].o)));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MemoryBlock$MemoryBuild *) NULL_CHECK((frame[0].o)))->F_objectMemory;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((func_mindustry_io_TypeIO$Boxed_unbox_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_io_TypeIO$Boxed, INDEX_mindustry_io_TypeIO$Boxed_unbox_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(198);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(204);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(ctx);
	{
	LINE_NUMBER(55);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild(ctx);
	SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Building_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Building_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Building_getX_R_float,
	(void *) M_mindustry_gen_Building_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_isValid_R_boolean,
	(void *) M_mindustry_gen_Building_shouldAmbientSound_R_boolean,
	(void *) M_mindustry_gen_Building_getAmbientVolume_R_float,
	(void *) M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound,
	(void *) M_mindustry_gen_Building_hitSize_R_float,
	(void *) M_mindustry_gen_Building_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Building_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_isAdded_R_boolean,
	(void *) M_mindustry_gen_Building_isLocal_R_boolean,
	(void *) M_mindustry_gen_Building_isRemote_R_boolean,
	(void *) M_mindustry_gen_Building_serialize_R_boolean,
	(void *) M_mindustry_gen_Building_classId_R_int,
	(void *) M_mindustry_gen_Building_id_R_int,
	(void *) M_mindustry_gen_Building_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onSolid_R_boolean,
	(void *) M_mindustry_gen_Building_x_R_float,
	(void *) M_mindustry_gen_Building_y_R_float,
	(void *) M_mindustry_gen_Building_tileX_R_int,
	(void *) M_mindustry_gen_Building_tileY_R_int,
	(void *) M_mindustry_gen_Building_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_set_float_float,
	(void *) M_mindustry_gen_Building_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_trns_float_float,
	(void *) M_mindustry_gen_Building_x_float,
	(void *) M_mindustry_gen_Building_y_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_Building_damagePierce_float,
	(void *) M_mindustry_gen_Building_damagePierce_float_boolean,
	(void *) M_mindustry_gen_Building_healFract_float,
	(void *) M_mindustry_gen_Building_heal_float,
	(void *) M_mindustry_gen_Building_damaged_R_boolean,
	(void *) M_mindustry_gen_Building_dead_R_boolean,
	(void *) M_mindustry_gen_Building_health_R_float,
	(void *) M_mindustry_gen_Building_healthf_R_float,
	(void *) M_mindustry_gen_Building_hitTime_R_float,
	(void *) M_mindustry_gen_Building_maxHealth_R_float,
	(void *) M_mindustry_gen_Building_clampHealth,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_damage_float,
	(void *) M_mindustry_gen_Building_damage_float_boolean,
	(void *) M_mindustry_gen_Building_damageContinuous_float,
	(void *) M_mindustry_gen_Building_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Building_dead_boolean,
	(void *) M_mindustry_gen_Building_heal,
	(void *) M_mindustry_gen_Building_health_float,
	(void *) M_mindustry_gen_Building_hitTime_float,
	(void *) M_mindustry_gen_Building_kill,
	(void *) M_mindustry_gen_Building_killed,
	(void *) M_mindustry_gen_Building_maxHealth_float,
	(void *) M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_cheating_R_boolean,
	(void *) M_mindustry_gen_Building_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Building_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Building_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_displayable_R_boolean,
	(void *) M_mindustry_gen_Building_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_gen_Building_canUnload_R_boolean,
	(void *) M_mindustry_gen_Building_canWithdraw_R_boolean,
	(void *) M_mindustry_gen_Building_checkSolid_R_boolean,
	(void *) M_mindustry_gen_Building_checkSuppression_R_boolean,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_configTapped_R_boolean,
	(void *) M_mindustry_gen_Building_consumeTriggerValid_R_boolean,
	(void *) M_mindustry_gen_Building_dump_R_boolean,
	(void *) M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_inMapArea_R_boolean,
	(void *) M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isCommandable_R_boolean,
	(void *) M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isHealSuppressed_R_boolean,
	(void *) M_mindustry_gen_Building_isInsulated_R_boolean,
	(void *) M_mindustry_gen_Building_isPayload_R_boolean,
	(void *) M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_gen_Building_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_gen_Building_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_gen_Building_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_gen_Building_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_gen_Building_pickedUp,
	(void *) M_mindustry_gen_Building_playDestroySound,
	(void *) M_mindustry_gen_Building_powerGraphRemoved,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item_int,
	(void *) M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle,
	(void *) M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_readBase_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_recache,
	(void *) M_mindustry_gen_Building_recentlyHealed,
	(void *) M_mindustry_gen_Building_removeFromProximity,
	(void *) M_mindustry_gen_Building_sleep,
	(void *) M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_tapped,
	(void *) M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_unitOn_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_updateConsumption,
	(void *) M_mindustry_gen_Building_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_updateTile,
	(void *) M_mindustry_gen_Building_writeAll_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeBase_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable,
	(void *) M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_readable_mindustry_logic_LExecutor_R_boolean,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_read_mindustry_logic_LVar_mindustry_logic_LVar,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_writable_mindustry_logic_LExecutor_R_boolean,
	(void *) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_write_mindustry_logic_LVar_mindustry_logic_LVar,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "isValid", "()Z" },
	{ "shouldAmbientSound", "()Z" },
	{ "getAmbientVolume", "()F" },
	{ "getAmbientSound", "()Larc/audio/Sound;" },
	{ "hitSize", "()F" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "control", "(Lmindustry/logic/LAccess;DDDD)V" },
	{ "control", "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "setIndex__build", "(I)V" },
	{ "back", "()Lmindustry/gen/Building;" },
	{ "front", "()Lmindustry/gen/Building;" },
	{ "left", "()Lmindustry/gen/Building;" },
	{ "right", "()Lmindustry/gen/Building;" },
	{ "getCommandPosition", "()Larc/math/geom/Vec2;" },
	{ "config", "()Ljava/lang/Object;" },
	{ "getPayloads", "()Lmindustry/type/PayloadSeq;" },
	{ "findClosestEdge", "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;" },
	{ "getPayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "takePayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "onRepaired", "()V" },
	{ "placed", "()V" },
	{ "playerPlaced", "(Ljava/lang/Object;)V" },
	{ "read", "(Larc/util/io/Reads;B)V" },
	{ "create", "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "getLiquidDestination", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;" },
	{ "init", "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;" },
	{ "nearby", "(II)Lmindustry/gen/Building;" },
	{ "nearby", "(I)Lmindustry/gen/Building;" },
	{ "getCursor", "()Larc/Graphics$Cursor;" },
	{ "getDisplayIcon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPowerConnections", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "absorbLasers", "()Z" },
	{ "acceptItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "acceptLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "acceptPayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "allowDeposit", "()Z" },
	{ "allowUpdate", "()Z" },
	{ "canBeReplaced", "(Lmindustry/world/Block;)Z" },
	{ "canConsume", "()Z" },
	{ "canControlSelect", "(Lmindustry/gen/Unit;)Z" },
	{ "canDump", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "canDumpLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "canPickup", "()Z" },
	{ "canResupply", "()Z" },
	{ "canUnload", "()Z" },
	{ "canWithdraw", "()Z" },
	{ "checkSolid", "()Z" },
	{ "checkSuppression", "()Z" },
	{ "collide", "(Lmindustry/gen/Bullet;)Z" },
	{ "collision", "(Lmindustry/gen/Bullet;)Z" },
	{ "conductsTo", "(Lmindustry/gen/Building;)Z" },
	{ "configTapped", "()Z" },
	{ "consumeTriggerValid", "()Z" },
	{ "dump", "()Z" },
	{ "dump", "(Lmindustry/type/Item;)Z" },
	{ "dumpAccumulate", "()Z" },
	{ "dumpAccumulate", "(Lmindustry/type/Item;)Z" },
	{ "dumpPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "inMapArea", "()Z" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "isCommandable", "()Z" },
	{ "isDiscovered", "(Lmindustry/game/Team;)Z" },
	{ "isHealSuppressed", "()Z" },
	{ "isInsulated", "()Z" },
	{ "isPayload", "()Z" },
	{ "moveForward", "(Lmindustry/type/Item;)Z" },
	{ "movePayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "onConfigureBuildTapped", "(Lmindustry/gen/Building;)Z" },
	{ "onConfigureTapped", "(FF)Z" },
	{ "payloadCheck", "(I)Z" },
	{ "productionValid", "()Z" },
	{ "put", "(Lmindustry/type/Item;)Z" },
	{ "shouldConsume", "()Z" },
	{ "shouldHideConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "shouldShowConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "wasRecentlyDamaged", "()Z" },
	{ "wasRecentlyHealed", "(F)Z" },
	{ "relativeTo", "(Lmindustry/gen/Building;)B" },
	{ "relativeTo", "(II)B" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeToEdge", "(Lmindustry/world/Tile;)B" },
	{ "version", "()B" },
	{ "ambientVolume", "()F" },
	{ "calculateHeat", "([F)F" },
	{ "calculateHeat", "([FLarc/struct/IntSet;)F" },
	{ "delta", "()F" },
	{ "drawrot", "()F" },
	{ "edelta", "()F" },
	{ "efficiencyScale", "()F" },
	{ "fogRadius", "()F" },
	{ "getDisplayEfficiency", "()F" },
	{ "getPowerProduction", "()F" },
	{ "getProgressIncrease", "(F)F" },
	{ "handleDamage", "(F)F" },
	{ "moveLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "moveLiquidForward", "(ZLmindustry/type/Liquid;)F" },
	{ "progress", "()F" },
	{ "rotdeg", "()F" },
	{ "timeScale", "()F" },
	{ "totalProgress", "()F" },
	{ "warmup", "()F" },
	{ "acceptStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I" },
	{ "explosionItemCap", "()I" },
	{ "getMaximumAccepted", "(Lmindustry/type/Item;)I" },
	{ "moduleBitmask", "()I" },
	{ "pos", "()I" },
	{ "removeStack", "(Lmindustry/type/Item;I)I" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "status", "()Lmindustry/world/meta/BlockStatus;" },
	{ "flowItems", "()Lmindustry/world/modules/ItemModule;" },
	{ "addPlan", "(Z)V" },
	{ "addPlan", "(ZZ)V" },
	{ "afterDestroyed", "()V" },
	{ "afterPickedUp", "()V" },
	{ "applyBoost", "(FF)V" },
	{ "applyHealSuppression", "(F)V" },
	{ "applyHealSuppression", "(FLarc/graphics/Color;)V" },
	{ "applySlowdown", "(FF)V" },
	{ "buildConfiguration", "(Larc/scene/ui/layout/Table;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;Z)V" },
	{ "checkAllowUpdate", "()V" },
	{ "configure", "(Ljava/lang/Object;)V" },
	{ "configureAny", "(Ljava/lang/Object;)V" },
	{ "configured", "(Lmindustry/gen/Unit;Ljava/lang/Object;)V" },
	{ "consume", "()V" },
	{ "created", "()V" },
	{ "damage", "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V" },
	{ "damage", "(Lmindustry/game/Team;F)V" },
	{ "deselect", "()V" },
	{ "displayBars", "(Larc/scene/ui/layout/Table;)V" },
	{ "displayConsumption", "(Larc/scene/ui/layout/Table;)V" },
	{ "draw", "()V" },
	{ "drawCached", "()V" },
	{ "drawConfigure", "()V" },
	{ "drawCracks", "()V" },
	{ "drawDisabled", "()V" },
	{ "drawItemSelection", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "drawLight", "()V" },
	{ "drawLiquidLight", "(Lmindustry/type/Liquid;F)V" },
	{ "drawSelect", "()V" },
	{ "drawStatus", "()V" },
	{ "drawTeam", "()V" },
	{ "drawTeamTop", "()V" },
	{ "dropped", "()V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;FI)V" },
	{ "eachEdge", "(Larc/func/Cons;)V" },
	{ "getStackOffset", "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V" },
	{ "handleItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)V" },
	{ "handleLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V" },
	{ "handlePayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "handleStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V" },
	{ "handleString", "(Ljava/lang/Object;)V" },
	{ "handleUnitPayload", "(Lmindustry/gen/Unit;Larc/func/Cons;)V" },
	{ "healthChanged", "()V" },
	{ "incrementDump", "(I)V" },
	{ "itemTaken", "(Lmindustry/type/Item;)V" },
	{ "noSleep", "()V" },
	{ "offload", "(Lmindustry/type/Item;)V" },
	{ "onCommand", "(Larc/math/geom/Vec2;)V" },
	{ "onConfigureClosed", "()V" },
	{ "onControlSelect", "(Lmindustry/gen/Unit;)V" },
	{ "onDeconstructed", "(Lmindustry/gen/Unit;)V" },
	{ "onDestroyed", "()V" },
	{ "onNearbyBuildAdded", "(Lmindustry/gen/Building;)V" },
	{ "onProximityAdded", "()V" },
	{ "onProximityRemoved", "()V" },
	{ "onProximityUpdate", "()V" },
	{ "onRemoved", "()V" },
	{ "overwrote", "(Larc/struct/Seq;)V" },
	{ "payloadDraw", "()V" },
	{ "pickedUp", "()V" },
	{ "playDestroySound", "()V" },
	{ "powerGraphRemoved", "()V" },
	{ "produced", "(Lmindustry/type/Item;)V" },
	{ "produced", "(Lmindustry/type/Item;I)V" },
	{ "puddleOn", "(Lmindustry/gen/Puddle;)V" },
	{ "readAll", "(Larc/util/io/Reads;B)V" },
	{ "readBase", "(Larc/util/io/Reads;)V" },
	{ "readSync", "(Larc/util/io/Reads;B)V" },
	{ "recache", "()V" },
	{ "recentlyHealed", "()V" },
	{ "removeFromProximity", "()V" },
	{ "sleep", "()V" },
	{ "splashLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "tapped", "()V" },
	{ "transferLiquid", "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V" },
	{ "unitOn", "(Lmindustry/gen/Unit;)V" },
	{ "unitOnAny", "(Lmindustry/gen/Unit;)V" },
	{ "unitRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "updateConsumption", "()V" },
	{ "updateEfficiencyMultiplier", "()V" },
	{ "updateFogVisibility", "()V" },
	{ "updateLastAccess", "(Lmindustry/gen/Player;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "updatePowerGraph", "()V" },
	{ "updateProximity", "()V" },
	{ "updateTableAlign", "(Larc/scene/ui/layout/Table;)V" },
	{ "updateTile", "()V" },
	{ "writeAll", "(Larc/util/io/Writes;)V" },
	{ "writeBase", "(Larc/util/io/Writes;)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "lambda$splashLiquid$0", "(Lmindustry/type/Liquid;F)V" },
	{ "lambda$onDeconstructed$0", "(FLmindustry/world/Tile;)V" },
	{ "lambda$display$6", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$9", "(Larc/struct/Bits;Ljava/lang/Runnable;)V" },
	{ "lambda$display$7", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$display$8", "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$placed$0", "(Lmindustry/gen/Building;)V" },
	{ "readable", "(Lmindustry/logic/LExecutor;)Z" },
	{ "read", "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V" },
	{ "writable", "(Lmindustry/logic/LExecutor;)Z" },
	{ "write", "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LReadable, &class_mindustry_logic_LWritable, };

static FieldMetadata fields[] {
	{ "sentinel", &class_java_lang_Object, (intptr_t) &SF_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sentinel, "Ljava/lang/Object;", 26 },
	{ "objectMemory", getArrayClass(&class_java_lang_Object, 1), offsetof(mindustry_world_blocks_logic_MemoryBlock$MemoryBuild, F_objectMemory), "[Ljava/lang/Object;", 2 },
	{ "numberMemory", getArrayClass(&class_double, 1), offsetof(mindustry_world_blocks_logic_MemoryBlock$MemoryBuild, F_numberMemory), "[D", 2 },
	{ "this$0", &class_mindustry_world_blocks_logic_MemoryBlock, offsetof(mindustry_world_blocks_logic_MemoryBlock$MemoryBuild, F_this$0), "Lmindustry/world/blocks/logic/MemoryBlock;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_mindustry_world_blocks_logic_MemoryBlock, 0, "(Lmindustry/world/blocks/logic/MemoryBlock;)V", 1 },
	{ "canPickup", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_canPickup_R_boolean, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_canPickup_R_boolean, "()Z", 1 },
	{ "collide", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_collide_mindustry_gen_Bullet_R_boolean, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_collide_mindustry_gen_Bullet_R_boolean, "(Lmindustry/gen/Bullet;)Z", 1 },
	{ "displayable", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_displayable_R_boolean, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_displayable_R_boolean, "()Z", 1 },
	{ "readable", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_readable_mindustry_logic_LExecutor_R_boolean, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_readable_mindustry_logic_LExecutor_R_boolean, "(Lmindustry/logic/LExecutor;)Z", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_read_mindustry_logic_LVar_mindustry_logic_LVar, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_read_mindustry_logic_LVar_mindustry_logic_LVar, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "writable", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_writable_mindustry_logic_LExecutor_R_boolean, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_writable_mindustry_logic_LExecutor_R_boolean, "(Lmindustry/logic/LExecutor;)Z", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_write_mindustry_logic_LVar_mindustry_logic_LVar, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_write_mindustry_logic_LVar_mindustry_logic_LVar, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "damage", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_damage_float, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_damage_float, "(F)V", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_version_R_byte, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_afterReadAll, VTABLE_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild_afterReadAll, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/MemoryBlock$MemoryBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_logic_MemoryBlock$MemoryBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_logic_MemoryBlock,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 314,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild = registerClass(&class_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild);

}

