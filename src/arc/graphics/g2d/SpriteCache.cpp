#include "arc/graphics/g2d/SpriteCache.h"
#include "arc/graphics/GLTexture.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/FloatBuffer.h"
#include "arc/graphics/VertexAttribute.h"
#include "arc/graphics/gl/IndexData.h"
#include "arc/struct/IntSeq.h"
#include "arc/graphics/Color.h"
#include "arc/Application.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/Mathf.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/math/Mat.h"
#include "arc/graphics/gl/SpriteIndices.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/g2d/SpriteCache.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/g2d/SpriteCache_Cache.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "arc/graphics/Mesh.h"

extern "C" {

jint SF_arc_graphics_g2d_SpriteCache_vertexSize;
jobject SF_arc_graphics_g2d_SpriteCache_tempVertices;
jobject SF_arc_graphics_g2d_SpriteCache_defaultShader;

void mark_arc_graphics_g2d_SpriteCache(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_SpriteCache_tempVertices)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteCache_tempVertices)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteCache_tempVertices, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteCache_defaultShader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteCache_defaultShader)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteCache_defaultShader, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_SpriteCache *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_transformMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transformMatrix)->clazz)->markFunction)((jobject) self->F_transformMatrix, mark, depth + 1);
	if (self->F_projectionMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_projectionMatrix)->clazz)->markFunction)((jobject) self->F_projectionMatrix, mark, depth + 1);
	if (self->F_combinedMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_combinedMatrix)->clazz)->markFunction)((jobject) self->F_combinedMatrix, mark, depth + 1);
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
	if (self->F_textures)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textures)->clazz)->markFunction)((jobject) self->F_textures, mark, depth + 1);
	if (self->F_counts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_counts)->clazz)->markFunction)((jobject) self->F_counts, mark, depth + 1);
	if (self->F_caches)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_caches)->clazz)->markFunction)((jobject) self->F_caches, mark, depth + 1);
	if (self->F_currentCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentCache)->clazz)->markFunction)((jobject) self->F_currentCache, mark, depth + 1);
	if (self->F_customShader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customShader)->clazz)->markFunction)((jobject) self->F_customShader, mark, depth + 1);
}

void init_arc_graphics_g2d_SpriteCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteCache(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(67);
	init_arc_graphics_g2d_SpriteCache_int_boolean(ctx, (frame[0].o), (1000), (jint(0)));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_SpriteCache_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteCache(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = 16;
	sp[1].o = (jobject)SM_arc_graphics_g2d_SpriteCache_getDefaultShader_R_arc_graphics_gl_Shader(ctx);
	init_arc_graphics_g2d_SpriteCache_int_int_arc_graphics_gl_Shader_boolean(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[2].i));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_SpriteCache_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteCache(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)SM_arc_graphics_g2d_SpriteCache_getDefaultShader_R_arc_graphics_gl_Shader(ctx);
	init_arc_graphics_g2d_SpriteCache_int_int_arc_graphics_gl_Shader_boolean(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[3].i));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_SpriteCache_int_int_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteCache(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(90);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_transformMatrix = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_projectionMatrix = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_combinedMatrix = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (8));
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_textures = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (8));
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_counts = (jref) sp[1].o;
	LINE_NUMBER(56);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_renderCalls = (jint(0));
	LINE_NUMBER(58);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_totalRenderCalls = (jint(0));
	LINE_NUMBER(62);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked = (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_whiteFloatBits);
	LINE_NUMBER(63);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_customShader = (jref) (jobject(nullptr));
	LINE_NUMBER(91);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_shader = (jref) (frame[3].o);
	LINE_NUMBER(93);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	if ((frame[1].i) <= (16382)) goto label_12;
	}
	{
	LINE_NUMBER(94);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't have more than 16382 sprites per batch: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Mesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Mesh);
	jint temp0 = jint(1);
	jint temp1 = frame[1].i;
	sp[2].o = sp[1].o;
	sp[3].i = temp0;
	sp[4].i = temp1;
	sp += 5;
	if ((frame[4].i) == 0) goto label_15;
	}
	INST_ICONST(4);
	goto label_16;
label_15:;
	INST_BIPUSH(6);
