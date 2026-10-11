#include "mindustry/graphics/g3d/GenericMesh.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/math/geom/Mat3D.h"
#include "mindustry/graphics/g3d/GenericMesh.h"
#include "mindustry/graphics/g3d/PlanetParams.h"

extern "C" {


void mark_mindustry_graphics_g3d_GenericMesh(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_GenericMesh *) object;
}

void clinit_mindustry_graphics_g3d_GenericMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_graphics_g3d_GenericMesh[] {
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
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "render", "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static MethodMetadata methods[] {
	{ "render", 0, INDEX_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V", 1025 },
};

Class class_mindustry_graphics_g3d_GenericMesh{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/GenericMesh",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_GenericMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_GenericMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_GenericMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_GenericMesh,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_GenericMesh = registerClass(&class_mindustry_graphics_g3d_GenericMesh);

}
