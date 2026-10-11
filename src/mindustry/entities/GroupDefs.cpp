#include "mindustry/entities/GroupDefs.h"
#include "java/lang/Object.h"

extern "C" {


void mark_mindustry_entities_GroupDefs(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_GroupDefs *) object;
	if (self->F_all)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_all)->clazz)->markFunction)((jobject) self->F_all, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_player)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_player)->clazz)->markFunction)((jobject) self->F_player, mark, depth + 1);
	if (self->F_bullet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bullet)->clazz)->markFunction)((jobject) self->F_bullet, mark, depth + 1);
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_build)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_build)->clazz)->markFunction)((jobject) self->F_build, mark, depth + 1);
	if (self->F_sync)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sync)->clazz)->markFunction)((jobject) self->F_sync, mark, depth + 1);
	if (self->F_draw)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_draw)->clazz)->markFunction)((jobject) self->F_draw, mark, depth + 1);
	if (self->F_weather)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weather)->clazz)->markFunction)((jobject) self->F_weather, mark, depth + 1);
	if (self->F_powerGraph)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_powerGraph)->clazz)->markFunction)((jobject) self->F_powerGraph, mark, depth + 1);
}

void clinit_mindustry_entities_GroupDefs(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_GroupDefs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/GroupDefs:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_GroupDefs(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_GroupDefs[] {
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
	{ "all", &class_java_lang_Object, offsetof(mindustry_entities_GroupDefs, F_all), "Ljava/lang/Object;", 0 },
	{ "effect", &class_java_lang_Object, offsetof(mindustry_entities_GroupDefs, F_effect), "Ljava/lang/Object;", 0 },
	{ "player", &class_java_lang_Object, offsetof(mindustry_entities_GroupDefs, F_player), "Ljava/lang/Object;", 0 },
	{ "bullet", &class_java_lang_Object, offsetof(mindustry_entities_GroupDefs, F_bullet), "Ljava/lang/Object;", 0 },
	{ "unit", &class_java_lang_Object, offsetof(mindustry_entities_GroupDefs, F_unit), "Ljava/lang/Object;", 0 },
	{ "build", &class_java_lang_Object, offsetof(mindustry_entities_GroupDefs, F_build), "Ljava/lang/Object;", 0 },
	{ "sync", &class_java_lang_Object, offsetof(mindustry_entities_GroupDefs, F_sync), "Ljava/lang/Object;", 0 },
	{ "draw", &class_java_lang_Object, offsetof(mindustry_entities_GroupDefs, F_draw), "Ljava/lang/Object;", 0 },
	{ "weather", &class_java_lang_Object, offsetof(mindustry_entities_GroupDefs, F_weather), "Ljava/lang/Object;", 0 },
	{ "powerGraph", &class_java_lang_Object, offsetof(mindustry_entities_GroupDefs, F_powerGraph), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_GroupDefs, 0, "()V", 0 },
};

Class class_mindustry_entities_GroupDefs{
		.nativeName = (intptr_t) "mindustry/entities/GroupDefs",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_GroupDefs),
		.classVtable = (intptr_t) vtable_mindustry_entities_GroupDefs,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_GroupDefs,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_GroupDefs,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_GroupDefs = registerClass(&class_mindustry_entities_GroupDefs);

}
