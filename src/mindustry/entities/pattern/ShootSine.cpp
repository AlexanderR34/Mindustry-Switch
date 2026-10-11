#include "mindustry/entities/pattern/ShootSine.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/entities/pattern/ShootSine.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_entities_pattern_ShootSine(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_pattern_ShootPattern(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_pattern_ShootSine *) object;
}

void clinit_mindustry_entities_pattern_ShootSine(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_pattern_ShootPattern(ctx);
}

void init_mindustry_entities_pattern_ShootSine_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootSine:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootSine(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(12);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_entities_pattern_ShootSine *) NULL_CHECK((frame[0].o)))->F_scl = (jfloat(4.0f));
	LINE_NUMBER(10);
	((mindustry_entities_pattern_ShootSine *) NULL_CHECK((frame[0].o)))->F_mag = (jfloat(20.0f));
	LINE_NUMBER(13);
	((mindustry_entities_pattern_ShootSine *) NULL_CHECK((frame[0].o)))->F_scl = (frame[1].f);
	LINE_NUMBER(14);
	((mindustry_entities_pattern_ShootSine *) NULL_CHECK((frame[0].o)))->F_mag = (frame[2].f);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_pattern_ShootSine(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootSine:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootSine(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_entities_pattern_ShootSine *) NULL_CHECK((frame[0].o)))->F_scl = (jfloat(4.0f));
	LINE_NUMBER(10);
	((mindustry_entities_pattern_ShootSine *) NULL_CHECK((frame[0].o)))->F_mag = (jfloat(20.0f));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootSine_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootSine:shoot", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(22);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shots)) goto label_2;
	}
	{
	LINE_NUMBER(23);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, (jfloat(((frame[4].i) + (frame[1].i)))), ((jfloat)((mindustry_entities_pattern_ShootSine *) NULL_CHECK((frame[0].o)))->F_scl), ((jfloat)((mindustry_entities_pattern_ShootSine *) NULL_CHECK((frame[0].o)))->F_mag));
	frame[5].f = temp0;
	LINE_NUMBER(24);
	((func_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_pattern_ShootPattern$BulletHandler, INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float, (frame[2].o)))(ctx, (frame[2].o), (jfloat(0)), (jfloat(0)), (frame[5].f), (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_firstShotDelay) + (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shotDelay) * (jfloat((frame[4].i))))));
	LINE_NUMBER(22);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_pattern_ShootSine[] {
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
	(void *) M_mindustry_entities_pattern_ShootSine_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable,
	(void *) M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler,
	(void *) M_mindustry_entities_pattern_ShootPattern_flip,
	(void *) M_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern,
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
	{ "shoot", "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;Ljava/lang/Runnable;)V" },
	{ "shoot", "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;)V" },
	{ "flip", "()V" },
	{ "copy", "()Lmindustry/entities/pattern/ShootPattern;" },
};

static FieldMetadata fields[] {
	{ "scl", &class_float, offsetof(mindustry_entities_pattern_ShootSine, F_scl), "F", 1 },
	{ "mag", &class_float, offsetof(mindustry_entities_pattern_ShootSine, F_mag), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootSine_float_float, 0, "(FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootSine, 0, "()V", 1 },
	{ "shoot", (intptr_t) M_mindustry_entities_pattern_ShootSine_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, VTABLE_mindustry_entities_pattern_ShootSine_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;Ljava/lang/Runnable;)V", 1 },
};

Class class_mindustry_entities_pattern_ShootSine{
		.nativeName = (intptr_t) "mindustry/entities/pattern/ShootSine",
		.parentClass = (intptr_t) &class_mindustry_entities_pattern_ShootPattern,
		.size = sizeof(mindustry_entities_pattern_ShootSine),
		.classVtable = (intptr_t) vtable_mindustry_entities_pattern_ShootSine,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_pattern_ShootSine,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_pattern_ShootSine,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_pattern_ShootSine = registerClass(&class_mindustry_entities_pattern_ShootSine);

}
