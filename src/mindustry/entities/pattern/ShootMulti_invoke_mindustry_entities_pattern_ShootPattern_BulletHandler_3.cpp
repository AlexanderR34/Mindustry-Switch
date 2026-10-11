#include "mindustry/entities/pattern/ShootMulti_invoke_mindustry_entities_pattern_ShootPattern_BulletHandler_3.h"
#include "mindustry/entities/pattern/ShootMulti_invoke_mindustry_entities_pattern_ShootPattern_BulletHandler_3.h"
#include "java/lang/Object.h"
#include "mindustry/entities/pattern/ShootMulti.h"
#include "mindustry/entities/Mover.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"

extern "C" {


void mark_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field5)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field5)->clazz)->markFunction)((jobject) self->F_field5, mark, depth + 1);
}

void clinit_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3_shoot_float_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3:shoot", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3 *) self;
	SM_mindustry_entities_pattern_ShootMulti_lambda$shoot$1_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover_float_float_float_float_mindustry_entities_Mover(ctx, (jobject) proxy->F_field0, proxy->F_field1, proxy->F_field2, proxy->F_field3, proxy->F_field4, (jobject) proxy->F_field5, param0, param1, param2, param3, param4);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3[] {
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
	(void *) M_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float,
	(void *) M_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3_shoot_float_float_float_float_mindustry_entities_Mover,
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
	{ "shoot", "(FFFF)V" },
	{ "shoot", "(FFFFLmindustry/entities/Mover;)V" },
};

static jclass interfaces[] { &class_mindustry_entities_pattern_ShootPattern$BulletHandler, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_entities_pattern_ShootPattern$BulletHandler, offsetof(mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3, F_field0), "Lmindustry/entities/pattern/ShootPattern$BulletHandler;", 0 },
	{ "field1", &class_float, offsetof(mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3, F_field1), "F", 0 },
	{ "field2", &class_float, offsetof(mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3, F_field2), "F", 0 },
	{ "field3", &class_float, offsetof(mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3, F_field3), "F", 0 },
	{ "field4", &class_float, offsetof(mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3, F_field4), "F", 0 },
	{ "field5", &class_mindustry_entities_Mover, offsetof(mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3, F_field5), "Lmindustry/entities/Mover;", 0 },
};

static MethodMetadata methods[] {
	{ "shoot", (intptr_t) M_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3_shoot_float_float_float_float_mindustry_entities_Mover, VTABLE_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3_shoot_float_float_float_float_mindustry_entities_Mover, "(FFFFLmindustry/entities/Mover;)V", 0 },
};

Class class_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3{
		.nativeName = (intptr_t) "mindustry/entities/pattern/ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3),
		.classVtable = (intptr_t) vtable_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3 = registerClass(&class_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3);

}

