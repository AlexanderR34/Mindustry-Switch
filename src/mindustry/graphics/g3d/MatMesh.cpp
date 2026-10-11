#include "mindustry/graphics/g3d/MatMesh.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/math/geom/Mat3D.h"
#include "mindustry/graphics/g3d/GenericMesh.h"
#include "mindustry/graphics/g3d/PlanetParams.h"
#include "mindustry/graphics/g3d/MatMesh.h"

extern "C" {

jobject SF_mindustry_graphics_g3d_MatMesh_tmp;

void mark_mindustry_graphics_g3d_MatMesh(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_g3d_MatMesh_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_MatMesh_tmp)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_MatMesh_tmp, mark, depth + 1);
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
	auto self = (mindustry_graphics_g3d_MatMesh *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_mat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mat)->clazz)->markFunction)((jobject) self->F_mat, mark, depth + 1);
}

void init_mindustry_graphics_g3d_MatMesh_mindustry_graphics_g3d_GenericMesh_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MatMesh:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MatMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_graphics_g3d_MatMesh *) NULL_CHECK((frame[0].o)))->F_mesh = (jref) (frame[1].o);
	LINE_NUMBER(14);
	((mindustry_graphics_g3d_MatMesh *) NULL_CHECK((frame[0].o)))->F_mat = (jref) (frame[2].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_MatMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MatMesh:render", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_graphics_g3d_MatMesh *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_mindustry_graphics_g3d_MatMesh(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_g3d_MatMesh_tmp;
	sp[3].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[3].o, (frame[3].o));
	sp[4].o = (jobject)((mindustry_graphics_g3d_MatMesh *) NULL_CHECK((frame[0].o)))->F_mat;
	sp[3].o = (jobject)((func_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[3].o, sp[4].o);
	((func_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_GenericMesh, INDEX_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_MatMesh_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MatMesh:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_graphics_g3d_MatMesh *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_util_Disposable_dispose) resolveInterfaceMethod(ctx, &class_arc_util_Disposable, INDEX_arc_util_Disposable_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_g3d_MatMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MatMesh:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MatMesh(ctx);
	{
	LINE_NUMBER(7);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[0].o);
	clinit_mindustry_graphics_g3d_MatMesh(ctx);
	SF_mindustry_graphics_g3d_MatMesh_tmp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_MatMesh[] {
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
	(void *) M_mindustry_graphics_g3d_MatMesh_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_graphics_g3d_MatMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D,
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
	{ "tmp", &class_arc_math_geom_Mat3D, (intptr_t) &SF_mindustry_graphics_g3d_MatMesh_tmp, "Larc/math/geom/Mat3D;", 26 },
	{ "mesh", &class_mindustry_graphics_g3d_GenericMesh, offsetof(mindustry_graphics_g3d_MatMesh, F_mesh), "Lmindustry/graphics/g3d/GenericMesh;", 0 },
	{ "mat", &class_arc_math_geom_Mat3D, offsetof(mindustry_graphics_g3d_MatMesh, F_mat), "Larc/math/geom/Mat3D;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_MatMesh_mindustry_graphics_g3d_GenericMesh_arc_math_geom_Mat3D, 0, "(Lmindustry/graphics/g3d/GenericMesh;Larc/math/geom/Mat3D;)V", 1 },
	{ "render", (intptr_t) M_mindustry_graphics_g3d_MatMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, VTABLE_mindustry_graphics_g3d_MatMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V", 1 },
	{ "dispose", (intptr_t) M_mindustry_graphics_g3d_MatMesh_dispose, VTABLE_mindustry_graphics_g3d_MatMesh_dispose, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_g3d_MatMesh, 0, "()V", 8 },
};

Class class_mindustry_graphics_g3d_MatMesh{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/MatMesh",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_MatMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_MatMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_MatMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_MatMesh,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_MatMesh = registerClass(&class_mindustry_graphics_g3d_MatMesh);

}
