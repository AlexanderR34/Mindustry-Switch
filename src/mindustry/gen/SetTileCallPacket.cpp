#include "mindustry/gen/SetTileCallPacket.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/gen/SetTileCallPacket.h"
#include "mindustry/world/Tile.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/game/Team.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_SetTileCallPacket(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_SetTileCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
}

void clinit_mindustry_gen_SetTileCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_SetTileCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SetTileCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_SetTileCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_SetTileCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_SetTileCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_SetTileCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SetTileCallPacket:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(25);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[0].o)))->F_block;
	SM_mindustry_io_TypeIO_writeBlock_arc_util_io_Writes_mindustry_world_Block(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(26);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(27);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_SetTileCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SetTileCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_SetTileCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_SetTileCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SetTileCallPacket:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	clinit_mindustry_gen_SetTileCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_SetTileCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, sp[1].o);
	((mindustry_gen_SetTileCallPacket *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_SetTileCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readBlock_arc_util_io_Reads_R_mindustry_world_Block(ctx, sp[1].o);
	((mindustry_gen_SetTileCallPacket *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_SetTileCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, sp[1].o);
	((mindustry_gen_SetTileCallPacket *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_SetTileCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_SetTileCallPacket *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_SetTileCallPacket_handleClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SetTileCallPacket:handleClient", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_world_Tile_setTile_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_int(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_SetTileCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SetTileCallPacket:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(51);
	if ((frame[1].i) != 0) goto label_1;
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

void *vtable_mindustry_gen_SetTileCallPacket[] {
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
	(void *) M_mindustry_gen_SetTileCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_SetTileCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_SetTileCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_SetTileCallPacket_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_gen_SetTileCallPacket_handleClient,
	(void *) M_mindustry_net_Packet_handleServer_mindustry_net_NetConnection,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_SetTileCallPacket, F_DATA), "[B", 2 },
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_gen_SetTileCallPacket, F_tile), "Lmindustry/world/Tile;", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_gen_SetTileCallPacket, F_block), "Lmindustry/world/Block;", 1 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_gen_SetTileCallPacket, F_team), "Lmindustry/game/Team;", 1 },
	{ "rotation", &class_int, offsetof(mindustry_gen_SetTileCallPacket, F_rotation), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_SetTileCallPacket, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_SetTileCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_SetTileCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_SetTileCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_SetTileCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_SetTileCallPacket_handled, VTABLE_mindustry_gen_SetTileCallPacket_handled, "()V", 1 },
	{ "handleClient", (intptr_t) M_mindustry_gen_SetTileCallPacket_handleClient, VTABLE_mindustry_gen_SetTileCallPacket_handleClient, "()V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_SetTileCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_SetTileCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_SetTileCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/SetTileCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_SetTileCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_SetTileCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_SetTileCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_SetTileCallPacket,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_SetTileCallPacket = registerClass(&class_mindustry_gen_SetTileCallPacket);

}
