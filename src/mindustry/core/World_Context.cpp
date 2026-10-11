#include "mindustry/core/World_Context.h"
#include "mindustry/core/World_Context.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/WorldContext.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/type/Sector.h"
#include "arc/util/Nullable.h"
#include "mindustry/core/World.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_core_World$Context(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_World$Context *) object;
	if (self->F_sector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sector)->clazz)->markFunction)((jobject) self->F_sector, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_core_World$Context(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_core_World$Context_mindustry_core_World(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$Context:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World$Context(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(616);
	((mindustry_core_World$Context *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_core_World$Context_mindustry_core_World_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$Context:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World$Context(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(618);
	((mindustry_core_World$Context *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(619);
	((mindustry_core_World$Context *) NULL_CHECK((frame[0].o)))->F_sector = (jref) (frame[2].o);
	LINE_NUMBER(620);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World$Context_tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$Context:tile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(624);
	sp[0].o = (jobject)((mindustry_core_World$Context *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World$Context_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$Context:resize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((mindustry_core_World$Context *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(630);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World$Context_create_int_int_int_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$Context:create", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(634);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_Tile);
	init_mindustry_world_Tile_int_int_int_int_int(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(635);
	sp[0].o = (jobject)((mindustry_core_World$Context *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	((func_mindustry_world_Tiles_set_int_int_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_set_int_int_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[6].o));
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_World$Context_isGenerating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$Context:isGenerating", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)((mindustry_core_World$Context *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World$Context_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$Context:begin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((mindustry_core_World$Context *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_core_World_beginMapLoad) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_beginMapLoad])(ctx, sp[0].o);
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World$Context_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$Context:end", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((mindustry_core_World$Context *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_core_World_endMapLoad) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_endMapLoad])(ctx, sp[0].o);
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World$Context_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$Context:getSector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((mindustry_core_World$Context *) NULL_CHECK((frame[0].o)))->F_sector;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_core_World$Context;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}
}

void *vtable_mindustry_core_World$Context[] {
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
	(void *) M_mindustry_core_World$Context_tile_int_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World$Context_resize_int_int,
	(void *) M_mindustry_core_World$Context_create_int_int_int_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World$Context_isGenerating_R_boolean,
	(void *) M_mindustry_core_World$Context_begin,
	(void *) M_mindustry_core_World$Context_end,
	(void *) M_mindustry_world_WorldContext_onReadBuilding,
	(void *) M_mindustry_world_WorldContext_onReadTileData,
	(void *) M_mindustry_core_World$Context_getSector_R_mindustry_type_Sector,
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
	{ "sector", &class_mindustry_type_Sector, offsetof(mindustry_core_World$Context, F_sector), "Lmindustry/type/Sector;", 2 },
	{ "this$0", &class_mindustry_core_World, offsetof(mindustry_core_World$Context, F_this$0), "Lmindustry/core/World;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_World$Context_mindustry_core_World, 0, "(Lmindustry/core/World;)V", 0 },
	{ "<init>", (intptr_t) init_mindustry_core_World$Context_mindustry_core_World_mindustry_type_Sector, 0, "(Lmindustry/core/World;Lmindustry/type/Sector;)V", 0 },
	{ "tile", (intptr_t) M_mindustry_core_World$Context_tile_int_R_mindustry_world_Tile, VTABLE_mindustry_core_World$Context_tile_int_R_mindustry_world_Tile, "(I)Lmindustry/world/Tile;", 1 },
	{ "resize", (intptr_t) M_mindustry_core_World$Context_resize_int_int, VTABLE_mindustry_core_World$Context_resize_int_int, "(II)V", 1 },
	{ "create", (intptr_t) M_mindustry_core_World$Context_create_int_int_int_int_int_R_mindustry_world_Tile, VTABLE_mindustry_core_World$Context_create_int_int_int_int_int_R_mindustry_world_Tile, "(IIIII)Lmindustry/world/Tile;", 1 },
	{ "isGenerating", (intptr_t) M_mindustry_core_World$Context_isGenerating_R_boolean, VTABLE_mindustry_core_World$Context_isGenerating_R_boolean, "()Z", 1 },
	{ "begin", (intptr_t) M_mindustry_core_World$Context_begin, VTABLE_mindustry_core_World$Context_begin, "()V", 1 },
	{ "end", (intptr_t) M_mindustry_core_World$Context_end, VTABLE_mindustry_core_World$Context_end, "()V", 1 },
	{ "getSector", (intptr_t) M_mindustry_core_World$Context_getSector_R_mindustry_type_Sector, VTABLE_mindustry_core_World$Context_getSector_R_mindustry_type_Sector, "()Lmindustry/type/Sector;", 1 },
};

Class class_mindustry_core_World$Context{
		.nativeName = (intptr_t) "mindustry/core/World$Context",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_World$Context),
		.classVtable = (intptr_t) vtable_mindustry_core_World$Context,
		.staticInitializer = (intptr_t) clinit_mindustry_core_World$Context,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_core_World$Context,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_core_World,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_World$Context = registerClass(&class_mindustry_core_World$Context);

}

