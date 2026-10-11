#include "mindustry/graphics/g3d/MultiMesh.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "mindustry/graphics/g3d/MultiMesh.h"
#include "arc/math/geom/Mat3D.h"
#include "mindustry/graphics/g3d/GenericMesh.h"
#include "mindustry/graphics/g3d/PlanetParams.h"

extern "C" {


void mark_mindustry_graphics_g3d_MultiMesh(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_MultiMesh *) object;
	if (self->F_meshes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meshes)->clazz)->markFunction)((jobject) self->F_meshes, mark, depth + 1);
}

void clinit_mindustry_graphics_g3d_MultiMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_g3d_MultiMesh_Array1_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MultiMesh:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MultiMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((mindustry_graphics_g3d_MultiMesh *) NULL_CHECK((frame[0].o)))->F_meshes = (jref) (frame[1].o);
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_MultiMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MultiMesh:render", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)((mindustry_graphics_g3d_MultiMesh *) NULL_CHECK((frame[0].o)))->F_meshes;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_1:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_2;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(15);
	((func_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_GenericMesh, INDEX_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, (frame[7].o)))(ctx, (frame[7].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(14);
	INST_IINC(6, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(17);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_MultiMesh_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MultiMesh:dispose", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_graphics_g3d_MultiMesh *) NULL_CHECK((frame[0].o)))->F_meshes;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(22);
	((func_arc_util_Disposable_dispose) resolveInterfaceMethod(ctx, &class_arc_util_Disposable, INDEX_arc_util_Disposable_dispose, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(21);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_MultiMesh[] {
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
	(void *) M_mindustry_graphics_g3d_MultiMesh_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_graphics_g3d_MultiMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D,
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

static jclass interfaces[] { &class_mindustry_graphics_g3d_GenericMesh, };

static FieldMetadata fields[] {
	{ "meshes", getArrayClass(&class_mindustry_graphics_g3d_GenericMesh, 1), offsetof(mindustry_graphics_g3d_MultiMesh, F_meshes), "[Lmindustry/graphics/g3d/GenericMesh;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_MultiMesh_Array1_mindustry_graphics_g3d_GenericMesh, 0, "([Lmindustry/graphics/g3d/GenericMesh;)V", 129 },
	{ "render", (intptr_t) M_mindustry_graphics_g3d_MultiMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, VTABLE_mindustry_graphics_g3d_MultiMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V", 1 },
	{ "dispose", (intptr_t) M_mindustry_graphics_g3d_MultiMesh_dispose, VTABLE_mindustry_graphics_g3d_MultiMesh_dispose, "()V", 1 },
};

Class class_mindustry_graphics_g3d_MultiMesh{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/MultiMesh",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_MultiMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_MultiMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_MultiMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_MultiMesh,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_MultiMesh = registerClass(&class_mindustry_graphics_g3d_MultiMesh);

}
