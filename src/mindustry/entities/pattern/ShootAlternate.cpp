#include "mindustry/entities/pattern/ShootAlternate.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/entities/pattern/ShootAlternate.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_entities_pattern_ShootAlternate(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_pattern_ShootAlternate *) object;
}

void clinit_mindustry_entities_pattern_ShootAlternate(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_pattern_ShootPattern(ctx);
}

void init_mindustry_entities_pattern_ShootAlternate_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootAlternate:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootAlternate(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(16);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_barrels = (jint(2));
	LINE_NUMBER(10);
	((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_spread = (jfloat(5.0f));
	LINE_NUMBER(12);
	((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_barrelOffset = (jint(0));
	LINE_NUMBER(14);
	((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(17);
	((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_spread = (frame[1].f);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_pattern_ShootAlternate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootAlternate:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootAlternate(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_barrels = (jint(2));
	LINE_NUMBER(10);
	((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_spread = (jfloat(5.0f));
	LINE_NUMBER(12);
	((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_barrelOffset = (jint(0));
	LINE_NUMBER(14);
	((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootAlternate_flip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootAlternate:flip", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_mirror) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK(sp[0].o))->F_mirror = sp[1].i;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootAlternate_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootAlternate:shoot", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(30);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shots)) goto label_2;
	}
	{
	LINE_NUMBER(31);
	frame[5].f = ((jfloat(((((frame[1].i) + (frame[4].i)) + ((jint)((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_barrelOffset)) % ((jint)((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_barrels)))) - ((jfloat((((jint)((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_barrels) - (jint(1))))) / (jfloat(2))));
	LINE_NUMBER(32);
	sp[0].o = frame[2].o;
	jfloat temp0 = (frame[5].f) * ((jfloat)((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_spread);
	jint temp1 = (jint)SM_arc_math_Mathf_sign_boolean_R_int(ctx, ((jint)((mindustry_entities_pattern_ShootAlternate *) NULL_CHECK((frame[0].o)))->F_mirror));
	((func_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_pattern_ShootPattern$BulletHandler, INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float, sp[0].o))(ctx, sp[0].o, (temp0 * (jfloat((-temp1)))), (jfloat(0)), (jfloat(0)), (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_firstShotDelay) + (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shotDelay) * (jfloat((frame[4].i))))));
	LINE_NUMBER(33);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
label_6:;
	{
	LINE_NUMBER(30);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_pattern_ShootAlternate[] {
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
	(void *) M_mindustry_entities_pattern_ShootAlternate_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable,
	(void *) M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler,
	(void *) M_mindustry_entities_pattern_ShootAlternate_flip,
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
	{ "barrels", &class_int, offsetof(mindustry_entities_pattern_ShootAlternate, F_barrels), "I", 1 },
	{ "spread", &class_float, offsetof(mindustry_entities_pattern_ShootAlternate, F_spread), "F", 1 },
	{ "barrelOffset", &class_int, offsetof(mindustry_entities_pattern_ShootAlternate, F_barrelOffset), "I", 1 },
	{ "mirror", &class_boolean, offsetof(mindustry_entities_pattern_ShootAlternate, F_mirror), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootAlternate_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootAlternate, 0, "()V", 1 },
	{ "flip", (intptr_t) M_mindustry_entities_pattern_ShootAlternate_flip, VTABLE_mindustry_entities_pattern_ShootAlternate_flip, "()V", 1 },
	{ "shoot", (intptr_t) M_mindustry_entities_pattern_ShootAlternate_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, VTABLE_mindustry_entities_pattern_ShootAlternate_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;Ljava/lang/Runnable;)V", 1 },
};

Class class_mindustry_entities_pattern_ShootAlternate{
		.nativeName = (intptr_t) "mindustry/entities/pattern/ShootAlternate",
		.parentClass = (intptr_t) &class_mindustry_entities_pattern_ShootPattern,
		.size = sizeof(mindustry_entities_pattern_ShootAlternate),
		.classVtable = (intptr_t) vtable_mindustry_entities_pattern_ShootAlternate,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_pattern_ShootAlternate,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_pattern_ShootAlternate,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_pattern_ShootAlternate = registerClass(&class_mindustry_entities_pattern_ShootAlternate);

}
