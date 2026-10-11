#include "mindustry/world/blocks/distribution/MassDriver_DriverBulletData.h"
#include "mindustry/world/blocks/distribution/MassDriver_MassDriverBuild.h"
#include "mindustry/world/blocks/distribution/MassDriver.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "mindustry/Vars.h"
#include "mindustry/world/blocks/distribution/MassDriver_DriverBulletData.h"

extern "C" {


void mark_mindustry_world_blocks_distribution_MassDriver$DriverBulletData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) object;
	if (self->F_from)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_from)->clazz)->markFunction)((jobject) self->F_from, mark, depth + 1);
	if (self->F_to)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_to)->clazz)->markFunction)((jobject) self->F_to, mark, depth + 1);
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_mindustry_world_blocks_distribution_MassDriver$DriverBulletData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_distribution_MassDriver$DriverBulletData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$DriverBulletData:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_MassDriver$DriverBulletData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(110);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_MassDriver$DriverBulletData_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$DriverBulletData:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[0].o)))->F_from = (jref) (jobject(nullptr));
	LINE_NUMBER(117);
	((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[0].o)))->F_to = (jref) (jobject(nullptr));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_distribution_MassDriver$DriverBulletData[] {
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
	(void *) M_mindustry_world_blocks_distribution_MassDriver$DriverBulletData_reset,
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
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "from", &class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, offsetof(mindustry_world_blocks_distribution_MassDriver$DriverBulletData, F_from), "Lmindustry/world/blocks/distribution/MassDriver$MassDriverBuild;", 1 },
	{ "to", &class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, offsetof(mindustry_world_blocks_distribution_MassDriver$DriverBulletData, F_to), "Lmindustry/world/blocks/distribution/MassDriver$MassDriverBuild;", 1 },
	{ "items", getArrayClass(&class_int, 1), offsetof(mindustry_world_blocks_distribution_MassDriver$DriverBulletData, F_items), "[I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_distribution_MassDriver$DriverBulletData, 0, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$DriverBulletData_reset, VTABLE_mindustry_world_blocks_distribution_MassDriver$DriverBulletData_reset, "()V", 1 },
};

Class class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData{
		.nativeName = (intptr_t) "mindustry/world/blocks/distribution/MassDriver$DriverBulletData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_distribution_MassDriver$DriverBulletData),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_distribution_MassDriver$DriverBulletData,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_distribution_MassDriver$DriverBulletData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_distribution_MassDriver$DriverBulletData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_distribution_MassDriver,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_distribution_MassDriver$DriverBulletData = registerClass(&class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData);

}

