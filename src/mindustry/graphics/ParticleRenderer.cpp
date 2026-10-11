#include "mindustry/graphics/ParticleRenderer.h"
#include "java/nio/FloatBuffer.h"
#include "arc/graphics/VertexAttribute.h"
#include "java/util/concurrent/Future.h"
#include "arc/math/geom/Rect.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/graphics/ParticleRenderer_invoke_java_lang_Runnable_1.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/OS.h"
#include "java/lang/Throwable.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/Exception.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/Log.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/graphics/ParticleRenderer.h"
#include "arc/util/Time.h"
#include "arc/math/Mat.h"
#include "arc/util/Nullable.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/graphics/Gl.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "arc/graphics/Camera.h"
#include "arc/graphics/Mesh.h"
#include "java/lang/System.h"

extern "C" {

jbool SF_mindustry_graphics_ParticleRenderer_useAsync;
jint SF_mindustry_graphics_ParticleRenderer_maxParticles;
jint SF_mindustry_graphics_ParticleRenderer_maxParticlesPerFrame;
jint SF_mindustry_graphics_ParticleRenderer_particleSize;
jint SF_mindustry_graphics_ParticleRenderer_particleVertexSize;
jfloat SF_mindustry_graphics_ParticleRenderer_globalDrag;
jfloat SF_mindustry_graphics_ParticleRenderer_cullPadding;
jobject SF_mindustry_graphics_ParticleRenderer_attributes;
jobject SF_mindustry_graphics_ParticleRenderer_shader;

void mark_mindustry_graphics_ParticleRenderer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_ParticleRenderer_attributes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_ParticleRenderer_attributes)->clazz)->markFunction)((jobject) SF_mindustry_graphics_ParticleRenderer_attributes, mark, depth + 1);
		if (SF_mindustry_graphics_ParticleRenderer_shader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_ParticleRenderer_shader)->clazz)->markFunction)((jobject) SF_mindustry_graphics_ParticleRenderer_shader, mark, depth + 1);
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
	auto self = (mindustry_graphics_ParticleRenderer *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_addBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_addBuffer)->clazz)->markFunction)((jobject) self->F_addBuffer, mark, depth + 1);
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_vertexBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertexBuffer)->clazz)->markFunction)((jobject) self->F_vertexBuffer, mark, depth + 1);
	if (self->F_asyncTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_asyncTask)->clazz)->markFunction)((jobject) self->F_asyncTask, mark, depth + 1);
}

void init_mindustry_graphics_ParticleRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_ParticleRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(900000)));
	((mindustry_graphics_ParticleRenderer *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(225000)));
	((mindustry_graphics_ParticleRenderer *) NULL_CHECK(sp[0].o))->F_addBuffer = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Mesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Mesh);
	jint temp0 = jint(0);
	jint temp1 = jint(100000);
	jint temp2 = jint(0);
	clinit_mindustry_graphics_ParticleRenderer(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_ParticleRenderer_attributes;
	init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o);
	((mindustry_graphics_ParticleRenderer *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(400000)));
	((mindustry_graphics_ParticleRenderer *) NULL_CHECK(sp[0].o))->F_vertexBuffer = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_graphics_ParticleRenderer_count_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:count", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return ((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_count);
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_ParticleRenderer_updateAndRender(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:updateAndRender", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(58);
	((func_mindustry_graphics_ParticleRenderer_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_ParticleRenderer_update])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(61);
	((func_mindustry_graphics_ParticleRenderer_render) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_ParticleRenderer_render])(ctx, (frame[0].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_ParticleRenderer_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	if ((clinit_mindustry_graphics_ParticleRenderer(ctx), (jint)SF_mindustry_graphics_ParticleRenderer_useAsync) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_asyncTask;
	if (sp[0].o == nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_asyncTask;
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(70);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(68);
	frame[1].o = sp[0].o;
	LINE_NUMBER(69);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint(100000)) - ((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_count)), ((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_addCount));
	frame[1].i = temp0;
	LINE_NUMBER(76);
	frame[2].i = (((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_addCount) - (frame[1].i));
	LINE_NUMBER(78);
	if ((frame[1].i) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_addBuffer;
	jint temp0 = (frame[2].i) * (9);
	sp[1].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_data;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_count) * (9)), ((frame[1].i) * (9)));
	}
label_9:;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	((mindustry_graphics_ParticleRenderer *) NULL_CHECK(sp[0].o))->F_count = (((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK(sp[0].o))->F_count) + (frame[1].i));
	LINE_NUMBER(83);
	((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_addCount = (jint(0));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_mindustry_graphics_ParticleRenderer_uploadMeshData_arc_graphics_Mesh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_ParticleRenderer_uploadMeshData_arc_graphics_Mesh])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	if ((clinit_mindustry_graphics_ParticleRenderer(ctx), (jint)SF_mindustry_graphics_ParticleRenderer_useAsync) == 0) goto label_14;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_ParticleRenderer_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_graphics_ParticleRenderer_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_graphics_ParticleRenderer_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_ParticleRenderer *) NULL_CHECK(sp[0].o))->F_asyncTask = (jref) sp[1].o;
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(91);
	((func_mindustry_graphics_ParticleRenderer_updateAsync) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_ParticleRenderer_updateAsync])(ctx, (frame[0].o));
	}
