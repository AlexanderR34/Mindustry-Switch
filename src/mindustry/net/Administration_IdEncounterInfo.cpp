#include "mindustry/net/Administration_IdEncounterInfo.h"
#include "mindustry/net/Administration_IdEncounterInfo.h"
#include "java/lang/Object.h"
#include "mindustry/net/Administration.h"
#include "arc/struct/ObjectSet.h"

extern "C" {


void mark_mindustry_net_Administration$IdEncounterInfo(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Administration$IdEncounterInfo *) object;
	if (self->F_ids)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ids)->clazz)->markFunction)((jobject) self->F_ids, mark, depth + 1);
}

void clinit_mindustry_net_Administration$IdEncounterInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_Administration$IdEncounterInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$IdEncounterInfo:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$IdEncounterInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(768);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(770);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_net_Administration$IdEncounterInfo *) NULL_CHECK(sp[0].o))->F_ids = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Administration$IdEncounterInfo[] {
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
	{ "initialTime", &class_long, offsetof(mindustry_net_Administration$IdEncounterInfo, F_initialTime), "J", 0 },
	{ "ids", &class_arc_struct_ObjectSet, offsetof(mindustry_net_Administration$IdEncounterInfo, F_ids), "Larc/struct/ObjectSet;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Administration$IdEncounterInfo, 0, "()V", 0 },
};

Class class_mindustry_net_Administration$IdEncounterInfo{
		.nativeName = (intptr_t) "mindustry/net/Administration$IdEncounterInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Administration$IdEncounterInfo),
		.classVtable = (intptr_t) vtable_mindustry_net_Administration$IdEncounterInfo,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Administration$IdEncounterInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Administration$IdEncounterInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Administration,
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
static bool registered_mindustry_net_Administration$IdEncounterInfo = registerClass(&class_mindustry_net_Administration$IdEncounterInfo);

}

