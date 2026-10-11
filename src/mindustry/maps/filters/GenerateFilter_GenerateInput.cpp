#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput_TileProvider.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"

extern "C" {


void mark_mindustry_maps_filters_GenerateFilter$GenerateInput(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_GenerateFilter$GenerateInput *) object;
	if (self->F_floor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor)->clazz)->markFunction)((jobject) self->F_floor, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_overlay)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overlay)->clazz)->markFunction)((jobject) self->F_overlay, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter$GenerateInput:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_GenerateFilter$GenerateInput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(144);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4, jlong param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter$GenerateInput:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].l = param5;
	{
	LINE_NUMBER(156);
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[4].o);
	LINE_NUMBER(157);
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[3].o);
	LINE_NUMBER(158);
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_overlay = (jref) (frame[5].o);
	LINE_NUMBER(159);
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(160);
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(161);
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_packedData = (frame[6].l);
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter$GenerateInput:set", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	jlong temp2 = (jlong)((func_mindustry_world_Tile_getPackedData_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_getPackedData_R_long])(ctx, (frame[1].o));
	((func_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o, sp[3].o, temp2);
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter$GenerateInput:begin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(169);
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_buffer = (jref) (frame[3].o);
	LINE_NUMBER(170);
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(171);
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter$GenerateInput:tile", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint((frame[1].f))), (jint(0)), (((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_width) - (jint(1))));
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint((frame[2].f))), (jint(0)), (((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[0].o)))->F_height) - (jint(1))));
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_get_int_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider, INDEX_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_get_int_int_R_mindustry_world_Tile, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_GenerateFilter$GenerateInput[] {
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
	(void *) M_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long,
	(void *) M_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile,
	(void *) M_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider,
	(void *) M_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile,
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
	{ "set", "(IILmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;J)V" },
	{ "set", "(Lmindustry/world/Tile;)V" },
	{ "begin", "(IILmindustry/maps/filters/GenerateFilter$GenerateInput$TileProvider;)V" },
	{ "tile", "(FF)Lmindustry/world/Tile;" },
};

static jclass innerClasses[] {
	&class_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider,
};

static FieldMetadata fields[] {
	{ "x", &class_int, offsetof(mindustry_maps_filters_GenerateFilter$GenerateInput, F_x), "I", 1 },
	{ "y", &class_int, offsetof(mindustry_maps_filters_GenerateFilter$GenerateInput, F_y), "I", 1 },
	{ "width", &class_int, offsetof(mindustry_maps_filters_GenerateFilter$GenerateInput, F_width), "I", 1 },
	{ "height", &class_int, offsetof(mindustry_maps_filters_GenerateFilter$GenerateInput, F_height), "I", 1 },
	{ "floor", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_GenerateFilter$GenerateInput, F_floor), "Lmindustry/world/Block;", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_GenerateFilter$GenerateInput, F_block), "Lmindustry/world/Block;", 1 },
	{ "overlay", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_GenerateFilter$GenerateInput, F_overlay), "Lmindustry/world/Block;", 1 },
	{ "packedData", &class_long, offsetof(mindustry_maps_filters_GenerateFilter$GenerateInput, F_packedData), "J", 1 },
	{ "buffer", &class_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider, offsetof(mindustry_maps_filters_GenerateFilter$GenerateInput, F_buffer), "Lmindustry/maps/filters/GenerateFilter$GenerateInput$TileProvider;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_GenerateFilter$GenerateInput, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long, VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long, "(IILmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;J)V", 1 },
	{ "set", (intptr_t) M_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile, VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "begin", (intptr_t) M_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider, VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider, "(IILmindustry/maps/filters/GenerateFilter$GenerateInput$TileProvider;)V", 1 },
	{ "tile", (intptr_t) M_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile, VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile, "(FF)Lmindustry/world/Tile;", 1 },
};

Class class_mindustry_maps_filters_GenerateFilter$GenerateInput{
		.nativeName = (intptr_t) "mindustry/maps/filters/GenerateFilter$GenerateInput",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_filters_GenerateFilter$GenerateInput),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_GenerateFilter$GenerateInput,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_GenerateFilter$GenerateInput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_GenerateFilter$GenerateInput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_GenerateFilter$GenerateInput = registerClass(&class_mindustry_maps_filters_GenerateFilter$GenerateInput);

}

