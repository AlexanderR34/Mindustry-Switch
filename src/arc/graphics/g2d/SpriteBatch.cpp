#include "arc/graphics/g2d/SpriteBatch.h"
#include "arc/graphics/GLTexture.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/FloatBuffer.h"
#include "arc/graphics/VertexAttribute.h"
#include "arc/graphics/g2d/SpriteBatch_PopulateTask.h"
#include "arc/graphics/g2d/Batch.h"
#include "java/lang/Float.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/util/Arrays.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "arc/util/OS.h"
#include "arc/graphics/g2d/SpriteBatch.h"
#include "java/lang/Throwable.h"
#include "arc/graphics/Blending.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/Disposable.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/g2d/ForkJoinHolder.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "java/nio/ShortBuffer.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/g2d/SpriteBatch_DrawRequest.h"
#include "java/util/concurrent/ForkJoinPool.h"
#include "arc/graphics/g2d/SpriteBatch_CountingSort.h"
#include "arc/graphics/Mesh.h"
#include "java/lang/System.h"

extern "C" {

jint SF_arc_graphics_g2d_SpriteBatch_VERTEX_SIZE;
jint SF_arc_graphics_g2d_SpriteBatch_SPRITE_SIZE;
jint SF_arc_graphics_g2d_SpriteBatch_initialSize;
jobject SF_arc_graphics_g2d_SpriteBatch_emptyVertices;
jlong SF_arc_graphics_g2d_SpriteBatch_totalDrawCalls;
jobject SF_arc_graphics_g2d_SpriteBatch_commonPool;

void mark_arc_graphics_g2d_SpriteBatch(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_SpriteBatch_emptyVertices)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch_emptyVertices)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch_emptyVertices, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch_commonPool)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch_commonPool)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch_commonPool, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_g2d_Batch(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_g2d_SpriteBatch *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_tmpVertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpVertices)->clazz)->markFunction)((jobject) self->F_tmpVertices, mark, depth + 1);
	if (self->F_requestVerts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requestVerts)->clazz)->markFunction)((jobject) self->F_requestVerts, mark, depth + 1);
	if (self->F_requests)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requests)->clazz)->markFunction)((jobject) self->F_requests, mark, depth + 1);
	if (self->F_copy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_copy)->clazz)->markFunction)((jobject) self->F_copy, mark, depth + 1);
	if (self->F_requestZ)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requestZ)->clazz)->markFunction)((jobject) self->F_requestZ, mark, depth + 1);
	if (self->F_contiguous)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contiguous)->clazz)->markFunction)((jobject) self->F_contiguous, mark, depth + 1);
	if (self->F_contiguousCopy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contiguousCopy)->clazz)->markFunction)((jobject) self->F_contiguousCopy, mark, depth + 1);
}

void init_arc_graphics_g2d_SpriteBatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(62);
	init_arc_graphics_g2d_SpriteBatch_int_arc_graphics_gl_Shader(ctx, (frame[0].o), (4096), (jobject(nullptr)));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_SpriteBatch_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(70);
	init_arc_graphics_g2d_SpriteBatch_int_arc_graphics_gl_Shader(ctx, (frame[0].o), (frame[1].i), (jobject(nullptr)));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_SpriteBatch_int_arc_graphics_gl_Shader(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:<init>", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(83);
	init_arc_graphics_g2d_Batch(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isIos) != 0) goto label_6;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isAndroid;
	if ((--sp)->i != 0) goto label_6;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_multithreaded = sp[1].i;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (24));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_tmpVertices = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(240000)));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requestVerts = (jref) sp[1].o;
	LINE_NUMBER(41);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVertOffset = (jint(0));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_SpriteBatch$DrawRequest, (10000));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requests = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_SpriteBatch$DrawRequest, (jint(0)));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_copy = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10000));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requestZ = (jref) sp[1].o;
	LINE_NUMBER(46);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_numRequests = (jint(0));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (2048));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_contiguous = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (2048));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_contiguousCopy = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, (((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_z) + (jfloat(16.0f))));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_intZ = temp0;
	LINE_NUMBER(85);
	if ((frame[1].i) <= (8191)) goto label_17;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't have more than 8191 sprites per batch: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(87);
	if ((frame[1].i) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
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
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Mesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Mesh);
	jint temp5 = jint(1);
	jint temp6 = jint(0);
	jint temp7 = (frame[1].i) * (jint(4));
	jint temp8 = (frame[1].i) * (6);
	sp[2].o = (jobject)createArray(ctx, &class_arc_graphics_VertexAttribute, (jint(4)));
	jint temp9 = jint(0);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[3].o = (jobject)SF_arc_graphics_VertexAttribute_position;
	ARRAY_ACCESS(jobject, sp[2].o, temp9) = sp[3].o;
	jint temp10 = jint(1);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[3].o = (jobject)SF_arc_graphics_VertexAttribute_color;
	ARRAY_ACCESS(jobject, sp[2].o, temp10) = sp[3].o;
	jint temp11 = jint(2);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[3].o = (jobject)SF_arc_graphics_VertexAttribute_texCoords;
	ARRAY_ACCESS(jobject, sp[2].o, temp11) = sp[3].o;
	jint temp12 = jint(3);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[3].o = (jobject)SF_arc_graphics_VertexAttribute_mixColor;
	ARRAY_ACCESS(jobject, sp[2].o, temp12) = sp[3].o;
	init_arc_graphics_Mesh_boolean_boolean_int_int_Array1_arc_graphics_VertexAttribute(ctx, sp[1].o, temp5, temp6, temp7, temp8, sp[2].o);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(97);
	frame[3].i = ((frame[1].i) * (6));
	LINE_NUMBER(98);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(99);
	frame[5].i = (jint(0));
	LINE_NUMBER(100);
	frame[6].i = (jint(0));
	}
