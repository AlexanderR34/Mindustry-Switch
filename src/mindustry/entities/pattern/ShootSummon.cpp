#include "mindustry/entities/pattern/ShootSummon.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/util/Tmp.h"
#include "mindustry/entities/pattern/ShootSummon.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_entities_pattern_ShootSummon(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_pattern_ShootSummon *) object;
}

void clinit_mindustry_entities_pattern_ShootSummon(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_pattern_ShootPattern(ctx);
}

void init_mindustry_entities_pattern_ShootSummon_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootSummon:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootSummon(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(9);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((mindustry_entities_pattern_ShootSummon *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(11);
	((mindustry_entities_pattern_ShootSummon *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(12);
	((mindustry_entities_pattern_ShootSummon *) NULL_CHECK((frame[0].o)))->F_radius = (frame[3].f);
	LINE_NUMBER(13);
	((mindustry_entities_pattern_ShootSummon *) NULL_CHECK((frame[0].o)))->F_spread = (frame[4].f);
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_pattern_ShootSummon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootSummon:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootSummon(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootSummon_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootSummon:shoot", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(21);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shots)) goto label_2;
	}
	{
	LINE_NUMBER(22);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(360.0f)));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_entities_pattern_ShootSummon *) NULL_CHECK((frame[0].o)))->F_radius));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(24);
	sp[0].o = frame[2].o;
	jfloat temp2 = (jfloat)((mindustry_entities_pattern_ShootSummon *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp4 = (jfloat)((mindustry_entities_pattern_ShootSummon *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_pattern_ShootSummon *) NULL_CHECK((frame[0].o)))->F_spread));
	((func_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_pattern_ShootPattern$BulletHandler, INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp3, temp5, temp6, (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_firstShotDelay) + (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shotDelay) * (jfloat((frame[4].i))))));
	LINE_NUMBER(21);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_pattern_ShootSummon[] {
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
	(void *) M_mindustry_entities_pattern_ShootSummon_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable,
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
	{ "x", &class_float, offsetof(mindustry_entities_pattern_ShootSummon, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_pattern_ShootSummon, F_y), "F", 1 },
	{ "radius", &class_float, offsetof(mindustry_entities_pattern_ShootSummon, F_radius), "F", 1 },
	{ "spread", &class_float, offsetof(mindustry_entities_pattern_ShootSummon, F_spread), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootSummon_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootSummon, 0, "()V", 1 },
	{ "shoot", (intptr_t) M_mindustry_entities_pattern_ShootSummon_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, VTABLE_mindustry_entities_pattern_ShootSummon_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;Ljava/lang/Runnable;)V", 1 },
};

Class class_mindustry_entities_pattern_ShootSummon{
		.nativeName = (intptr_t) "mindustry/entities/pattern/ShootSummon",
		.parentClass = (intptr_t) &class_mindustry_entities_pattern_ShootPattern,
		.size = sizeof(mindustry_entities_pattern_ShootSummon),
		.classVtable = (intptr_t) vtable_mindustry_entities_pattern_ShootSummon,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_pattern_ShootSummon,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_pattern_ShootSummon,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_pattern_ShootSummon = registerClass(&class_mindustry_entities_pattern_ShootSummon);

}
