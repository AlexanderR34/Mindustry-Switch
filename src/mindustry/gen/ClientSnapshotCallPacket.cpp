#include "mindustry/gen/ClientSnapshotCallPacket.h"
#include "mindustry/world/Block.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/gen/ClientSnapshotCallPacket.h"
#include "arc/struct/Queue.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Player.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/world/Tile.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"
#include "mindustry/net/NetConnection.h"

extern "C" {


void mark_mindustry_gen_ClientSnapshotCallPacket(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_net_Packet(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_gen_ClientSnapshotCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_mining)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mining)->clazz)->markFunction)((jobject) self->F_mining, mark, depth + 1);
	if (self->F_selectedBlock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectedBlock)->clazz)->markFunction)((jobject) self->F_selectedBlock, mark, depth + 1);
	if (self->F_plans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plans)->clazz)->markFunction)((jobject) self->F_plans, mark, depth + 1);
}

void clinit_mindustry_gen_ClientSnapshotCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_ClientSnapshotCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientSnapshotCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_ClientSnapshotCallPacket_getPriority_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientSnapshotCallPacket:getPriority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (jint(2));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ClientSnapshotCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientSnapshotCallPacket:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_snapshotID));
	LINE_NUMBER(70);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_unitID));
	LINE_NUMBER(71);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_dead));
	LINE_NUMBER(72);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(73);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(74);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_pointerX));
	LINE_NUMBER(75);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_pointerY));
	LINE_NUMBER(76);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(77);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_baseRotation));
	LINE_NUMBER(78);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_xVelocity));
	LINE_NUMBER(79);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_yVelocity));
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_mining;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_boosting));
	LINE_NUMBER(82);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_shooting));
	LINE_NUMBER(83);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_chatting));
	LINE_NUMBER(84);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_building));
	LINE_NUMBER(85);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_selectedBlock;
	SM_mindustry_io_TypeIO_writeBlock_arc_util_io_Writes_mindustry_world_Block(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_selectedRotation));
	LINE_NUMBER(87);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_plans;
	SM_mindustry_io_TypeIO_writePlansQueueNet_arc_util_io_Writes_arc_struct_Queue(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_viewX));
	LINE_NUMBER(89);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_viewY));
	LINE_NUMBER(90);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_viewWidth));
	LINE_NUMBER(91);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_viewHeight));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ClientSnapshotCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientSnapshotCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ClientSnapshotCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientSnapshotCallPacket:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_snapshotID = temp0;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_unitID = temp1;
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_dead = temp2;
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_x = temp3;
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_y = temp4;
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_pointerX = temp5;
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_pointerY = temp6;
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_rotation = temp7;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp8 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_baseRotation = temp8;
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp9 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_xVelocity = temp9;
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp10 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_yVelocity = temp10;
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_mining = (jref) sp[1].o;
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp11 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_boosting = temp11;
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp12 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_shooting = temp12;
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp13 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_chatting = temp13;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp14 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_building = temp14;
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readBlock_arc_util_io_Reads_R_mindustry_world_Block(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_selectedBlock = (jref) sp[1].o;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp15 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_selectedRotation = temp15;
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueueNet_arc_util_io_Reads_R_arc_struct_Queue(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp16 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_viewX = temp16;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp17 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_viewY = temp17;
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp18 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_viewWidth = temp18;
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp19 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_viewHeight = temp19;
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ClientSnapshotCallPacket_handleServer_mindustry_net_NetConnection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientSnapshotCallPacket:handleServer", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_player;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_kicked) == 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(130);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_player;
	frame[2].o = sp[0].o;
	LINE_NUMBER(133);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_snapshotID;
	jint temp1 = (jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_unitID;
	jint temp2 = (jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_dead;
	jfloat temp3 = (jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_pointerX;
	jfloat temp6 = (jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_pointerY;
	jfloat temp7 = (jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp8 = (jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_baseRotation;
	jfloat temp9 = (jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_xVelocity;
	jfloat temp10 = (jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_yVelocity;
	sp[1].o = (jobject)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_mining;
	jint temp11 = (jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_boosting;
	jint temp12 = (jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_shooting;
	jint temp13 = (jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_chatting;
	jint temp14 = (jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_building;
	sp[2].o = (jobject)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_selectedBlock;
	jint temp15 = (jint)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_selectedRotation;
	sp[3].o = (jobject)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_plans;
	SM_mindustry_core_NetServer_clientSnapshot_mindustry_gen_Player_int_int_boolean_float_float_float_float_float_float_float_float_mindustry_world_Tile_boolean_boolean_boolean_boolean_mindustry_world_Block_int_arc_struct_Queue_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, sp[1].o, temp11, temp12, temp13, temp14, sp[2].o, temp15, sp[3].o, ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_viewX), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_viewY), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_viewWidth), ((jfloat)((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_viewHeight));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_ClientSnapshotCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientSnapshotCallPacket:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_ClientSnapshotCallPacket[] {
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
	(void *) M_mindustry_net_Packet_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_ClientSnapshotCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_ClientSnapshotCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_ClientSnapshotCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_ClientSnapshotCallPacket_handled,
	(void *) M_mindustry_gen_ClientSnapshotCallPacket_getPriority_R_int,
	(void *) M_mindustry_net_Packet_handleClient,
	(void *) M_mindustry_gen_ClientSnapshotCallPacket_handleServer_mindustry_net_NetConnection,
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
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "allow", "(Z)Z" },
	{ "read", "(Larc/util/io/Reads;I)V" },
	{ "handled", "()V" },
	{ "getPriority", "()I" },
	{ "handleClient", "()V" },
	{ "handleServer", "(Lmindustry/net/NetConnection;)V" },
};

static FieldMetadata fields[] {
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_ClientSnapshotCallPacket, F_DATA), "[B", 2 },
	{ "snapshotID", &class_int, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_snapshotID), "I", 1 },
	{ "unitID", &class_int, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_unitID), "I", 1 },
	{ "dead", &class_boolean, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_dead), "Z", 1 },
	{ "x", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_y), "F", 1 },
	{ "pointerX", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_pointerX), "F", 1 },
	{ "pointerY", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_pointerY), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_rotation), "F", 1 },
	{ "baseRotation", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_baseRotation), "F", 1 },
	{ "xVelocity", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_xVelocity), "F", 1 },
	{ "yVelocity", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_yVelocity), "F", 1 },
	{ "mining", &class_mindustry_world_Tile, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_mining), "Lmindustry/world/Tile;", 1 },
	{ "boosting", &class_boolean, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_boosting), "Z", 1 },
	{ "shooting", &class_boolean, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_shooting), "Z", 1 },
	{ "chatting", &class_boolean, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_chatting), "Z", 1 },
	{ "building", &class_boolean, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_building), "Z", 1 },
	{ "selectedBlock", &class_mindustry_world_Block, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_selectedBlock), "Lmindustry/world/Block;", 1 },
	{ "selectedRotation", &class_int, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_selectedRotation), "I", 1 },
	{ "plans", &class_arc_struct_Queue, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_plans), "Larc/struct/Queue;", 1 },
	{ "viewX", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_viewX), "F", 1 },
	{ "viewY", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_viewY), "F", 1 },
	{ "viewWidth", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_viewWidth), "F", 1 },
	{ "viewHeight", &class_float, offsetof(mindustry_gen_ClientSnapshotCallPacket, F_viewHeight), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_ClientSnapshotCallPacket, 0, "()V", 1 },
	{ "getPriority", (intptr_t) M_mindustry_gen_ClientSnapshotCallPacket_getPriority_R_int, VTABLE_mindustry_gen_ClientSnapshotCallPacket_getPriority_R_int, "()I", 1 },
	{ "write", (intptr_t) M_mindustry_gen_ClientSnapshotCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_ClientSnapshotCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_ClientSnapshotCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_ClientSnapshotCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_ClientSnapshotCallPacket_handled, VTABLE_mindustry_gen_ClientSnapshotCallPacket_handled, "()V", 1 },
	{ "handleServer", (intptr_t) M_mindustry_gen_ClientSnapshotCallPacket_handleServer_mindustry_net_NetConnection, VTABLE_mindustry_gen_ClientSnapshotCallPacket_handleServer_mindustry_net_NetConnection, "(Lmindustry/net/NetConnection;)V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_ClientSnapshotCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_ClientSnapshotCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_ClientSnapshotCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/ClientSnapshotCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_ClientSnapshotCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_ClientSnapshotCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_ClientSnapshotCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_ClientSnapshotCallPacket,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_ClientSnapshotCallPacket = registerClass(&class_mindustry_gen_ClientSnapshotCallPacket);

}
