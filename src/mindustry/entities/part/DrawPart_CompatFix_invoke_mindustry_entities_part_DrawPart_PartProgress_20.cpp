#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_20.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "arc/math/Interp.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_20.h"
#include "mindustry/entities/part/DrawPart_CompatFix.h"

extern "C" {


void mark_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20_get_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20 *) self;
	auto object = SM_mindustry_entities_part_DrawPart$CompatFix_lambda$curve$1_arc_math_Interp_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20[] {
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
	(void *) M_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20_get_mindustry_entities_part_DrawPart$PartParams_R_float,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_R_float,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_inv_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_slope_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_clamp_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_add_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_add_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_curve_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_sustain_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_shorten_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_compress_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_blend_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_mul_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_mul_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_min_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_absin_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_mod_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_loop_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_apply_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartFunc_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress,
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
	{ "get", "(Lmindustry/entities/part/DrawPart$PartParams;)F" },
	{ "getClamp", "(Lmindustry/entities/part/DrawPart$PartParams;)F" },
	{ "getClamp", "(Lmindustry/entities/part/DrawPart$PartParams;Z)F" },
	{ "inv", "()Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "slope", "()Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "clamp", "()Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "add", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "add", "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "delay", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "curve", "(FF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "sustain", "(FFF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "shorten", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "compress", "(FF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "blend", "(Lmindustry/entities/part/DrawPart$PartProgress;F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "mul", "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "mul", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "min", "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "sin", "(FFF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "sin", "(FF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "absin", "(FF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "mod", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "loop", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "apply", "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartFunc;)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "curve", "(Larc/math/Interp;)Lmindustry/entities/part/DrawPart$PartProgress;" },
};

static jclass interfaces[] { &class_mindustry_entities_part_DrawPart$PartProgress, };

static FieldMetadata fields[] {
	{ "field0", &class_arc_math_Interp, offsetof(mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20, F_field0), "Larc/math/Interp;", 0 },
	{ "field1", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20, F_field1), "Lmindustry/entities/part/DrawPart$PartProgress;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20_get_mindustry_entities_part_DrawPart$PartParams_R_float, VTABLE_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20_get_mindustry_entities_part_DrawPart$PartParams_R_float, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 0 },
};

Class class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20{
		.nativeName = (intptr_t) "mindustry/entities/part/DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20 = registerClass(&class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_20);

}

