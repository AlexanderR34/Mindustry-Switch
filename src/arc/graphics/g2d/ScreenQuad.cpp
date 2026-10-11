#include "arc/graphics/g2d/ScreenQuad.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/VertexAttribute.h"
#include "arc/graphics/g2d/ScreenQuad.h"
#include "arc/graphics/Mesh.h"

extern "C" {


void mark_arc_graphics_g2d_ScreenQuad(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_ScreenQuad *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
}

void clinit_arc_graphics_g2d_ScreenQuad(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_ScreenQuad(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScreenQuad:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScreenQuad(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Mesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Mesh);
	jint temp0 = jint(1);
	jint temp1 = jint(4);
	jint temp2 = jint(0);
	sp[2].o = (jobject)createArray(ctx, &class_arc_graphics_VertexAttribute, (jint(2)));
	jint temp3 = jint(0);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[3].o = (jobject)SF_arc_graphics_VertexAttribute_position;
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	jint temp4 = jint(1);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[3].o = (jobject)SF_arc_graphics_VertexAttribute_texCoords;
	ARRAY_ACCESS(jobject, sp[2].o, temp4) = sp[3].o;
	init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o);
	((arc_graphics_g2d_ScreenQuad *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(12);
	sp[0].o = (jobject)((arc_graphics_g2d_ScreenQuad *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[1].o, (6)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (7)) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[1].o, (8)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (9)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (10)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (11)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (12)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[1].o, (13)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (14)) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[1].o, (15)) = (jfloat(1));
	sp[0].o = (jobject)((func_arc_graphics_Mesh_setVertices_Array1_float_R_arc_graphics_Mesh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_setVertices_Array1_float_R_arc_graphics_Mesh])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScreenQuad:render", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((arc_graphics_g2d_ScreenQuad *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int])(ctx, sp[0].o, (frame[1].o), (6), (jint(0)), (jint(4)));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_ScreenQuad_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScreenQuad:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((arc_graphics_g2d_ScreenQuad *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_ScreenQuad[] {
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
	(void *) M_arc_graphics_g2d_ScreenQuad_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader,
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
	{ "render", "(Larc/graphics/gl/Shader;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "mesh", &class_arc_graphics_Mesh, offsetof(arc_graphics_g2d_ScreenQuad, F_mesh), "Larc/graphics/Mesh;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_ScreenQuad, 0, "()V", 1 },
	{ "render", (intptr_t) M_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader, VTABLE_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_g2d_ScreenQuad_dispose, VTABLE_arc_graphics_g2d_ScreenQuad_dispose, "()V", 1 },
};

Class class_arc_graphics_g2d_ScreenQuad{
		.nativeName = (intptr_t) "arc/graphics/g2d/ScreenQuad",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_ScreenQuad),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_ScreenQuad,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_ScreenQuad,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_ScreenQuad,
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
static bool registered_arc_graphics_g2d_ScreenQuad = registerClass(&class_arc_graphics_g2d_ScreenQuad);

}
