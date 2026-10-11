#include "mindustry/core/World_FilterContext.h"
#include "mindustry/maps/Map.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput_TileProvider.h"
#include "mindustry/core/World_FilterContext.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/Sector.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/core/World_Context.h"
#include "java/lang/Object.h"
#include "mindustry/core/World_FilterContext_invoke_mindustry_maps_filters_GenerateFilter_GenerateInput_TileProvider_1.h"
#include "mindustry/world/WorldContext.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/core/World.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"

extern "C" {


void mark_mindustry_core_World$FilterContext(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_core_World$Context(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_core_World$FilterContext *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_core_World$FilterContext(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_core_World$Context(ctx);
}

void init_mindustry_core_World$FilterContext_mindustry_core_World_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World$FilterContext(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(665);
	((mindustry_core_World$FilterContext *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_core_World$Context_mindustry_core_World(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(666);
	((mindustry_core_World$FilterContext *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[2].o);
	LINE_NUMBER(667);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World$FilterContext_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:end", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(671);
	((func_mindustry_core_World$FilterContext_applyFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World$FilterContext_applyFilters])(ctx, (frame[0].o));
	LINE_NUMBER(673);
	M_mindustry_core_World$Context_end(ctx, (frame[0].o));
	LINE_NUMBER(674);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_World$FilterContext_isMap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:isMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(678);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World$FilterContext_applyFilters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:applyFilters", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(682);
	sp[0].o = (jobject)((mindustry_core_World$FilterContext *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_mindustry_maps_Map_filters_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_filters_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(684);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(686);
	clinit_mindustry_maps_filters_GenerateFilter$GenerateInput(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_filters_GenerateFilter$GenerateInput);
	init_mindustry_maps_filters_GenerateFilter$GenerateInput(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_maps_filters_GenerateFilter, sp[0].o));
	LINE_NUMBER(689);
	((func_mindustry_maps_filters_GenerateFilter_randomize) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_randomize])(ctx, (frame[4].o));
	LINE_NUMBER(690);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_core_World$FilterContext *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_core_World$FilterContext *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_World$FilterContext_invoke_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_1(ctx);
		auto proxy = (mindustry_core_World$FilterContext_invoke_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_1 *) gcAlloc(ctx, &class_mindustry_core_World$FilterContext_invoke_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(691);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_core_World$FilterContext *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[1].o))->F_tiles;
	((func_mindustry_maps_filters_GenerateFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(692);
	goto label_5;
	}
label_2:;
	LINE_NUMBER(694);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_World$FilterContext_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:getSector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)M_mindustry_core_World$Context_getSector_R_mindustry_type_Sector(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World$FilterContext_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:begin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(662);
	M_mindustry_core_World$Context_begin(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_World$FilterContext_isGenerating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:isGenerating", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(662);
	jint temp0 = (jint)M_mindustry_core_World$Context_isGenerating_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World$FilterContext_create_int_int_int_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:create", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)M_mindustry_core_World$Context_create_int_int_int_int_int_R_mindustry_world_Tile(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World$FilterContext_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:resize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(662);
	M_mindustry_core_World$Context_resize_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World$FilterContext_tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:tile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)M_mindustry_core_World$Context_tile_int_R_mindustry_world_Tile(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World$FilterContext_lambda$applyFilters$0_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World$FilterContext:lambda$applyFilters$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((mindustry_core_World$FilterContext *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_core_World$FilterContext;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_core_World$FilterContext[] {
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
	(void *) M_mindustry_core_World$FilterContext_tile_int_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World$FilterContext_resize_int_int,
	(void *) M_mindustry_core_World$FilterContext_create_int_int_int_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World$FilterContext_isGenerating_R_boolean,
	(void *) M_mindustry_core_World$FilterContext_begin,
	(void *) M_mindustry_core_World$FilterContext_end,
	(void *) M_mindustry_world_WorldContext_onReadBuilding,
	(void *) M_mindustry_world_WorldContext_onReadTileData,
	(void *) M_mindustry_core_World$FilterContext_getSector_R_mindustry_type_Sector,
	(void *) M_mindustry_core_World$FilterContext_isMap_R_boolean,
	(void *) M_mindustry_core_World$FilterContext_applyFilters,
	(void *) M_mindustry_core_World$FilterContext_lambda$applyFilters$0_int_int_R_mindustry_world_Tile,
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
	{ "applyFilters", "()V" },
	{ "lambda$applyFilters$0", "(II)Lmindustry/world/Tile;" },
};

static FieldMetadata fields[] {
	{ "map", &class_mindustry_maps_Map, offsetof(mindustry_core_World$FilterContext, F_map), "Lmindustry/maps/Map;", 16 },
	{ "this$0", &class_mindustry_core_World, offsetof(mindustry_core_World$FilterContext, F_this$0), "Lmindustry/core/World;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_World$FilterContext_mindustry_core_World_mindustry_maps_Map, 0, "(Lmindustry/core/World;Lmindustry/maps/Map;)V", 1 },
	{ "end", (intptr_t) M_mindustry_core_World$FilterContext_end, VTABLE_mindustry_core_World$FilterContext_end, "()V", 1 },
	{ "isMap", (intptr_t) M_mindustry_core_World$FilterContext_isMap_R_boolean, VTABLE_mindustry_core_World$FilterContext_isMap_R_boolean, "()Z", 1 },
	{ "applyFilters", (intptr_t) M_mindustry_core_World$FilterContext_applyFilters, VTABLE_mindustry_core_World$FilterContext_applyFilters, "()V", 1 },
	{ "getSector", (intptr_t) M_mindustry_core_World$FilterContext_getSector_R_mindustry_type_Sector, VTABLE_mindustry_core_World$FilterContext_getSector_R_mindustry_type_Sector, "()Lmindustry/type/Sector;", 4161 },
	{ "begin", (intptr_t) M_mindustry_core_World$FilterContext_begin, VTABLE_mindustry_core_World$FilterContext_begin, "()V", 4161 },
	{ "isGenerating", (intptr_t) M_mindustry_core_World$FilterContext_isGenerating_R_boolean, VTABLE_mindustry_core_World$FilterContext_isGenerating_R_boolean, "()Z", 4161 },
	{ "create", (intptr_t) M_mindustry_core_World$FilterContext_create_int_int_int_int_int_R_mindustry_world_Tile, VTABLE_mindustry_core_World$FilterContext_create_int_int_int_int_int_R_mindustry_world_Tile, "(IIIII)Lmindustry/world/Tile;", 4161 },
	{ "resize", (intptr_t) M_mindustry_core_World$FilterContext_resize_int_int, VTABLE_mindustry_core_World$FilterContext_resize_int_int, "(II)V", 4161 },
	{ "tile", (intptr_t) M_mindustry_core_World$FilterContext_tile_int_R_mindustry_world_Tile, VTABLE_mindustry_core_World$FilterContext_tile_int_R_mindustry_world_Tile, "(I)Lmindustry/world/Tile;", 4161 },
	{ "lambda$applyFilters$0", (intptr_t) M_mindustry_core_World$FilterContext_lambda$applyFilters$0_int_int_R_mindustry_world_Tile, VTABLE_mindustry_core_World$FilterContext_lambda$applyFilters$0_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 4098 },
};

Class class_mindustry_core_World$FilterContext{
		.nativeName = (intptr_t) "mindustry/core/World$FilterContext",
		.parentClass = (intptr_t) &class_mindustry_core_World$Context,
		.size = sizeof(mindustry_core_World$FilterContext),
		.classVtable = (intptr_t) vtable_mindustry_core_World$FilterContext,
		.staticInitializer = (intptr_t) clinit_mindustry_core_World$FilterContext,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_core_World$FilterContext,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_core_World,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_World$FilterContext = registerClass(&class_mindustry_core_World$FilterContext);

}