label_16:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_ParticleRenderer_updateAsync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:updateAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)SM_mindustry_graphics_ParticleRenderer_update_Array1_float_int_float_R_int(ctx, sp[1].o, ((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_count), (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	((mindustry_graphics_ParticleRenderer *) NULL_CHECK(sp[0].o))->F_count = temp0;
	LINE_NUMBER(97);
	((func_mindustry_graphics_ParticleRenderer_buildVertices) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_ParticleRenderer_buildVertices])(ctx, (frame[0].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_ParticleRenderer_render(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:render", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	clinit_mindustry_graphics_ParticleRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_ParticleRenderer_shader;
	if (sp[0].o != nullptr) goto label_1;
	}
	SM_mindustry_graphics_ParticleRenderer_makeShader(ctx);
label_1:;
	{
	LINE_NUMBER(103);
	SM_arc_graphics_Gl_enable_int(ctx, (jint(34370)));
	LINE_NUMBER(105);
	clinit_mindustry_graphics_ParticleRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_ParticleRenderer_shader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(106);
	clinit_mindustry_graphics_ParticleRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_ParticleRenderer_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_mat"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	sp[2].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_mat;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(107);
	clinit_mindustry_graphics_ParticleRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_ParticleRenderer_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_scaling"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[2].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float])(ctx, sp[0].o, sp[1].o, (temp1 / ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_width)));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_mesh;
	clinit_mindustry_graphics_ParticleRenderer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_ParticleRenderer_shader;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_ParticleRenderer_add_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:add", 17 };
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
	{
	LINE_NUMBER(113);
	jint temp0 = ((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_addCount) * (9);
	sp[0].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_addBuffer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	jfloat temp0 = frame[1].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp1 = ((temp0 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2)))) - (frame[6].f)) - (jfloat(24.0f));
	jfloat temp2 = frame[2].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp3 = ((temp2 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2)))) - (frame[6].f)) - (jfloat(24.0f));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp4 = (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) + ((frame[6].f) * (jfloat(2)))) + (jfloat(48.0f));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp5 = (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) + ((frame[6].f) * (jfloat(2)))) + (jfloat(48.0f));
	jfloat temp6 = frame[1].f;
	jfloat temp7 = frame[2].f;
	LINE_NUMBER(116);
	jint temp8 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, temp1, temp3, temp4, temp5, temp6, temp7);
	if (temp8 != 0) goto label_3;
	}
