#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild_invoke_arc_math_Angles_ParticleConsumer_1.h"
#include "arc/math/Angles_ParticleConsumer.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild_invoke_arc_math_Angles_ParticleConsumer_1.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild.h"

extern "C" {


void mark_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1_accept_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1:accept", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1 *) self;
	((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$drawLaunch$0_float_float_float_float_float_float) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$drawLaunch$0_float_float_float_float_float_float])(ctx, (jobject) proxy->F_field0, proxy->F_field1, proxy->F_field2, param0, param1, param2, param3);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1[] {
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
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1_accept_float_float_float_float,
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
	{ "accept", "(FFFF)V" },
};

static jclass interfaces[] { &class_arc_math_Angles$ParticleConsumer, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1, F_field0), "Lmindustry/world/blocks/campaign/Accelerator$AcceleratorBuild;", 0 },
	{ "field1", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1, F_field1), "F", 0 },
	{ "field2", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1, F_field2), "F", 0 },
};

static MethodMetadata methods[] {
	{ "accept", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1_accept_float_float_float_float, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1_accept_float_float_float_float, "(FFFF)V", 0 },
};

Class class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1{
		.nativeName = (intptr_t) "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1 = registerClass(&class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1);

}

