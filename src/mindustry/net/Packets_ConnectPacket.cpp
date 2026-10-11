#include "mindustry/net/Packets_ConnectPacket.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/net/Packets_ConnectPacket.h"
#include "arc/struct/Seq.h"
#include "arc/util/serialization/Base64Coder.h"
#include "mindustry/core/Version.h"
#include "mindustry/net/Packets.h"
#include "mindustry/io/TypeIO.h"
#include "java/util/zip/CRC32.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_net_Packets$ConnectPacket(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Packets$ConnectPacket *) object;
	if (self->F_versionType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_versionType)->clazz)->markFunction)((jobject) self->F_versionType, mark, depth + 1);
	if (self->F_mods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mods)->clazz)->markFunction)((jobject) self->F_mods, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_locale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locale)->clazz)->markFunction)((jobject) self->F_locale, mark, depth + 1);
	if (self->F_uuid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uuid)->clazz)->markFunction)((jobject) self->F_uuid, mark, depth + 1);
	if (self->F_usid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_usid)->clazz)->markFunction)((jobject) self->F_usid, mark, depth + 1);
}

void clinit_mindustry_net_Packets$ConnectPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_net_Packets$ConnectPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$ConnectPacket:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$ConnectPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(144);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Packets$ConnectPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$ConnectPacket:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(154);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build));
	LINE_NUMBER(155);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_versionType;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(156);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_name;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_locale;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(158);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_usid;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_uuid;
	sp[0].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(161);
	((func_arc_util_io_Writes_b_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_Array1_byte])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(162);
	clinit_java_util_zip_CRC32(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_CRC32);
	init_java_util_zip_CRC32(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(163);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_uuid;
	sp[1].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_java_lang_String_R_Array1_byte(ctx, sp[1].o);
	((func_java_util_zip_CRC32_update_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_update_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(164);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, (frame[3].o));
	((func_arc_util_io_Writes_l_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_l_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(166);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_mobile) == 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(167);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_color));
	LINE_NUMBER(168);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_mods;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size))));
	LINE_NUMBER(169);
	frame[4].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_mods;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_17;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_mods;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[4].i));
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(169);
	INST_IINC(4, 1);
	goto label_16;
	}
label_17:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Packets$ConnectPacket_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$ConnectPacket:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_version = temp0;
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_versionType = (jref) sp[1].o;
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_locale = (jref) sp[1].o;
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_usid = (jref) sp[1].o;
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (16));
	frame[2].o = sp[0].o;
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_R_Array1_char(ctx, (frame[2].o));
	init_java_lang_String_Array1_char(ctx, sp[1].o, sp[2].o);
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_uuid = (jref) sp[1].o;
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	sp += 1;
	if (temp1 != (jint(1))) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_mobile = sp[1].i;
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_color = temp0;
	LINE_NUMBER(185);
	jint temp1 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (frame[3].i));
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_mods = (jref) sp[1].o;
	LINE_NUMBER(187);
	frame[4].i = (jint(0));
	}
label_14:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_15;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_mods;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(187);
	INST_IINC(4, 1);
	goto label_14;
	}
label_15:;
	LINE_NUMBER(190);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_net_Packets$ConnectPacket_getPriority_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$ConnectPacket:getPriority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (jint(2));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Packets$ConnectPacket[] {
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
	(void *) M_mindustry_net_Packets$ConnectPacket_read_arc_util_io_Reads,
	(void *) M_mindustry_net_Packets$ConnectPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_net_Packet_allow_boolean_R_boolean,
	(void *) M_mindustry_net_Packet_read_arc_util_io_Reads_int,
	(void *) M_mindustry_net_Packet_handled,
	(void *) M_mindustry_net_Packets$ConnectPacket_getPriority_R_int,
	(void *) M_mindustry_net_Packet_handleClient,
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
	{ "version", &class_int, offsetof(mindustry_net_Packets$ConnectPacket, F_version), "I", 1 },
	{ "versionType", &class_java_lang_String, offsetof(mindustry_net_Packets$ConnectPacket, F_versionType), "Ljava/lang/String;", 1 },
	{ "mods", &class_arc_struct_Seq, offsetof(mindustry_net_Packets$ConnectPacket, F_mods), "Larc/struct/Seq;", 1 },
	{ "name", &class_java_lang_String, offsetof(mindustry_net_Packets$ConnectPacket, F_name), "Ljava/lang/String;", 1 },
	{ "locale", &class_java_lang_String, offsetof(mindustry_net_Packets$ConnectPacket, F_locale), "Ljava/lang/String;", 1 },
	{ "uuid", &class_java_lang_String, offsetof(mindustry_net_Packets$ConnectPacket, F_uuid), "Ljava/lang/String;", 1 },
	{ "usid", &class_java_lang_String, offsetof(mindustry_net_Packets$ConnectPacket, F_usid), "Ljava/lang/String;", 1 },
	{ "mobile", &class_boolean, offsetof(mindustry_net_Packets$ConnectPacket, F_mobile), "Z", 1 },
	{ "color", &class_int, offsetof(mindustry_net_Packets$ConnectPacket, F_color), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Packets$ConnectPacket, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_net_Packets$ConnectPacket_write_arc_util_io_Writes, VTABLE_mindustry_net_Packets$ConnectPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_net_Packets$ConnectPacket_read_arc_util_io_Reads, VTABLE_mindustry_net_Packets$ConnectPacket_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "getPriority", (intptr_t) M_mindustry_net_Packets$ConnectPacket_getPriority_R_int, VTABLE_mindustry_net_Packets$ConnectPacket_getPriority_R_int, "()I", 1 },
};

Class class_mindustry_net_Packets$ConnectPacket{
		.nativeName = (intptr_t) "mindustry/net/Packets$ConnectPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_net_Packets$ConnectPacket),
		.classVtable = (intptr_t) vtable_mindustry_net_Packets$ConnectPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Packets$ConnectPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Packets$ConnectPacket,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Packets,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Packets$ConnectPacket = registerClass(&class_mindustry_net_Packets$ConnectPacket);

}