label_25:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_26;
	}
	{
	LINE_NUMBER(101);
	ARRAY_ACCESS(jshort, (frame[4].o), (frame[6].i)) = (frame[5].i);
	LINE_NUMBER(102);
	ARRAY_ACCESS(jshort, (frame[4].o), ((frame[6].i) + (jint(1)))) = (jshort(((frame[5].i) + (jint(1)))));
	LINE_NUMBER(103);
	ARRAY_ACCESS(jshort, (frame[4].o), ((frame[6].i) + (jint(2)))) = (jshort(((frame[5].i) + (jint(2)))));
	LINE_NUMBER(104);
	ARRAY_ACCESS(jshort, (frame[4].o), ((frame[6].i) + (jint(3)))) = (jshort(((frame[5].i) + (jint(2)))));
	LINE_NUMBER(105);
	ARRAY_ACCESS(jshort, (frame[4].o), ((frame[6].i) + (jint(4)))) = (jshort(((frame[5].i) + (jint(3)))));
	LINE_NUMBER(106);
	ARRAY_ACCESS(jshort, (frame[4].o), ((frame[6].i) + (jint(5)))) = (frame[5].i);
	LINE_NUMBER(100);
	INST_IINC(6, 6);
	frame[5].i = (jshort(((frame[5].i) + (jint(4)))));
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_setIndices_Array1_short_R_arc_graphics_Mesh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_setIndices_Array1_short_R_arc_graphics_Mesh])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_nio_FloatBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(112);
	if ((frame[2].o) != nullptr) goto label_37;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_g2d_SpriteBatch_createShader_R_arc_graphics_gl_Shader(ctx);
	((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_shader = (jref) sp[1].o;
	LINE_NUMBER(114);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_ownsShader = (jint(1));
	goto label_40;
	}
label_37:;
	{
	LINE_NUMBER(116);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_shader = (jref) (frame[2].o);
	}
label_40:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, sp[0].o);
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(122);
	goto label_43;
	}
label_18:;
	{
	LINE_NUMBER(123);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_shader = (jref) (jobject(nullptr));
	}
label_43:;
	{
	LINE_NUMBER(126);
	frame[3].i = (jint(0));
	}
label_44:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_45;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	jint temp0 = frame[3].i;
	clinit_arc_graphics_g2d_SpriteBatch$DrawRequest(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteBatch$DrawRequest);
	init_arc_graphics_g2d_SpriteBatch$DrawRequest(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(126);
	INST_IINC(3, 1);
	goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(130);
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_multithreaded) == 0) goto label_48;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(132);
	clinit_arc_graphics_g2d_ForkJoinHolder(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_ForkJoinHolder);
	init_arc_graphics_g2d_ForkJoinHolder(ctx, sp[0].o);
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	SF_arc_graphics_g2d_SpriteBatch_commonPool = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(135);
	goto label_48;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(133);
	frame[3].o = sp[0].o;
	LINE_NUMBER(134);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_multithreaded = (jint(0));
	}
label_48:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	M_arc_graphics_g2d_Batch_dispose(ctx, (frame[0].o));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_dispose])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_setSort_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:setSort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(149);
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_sort) == (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(150);
	((func_arc_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(152);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_sort = (frame[1].i);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_setShader_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:setShader", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(157);
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_flushing) != 0) goto label_1;
	}
	{
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_sort) == 0) goto label_1;
	}
	{
	LINE_NUMBER(158);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Shaders cannot be set while sorting is enabled. Set shaders inside Draw.run(...)."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(160);
	M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_setBlending_arc_graphics_Blending(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:setBlending", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_blending = (jref) (frame[1].o);
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_z_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:z", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(170);
	if ((floatCompare((frame[1].f), ((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_z), -1)) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(171);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_z = (frame[1].f);
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((frame[1].f) + (jfloat(16.0f))));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_intZ = temp0;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_discard(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:discard", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	M_arc_graphics_g2d_Batch_discard(ctx, (frame[0].o));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(184);
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	SF_arc_graphics_g2d_SpriteBatch_totalDrawCalls = ((clinit_arc_graphics_g2d_SpriteBatch(ctx), (jlong)SF_arc_graphics_g2d_SpriteBatch_totalDrawCalls) + (jlong(((frame[4].i) / (24)))));
	LINE_NUMBER(186);
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_sort) == 0) goto label_2;
	}
	{
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_flushing) != 0) goto label_2;
	}
	{
	LINE_NUMBER(187);
	frame[5].i = ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_numRequests);
	LINE_NUMBER(188);
	if ((frame[5].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[5].i) - (jint(1)))));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[6].o)))->F_run;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[6].o)))->F_texture;
	if (sp[0].o != (frame[1].o)) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[6].o)))->F_blending;
	sp[1].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_blending;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestZ;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[5].i) - (jint(1))))) != ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_intZ)) goto label_5;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = frame[2].o;
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_SpriteBatch_emptyVertices;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(192);
	((func_arc_graphics_g2d_SpriteBatch_prepare_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_prepare_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(193);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVerts;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVertOffset), (frame[4].i));
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requestVertOffset = (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requestVertOffset) + (frame[4].i));
	}
label_9:;
	{
	LINE_NUMBER(196);
	sp[0].o = frame[6].o;
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK(sp[0].o))->F_verticesLength = (((jint)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK(sp[0].o))->F_verticesLength) + (frame[4].i));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(200);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_14;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_graphics_g2d_SpriteBatch_expandRequests) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_expandRequests])(ctx, sp[0].o);
label_14:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(202);
	sp[0].o = frame[2].o;
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_SpriteBatch_emptyVertices;
	if (sp[0].o == sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(203);
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[6].o)))->F_verticesOffset = ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVertOffset);
	LINE_NUMBER(204);
	((func_arc_graphics_g2d_SpriteBatch_prepare_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_prepare_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(205);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVerts;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVertOffset), (frame[4].i));
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requestVertOffset = (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requestVertOffset) + (frame[4].i));
	goto label_21;
	}
label_16:;
	{
	LINE_NUMBER(208);
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[6].o)))->F_verticesOffset = (frame[3].i);
	}
label_21:;
	{
	LINE_NUMBER(210);
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[6].o)))->F_verticesLength = (frame[4].i);
	LINE_NUMBER(211);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestZ;
	ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)) = ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_intZ);
	LINE_NUMBER(212);
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[6].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(213);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_blending;
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(214);
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[6].o)))->F_run = (jref) (jobject(nullptr));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_numRequests = (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_numRequests) + (jint(1)));
	LINE_NUMBER(216);
	goto label_28;
	}