label_16:;
	{
	sp -= 6;
	jint temp0 = sp[4].i * sp[5].i;
	jint temp1 = jint(0);
	sp[2].o = (jobject)createArray(ctx, &class_arc_graphics_VertexAttribute, (jint(3)));
	jint temp2 = jint(0);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[4].o = (jobject)SF_arc_graphics_VertexAttribute_position;
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[4].o;
	jint temp3 = jint(1);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[4].o = (jobject)SF_arc_graphics_VertexAttribute_color;
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[4].o;
	jint temp4 = jint(2);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[4].o = (jobject)SF_arc_graphics_VertexAttribute_texCoords;
	ARRAY_ACCESS(jobject, sp[2].o, temp4) = sp[4].o;
	init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute(ctx, sp[1].o, sp[3].i, temp0, temp1, sp[2].o);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(101);
	if ((frame[4].i) == 0) goto label_18;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)SM_arc_graphics_gl_SpriteIndices_get_R_arc_graphics_gl_IndexData(ctx);
	((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	}
label_18:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_setAutoBind_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_setAutoBind_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (frame[2].i));
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_caches = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_SpriteCache_getDefaultShader_R_arc_graphics_gl_Shader(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:getDefaultShader", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteCache(ctx);
	{
	LINE_NUMBER(114);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_defaultShader;
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	(sp++)->o = SF_arc_graphics_g2d_SpriteCache_defaultShader;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(115);
	frame[0].o = (((jobject) createStringLiteral(ctx, u8"attribute vec4 a_position;\nattribute vec4 a_color;\nattribute vec2 a_texCoord0;\nuniform mat4 u_projectionViewMatrix;\nvarying vec4 v_color;\nvarying vec2 v_texCoords;\n\nvoid main(){\n   v_color = a_color;\n   v_color.a = v_color.a * (255.0/254.0);\n   v_texCoords = a_texCoord0;\n   gl_Position =  u_projectionViewMatrix * a_position;\n}\n"_j)));
	LINE_NUMBER(128);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"varying vec4 v_color;\nvarying vec2 v_texCoords;\nuniform sampler2D u_texture;\nvoid main(){\n  gl_FragColor = v_color * texture2D(u_texture, v_texCoords);\n}"_j)));
	LINE_NUMBER(135);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	SF_arc_graphics_g2d_SpriteCache_defaultShader = sp[0].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_SpriteCache_getCaches_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:getCaches", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_colorPacked = temp0;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_colorPacked = temp0;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_SpriteCache_getPackedColor_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:getPackedColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_setPackedColor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:setPackedColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(161);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked = (frame[1].f);
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_beginCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:beginCache", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	if (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"end must be called before beginCache"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"endCache must be called before begin."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	jint temp0 = (jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_SpriteCache$Cache, sp[0].o))))->F_offset;
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	jint temp1 = temp0 + ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_SpriteCache$Cache, sp[0].o))))->F_maxCount);
	sp[0].i = temp1;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_SpriteCache$Cache(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteCache$Cache);
	sp[2].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[2].o))->F_size;
	sp[2].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[2].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[2].o);
	jint temp1 = (jint)((func_java_nio_FloatBuffer_position_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_R_int])(ctx, sp[2].o);
	init_arc_graphics_g2d_SpriteCache$Cache_int_int(ctx, sp[1].o, temp0, temp1);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_currentCache = (jref) sp[1].o;
	LINE_NUMBER(170);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	jint temp2 = (jint)((func_java_nio_FloatBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp2);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_beginCache_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:beginCache", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(179);
	if (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"end must be called before beginCache"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"endCache must be called before begin."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_currentCache = (jref) (checkCast(ctx, &class_arc_graphics_g2d_SpriteCache$Cache, sp[1].o));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[0].o))->F_counts;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(183);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[1].o))->F_offset));
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_SpriteCache_endCache_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:endCache", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beginCache must be called before endCache."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	frame[1].o = sp[0].o;
	LINE_NUMBER(190);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_nio_FloatBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 - ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_offset));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_textures;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(193);
	((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_maxCount = (frame[2].i);
	LINE_NUMBER(194);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[0].o))->F_textureCount = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size);
	LINE_NUMBER(195);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_graphics_Texture)));
	((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[0].o))->F_textures = (jref) (checkCast(ctx, getArrayClass(&class_arc_graphics_Texture, 1), sp[1].o));
	LINE_NUMBER(196);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_textureCount));
	((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[0].o))->F_counts = (jref) sp[1].o;
	LINE_NUMBER(197);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_counts;
	frame[4].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_counts;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_counts;
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[3].i));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(197);
	INST_IINC(3, 1);
	goto label_11;
	}
label_12:;
	goto label_15;
label_4:;
	{
	LINE_NUMBER(201);
	if ((frame[2].i) <= ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_maxCount)) goto label_16;
	}
	{
	LINE_NUMBER(202);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"If a cache is not the last created, it cannot be redefined with more entries than when it was first created: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_maxCount));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" max)"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(207);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[0].o))->F_textureCount = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size);
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_textures;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_textureCount)) goto label_19;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_Texture, ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_textureCount));
	((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[0].o))->F_textures = (jref) sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(210);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_textureCount);
	}
label_21:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_22;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_textures;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o));
	LINE_NUMBER(210);
	INST_IINC(3, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_counts;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_textureCount)) goto label_25;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_textureCount));
	((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[0].o))->F_counts = (jref) sp[1].o;
	}
label_25:;
	{
	LINE_NUMBER(214);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_textureCount);
	}
label_27:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_28;
	}
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_counts;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_counts;
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[3].i));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(214);
	INST_IINC(3, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	frame[4].o = (checkCast(ctx, &class_arc_graphics_g2d_SpriteCache$Cache, sp[0].o));
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer])(ctx, (frame[3].o), (((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[4].o)))->F_offset) + ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[4].o)))->F_maxCount)));
	}
label_15:;
	{
	LINE_NUMBER(223);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache = (jref) (jobject(nullptr));
	LINE_NUMBER(224);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_counts;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(228);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isWeb_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isWeb_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	}
