#include "mindustry/editor/MapEditor_Context.h"
#include "mindustry/editor/MapEditor_Context.h"
#include "java/lang/Object.h"
#include "mindustry/world/WorldContext.h"
#include "mindustry/world/Tile.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/editor/MapEditor.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/editor/EditorTile.h"

extern "C" {


void mark_mindustry_editor_MapEditor$Context(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapEditor$Context *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_editor_MapEditor$Context(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_editor_MapEditor$Context_mindustry_editor_MapEditor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor$Context:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditor$Context(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(416);
	((mindustry_editor_MapEditor$Context *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapEditor$Context_tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor$Context:tile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(419);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	if (!sp[0].o || !((mindustry_core_World *) sp[0].o)->F_tiles) {
		popStackFrame(ctx);
		return nullptr;
	}
	sp[0].o = (jobject)((mindustry_core_World *) sp[0].o)->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor$Context_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor$Context:resize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(424);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapEditor$Context_create_int_int_int_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor$Context:create", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(429);
	clinit_mindustry_editor_EditorTile(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_EditorTile);
	init_mindustry_editor_EditorTile_int_int_int_int_int(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_editor_MapEditor$Context *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles])(ctx, sp[0].o);
	((func_mindustry_world_Tiles_set_int_int_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_set_int_int_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[6].o));
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapEditor$Context_isGenerating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor$Context:isGenerating", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor$Context_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor$Context:begin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(441);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_beginMapLoad) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_beginMapLoad])(ctx, sp[0].o);
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor$Context_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor$Context:end", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_endMapLoad) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_endMapLoad])(ctx, sp[0].o);
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapEditor$Context[] {
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
	(void *) M_mindustry_editor_MapEditor$Context_tile_int_R_mindustry_world_Tile,
	(void *) M_mindustry_editor_MapEditor$Context_resize_int_int,
	(void *) M_mindustry_editor_MapEditor$Context_create_int_int_int_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_editor_MapEditor$Context_isGenerating_R_boolean,
	(void *) M_mindustry_editor_MapEditor$Context_begin,
	(void *) M_mindustry_editor_MapEditor$Context_end,
	(void *) M_mindustry_world_WorldContext_onReadBuilding,
	(void *) M_mindustry_world_WorldContext_onReadTileData,
	(void *) M_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector,
	(void *) M_mindustry_world_WorldContext_isMap_R_boolean,
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
	{ "tile", "(I)Lmindustry/world/Tile;" },
	{ "resize", "(II)V" },
	{ "create", "(IIIII)Lmindustry/world/Tile;" },
	{ "isGenerating", "()Z" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "onReadBuilding", "()V" },
	{ "onReadTileData", "()V" },
	{ "getSector", "()Lmindustry/type/Sector;" },
	{ "isMap", "()Z" },
};

static jclass interfaces[] { &class_mindustry_world_WorldContext, };

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_editor_MapEditor, offsetof(mindustry_editor_MapEditor$Context, F_this$0), "Lmindustry/editor/MapEditor;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapEditor$Context_mindustry_editor_MapEditor, 0, "(Lmindustry/editor/MapEditor;)V", 0 },
	{ "tile", (intptr_t) M_mindustry_editor_MapEditor$Context_tile_int_R_mindustry_world_Tile, VTABLE_mindustry_editor_MapEditor$Context_tile_int_R_mindustry_world_Tile, "(I)Lmindustry/world/Tile;", 1 },
	{ "resize", (intptr_t) M_mindustry_editor_MapEditor$Context_resize_int_int, VTABLE_mindustry_editor_MapEditor$Context_resize_int_int, "(II)V", 1 },
	{ "create", (intptr_t) M_mindustry_editor_MapEditor$Context_create_int_int_int_int_int_R_mindustry_world_Tile, VTABLE_mindustry_editor_MapEditor$Context_create_int_int_int_int_int_R_mindustry_world_Tile, "(IIIII)Lmindustry/world/Tile;", 1 },
	{ "isGenerating", (intptr_t) M_mindustry_editor_MapEditor$Context_isGenerating_R_boolean, VTABLE_mindustry_editor_MapEditor$Context_isGenerating_R_boolean, "()Z", 1 },
	{ "begin", (intptr_t) M_mindustry_editor_MapEditor$Context_begin, VTABLE_mindustry_editor_MapEditor$Context_begin, "()V", 1 },
	{ "end", (intptr_t) M_mindustry_editor_MapEditor$Context_end, VTABLE_mindustry_editor_MapEditor$Context_end, "()V", 1 },
};

Class class_mindustry_editor_MapEditor$Context{
		.nativeName = (intptr_t) "mindustry/editor/MapEditor$Context",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_MapEditor$Context),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapEditor$Context,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapEditor$Context,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapEditor$Context,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_editor_MapEditor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapEditor$Context = registerClass(&class_mindustry_editor_MapEditor$Context);

}

