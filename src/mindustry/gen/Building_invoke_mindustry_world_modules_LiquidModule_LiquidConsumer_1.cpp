#include "mindustry/gen/Building_invoke_mindustry_world_modules_LiquidModule_LiquidConsumer_1.h"
#include "mindustry/gen/Building_invoke_mindustry_world_modules_LiquidModule_LiquidConsumer_1.h"
#include "java/lang/Object.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/modules/LiquidModule_LiquidConsumer.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1_accept_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/gen/Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1:accept", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1 *) self;
	((func_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float])(ctx, (jobject) proxy->F_field0, param0, param1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1[] {
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
	(void *) M_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1_accept_mindustry_type_Liquid_float,
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
	{ "accept", "(Lmindustry/type/Liquid;F)V" },
};

static jclass interfaces[] { &class_mindustry_world_modules_LiquidModule$LiquidConsumer, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_gen_Building, offsetof(mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1, F_field0), "Lmindustry/gen/Building;", 0 },
};

static MethodMetadata methods[] {
	{ "accept", (intptr_t) M_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1_accept_mindustry_type_Liquid_float, VTABLE_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1_accept_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 0 },
};

Class class_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1{
		.nativeName = (intptr_t) "mindustry/gen/Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1),
		.classVtable = (intptr_t) vtable_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1 = registerClass(&class_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1);

}

