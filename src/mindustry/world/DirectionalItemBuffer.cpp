#include "mindustry/world/DirectionalItemBuffer.h"
#include "mindustry/world/DirectionalItemBuffer_BufferItemStruct.h"
#include "mindustry/gen/BufferItemLegacy.h"
#include "mindustry/gen/BufferItem.h"
#include "mindustry/world/DirectionalItemBuffer_BufferItemLegacyStruct.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/Vars.h"
#include "java/lang/System.h"
#include "arc/util/io/Writes.h"
#include "mindustry/world/DirectionalItemBuffer.h"

extern "C" {


void mark_mindustry_world_DirectionalItemBuffer(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_DirectionalItemBuffer *) object;
	if (self->F_buffers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffers)->clazz)->markFunction)((jobject) self->F_buffers, mark, depth + 1);
	if (self->F_indexes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indexes)->clazz)->markFunction)((jobject) self->F_indexes, mark, depth + 1);
}

void clinit_mindustry_world_DirectionalItemBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_DirectionalItemBuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/DirectionalItemBuffer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_DirectionalItemBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createMultiArray(ctx, &class_long, {(jint(4)), (frame[1].i)});
	((mindustry_world_DirectionalItemBuffer *) NULL_CHECK(sp[0].o))->F_buffers = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	((mindustry_world_DirectionalItemBuffer *) NULL_CHECK(sp[0].o))->F_indexes = (jref) sp[1].o;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_DirectionalItemBuffer_accepts_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/DirectionalItemBuffer:accepts", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_indexes;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffers;
	if (temp0 >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->length)) goto label_1;
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

