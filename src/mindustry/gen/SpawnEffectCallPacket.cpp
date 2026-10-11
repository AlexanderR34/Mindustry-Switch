#include "mindustry/gen/SpawnEffectCallPacket.h"
#include "arc/util/io/Reads.h"
#include "mindustry/gen/SpawnEffectCallPacket.h"
#include "java/lang/Object.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_SpawnEffectCallPacket(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_SpawnEffectCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_u)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_u)->clazz)->markFunction)((jobject) self->F_u, mark, depth + 1);
}

void clinit_mindustry_gen_SpawnEffectCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_SpawnEffectCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SpawnEffectCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_SpawnEffectCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_SpawnEffectCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_SpawnEffectCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SpawnEffectCallPacket:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(23);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(24);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(25);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[0].o)))->F_u;
	SM_mindustry_io_TypeIO_writeUnitType_arc_util_io_Writes_mindustry_type_UnitType(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_SpawnEffectCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SpawnEffectCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_SpawnEffectCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SpawnEffectCallPacket:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	clinit_mindustry_gen_SpawnEffectCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_SpawnEffectCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_SpawnEffectCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK(sp[0].o))->F_y = temp1;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_SpawnEffectCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_SpawnEffectCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readUnitType_arc_util_io_Reads_R_mindustry_type_UnitType(ctx, sp[1].o);
	((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK(sp[0].o))->F_u = (jref) sp[1].o;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_SpawnEffectCallPacket_handleClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SpawnEffectCallPacket:handleClient", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	jfloat temp0 = (jfloat)((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[0].o = (jobject)((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[0].o)))->F_u;
	SM_mindustry_ai_WaveSpawner_spawnEffect_float_float_float_mindustry_type_UnitType(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_SpawnEffectCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/SpawnEffectCallPacket:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(49);
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

void *vtable_mindustry_gen_SpawnEffectCallPacket[] {
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
	(void *) M_mindustry_gen_SpawnEffectCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_SpawnEffectCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_SpawnEffectCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_SpawnEffectCallPacket_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_gen_SpawnEffectCallPacket_handleClient,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_SpawnEffectCallPacket, F_DATA), "[B", 2 },
	{ "x", &class_float, offsetof(mindustry_gen_SpawnEffectCallPacket, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_SpawnEffectCallPacket, F_y), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_gen_SpawnEffectCallPacket, F_rotation), "F", 1 },
	{ "u", &class_mindustry_type_UnitType, offsetof(mindustry_gen_SpawnEffectCallPacket, F_u), "Lmindustry/type/UnitType;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_SpawnEffectCallPacket, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_SpawnEffectCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_SpawnEffectCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_SpawnEffectCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_SpawnEffectCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_SpawnEffectCallPacket_handled, VTABLE_mindustry_gen_SpawnEffectCallPacket_handled, "()V", 1 },
	{ "handleClient", (intptr_t) M_mindustry_gen_SpawnEffectCallPacket_handleClient, VTABLE_mindustry_gen_SpawnEffectCallPacket_handleClient, "()V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_SpawnEffectCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_SpawnEffectCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_SpawnEffectCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/SpawnEffectCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_SpawnEffectCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_SpawnEffectCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_SpawnEffectCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_SpawnEffectCallPacket,
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
static bool registered_mindustry_gen_SpawnEffectCallPacket = registerClass(&class_mindustry_gen_SpawnEffectCallPacket);

}
