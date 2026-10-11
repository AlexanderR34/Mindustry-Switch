#include "mindustry/entities/pattern/ShootPattern.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Cloneable.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/CloneNotSupportedException.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "java/lang/Throwable.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_entities_pattern_ShootPattern(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_pattern_ShootPattern *) object;
}

void clinit_mindustry_entities_pattern_ShootPattern(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_pattern_ShootPattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootPattern:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootPattern(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shots = (jint(1));
	LINE_NUMBER(11);
	((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_firstShotDelay = (jfloat(0));
	LINE_NUMBER(13);
	((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shotDelay = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootPattern:shoot", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(18);
	((func_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler])(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootPattern:shoot", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(23);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= ((jint)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shots)) goto label_2;
	}
	{
	LINE_NUMBER(24);
	((func_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_pattern_ShootPattern$BulletHandler, INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float, (frame[2].o)))(ctx, (frame[2].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_firstShotDelay) + (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shotDelay) * (jfloat((frame[3].i))))));
	LINE_NUMBER(23);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootPattern_flip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootPattern:flip", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootPattern:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = checkCast(ctx, &class_mindustry_entities_pattern_ShootPattern, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(36);
	frame[1].o = sp[0].o;
	LINE_NUMBER(37);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"impending doom"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_pattern_ShootPattern[] {
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
	(void *) M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable,
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

static jclass interfaces[] { &class_java_lang_Cloneable, };

static jclass innerClasses[] {
	&class_mindustry_entities_pattern_ShootPattern$BulletHandler,
};

static FieldMetadata fields[] {
	{ "shots", &class_int, offsetof(mindustry_entities_pattern_ShootPattern, F_shots), "I", 1 },
	{ "firstShotDelay", &class_float, offsetof(mindustry_entities_pattern_ShootPattern, F_firstShotDelay), "F", 1 },
	{ "shotDelay", &class_float, offsetof(mindustry_entities_pattern_ShootPattern, F_shotDelay), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootPattern, 0, "()V", 1 },
	{ "shoot", (intptr_t) M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, VTABLE_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;Ljava/lang/Runnable;)V", 1 },
	{ "shoot", (intptr_t) M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler, VTABLE_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler, "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;)V", 1 },
	{ "flip", (intptr_t) M_mindustry_entities_pattern_ShootPattern_flip, VTABLE_mindustry_entities_pattern_ShootPattern_flip, "()V", 1 },
	{ "copy", (intptr_t) M_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern, VTABLE_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern, "()Lmindustry/entities/pattern/ShootPattern;", 1 },
};

Class class_mindustry_entities_pattern_ShootPattern{
		.nativeName = (intptr_t) "mindustry/entities/pattern/ShootPattern",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_pattern_ShootPattern),
		.classVtable = (intptr_t) vtable_mindustry_entities_pattern_ShootPattern,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_pattern_ShootPattern,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_pattern_ShootPattern,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_pattern_ShootPattern = registerClass(&class_mindustry_entities_pattern_ShootPattern);

}