label_2:;
	{
	LINE_NUMBER(217);
	((func_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	}
label_28:;
	LINE_NUMBER(219);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:draw", 21 };
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
	{
	LINE_NUMBER(223);
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_sort) == 0) goto label_1;
	}
	{
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_flushing) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(224);
	((func_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(227);
	frame[9].i = ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVertOffset);
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requestVertOffset = (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requestVertOffset) + (24));
	LINE_NUMBER(229);
	((func_arc_graphics_g2d_SpriteBatch_prepare_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_prepare_int])(ctx, (frame[0].o), (24));
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVerts;
	((func_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float])(ctx, sp[0].o, sp[1].o, (frame[9].i), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f));
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_SpriteBatch_emptyVertices;
	((func_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_Texture_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_Texture_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[9].i), (24));
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_draw_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	SF_arc_graphics_g2d_SpriteBatch_totalDrawCalls = ((clinit_arc_graphics_g2d_SpriteBatch(ctx), (jlong)SF_arc_graphics_g2d_SpriteBatch_totalDrawCalls) + (jlong(1)));
	LINE_NUMBER(238);
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_sort) == 0) goto label_2;
	}
	{
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_flushing) != 0) goto label_2;
	}
	{
	LINE_NUMBER(239);
	jint temp0 = (jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_numRequests;
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_graphics_g2d_SpriteBatch_expandRequests) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_expandRequests])(ctx, sp[0].o);
label_4:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_numRequests)));
	LINE_NUMBER(241);
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[2].o)))->F_run = (jref) (frame[1].o);
	LINE_NUMBER(242);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_blending;
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(243);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestZ;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_numRequests)) = ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_intZ);
	LINE_NUMBER(244);
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[2].o)))->F_texture = (jref) (jobject(nullptr));
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_numRequests = (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_numRequests) + (jint(1)));
	LINE_NUMBER(246);
	goto label_11;
	}
label_2:;
	{
	LINE_NUMBER(247);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	}
label_11:;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_prepare_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:prepare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(252);
	jint temp0 = ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVertOffset) + (frame[1].i);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVerts;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVerts;
	sp[2].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVerts;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_float_int_R_Array1_float(ctx, sp[1].o, ((((jarray) nullCheck(ctx, sp[2].o))->length) << (jint(1))));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requestVerts = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_expandRequests(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:expandRequests", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	frame[1].o = sp[0].o;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[1].o), (((((jarray) nullCheck(ctx, (frame[1].o)))->length) * (7)) / (jint(4))));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_arc_graphics_g2d_SpriteBatch$DrawRequest, 1), sp[0].o));
	LINE_NUMBER(257);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_3:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_arc_graphics_g2d_SpriteBatch$DrawRequest(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteBatch$DrawRequest);
	init_arc_graphics_g2d_SpriteBatch$DrawRequest(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(257);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(260);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests = (jref) (frame[2].o);
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestZ;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_requestZ = (jref) sp[1].o;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:flush", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_flushing) != 0) goto label_1;
	}
	{
	LINE_NUMBER(267);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_flushing = (jint(1));
	LINE_NUMBER(268);
	((func_arc_graphics_g2d_SpriteBatch_flushRequests) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_flushRequests])(ctx, (frame[0].o));
	LINE_NUMBER(269);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_flushing = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(272);
	if (((jint)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx) != 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_arc_graphics_g2d_SpriteBatch_getShader_R_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_getShader_R_arc_graphics_gl_Shader])(ctx, (frame[0].o));
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(275);
	((func_arc_graphics_g2d_SpriteBatch_setupMatrices) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_setupMatrices])(ctx, (frame[0].o));
	LINE_NUMBER(277);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	if (((jint)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_apply) == 0) goto label_8;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_customShader;
	((func_arc_graphics_gl_Shader_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_apply])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(281);
	SM_arc_graphics_Gl_depthMask_boolean(ctx, (jint(0)));
	LINE_NUMBER(282);
	frame[1].i = ((((jint)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx) / (24)) * (6));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_blending;
	((func_arc_graphics_Blending_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Blending_apply])(ctx, sp[0].o);
	LINE_NUMBER(286);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	((func_arc_graphics_Texture_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_bind])(ctx, sp[0].o);
	LINE_NUMBER(287);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	frame[2].o = sp[0].o;
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, (frame[2].o));
	LINE_NUMBER(291);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(292);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, ((jint)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx));
	LINE_NUMBER(294);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_graphics_g2d_SpriteBatch_getShader_R_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_getShader_R_arc_graphics_gl_Shader])(ctx, (frame[0].o));
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(4)), (jint(0)), (frame[1].i));
	LINE_NUMBER(296);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(297);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(299);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx = (jint(0));
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_flushRequests(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:flushRequests", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_numRequests) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(304);
	((func_arc_graphics_g2d_SpriteBatch_sortRequests) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_sortRequests])(ctx, (frame[0].o));
	LINE_NUMBER(305);
	frame[1].f = ((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	frame[2].f = ((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_mixColorPacked);
	LINE_NUMBER(306);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_blending;
	frame[3].o = sp[0].o;
	LINE_NUMBER(308);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVerts;
	frame[4].o = sp[0].o;
	LINE_NUMBER(309);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_copy;
	frame[5].o = sp[0].o;
	LINE_NUMBER(310);
	frame[6].i = ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_numRequests);
	LINE_NUMBER(311);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_10;
	}
	{
	LINE_NUMBER(312);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[8].o)))->F_blending;
	M_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(316);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[8].o)))->F_run;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[8].o)))->F_run;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(318);
	((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[8].o)))->F_run = (jref) (jobject(nullptr));
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[8].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[8].o)))->F_texture;
	((func_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (frame[4].o), ((jint)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[8].o)))->F_verticesOffset), ((jint)((arc_graphics_g2d_SpriteBatch$DrawRequest *) NULL_CHECK((frame[8].o)))->F_verticesLength));
	}