label_37:;
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[1].o)))->F_id);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(238);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_SpriteCache_reserve_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:reserve", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beginCache must be called before ensureSize."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(247);
	jint temp0 = jint(5);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	jint temp1 = (jint)((func_arc_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getNumIndices_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	if (temp1 <= 0) goto label_2;
	}
	INST_ICONST(4);
	goto label_3;
label_2:;
	INST_BIPUSH(6);
label_3:;
	{
	sp -= 2;
	frame[2].i = (sp[0].i * sp[1].i);
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	frame[3].i = ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[0].o))->F_maxCount);
	LINE_NUMBER(251);
	frame[4].i = ((frame[1].i) * (frame[2].i));
	LINE_NUMBER(253);
	frame[5].i = ((frame[4].i) - (frame[3].i));
	LINE_NUMBER(254);
	if ((frame[5].i) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[0].o))->F_maxCount = (((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[0].o))->F_maxCount) + (frame[5].i));
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	jint temp0 = (jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[1].o))->F_offset;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK(sp[1].o))->F_maxCount)));
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return ((frame[5].i) / (frame[2].i));
	}
label_8:;
	{
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_SpriteCache_getSpritesUsed_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:getSpritesUsed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	jint temp0 = (jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_SpriteCache$Cache, sp[0].o))))->F_offset;
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	jint temp1 = temp0 + ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_SpriteCache$Cache, sp[0].o))))->F_maxCount);
	sp[0].i = temp1;
	sp += 1;
	}
label_2:;
	{
	jint temp0 = jint(5);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	jint temp1 = (jint)((func_arc_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getNumIndices_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	if (temp1 <= 0) goto label_3;
	}
	INST_ICONST(4);
	goto label_4;
label_3:;
	INST_BIPUSH(6);
label_4:;
	{
	sp -= 3;
	popStackFrame(ctx);
	return (sp[0].i / (sp[1].i * sp[2].i));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_SpriteCache_getSpriteCapacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:getSpriteCapacity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[0].o);
	jint temp1 = jint(5);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	jint temp2 = (jint)((func_arc_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getNumIndices_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if (temp2 <= 0) goto label_1;
	}
	INST_ICONST(4);
	goto label_2;
label_1:;
	INST_BIPUSH(6);
label_2:;
	{
	sp -= 3;
	popStackFrame(ctx);
	return (sp[0].i / (sp[1].i * sp[2].i));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:add", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beginCache must be called before add."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_nio_FloatBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 + (frame[4].i);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	jint temp2 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[0].o);
	if (temp1 < temp2) goto label_2;
	}
	{
	LINE_NUMBER(278);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Out of vertex space! Size: "_j))));
	sp[2].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[2].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[2].o);
	jint temp0 = (jint)((func_java_nio_FloatBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_FloatBuffer_capacity_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" Required: "_j))));
	sp[2].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[2].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[2].o);
	jint temp1 = (jint)((func_java_nio_FloatBuffer_position_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (temp1 + (frame[4].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	jint temp0 = (jint)((func_arc_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getNumIndices_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_4;
	}
	INST_ICONST(4);
	goto label_5;
label_4:;
	INST_BIPUSH(6);
label_5:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(281);
	frame[6].i = (((frame[4].i) / ((frame[5].i) * (jint(5)))) * (6));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	frame[7].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(283);
	if ((frame[7].i) < 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	if (sp[0].o == (frame[1].o)) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(285);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_counts;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[6].i));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_counts;
	((func_arc_struct_IntSeq_incr_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_incr_int_int])(ctx, sp[0].o, (frame[7].i), (frame[6].i));
	}
label_12:;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(294);
	((func_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width))), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_height))));
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:add", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(299);
	frame[6].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(300);
	frame[7].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(301);
	frame[8].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(302);
	frame[9].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(303);
	frame[10].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(304);
	frame[11].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(306);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[2].f);
	LINE_NUMBER(307);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[3].f);
	LINE_NUMBER(308);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(309);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[8].f);
	LINE_NUMBER(310);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[9].f);
	LINE_NUMBER(312);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[2].f);
	LINE_NUMBER(313);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[7].f);
	LINE_NUMBER(314);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(315);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[8].f);
	LINE_NUMBER(316);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[11].f);
	LINE_NUMBER(318);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[6].f);
	LINE_NUMBER(319);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (frame[7].f);
	LINE_NUMBER(320);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(321);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[10].f);
	LINE_NUMBER(322);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[11].f);
	LINE_NUMBER(324);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	jint temp0 = (jint)((func_arc_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getNumIndices_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_22;
	}
	{
	LINE_NUMBER(325);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[6].f);
	LINE_NUMBER(326);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[3].f);
	LINE_NUMBER(327);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(328);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (frame[10].f);
	LINE_NUMBER(329);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (frame[9].f);
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	((func_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (20));
	goto label_29;
	}
