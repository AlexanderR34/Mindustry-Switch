#include "mindustry/entities/comp/PowerGraphUpdaterComp.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/entities/comp/PowerGraphUpdaterComp.h"

extern "C" {


void mark_mindustry_entities_comp_PowerGraphUpdaterComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_PowerGraphUpdaterComp *) object;
	if (self->F_graph)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_graph)->clazz)->markFunction)((jobject) self->F_graph, mark, depth + 1);
}

void clinit_mindustry_entities_comp_PowerGraphUpdaterComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_PowerGraphUpdaterComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PowerGraphUpdaterComp:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PowerGraphUpdaterComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PowerGraphUpdaterComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PowerGraphUpdaterComp:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)((mindustry_entities_comp_PowerGraphUpdaterComp *) NULL_CHECK((frame[0].o)))->F_graph;
	((func_mindustry_world_blocks_power_PowerGraph_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_update])(ctx, sp[0].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_PowerGraphUpdaterComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PowerGraphUpdaterComp_update,
	(void *) nullptr,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Entityc, };

static FieldMetadata fields[] {
	{ "graph", &class_mindustry_world_blocks_power_PowerGraph, offsetof(mindustry_entities_comp_PowerGraphUpdaterComp, F_graph), "Lmindustry/world/blocks/power/PowerGraph;", 129 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_PowerGraphUpdaterComp, 0, "()V", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_PowerGraphUpdaterComp_update, VTABLE_mindustry_entities_comp_PowerGraphUpdaterComp_update, "()V", 1 },
};

Class class_mindustry_entities_comp_PowerGraphUpdaterComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/PowerGraphUpdaterComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_PowerGraphUpdaterComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_PowerGraphUpdaterComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_PowerGraphUpdaterComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_PowerGraphUpdaterComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_PowerGraphUpdaterComp = registerClass(&class_mindustry_entities_comp_PowerGraphUpdaterComp);

}
