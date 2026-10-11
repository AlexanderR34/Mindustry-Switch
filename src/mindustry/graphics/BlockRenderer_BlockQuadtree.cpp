#include "mindustry/graphics/BlockRenderer_BlockQuadtree.h"
#include "mindustry/graphics/BlockRenderer_BlockQuadtree.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/world/Tile.h"
#include "mindustry/graphics/BlockRenderer.h"

extern "C" {


void mark_mindustry_graphics_BlockRenderer$BlockQuadtree(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_math_geom_QuadTree(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_graphics_BlockRenderer$BlockQuadtree *) object;
}

void clinit_mindustry_graphics_BlockRenderer$BlockQuadtree(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_math_geom_QuadTree(ctx);
}

void init_mindustry_graphics_BlockRenderer$BlockQuadtree_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer$BlockQuadtree:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BlockRenderer$BlockQuadtree(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(905);
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(906);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer$BlockQuadtree_hitbox_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer$BlockQuadtree:hitbox", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(910);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(911);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_offset)), ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_clipSize), ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_clipSize));
	LINE_NUMBER(912);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_BlockRenderer$BlockQuadtree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer$BlockQuadtree:newChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(916);
	clinit_mindustry_graphics_BlockRenderer$BlockQuadtree(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$BlockQuadtree);
	init_mindustry_graphics_BlockRenderer$BlockQuadtree_arc_math_geom_Rect(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer$BlockQuadtree_hitbox_arc_math_geom_QuadTree$QuadTreeObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer$BlockQuadtree:hitbox", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(902);
	((func_mindustry_graphics_BlockRenderer$BlockQuadtree_hitbox_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer$BlockQuadtree_hitbox_mindustry_world_Tile])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_world_Tile, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_BlockRenderer$BlockQuadtree[] {
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
	(void *) M_arc_math_geom_QuadTree_split,
	(void *) M_arc_math_geom_QuadTree_unsplit,
	(void *) M_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject,
	(void *) M_arc_math_geom_QuadTree_fill_arc_struct_Seq,
	(void *) M_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean,
	(void *) M_arc_math_geom_QuadTree_clear,
	(void *) M_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree,
	(void *) M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons,
	(void *) M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean,
	(void *) M_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject,
	(void *) M_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean,
	(void *) M_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons,
	(void *) M_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq,
	(void *) M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq,
	(void *) M_arc_math_geom_QuadTree_getObjects_arc_struct_Seq,
	(void *) M_mindustry_graphics_BlockRenderer$BlockQuadtree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree,
	(void *) M_mindustry_graphics_BlockRenderer$BlockQuadtree_hitbox_arc_math_geom_QuadTree$QuadTreeObject,
	(void *) M_mindustry_graphics_BlockRenderer$BlockQuadtree_hitbox_mindustry_world_Tile,
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
	{ "split", "()V" },
	{ "unsplit", "()V" },
	{ "insert", "(Larc/math/geom/QuadTree$QuadTreeObject;)V" },
	{ "fill", "(Larc/struct/Seq;)V" },
	{ "remove", "(Larc/math/geom/QuadTree$QuadTreeObject;)Z" },
	{ "clear", "()V" },
	{ "getFittingChild", "(Larc/math/geom/Rect;)Larc/math/geom/QuadTree;" },
	{ "intersect", "(FFFFLarc/func/Cons;)V" },
	{ "intersect", "(FFFFLarc/func/Boolf;)Z" },
	{ "find", "(FFFFLarc/func/Boolf;)Larc/math/geom/QuadTree$QuadTreeObject;" },
	{ "any", "(FFFF)Z" },
	{ "intersect", "(Larc/math/geom/Rect;Larc/func/Cons;)V" },
	{ "intersect", "(Larc/math/geom/Rect;Larc/struct/Seq;)V" },
	{ "intersect", "(FFFFLarc/struct/Seq;)V" },
	{ "getObjects", "(Larc/struct/Seq;)V" },
	{ "newChild", "(Larc/math/geom/Rect;)Larc/math/geom/QuadTree;" },
	{ "hitbox", "(Larc/math/geom/QuadTree$QuadTreeObject;)V" },
	{ "hitbox", "(Lmindustry/world/Tile;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_BlockRenderer$BlockQuadtree_arc_math_geom_Rect, 0, "(Larc/math/geom/Rect;)V", 1 },
	{ "hitbox", (intptr_t) M_mindustry_graphics_BlockRenderer$BlockQuadtree_hitbox_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer$BlockQuadtree_hitbox_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "newChild", (intptr_t) M_mindustry_graphics_BlockRenderer$BlockQuadtree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree, VTABLE_mindustry_graphics_BlockRenderer$BlockQuadtree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree, "(Larc/math/geom/Rect;)Larc/math/geom/QuadTree;", 4 },
	{ "hitbox", (intptr_t) M_mindustry_graphics_BlockRenderer$BlockQuadtree_hitbox_arc_math_geom_QuadTree$QuadTreeObject, VTABLE_mindustry_graphics_BlockRenderer$BlockQuadtree_hitbox_arc_math_geom_QuadTree$QuadTreeObject, "(Larc/math/geom/QuadTree$QuadTreeObject;)V", 4161 },
};

Class class_mindustry_graphics_BlockRenderer$BlockQuadtree{
		.nativeName = (intptr_t) "mindustry/graphics/BlockRenderer$BlockQuadtree",
		.parentClass = (intptr_t) &class_arc_math_geom_QuadTree,
		.size = sizeof(mindustry_graphics_BlockRenderer$BlockQuadtree),
		.classVtable = (intptr_t) vtable_mindustry_graphics_BlockRenderer$BlockQuadtree,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_BlockRenderer$BlockQuadtree,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_BlockRenderer$BlockQuadtree,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_BlockRenderer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_BlockRenderer$BlockQuadtree = registerClass(&class_mindustry_graphics_BlockRenderer$BlockQuadtree);

}