label_1:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_addBuffer;
	frame[9].o = sp[0].o;
	LINE_NUMBER(124);
	frame[10].i = (((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_addCount) * (9));
	LINE_NUMBER(125);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (jint(0)))) = (jfloat(0));
	LINE_NUMBER(126);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (jint(1)))) = (frame[3].f);
	LINE_NUMBER(127);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (jint(2)))) = (frame[1].f);
	LINE_NUMBER(128);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (jint(3)))) = (frame[2].f);
	LINE_NUMBER(129);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (jint(4)))) = (frame[4].f);
	LINE_NUMBER(130);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (jint(5)))) = (frame[5].f);
	LINE_NUMBER(131);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (6))) = ((frame[6].f) * (jfloat(2)));
	LINE_NUMBER(132);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (7))) = ((frame[7].f) * (jfloat(2)));
	LINE_NUMBER(133);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (8))) = (frame[8].f);
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	((mindustry_graphics_ParticleRenderer *) NULL_CHECK(sp[0].o))->F_addCount = (((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK(sp[0].o))->F_addCount) + (jint(1)));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_ParticleRenderer_buildVertices(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:buildVertices", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_data;
	frame[1].o = sp[0].o;
	LINE_NUMBER(141);
	frame[2].f = (jfloat((((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_count) * (9))));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_vertexBuffer;
	frame[3].o = sp[0].o;
	LINE_NUMBER(145);
	frame[4].i = (jint(0));
	LINE_NUMBER(147);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((floatCompare((jfloat((frame[5].i))), (frame[2].f), 1)) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(148);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (8))));
	LINE_NUMBER(149);
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (6)));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (7)));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i))) / ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(1)))))));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp0, temp1, temp2);
	frame[7].f = temp3;
	LINE_NUMBER(152);
	ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[4].i) + (jint(0)))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(2)))));
	LINE_NUMBER(153);
	ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[4].i) + (jint(1)))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(3)))));
	LINE_NUMBER(155);
	ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[4].i) + (jint(2)))) = (frame[7].f);
	LINE_NUMBER(157);
	ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[4].i) + (jint(3)))) = (frame[6].f);
	LINE_NUMBER(159);
	INST_IINC(4, 4);
	LINE_NUMBER(147);
	INST_IINC(5, 9);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(162);
	((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_vertexBufferLength = (frame[4].i);
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_ParticleRenderer_uploadMeshData_arc_graphics_Mesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:uploadMeshData", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer])(ctx, (frame[2].o), ((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_vertexBufferLength));
	LINE_NUMBER(170);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_vertexBuffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((mindustry_graphics_ParticleRenderer *) NULL_CHECK((frame[0].o)))->F_vertexBufferLength));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_graphics_ParticleRenderer_update_Array1_float_int_float_R_int(jcontext ctx, jobject param0, jint param1, jfloat param2) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:update", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_ParticleRenderer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(175);
	frame[3].i = ((frame[1].i) * (9));
	LINE_NUMBER(177);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(1)) - ((jfloat(0.05f)) * (frame[2].f))), (jfloat(0)));
	frame[4].f = temp0;
	LINE_NUMBER(179);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	jint temp0 = frame[5].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[2].f));
	LINE_NUMBER(181);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[5].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[5].i) + (jint(1))))), -1)) < 0) goto label_7;
	}
	{
	LINE_NUMBER(182);
	if ((frame[3].i) <= (9)) goto label_9;
	}
	{
	LINE_NUMBER(184);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), ((frame[3].i) - (9)), (frame[0].o), (frame[5].i), (9));
	}
label_9:;
	{
	LINE_NUMBER(186);
	INST_IINC(3, -9);
	LINE_NUMBER(187);
	INST_IINC(5, -9);
	goto label_12;
	}
label_7:;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	jint temp0 = (frame[5].i) + (jint(2));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[5].i) + (jint(4))))) * (frame[2].f)));
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	jint temp3 = (frame[5].i) + (jint(3));
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[5].i) + (jint(5))))) * (frame[2].f)));
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	jint temp6 = (frame[5].i) + (jint(4));
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) * (frame[4].f));
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	jint temp9 = (frame[5].i) + (jint(5));
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp9)) * (frame[4].f));
	}