label_22:;
	{
	LINE_NUMBER(332);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[6].f);
	LINE_NUMBER(333);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[7].f);
	LINE_NUMBER(334);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(335);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (frame[10].f);
	LINE_NUMBER(336);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (frame[11].f);
	LINE_NUMBER(338);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (20)) = (frame[6].f);
	LINE_NUMBER(339);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (21)) = (frame[3].f);
	LINE_NUMBER(340);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (22)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(341);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (23)) = (frame[10].f);
	LINE_NUMBER(342);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (24)) = (frame[9].f);
	LINE_NUMBER(344);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (25)) = (frame[2].f);
	LINE_NUMBER(345);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (26)) = (frame[3].f);
	LINE_NUMBER(346);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (27)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(347);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (28)) = (frame[8].f);
	LINE_NUMBER(348);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (29)) = (frame[9].f);
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	((func_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (30));
	}
label_29:;
	LINE_NUMBER(351);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[42];
	auto stack = &frame[37];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:add", 42 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(358);
	frame[11].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(359);
	frame[12].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(360);
	frame[13].f = (-(frame[4].f));
	LINE_NUMBER(361);
	frame[14].f = (-(frame[5].f));
	LINE_NUMBER(362);
	frame[15].f = ((frame[6].f) - (frame[4].f));
	LINE_NUMBER(363);
	frame[16].f = ((frame[7].f) - (frame[5].f));
	LINE_NUMBER(366);
	if ((floatCompare((frame[8].f), (jfloat(1)), -1)) != 0) goto label_7;
	}
	{
	if ((floatCompare((frame[9].f), (jfloat(1)), -1)) == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(367);
	frame[13].f = ((frame[13].f) * (frame[8].f));
	LINE_NUMBER(368);
	frame[14].f = ((frame[14].f) * (frame[9].f));
	LINE_NUMBER(369);
	frame[15].f = ((frame[15].f) * (frame[8].f));
	LINE_NUMBER(370);
	frame[16].f = ((frame[16].f) * (frame[9].f));
	}
label_8:;
	{
	LINE_NUMBER(374);
	frame[17].f = (frame[13].f);
	LINE_NUMBER(375);
	frame[18].f = (frame[14].f);
	LINE_NUMBER(376);
	frame[19].f = (frame[13].f);
	LINE_NUMBER(377);
	frame[20].f = (frame[16].f);
	LINE_NUMBER(378);
	frame[21].f = (frame[15].f);
	LINE_NUMBER(379);
	frame[22].f = (frame[16].f);
	LINE_NUMBER(380);
	frame[23].f = (frame[15].f);
	LINE_NUMBER(381);
	frame[24].f = (frame[14].f);
	LINE_NUMBER(393);
	if ((floatCompare((frame[10].f), (jfloat(0)), -1)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(394);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[10].f));
	frame[33].f = temp0;
	LINE_NUMBER(395);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[10].f));
	frame[34].f = temp1;
	LINE_NUMBER(397);
	frame[25].f = (((frame[33].f) * (frame[17].f)) - ((frame[34].f) * (frame[18].f)));
	LINE_NUMBER(398);
	frame[26].f = (((frame[34].f) * (frame[17].f)) + ((frame[33].f) * (frame[18].f)));
	LINE_NUMBER(400);
	frame[27].f = (((frame[33].f) * (frame[19].f)) - ((frame[34].f) * (frame[20].f)));
	LINE_NUMBER(401);
	frame[28].f = (((frame[34].f) * (frame[19].f)) + ((frame[33].f) * (frame[20].f)));
	LINE_NUMBER(403);
	frame[29].f = (((frame[33].f) * (frame[21].f)) - ((frame[34].f) * (frame[22].f)));
	LINE_NUMBER(404);
	frame[30].f = (((frame[34].f) * (frame[21].f)) + ((frame[33].f) * (frame[22].f)));
	LINE_NUMBER(406);
	frame[31].f = ((frame[25].f) + ((frame[29].f) - (frame[27].f)));
	LINE_NUMBER(407);
	frame[32].f = ((frame[30].f) - ((frame[28].f) - (frame[26].f)));
	LINE_NUMBER(408);
	goto label_32;
	}
label_20:;
	{
	LINE_NUMBER(409);
	frame[25].f = (frame[17].f);
	LINE_NUMBER(410);
	frame[26].f = (frame[18].f);
	LINE_NUMBER(412);
	frame[27].f = (frame[19].f);
	LINE_NUMBER(413);
	frame[28].f = (frame[20].f);
	LINE_NUMBER(415);
	frame[29].f = (frame[21].f);
	LINE_NUMBER(416);
	frame[30].f = (frame[22].f);
	LINE_NUMBER(418);
	frame[31].f = (frame[23].f);
	LINE_NUMBER(419);
	frame[32].f = (frame[24].f);
	}
