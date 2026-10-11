#include "mindustry/gen/StateSnapshotCallPacket.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/gen/StateSnapshotCallPacket.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_StateSnapshotCallPacket(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_StateSnapshotCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_coreData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_coreData)->clazz)->markFunction)((jobject) self->F_coreData, mark, depth + 1);
}

void clinit_mindustry_gen_StateSnapshotCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_StateSnapshotCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/StateSnapshotCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_StateSnapshotCallPacket_getPriority_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/StateSnapshotCallPacket:getPriority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_StateSnapshotCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/StateSnapshotCallPacket:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_waveTime));
	LINE_NUMBER(39);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_wave));
	LINE_NUMBER(40);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_enemies));
	LINE_NUMBER(41);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_paused));
	LINE_NUMBER(42);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_gameOver));
	LINE_NUMBER(43);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_timeData));
	LINE_NUMBER(44);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_tps));
	LINE_NUMBER(45);
	((func_arc_util_io_Writes_l_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_l_long])(ctx, (frame[1].o), ((jlong)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_rand0));
	LINE_NUMBER(46);
	((func_arc_util_io_Writes_l_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_l_long])(ctx, (frame[1].o), ((jlong)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_rand1));
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_coreData;
	SM_mindustry_io_TypeIO_writeBytes_arc_util_io_Writes_Array1_byte(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_StateSnapshotCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/StateSnapshotCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_StateSnapshotCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/StateSnapshotCallPacket:handled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_waveTime = temp0;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_wave = temp1;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp2 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_enemies = temp2;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp3 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_paused = temp3;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_gameOver = temp4;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp5 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_timeData = temp5;
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp6 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, sp[1].o);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_tps = temp6;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jlong temp7 = (jlong)((func_arc_util_io_Reads_l_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_l_R_long])(ctx, sp[1].o);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_rand0 = temp7;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jlong temp8 = (jlong)((func_arc_util_io_Reads_l_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_l_R_long])(ctx, sp[1].o);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_rand1 = temp8;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readBytes_arc_util_io_Reads_R_Array1_byte(ctx, sp[1].o);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_coreData = (jref) sp[1].o;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_StateSnapshotCallPacket_handleClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/StateSnapshotCallPacket:handleClient", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	jfloat temp0 = (jfloat)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_waveTime;
	jint temp1 = (jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_wave;
	jint temp2 = (jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_enemies;
	jint temp3 = (jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_paused;
	jint temp4 = (jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_gameOver;
	jint temp5 = (jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_timeData;
	jint temp6 = (jint)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_tps;
	jlong temp7 = (jlong)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_rand0;
	jlong temp8 = (jlong)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_rand1;
	sp[0].o = (jobject)((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[0].o)))->F_coreData;
	SM_mindustry_core_NetClient_stateSnapshot_float_int_int_boolean_boolean_int_byte_long_long_Array1_byte(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, sp[0].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_StateSnapshotCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/StateSnapshotCallPacket:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
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

void *vtable_mindustry_gen_StateSnapshotCallPacket[] {
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
	(void *) M_mindustry_gen_StateSnapshotCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_StateSnapshotCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_StateSnapshotCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_StateSnapshotCallPacket_handled,
	(void *) M_mindustry_gen_StateSnapshotCallPacket_getPriority_R_int,
	(void *) M_mindustry_gen_StateSnapshotCallPacket_handleClient,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_StateSnapshotCallPacket, F_DATA), "[B", 2 },
	{ "waveTime", &class_float, offsetof(mindustry_gen_StateSnapshotCallPacket, F_waveTime), "F", 1 },
	{ "wave", &class_int, offsetof(mindustry_gen_StateSnapshotCallPacket, F_wave), "I", 1 },
	{ "enemies", &class_int, offsetof(mindustry_gen_StateSnapshotCallPacket, F_enemies), "I", 1 },
	{ "paused", &class_boolean, offsetof(mindustry_gen_StateSnapshotCallPacket, F_paused), "Z", 1 },
	{ "gameOver", &class_boolean, offsetof(mindustry_gen_StateSnapshotCallPacket, F_gameOver), "Z", 1 },
	{ "timeData", &class_int, offsetof(mindustry_gen_StateSnapshotCallPacket, F_timeData), "I", 1 },
	{ "tps", &class_byte, offsetof(mindustry_gen_StateSnapshotCallPacket, F_tps), "B", 1 },
	{ "rand0", &class_long, offsetof(mindustry_gen_StateSnapshotCallPacket, F_rand0), "J", 1 },
	{ "rand1", &class_long, offsetof(mindustry_gen_StateSnapshotCallPacket, F_rand1), "J", 1 },
	{ "coreData", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_StateSnapshotCallPacket, F_coreData), "[B", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_StateSnapshotCallPacket, 0, "()V", 1 },
	{ "getPriority", (intptr_t) M_mindustry_gen_StateSnapshotCallPacket_getPriority_R_int, VTABLE_mindustry_gen_StateSnapshotCallPacket_getPriority_R_int, "()I", 1 },
	{ "write", (intptr_t) M_mindustry_gen_StateSnapshotCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_StateSnapshotCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_StateSnapshotCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_StateSnapshotCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_StateSnapshotCallPacket_handled, VTABLE_mindustry_gen_StateSnapshotCallPacket_handled, "()V", 1 },
	{ "handleClient", (intptr_t) M_mindustry_gen_StateSnapshotCallPacket_handleClient, VTABLE_mindustry_gen_StateSnapshotCallPacket_handleClient, "()V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_StateSnapshotCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_StateSnapshotCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_StateSnapshotCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/StateSnapshotCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_StateSnapshotCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_StateSnapshotCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_StateSnapshotCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_StateSnapshotCallPacket,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_StateSnapshotCallPacket = registerClass(&class_mindustry_gen_StateSnapshotCallPacket);

}