label_17:;
	{
	LINE_NUMBER(311);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(324);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_colorPacked = (frame[1].f);
	LINE_NUMBER(325);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_mixColorPacked = (frame[2].f);
	LINE_NUMBER(326);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_blending = (jref) (frame[3].o);
	LINE_NUMBER(328);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_numRequests = (jint(0));
	LINE_NUMBER(329);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestVertOffset = (jint(0));
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:drawSuper", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_capacity_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(335);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(336);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(337);
	((func_arc_graphics_g2d_SpriteBatch_switchTexture_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_switchTexture_arc_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(339);
	frame[6].i = ((frame[6].i) - ((jint)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx));
	LINE_NUMBER(340);
	if ((frame[6].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(341);
	((func_arc_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(342);
	frame[6].i = (frame[5].i);
	}
label_5:;
	{
	LINE_NUMBER(345);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[6].i), (frame[4].i));
	frame[7].i = temp0;
	LINE_NUMBER(347);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, (frame[2].o), (frame[3].i), (frame[7].i));
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_idx = (((jint)((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_idx) + (frame[7].i));
	LINE_NUMBER(350);
	frame[4].i = ((frame[4].i) - (frame[7].i));
	}
label_12:;
	{
	LINE_NUMBER(351);
	if ((frame[4].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(352);
	frame[3].i = ((frame[3].i) + (frame[7].i));
	LINE_NUMBER(353);
	((func_arc_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(354);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[5].i), (frame[4].i));
	frame[7].i = temp0;
	LINE_NUMBER(355);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, (frame[2].o), (frame[3].i), (frame[7].i));
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_idx = (((jint)((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_idx) + (frame[7].i));
	LINE_NUMBER(357);
	frame[4].i = ((frame[4].i) - (frame[7].i));
	goto label_12;
	}
label_13:;
	LINE_NUMBER(359);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:drawSuper", 21 };
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
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	frame[9].o = sp[0].o;
	LINE_NUMBER(364);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(365);
	((func_arc_graphics_g2d_SpriteBatch_switchTexture_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_switchTexture_arc_graphics_Texture])(ctx, (frame[0].o), (frame[9].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(366);
	jint temp0 = (jint)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx;
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp1 = (jint)((func_java_nio_FloatBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_capacity_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_4;
	}
	{
	LINE_NUMBER(367);
	((func_arc_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_idx = (((jint)((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_idx) + (24));
	LINE_NUMBER(371);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_tmpVertices;
	((func_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f));
	LINE_NUMBER(372);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_tmpVertices;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_Array1_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_Array1_float_R_java_nio_FloatBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[36];
	auto stack = &frame[33];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:constructVertices", 36 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(376);
	frame[11].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_u);
	LINE_NUMBER(377);
	frame[12].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_v2);
	LINE_NUMBER(378);
	frame[13].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_u2);
	LINE_NUMBER(379);
	frame[14].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_v);
	LINE_NUMBER(381);
	frame[15].f = ((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(382);
	frame[16].f = ((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_mixColorPacked);
	LINE_NUMBER(384);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (frame[10].f));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(386);
	frame[17].f = ((frame[4].f) + (frame[6].f));
	LINE_NUMBER(387);
	frame[18].f = ((frame[5].f) + (frame[7].f));
	LINE_NUMBER(388);
	frame[19].f = (-(frame[6].f));
	LINE_NUMBER(389);
	frame[20].f = (-(frame[7].f));
	LINE_NUMBER(390);
	frame[21].f = ((frame[8].f) - (frame[6].f));
	LINE_NUMBER(391);
	frame[22].f = ((frame[9].f) - (frame[7].f));
	LINE_NUMBER(394);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[10].f));
	frame[23].f = temp0;
	LINE_NUMBER(395);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[10].f));
	frame[24].f = temp1;
	LINE_NUMBER(397);
	frame[25].f = ((((frame[23].f) * (frame[19].f)) - ((frame[24].f) * (frame[20].f))) + (frame[17].f));
	LINE_NUMBER(398);
	frame[26].f = ((((frame[24].f) * (frame[19].f)) + ((frame[23].f) * (frame[20].f))) + (frame[18].f));
	LINE_NUMBER(399);
	frame[27].f = ((((frame[23].f) * (frame[19].f)) - ((frame[24].f) * (frame[22].f))) + (frame[17].f));
	LINE_NUMBER(400);
	frame[28].f = ((((frame[24].f) * (frame[19].f)) + ((frame[23].f) * (frame[22].f))) + (frame[18].f));
	LINE_NUMBER(401);
	frame[29].f = ((((frame[23].f) * (frame[21].f)) - ((frame[24].f) * (frame[22].f))) + (frame[17].f));
	LINE_NUMBER(402);
	frame[30].f = ((((frame[24].f) * (frame[21].f)) + ((frame[23].f) * (frame[22].f))) + (frame[18].f));
	LINE_NUMBER(403);
	frame[31].f = ((frame[25].f) + ((frame[29].f) - (frame[27].f)));
	LINE_NUMBER(404);
	frame[32].f = ((frame[30].f) - ((frame[28].f) - (frame[26].f)));
	LINE_NUMBER(406);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)) = (frame[25].f);
	LINE_NUMBER(407);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(1)))) = (frame[26].f);
	LINE_NUMBER(408);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(2)))) = (frame[15].f);
	LINE_NUMBER(409);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(3)))) = (frame[11].f);
	LINE_NUMBER(410);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(4)))) = (frame[12].f);
	LINE_NUMBER(411);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(5)))) = (frame[16].f);
	LINE_NUMBER(413);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (6))) = (frame[27].f);
	LINE_NUMBER(414);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (7))) = (frame[28].f);
	LINE_NUMBER(415);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (8))) = (frame[15].f);
	LINE_NUMBER(416);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (9))) = (frame[11].f);
	LINE_NUMBER(417);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (10))) = (frame[14].f);
	LINE_NUMBER(418);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (11))) = (frame[16].f);
	LINE_NUMBER(420);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (12))) = (frame[29].f);
	LINE_NUMBER(421);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (13))) = (frame[30].f);
	LINE_NUMBER(422);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (14))) = (frame[15].f);
	LINE_NUMBER(423);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (15))) = (frame[13].f);
	LINE_NUMBER(424);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (16))) = (frame[14].f);
	LINE_NUMBER(425);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (17))) = (frame[16].f);
	LINE_NUMBER(427);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (18))) = (frame[31].f);
	LINE_NUMBER(428);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (19))) = (frame[32].f);
	LINE_NUMBER(429);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (20))) = (frame[15].f);
	LINE_NUMBER(430);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (21))) = (frame[13].f);
	LINE_NUMBER(431);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (22))) = (frame[12].f);
	LINE_NUMBER(432);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (23))) = (frame[16].f);
	LINE_NUMBER(433);
	goto label_49;
	}
