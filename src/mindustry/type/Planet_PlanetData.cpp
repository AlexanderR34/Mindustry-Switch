#include "mindustry/type/Planet_PlanetData.h"
#include "mindustry/type/Planet_PlanetData.h"
#include "java/lang/Object.h"
#include "mindustry/type/Planet.h"
#include "arc/struct/ObjectIntMap.h"

extern "C" {


void mark_mindustry_type_Planet$PlanetData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_Planet$PlanetData *) object;
	if (self->F_presets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_presets)->clazz)->markFunction)((jobject) self->F_presets, mark, depth + 1);
	if (self->F_attackSectors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attackSectors)->clazz)->markFunction)((jobject) self->F_attackSectors, mark, depth + 1);
}

void clinit_mindustry_type_Planet$PlanetData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_type_Planet$PlanetData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet$PlanetData:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Planet$PlanetData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(714);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(715);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_type_Planet$PlanetData *) NULL_CHECK(sp[0].o))->F_presets = (jref) sp[1].o;
	LINE_NUMBER(716);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(0)));
	((mindustry_type_Planet$PlanetData *) NULL_CHECK(sp[0].o))->F_attackSectors = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_Planet$PlanetData[] {
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
	{ "presets", &class_arc_struct_ObjectIntMap, offsetof(mindustry_type_Planet$PlanetData, F_presets), "Larc/struct/ObjectIntMap;", 1 },
	{ "attackSectors", getArrayClass(&class_int, 1), offsetof(mindustry_type_Planet$PlanetData, F_attackSectors), "[I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_Planet$PlanetData, 0, "()V", 1 },
};

Class class_mindustry_type_Planet$PlanetData{
		.nativeName = (intptr_t) "mindustry/type/Planet$PlanetData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_Planet$PlanetData),
		.classVtable = (intptr_t) vtable_mindustry_type_Planet$PlanetData,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Planet$PlanetData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_Planet$PlanetData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_type_Planet,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
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
static bool registered_mindustry_type_Planet$PlanetData = registerClass(&class_mindustry_type_Planet$PlanetData);

}

