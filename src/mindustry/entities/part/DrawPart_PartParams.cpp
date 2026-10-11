#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "mindustry/entities/part/DrawPart.h"

extern "C" {


void mark_mindustry_entities_part_DrawPart$PartParams(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_part_DrawPart$PartParams *) object;
}

void clinit_mindustry_entities_part_DrawPart$PartParams(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartParams:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartParams(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_sideOverride = (jint(-1));
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_sideMultiplier = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartParams:set", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(32);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_warmup = (frame[1].f);
	LINE_NUMBER(33);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_reload = (frame[2].f);
	LINE_NUMBER(34);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_heat = (frame[4].f);
	LINE_NUMBER(35);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_recoil = (frame[5].f);
	LINE_NUMBER(36);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_smoothReload = (frame[3].f);
	LINE_NUMBER(37);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_charge = (frame[6].f);
	LINE_NUMBER(38);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_x = (frame[7].f);
	LINE_NUMBER(39);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_y = (frame[8].f);
	LINE_NUMBER(40);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[9].f);
	LINE_NUMBER(41);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_sideOverride = (jint(-1));
	LINE_NUMBER(42);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_life = (jfloat(0));
	LINE_NUMBER(43);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_sideMultiplier = (jint(1));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartParams:setRecoil", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(48);
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_recoil = (frame[1].f);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_part_DrawPart$PartParams[] {
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
	(void *) M_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams,
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
	{ "set", "(FFFFFFFFF)Lmindustry/entities/part/DrawPart$PartParams;" },
	{ "setRecoil", "(F)Lmindustry/entities/part/DrawPart$PartParams;" },
};

static FieldMetadata fields[] {
	{ "warmup", &class_float, offsetof(mindustry_entities_part_DrawPart$PartParams, F_warmup), "F", 1 },
	{ "reload", &class_float, offsetof(mindustry_entities_part_DrawPart$PartParams, F_reload), "F", 1 },
	{ "smoothReload", &class_float, offsetof(mindustry_entities_part_DrawPart$PartParams, F_smoothReload), "F", 1 },
	{ "heat", &class_float, offsetof(mindustry_entities_part_DrawPart$PartParams, F_heat), "F", 1 },
	{ "recoil", &class_float, offsetof(mindustry_entities_part_DrawPart$PartParams, F_recoil), "F", 1 },
	{ "life", &class_float, offsetof(mindustry_entities_part_DrawPart$PartParams, F_life), "F", 1 },
	{ "charge", &class_float, offsetof(mindustry_entities_part_DrawPart$PartParams, F_charge), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_part_DrawPart$PartParams, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_part_DrawPart$PartParams, F_y), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_part_DrawPart$PartParams, F_rotation), "F", 1 },
	{ "sideOverride", &class_int, offsetof(mindustry_entities_part_DrawPart$PartParams, F_sideOverride), "I", 1 },
	{ "sideMultiplier", &class_int, offsetof(mindustry_entities_part_DrawPart$PartParams, F_sideMultiplier), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_part_DrawPart$PartParams, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams, VTABLE_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams, "(FFFFFFFFF)Lmindustry/entities/part/DrawPart$PartParams;", 1 },
	{ "setRecoil", (intptr_t) M_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams, VTABLE_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams, "(F)Lmindustry/entities/part/DrawPart$PartParams;", 1 },
};

Class class_mindustry_entities_part_DrawPart$PartParams{
		.nativeName = (intptr_t) "mindustry/entities/part/DrawPart$PartParams",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_part_DrawPart$PartParams),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_DrawPart$PartParams,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_DrawPart$PartParams,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_part_DrawPart$PartParams,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_entities_part_DrawPart,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_DrawPart$PartParams = registerClass(&class_mindustry_entities_part_DrawPart$PartParams);

}

