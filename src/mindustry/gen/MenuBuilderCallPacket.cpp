#include "mindustry/gen/MenuBuilderCallPacket.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/gen/MenuBuilderCallPacket.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/ui/Menus.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_MenuBuilderCallPacket(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_MenuBuilderCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_title)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_title)->clazz)->markFunction)((jobject) self->F_title, mark, depth + 1);
	if (self->F_builder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_builder)->clazz)->markFunction)((jobject) self->F_builder, mark, depth + 1);
}

void clinit_mindustry_gen_MenuBuilderCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_MenuBuilderCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/MenuBuilderCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_MenuBuilderCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/MenuBuilderCallPacket:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(30);
	((func_arc_util_io_Writes_l_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_l_long])(ctx, (frame[1].o), ((jlong)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_token));
	LINE_NUMBER(31);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_title;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(32);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_hideOnClick));
	LINE_NUMBER(33);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_hidePrevious));
	LINE_NUMBER(34);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_fillScreen));
	LINE_NUMBER(35);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_builder;
	SM_mindustry_io_TypeIO_writeUiBuilder_arc_util_io_Writes_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_MenuBuilderCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/MenuBuilderCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_MenuBuilderCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/MenuBuilderCallPacket:handled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jlong temp1 = (jlong)((func_arc_util_io_Reads_l_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_l_R_long])(ctx, sp[1].o);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK(sp[0].o))->F_token = temp1;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, sp[1].o);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK(sp[0].o))->F_title = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK(sp[0].o))->F_hideOnClick = temp2;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp3 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK(sp[0].o))->F_hidePrevious = temp3;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK(sp[0].o))->F_fillScreen = temp4;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readUiBuilder_arc_util_io_Reads_R_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, sp[1].o);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK(sp[0].o))->F_builder = (jref) sp[1].o;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_MenuBuilderCallPacket_handleClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/MenuBuilderCallPacket:handleClient", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	jint temp0 = (jint)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_id;
	jlong temp1 = (jlong)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_token;
	sp[0].o = (jobject)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_title;
	jint temp2 = (jint)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_hideOnClick;
	jint temp3 = (jint)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_hidePrevious;
	jint temp4 = (jint)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_fillScreen;
	sp[1].o = (jobject)((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[0].o)))->F_builder;
	SM_mindustry_ui_Menus_menuBuilder_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, temp0, temp1, sp[0].o, temp2, temp3, temp4, sp[1].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_MenuBuilderCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/MenuBuilderCallPacket:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(62);
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

void *vtable_mindustry_gen_MenuBuilderCallPacket[] {
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
	(void *) M_mindustry_gen_MenuBuilderCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_MenuBuilderCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_MenuBuilderCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_MenuBuilderCallPacket_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_gen_MenuBuilderCallPacket_handleClient,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_MenuBuilderCallPacket, F_DATA), "[B", 2 },
	{ "id", &class_int, offsetof(mindustry_gen_MenuBuilderCallPacket, F_id), "I", 1 },
	{ "token", &class_long, offsetof(mindustry_gen_MenuBuilderCallPacket, F_token), "J", 1 },
	{ "title", &class_java_lang_String, offsetof(mindustry_gen_MenuBuilderCallPacket, F_title), "Ljava/lang/String;", 1 },
	{ "hideOnClick", &class_boolean, offsetof(mindustry_gen_MenuBuilderCallPacket, F_hideOnClick), "Z", 1 },
	{ "hidePrevious", &class_boolean, offsetof(mindustry_gen_MenuBuilderCallPacket, F_hidePrevious), "Z", 1 },
	{ "fillScreen", &class_boolean, offsetof(mindustry_gen_MenuBuilderCallPacket, F_fillScreen), "Z", 1 },
	{ "builder", &class_mindustry_ui_builder_UiBuilder$NodeBuilder, offsetof(mindustry_gen_MenuBuilderCallPacket, F_builder), "Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_MenuBuilderCallPacket, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_MenuBuilderCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_MenuBuilderCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_MenuBuilderCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_MenuBuilderCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_MenuBuilderCallPacket_handled, VTABLE_mindustry_gen_MenuBuilderCallPacket_handled, "()V", 1 },
	{ "handleClient", (intptr_t) M_mindustry_gen_MenuBuilderCallPacket_handleClient, VTABLE_mindustry_gen_MenuBuilderCallPacket_handleClient, "()V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_MenuBuilderCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_MenuBuilderCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_MenuBuilderCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/MenuBuilderCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_MenuBuilderCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_MenuBuilderCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_MenuBuilderCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_MenuBuilderCallPacket,
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
static bool registered_mindustry_gen_MenuBuilderCallPacket = registerClass(&class_mindustry_gen_MenuBuilderCallPacket);

}
