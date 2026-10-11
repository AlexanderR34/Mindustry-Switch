#include "mindustry/entities/pattern/ShootHelix.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/entities/pattern/ShootHelix.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/pattern/ShootHelix_invoke_mindustry_entities_Mover_1.h"
#include "mindustry/entities/Mover.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_entities_pattern_ShootHelix(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_pattern_ShootHelix *) object;
}

void clinit_mindustry_entities_pattern_ShootHelix(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_pattern_ShootPattern(ctx);
}

void init_mindustry_entities_pattern_ShootHelix_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootHelix:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootHelix(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(9);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(7);
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_scl = (jfloat(2));
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_mag = (jfloat(1.5f));
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_offset = (jfloat(3.926991f));
	LINE_NUMBER(10);
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_scl = (frame[1].f);
	LINE_NUMBER(11);
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_mag = (frame[2].f);
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_pattern_ShootHelix_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootHelix:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootHelix(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(14);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(7);
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_scl = (jfloat(2));
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_mag = (jfloat(1.5f));
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_offset = (jfloat(3.926991f));
	LINE_NUMBER(15);
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_scl = (frame[1].f);
	LINE_NUMBER(16);
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_mag = (frame[2].f);
	LINE_NUMBER(17);
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_offset = (frame[3].f);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_pattern_ShootHelix(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootHelix:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootHelix(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(7);
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_scl = (jfloat(2));
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_mag = (jfloat(1.5f));
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_offset = (jfloat(3.926991f));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootHelix_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootHelix:shoot", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(25);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shots)) goto label_2;
	}
	{
	LINE_NUMBER(26);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_5;
	}
	{
	frame[8].i = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(27);
	sp[0].o = frame[2].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(0);
	jfloat temp3 = ((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_firstShotDelay) + (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shotDelay) * (jfloat((frame[4].i))));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_pattern_ShootHelix_invoke_mindustry_entities_Mover_1(ctx);
		auto proxy = (mindustry_entities_pattern_ShootHelix_invoke_mindustry_entities_Mover_1 *) gcAlloc(ctx, &class_mindustry_entities_pattern_ShootHelix_invoke_mindustry_entities_Mover_1);
		proxy->F_field1 = (frame[8].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float_mindustry_entities_Mover) resolveInterfaceMethod(ctx, &class_mindustry_entities_pattern_ShootPattern$BulletHandler, INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float_mindustry_entities_Mover, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(26);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(25);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootHelix_lambda$shoot$0_int_mindustry_gen_Bullet(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootHelix:lambda$shoot$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(28);
	sp[0].o = frame[2].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[2].o)))->F_time) + ((jfloat)((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat)((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_scl), (((jfloat)((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_mag) * (jfloat((frame[1].i)))));
	((func_mindustry_gen_Bullet_moveRelative_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_moveRelative_float_float])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_pattern_ShootHelix[] {
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
	(void *) M_mindustry_entities_pattern_ShootHelix_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable,
	(void *) M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler,
	(void *) M_mindustry_entities_pattern_ShootPattern_flip,
	(void *) M_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern,
	(void *) M_mindustry_entities_pattern_ShootHelix_lambda$shoot$0_int_mindustry_gen_Bullet,
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
	{ "lambda$shoot$0", "(ILmindustry/gen/Bullet;)V" },
};

static FieldMetadata fields[] {
	{ "scl", &class_float, offsetof(mindustry_entities_pattern_ShootHelix, F_scl), "F", 1 },
	{ "mag", &class_float, offsetof(mindustry_entities_pattern_ShootHelix, F_mag), "F", 1 },
	{ "offset", &class_float, offsetof(mindustry_entities_pattern_ShootHelix, F_offset), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootHelix_float_float, 0, "(FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootHelix_float_float_float, 0, "(FFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootHelix, 0, "()V", 1 },
	{ "shoot", (intptr_t) M_mindustry_entities_pattern_ShootHelix_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, VTABLE_mindustry_entities_pattern_ShootHelix_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;Ljava/lang/Runnable;)V", 1 },
	{ "lambda$shoot$0", (intptr_t) M_mindustry_entities_pattern_ShootHelix_lambda$shoot$0_int_mindustry_gen_Bullet, VTABLE_mindustry_entities_pattern_ShootHelix_lambda$shoot$0_int_mindustry_gen_Bullet, "(ILmindustry/gen/Bullet;)V", 4098 },
};

Class class_mindustry_entities_pattern_ShootHelix{
		.nativeName = (intptr_t) "mindustry/entities/pattern/ShootHelix",
		.parentClass = (intptr_t) &class_mindustry_entities_pattern_ShootPattern,
		.size = sizeof(mindustry_entities_pattern_ShootHelix),
		.classVtable = (intptr_t) vtable_mindustry_entities_pattern_ShootHelix,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_pattern_ShootHelix,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_pattern_ShootHelix,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_pattern_ShootHelix = registerClass(&class_mindustry_entities_pattern_ShootHelix);

}
