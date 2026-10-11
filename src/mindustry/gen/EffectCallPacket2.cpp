#include "mindustry/gen/EffectCallPacket2.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/io/TypeIO.h"
#include "arc/graphics/Color.h"
#include "mindustry/net/Packet.h"
#include "mindustry/gen/EffectCallPacket2.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_EffectCallPacket2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_EffectCallPacket2 *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_mindustry_gen_EffectCallPacket2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_EffectCallPacket2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectCallPacket2:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_EffectCallPacket2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_EffectCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectCallPacket2_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectCallPacket2:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_effect;
	SM_mindustry_io_TypeIO_writeEffect_arc_util_io_Writes_mindustry_entities_Effect(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(29);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(30);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(31);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(32);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_color;
	SM_mindustry_io_TypeIO_writeColor_arc_util_io_Writes_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_data;
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectCallPacket2_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectCallPacket2:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectCallPacket2_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectCallPacket2:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	clinit_mindustry_gen_EffectCallPacket2(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_EffectCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readEffect_arc_util_io_Reads_R_mindustry_entities_Effect(ctx, sp[1].o);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_EffectCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_EffectCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK(sp[0].o))->F_y = temp1;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_EffectCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, sp[1].o);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_EffectCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readColor_arc_util_io_Reads_R_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_EffectCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readObjectSafe_arc_util_io_Reads_R_java_lang_Object(ctx, sp[1].o);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectCallPacket2_handleClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectCallPacket2:handleClient", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_effect;
	jfloat temp0 = (jfloat)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[1].o = (jobject)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_color;
	sp[2].o = (jobject)((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[0].o)))->F_data;
	SM_mindustry_core_NetClient_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color_java_lang_Object(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_EffectCallPacket2_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectCallPacket2:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(59);
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

void *vtable_mindustry_gen_EffectCallPacket2[] {
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
	(void *) M_mindustry_gen_EffectCallPacket2_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_EffectCallPacket2_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_EffectCallPacket2_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_EffectCallPacket2_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_gen_EffectCallPacket2_handleClient,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_EffectCallPacket2, F_DATA), "[B", 2 },
	{ "effect", &class_mindustry_entities_Effect, offsetof(mindustry_gen_EffectCallPacket2, F_effect), "Lmindustry/entities/Effect;", 1 },
	{ "x", &class_float, offsetof(mindustry_gen_EffectCallPacket2, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_EffectCallPacket2, F_y), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_gen_EffectCallPacket2, F_rotation), "F", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_gen_EffectCallPacket2, F_color), "Larc/graphics/Color;", 1 },
	{ "data", &class_java_lang_Object, offsetof(mindustry_gen_EffectCallPacket2, F_data), "Ljava/lang/Object;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_EffectCallPacket2, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_EffectCallPacket2_write_arc_util_io_Writes, VTABLE_mindustry_gen_EffectCallPacket2_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_EffectCallPacket2_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_EffectCallPacket2_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_EffectCallPacket2_handled, VTABLE_mindustry_gen_EffectCallPacket2_handled, "()V", 1 },
	{ "handleClient", (intptr_t) M_mindustry_gen_EffectCallPacket2_handleClient, VTABLE_mindustry_gen_EffectCallPacket2_handleClient, "()V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_EffectCallPacket2_allow_boolean_R_boolean, VTABLE_mindustry_gen_EffectCallPacket2_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_EffectCallPacket2{
		.nativeName = (intptr_t) "mindustry/gen/EffectCallPacket2",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_EffectCallPacket2),
		.classVtable = (intptr_t) vtable_mindustry_gen_EffectCallPacket2,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_EffectCallPacket2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_EffectCallPacket2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_EffectCallPacket2 = registerClass(&class_mindustry_gen_EffectCallPacket2);

}
