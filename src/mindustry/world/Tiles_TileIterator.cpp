#include "mindustry/world/Tiles_TileIterator.h"
#include "mindustry/world/Tiles_TileIterator.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/Tiles.h"

extern "C" {


void mark_mindustry_world_Tiles$TileIterator(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_Tiles$TileIterator *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_Tiles$TileIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_Tiles$TileIterator_mindustry_world_Tiles(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles$TileIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tiles$TileIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	((mindustry_world_Tiles$TileIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(135);
	((mindustry_world_Tiles$TileIterator *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tiles$TileIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles$TileIterator:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((mindustry_world_Tiles$TileIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((mindustry_world_Tiles$TileIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_array;
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

jobject M_mindustry_world_Tiles$TileIterator_next_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles$TileIterator:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_world_Tiles$TileIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_array;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tiles$TileIterator *) NULL_CHECK(sp[1].o))->F_index;
	((mindustry_world_Tiles$TileIterator *) NULL_CHECK(sp[1].o))->F_index = (temp0 + (jint(1)));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tiles$TileIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles$TileIterator:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_mindustry_world_Tiles$TileIterator_next_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tiles$TileIterator_next_R_mindustry_world_Tile])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_Tiles$TileIterator[] {
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
	(void *) M_mindustry_world_Tiles$TileIterator_hasNext_R_boolean,
	(void *) M_mindustry_world_Tiles$TileIterator_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_mindustry_world_Tiles$TileIterator_next_R_mindustry_world_Tile,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "next", "()Lmindustry/world/Tile;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(mindustry_world_Tiles$TileIterator, F_index), "I", 0 },
	{ "this$0", &class_mindustry_world_Tiles, offsetof(mindustry_world_Tiles$TileIterator, F_this$0), "Lmindustry/world/Tiles;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_Tiles$TileIterator_mindustry_world_Tiles, 0, "(Lmindustry/world/Tiles;)V", 0 },
	{ "hasNext", (intptr_t) M_mindustry_world_Tiles$TileIterator_hasNext_R_boolean, VTABLE_mindustry_world_Tiles$TileIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_mindustry_world_Tiles$TileIterator_next_R_mindustry_world_Tile, VTABLE_mindustry_world_Tiles$TileIterator_next_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "next", (intptr_t) M_mindustry_world_Tiles$TileIterator_next_R_java_lang_Object, VTABLE_mindustry_world_Tiles$TileIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_mindustry_world_Tiles$TileIterator{
		.nativeName = (intptr_t) "mindustry/world/Tiles$TileIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_Tiles$TileIterator),
		.classVtable = (intptr_t) vtable_mindustry_world_Tiles$TileIterator,
		.staticInitializer = (intptr_t) clinit_mindustry_world_Tiles$TileIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_Tiles$TileIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_Tiles,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_Tiles$TileIterator = registerClass(&class_mindustry_world_Tiles$TileIterator);

}