label_32:;
	{
	LINE_NUMBER(422);
	frame[25].f = ((frame[25].f) + (frame[11].f));
	LINE_NUMBER(423);
	frame[26].f = ((frame[26].f) + (frame[12].f));
	LINE_NUMBER(424);
	frame[27].f = ((frame[27].f) + (frame[11].f));
	LINE_NUMBER(425);
	frame[28].f = ((frame[28].f) + (frame[12].f));
	LINE_NUMBER(426);
	frame[29].f = ((frame[29].f) + (frame[11].f));
	LINE_NUMBER(427);
	frame[30].f = ((frame[30].f) + (frame[12].f));
	LINE_NUMBER(428);
	frame[31].f = ((frame[31].f) + (frame[11].f));
	LINE_NUMBER(429);
	frame[32].f = ((frame[32].f) + (frame[12].f));
	LINE_NUMBER(431);
	frame[33].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(432);
	frame[34].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(433);
	frame[35].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(434);
	frame[36].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(436);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[25].f);
	LINE_NUMBER(437);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[26].f);
	LINE_NUMBER(438);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(439);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[33].f);
	LINE_NUMBER(440);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[34].f);
	LINE_NUMBER(442);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[27].f);
	LINE_NUMBER(443);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[28].f);
	LINE_NUMBER(444);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(445);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[33].f);
	LINE_NUMBER(446);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[36].f);
	LINE_NUMBER(448);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[29].f);
	LINE_NUMBER(449);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (frame[30].f);
	LINE_NUMBER(450);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(451);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[35].f);
	LINE_NUMBER(452);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[36].f);
	LINE_NUMBER(454);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	jint temp0 = (jint)((func_arc_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getNumIndices_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_67;
	}
	{
	LINE_NUMBER(455);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[31].f);
	LINE_NUMBER(456);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[32].f);
	LINE_NUMBER(457);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(458);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (frame[35].f);
	LINE_NUMBER(459);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (frame[34].f);
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	((func_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (20));
	goto label_74;
	}
label_67:;
	{
	LINE_NUMBER(462);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[29].f);
	LINE_NUMBER(463);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[30].f);
	LINE_NUMBER(464);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(465);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (frame[35].f);
	LINE_NUMBER(466);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (frame[36].f);
	LINE_NUMBER(468);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (20)) = (frame[31].f);
	LINE_NUMBER(469);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (21)) = (frame[32].f);
	LINE_NUMBER(470);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (22)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(471);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (23)) = (frame[35].f);
	LINE_NUMBER(472);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (24)) = (frame[34].f);
	LINE_NUMBER(474);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (25)) = (frame[25].f);
	LINE_NUMBER(475);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (26)) = (frame[26].f);
	LINE_NUMBER(476);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (27)) = ((jfloat)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(477);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (28)) = (frame[33].f);
	LINE_NUMBER(478);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (29)) = (frame[34].f);
	LINE_NUMBER(479);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_SpriteCache_tempVertices;
	((func_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (30));
	}
label_74:;
	LINE_NUMBER(481);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:begin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(485);
	((func_arc_graphics_g2d_SpriteCache_begin_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_begin_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_begin_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:begin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(490);
	if (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"end must be called before begin."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_currentCache;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"endCache must be called before begin"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(492);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_renderCalls = (jint(0));
	LINE_NUMBER(493);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_customShader;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[-1].o))->F_shader;
label_5:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(494);
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, (frame[2].o));
	LINE_NUMBER(496);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_combinedMatrix;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(498);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_projectionViewMatrix"_j));
	sp[2].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_combinedMatrix;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_8:;
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_bind_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_bind_arc_graphics_gl_Shader])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(502);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing = (jint(1));
	LINE_NUMBER(503);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:end", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(507);
	if (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"begin must be called before end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(508);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing = (jint(0));
	LINE_NUMBER(510);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_customShader;
	((func_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(514);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(518);
	if (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteCache.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_g2d_SpriteCache$Cache, sp[0].o));
	LINE_NUMBER(521);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	jint temp0 = (jint)((func_arc_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getNumIndices_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_3;
	}
	INST_ICONST(4);
	goto label_4;
label_3:;
	INST_BIPUSH(6);
label_4:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(522);
	frame[4].i = ((((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[2].o)))->F_offset) / ((frame[3].i) * (jint(5)))) * (6));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[2].o)))->F_textures;
	frame[5].o = sp[0].o;
	LINE_NUMBER(524);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[2].o)))->F_counts;
	frame[6].o = sp[0].o;
	LINE_NUMBER(525);
	frame[7].i = ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[2].o)))->F_textureCount);
	LINE_NUMBER(526);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_customShader;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[-1].o))->F_shader;
label_11:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(527);
	frame[9].i = (jint(0));
	}
label_13:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_14;
	}
	{
	LINE_NUMBER(528);
	frame[10].i = ((jint)ARRAY_ACCESS(jint, (frame[6].o), (frame[9].i)));
	LINE_NUMBER(529);
	((func_arc_graphics_Texture_bind) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i))))->vtable)[VTABLE_arc_graphics_Texture_bind])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i))));
	LINE_NUMBER(531);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int])(ctx, sp[0].o, (frame[8].o), (jint(4)), (frame[4].i), (frame[10].i));
	LINE_NUMBER(532);
	frame[4].i = ((frame[4].i) + (frame[10].i));
	LINE_NUMBER(527);
	INST_IINC(9, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(534);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_renderCalls = (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_renderCalls) + (frame[7].i));
	LINE_NUMBER(535);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_totalRenderCalls = (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_totalRenderCalls) + (frame[7].i));
	LINE_NUMBER(536);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_draw_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(544);
	if (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteCache.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(546);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[4].o = (checkCast(ctx, &class_arc_graphics_g2d_SpriteCache$Cache, sp[0].o));
	LINE_NUMBER(547);
	frame[2].i = (((frame[2].i) * (6)) + ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[4].o)))->F_offset));
	LINE_NUMBER(548);
	frame[3].i = ((frame[3].i) * (6));
	LINE_NUMBER(549);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[4].o)))->F_textures;
	frame[5].o = sp[0].o;
	LINE_NUMBER(550);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[4].o)))->F_counts;
	frame[6].o = sp[0].o;
	LINE_NUMBER(551);
	frame[7].i = ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[4].o)))->F_textureCount);
	LINE_NUMBER(552);
	frame[8].i = (jint(0));
	}
