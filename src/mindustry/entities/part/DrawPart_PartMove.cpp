#include "mindustry/entities/part/DrawPart_PartMove.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/entities/part/DrawPart_PartMove.h"
#include "mindustry/entities/part/DrawPart.h"

extern "C" {


void mark_mindustry_entities_part_DrawPart$PartMove(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_part_DrawPart$PartMove *) object;
	if (self->F_progress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_progress)->clazz)->markFunction)((jobject) self->F_progress, mark, depth + 1);
}

void clinit_mindustry_entities_part_DrawPart$PartMove(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_part_DrawPart$PartMove_mindustry_entities_part_DrawPart$PartProgress_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartMove:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartMove(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(57);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(58);
	((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[0].o)))->F_progress = (jref) (frame[1].o);
	LINE_NUMBER(59);
	((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(60);
	((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].f);
	LINE_NUMBER(61);
	((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[0].o)))->F_gx = (frame[4].f);
	LINE_NUMBER(62);
	((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[0].o)))->F_gy = (frame[5].f);
	LINE_NUMBER(63);
	((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[0].o)))->F_rot = (frame[6].f);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_part_DrawPart$PartMove_mindustry_entities_part_DrawPart$PartProgress_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartMove:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartMove(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(66);
	init_mindustry_entities_part_DrawPart$PartMove_mindustry_entities_part_DrawPart$PartProgress_float_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jfloat(0)), (jfloat(0)), (frame[4].f));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_part_DrawPart$PartMove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartMove:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartMove(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(69);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_part_DrawPart$PartMove[] {
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
};

static FieldMetadata fields[] {
	{ "progress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_entities_part_DrawPart$PartMove, F_progress), "Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_part_DrawPart$PartMove, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_part_DrawPart$PartMove, F_y), "F", 1 },
	{ "gx", &class_float, offsetof(mindustry_entities_part_DrawPart$PartMove, F_gx), "F", 1 },
	{ "gy", &class_float, offsetof(mindustry_entities_part_DrawPart$PartMove, F_gy), "F", 1 },
	{ "rot", &class_float, offsetof(mindustry_entities_part_DrawPart$PartMove, F_rot), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_part_DrawPart$PartMove_mindustry_entities_part_DrawPart$PartProgress_float_float_float_float_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FFFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_part_DrawPart$PartMove_mindustry_entities_part_DrawPart$PartProgress_float_float_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_part_DrawPart$PartMove, 0, "()V", 1 },
};

Class class_mindustry_entities_part_DrawPart$PartMove{
		.nativeName = (intptr_t) "mindustry/entities/part/DrawPart$PartMove",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_part_DrawPart$PartMove),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_DrawPart$PartMove,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_DrawPart$PartMove,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_part_DrawPart$PartMove,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_entities_part_DrawPart,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_DrawPart$PartMove = registerClass(&class_mindustry_entities_part_DrawPart$PartMove);

}

