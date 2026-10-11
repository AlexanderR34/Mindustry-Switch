#include "mindustry/gen/CrawlUnit_invoke_arc_func_Boolf_16.h"
#include "java/lang/Object.h"
#include "mindustry/gen/CrawlUnit_invoke_arc_func_Boolf_16.h"
#include "mindustry/gen/CrawlUnit.h"
#include "arc/func/Boolf.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16_get_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/gen/CrawlUnit_invoke_arc_func_Boolf_16:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16 *) self;
	auto object = ((func_mindustry_gen_CrawlUnit_lambda$destroy$0_float_mindustry_gen_Building_R_boolean) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_gen_CrawlUnit_lambda$destroy$0_float_mindustry_gen_Building_R_boolean])(ctx, (jobject) proxy->F_field0, proxy->F_field1, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16[] {
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
	(void *) M_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16_get_java_lang_Object_R_boolean,
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
	{ "get", "(Ljava/lang/Object;)Z" },
};

static jclass interfaces[] { &class_arc_func_Boolf, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_gen_CrawlUnit, offsetof(mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16, F_field0), "Lmindustry/gen/CrawlUnit;", 0 },
	{ "field1", &class_float, offsetof(mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16, F_field1), "F", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16_get_java_lang_Object_R_boolean, VTABLE_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16_get_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 0 },
};

Class class_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16{
		.nativeName = (intptr_t) "mindustry/gen/CrawlUnit_invoke_arc_func_Boolf_16",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16),
		.classVtable = (intptr_t) vtable_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16,
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
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16 = registerClass(&class_mindustry_gen_CrawlUnit_invoke_arc_func_Boolf_16);

}
