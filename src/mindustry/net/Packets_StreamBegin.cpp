#include "mindustry/net/Packets_StreamBegin.h"
#include "arc/util/io/Reads.h"
#include "java/io/InputStream.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/net/Packets.h"
#include "mindustry/net/Packets_StreamBegin.h"
#include "arc/util/Nullable.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {

jint SF_mindustry_net_Packets$StreamBegin_lastid;

void mark_mindustry_net_Packets$StreamBegin(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Packets$StreamBegin *) object;
	if (self->F_incrementalStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_incrementalStream)->clazz)->markFunction)((jobject) self->F_incrementalStream, mark, depth + 1);
}

void clinit_mindustry_net_Packets$StreamBegin(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_net_Packets$StreamBegin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$StreamBegin:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$StreamBegin(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(91);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Packets$StreamBegin(ctx);
	jint temp0 = (jint)SF_mindustry_net_Packets$StreamBegin_lastid;
	clinit_mindustry_net_Packets$StreamBegin(ctx);
	SF_mindustry_net_Packets$StreamBegin_lastid = (temp0 + (jint(1)));
	((mindustry_net_Packets$StreamBegin *) NULL_CHECK(sp[0].o))->F_id = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Packets$StreamBegin_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$StreamBegin:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
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

void M_mindustry_net_Packets$StreamBegin_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$StreamBegin:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(109);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[0].o)))->F_total));
	LINE_NUMBER(110);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), ((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[0].o)))->F_type));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Packets$StreamBegin_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$StreamBegin:read", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_net_Packets$StreamBegin *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_net_Packets$StreamBegin *) NULL_CHECK(sp[0].o))->F_total = temp1;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	((mindustry_net_Packets$StreamBegin *) NULL_CHECK(sp[0].o))->F_type = temp2;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_net_Packets$StreamBegin;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field incrementalStream
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_net_Packets$StreamBegin[] {
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
	(void *) M_mindustry_net_Packets$StreamBegin_read_arc_util_io_Reads,
	(void *) M_mindustry_net_Packets$StreamBegin_write_arc_util_io_Writes,
	(void *) M_mindustry_net_Packets$StreamBegin_allow_boolean_R_boolean,
	(void *) M_mindustry_net_Packet_read_arc_util_io_Reads_int,
	(void *) M_mindustry_net_Packet_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
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
	{ "lastid", &class_int, (intptr_t) &SF_mindustry_net_Packets$StreamBegin_lastid, "I", 10 },
	{ "id", &class_int, offsetof(mindustry_net_Packets$StreamBegin, F_id), "I", 1 },
	{ "total", &class_int, offsetof(mindustry_net_Packets$StreamBegin, F_total), "I", 1 },
	{ "type", &class_byte, offsetof(mindustry_net_Packets$StreamBegin, F_type), "B", 1 },
	{ "incrementalStream", &class_java_io_InputStream, offsetof(mindustry_net_Packets$StreamBegin, F_incrementalStream), "Ljava/io/InputStream;", 129 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Packets$StreamBegin, 0, "()V", 1 },
	{ "allow", (intptr_t) M_mindustry_net_Packets$StreamBegin_allow_boolean_R_boolean, VTABLE_mindustry_net_Packets$StreamBegin_allow_boolean_R_boolean, "(Z)Z", 1 },
	{ "write", (intptr_t) M_mindustry_net_Packets$StreamBegin_write_arc_util_io_Writes, VTABLE_mindustry_net_Packets$StreamBegin_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_net_Packets$StreamBegin_read_arc_util_io_Reads, VTABLE_mindustry_net_Packets$StreamBegin_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
};

Class class_mindustry_net_Packets$StreamBegin{
		.nativeName = (intptr_t) "mindustry/net/Packets$StreamBegin",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_net_Packets$StreamBegin),
		.classVtable = (intptr_t) vtable_mindustry_net_Packets$StreamBegin,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Packets$StreamBegin,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_net_Packets$StreamBegin,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Packets,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Packets$StreamBegin = registerClass(&class_mindustry_net_Packets$StreamBegin);

}