label_7:;
	{
	LINE_NUMBER(434);
	frame[17].f = ((frame[4].f) + (frame[8].f));
	LINE_NUMBER(435);
	frame[18].f = ((frame[5].f) + (frame[9].f));
	LINE_NUMBER(437);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)) = (frame[4].f);
	LINE_NUMBER(438);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(1)))) = (frame[5].f);
	LINE_NUMBER(439);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(2)))) = (frame[15].f);
	LINE_NUMBER(440);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(3)))) = (frame[11].f);
	LINE_NUMBER(441);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(4)))) = (frame[12].f);
	LINE_NUMBER(442);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(5)))) = (frame[16].f);
	LINE_NUMBER(444);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (6))) = (frame[4].f);
	LINE_NUMBER(445);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (7))) = (frame[18].f);
	LINE_NUMBER(446);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (8))) = (frame[15].f);
	LINE_NUMBER(447);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (9))) = (frame[11].f);
	LINE_NUMBER(448);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (10))) = (frame[14].f);
	LINE_NUMBER(449);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (11))) = (frame[16].f);
	LINE_NUMBER(451);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (12))) = (frame[17].f);
	LINE_NUMBER(452);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (13))) = (frame[18].f);
	LINE_NUMBER(453);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (14))) = (frame[15].f);
	LINE_NUMBER(454);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (15))) = (frame[13].f);
	LINE_NUMBER(455);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (16))) = (frame[14].f);
	LINE_NUMBER(456);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (17))) = (frame[16].f);
	LINE_NUMBER(458);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (18))) = (frame[17].f);
	LINE_NUMBER(459);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (19))) = (frame[5].f);
	LINE_NUMBER(460);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (20))) = (frame[15].f);
	LINE_NUMBER(461);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (21))) = (frame[13].f);
	LINE_NUMBER(462);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (22))) = (frame[12].f);
	LINE_NUMBER(463);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (23))) = (frame[16].f);
	}
label_49:;
	LINE_NUMBER(465);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_SpriteBatch_createShader_R_arc_graphics_gl_Shader(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:createShader", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	{
	LINE_NUMBER(468);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"attribute vec4 a_position;\nattribute vec4 a_color;\nattribute vec2 a_texCoord0;\nattribute vec4 a_mix_color;\nuniform mat4 u_projTrans;\nvarying vec4 v_color;\nvarying vec4 v_mix_color;\nvarying vec2 v_texCoords;\n\nvoid main(){\n   v_color = a_color;\n   v_color.a = v_color.a * (255.0/254.0);\n   v_mix_color = a_mix_color;\n   v_mix_color.a *= (255.0/254.0);\n   v_texCoords = a_texCoord0;\n   gl_Position = u_projTrans * a_position;\n}"_j))), (((jobject) createStringLiteral(ctx, u8"\nvarying lowp vec4 v_color;\nvarying lowp vec4 v_mix_color;\nvarying highp vec2 v_texCoords;\nuniform highp sampler2D u_texture;\n\nvoid main(){\n  vec4 c = texture2D(u_texture, v_texCoords);\n  gl_FragColor = v_color * mix(c, vec4(v_mix_color.rgb, c.a), v_mix_color.a);\n}"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_sortRequests(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:sortRequests", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(503);
	if (((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_multithreaded) == 0) goto label_1;
	}
	{
	LINE_NUMBER(504);
	((func_arc_graphics_g2d_SpriteBatch_sortRequestsThreaded) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_sortRequestsThreaded])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(506);
	((func_arc_graphics_g2d_SpriteBatch_sortRequestsStandard) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch_sortRequestsStandard])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(508);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_sortRequestsThreaded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:sortRequestsThreaded", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(511);
	frame[1].i = ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_numRequests);
	LINE_NUMBER(512);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestZ;
	frame[2].o = sp[0].o;
	LINE_NUMBER(514);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_contiguous;
	frame[3].o = sp[0].o;
	LINE_NUMBER(515);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(516);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0))));
	LINE_NUMBER(517);
	frame[7].i = (jint(0));
	LINE_NUMBER(519);
	frame[8].i = (jint(1));
	}
label_8:;
	{
	if ((frame[8].i) >= (frame[1].i)) goto label_9;
	}
	{
	LINE_NUMBER(520);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[8].i))) == (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(521);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (frame[6].i);
	LINE_NUMBER(522);
	ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (jint(1)))) = (frame[7].i);
	LINE_NUMBER(523);
	ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (jint(2)))) = ((frame[8].i) - (frame[7].i));
	LINE_NUMBER(524);
	INST_IINC(4, 3);
	LINE_NUMBER(525);
	if (((frame[4].i) + (jint(3))) <= (frame[5].i)) goto label_17;
	}
	{
	LINE_NUMBER(526);
	sp[0].o = frame[3].o;
	jint temp0 = (frame[5].i) << (jint(1));
	frame[5].i = temp0;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(528);
	sp[0].o = frame[2].o;
	jint temp0 = frame[8].i;
	frame[7].i = temp0;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}
