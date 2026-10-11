#include "mindustry/maps/filters/DistortFilter.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "mindustry/maps/filters/DistortFilter_invoke_arc_func_Floatp_2.h"
#include "mindustry/maps/filters/DistortFilter_invoke_arc_func_Floatp_3.h"
#include "arc/func/Floatc.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Floatp.h"
#include "mindustry/maps/filters/DistortFilter.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/maps/filters/DistortFilter_invoke_arc_func_Floatc_2.h"
#include "mindustry/maps/filters/DistortFilter_invoke_arc_func_Floatc_3.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"

extern "C" {


void mark_mindustry_maps_filters_DistortFilter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_DistortFilter *) object;
}

void clinit_mindustry_maps_filters_DistortFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_GenerateFilter(ctx);
}

void init_mindustry_maps_filters_DistortFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/DistortFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_DistortFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_mindustry_maps_filters_GenerateFilter(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_scl = (jfloat(40.0f));
	((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_mag = (jfloat(5.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_DistortFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/DistortFilter:options", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"scale"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatp_2(ctx);
		auto proxy = (mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatp_2 *) gcAlloc(ctx, &class_mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatp_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatc_2(ctx);
		auto proxy = (mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatc_2 *) gcAlloc(ctx, &class_mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatc_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(1)), (jfloat(200.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"mag"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatp_3(ctx);
		auto proxy = (mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatp_3 *) gcAlloc(ctx, &class_mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatp_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatc_3(ctx);
		auto proxy = (mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatc_3 *) gcAlloc(ctx, &class_mindustry_maps_filters_DistortFilter_invoke_arc_func_Floatc_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(0.5f)), (jfloat(100.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_DistortFilter_isBuffered_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/DistortFilter:isBuffered", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jchar M_mindustry_maps_filters_DistortFilter_icon_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/DistortFilter:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jint(63685));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_DistortFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/DistortFilter:apply", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat(((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_x));
	jfloat temp1 = (jfloat)((func_mindustry_maps_filters_DistortFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_DistortFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_scl), ((jfloat)((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_mag));
	jfloat temp2 = (temp0 + temp1) - (((jfloat)((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_mag) / (jfloat(2)));
	jfloat temp3 = jfloat(((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_y));
	jfloat temp4 = (jfloat)((func_mindustry_maps_filters_DistortFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_DistortFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float])(ctx, (frame[0].o), (jint(1)), (frame[1].o), ((jfloat)((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_scl), ((jfloat)((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_mag));
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp2, ((temp3 + temp4) - (((jfloat)((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_mag) / (jfloat(2)))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	jint temp5 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp5 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_overlay = (jref) sp[1].o;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_DistortFilter_lambda$options$3_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/DistortFilter:lambda$options$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(14);
	((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_mag = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_DistortFilter_lambda$options$2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/DistortFilter:lambda$options$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_mag);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_DistortFilter_lambda$options$1_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/DistortFilter:lambda$options$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(13);
	((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_scl = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_DistortFilter_lambda$options$0_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/DistortFilter:lambda$options$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_DistortFilter *) NULL_CHECK((frame[0].o)))->F_scl);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_DistortFilter[] {
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
	(void *) M_mindustry_maps_filters_GenerateFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_DistortFilter_options_R_Array1_mindustry_maps_filters_FilterOption,
	(void *) M_mindustry_maps_filters_DistortFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_DistortFilter_icon_R_char,
	(void *) M_mindustry_maps_filters_GenerateFilter_randomize,
	(void *) M_mindustry_maps_filters_DistortFilter_isBuffered_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_isPost_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_maps_filters_DistortFilter_lambda$options$3_float,
	(void *) M_mindustry_maps_filters_DistortFilter_lambda$options$2_R_float,
	(void *) M_mindustry_maps_filters_DistortFilter_lambda$options$1_float,
	(void *) M_mindustry_maps_filters_DistortFilter_lambda$options$0_R_float,
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
	{ "lambda$options$3", "(F)V" },
	{ "lambda$options$2", "()F" },
	{ "lambda$options$1", "(F)V" },
	{ "lambda$options$0", "()F" },
};

static FieldMetadata fields[] {
	{ "scl", &class_float, offsetof(mindustry_maps_filters_DistortFilter, F_scl), "F", 1 },
	{ "mag", &class_float, offsetof(mindustry_maps_filters_DistortFilter, F_mag), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_DistortFilter, 0, "()V", 1 },
	{ "options", (intptr_t) M_mindustry_maps_filters_DistortFilter_options_R_Array1_mindustry_maps_filters_FilterOption, VTABLE_mindustry_maps_filters_DistortFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1 },
	{ "isBuffered", (intptr_t) M_mindustry_maps_filters_DistortFilter_isBuffered_R_boolean, VTABLE_mindustry_maps_filters_DistortFilter_isBuffered_R_boolean, "()Z", 1 },
	{ "icon", (intptr_t) M_mindustry_maps_filters_DistortFilter_icon_R_char, VTABLE_mindustry_maps_filters_DistortFilter_icon_R_char, "()C", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_DistortFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_DistortFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "lambda$options$3", (intptr_t) M_mindustry_maps_filters_DistortFilter_lambda$options$3_float, VTABLE_mindustry_maps_filters_DistortFilter_lambda$options$3_float, "(F)V", 4098 },
	{ "lambda$options$2", (intptr_t) M_mindustry_maps_filters_DistortFilter_lambda$options$2_R_float, VTABLE_mindustry_maps_filters_DistortFilter_lambda$options$2_R_float, "()F", 4098 },
	{ "lambda$options$1", (intptr_t) M_mindustry_maps_filters_DistortFilter_lambda$options$1_float, VTABLE_mindustry_maps_filters_DistortFilter_lambda$options$1_float, "(F)V", 4098 },
	{ "lambda$options$0", (intptr_t) M_mindustry_maps_filters_DistortFilter_lambda$options$0_R_float, VTABLE_mindustry_maps_filters_DistortFilter_lambda$options$0_R_float, "()F", 4098 },
};

Class class_mindustry_maps_filters_DistortFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/DistortFilter",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.size = sizeof(mindustry_maps_filters_DistortFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_DistortFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_DistortFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_DistortFilter,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_DistortFilter = registerClass(&class_mindustry_maps_filters_DistortFilter);

}
