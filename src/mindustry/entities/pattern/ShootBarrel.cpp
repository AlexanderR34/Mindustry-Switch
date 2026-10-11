#include "mindustry/entities/pattern/ShootBarrel.h"
#include "java/lang/Object.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/entities/pattern/ShootBarrel.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_entities_pattern_ShootBarrel(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_pattern_ShootBarrel *) object;
	if (self->F_barrels)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_barrels)->clazz)->markFunction)((jobject) self->F_barrels, mark, depth + 1);
}

void clinit_mindustry_entities_pattern_ShootBarrel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_pattern_ShootPattern(ctx);
}

void init_mindustry_entities_pattern_ShootBarrel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootBarrel:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootBarrel(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(3)));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))) = (jfloat(0));
	((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK(sp[0].o))->F_barrels = (jref) sp[1].o;
	LINE_NUMBER(9);
	((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK((frame[0].o)))->F_barrelOffset = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootBarrel_flip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootBarrel:flip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK((frame[0].o)))->F_barrels;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK(sp[0].o))->F_barrels = (jref) (checkCast(ctx, getArrayClass(&class_float, 1), sp[1].o));
	LINE_NUMBER(14);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK((frame[0].o)))->F_barrels;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK((frame[0].o)))->F_barrels;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (jfloat(-1.0f)));
	LINE_NUMBER(16);
	sp[0].o = (jobject)((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK((frame[0].o)))->F_barrels;
	jint temp3 = (frame[1].i) + (jint(2));
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (jfloat(-1.0f)));
	LINE_NUMBER(14);
	INST_IINC(1, 3);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootBarrel_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootBarrel:shoot", 13 };
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
	jint temp0 = ((frame[4].i) + (frame[1].i)) + ((jint)((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK((frame[0].o)))->F_barrelOffset);
	sp[0].o = (jobject)((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK((frame[0].o)))->F_barrels;
	frame[5].i = ((temp0 % ((((jarray) nullCheck(ctx, sp[0].o))->length) / (jint(3)))) * (jint(3)));
	LINE_NUMBER(24);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK((frame[0].o)))->F_barrels;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK((frame[0].o)))->F_barrels;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[5].i) + (jint(1))));
	sp[1].o = (jobject)((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK((frame[0].o)))->F_barrels;
	((func_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_pattern_ShootPattern$BulletHandler, INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, temp2, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[5].i) + (jint(2))))), (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_firstShotDelay) + (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shotDelay) * (jfloat((frame[4].i))))));
	LINE_NUMBER(25);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
label_6:;
	{
	LINE_NUMBER(22);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_pattern_ShootBarrel[] {
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
	(void *) M_mindustry_entities_pattern_ShootBarrel_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable,
	(void *) M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler,
	(void *) M_mindustry_entities_pattern_ShootBarrel_flip,
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
	{ "barrels", getArrayClass(&class_float, 1), offsetof(mindustry_entities_pattern_ShootBarrel, F_barrels), "[F", 1 },
	{ "barrelOffset", &class_int, offsetof(mindustry_entities_pattern_ShootBarrel, F_barrelOffset), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootBarrel, 0, "()V", 1 },
	{ "flip", (intptr_t) M_mindustry_entities_pattern_ShootBarrel_flip, VTABLE_mindustry_entities_pattern_ShootBarrel_flip, "()V", 1 },
	{ "shoot", (intptr_t) M_mindustry_entities_pattern_ShootBarrel_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, VTABLE_mindustry_entities_pattern_ShootBarrel_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;Ljava/lang/Runnable;)V", 1 },
};

Class class_mindustry_entities_pattern_ShootBarrel{
		.nativeName = (intptr_t) "mindustry/entities/pattern/ShootBarrel",
		.parentClass = (intptr_t) &class_mindustry_entities_pattern_ShootPattern,
		.size = sizeof(mindustry_entities_pattern_ShootBarrel),
		.classVtable = (intptr_t) vtable_mindustry_entities_pattern_ShootBarrel,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_pattern_ShootBarrel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_pattern_ShootBarrel,
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
static bool registered_mindustry_entities_pattern_ShootBarrel = registerClass(&class_mindustry_entities_pattern_ShootBarrel);

}