label_11:;
	{
	LINE_NUMBER(519);
	INST_IINC(8, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(531);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (frame[6].i);
	LINE_NUMBER(532);
	ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (jint(1)))) = (frame[7].i);
	LINE_NUMBER(533);
	ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (jint(2)))) = ((frame[1].i) - (frame[7].i));
	LINE_NUMBER(534);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_contiguous = (jref) (frame[3].o);
	LINE_NUMBER(536);
	frame[8].i = (((frame[4].i) / (jint(3))) + (jint(1)));
	LINE_NUMBER(538);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_contiguousCopy;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_24;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_contiguousCopy = (jref) sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(540);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_contiguousCopy;
	sp[0].o = (jobject)SM_arc_graphics_g2d_SpriteBatch$CountingSort_countingSortMapMT_Array1_int_Array1_int_int_R_Array1_int(ctx, sp[0].o, sp[1].o, (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(543);
	frame[10].o = (frame[3].o);
	LINE_NUMBER(544);
	ARRAY_ACCESS(jint, (frame[10].o), (jint(0))) = (jint(0));
	LINE_NUMBER(545);
	frame[11].i = (jint(0));
	frame[12].i = (jint(0));
	}
label_29:;
	{
	if ((frame[11].i) >= (frame[8].i)) goto label_30;
	}
	{
	LINE_NUMBER(546);
	frame[12].i = ((frame[12].i) + ((jint)ARRAY_ACCESS(jint, (frame[9].o), (((frame[11].i) * (jint(3))) + (jint(2))))));
	LINE_NUMBER(547);
	ARRAY_ACCESS(jint, (frame[10].o), ((frame[11].i) + (jint(1)))) = (frame[12].i);
	LINE_NUMBER(545);
	INST_IINC(11, 1);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_copy;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_34;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_SpriteBatch$DrawRequest, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_copy = (jref) sp[1].o;
	}
label_34:;
	{
	LINE_NUMBER(550);
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	SF_arc_graphics_g2d_SpriteBatch$PopulateTask_tasks = (frame[9].o);
	LINE_NUMBER(551);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	SF_arc_graphics_g2d_SpriteBatch$PopulateTask_src = sp[0].o;
	LINE_NUMBER(552);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_copy;
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	SF_arc_graphics_g2d_SpriteBatch$PopulateTask_dest = sp[0].o;
	LINE_NUMBER(553);
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	SF_arc_graphics_g2d_SpriteBatch$PopulateTask_locs = (frame[10].o);
	LINE_NUMBER(554);
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch_commonPool;
	sp[0].o = (jobject)((arc_graphics_g2d_ForkJoinHolder *) NULL_CHECK(sp[0].o))->F_pool;
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteBatch$PopulateTask);
	init_arc_graphics_g2d_SpriteBatch$PopulateTask_int_int(ctx, sp[1].o, (jint(0)), (frame[8].i));
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool_invoke_java_util_concurrent_ForkJoinTask_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_invoke_java_util_concurrent_ForkJoinTask_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(555);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch_sortRequestsStandard(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:sortRequestsStandard", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(558);
	frame[1].i = ((jint)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_numRequests);
	LINE_NUMBER(559);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requestZ;
	frame[2].o = sp[0].o;
	LINE_NUMBER(560);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_contiguous;
	frame[3].o = sp[0].o;
	LINE_NUMBER(561);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(562);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0))));
	LINE_NUMBER(563);
	frame[7].i = (jint(0));
	LINE_NUMBER(565);
	frame[8].i = (jint(1));
	}
label_8:;
	{
	if ((frame[8].i) >= (frame[1].i)) goto label_9;
	}
	{
	LINE_NUMBER(566);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[8].i))) == (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(567);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (frame[6].i);
	LINE_NUMBER(568);
	ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (jint(1)))) = (frame[7].i);
	LINE_NUMBER(569);
	ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (jint(2)))) = ((frame[8].i) - (frame[7].i));
	LINE_NUMBER(570);
	INST_IINC(4, 3);
	LINE_NUMBER(571);
	if (((frame[4].i) + (jint(3))) <= (frame[5].i)) goto label_17;
	}
	{
	LINE_NUMBER(572);
	sp[0].o = frame[3].o;
	jint temp0 = (frame[5].i) << (jint(1));
	frame[5].i = temp0;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(574);
	sp[0].o = frame[2].o;
	jint temp0 = frame[8].i;
	frame[7].i = temp0;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}
