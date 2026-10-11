#include "mindustry/graphics/BlockRenderer_CacheChunk.h"
#include "arc/graphics/g2d/SpriteCache.h"
#include "java/lang/Object.h"
#include "java/util/Arrays.h"
#include "mindustry/graphics/BlockRenderer_CacheChunk.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "mindustry/graphics/BuildingCacheLayer.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_graphics_BlockRenderer$CacheChunk(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_BlockRenderer$CacheChunk *) object;
	if (self->F_caches)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_caches)->clazz)->markFunction)((jobject) self->F_caches, mark, depth + 1);
	if (self->F_spriteCacheIndices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spriteCacheIndices)->clazz)->markFunction)((jobject) self->F_spriteCacheIndices, mark, depth + 1);
	if (self->F_cacheIds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cacheIds)->clazz)->markFunction)((jobject) self->F_cacheIds, mark, depth + 1);
	if (self->F_dirty)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dirty)->clazz)->markFunction)((jobject) self->F_dirty, mark, depth + 1);
	if (self->F_lastSeenTeam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSeenTeam)->clazz)->markFunction)((jobject) self->F_lastSeenTeam, mark, depth + 1);
}

void clinit_mindustry_graphics_BlockRenderer$CacheChunk(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_BlockRenderer$CacheChunk(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer$CacheChunk:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BlockRenderer$CacheChunk(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(888);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(889);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_SpriteCache, (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount));
	((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK(sp[0].o))->F_caches = (jref) sp[1].o;
	LINE_NUMBER(891);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount));
	((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK(sp[0].o))->F_spriteCacheIndices = (jref) sp[1].o;
	LINE_NUMBER(892);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount));
	((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK(sp[0].o))->F_cacheIds = (jref) sp[1].o;
	LINE_NUMBER(893);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount));
	((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK(sp[0].o))->F_dirty = (jref) sp[1].o;
	LINE_NUMBER(898);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[0].o)))->F_dirty;
	SM_java_util_Arrays_fill_Array1_boolean_boolean(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_BlockRenderer$CacheChunk[] {
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
	{ "caches", getArrayClass(&class_arc_graphics_g2d_SpriteCache, 1), offsetof(mindustry_graphics_BlockRenderer$CacheChunk, F_caches), "[Larc/graphics/g2d/SpriteCache;", 0 },
	{ "spriteCacheIndices", getArrayClass(&class_int, 1), offsetof(mindustry_graphics_BlockRenderer$CacheChunk, F_spriteCacheIndices), "[I", 0 },
	{ "cacheIds", getArrayClass(&class_int, 1), offsetof(mindustry_graphics_BlockRenderer$CacheChunk, F_cacheIds), "[I", 0 },
	{ "dirty", getArrayClass(&class_boolean, 1), offsetof(mindustry_graphics_BlockRenderer$CacheChunk, F_dirty), "[Z", 0 },
	{ "lastSeenTeam", &class_mindustry_game_Team, offsetof(mindustry_graphics_BlockRenderer$CacheChunk, F_lastSeenTeam), "Lmindustry/game/Team;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_BlockRenderer$CacheChunk, 0, "()V", 0 },
};

Class class_mindustry_graphics_BlockRenderer$CacheChunk{
		.nativeName = (intptr_t) "mindustry/graphics/BlockRenderer$CacheChunk",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_BlockRenderer$CacheChunk),
		.classVtable = (intptr_t) vtable_mindustry_graphics_BlockRenderer$CacheChunk,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_BlockRenderer$CacheChunk,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_BlockRenderer$CacheChunk,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_BlockRenderer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_BlockRenderer$CacheChunk = registerClass(&class_mindustry_graphics_BlockRenderer$CacheChunk);

}

