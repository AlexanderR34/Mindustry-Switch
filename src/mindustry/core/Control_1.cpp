#include "mindustry/core/Control_1.h"
#include "mindustry/core/Control_1.h"
#include "java/lang/Object.h"
#include "mindustry/world/WorldParams.h"
#include "mindustry/core/Control.h"

extern "C" {


void mark_mindustry_core_Control$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_WorldParams(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_core_Control$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_core_Control$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_WorldParams(ctx);
}

void init_mindustry_core_Control$1_mindustry_core_Control_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Control$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Control$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(492);
	((mindustry_core_Control$1 *) NULL_CHECK((frame[0].o)))->F_val$spawnPos = (frame[2].i);
	((mindustry_core_Control$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_WorldParams(ctx, (frame[0].o));
	LINE_NUMBER(493);
	((mindustry_world_WorldParams *) NULL_CHECK((frame[0].o)))->F_corePositionOverride = ((jint)((mindustry_core_Control$1 *) NULL_CHECK((frame[0].o)))->F_val$spawnPos);
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_core_Control$1[] {
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
	{ "val$spawnPos", &class_int, offsetof(mindustry_core_Control$1, F_val$spawnPos), "I", 4112 },
	{ "this$0", &class_mindustry_core_Control, offsetof(mindustry_core_Control$1, F_this$0), "Lmindustry/core/Control;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_Control$1_mindustry_core_Control_int, 0, "(Lmindustry/core/Control;I)V", 0 },
};

Class class_mindustry_core_Control$1{
		.nativeName = (intptr_t) "mindustry/core/Control$1",
		.parentClass = (intptr_t) &class_mindustry_world_WorldParams,
		.size = sizeof(mindustry_core_Control$1),
		.classVtable = (intptr_t) vtable_mindustry_core_Control$1,
		.staticInitializer = (intptr_t) clinit_mindustry_core_Control$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_Control$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_core_Control$1 = registerClass(&class_mindustry_core_Control$1);

}

