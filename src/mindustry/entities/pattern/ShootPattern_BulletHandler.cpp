#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "java/lang/Object.h"
#include "mindustry/entities/Mover.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"

extern "C" {


void mark_mindustry_entities_pattern_ShootPattern$BulletHandler(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_pattern_ShootPattern$BulletHandler *) object;
}

void clinit_mindustry_entities_pattern_ShootPattern$BulletHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootPattern$BulletHandler:shoot", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(49);
	((func_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float_mindustry_entities_Mover) resolveInterfaceMethod(ctx, &class_mindustry_entities_pattern_ShootPattern$BulletHandler, INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float_mindustry_entities_Mover, (frame[0].o)))(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (jobject(nullptr)));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_pattern_ShootPattern$BulletHandler[] {
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
	(void *) nullptr,
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

static MethodMetadata methods[] {
	{ "shoot", (intptr_t) M_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float, INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float, "(FFFF)V", 1 },
	{ "shoot", 0, INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float_mindustry_entities_Mover, "(FFFFLmindustry/entities/Mover;)V", 1025 },
};

Class class_mindustry_entities_pattern_ShootPattern$BulletHandler{
		.nativeName = (intptr_t) "mindustry/entities/pattern/ShootPattern$BulletHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_pattern_ShootPattern$BulletHandler),
		.classVtable = (intptr_t) vtable_mindustry_entities_pattern_ShootPattern$BulletHandler,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_pattern_ShootPattern$BulletHandler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_pattern_ShootPattern$BulletHandler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_entities_pattern_ShootPattern,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_pattern_ShootPattern$BulletHandler = registerClass(&class_mindustry_entities_pattern_ShootPattern$BulletHandler);

}

