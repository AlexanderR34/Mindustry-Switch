#include "mindustry/world/ItemBuffer.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "mindustry/gen/TimeItem.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/world/ItemBuffer_TimeItemStruct.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/ItemBuffer.h"
#include "mindustry/Vars.h"
#include "java/lang/System.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_ItemBuffer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_ItemBuffer *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_mindustry_world_ItemBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_ItemBuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ItemBuffer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_ItemBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (frame[1].i));
	((mindustry_world_ItemBuffer *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_ItemBuffer_accepts_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ItemBuffer:accepts", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	jint temp0 = (jint)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
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

void M_mindustry_world_ItemBuffer_accept_mindustry_type_Item_short(jcontext ctx, jobject self, jobject param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ItemBuffer:accept", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_ItemBuffer *) NULL_CHECK(sp[1].o))->F_index;
	((mindustry_world_ItemBuffer *) NULL_CHECK(sp[1].o))->F_index = (temp0 + (jint(1)));
	jlong temp3 = (jlong)SM_mindustry_gen_TimeItem_get_short_short_float_R_long(ctx, (frame[2].i), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id), (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time));
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp3;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_ItemBuffer_accept_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ItemBuffer:accept", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	((func_mindustry_world_ItemBuffer_accept_mindustry_type_Item_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_ItemBuffer_accept_mindustry_type_Item_short])(ctx, (frame[0].o), (frame[1].o), (jint(-1)));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_ItemBuffer_poll_float_R_mindustry_type_Item(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ItemBuffer:poll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(33);
	if (((jint)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_index) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	frame[2].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (jint(0))));
	LINE_NUMBER(35);
	jfloat temp0 = (jfloat)SM_mindustry_gen_TimeItem_time_long_R_float(ctx, (frame[2].l));
	frame[4].f = temp0;
	LINE_NUMBER(37);
	if ((floatCompare((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((frame[4].f) + (frame[1].f)), -1)) >= 0) goto label_5;
	}
	{
	if ((floatCompare((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (frame[4].f), 1)) >= 0) goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(38);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)SM_mindustry_gen_TimeItem_item_long_R_short(ctx, (frame[2].l));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_ItemBuffer_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ItemBuffer:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (((jint)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_index) - (jint(1))));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	((mindustry_world_ItemBuffer *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_world_ItemBuffer *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_ItemBuffer_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ItemBuffer:write", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), (jbyte(((jint)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_index))));
	LINE_NUMBER(51);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte((((jarray) nullCheck(ctx, sp[1].o))->length))));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(53);
	((func_arc_util_io_Writes_l_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_l_long])(ctx, (frame[1].o), (frame[5].l));
	LINE_NUMBER(52);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_ItemBuffer_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ItemBuffer:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	((mindustry_world_ItemBuffer *) NULL_CHECK(sp[0].o))->F_index = temp0;
	LINE_NUMBER(59);
	jint temp1 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[2].i = temp1;
	LINE_NUMBER(60);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(61);
	jlong temp0 = (jlong)((func_arc_util_io_Reads_l_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_l_R_long])(ctx, (frame[1].o));
	frame[4].l = temp0;
	LINE_NUMBER(62);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (temp1 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[3].i)) = (frame[4].l);
	}
label_7:;
	{
	LINE_NUMBER(60);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((mindustry_world_ItemBuffer *) NULL_CHECK((frame[0].o)))->F_index), ((frame[2].i) - (jint(1))));
	((mindustry_world_ItemBuffer *) NULL_CHECK(sp[0].o))->F_index = temp0;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_ItemBuffer[] {
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
	(void *) M_mindustry_world_ItemBuffer_accepts_R_boolean,
	(void *) M_mindustry_world_ItemBuffer_accept_mindustry_type_Item_short,
	(void *) M_mindustry_world_ItemBuffer_accept_mindustry_type_Item,
	(void *) M_mindustry_world_ItemBuffer_poll_float_R_mindustry_type_Item,
	(void *) M_mindustry_world_ItemBuffer_remove,
	(void *) M_mindustry_world_ItemBuffer_write_arc_util_io_Writes,
	(void *) M_mindustry_world_ItemBuffer_read_arc_util_io_Reads,
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
	{ "accepts", "()Z" },
	{ "accept", "(Lmindustry/type/Item;S)V" },
	{ "accept", "(Lmindustry/type/Item;)V" },
	{ "poll", "(F)Lmindustry/type/Item;" },
	{ "remove", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_world_ItemBuffer$TimeItemStruct,
};

static FieldMetadata fields[] {
	{ "buffer", getArrayClass(&class_long, 1), offsetof(mindustry_world_ItemBuffer, F_buffer), "[J", 2 },
	{ "index", &class_int, offsetof(mindustry_world_ItemBuffer, F_index), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_ItemBuffer_int, 0, "(I)V", 1 },
	{ "accepts", (intptr_t) M_mindustry_world_ItemBuffer_accepts_R_boolean, VTABLE_mindustry_world_ItemBuffer_accepts_R_boolean, "()Z", 1 },
	{ "accept", (intptr_t) M_mindustry_world_ItemBuffer_accept_mindustry_type_Item_short, VTABLE_mindustry_world_ItemBuffer_accept_mindustry_type_Item_short, "(Lmindustry/type/Item;S)V", 1 },
	{ "accept", (intptr_t) M_mindustry_world_ItemBuffer_accept_mindustry_type_Item, VTABLE_mindustry_world_ItemBuffer_accept_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "poll", (intptr_t) M_mindustry_world_ItemBuffer_poll_float_R_mindustry_type_Item, VTABLE_mindustry_world_ItemBuffer_poll_float_R_mindustry_type_Item, "(F)Lmindustry/type/Item;", 1 },
	{ "remove", (intptr_t) M_mindustry_world_ItemBuffer_remove, VTABLE_mindustry_world_ItemBuffer_remove, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_world_ItemBuffer_write_arc_util_io_Writes, VTABLE_mindustry_world_ItemBuffer_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_ItemBuffer_read_arc_util_io_Reads, VTABLE_mindustry_world_ItemBuffer_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
};

Class class_mindustry_world_ItemBuffer{
		.nativeName = (intptr_t) "mindustry/world/ItemBuffer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_ItemBuffer),
		.classVtable = (intptr_t) vtable_mindustry_world_ItemBuffer,
		.staticInitializer = (intptr_t) clinit_mindustry_world_ItemBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_ItemBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
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
static bool registered_mindustry_world_ItemBuffer = registerClass(&class_mindustry_world_ItemBuffer);

}
