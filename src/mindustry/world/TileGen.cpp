#include "mindustry/world/TileGen.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/TileGen.h"

extern "C" {


void mark_mindustry_world_TileGen(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_TileGen *) object;
	if (self->F_floor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor)->clazz)->markFunction)((jobject) self->F_floor, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_overlay)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overlay)->clazz)->markFunction)((jobject) self->F_overlay, mark, depth + 1);
}

void clinit_mindustry_world_TileGen(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_TileGen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/TileGen:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_TileGen(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((func_mindustry_world_TileGen_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_TileGen_reset])(ctx, (frame[0].o));
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_TileGen_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/TileGen:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_stone;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_overlay = (jref) sp[1].o;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_TileGen[] {
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
	(void *) M_mindustry_world_TileGen_reset,
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
	{ "reset", "()V" },
};

static FieldMetadata fields[] {
	{ "floor", &class_mindustry_world_Block, offsetof(mindustry_world_TileGen, F_floor), "Lmindustry/world/Block;", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_world_TileGen, F_block), "Lmindustry/world/Block;", 1 },
	{ "overlay", &class_mindustry_world_Block, offsetof(mindustry_world_TileGen, F_overlay), "Lmindustry/world/Block;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_TileGen, 0, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_world_TileGen_reset, VTABLE_mindustry_world_TileGen_reset, "()V", 1 },
};

Class class_mindustry_world_TileGen{
		.nativeName = (intptr_t) "mindustry/world/TileGen",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_TileGen),
		.classVtable = (intptr_t) vtable_mindustry_world_TileGen,
		.staticInitializer = (intptr_t) clinit_mindustry_world_TileGen,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_TileGen,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_TileGen = registerClass(&class_mindustry_world_TileGen);

}