label_11:;
	{
	LINE_NUMBER(565);
	INST_IINC(8, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(577);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (frame[6].i);
	LINE_NUMBER(578);
	ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (jint(1)))) = (frame[7].i);
	LINE_NUMBER(579);
	ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (jint(2)))) = ((frame[1].i) - (frame[7].i));
	LINE_NUMBER(580);
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_contiguous = (jref) (frame[3].o);
	LINE_NUMBER(582);
	frame[8].i = (((frame[4].i) / (jint(3))) + (jint(1)));
	LINE_NUMBER(584);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_contiguousCopy;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_24;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_contiguousCopy = (jref) sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(586);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_contiguousCopy;
	sp[0].o = (jobject)SM_arc_graphics_g2d_SpriteBatch$CountingSort_countingSortMap_Array1_int_Array1_int_int_R_Array1_int(ctx, sp[0].o, sp[1].o, (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(588);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_copy;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[1].i)) goto label_26;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_SpriteBatch$DrawRequest, ((frame[1].i) + ((frame[1].i) >> (jint(3)))));
	((arc_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_copy = (jref) sp[1].o;
	}
label_26:;
	{
	LINE_NUMBER(589);
	frame[10].i = (jint(0));
	LINE_NUMBER(590);
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_requests;
	frame[11].o = sp[0].o;
	sp[0].o = (jobject)((arc_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_copy;
	frame[12].o = sp[0].o;
	LINE_NUMBER(591);
	frame[13].i = (jint(0));
	}
label_30:;
	{
	if ((frame[13].i) >= ((frame[8].i) * (jint(3)))) goto label_31;
	}
	{
	LINE_NUMBER(592);
	frame[14].i = ((jint)ARRAY_ACCESS(jint, (frame[9].o), ((frame[13].i) + (jint(1)))));
	frame[15].i = ((jint)ARRAY_ACCESS(jint, (frame[9].o), ((frame[13].i) + (jint(2)))));
	LINE_NUMBER(593);
	if ((frame[15].i) >= (10)) goto label_35;
	}
	{
	LINE_NUMBER(594);
	frame[16].i = ((frame[14].i) + (frame[15].i));
	LINE_NUMBER(595);
	frame[17].i = (frame[14].i);
	frame[18].i = (frame[10].i);
	}
label_39:;
	{
	if ((frame[17].i) >= (frame[16].i)) goto label_40;
	}
	{
	LINE_NUMBER(596);
	ARRAY_ACCESS(jobject, (frame[12].o), (frame[18].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (frame[17].i)));
	LINE_NUMBER(595);
	INST_IINC(17, 1);
	INST_IINC(18, 1);
	goto label_39;
	}
label_40:;
	LINE_NUMBER(598);
	goto label_43;
label_35:;
	{
	sp[0].o = frame[11].o;
	jint temp0 = frame[14].i;
	sp[1].o = frame[12].o;
	jint temp1 = frame[10].i;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[15].i), ((((jarray) nullCheck(ctx, (frame[12].o)))->length) - (frame[10].i)));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	}
label_43:;
	{
	LINE_NUMBER(599);
	frame[10].i = ((frame[10].i) + (frame[15].i));
	LINE_NUMBER(591);
	INST_IINC(13, 3);
	goto label_30;
	}
label_31:;
	LINE_NUMBER(601);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_graphics_g2d_SpriteBatch(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_Batch(ctx);
	SF_arc_graphics_g2d_SpriteBatch_VERTEX_SIZE = jint(6);
	SF_arc_graphics_g2d_SpriteBatch_SPRITE_SIZE = jint(24);
	SF_arc_graphics_g2d_SpriteBatch_initialSize = jint(10000);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(0)));
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	SF_arc_graphics_g2d_SpriteBatch_emptyVertices = sp[0].o;
	LINE_NUMBER(30);
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	SF_arc_graphics_g2d_SpriteBatch_totalDrawCalls = (jlong(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_SpriteBatch[] {
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
	(void *) M_arc_graphics_g2d_SpriteBatch_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_SpriteBatch_z_float,
	(void *) M_arc_graphics_g2d_SpriteBatch_setSort_boolean,
	(void *) M_arc_graphics_g2d_Batch_setPackedColor_float,
	(void *) M_arc_graphics_g2d_Batch_getPackedColor_R_float,
	(void *) M_arc_graphics_g2d_Batch_setPackedMixColor_float,
	(void *) M_arc_graphics_g2d_Batch_getPackedMixColor_R_float,
	(void *) M_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_Texture_Array1_float_int_int,
	(void *) M_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float,
	(void *) M_arc_graphics_g2d_SpriteBatch_draw_java_lang_Runnable,
	(void *) M_arc_graphics_g2d_SpriteBatch_flush,
	(void *) M_arc_graphics_g2d_SpriteBatch_discard,
	(void *) M_arc_graphics_g2d_SpriteBatch_setBlending_arc_graphics_Blending,
	(void *) M_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending,
	(void *) M_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setProjection_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setTransform_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setupMatrices,
	(void *) M_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g2d_SpriteBatch_setShader_arc_graphics_gl_Shader_boolean,
	(void *) M_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g2d_SpriteBatch_prepare_int,
	(void *) M_arc_graphics_g2d_SpriteBatch_expandRequests,
	(void *) M_arc_graphics_g2d_SpriteBatch_flushRequests,
	(void *) M_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int,
	(void *) M_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float,
	(void *) M_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float,
	(void *) M_arc_graphics_g2d_SpriteBatch_sortRequests,
	(void *) M_arc_graphics_g2d_SpriteBatch_sortRequestsThreaded,
	(void *) M_arc_graphics_g2d_SpriteBatch_sortRequestsStandard,
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
	{ "z", "(F)V" },
	{ "setSort", "(Z)V" },
	{ "setPackedColor", "(F)V" },
	{ "getPackedColor", "()F" },
	{ "setPackedMixColor", "(F)V" },
	{ "getPackedMixColor", "()F" },
	{ "draw", "(Larc/graphics/Texture;[FII)V" },
	{ "draw", "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V" },
	{ "draw", "(Ljava/lang/Runnable;)V" },
	{ "flush", "()V" },
	{ "discard", "()V" },
	{ "setBlending", "(Larc/graphics/Blending;)V" },
	{ "getBlending", "()Larc/graphics/Blending;" },
	{ "getProjection", "()Larc/math/Mat;" },
	{ "getTransform", "()Larc/math/Mat;" },
	{ "setProjection", "(Larc/math/Mat;)V" },
	{ "setTransform", "(Larc/math/Mat;)V" },
	{ "setupMatrices", "()V" },
	{ "switchTexture", "(Larc/graphics/Texture;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;Z)V" },
	{ "getShader", "()Larc/graphics/gl/Shader;" },
	{ "prepare", "(I)V" },
	{ "expandRequests", "()V" },
	{ "flushRequests", "()V" },
	{ "drawSuper", "(Larc/graphics/Texture;[FII)V" },
	{ "drawSuper", "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V" },
	{ "constructVertices", "([FILarc/graphics/g2d/TextureRegion;FFFFFFF)V" },
	{ "sortRequests", "()V" },
	{ "sortRequestsThreaded", "()V" },
	{ "sortRequestsStandard", "()V" },
};

static jclass innerClasses[] {
	&class_arc_graphics_g2d_SpriteBatch$DrawRequest,
	&class_arc_graphics_g2d_SpriteBatch$CountingSort,
	&class_arc_graphics_g2d_SpriteBatch$PopulateTask,
};

static FieldMetadata fields[] {
	{ "VERTEX_SIZE", &class_int, (intptr_t) &SF_arc_graphics_g2d_SpriteBatch_VERTEX_SIZE, "I", 25 },
	{ "SPRITE_SIZE", &class_int, (intptr_t) &SF_arc_graphics_g2d_SpriteBatch_SPRITE_SIZE, "I", 25 },
	{ "initialSize", &class_int, (intptr_t) &SF_arc_graphics_g2d_SpriteBatch_initialSize, "I", 26 },
	{ "emptyVertices", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch_emptyVertices, "[F", 26 },
	{ "totalDrawCalls", &class_long, (intptr_t) &SF_arc_graphics_g2d_SpriteBatch_totalDrawCalls, "J", 9 },
	{ "commonPool", &class_arc_graphics_g2d_ForkJoinHolder, (intptr_t) &SF_arc_graphics_g2d_SpriteBatch_commonPool, "Larc/graphics/g2d/ForkJoinHolder;", 8 },
	{ "multithreaded", &class_boolean, offsetof(arc_graphics_g2d_SpriteBatch, F_multithreaded), "Z", 0 },
	{ "mesh", &class_arc_graphics_Mesh, offsetof(arc_graphics_g2d_SpriteBatch, F_mesh), "Larc/graphics/Mesh;", 4 },
	{ "buffer", &class_java_nio_FloatBuffer, offsetof(arc_graphics_g2d_SpriteBatch, F_buffer), "Ljava/nio/FloatBuffer;", 4 },
	{ "tmpVertices", getArrayClass(&class_float, 1), offsetof(arc_graphics_g2d_SpriteBatch, F_tmpVertices), "[F", 16 },
	{ "requestVerts", getArrayClass(&class_float, 1), offsetof(arc_graphics_g2d_SpriteBatch, F_requestVerts), "[F", 0 },
	{ "requestVertOffset", &class_int, offsetof(arc_graphics_g2d_SpriteBatch, F_requestVertOffset), "I", 0 },
	{ "sort", &class_boolean, offsetof(arc_graphics_g2d_SpriteBatch, F_sort), "Z", 4 },
	{ "flushing", &class_boolean, offsetof(arc_graphics_g2d_SpriteBatch, F_flushing), "Z", 4 },
	{ "requests", getArrayClass(&class_arc_graphics_g2d_SpriteBatch$DrawRequest, 1), offsetof(arc_graphics_g2d_SpriteBatch, F_requests), "[Larc/graphics/g2d/SpriteBatch$DrawRequest;", 4 },
	{ "copy", getArrayClass(&class_arc_graphics_g2d_SpriteBatch$DrawRequest, 1), offsetof(arc_graphics_g2d_SpriteBatch, F_copy), "[Larc/graphics/g2d/SpriteBatch$DrawRequest;", 4 },
	{ "requestZ", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_SpriteBatch, F_requestZ), "[I", 4 },
	{ "numRequests", &class_int, offsetof(arc_graphics_g2d_SpriteBatch, F_numRequests), "I", 4 },
	{ "contiguous", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_SpriteBatch, F_contiguous), "[I", 4 },
	{ "contiguousCopy", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_SpriteBatch, F_contiguousCopy), "[I", 4 },
	{ "intZ", &class_int, offsetof(arc_graphics_g2d_SpriteBatch, F_intZ), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteBatch, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteBatch_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteBatch_int_arc_graphics_gl_Shader, 0, "(ILarc/graphics/gl/Shader;)V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_g2d_SpriteBatch_dispose, VTABLE_arc_graphics_g2d_SpriteBatch_dispose, "()V", 1 },
	{ "setSort", (intptr_t) M_arc_graphics_g2d_SpriteBatch_setSort_boolean, VTABLE_arc_graphics_g2d_SpriteBatch_setSort_boolean, "(Z)V", 4 },
	{ "setShader", (intptr_t) M_arc_graphics_g2d_SpriteBatch_setShader_arc_graphics_gl_Shader_boolean, VTABLE_arc_graphics_g2d_SpriteBatch_setShader_arc_graphics_gl_Shader_boolean, "(Larc/graphics/gl/Shader;Z)V", 4 },
	{ "setBlending", (intptr_t) M_arc_graphics_g2d_SpriteBatch_setBlending_arc_graphics_Blending, VTABLE_arc_graphics_g2d_SpriteBatch_setBlending_arc_graphics_Blending, "(Larc/graphics/Blending;)V", 4 },
	{ "z", (intptr_t) M_arc_graphics_g2d_SpriteBatch_z_float, VTABLE_arc_graphics_g2d_SpriteBatch_z_float, "(F)V", 4 },
	{ "discard", (intptr_t) M_arc_graphics_g2d_SpriteBatch_discard, VTABLE_arc_graphics_g2d_SpriteBatch_discard, "()V", 4 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_Texture_Array1_float_int_int, VTABLE_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_Texture_Array1_float_int_int, "(Larc/graphics/Texture;[FII)V", 4 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, VTABLE_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V", 4 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_SpriteBatch_draw_java_lang_Runnable, VTABLE_arc_graphics_g2d_SpriteBatch_draw_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 4 },
	{ "prepare", (intptr_t) M_arc_graphics_g2d_SpriteBatch_prepare_int, VTABLE_arc_graphics_g2d_SpriteBatch_prepare_int, "(I)V", 4 },
	{ "expandRequests", (intptr_t) M_arc_graphics_g2d_SpriteBatch_expandRequests, VTABLE_arc_graphics_g2d_SpriteBatch_expandRequests, "()V", 4 },
	{ "flush", (intptr_t) M_arc_graphics_g2d_SpriteBatch_flush, VTABLE_arc_graphics_g2d_SpriteBatch_flush, "()V", 4 },
	{ "flushRequests", (intptr_t) M_arc_graphics_g2d_SpriteBatch_flushRequests, VTABLE_arc_graphics_g2d_SpriteBatch_flushRequests, "()V", 4 },
	{ "drawSuper", (intptr_t) M_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int, VTABLE_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int, "(Larc/graphics/Texture;[FII)V", 4 },
	{ "drawSuper", (intptr_t) M_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, VTABLE_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V", 4 },
	{ "constructVertices", (intptr_t) M_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, VTABLE_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, "([FILarc/graphics/g2d/TextureRegion;FFFFFFF)V", 20 },
	{ "createShader", (intptr_t) SM_arc_graphics_g2d_SpriteBatch_createShader_R_arc_graphics_gl_Shader, 0, "()Larc/graphics/gl/Shader;", 9 },
	{ "sortRequests", (intptr_t) M_arc_graphics_g2d_SpriteBatch_sortRequests, VTABLE_arc_graphics_g2d_SpriteBatch_sortRequests, "()V", 4 },
	{ "sortRequestsThreaded", (intptr_t) M_arc_graphics_g2d_SpriteBatch_sortRequestsThreaded, VTABLE_arc_graphics_g2d_SpriteBatch_sortRequestsThreaded, "()V", 4 },
	{ "sortRequestsStandard", (intptr_t) M_arc_graphics_g2d_SpriteBatch_sortRequestsStandard, VTABLE_arc_graphics_g2d_SpriteBatch_sortRequestsStandard, "()V", 4 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_g2d_SpriteBatch, 0, "()V", 8 },
};

Class class_arc_graphics_g2d_SpriteBatch{
		.nativeName = (intptr_t) "arc/graphics/g2d/SpriteBatch",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_Batch,
		.size = sizeof(arc_graphics_g2d_SpriteBatch),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_SpriteBatch,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_SpriteBatch,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_SpriteBatch,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_SpriteBatch = registerClass(&class_arc_graphics_g2d_SpriteBatch);

}