void M_mindustry_world_DirectionalItemBuffer_accept_int_mindustry_type_Item(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/DirectionalItemBuffer:accept", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(25);
	jint temp0 = (jint)((func_mindustry_world_DirectionalItemBuffer_accepts_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_DirectionalItemBuffer_accepts_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffers;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp[1].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_indexes;
	jint temp0 = frame[1].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp0);
	ARRAY_ACCESS(jint, sp[1].o, temp0) = (temp3 + (jint(1)));
	jlong temp7 = (jlong)SM_mindustry_gen_BufferItem_get_short_float_R_long(ctx, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id), (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time));
	ARRAY_ACCESS(jlong, sp[0].o, temp3) = temp7;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_DirectionalItemBuffer_poll_int_float_R_mindustry_type_Item(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/DirectionalItemBuffer:poll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_indexes;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffers;
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(0))));
	LINE_NUMBER(32);
	jfloat temp0 = (jfloat)SM_mindustry_gen_BufferItem_time_long_R_float(ctx, (frame[3].l));
	frame[5].f = temp0;
	LINE_NUMBER(34);
	if ((floatCompare((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((frame[5].f) + (frame[2].f)), -1)) >= 0) goto label_5;
	}
	{
	if ((floatCompare((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (frame[5].f), 1)) >= 0) goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(35);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)SM_mindustry_gen_BufferItem_item_long_R_short(ctx, (frame[3].l));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_DirectionalItemBuffer_remove_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/DirectionalItemBuffer:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffers;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffers;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i));
	jint temp1 = jint(0);
	sp[2].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_indexes;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[1].i))) - (jint(1))));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_indexes;
	jint temp2 = frame[1].i;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp2)) - (jint(1)));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_DirectionalItemBuffer_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/DirectionalItemBuffer:write", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_indexes;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	LINE_NUMBER(49);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffers;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->length));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffers;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_7;
	}
	{
	frame[6].l = ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(51);
	((func_arc_util_io_Writes_l_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_l_long])(ctx, (frame[1].o), (frame[6].l));
	LINE_NUMBER(50);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(47);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/DirectionalItemBuffer:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	((func_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/DirectionalItemBuffer:read", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(61);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_indexes;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(63);
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[4].i = temp2;
	LINE_NUMBER(64);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(65);
	jlong temp0 = (jlong)((func_arc_util_io_Reads_l_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_l_R_long])(ctx, (frame[1].o));
	frame[6].l = temp0;
	LINE_NUMBER(67);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(69);
	jint temp0 = (jint)SM_mindustry_gen_BufferItemLegacy_item_long_R_byte(ctx, (frame[6].l));
	jint temp1 = jshort(temp0);
	jfloat temp2 = (jfloat)SM_mindustry_gen_BufferItemLegacy_time_long_R_float(ctx, (frame[6].l));
	jlong temp3 = (jlong)SM_mindustry_gen_BufferItem_get_short_float_R_long(ctx, temp1, temp2);
	frame[6].l = temp3;
	}
label_10:;
	{
	LINE_NUMBER(72);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffers;
	if (temp0 >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->length)) goto label_12;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_world_DirectionalItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffers;
	ARRAY_ACCESS(jlong, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (frame[5].i)) = (frame[6].l);
	}
label_12:;
	{
	LINE_NUMBER(64);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(61);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_DirectionalItemBuffer[] {
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
	(void *) M_mindustry_world_DirectionalItemBuffer_accepts_int_R_boolean,
	(void *) M_mindustry_world_DirectionalItemBuffer_accept_int_mindustry_type_Item,
	(void *) M_mindustry_world_DirectionalItemBuffer_poll_int_float_R_mindustry_type_Item,
	(void *) M_mindustry_world_DirectionalItemBuffer_remove_int,
	(void *) M_mindustry_world_DirectionalItemBuffer_write_arc_util_io_Writes,
	(void *) M_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads,
	(void *) M_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads_boolean,
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
	{ "accepts", "(I)Z" },
	{ "accept", "(ILmindustry/type/Item;)V" },
	{ "poll", "(IF)Lmindustry/type/Item;" },
	{ "remove", "(I)V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "read", "(Larc/util/io/Reads;Z)V" },
};

static jclass innerClasses[] {
	&class_mindustry_world_DirectionalItemBuffer$BufferItemLegacyStruct,
	&class_mindustry_world_DirectionalItemBuffer$BufferItemStruct,
};

static FieldMetadata fields[] {
	{ "buffers", getArrayClass(&class_long, 2), offsetof(mindustry_world_DirectionalItemBuffer, F_buffers), "[[J", 17 },
	{ "indexes", getArrayClass(&class_int, 1), offsetof(mindustry_world_DirectionalItemBuffer, F_indexes), "[I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_DirectionalItemBuffer_int, 0, "(I)V", 1 },
	{ "accepts", (intptr_t) M_mindustry_world_DirectionalItemBuffer_accepts_int_R_boolean, VTABLE_mindustry_world_DirectionalItemBuffer_accepts_int_R_boolean, "(I)Z", 1 },
	{ "accept", (intptr_t) M_mindustry_world_DirectionalItemBuffer_accept_int_mindustry_type_Item, VTABLE_mindustry_world_DirectionalItemBuffer_accept_int_mindustry_type_Item, "(ILmindustry/type/Item;)V", 1 },
	{ "poll", (intptr_t) M_mindustry_world_DirectionalItemBuffer_poll_int_float_R_mindustry_type_Item, VTABLE_mindustry_world_DirectionalItemBuffer_poll_int_float_R_mindustry_type_Item, "(IF)Lmindustry/type/Item;", 1 },
	{ "remove", (intptr_t) M_mindustry_world_DirectionalItemBuffer_remove_int, VTABLE_mindustry_world_DirectionalItemBuffer_remove_int, "(I)V", 1 },
	{ "write", (intptr_t) M_mindustry_world_DirectionalItemBuffer_write_arc_util_io_Writes, VTABLE_mindustry_world_DirectionalItemBuffer_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads, VTABLE_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads_boolean, VTABLE_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads_boolean, "(Larc/util/io/Reads;Z)V", 1 },
};

Class class_mindustry_world_DirectionalItemBuffer{
		.nativeName = (intptr_t) "mindustry/world/DirectionalItemBuffer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_DirectionalItemBuffer),
		.classVtable = (intptr_t) vtable_mindustry_world_DirectionalItemBuffer,
		.staticInitializer = (intptr_t) clinit_mindustry_world_DirectionalItemBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_DirectionalItemBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_DirectionalItemBuffer = registerClass(&class_mindustry_world_DirectionalItemBuffer);

}
