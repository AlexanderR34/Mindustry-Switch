#include "mindustry/entities/pattern/ShootMulti.h"
#include "mindustry/entities/pattern/ShootMulti_invoke_mindustry_entities_pattern_ShootPattern_BulletHandler_2.h"
#include "mindustry/entities/pattern/ShootMulti_invoke_mindustry_entities_pattern_ShootPattern_BulletHandler_3.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/pattern/ShootMulti_invoke_mindustry_entities_Mover_1.h"
#include "mindustry/entities/pattern/ShootMulti.h"
#include "mindustry/entities/Mover.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_entities_pattern_ShootMulti(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_pattern_ShootMulti *) object;
	if (self->F_source)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_source)->clazz)->markFunction)((jobject) self->F_source, mark, depth + 1);
	if (self->F_dest)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dest)->clazz)->markFunction)((jobject) self->F_dest, mark, depth + 1);
}

void clinit_mindustry_entities_pattern_ShootMulti(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_pattern_ShootPattern(ctx);
}

void init_mindustry_entities_pattern_ShootMulti_mindustry_entities_pattern_ShootPattern_Array1_mindustry_entities_pattern_ShootPattern(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootMulti:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootMulti(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(9);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_pattern_ShootPattern, (jint(0)));
	((mindustry_entities_pattern_ShootMulti *) NULL_CHECK(sp[0].o))->F_dest = (jref) sp[1].o;
	LINE_NUMBER(10);
	((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_source = (jref) (frame[1].o);
	LINE_NUMBER(11);
	((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_dest = (jref) (frame[2].o);
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_pattern_ShootMulti(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootMulti:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootMulti(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_mindustry_entities_pattern_ShootPattern(ctx, (frame[0].o));
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_pattern_ShootPattern, (jint(0)));
	((mindustry_entities_pattern_ShootMulti *) NULL_CHECK(sp[0].o))->F_dest = (jref) sp[1].o;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootMulti_flip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootMulti:flip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_source;
	sp[1].o = (jobject)((func_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern])(ctx, sp[1].o);
	((mindustry_entities_pattern_ShootMulti *) NULL_CHECK(sp[0].o))->F_source = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_source;
	((func_mindustry_entities_pattern_ShootPattern_flip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_flip])(ctx, sp[0].o);
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_dest;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_entities_pattern_ShootMulti *) NULL_CHECK(sp[0].o))->F_dest = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_entities_pattern_ShootPattern, 1), sp[1].o));
	LINE_NUMBER(23);
	frame[1].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_dest;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_dest;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_dest;
	sp[1].o = (jobject)((func_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))))->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_dest;
	((func_mindustry_entities_pattern_ShootPattern_flip) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_flip])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	LINE_NUMBER(23);
	INST_IINC(1, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootMulti_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootMulti:shoot", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_source;
	jint temp0 = frame[1].i;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_2(ctx);
		auto proxy = (mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_2 *) gcAlloc(ctx, &class_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_2);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable])(ctx, sp[0].o, temp0, sp[1].o, (frame[3].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_pattern_ShootMulti_lambda$shoot$0_int_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootMulti:lambda$shoot$0", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_entities_pattern_ShootMulti *) NULL_CHECK((frame[0].o)))->F_dest;
	frame[8].o = sp[0].o;
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_3:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_4;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(33);
	sp[0].o = frame[11].o;
	jint temp0 = frame[1].i;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3(ctx);
		auto proxy = (mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3 *) gcAlloc(ctx, &class_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_3);
		proxy->F_field5 = (jref) (frame[7].o);
		proxy->F_field4 = (frame[6].f);
		proxy->F_field3 = (frame[5].f);
		proxy->F_field2 = (frame[4].f);
		proxy->F_field1 = (frame[3].f);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable])(ctx, sp[0].o, temp0, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(32);
	INST_IINC(10, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_pattern_ShootMulti_lambda$shoot$1_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover_float_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jobject param10) {
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootMulti:lambda$shoot$1", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootMulti(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	frame[10].o = param10;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) + (frame[6].f);
	jfloat temp1 = (frame[2].f) + (frame[7].f);
	jfloat temp2 = (frame[3].f) + (frame[8].f);
	jfloat temp3 = (frame[4].f) + (frame[9].f);
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp[4].f = temp3;
	sp += 5;
	if ((frame[5].o) != nullptr) goto label_1;
	}
	INST_ALOAD(10);
	if ((--sp)->o != nullptr) goto label_1;
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	{ /* InvokeDynamic */
		clinit_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_Mover_1(ctx);
		auto proxy = (mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_Mover_1 *) gcAlloc(ctx, &class_mindustry_entities_pattern_ShootMulti_invoke_mindustry_entities_Mover_1);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	}
label_2:;
	{
	sp -= 6;
	((func_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float_mindustry_entities_Mover) resolveInterfaceMethod(ctx, &class_mindustry_entities_pattern_ShootPattern$BulletHandler, INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float_mindustry_entities_Mover, sp[0].o))(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].f, sp[5].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_pattern_ShootMulti_lambda$shoot$2_mindustry_entities_Mover_mindustry_entities_Mover_mindustry_gen_Bullet(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/pattern/ShootMulti:lambda$shoot$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_pattern_ShootMulti(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(35);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	((func_mindustry_entities_Mover_move_mindustry_gen_Bullet) resolveInterfaceMethod(ctx, &class_mindustry_entities_Mover, INDEX_mindustry_entities_Mover_move_mindustry_gen_Bullet, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(36);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	((func_mindustry_entities_Mover_move_mindustry_gen_Bullet) resolveInterfaceMethod(ctx, &class_mindustry_entities_Mover, INDEX_mindustry_entities_Mover_move_mindustry_gen_Bullet, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	}
label_2:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_pattern_ShootMulti[] {
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
	(void *) M_mindustry_entities_pattern_ShootMulti_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable,
	(void *) M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler,
	(void *) M_mindustry_entities_pattern_ShootMulti_flip,
	(void *) M_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern,
	(void *) M_mindustry_entities_pattern_ShootMulti_lambda$shoot$0_int_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover,
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
	{ "lambda$shoot$0", "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;FFFFLmindustry/entities/Mover;)V" },
};

static FieldMetadata fields[] {
	{ "source", &class_mindustry_entities_pattern_ShootPattern, offsetof(mindustry_entities_pattern_ShootMulti, F_source), "Lmindustry/entities/pattern/ShootPattern;", 1 },
	{ "dest", getArrayClass(&class_mindustry_entities_pattern_ShootPattern, 1), offsetof(mindustry_entities_pattern_ShootMulti, F_dest), "[Lmindustry/entities/pattern/ShootPattern;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootMulti_mindustry_entities_pattern_ShootPattern_Array1_mindustry_entities_pattern_ShootPattern, 0, "(Lmindustry/entities/pattern/ShootPattern;[Lmindustry/entities/pattern/ShootPattern;)V", 129 },
	{ "<init>", (intptr_t) init_mindustry_entities_pattern_ShootMulti, 0, "()V", 1 },
	{ "flip", (intptr_t) M_mindustry_entities_pattern_ShootMulti_flip, VTABLE_mindustry_entities_pattern_ShootMulti_flip, "()V", 1 },
	{ "shoot", (intptr_t) M_mindustry_entities_pattern_ShootMulti_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, VTABLE_mindustry_entities_pattern_ShootMulti_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable, "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;Ljava/lang/Runnable;)V", 1 },
	{ "lambda$shoot$0", (intptr_t) M_mindustry_entities_pattern_ShootMulti_lambda$shoot$0_int_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover, VTABLE_mindustry_entities_pattern_ShootMulti_lambda$shoot$0_int_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover, "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;FFFFLmindustry/entities/Mover;)V", 4098 },
	{ "lambda$shoot$1", (intptr_t) SM_mindustry_entities_pattern_ShootMulti_lambda$shoot$1_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover_float_float_float_float_mindustry_entities_Mover, 0, "(Lmindustry/entities/pattern/ShootPattern$BulletHandler;FFFFLmindustry/entities/Mover;FFFFLmindustry/entities/Mover;)V", 4106 },
	{ "lambda$shoot$2", (intptr_t) SM_mindustry_entities_pattern_ShootMulti_lambda$shoot$2_mindustry_entities_Mover_mindustry_entities_Mover_mindustry_gen_Bullet, 0, "(Lmindustry/entities/Mover;Lmindustry/entities/Mover;Lmindustry/gen/Bullet;)V", 4106 },
};

Class class_mindustry_entities_pattern_ShootMulti{
		.nativeName = (intptr_t) "mindustry/entities/pattern/ShootMulti",
		.parentClass = (intptr_t) &class_mindustry_entities_pattern_ShootPattern,
		.size = sizeof(mindustry_entities_pattern_ShootMulti),
		.classVtable = (intptr_t) vtable_mindustry_entities_pattern_ShootMulti,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_pattern_ShootMulti,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_pattern_ShootMulti,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_pattern_ShootMulti = registerClass(&class_mindustry_entities_pattern_ShootMulti);

}
