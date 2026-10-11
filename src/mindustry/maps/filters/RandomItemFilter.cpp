#include "mindustry/maps/filters/RandomItemFilter.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/maps/filters/RandomItemFilter.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "java/util/Iterator.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/storage/StorageBlock.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"

extern "C" {


void mark_mindustry_maps_filters_RandomItemFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_maps_filters_GenerateFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_filters_RandomItemFilter *) object;
	if (self->F_drops)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drops)->clazz)->markFunction)((jobject) self->F_drops, mark, depth + 1);
}

void clinit_mindustry_maps_filters_RandomItemFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_GenerateFilter(ctx);
}

void init_mindustry_maps_filters_RandomItemFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RandomItemFilter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_RandomItemFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_maps_filters_GenerateFilter(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_maps_filters_RandomItemFilter *) NULL_CHECK(sp[0].o))->F_drops = (jref) sp[1].o;
	LINE_NUMBER(11);
	((mindustry_maps_filters_RandomItemFilter *) NULL_CHECK((frame[0].o)))->F_chance = (jfloat(0.3f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_RandomItemFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RandomItemFilter:options", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_FilterOption, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RandomItemFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RandomItemFilter:apply", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(21);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_StorageBlock)) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_filters_RandomItemFilter *) NULL_CHECK((frame[0].o)))->F_drops;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	LINE_NUMBER(23);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_maps_filters_RandomItemFilter *) NULL_CHECK((frame[0].o)))->F_chance))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount));
	sp[2].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_itemCapacity));
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp1);
	}
label_8:;
	LINE_NUMBER(26);
	goto label_6;
label_4:;
	LINE_NUMBER(28);
	goto label_1;
label_2:;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_RandomItemFilter_isPost_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RandomItemFilter:isPost", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_RandomItemFilter[] {
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
	(void *) M_mindustry_maps_filters_RandomItemFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_RandomItemFilter_options_R_Array1_mindustry_maps_filters_FilterOption,
	(void *) M_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_icon_R_char,
	(void *) M_mindustry_maps_filters_GenerateFilter_randomize,
	(void *) M_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean,
	(void *) M_mindustry_maps_filters_RandomItemFilter_isPost_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter,
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
	{ "apply", "(Lmindustry/world/Tiles;Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V" },
	{ "options", "()[Lmindustry/maps/filters/FilterOption;" },
	{ "apply", "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V" },
	{ "draw", "(Larc/scene/ui/Image;)V" },
	{ "simpleName", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "icon", "()C" },
	{ "randomize", "()V" },
	{ "isBuffered", "()Z" },
	{ "isPost", "()Z" },
	{ "noise", "(ILmindustry/maps/filters/GenerateFilter$GenerateInput;FF)F" },
	{ "noise", "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;FF)F" },
	{ "noise", "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;FFFF)F" },
	{ "noise", "(FFFFFF)F" },
	{ "rnoise", "(FFFF)F" },
	{ "rnoise", "(FFIFFF)F" },
	{ "chance", "(II)F" },
	{ "copy", "()Lmindustry/maps/filters/GenerateFilter;" },
};

static FieldMetadata fields[] {
	{ "drops", &class_arc_struct_Seq, offsetof(mindustry_maps_filters_RandomItemFilter, F_drops), "Larc/struct/Seq;", 1 },
	{ "chance", &class_float, offsetof(mindustry_maps_filters_RandomItemFilter, F_chance), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_RandomItemFilter, 0, "()V", 1 },
	{ "options", (intptr_t) M_mindustry_maps_filters_RandomItemFilter_options_R_Array1_mindustry_maps_filters_FilterOption, VTABLE_mindustry_maps_filters_RandomItemFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_RandomItemFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_RandomItemFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/world/Tiles;Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "isPost", (intptr_t) M_mindustry_maps_filters_RandomItemFilter_isPost_R_boolean, VTABLE_mindustry_maps_filters_RandomItemFilter_isPost_R_boolean, "()Z", 1 },
};

Class class_mindustry_maps_filters_RandomItemFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/RandomItemFilter",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.size = sizeof(mindustry_maps_filters_RandomItemFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_RandomItemFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_RandomItemFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_RandomItemFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_RandomItemFilter = registerClass(&class_mindustry_maps_filters_RandomItemFilter);

}
