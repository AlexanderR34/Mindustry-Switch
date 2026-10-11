#include "mindustry/graphics/g3d/PlanetRenderer_PlanetInterfaceRenderer.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/PlanetRenderer.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/g3d/PlanetRenderer_PlanetInterfaceRenderer.h"

extern "C" {


void mark_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer *) object;
}

void clinit_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderOverProjections_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer$PlanetInterfaceRenderer:renderOverProjections", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(279);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer[] {
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
	(void *) M_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderOverProjections_mindustry_type_Planet,
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
	{ "renderSectors", "(Lmindustry/type/Planet;)V" },
	{ "renderProjections", "(Lmindustry/type/Planet;)V" },
	{ "renderOverProjections", "(Lmindustry/type/Planet;)V" },
};

static MethodMetadata methods[] {
	{ "renderSectors", 0, INDEX_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderSectors_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 1025 },
	{ "renderProjections", 0, INDEX_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderProjections_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 1025 },
	{ "renderOverProjections", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderOverProjections_mindustry_type_Planet, INDEX_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderOverProjections_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 1 },
};

Class class_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/PlanetRenderer$PlanetInterfaceRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_g3d_PlanetRenderer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer = registerClass(&class_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer);

}

