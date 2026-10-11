#include "arc/graphics/g3d/VertexBatch3D.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/VertexAttribute.h"
#include "arc/math/geom/Mat3D.h"
#include "arc/graphics/Color.h"
#include "arc/math/geom/Vec3.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/g3d/VertexBatch3D.h"
#include "arc/struct/Seq.h"
#include "java/lang/Class.h"
#include "arc/graphics/Mesh.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_graphics_g3d_VertexBatch3D(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g3d_VertexBatch3D *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_proj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_proj)->clazz)->markFunction)((jobject) self->F_proj, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_shaderUniformNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shaderUniformNames)->clazz)->markFunction)((jobject) self->F_shaderUniformNames, mark, depth + 1);
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
}

void clinit_arc_graphics_g3d_VertexBatch3D(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g3d_VertexBatch3D_boolean_boolean_int(jcontext ctx, jobject self, jbool param0, jbool param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g3d_VertexBatch3D(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	jint temp0 = 5000;
	jint temp1 = frame[1].i;
	jint temp2 = frame[2].i;
	jint temp3 = frame[3].i;
	sp[1].o = (jobject)SM_arc_graphics_g3d_VertexBatch3D_createDefaultShader_boolean_boolean_int_R_arc_graphics_gl_Shader(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	init_arc_graphics_g3d_VertexBatch3D_int_boolean_boolean_int_arc_graphics_gl_Shader(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(28);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_ownsShader = (jint(1));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g3d_VertexBatch3D_int_boolean_boolean_int(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g3d_VertexBatch3D(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	sp[1].o = (jobject)SM_arc_graphics_g3d_VertexBatch3D_createDefaultShader_boolean_boolean_int_R_arc_graphics_gl_Shader(ctx, (frame[2].i), (frame[3].i), (frame[4].i));
	init_arc_graphics_g3d_VertexBatch3D_int_boolean_boolean_int_arc_graphics_gl_Shader(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(33);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_ownsShader = (jint(1));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g3d_VertexBatch3D_int_boolean_boolean_int_arc_graphics_gl_Shader(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g3d_VertexBatch3D(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[1].o);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_proj = (jref) sp[1].o;
	LINE_NUMBER(37);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_maxVertices = (frame[1].i);
	LINE_NUMBER(38);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_numTexCoords = (frame[4].i);
	LINE_NUMBER(39);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_shader = (jref) (frame[5].o);
	LINE_NUMBER(41);
	sp[0].o = (jobject)M_arc_graphics_g3d_VertexBatch3D_buildVertexAttributes_boolean_boolean_int_R_Array1_arc_graphics_VertexAttribute(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Mesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Mesh);
	init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute(ctx, sp[1].o, (jint(0)), (frame[1].i), (jint(0)), (frame[6].o));
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject) createArray(ctx, &class_float, (temp0 * (((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[1].o))->F_vertexSize) / (jint(4)))));
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_mesh;
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_vertexSize = (((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[1].o))->F_vertexSize) / (jint(4)));
	LINE_NUMBER(47);
	frame[7].i = (jint(3));
	LINE_NUMBER(49);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(50);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_normalOffset = (frame[7].i);
	LINE_NUMBER(51);
	INST_IINC(7, 3);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(53);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_normalOffset = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(56);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(57);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_colorOffset = (frame[7].i);
	LINE_NUMBER(58);
	INST_IINC(7, 1);
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(60);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_colorOffset = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(63);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_texCoordOffset = (frame[7].i);
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[4].i));
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_shaderUniformNames = (jref) sp[1].o;
	LINE_NUMBER(66);
	frame[8].i = (jint(0));
	}
label_21:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_22;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_shaderUniformNames;
	jint temp0 = frame[8].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"u_sampler"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(66);
	INST_IINC(8, 1);
	goto label_21;
	}
label_22:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g3d_VertexBatch3D_createVertexShader_boolean_boolean_int_R_java_lang_String(jcontext ctx, jbool param0, jbool param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:createVertexShader", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g3d_VertexBatch3D(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(72);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"attribute vec4 a_position;\n"_j))));
	LINE_NUMBER(73);
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[0].i) == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"attribute vec3 a_normal;\n"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	sp += 1;
	if ((frame[1].i) == 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"attribute vec4 a_color;\n"_j));
	goto label_6;
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(76);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"attribute vec2 a_texCoord"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n"_j))));
	LINE_NUMBER(76);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"uniform mat4 u_proj;\n"_j))));
	LINE_NUMBER(81);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"varying vec4 v_col;\n"_j));
	goto label_14;
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_14:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	frame[4].i = (jint(0));
	}
