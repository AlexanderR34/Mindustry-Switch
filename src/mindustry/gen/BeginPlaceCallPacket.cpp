#include "mindustry/gen/BeginPlaceCallPacket.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/BeginPlaceCallPacket.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/game/Team.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"
#include "mindustry/world/Build.h"

extern "C" {


void mark_mindustry_gen_BeginPlaceCallPacket(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_BeginPlaceCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_placeConfig)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_placeConfig)->clazz)->markFunction)((jobject) self->F_placeConfig, mark, depth + 1);
}

void clinit_mindustry_gen_BeginPlaceCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_BeginPlaceCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BeginPlaceCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_BeginPlaceCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BeginPlaceCallPacket:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_io_TypeIO_writeUnit_arc_util_io_Writes_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(31);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_result;
	SM_mindustry_io_TypeIO_writeBlock_arc_util_io_Writes_mindustry_world_Block(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(32);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(34);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(35);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(36);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_placeConfig;
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_BeginPlaceCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BeginPlaceCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_BeginPlaceCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BeginPlaceCallPacket:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readUnit_arc_util_io_Reads_R_mindustry_gen_Unit(ctx, sp[1].o);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readBlock_arc_util_io_Reads_R_mindustry_world_Block(ctx, sp[1].o);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, sp[1].o);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK(sp[0].o))->F_y = temp1;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp2 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readObjectSafe_arc_util_io_Reads_R_java_lang_Object(ctx, sp[1].o);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK(sp[0].o))->F_placeConfig = (jref) sp[1].o;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_BeginPlaceCallPacket_handleClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BeginPlaceCallPacket:handleClient", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_result;
	sp[2].o = (jobject)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[3].o = (jobject)((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[0].o)))->F_placeConfig;
	SM_mindustry_world_Build_beginPlace_mindustry_gen_Unit_mindustry_world_Block_mindustry_game_Team_int_int_int_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_BeginPlaceCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BeginPlaceCallPacket:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(63);
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

void *vtable_mindustry_gen_BeginPlaceCallPacket[] {
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
	(void *) M_mindustry_gen_BeginPlaceCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_BeginPlaceCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_BeginPlaceCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_BeginPlaceCallPacket_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_gen_BeginPlaceCallPacket_handleClient,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_BeginPlaceCallPacket, F_DATA), "[B", 2 },
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_gen_BeginPlaceCallPacket, F_unit), "Lmindustry/gen/Unit;", 1 },
	{ "result", &class_mindustry_world_Block, offsetof(mindustry_gen_BeginPlaceCallPacket, F_result), "Lmindustry/world/Block;", 1 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_gen_BeginPlaceCallPacket, F_team), "Lmindustry/game/Team;", 1 },
	{ "x", &class_int, offsetof(mindustry_gen_BeginPlaceCallPacket, F_x), "I", 1 },
	{ "y", &class_int, offsetof(mindustry_gen_BeginPlaceCallPacket, F_y), "I", 1 },
	{ "rotation", &class_int, offsetof(mindustry_gen_BeginPlaceCallPacket, F_rotation), "I", 1 },
	{ "placeConfig", &class_java_lang_Object, offsetof(mindustry_gen_BeginPlaceCallPacket, F_placeConfig), "Ljava/lang/Object;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_BeginPlaceCallPacket, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_BeginPlaceCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_BeginPlaceCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_BeginPlaceCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_BeginPlaceCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_BeginPlaceCallPacket_handled, VTABLE_mindustry_gen_BeginPlaceCallPacket_handled, "()V", 1 },
	{ "handleClient", (intptr_t) M_mindustry_gen_BeginPlaceCallPacket_handleClient, VTABLE_mindustry_gen_BeginPlaceCallPacket_handleClient, "()V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_BeginPlaceCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_BeginPlaceCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_BeginPlaceCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/BeginPlaceCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_BeginPlaceCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_BeginPlaceCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_BeginPlaceCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_BeginPlaceCallPacket,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_BeginPlaceCallPacket = registerClass(&class_mindustry_gen_BeginPlaceCallPacket);

}
