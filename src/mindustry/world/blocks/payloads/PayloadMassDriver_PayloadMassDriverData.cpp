#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadMassDriverData.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadMassDriverData.h"
#include "mindustry/world/blocks/payloads/Payload.h"

extern "C" {


void mark_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) object;
	if (self->F_payload)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payload)->clazz)->markFunction)((jobject) self->F_payload, mark, depth + 1);
}

void clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData_float_float_float_float_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadMassDriverData:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(519);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(520);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(521);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(522);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[0].o)))->F_ox = (frame[3].f);
	LINE_NUMBER(523);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[0].o)))->F_oy = (frame[4].f);
	LINE_NUMBER(524);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[0].o)))->F_payload = (jref) (frame[5].o);
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData[] {
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
	{ "x", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData, F_y), "F", 1 },
	{ "ox", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData, F_ox), "F", 1 },
	{ "oy", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData, F_oy), "F", 1 },
	{ "payload", &class_mindustry_world_blocks_payloads_Payload, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData, F_payload), "Lmindustry/world/blocks/payloads/Payload;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData_float_float_float_float_mindustry_world_blocks_payloads_Payload, 0, "(FFFFLmindustry/world/blocks/payloads/Payload;)V", 1 },
};

Class class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadMassDriverData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadMassDriver,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData = registerClass(&class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData);

}

