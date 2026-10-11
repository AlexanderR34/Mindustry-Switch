#include "mindustry/ai/ControlPathfinder_Cluster.h"
#include "java/lang/Object.h"
#include "mindustry/ai/ControlPathfinder_Cluster.h"
#include "arc/struct/LongSeq.h"
#include "mindustry/ai/ControlPathfinder.h"
#include "arc/struct/IntSeq.h"

extern "C" {


void mark_mindustry_ai_ControlPathfinder$Cluster(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_ControlPathfinder$Cluster *) object;
	if (self->F_portals)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_portals)->clazz)->markFunction)((jobject) self->F_portals, mark, depth + 1);
	if (self->F_portalConnections)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_portalConnections)->clazz)->markFunction)((jobject) self->F_portalConnections, mark, depth + 1);
}

void clinit_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder$Cluster:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder$Cluster(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(214);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_IntSeq, (jint(4)));
	((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK(sp[0].o))->F_portals = (jref) sp[1].o;
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_arc_struct_LongSeq, 1), (jint(4)));
	((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK(sp[0].o))->F_portalConnections = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_ControlPathfinder$Cluster[] {
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
	{ "portals", getArrayClass(&class_arc_struct_IntSeq, 1), offsetof(mindustry_ai_ControlPathfinder$Cluster, F_portals), "[Larc/struct/IntSeq;", 0 },
	{ "portalConnections", getArrayClass(&class_arc_struct_LongSeq, 2), offsetof(mindustry_ai_ControlPathfinder$Cluster, F_portalConnections), "[[Larc/struct/LongSeq;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_ControlPathfinder$Cluster, 0, "()V", 0 },
};

Class class_mindustry_ai_ControlPathfinder$Cluster{
		.nativeName = (intptr_t) "mindustry/ai/ControlPathfinder$Cluster",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_ControlPathfinder$Cluster),
		.classVtable = (intptr_t) vtable_mindustry_ai_ControlPathfinder$Cluster,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_ControlPathfinder$Cluster,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_ControlPathfinder$Cluster,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ai_ControlPathfinder,
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
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_ControlPathfinder$Cluster = registerClass(&class_mindustry_ai_ControlPathfinder$Cluster);

}

