#include "mindustry/gen/PackTile.h"
#include "java/lang/Object.h"

extern "C" {

jlong SF_mindustry_gen_PackTile_bitMaskBlock;
jlong SF_mindustry_gen_PackTile_bitMaskFloor;
jlong SF_mindustry_gen_PackTile_bitMaskOverlay;

void mark_mindustry_gen_PackTile(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_PackTile *) object;
}

void clinit_mindustry_gen_PackTile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_PackTile_bitMaskBlock = jlong(65535ll);
	SF_mindustry_gen_PackTile_bitMaskFloor = jlong(4294901760ll);
	SF_mindustry_gen_PackTile_bitMaskOverlay = jlong(281470681743360ll);
}

void init_mindustry_gen_PackTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackTile:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackTile(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jshort SM_mindustry_gen_PackTile_block_long_R_short(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackTile:block", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackTile(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return (jshort((jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(0)))) & (jlong(65535ll)))))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_PackTile_block_long_short_R_long(jcontext ctx, jlong param0, jshort param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackTile:block", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackTile(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-65536ll))) | ((jlong((frame[2].i))) << (jint(0))));
	}

	popStackFrame(ctx);
}

jshort SM_mindustry_gen_PackTile_floor_long_R_short(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackTile:floor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackTile(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jshort((jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (16))) & (jlong(65535ll)))))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_PackTile_floor_long_short_R_long(jcontext ctx, jlong param0, jshort param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackTile:floor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackTile(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-4294901761ll))) | ((jlong((frame[2].i))) << (16)));
	}

	popStackFrame(ctx);
}

jshort SM_mindustry_gen_PackTile_overlay_long_R_short(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackTile:overlay", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackTile(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jshort((jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32))) & (jlong(65535ll)))))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_PackTile_overlay_long_short_R_long(jcontext ctx, jlong param0, jshort param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackTile:overlay", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackTile(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-281470681743361ll))) | ((jlong((frame[2].i))) << (32)));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_PackTile_get_short_short_short_R_long(jcontext ctx, jshort param0, jshort param1, jshort param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackTile:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (((((jlong((frame[0].i))) << (jint(0))) & (jlong(65535ll))) | (((jlong((frame[1].i))) << (16)) & (jlong(4294901760ll)))) | (((jlong((frame[2].i))) << (32)) & (jlong(281470681743360ll))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_PackTile[] {
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
	{ "bitMaskBlock", &class_long, (intptr_t) &SF_mindustry_gen_PackTile_bitMaskBlock, "J", 25 },
	{ "bitMaskFloor", &class_long, (intptr_t) &SF_mindustry_gen_PackTile_bitMaskFloor, "J", 25 },
	{ "bitMaskOverlay", &class_long, (intptr_t) &SF_mindustry_gen_PackTile_bitMaskOverlay, "J", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_PackTile, 0, "()V", 1 },
	{ "block", (intptr_t) SM_mindustry_gen_PackTile_block_long_R_short, 0, "(J)S", 9 },
	{ "block", (intptr_t) SM_mindustry_gen_PackTile_block_long_short_R_long, 0, "(JS)J", 9 },
	{ "floor", (intptr_t) SM_mindustry_gen_PackTile_floor_long_R_short, 0, "(J)S", 9 },
	{ "floor", (intptr_t) SM_mindustry_gen_PackTile_floor_long_short_R_long, 0, "(JS)J", 9 },
	{ "overlay", (intptr_t) SM_mindustry_gen_PackTile_overlay_long_R_short, 0, "(J)S", 9 },
	{ "overlay", (intptr_t) SM_mindustry_gen_PackTile_overlay_long_short_R_long, 0, "(JS)J", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_PackTile_get_short_short_short_R_long, 0, "(SSS)J", 9 },
};

Class class_mindustry_gen_PackTile{
		.nativeName = (intptr_t) "mindustry/gen/PackTile",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_PackTile),
		.classVtable = (intptr_t) vtable_mindustry_gen_PackTile,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_PackTile,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_PackTile,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_PackTile = registerClass(&class_mindustry_gen_PackTile);

}
