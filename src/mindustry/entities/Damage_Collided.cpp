#include "mindustry/entities/Damage_Collided.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Teamc.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "mindustry/entities/Damage_Collided.h"
#include "mindustry/entities/Damage.h"

extern "C" {


void mark_mindustry_entities_Damage$Collided(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_Damage$Collided *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
}

void clinit_mindustry_entities_Damage$Collided(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_Damage$Collided(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage$Collided:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage$Collided(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(667);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage$Collided:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(672);
	((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(673);
	((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(674);
	((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[3].o);
	LINE_NUMBER(675);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Damage$Collided_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage$Collided:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(680);
	((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_Damage$Collided[] {
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
	(void *) M_mindustry_entities_Damage$Collided_reset,
	(void *) M_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided,
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
	{ "reset", "()V" },
	{ "set", "(FFLmindustry/gen/Teamc;)Lmindustry/entities/Damage$Collided;" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_Damage$Collided, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_Damage$Collided, F_y), "F", 1 },
	{ "target", &class_mindustry_gen_Teamc, offsetof(mindustry_entities_Damage$Collided, F_target), "Lmindustry/gen/Teamc;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_Damage$Collided, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided, VTABLE_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided, "(FFLmindustry/gen/Teamc;)Lmindustry/entities/Damage$Collided;", 1 },
	{ "reset", (intptr_t) M_mindustry_entities_Damage$Collided_reset, VTABLE_mindustry_entities_Damage$Collided_reset, "()V", 1 },
};

Class class_mindustry_entities_Damage$Collided{
		.nativeName = (intptr_t) "mindustry/entities/Damage$Collided",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Damage$Collided),
		.classVtable = (intptr_t) vtable_mindustry_entities_Damage$Collided,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Damage$Collided,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_Damage$Collided,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_entities_Damage,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Damage$Collided = registerClass(&class_mindustry_entities_Damage$Collided);

}

