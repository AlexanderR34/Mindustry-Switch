#include "mindustry/gen/TextInputCallPacket2.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/ui/Menus.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/gen/TextInputCallPacket2.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_TextInputCallPacket2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_TextInputCallPacket2 *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_title)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_title)->clazz)->markFunction)((jobject) self->F_title, mark, depth + 1);
	if (self->F_message)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_message)->clazz)->markFunction)((jobject) self->F_message, mark, depth + 1);
	if (self->F_def)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_def)->clazz)->markFunction)((jobject) self->F_def, mark, depth + 1);
}

void clinit_mindustry_gen_TextInputCallPacket2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_TextInputCallPacket2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TextInputCallPacket2:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_TextInputCallPacket2_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TextInputCallPacket2:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_textInputId));
	LINE_NUMBER(29);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_title;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(30);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_message;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(31);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_textLength));
	LINE_NUMBER(32);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_def;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_numeric));
	LINE_NUMBER(34);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_allowEmpty));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_TextInputCallPacket2_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TextInputCallPacket2:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_TextInputCallPacket2_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TextInputCallPacket2:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK(sp[0].o))->F_textInputId = temp0;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, sp[1].o);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK(sp[0].o))->F_title = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, sp[1].o);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK(sp[0].o))->F_message = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, sp[1].o);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK(sp[0].o))->F_textLength = temp1;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, sp[1].o);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK(sp[0].o))->F_def = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK(sp[0].o))->F_numeric = temp2;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	jint temp3 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK(sp[0].o))->F_allowEmpty = temp3;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_TextInputCallPacket2_handleClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TextInputCallPacket2:handleClient", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_textInputId;
	sp[0].o = (jobject)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_title;
	sp[1].o = (jobject)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_message;
	jint temp1 = (jint)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_textLength;
	sp[2].o = (jobject)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_def;
	SM_mindustry_ui_Menus_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean(ctx, temp0, sp[0].o, sp[1].o, temp1, sp[2].o, ((jint)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_numeric), ((jint)((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[0].o)))->F_allowEmpty));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_TextInputCallPacket2_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TextInputCallPacket2:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(61);
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

void *vtable_mindustry_gen_TextInputCallPacket2[] {
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
	(void *) M_mindustry_gen_TextInputCallPacket2_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_TextInputCallPacket2_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_TextInputCallPacket2_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_TextInputCallPacket2_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_gen_TextInputCallPacket2_handleClient,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_TextInputCallPacket2, F_DATA), "[B", 2 },
	{ "textInputId", &class_int, offsetof(mindustry_gen_TextInputCallPacket2, F_textInputId), "I", 1 },
	{ "title", &class_java_lang_String, offsetof(mindustry_gen_TextInputCallPacket2, F_title), "Ljava/lang/String;", 1 },
	{ "message", &class_java_lang_String, offsetof(mindustry_gen_TextInputCallPacket2, F_message), "Ljava/lang/String;", 1 },
	{ "textLength", &class_int, offsetof(mindustry_gen_TextInputCallPacket2, F_textLength), "I", 1 },
	{ "def", &class_java_lang_String, offsetof(mindustry_gen_TextInputCallPacket2, F_def), "Ljava/lang/String;", 1 },
	{ "numeric", &class_boolean, offsetof(mindustry_gen_TextInputCallPacket2, F_numeric), "Z", 1 },
	{ "allowEmpty", &class_boolean, offsetof(mindustry_gen_TextInputCallPacket2, F_allowEmpty), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_TextInputCallPacket2, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_TextInputCallPacket2_write_arc_util_io_Writes, VTABLE_mindustry_gen_TextInputCallPacket2_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_TextInputCallPacket2_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_TextInputCallPacket2_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_TextInputCallPacket2_handled, VTABLE_mindustry_gen_TextInputCallPacket2_handled, "()V", 1 },
	{ "handleClient", (intptr_t) M_mindustry_gen_TextInputCallPacket2_handleClient, VTABLE_mindustry_gen_TextInputCallPacket2_handleClient, "()V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_TextInputCallPacket2_allow_boolean_R_boolean, VTABLE_mindustry_gen_TextInputCallPacket2_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_TextInputCallPacket2{
		.nativeName = (intptr_t) "mindustry/gen/TextInputCallPacket2",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_TextInputCallPacket2),
		.classVtable = (intptr_t) vtable_mindustry_gen_TextInputCallPacket2,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_TextInputCallPacket2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_TextInputCallPacket2,
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
static bool registered_mindustry_gen_TextInputCallPacket2 = registerClass(&class_mindustry_gen_TextInputCallPacket2);

}
