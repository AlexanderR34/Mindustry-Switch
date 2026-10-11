#include "mindustry/maps/filters/EnemySpawnFilter.h"
#include "java/lang/Math.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "java/util/Iterator.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/filters/EnemySpawnFilter_invoke_arc_func_Floatc_1.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "arc/func/Floatc.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/EnemySpawnFilter_invoke_arc_func_Floatp_1.h"
#include "java/lang/String.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Floatp.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/maps/filters/EnemySpawnFilter.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"

extern "C" {


void mark_mindustry_maps_filters_EnemySpawnFilter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_EnemySpawnFilter *) object;
}

void clinit_mindustry_maps_filters_EnemySpawnFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_GenerateFilter(ctx);
}

void init_mindustry_maps_filters_EnemySpawnFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/EnemySpawnFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_EnemySpawnFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_mindustry_maps_filters_GenerateFilter(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((mindustry_maps_filters_EnemySpawnFilter *) NULL_CHECK((frame[0].o)))->F_amount = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_EnemySpawnFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/EnemySpawnFilter:options", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"amount"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_EnemySpawnFilter_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_maps_filters_EnemySpawnFilter_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_EnemySpawnFilter_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_EnemySpawnFilter_invoke_arc_func_Floatc_1(ctx);
		auto proxy = (mindustry_maps_filters_EnemySpawnFilter_invoke_arc_func_Floatc_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_EnemySpawnFilter_invoke_arc_func_Floatc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(1)), (jfloat(10.0f)));
	LINE_NUMBER(16);
	sp[1].o = (jobject)((func_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_mindustry_maps_filters_EnemySpawnFilter_icon_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/EnemySpawnFilter:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (jint(63743));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_EnemySpawnFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/EnemySpawnFilter:apply", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(27);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(29);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[5].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_5:;
	LINE_NUMBER(32);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(34);
	((func_arc_struct_IntSeq_shuffle) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_shuffle])(ctx, (frame[3].o));
	LINE_NUMBER(36);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[3].o)))->F_size), ((jint)((mindustry_maps_filters_EnemySpawnFilter *) NULL_CHECK((frame[0].o)))->F_amount));
	frame[4].i = temp0;
	LINE_NUMBER(37);
	frame[5].i = (frame[4].i);
	}
label_9:;
	{
	if ((frame[5].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(38);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[3].o), (frame[5].i));
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getp_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getp_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0);
	frame[6].o = sp[0].o;
	LINE_NUMBER(39);
	((func_mindustry_world_Tile_clearOverlay) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_clearOverlay])(ctx, (frame[6].o));
	LINE_NUMBER(37);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_EnemySpawnFilter_isPost_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/EnemySpawnFilter:isPost", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_EnemySpawnFilter_lambda$options$1_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/EnemySpawnFilter:lambda$options$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(16);
	((mindustry_maps_filters_EnemySpawnFilter *) NULL_CHECK((frame[0].o)))->F_amount = (jint((frame[1].f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_EnemySpawnFilter_lambda$options$0_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/EnemySpawnFilter:lambda$options$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_maps_filters_EnemySpawnFilter *) NULL_CHECK((frame[0].o)))->F_amount)));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_EnemySpawnFilter[] {
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
	(void *) M_mindustry_maps_filters_EnemySpawnFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_EnemySpawnFilter_options_R_Array1_mindustry_maps_filters_FilterOption,
	(void *) M_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_EnemySpawnFilter_icon_R_char,
	(void *) M_mindustry_maps_filters_GenerateFilter_randomize,
	(void *) M_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean,
	(void *) M_mindustry_maps_filters_EnemySpawnFilter_isPost_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_maps_filters_EnemySpawnFilter_lambda$options$1_float,
	(void *) M_mindustry_maps_filters_EnemySpawnFilter_lambda$options$0_R_float,
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
	{ "lambda$options$1", "(F)V" },
	{ "lambda$options$0", "()F" },
};

static FieldMetadata fields[] {
	{ "amount", &class_int, offsetof(mindustry_maps_filters_EnemySpawnFilter, F_amount), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_EnemySpawnFilter, 0, "()V", 1 },
	{ "options", (intptr_t) M_mindustry_maps_filters_EnemySpawnFilter_options_R_Array1_mindustry_maps_filters_FilterOption, VTABLE_mindustry_maps_filters_EnemySpawnFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1 },
	{ "icon", (intptr_t) M_mindustry_maps_filters_EnemySpawnFilter_icon_R_char, VTABLE_mindustry_maps_filters_EnemySpawnFilter_icon_R_char, "()C", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_EnemySpawnFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_EnemySpawnFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/world/Tiles;Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "isPost", (intptr_t) M_mindustry_maps_filters_EnemySpawnFilter_isPost_R_boolean, VTABLE_mindustry_maps_filters_EnemySpawnFilter_isPost_R_boolean, "()Z", 1 },
	{ "lambda$options$1", (intptr_t) M_mindustry_maps_filters_EnemySpawnFilter_lambda$options$1_float, VTABLE_mindustry_maps_filters_EnemySpawnFilter_lambda$options$1_float, "(F)V", 4098 },
	{ "lambda$options$0", (intptr_t) M_mindustry_maps_filters_EnemySpawnFilter_lambda$options$0_R_float, VTABLE_mindustry_maps_filters_EnemySpawnFilter_lambda$options$0_R_float, "()F", 4098 },
};

Class class_mindustry_maps_filters_EnemySpawnFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/EnemySpawnFilter",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.size = sizeof(mindustry_maps_filters_EnemySpawnFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_EnemySpawnFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_EnemySpawnFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_EnemySpawnFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_EnemySpawnFilter = registerClass(&class_mindustry_maps_filters_EnemySpawnFilter);

}
