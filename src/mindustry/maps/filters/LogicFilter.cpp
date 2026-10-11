#include "mindustry/maps/filters/LogicFilter.h"
#include "mindustry/maps/filters/LogicFilter_invoke_arc_func_Boolp_1.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "arc/func/Boolp.h"
#include "mindustry/maps/filters/LogicFilter.h"
#include "mindustry/logic/GlobalVars.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/maps/filters/LogicFilter_1.h"
#include "mindustry/maps/filters/LogicFilter_invoke_arc_func_Boolc_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/maps/filters/FilterOption_ToggleOption.h"
#include "arc/func/Boolc.h"
#include "mindustry/Vars.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"

extern "C" {

jint SF_mindustry_maps_filters_LogicFilter_maxInstructionsExecution;

void mark_mindustry_maps_filters_LogicFilter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_LogicFilter *) object;
	if (self->F_code)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_code)->clazz)->markFunction)((jobject) self->F_code, mark, depth + 1);
}

void init_mindustry_maps_filters_LogicFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_LogicFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_maps_filters_GenerateFilter(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_LogicFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter:options", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_FilterOption, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_maps_filters_LogicFilter$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_LogicFilter$1);
	init_mindustry_maps_filters_LogicFilter$1_mindustry_maps_filters_LogicFilter(ctx, sp[1].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_maps_filters_FilterOption$ToggleOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$ToggleOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"loop"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_LogicFilter_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_maps_filters_LogicFilter_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_LogicFilter_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_LogicFilter_invoke_arc_func_Boolc_1(ctx);
		auto proxy = (mindustry_maps_filters_LogicFilter_invoke_arc_func_Boolc_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_LogicFilter_invoke_arc_func_Boolc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$ToggleOption_java_lang_String_arc_func_Boolp_arc_func_Boolc(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_LogicFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter:apply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(37);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logicVars;
	((func_mindustry_logic_GlobalVars_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_update])(ctx, sp[0].o);
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_maps_filters_LogicFilter *) NULL_CHECK((frame[0].o)))->F_code;
	SM_mindustry_logic_LExecutor_runLogicScript_java_lang_String_int_boolean(ctx, sp[0].o, (clinit_mindustry_maps_filters_LogicFilter(ctx), (jint)SF_mindustry_maps_filters_LogicFilter_maxInstructionsExecution), ((jint)((mindustry_maps_filters_LogicFilter *) NULL_CHECK((frame[0].o)))->F_loop));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jchar M_mindustry_maps_filters_LogicFilter_icon_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jint(63460));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_LogicFilter_isPost_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter:isPost", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_LogicFilter_lambda$options$1_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter:lambda$options$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	((mindustry_maps_filters_LogicFilter *) NULL_CHECK((frame[0].o)))->F_loop = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_LogicFilter_lambda$options$0_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter:lambda$options$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_filters_LogicFilter *) NULL_CHECK((frame[0].o)))->F_loop);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_maps_filters_LogicFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_GenerateFilter(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/LogicFilter:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_LogicFilter(ctx);
	{
	LINE_NUMBER(13);
	clinit_mindustry_maps_filters_LogicFilter(ctx);
	SF_mindustry_maps_filters_LogicFilter_maxInstructionsExecution = (jint(6250000));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_LogicFilter[] {
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
	(void *) M_mindustry_maps_filters_LogicFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_LogicFilter_options_R_Array1_mindustry_maps_filters_FilterOption,
	(void *) M_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_LogicFilter_icon_R_char,
	(void *) M_mindustry_maps_filters_GenerateFilter_randomize,
	(void *) M_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean,
	(void *) M_mindustry_maps_filters_LogicFilter_isPost_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_maps_filters_LogicFilter_lambda$options$1_boolean,
	(void *) M_mindustry_maps_filters_LogicFilter_lambda$options$0_R_boolean,
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
	{ "lambda$options$1", "(Z)V" },
	{ "lambda$options$0", "()Z" },
};

static FieldMetadata fields[] {
	{ "maxInstructionsExecution", &class_int, (intptr_t) &SF_mindustry_maps_filters_LogicFilter_maxInstructionsExecution, "I", 9 },
	{ "code", &class_java_lang_String, offsetof(mindustry_maps_filters_LogicFilter, F_code), "Ljava/lang/String;", 1 },
	{ "loop", &class_boolean, offsetof(mindustry_maps_filters_LogicFilter, F_loop), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_LogicFilter, 0, "()V", 1 },
	{ "options", (intptr_t) M_mindustry_maps_filters_LogicFilter_options_R_Array1_mindustry_maps_filters_FilterOption, VTABLE_mindustry_maps_filters_LogicFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_LogicFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_LogicFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/world/Tiles;Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "icon", (intptr_t) M_mindustry_maps_filters_LogicFilter_icon_R_char, VTABLE_mindustry_maps_filters_LogicFilter_icon_R_char, "()C", 1 },
	{ "isPost", (intptr_t) M_mindustry_maps_filters_LogicFilter_isPost_R_boolean, VTABLE_mindustry_maps_filters_LogicFilter_isPost_R_boolean, "()Z", 1 },
	{ "lambda$options$1", (intptr_t) M_mindustry_maps_filters_LogicFilter_lambda$options$1_boolean, VTABLE_mindustry_maps_filters_LogicFilter_lambda$options$1_boolean, "(Z)V", 4098 },
	{ "lambda$options$0", (intptr_t) M_mindustry_maps_filters_LogicFilter_lambda$options$0_R_boolean, VTABLE_mindustry_maps_filters_LogicFilter_lambda$options$0_R_boolean, "()Z", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_filters_LogicFilter, 0, "()V", 8 },
};

Class class_mindustry_maps_filters_LogicFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/LogicFilter",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.size = sizeof(mindustry_maps_filters_LogicFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_LogicFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_LogicFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_LogicFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_LogicFilter = registerClass(&class_mindustry_maps_filters_LogicFilter);

}