label_16:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_17;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"varying vec2 v_tex"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n"_j))));
	LINE_NUMBER(83);
	INST_IINC(4, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"void main() {\n   gl_Position = u_proj * a_position;\n"_j))));
	sp += 1;
	if ((frame[1].i) == 0) goto label_20;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"   v_col = a_color;\n"_j));
	goto label_21;
label_20:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_21:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	frame[4].i = (jint(0));
	}
label_23:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_24;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"   v_tex"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"a_texCoord"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n"_j))));
	LINE_NUMBER(89);
	INST_IINC(4, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"   gl_PointSize = 1.0;\n"_j))));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"}\n"_j))));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g3d_VertexBatch3D_createFragmentShader_boolean_boolean_int_R_java_lang_String(jcontext ctx, jbool param0, jbool param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:createFragmentShader", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g3d_VertexBatch3D(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(98);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(100);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"varying vec4 v_col;\n"_j))));
	}
label_2:;
	{
	LINE_NUMBER(101);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"varying vec2 v_tex"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n"_j))));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"uniform sampler2D u_sampler"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n"_j))));
	LINE_NUMBER(101);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"void main(){\n   gl_FragColor = "_j))));
	sp += 1;
	if ((frame[1].i) == 0) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"v_col"_j));
	goto label_9;
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"vec4(1, 1, 1, 1)"_j));
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(108);
	if ((frame[2].i) <= 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8" * "_j))));
	}
label_11:;
	{
	LINE_NUMBER(110);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(111);
	if ((frame[4].i) != ((frame[2].i) - (jint(1)))) goto label_15;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8" texture2D(u_sampler"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",  v_tex"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8" texture2D(u_sampler"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",  v_tex"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8") *"_j))));
	}
