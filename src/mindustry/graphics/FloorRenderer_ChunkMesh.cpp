#include "mindustry/graphics/FloorRenderer_ChunkMesh.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/VertexAttribute.h"
#include "mindustry/graphics/FloorRenderer.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/graphics/FloorRenderer_ChunkMesh.h"
#include "arc/graphics/Mesh.h"

extern "C" {


void mark_mindustry_graphics_FloorRenderer$ChunkMesh(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_Mesh(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_graphics_FloorRenderer$ChunkMesh *) object;
	if (self->F_bounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bounds)->clazz)->markFunction)((jobject) self->F_bounds, mark, depth + 1);
}

void clinit_mindustry_graphics_FloorRenderer$ChunkMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_Mesh(ctx);
}

void init_mindustry_graphics_FloorRenderer$ChunkMesh_boolean_int_int_Array1_arc_graphics_VertexAttribute_float_float_float_float(jcontext ctx, jobject self, jbool param0, jint param1, jint param2, jobject param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer$ChunkMesh:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_FloorRenderer$ChunkMesh(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	{
	LINE_NUMBER(392);
	init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_graphics_FloorRenderer$ChunkMesh *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	LINE_NUMBER(394);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$ChunkMesh *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[5].f), (frame[6].f), ((frame[7].f) - (frame[5].f)), ((frame[8].f) - (frame[6].f)));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_FloorRenderer$ChunkMesh[] {
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
	(void *) M_arc_graphics_Mesh_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_Mesh_setVertices_Array1_float_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_updateVertices_int_Array1_float_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_setIndices_Array1_short_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_setIndices_Array1_short_int_int_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_getIndices_Array1_short,
	(void *) M_arc_graphics_Mesh_getIndices_Array1_short_int,
	(void *) M_arc_graphics_Mesh_getIndices_int_Array1_short_int,
	(void *) M_arc_graphics_Mesh_getIndices_int_int_Array1_short_int,
	(void *) M_arc_graphics_Mesh_getNumIndices_R_int,
	(void *) M_arc_graphics_Mesh_getNumVertices_R_int,
	(void *) M_arc_graphics_Mesh_getMaxVertices_R_int,
	(void *) M_arc_graphics_Mesh_getMaxIndices_R_int,
	(void *) M_arc_graphics_Mesh_getVertexSize_R_int,
	(void *) M_arc_graphics_Mesh_setAutoBind_boolean,
	(void *) M_arc_graphics_Mesh_bind_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int,
	(void *) M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int,
	(void *) M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean,
	(void *) M_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer,
	(void *) M_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer,
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
	{ "setVertices", "([F)Larc/graphics/Mesh;" },
	{ "setVertices", "([FII)Larc/graphics/Mesh;" },
	{ "updateVertices", "(I[F)Larc/graphics/Mesh;" },
	{ "updateVertices", "(I[FII)Larc/graphics/Mesh;" },
	{ "setIndices", "([S)Larc/graphics/Mesh;" },
	{ "setIndices", "([SII)Larc/graphics/Mesh;" },
	{ "getIndices", "([S)V" },
	{ "getIndices", "([SI)V" },
	{ "getIndices", "(I[SI)V" },
	{ "getIndices", "(II[SI)V" },
	{ "getNumIndices", "()I" },
	{ "getNumVertices", "()I" },
	{ "getMaxVertices", "()I" },
	{ "getMaxIndices", "()I" },
	{ "getVertexSize", "()I" },
	{ "setAutoBind", "(Z)V" },
	{ "bind", "(Larc/graphics/gl/Shader;)V" },
	{ "unbind", "(Larc/graphics/gl/Shader;)V" },
	{ "render", "(Larc/graphics/gl/Shader;I)V" },
	{ "render", "(Larc/graphics/gl/Shader;III)V" },
	{ "render", "(Larc/graphics/gl/Shader;IIIZ)V" },
	{ "getVerticesBuffer", "()Ljava/nio/FloatBuffer;" },
	{ "getIndicesBuffer", "()Ljava/nio/ShortBuffer;" },
};

static FieldMetadata fields[] {
	{ "bounds", &class_arc_math_geom_Rect, offsetof(mindustry_graphics_FloorRenderer$ChunkMesh, F_bounds), "Larc/math/geom/Rect;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_FloorRenderer$ChunkMesh_boolean_int_int_Array1_arc_graphics_VertexAttribute_float_float_float_float, 0, "(ZII[Larc/graphics/VertexAttribute;FFFF)V", 0 },
};

Class class_mindustry_graphics_FloorRenderer$ChunkMesh{
		.nativeName = (intptr_t) "mindustry/graphics/FloorRenderer$ChunkMesh",
		.parentClass = (intptr_t) &class_arc_graphics_Mesh,
		.size = sizeof(mindustry_graphics_FloorRenderer$ChunkMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_FloorRenderer$ChunkMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_FloorRenderer$ChunkMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_FloorRenderer$ChunkMesh,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_FloorRenderer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_FloorRenderer$ChunkMesh = registerClass(&class_mindustry_graphics_FloorRenderer$ChunkMesh);

}

