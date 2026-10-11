#include "mindustry/gen/LogicExplosionCallPacket.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/gen/LogicExplosionCallPacket.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/game/Team.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_LogicExplosionCallPacket(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_LogicExplosionCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
}

void clinit_mindustry_gen_LogicExplosionCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_LogicExplosionCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LogicExplosionCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LogicExplosionCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LogicExplosionCallPacket:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(34);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(35);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_radius));
	LINE_NUMBER(36);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_damage));
	LINE_NUMBER(37);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_air));
	LINE_NUMBER(38);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_ground));
	LINE_NUMBER(39);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_pierce));
	LINE_NUMBER(40);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_effect));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LogicExplosionCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LogicExplosionCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LogicExplosionCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LogicExplosionCallPacket:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, sp[1].o);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_y = temp1;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_radius = temp2;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_damage = temp3;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_air = temp4;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_ground = temp5;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp6 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_pierce = temp6;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp7 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK(sp[0].o))->F_effect = temp7;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LogicExplosionCallPacket_handleClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LogicExplosionCallPacket:handleClient", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_logic_LExecutor_logicExplosion_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean(ctx, sp[0].o, ((jfloat)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_radius), ((jfloat)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_damage), ((jint)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_air), ((jint)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_ground), ((jint)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_pierce), ((jint)((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[0].o)))->F_effect));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LogicExplosionCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LogicExplosionCallPacket:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(69);
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

void *vtable_mindustry_gen_LogicExplosionCallPacket[] {
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
	(void *) M_mindustry_gen_LogicExplosionCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_LogicExplosionCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_LogicExplosionCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_LogicExplosionCallPacket_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_gen_LogicExplosionCallPacket_handleClient,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_LogicExplosionCallPacket, F_DATA), "[B", 2 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_gen_LogicExplosionCallPacket, F_team), "Lmindustry/game/Team;", 1 },
	{ "x", &class_float, offsetof(mindustry_gen_LogicExplosionCallPacket, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_LogicExplosionCallPacket, F_y), "F", 1 },
	{ "radius", &class_float, offsetof(mindustry_gen_LogicExplosionCallPacket, F_radius), "F", 1 },
	{ "damage", &class_float, offsetof(mindustry_gen_LogicExplosionCallPacket, F_damage), "F", 1 },
	{ "air", &class_boolean, offsetof(mindustry_gen_LogicExplosionCallPacket, F_air), "Z", 1 },
	{ "ground", &class_boolean, offsetof(mindustry_gen_LogicExplosionCallPacket, F_ground), "Z", 1 },
	{ "pierce", &class_boolean, offsetof(mindustry_gen_LogicExplosionCallPacket, F_pierce), "Z", 1 },
	{ "effect", &class_boolean, offsetof(mindustry_gen_LogicExplosionCallPacket, F_effect), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_LogicExplosionCallPacket, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_LogicExplosionCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_LogicExplosionCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_LogicExplosionCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_LogicExplosionCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_LogicExplosionCallPacket_handled, VTABLE_mindustry_gen_LogicExplosionCallPacket_handled, "()V", 1 },
	{ "handleClient", (intptr_t) M_mindustry_gen_LogicExplosionCallPacket_handleClient, VTABLE_mindustry_gen_LogicExplosionCallPacket_handleClient, "()V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_LogicExplosionCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_LogicExplosionCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_LogicExplosionCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/LogicExplosionCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_LogicExplosionCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_LogicExplosionCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_LogicExplosionCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_LogicExplosionCallPacket,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_LogicExplosionCallPacket = registerClass(&class_mindustry_gen_LogicExplosionCallPacket);

}