label_8:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_9;
	}
	{
	LINE_NUMBER(553);
	((func_arc_graphics_Texture_bind) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))))->vtable)[VTABLE_arc_graphics_Texture_bind])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))));
	LINE_NUMBER(554);
	frame[9].i = ((jint)ARRAY_ACCESS(jint, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(555);
	if ((frame[9].i) <= (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(556);
	frame[8].i = (frame[7].i);
	LINE_NUMBER(557);
	frame[9].i = (frame[3].i);
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(559);
	frame[3].i = ((frame[3].i) - (frame[9].i));
	}
label_16:;
	{
	LINE_NUMBER(560);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_customShader;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(4)), (frame[2].i), (frame[9].i));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(4)), (frame[2].i), (frame[9].i));
	}
label_19:;
	{
	LINE_NUMBER(564);
	frame[2].i = ((frame[2].i) + (frame[9].i));
	LINE_NUMBER(552);
	INST_IINC(8, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(566);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_renderCalls = (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_renderCalls) + ((jint)((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[4].o)))->F_textureCount));
	LINE_NUMBER(567);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_totalRenderCalls = (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK(sp[0].o))->F_totalRenderCalls) + (frame[7].i));
	LINE_NUMBER(568);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(574);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_shader;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = (jobject)SM_arc_graphics_g2d_SpriteCache_getDefaultShader_R_arc_graphics_gl_Shader(ctx);
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_dispose])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(575);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_SpriteCache_getProjectionMatrix_R_arc_math_Mat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:getProjectionMatrix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_setProjectionMatrix_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:setProjectionMatrix", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(582);
	if (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't set the matrix within begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_SpriteCache_getTransformMatrix_R_arc_math_Mat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:getTransformMatrix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_setTransformMatrix_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:setTransformMatrix", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(591);
	if (((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't set the matrix within begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(592);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteCache_setShader_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:setShader", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(606);
	((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_customShader = (jref) (frame[1].o);
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_SpriteCache_isDrawing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:isDrawing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_SpriteCache *) NULL_CHECK((frame[0].o)))->F_drawing);
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_g2d_SpriteCache(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_g2d_SpriteCache_vertexSize = jint(5);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteCache(ctx);
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject) createArray(ctx, &class_float, (30));
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	SF_arc_graphics_g2d_SpriteCache_tempVertices = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_graphics_g2d_SpriteCache;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field defaultShader
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_graphics_g2d_SpriteCache[] {
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
	(void *) M_arc_graphics_g2d_SpriteCache_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_SpriteCache_getCaches_R_arc_struct_Seq,
	(void *) M_arc_graphics_g2d_SpriteCache_setColor_float_float_float_float,
	(void *) M_arc_graphics_g2d_SpriteCache_setColor_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_SpriteCache_getPackedColor_R_float,
	(void *) M_arc_graphics_g2d_SpriteCache_setPackedColor_float,
	(void *) M_arc_graphics_g2d_SpriteCache_beginCache,
	(void *) M_arc_graphics_g2d_SpriteCache_beginCache_int,
	(void *) M_arc_graphics_g2d_SpriteCache_endCache_R_int,
	(void *) M_arc_graphics_g2d_SpriteCache_clear,
	(void *) M_arc_graphics_g2d_SpriteCache_reserve_int_R_int,
	(void *) M_arc_graphics_g2d_SpriteCache_getSpritesUsed_R_int,
	(void *) M_arc_graphics_g2d_SpriteCache_getSpriteCapacity_R_int,
	(void *) M_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int,
	(void *) M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float,
	(void *) M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float,
	(void *) M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float,
	(void *) M_arc_graphics_g2d_SpriteCache_begin,
	(void *) M_arc_graphics_g2d_SpriteCache_begin_boolean,
	(void *) M_arc_graphics_g2d_SpriteCache_end,
	(void *) M_arc_graphics_g2d_SpriteCache_draw_int,
	(void *) M_arc_graphics_g2d_SpriteCache_draw_int_int_int,
	(void *) M_arc_graphics_g2d_SpriteCache_getProjectionMatrix_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_SpriteCache_setProjectionMatrix_arc_math_Mat,
	(void *) M_arc_graphics_g2d_SpriteCache_getTransformMatrix_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_SpriteCache_setTransformMatrix_arc_math_Mat,
	(void *) M_arc_graphics_g2d_SpriteCache_setShader_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g2d_SpriteCache_isDrawing_R_boolean,
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
	{ "getCaches", "()Larc/struct/Seq;" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "getPackedColor", "()F" },
	{ "setPackedColor", "(F)V" },
	{ "beginCache", "()V" },
	{ "beginCache", "(I)V" },
	{ "endCache", "()I" },
	{ "clear", "()V" },
	{ "reserve", "(I)I" },
	{ "getSpritesUsed", "()I" },
	{ "getSpriteCapacity", "()I" },
	{ "add", "(Larc/graphics/Texture;[FII)V" },
	{ "add", "(Larc/graphics/g2d/TextureRegion;FF)V" },
	{ "add", "(Larc/graphics/g2d/TextureRegion;FFFF)V" },
	{ "add", "(Larc/graphics/g2d/TextureRegion;FFFFFFFFF)V" },
	{ "begin", "()V" },
	{ "begin", "(Z)V" },
	{ "end", "()V" },
	{ "draw", "(I)V" },
	{ "draw", "(III)V" },
	{ "getProjectionMatrix", "()Larc/math/Mat;" },
	{ "setProjectionMatrix", "(Larc/math/Mat;)V" },
	{ "getTransformMatrix", "()Larc/math/Mat;" },
	{ "setTransformMatrix", "(Larc/math/Mat;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;)V" },
	{ "isDrawing", "()Z" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_graphics_g2d_SpriteCache$Cache,
};

static FieldMetadata fields[] {
	{ "vertexSize", &class_int, (intptr_t) &SF_arc_graphics_g2d_SpriteCache_vertexSize, "I", 24 },
	{ "tempVertices", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteCache_tempVertices, "[F", 26 },
	{ "mesh", &class_arc_graphics_Mesh, offsetof(arc_graphics_g2d_SpriteCache, F_mesh), "Larc/graphics/Mesh;", 18 },
	{ "transformMatrix", &class_arc_math_Mat, offsetof(arc_graphics_g2d_SpriteCache, F_transformMatrix), "Larc/math/Mat;", 18 },
	{ "projectionMatrix", &class_arc_math_Mat, offsetof(arc_graphics_g2d_SpriteCache, F_projectionMatrix), "Larc/math/Mat;", 18 },
	{ "combinedMatrix", &class_arc_math_Mat, offsetof(arc_graphics_g2d_SpriteCache, F_combinedMatrix), "Larc/math/Mat;", 18 },
	{ "shader", &class_arc_graphics_gl_Shader, offsetof(arc_graphics_g2d_SpriteCache, F_shader), "Larc/graphics/gl/Shader;", 18 },
	{ "textures", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_SpriteCache, F_textures), "Larc/struct/Seq;", 18 },
	{ "counts", &class_arc_struct_IntSeq, offsetof(arc_graphics_g2d_SpriteCache, F_counts), "Larc/struct/IntSeq;", 18 },
	{ "renderCalls", &class_int, offsetof(arc_graphics_g2d_SpriteCache, F_renderCalls), "I", 1 },
	{ "totalRenderCalls", &class_int, offsetof(arc_graphics_g2d_SpriteCache, F_totalRenderCalls), "I", 1 },
	{ "drawing", &class_boolean, offsetof(arc_graphics_g2d_SpriteCache, F_drawing), "Z", 2 },
	{ "caches", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_SpriteCache, F_caches), "Larc/struct/Seq;", 2 },
	{ "currentCache", &class_arc_graphics_g2d_SpriteCache$Cache, offsetof(arc_graphics_g2d_SpriteCache, F_currentCache), "Larc/graphics/g2d/SpriteCache$Cache;", 2 },
	{ "colorPacked", &class_float, offsetof(arc_graphics_g2d_SpriteCache, F_colorPacked), "F", 2 },
	{ "customShader", &class_arc_graphics_gl_Shader, offsetof(arc_graphics_g2d_SpriteCache, F_customShader), "Larc/graphics/gl/Shader;", 2 },
	{ "defaultShader", &class_arc_graphics_gl_Shader, (intptr_t) &SF_arc_graphics_g2d_SpriteCache_defaultShader, "Larc/graphics/gl/Shader;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteCache, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteCache_int_boolean, 0, "(IZ)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteCache_int_int_boolean, 0, "(IIZ)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteCache_int_int_arc_graphics_gl_Shader_boolean, 0, "(IILarc/graphics/gl/Shader;Z)V", 1 },
	{ "getDefaultShader", (intptr_t) SM_arc_graphics_g2d_SpriteCache_getDefaultShader_R_arc_graphics_gl_Shader, 0, "()Larc/graphics/gl/Shader;", 9 },
	{ "getCaches", (intptr_t) M_arc_graphics_g2d_SpriteCache_getCaches_R_arc_struct_Seq, VTABLE_arc_graphics_g2d_SpriteCache_getCaches_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "setColor", (intptr_t) M_arc_graphics_g2d_SpriteCache_setColor_float_float_float_float, VTABLE_arc_graphics_g2d_SpriteCache_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "setColor", (intptr_t) M_arc_graphics_g2d_SpriteCache_setColor_arc_graphics_Color, VTABLE_arc_graphics_g2d_SpriteCache_setColor_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "getPackedColor", (intptr_t) M_arc_graphics_g2d_SpriteCache_getPackedColor_R_float, VTABLE_arc_graphics_g2d_SpriteCache_getPackedColor_R_float, "()F", 1 },
	{ "setPackedColor", (intptr_t) M_arc_graphics_g2d_SpriteCache_setPackedColor_float, VTABLE_arc_graphics_g2d_SpriteCache_setPackedColor_float, "(F)V", 1 },
	{ "beginCache", (intptr_t) M_arc_graphics_g2d_SpriteCache_beginCache, VTABLE_arc_graphics_g2d_SpriteCache_beginCache, "()V", 1 },
	{ "beginCache", (intptr_t) M_arc_graphics_g2d_SpriteCache_beginCache_int, VTABLE_arc_graphics_g2d_SpriteCache_beginCache_int, "(I)V", 1 },
	{ "endCache", (intptr_t) M_arc_graphics_g2d_SpriteCache_endCache_R_int, VTABLE_arc_graphics_g2d_SpriteCache_endCache_R_int, "()I", 1 },
	{ "clear", (intptr_t) M_arc_graphics_g2d_SpriteCache_clear, VTABLE_arc_graphics_g2d_SpriteCache_clear, "()V", 1 },
	{ "reserve", (intptr_t) M_arc_graphics_g2d_SpriteCache_reserve_int_R_int, VTABLE_arc_graphics_g2d_SpriteCache_reserve_int_R_int, "(I)I", 1 },
	{ "getSpritesUsed", (intptr_t) M_arc_graphics_g2d_SpriteCache_getSpritesUsed_R_int, VTABLE_arc_graphics_g2d_SpriteCache_getSpritesUsed_R_int, "()I", 1 },
	{ "getSpriteCapacity", (intptr_t) M_arc_graphics_g2d_SpriteCache_getSpriteCapacity_R_int, VTABLE_arc_graphics_g2d_SpriteCache_getSpriteCapacity_R_int, "()I", 1 },
	{ "add", (intptr_t) M_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int, VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int, "(Larc/graphics/Texture;[FII)V", 1 },
	{ "add", (intptr_t) M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float, VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float, "(Larc/graphics/g2d/TextureRegion;FF)V", 1 },
	{ "add", (intptr_t) M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float, VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFFF)V", 1 },
	{ "add", (intptr_t) M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float, VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFFFFFFFF)V", 1 },
	{ "begin", (intptr_t) M_arc_graphics_g2d_SpriteCache_begin, VTABLE_arc_graphics_g2d_SpriteCache_begin, "()V", 1 },
	{ "begin", (intptr_t) M_arc_graphics_g2d_SpriteCache_begin_boolean, VTABLE_arc_graphics_g2d_SpriteCache_begin_boolean, "(Z)V", 1 },
	{ "end", (intptr_t) M_arc_graphics_g2d_SpriteCache_end, VTABLE_arc_graphics_g2d_SpriteCache_end, "()V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_SpriteCache_draw_int, VTABLE_arc_graphics_g2d_SpriteCache_draw_int, "(I)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_SpriteCache_draw_int_int_int, VTABLE_arc_graphics_g2d_SpriteCache_draw_int_int_int, "(III)V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_g2d_SpriteCache_dispose, VTABLE_arc_graphics_g2d_SpriteCache_dispose, "()V", 1 },
	{ "getProjectionMatrix", (intptr_t) M_arc_graphics_g2d_SpriteCache_getProjectionMatrix_R_arc_math_Mat, VTABLE_arc_graphics_g2d_SpriteCache_getProjectionMatrix_R_arc_math_Mat, "()Larc/math/Mat;", 1 },
	{ "setProjectionMatrix", (intptr_t) M_arc_graphics_g2d_SpriteCache_setProjectionMatrix_arc_math_Mat, VTABLE_arc_graphics_g2d_SpriteCache_setProjectionMatrix_arc_math_Mat, "(Larc/math/Mat;)V", 1 },
	{ "getTransformMatrix", (intptr_t) M_arc_graphics_g2d_SpriteCache_getTransformMatrix_R_arc_math_Mat, VTABLE_arc_graphics_g2d_SpriteCache_getTransformMatrix_R_arc_math_Mat, "()Larc/math/Mat;", 1 },
	{ "setTransformMatrix", (intptr_t) M_arc_graphics_g2d_SpriteCache_setTransformMatrix_arc_math_Mat, VTABLE_arc_graphics_g2d_SpriteCache_setTransformMatrix_arc_math_Mat, "(Larc/math/Mat;)V", 1 },
	{ "setShader", (intptr_t) M_arc_graphics_g2d_SpriteCache_setShader_arc_graphics_gl_Shader, VTABLE_arc_graphics_g2d_SpriteCache_setShader_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "isDrawing", (intptr_t) M_arc_graphics_g2d_SpriteCache_isDrawing_R_boolean, VTABLE_arc_graphics_g2d_SpriteCache_isDrawing_R_boolean, "()Z", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_g2d_SpriteCache, 0, "()V", 8 },
};

Class class_arc_graphics_g2d_SpriteCache{
		.nativeName = (intptr_t) "arc/graphics/g2d/SpriteCache",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_SpriteCache),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_SpriteCache,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_SpriteCache,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_SpriteCache,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_SpriteCache = registerClass(&class_arc_graphics_g2d_SpriteCache);

}
