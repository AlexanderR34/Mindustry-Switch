#include "mindustry/world/blocks/environment/Floor_UpdateRenderState.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/environment/Floor_UpdateRenderState.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"

extern "C" {


void mark_mindustry_world_blocks_environment_Floor$UpdateRenderState(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_environment_Floor$UpdateRenderState *) object;
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
	if (self->F_floor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor)->clazz)->markFunction)((jobject) self->F_floor, mark, depth + 1);
}

void clinit_mindustry_world_blocks_environment_Floor$UpdateRenderState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_environment_Floor$UpdateRenderState_mindustry_world_Tile_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor$UpdateRenderState:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_environment_Floor$UpdateRenderState(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(440);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(441);
	((mindustry_world_blocks_environment_Floor$UpdateRenderState *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (frame[1].o);
	LINE_NUMBER(442);
	((mindustry_world_blocks_environment_Floor$UpdateRenderState *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[2].o);
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_environment_Floor$UpdateRenderState[] {
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
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_world_blocks_environment_Floor$UpdateRenderState, F_tile), "Lmindustry/world/Tile;", 1 },
	{ "floor", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_world_blocks_environment_Floor$UpdateRenderState, F_floor), "Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "data", &class_float, offsetof(mindustry_world_blocks_environment_Floor$UpdateRenderState, F_data), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_environment_Floor$UpdateRenderState_mindustry_world_Tile_mindustry_world_blocks_environment_Floor, 0, "(Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;)V", 1 },
};

Class class_mindustry_world_blocks_environment_Floor$UpdateRenderState{
		.nativeName = (intptr_t) "mindustry/world/blocks/environment/Floor$UpdateRenderState",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_environment_Floor$UpdateRenderState),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_environment_Floor$UpdateRenderState,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_environment_Floor$UpdateRenderState,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_environment_Floor$UpdateRenderState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_environment_Floor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_environment_Floor$UpdateRenderState = registerClass(&class_mindustry_world_blocks_environment_Floor$UpdateRenderState);

}

