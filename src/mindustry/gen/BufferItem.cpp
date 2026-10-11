#include "mindustry/gen/BufferItem.h"
#include "java/lang/Object.h"
#include "java/lang/Float.h"

extern "C" {

jlong SF_mindustry_gen_BufferItem_bitMaskItem;
jlong SF_mindustry_gen_BufferItem_bitMaskTime;

void mark_mindustry_gen_BufferItem(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_BufferItem *) object;
}

void clinit_mindustry_gen_BufferItem(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_BufferItem_bitMaskItem = jlong(65535ll);
	SF_mindustry_gen_BufferItem_bitMaskTime = jlong(281474976645120ll);
}

void init_mindustry_gen_BufferItem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BufferItem:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_BufferItem(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jshort SM_mindustry_gen_BufferItem_item_long_R_short(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BufferItem:item", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_BufferItem(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return (jshort((jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(0)))) & (jlong(65535ll)))))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_BufferItem_item_long_short_R_long(jcontext ctx, jlong param0, jshort param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BufferItem:item", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_BufferItem(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-65536ll))) | ((jlong((frame[2].i))) << (jint(0))));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_gen_BufferItem_time_long_R_float(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BufferItem:time", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_BufferItem(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(22);
	jfloat temp0 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (16))) & (jlong(4294967295ll))))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_BufferItem_time_long_float_R_long(jcontext ctx, jlong param0, jfloat param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BufferItem:time", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_BufferItem(ctx);
	frame[0].l = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jlong temp0 = (frame[0].l) & (jlong(-281474976645121ll));
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[2].f));
	popStackFrame(ctx);
	return (temp0 | ((jlong(temp1)) << (16)));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_BufferItem_get_short_float_R_long(jcontext ctx, jshort param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/BufferItem:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_BufferItem(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(30);
	jlong temp0 = ((jlong((frame[0].i))) << (jint(0))) & (jlong(65535ll));
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[1].f));
	popStackFrame(ctx);
	return (temp0 | ((jlong(temp1)) << (16)));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_BufferItem[] {
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
};

static FieldMetadata fields[] {
	{ "bitMaskItem", &class_long, (intptr_t) &SF_mindustry_gen_BufferItem_bitMaskItem, "J", 25 },
	{ "bitMaskTime", &class_long, (intptr_t) &SF_mindustry_gen_BufferItem_bitMaskTime, "J", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_BufferItem, 0, "()V", 1 },
	{ "item", (intptr_t) SM_mindustry_gen_BufferItem_item_long_R_short, 0, "(J)S", 9 },
	{ "item", (intptr_t) SM_mindustry_gen_BufferItem_item_long_short_R_long, 0, "(JS)J", 9 },
	{ "time", (intptr_t) SM_mindustry_gen_BufferItem_time_long_R_float, 0, "(J)F", 9 },
	{ "time", (intptr_t) SM_mindustry_gen_BufferItem_time_long_float_R_long, 0, "(JF)J", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_BufferItem_get_short_float_R_long, 0, "(SF)J", 9 },
};

Class class_mindustry_gen_BufferItem{
		.nativeName = (intptr_t) "mindustry/gen/BufferItem",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_BufferItem),
		.classVtable = (intptr_t) vtable_mindustry_gen_BufferItem,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_BufferItem,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_BufferItem,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_BufferItem = registerClass(&class_mindustry_gen_BufferItem);

}