label_17:;
	{
	LINE_NUMBER(110);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8";\n}"_j))));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g3d_VertexBatch3D_createDefaultShader_boolean_boolean_int_R_arc_graphics_gl_Shader(jcontext ctx, jbool param0, jbool param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:createDefaultShader", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g3d_VertexBatch3D(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)SM_arc_graphics_g3d_VertexBatch3D_createVertexShader_boolean_boolean_int_R_java_lang_String(ctx, (frame[0].i), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject)SM_arc_graphics_g3d_VertexBatch3D_createFragmentShader_boolean_boolean_int_R_java_lang_String(ctx, (frame[0].i), (frame[1].i), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(126);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g3d_VertexBatch3D_buildVertexAttributes_boolean_boolean_int_R_Array1_arc_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jbool param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:buildVertexAttributes", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(130);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(131);
	sp[0].o = frame[4].o;
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = (jobject)SF_arc_graphics_VertexAttribute_position3;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	sp[0].o = frame[4].o;
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = (jobject)SF_arc_graphics_VertexAttribute_normal;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(133);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	sp[0].o = frame[4].o;
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = (jobject)SF_arc_graphics_VertexAttribute_color;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(134);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = frame[4].o;
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	jint temp0 = jint(2);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"a_texCoord"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[5].i));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	init_arc_graphics_VertexAttribute_int_java_lang_String(ctx, sp[1].o, temp0, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, (frame[4].o), (((jobject) &class_arc_graphics_VertexAttribute)));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_graphics_VertexAttribute, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_setShader_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:setShader", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	if (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_ownsShader) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_dispose])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(142);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_shader = (jref) (frame[1].o);
	LINE_NUMBER(143);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_ownsShader = (jint(0));
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:color", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexIdx) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_colorOffset);
	jfloat temp1 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_color_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:color", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexIdx) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_colorOffset);
	jfloat temp1 = (jfloat)SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_color_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:color", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexIdx) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_colorOffset))) = (frame[1].f);
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_texCoord_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:texCoord", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(159);
	frame[3].i = (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexIdx) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_texCoordOffset));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[3].i) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_numSetTexCoords))) = (frame[1].f);
	LINE_NUMBER(161);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (((frame[3].i) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_numSetTexCoords)) + (jint(1)))) = (frame[2].f);
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_numSetTexCoords = (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_numSetTexCoords) + (jint(2)));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_normal_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:normal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	((func_arc_graphics_g3d_VertexBatch3D_normal_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_normal_float_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_normal_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:normal", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(170);
	frame[4].i = (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexIdx) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_normalOffset));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[1].f);
	LINE_NUMBER(172);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[4].i) + (jint(1)))) = (frame[2].f);
	LINE_NUMBER(173);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[4].i) + (jint(2)))) = (frame[3].f);
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:tri2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(177);
	((func_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(178);
	((func_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[2].o), (frame[4].o));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:tri", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(182);
	((func_arc_graphics_g3d_VertexBatch3D_tri_float_float_float_float_float_float_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_tri_float_float_float_float_float_float_float_float_float_arc_graphics_Color])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_z), (frame[4].o));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_tri_float_float_float_float_float_float_float_float_float_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:tri", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].o = param9;
	{
	LINE_NUMBER(186);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[10].o));
	frame[11].f = temp0;
	LINE_NUMBER(187);
	((func_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[11].f));
	LINE_NUMBER(188);
	((func_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float])(ctx, (frame[0].o), (frame[4].f), (frame[5].f), (frame[6].f), (frame[11].f));
	LINE_NUMBER(189);
	((func_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float])(ctx, (frame[0].o), (frame[7].f), (frame[8].f), (frame[9].f), (frame[11].f));
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:quad", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(193);
	((func_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[5].o));
	LINE_NUMBER(194);
	((func_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:vertex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(198);
	((func_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(199);
	((func_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:vertex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(203);
	((func_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:vertex", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(207);
	frame[5].i = ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexIdx);
	LINE_NUMBER(208);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[5].i)) = (frame[1].f);
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[5].i) + (jint(1)))) = (frame[2].f);
	LINE_NUMBER(210);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[5].i) + (jint(2)))) = (frame[3].f);
	LINE_NUMBER(211);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[5].i) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_colorOffset))) = (frame[4].f);
	LINE_NUMBER(213);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_numSetTexCoords = (jint(0));
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_vertexIdx = (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_vertexIdx) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexSize));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_numVertices = (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_numVertices) + (jint(1)));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:vertex", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(219);
	frame[4].i = ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexIdx);
	LINE_NUMBER(220);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[1].f);
	LINE_NUMBER(221);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[4].i) + (jint(1)))) = (frame[2].f);
	LINE_NUMBER(222);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[4].i) + (jint(2)))) = (frame[3].f);
	LINE_NUMBER(224);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_numSetTexCoords = (jint(0));
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_vertexIdx = (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_vertexIdx) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexSize));
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_numVertices = (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_numVertices) + (jint(1)));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_vertex_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:vertex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexIdx), ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexSize));
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_vertexIdx = (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_vertexIdx) + ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexSize));
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_numVertices = (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK(sp[0].o))->F_numVertices) + (jint(1)));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:proj", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_proj;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:proj", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_proj;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_flush_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:flush", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_g3d_VertexBatch3D_flush_int_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int_arc_graphics_gl_Shader])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_flush_int_arc_graphics_gl_Shader(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:flush", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(248);
	if (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_numVertices) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(249);
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, (frame[2].o));
	LINE_NUMBER(250);
	((func_arc_graphics_gl_Shader_apply) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_Shader_apply])(ctx, (frame[2].o));
	LINE_NUMBER(251);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_proj"_j));
	sp[2].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_proj;
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK(sp[2].o))->F_val;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(252);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_numTexCoords)) goto label_6;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_shaderUniformNames;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))), (frame[3].i));
	LINE_NUMBER(252);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexIdx));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int])(ctx, sp[0].o, (frame[2].o), (frame[1].i));
	LINE_NUMBER(257);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_numSetTexCoords = (jint(0));
	LINE_NUMBER(258);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_vertexIdx = (jint(0));
	LINE_NUMBER(259);
	((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_numVertices = (jint(0));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g3d_VertexBatch3D_getNumVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:getNumVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_numVertices);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:getMaxVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_maxVertices);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_VertexBatch3D_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/VertexBatch3D:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	if (((jint)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_ownsShader) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_shader;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_dispose])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((arc_graphics_g3d_VertexBatch3D *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g3d_VertexBatch3D[] {
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
	(void *) M_arc_graphics_g3d_VertexBatch3D_buildVertexAttributes_boolean_boolean_int_R_Array1_arc_graphics_VertexAttribute,
	(void *) M_arc_graphics_g3d_VertexBatch3D_setShader_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color,
	(void *) M_arc_graphics_g3d_VertexBatch3D_color_float_float_float_float,
	(void *) M_arc_graphics_g3d_VertexBatch3D_color_float,
	(void *) M_arc_graphics_g3d_VertexBatch3D_texCoord_float_float,
	(void *) M_arc_graphics_g3d_VertexBatch3D_normal_arc_math_geom_Vec3,
	(void *) M_arc_graphics_g3d_VertexBatch3D_normal_float_float_float,
	(void *) M_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_arc_graphics_g3d_VertexBatch3D_tri_float_float_float_float_float_float_float_float_float_arc_graphics_Color,
	(void *) M_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3,
	(void *) M_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float,
	(void *) M_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float,
	(void *) M_arc_graphics_g3d_VertexBatch3D_vertex_Array1_float,
	(void *) M_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D,
	(void *) M_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D,
	(void *) M_arc_graphics_g3d_VertexBatch3D_flush_int,
	(void *) M_arc_graphics_g3d_VertexBatch3D_flush_int_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g3d_VertexBatch3D_getNumVertices_R_int,
	(void *) M_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int,
	(void *) M_arc_graphics_g3d_VertexBatch3D_dispose,
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
	{ "buildVertexAttributes", "(ZZI)[Larc/graphics/VertexAttribute;" },
	{ "setShader", "(Larc/graphics/gl/Shader;)V" },
	{ "color", "(Larc/graphics/Color;)V" },
	{ "color", "(FFFF)V" },
	{ "color", "(F)V" },
	{ "texCoord", "(FF)V" },
	{ "normal", "(Larc/math/geom/Vec3;)V" },
	{ "normal", "(FFF)V" },
	{ "tri2", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "tri", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "tri", "(FFFFFFFFFLarc/graphics/Color;)V" },
	{ "quad", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "vertex", "(Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "vertex", "(Larc/math/geom/Vec3;)V" },
	{ "vertex", "(FFFF)V" },
	{ "vertex", "(FFF)V" },
	{ "vertex", "([F)V" },
	{ "proj", "()Larc/math/geom/Mat3D;" },
	{ "proj", "(Larc/math/geom/Mat3D;)V" },
	{ "flush", "(I)V" },
	{ "flush", "(ILarc/graphics/gl/Shader;)V" },
	{ "getNumVertices", "()I" },
	{ "getMaxVertices", "()I" },
	{ "dispose", "()V" },
};

static FieldMetadata fields[] {
	{ "maxVertices", &class_int, offsetof(arc_graphics_g3d_VertexBatch3D, F_maxVertices), "I", 18 },
	{ "mesh", &class_arc_graphics_Mesh, offsetof(arc_graphics_g3d_VertexBatch3D, F_mesh), "Larc/graphics/Mesh;", 18 },
	{ "numTexCoords", &class_int, offsetof(arc_graphics_g3d_VertexBatch3D, F_numTexCoords), "I", 18 },
	{ "vertexSize", &class_int, offsetof(arc_graphics_g3d_VertexBatch3D, F_vertexSize), "I", 18 },
	{ "normalOffset", &class_int, offsetof(arc_graphics_g3d_VertexBatch3D, F_normalOffset), "I", 18 },
	{ "colorOffset", &class_int, offsetof(arc_graphics_g3d_VertexBatch3D, F_colorOffset), "I", 18 },
	{ "texCoordOffset", &class_int, offsetof(arc_graphics_g3d_VertexBatch3D, F_texCoordOffset), "I", 18 },
	{ "proj", &class_arc_math_geom_Mat3D, offsetof(arc_graphics_g3d_VertexBatch3D, F_proj), "Larc/math/geom/Mat3D;", 18 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(arc_graphics_g3d_VertexBatch3D, F_vertices), "[F", 18 },
	{ "shaderUniformNames", getArrayClass(&class_java_lang_String, 1), offsetof(arc_graphics_g3d_VertexBatch3D, F_shaderUniformNames), "[Ljava/lang/String;", 18 },
	{ "vertexIdx", &class_int, offsetof(arc_graphics_g3d_VertexBatch3D, F_vertexIdx), "I", 2 },
	{ "numSetTexCoords", &class_int, offsetof(arc_graphics_g3d_VertexBatch3D, F_numSetTexCoords), "I", 2 },
	{ "numVertices", &class_int, offsetof(arc_graphics_g3d_VertexBatch3D, F_numVertices), "I", 2 },
	{ "shader", &class_arc_graphics_gl_Shader, offsetof(arc_graphics_g3d_VertexBatch3D, F_shader), "Larc/graphics/gl/Shader;", 2 },
	{ "ownsShader", &class_boolean, offsetof(arc_graphics_g3d_VertexBatch3D, F_ownsShader), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g3d_VertexBatch3D_boolean_boolean_int, 0, "(ZZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g3d_VertexBatch3D_int_boolean_boolean_int, 0, "(IZZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g3d_VertexBatch3D_int_boolean_boolean_int_arc_graphics_gl_Shader, 0, "(IZZILarc/graphics/gl/Shader;)V", 1 },
	{ "createVertexShader", (intptr_t) SM_arc_graphics_g3d_VertexBatch3D_createVertexShader_boolean_boolean_int_R_java_lang_String, 0, "(ZZI)Ljava/lang/String;", 10 },
	{ "createFragmentShader", (intptr_t) SM_arc_graphics_g3d_VertexBatch3D_createFragmentShader_boolean_boolean_int_R_java_lang_String, 0, "(ZZI)Ljava/lang/String;", 10 },
	{ "createDefaultShader", (intptr_t) SM_arc_graphics_g3d_VertexBatch3D_createDefaultShader_boolean_boolean_int_R_arc_graphics_gl_Shader, 0, "(ZZI)Larc/graphics/gl/Shader;", 9 },
	{ "buildVertexAttributes", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_buildVertexAttributes_boolean_boolean_int_R_Array1_arc_graphics_VertexAttribute, VTABLE_arc_graphics_g3d_VertexBatch3D_buildVertexAttributes_boolean_boolean_int_R_Array1_arc_graphics_VertexAttribute, "(ZZI)[Larc/graphics/VertexAttribute;", 2 },
	{ "setShader", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_setShader_arc_graphics_gl_Shader, VTABLE_arc_graphics_g3d_VertexBatch3D_setShader_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "color", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color, VTABLE_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "color", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_color_float_float_float_float, VTABLE_arc_graphics_g3d_VertexBatch3D_color_float_float_float_float, "(FFFF)V", 1 },
	{ "color", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_color_float, VTABLE_arc_graphics_g3d_VertexBatch3D_color_float, "(F)V", 1 },
	{ "texCoord", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_texCoord_float_float, VTABLE_arc_graphics_g3d_VertexBatch3D_texCoord_float_float, "(FF)V", 1 },
	{ "normal", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_normal_arc_math_geom_Vec3, VTABLE_arc_graphics_g3d_VertexBatch3D_normal_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)V", 1 },
	{ "normal", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_normal_float_float_float, VTABLE_arc_graphics_g3d_VertexBatch3D_normal_float_float_float, "(FFF)V", 1 },
	{ "tri2", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
	{ "tri", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
	{ "tri", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_tri_float_float_float_float_float_float_float_float_float_arc_graphics_Color, VTABLE_arc_graphics_g3d_VertexBatch3D_tri_float_float_float_float_float_float_float_float_float_arc_graphics_Color, "(FFFFFFFFFLarc/graphics/Color;)V", 1 },
	{ "quad", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
	{ "vertex", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
	{ "vertex", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3, VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)V", 1 },
	{ "vertex", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float, VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float, "(FFFF)V", 1 },
	{ "vertex", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float, VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float, "(FFF)V", 1 },
	{ "vertex", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_vertex_Array1_float, VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_Array1_float, "([F)V", 1 },
	{ "proj", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D, VTABLE_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D, "()Larc/math/geom/Mat3D;", 1 },
	{ "proj", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D, VTABLE_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;)V", 1 },
	{ "flush", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_flush_int, VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int, "(I)V", 1 },
	{ "flush", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_flush_int_arc_graphics_gl_Shader, VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int_arc_graphics_gl_Shader, "(ILarc/graphics/gl/Shader;)V", 1 },
	{ "getNumVertices", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_getNumVertices_R_int, VTABLE_arc_graphics_g3d_VertexBatch3D_getNumVertices_R_int, "()I", 1 },
	{ "getMaxVertices", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int, VTABLE_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int, "()I", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_g3d_VertexBatch3D_dispose, VTABLE_arc_graphics_g3d_VertexBatch3D_dispose, "()V", 1 },
};

Class class_arc_graphics_g3d_VertexBatch3D{
		.nativeName = (intptr_t) "arc/graphics/g3d/VertexBatch3D",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g3d_VertexBatch3D),
		.classVtable = (intptr_t) vtable_arc_graphics_g3d_VertexBatch3D,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g3d_VertexBatch3D,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g3d_VertexBatch3D,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g3d_VertexBatch3D = registerClass(&class_arc_graphics_g3d_VertexBatch3D);

}