label_12:;
	{
	LINE_NUMBER(179);
	INST_IINC(5, 9);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return ((frame[3].i) / (9));
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_ParticleRenderer_makeShader(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:makeShader", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_ParticleRenderer(ctx);
	{
	LINE_NUMBER(201);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uniform mat4 u_mat;\nuniform float u_scaling;\n\nattribute vec4 a_position;\nattribute float a_size;\nattribute vec4 a_color;\n\nvarying vec4 v_color;\n\nvoid main(){\n    v_color = a_color;\n\n    gl_Position = u_mat * a_position;\n    gl_PointSize = a_size * u_scaling;\n}\n"_j))), (((jobject) createStringLiteral(ctx, u8"varying lowp vec4 v_color;\n\n#define RAD1 0.43\n#define RAD2 0.5\n\n\nvoid main(){\n    vec2 delta = gl_PointCoord - vec2(0.5);\n    gl_FragColor = vec4(v_color.rgb, v_color.a * (1.0-smoothstep(RAD1*RAD1, RAD2*RAD2, delta.x * delta.x + delta.y * delta.y)));\n}\n"_j))));
	clinit_mindustry_graphics_ParticleRenderer(ctx);
	SF_mindustry_graphics_ParticleRenderer_shader = sp[0].o;
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_ParticleRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_ParticleRenderer_maxParticles = jint(100000);
	SF_mindustry_graphics_ParticleRenderer_maxParticlesPerFrame = jint(25000);
	SF_mindustry_graphics_ParticleRenderer_particleSize = jint(9);
	SF_mindustry_graphics_ParticleRenderer_particleVertexSize = jint(4);
	SF_mindustry_graphics_ParticleRenderer_globalDrag = jfloat(0.05f);
	SF_mindustry_graphics_ParticleRenderer_cullPadding = jfloat(24.0f);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/ParticleRenderer:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_ParticleRenderer(ctx);
	{
	LINE_NUMBER(15);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isIos) != 0) goto label_1;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isAndroid;
	if ((--sp)->i != 0) goto label_1;
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_mindustry_graphics_ParticleRenderer(ctx);
	SF_mindustry_graphics_ParticleRenderer_useAsync = sp[0].i;
	LINE_NUMBER(37);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_VertexAttribute, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = (jobject)SF_arc_graphics_VertexAttribute_position;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_java_lang_String(ctx, sp[1].o, (jint(1)), (((jobject) createStringLiteral(ctx, u8"a_size"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = (jobject)SF_arc_graphics_VertexAttribute_color;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	clinit_mindustry_graphics_ParticleRenderer(ctx);
	SF_mindustry_graphics_ParticleRenderer_attributes = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_graphics_ParticleRenderer;
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

	{ // Field asyncTask
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_graphics_ParticleRenderer[] {
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
	(void *) M_mindustry_graphics_ParticleRenderer_count_R_int,
	(void *) M_mindustry_graphics_ParticleRenderer_updateAndRender,
	(void *) M_mindustry_graphics_ParticleRenderer_update,
	(void *) M_mindustry_graphics_ParticleRenderer_updateAsync,
	(void *) M_mindustry_graphics_ParticleRenderer_render,
	(void *) M_mindustry_graphics_ParticleRenderer_add_float_float_float_float_float_float_float_float,
	(void *) M_mindustry_graphics_ParticleRenderer_buildVertices,
	(void *) M_mindustry_graphics_ParticleRenderer_uploadMeshData_arc_graphics_Mesh,
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
	{ "count", "()I" },
	{ "updateAndRender", "()V" },
	{ "update", "()V" },
	{ "updateAsync", "()V" },
	{ "render", "()V" },
	{ "add", "(FFFFFFFF)V" },
	{ "buildVertices", "()V" },
	{ "uploadMeshData", "(Larc/graphics/Mesh;)V" },
};

static FieldMetadata fields[] {
	{ "useAsync", &class_boolean, (intptr_t) &SF_mindustry_graphics_ParticleRenderer_useAsync, "Z", 24 },
	{ "maxParticles", &class_int, (intptr_t) &SF_mindustry_graphics_ParticleRenderer_maxParticles, "I", 24 },
	{ "maxParticlesPerFrame", &class_int, (intptr_t) &SF_mindustry_graphics_ParticleRenderer_maxParticlesPerFrame, "I", 24 },
	{ "particleSize", &class_int, (intptr_t) &SF_mindustry_graphics_ParticleRenderer_particleSize, "I", 24 },
	{ "particleVertexSize", &class_int, (intptr_t) &SF_mindustry_graphics_ParticleRenderer_particleVertexSize, "I", 24 },
	{ "globalDrag", &class_float, (intptr_t) &SF_mindustry_graphics_ParticleRenderer_globalDrag, "F", 24 },
	{ "cullPadding", &class_float, (intptr_t) &SF_mindustry_graphics_ParticleRenderer_cullPadding, "F", 24 },
	{ "attributes", getArrayClass(&class_arc_graphics_VertexAttribute, 1), (intptr_t) &SF_mindustry_graphics_ParticleRenderer_attributes, "[Larc/graphics/VertexAttribute;", 24 },
	{ "shader", &class_arc_graphics_gl_Shader, (intptr_t) &SF_mindustry_graphics_ParticleRenderer_shader, "Larc/graphics/gl/Shader;", 8 },
	{ "data", getArrayClass(&class_float, 1), offsetof(mindustry_graphics_ParticleRenderer, F_data), "[F", 0 },
	{ "count", &class_int, offsetof(mindustry_graphics_ParticleRenderer, F_count), "I", 64 },
	{ "addBuffer", getArrayClass(&class_float, 1), offsetof(mindustry_graphics_ParticleRenderer, F_addBuffer), "[F", 0 },
	{ "addCount", &class_int, offsetof(mindustry_graphics_ParticleRenderer, F_addCount), "I", 0 },
	{ "mesh", &class_arc_graphics_Mesh, offsetof(mindustry_graphics_ParticleRenderer, F_mesh), "Larc/graphics/Mesh;", 0 },
	{ "vertexBuffer", getArrayClass(&class_float, 1), offsetof(mindustry_graphics_ParticleRenderer, F_vertexBuffer), "[F", 0 },
	{ "vertexBufferLength", &class_int, offsetof(mindustry_graphics_ParticleRenderer, F_vertexBufferLength), "I", 64 },
	{ "asyncTask", &class_java_util_concurrent_Future, offsetof(mindustry_graphics_ParticleRenderer, F_asyncTask), "Ljava/util/concurrent/Future;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_ParticleRenderer, 0, "()V", 1 },
	{ "count", (intptr_t) M_mindustry_graphics_ParticleRenderer_count_R_int, VTABLE_mindustry_graphics_ParticleRenderer_count_R_int, "()I", 1 },
	{ "updateAndRender", (intptr_t) M_mindustry_graphics_ParticleRenderer_updateAndRender, VTABLE_mindustry_graphics_ParticleRenderer_updateAndRender, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_graphics_ParticleRenderer_update, VTABLE_mindustry_graphics_ParticleRenderer_update, "()V", 1 },
	{ "updateAsync", (intptr_t) M_mindustry_graphics_ParticleRenderer_updateAsync, VTABLE_mindustry_graphics_ParticleRenderer_updateAsync, "()V", 0 },
	{ "render", (intptr_t) M_mindustry_graphics_ParticleRenderer_render, VTABLE_mindustry_graphics_ParticleRenderer_render, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_graphics_ParticleRenderer_add_float_float_float_float_float_float_float_float, VTABLE_mindustry_graphics_ParticleRenderer_add_float_float_float_float_float_float_float_float, "(FFFFFFFF)V", 1 },
	{ "buildVertices", (intptr_t) M_mindustry_graphics_ParticleRenderer_buildVertices, VTABLE_mindustry_graphics_ParticleRenderer_buildVertices, "()V", 0 },
	{ "uploadMeshData", (intptr_t) M_mindustry_graphics_ParticleRenderer_uploadMeshData_arc_graphics_Mesh, VTABLE_mindustry_graphics_ParticleRenderer_uploadMeshData_arc_graphics_Mesh, "(Larc/graphics/Mesh;)V", 0 },
	{ "update", (intptr_t) SM_mindustry_graphics_ParticleRenderer_update_Array1_float_int_float_R_int, 0, "([FIF)I", 8 },
	{ "makeShader", (intptr_t) SM_mindustry_graphics_ParticleRenderer_makeShader, 0, "()V", 8 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_ParticleRenderer, 0, "()V", 8 },
};

Class class_mindustry_graphics_ParticleRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/ParticleRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_ParticleRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_ParticleRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_ParticleRenderer,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_graphics_ParticleRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_ParticleRenderer = registerClass(&class_mindustry_graphics_ParticleRenderer);

}
