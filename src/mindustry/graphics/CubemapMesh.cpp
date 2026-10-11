#include "mindustry/graphics/CubemapMesh.h"
#include "arc/graphics/GLTexture.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/nio/FloatBuffer.h"
#include "arc/graphics/VertexAttribute.h"
#include "arc/Files.h"
#include "arc/math/geom/Mat3D.h"
#include "arc/files/Fi.h"
#include "mindustry/graphics/CubemapMesh.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Mesh.h"
#include "arc/graphics/Cubemap.h"

extern "C" {

jobject SF_mindustry_graphics_CubemapMesh_vertices;

void mark_mindustry_graphics_CubemapMesh(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_CubemapMesh_vertices)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CubemapMesh_vertices)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CubemapMesh_vertices, mark, depth + 1);
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
	auto self = (mindustry_graphics_CubemapMesh *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void init_mindustry_graphics_CubemapMesh_arc_graphics_Cubemap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CubemapMesh:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_CubemapMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(60);
	((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_map;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Cubemap_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Mesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Mesh);
	jint temp0 = jint(1);
	clinit_mindustry_graphics_CubemapMesh(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_CubemapMesh_vertices;
	jint temp1 = ((jarray) nullCheck(ctx, sp[2].o))->length;
	jint temp2 = jint(0);
	sp[2].o = (jobject)createArray(ctx, &class_arc_graphics_VertexAttribute, (jint(1)));
	jint temp3 = jint(0);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[3].o = (jobject)SF_arc_graphics_VertexAttribute_position3;
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o);
	((mindustry_graphics_CubemapMesh *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	clinit_mindustry_graphics_CubemapMesh(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CubemapMesh_vertices;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	clinit_mindustry_graphics_CubemapMesh(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CubemapMesh_vertices;
	jint temp4 = jint(0);
	clinit_mindustry_graphics_CubemapMesh(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_CubemapMesh_vertices;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, sp[1].o, temp4, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_Shader(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_files;
	sp[2].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[2].o))(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"shaders/cubemap.vert"_j))));
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_files;
	sp[3].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[3].o))(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"shaders/cubemap.frag"_j))));
	init_arc_graphics_gl_Shader_arc_files_Fi_arc_files_Fi(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_graphics_CubemapMesh *) NULL_CHECK(sp[0].o))->F_shader = (jref) sp[1].o;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_CubemapMesh_setCubemap_arc_graphics_Cubemap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CubemapMesh:setCubemap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_CubemapMesh_render_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CubemapMesh:render", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	static int skyboxCount = 0;
	if ((++skyboxCount) % 60 == 1) {
		auto cm = (mindustry_graphics_CubemapMesh*)self;
		printf("[CubemapMesh:render] #%d map=%p, shader=%p, mesh=%p\n",
			skyboxCount, (void*)cm->F_map, (void*)cm->F_shader, (void*)cm->F_mesh);
		fflush(stdout);
	}
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_map;
	((func_arc_graphics_Cubemap_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_bind])(ctx, sp[0].o);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_cubemap"_j))), (jint(0)));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_proj"_j));
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int])(ctx, sp[0].o, sp[1].o, (jint(4)));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_CubemapMesh_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CubemapMesh:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_graphics_CubemapMesh *) NULL_CHECK((frame[0].o)))->F_map;
	((func_arc_graphics_Cubemap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_dispose])(ctx, sp[0].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_CubemapMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CubemapMesh:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_CubemapMesh(ctx);
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject) createArray(ctx, &class_float, (108));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (20)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (21)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (22)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (23)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (24)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (25)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (26)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (27)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (28)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (29)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (30)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (31)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (32)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (33)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (34)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (35)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (36)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (37)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (38)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (39)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (40)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (41)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (42)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (43)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (44)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (45)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (46)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (47)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (48)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (49)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (50)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (51)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (52)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (53)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (54)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (55)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (56)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (57)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (58)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (59)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (60)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (61)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (62)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (63)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (64)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (65)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (66)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (67)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (68)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (69)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (70)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (71)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (72)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (73)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (74)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (75)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (76)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (77)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (78)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (79)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (80)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (81)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (82)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (83)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (84)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (85)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (86)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (87)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (88)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (89)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (90)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (91)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (92)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (93)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (94)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (95)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (96)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (97)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (98)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (99)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (100)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (101)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (102)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (103)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (104)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (105)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (106)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (107)) = (jfloat(1));
	clinit_mindustry_graphics_CubemapMesh(ctx);
	SF_mindustry_graphics_CubemapMesh_vertices = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_CubemapMesh[] {
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
	(void *) M_mindustry_graphics_CubemapMesh_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_graphics_CubemapMesh_setCubemap_arc_graphics_Cubemap,
	(void *) M_mindustry_graphics_CubemapMesh_render_arc_math_geom_Mat3D,
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
	{ "setCubemap", "(Larc/graphics/Cubemap;)V" },
	{ "render", "(Larc/math/geom/Mat3D;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "vertices", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_graphics_CubemapMesh_vertices, "[F", 26 },
	{ "mesh", &class_arc_graphics_Mesh, offsetof(mindustry_graphics_CubemapMesh, F_mesh), "Larc/graphics/Mesh;", 18 },
	{ "shader", &class_arc_graphics_gl_Shader, offsetof(mindustry_graphics_CubemapMesh, F_shader), "Larc/graphics/gl/Shader;", 18 },
	{ "map", &class_arc_graphics_Cubemap, offsetof(mindustry_graphics_CubemapMesh, F_map), "Larc/graphics/Cubemap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_CubemapMesh_arc_graphics_Cubemap, 0, "(Larc/graphics/Cubemap;)V", 1 },
	{ "setCubemap", (intptr_t) M_mindustry_graphics_CubemapMesh_setCubemap_arc_graphics_Cubemap, VTABLE_mindustry_graphics_CubemapMesh_setCubemap_arc_graphics_Cubemap, "(Larc/graphics/Cubemap;)V", 1 },
	{ "render", (intptr_t) M_mindustry_graphics_CubemapMesh_render_arc_math_geom_Mat3D, VTABLE_mindustry_graphics_CubemapMesh_render_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;)V", 1 },
	{ "dispose", (intptr_t) M_mindustry_graphics_CubemapMesh_dispose, VTABLE_mindustry_graphics_CubemapMesh_dispose, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_CubemapMesh, 0, "()V", 8 },
};

Class class_mindustry_graphics_CubemapMesh{
		.nativeName = (intptr_t) "mindustry/graphics/CubemapMesh",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_CubemapMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_CubemapMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_CubemapMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_CubemapMesh,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_CubemapMesh = registerClass(&class_mindustry_graphics_CubemapMesh);

}
