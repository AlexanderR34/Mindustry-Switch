#include "mindustry/gen/FollowUpMenuCallPacket.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/gen/FollowUpMenuCallPacket.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/ui/Menus.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_FollowUpMenuCallPacket(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_FollowUpMenuCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_title)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_title)->clazz)->markFunction)((jobject) self->F_title, mark, depth + 1);
	if (self->F_message)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_message)->clazz)->markFunction)((jobject) self->F_message, mark, depth + 1);
	if (self->F_options)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_options)->clazz)->markFunction)((jobject) self->F_options, mark, depth + 1);
}

void clinit_mindustry_gen_FollowUpMenuCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_FollowUpMenuCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FollowUpMenuCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_FollowUpMenuCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_FollowUpMenuCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_FollowUpMenuCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FollowUpMenuCallPacket:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[0].o)))->F_menuId));
	LINE_NUMBER(23);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[0].o)))->F_title;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(24);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[0].o)))->F_message;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(25);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[0].o)))->F_options;
	SM_mindustry_io_TypeIO_writeStringArray_arc_util_io_Writes_Array2_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_FollowUpMenuCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FollowUpMenuCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_FollowUpMenuCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FollowUpMenuCallPacket:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	clinit_mindustry_gen_FollowUpMenuCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_FollowUpMenuCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK(sp[0].o))->F_menuId = temp0;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_FollowUpMenuCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, sp[1].o);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK(sp[0].o))->F_title = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_FollowUpMenuCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, sp[1].o);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK(sp[0].o))->F_message = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_FollowUpMenuCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readStringArray_arc_util_io_Reads_R_Array2_java_lang_String(ctx, sp[1].o);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK(sp[0].o))->F_options = (jref) sp[1].o;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_FollowUpMenuCallPacket_handleClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FollowUpMenuCallPacket:handleClient", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	jint temp0 = (jint)((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[0].o)))->F_menuId;
	sp[0].o = (jobject)((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[0].o)))->F_title;
	sp[1].o = (jobject)((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[0].o)))->F_message;
	sp[2].o = (jobject)((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[0].o)))->F_options;
	SM_mindustry_ui_Menus_followUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String(ctx, temp0, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_FollowUpMenuCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FollowUpMenuCallPacket:allow", 3 };
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

void *vtable_mindustry_gen_FollowUpMenuCallPacket[] {
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
	(void *) M_mindustry_gen_FollowUpMenuCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_FollowUpMenuCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_FollowUpMenuCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_FollowUpMenuCallPacket_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_gen_FollowUpMenuCallPacket_handleClient,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_FollowUpMenuCallPacket, F_DATA), "[B", 2 },
	{ "menuId", &class_int, offsetof(mindustry_gen_FollowUpMenuCallPacket, F_menuId), "I", 1 },
	{ "title", &class_java_lang_String, offsetof(mindustry_gen_FollowUpMenuCallPacket, F_title), "Ljava/lang/String;", 1 },
	{ "message", &class_java_lang_String, offsetof(mindustry_gen_FollowUpMenuCallPacket, F_message), "Ljava/lang/String;", 1 },
	{ "options", getArrayClass(&class_java_lang_String, 2), offsetof(mindustry_gen_FollowUpMenuCallPacket, F_options), "[[Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_FollowUpMenuCallPacket, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_FollowUpMenuCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_FollowUpMenuCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_FollowUpMenuCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_FollowUpMenuCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_FollowUpMenuCallPacket_handled, VTABLE_mindustry_gen_FollowUpMenuCallPacket_handled, "()V", 1 },
	{ "handleClient", (intptr_t) M_mindustry_gen_FollowUpMenuCallPacket_handleClient, VTABLE_mindustry_gen_FollowUpMenuCallPacket_handleClient, "()V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_FollowUpMenuCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_FollowUpMenuCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_FollowUpMenuCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/FollowUpMenuCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_FollowUpMenuCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_FollowUpMenuCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_FollowUpMenuCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_FollowUpMenuCallPacket,
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
static bool registered_mindustry_gen_FollowUpMenuCallPacket = registerClass(&class_mindustry_gen_FollowUpMenuCallPacket);

}
