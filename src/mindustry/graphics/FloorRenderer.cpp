#include "mindustry/graphics/FloorRenderer.h"
#include "arc/Events.h"
#include "arc/graphics/g2d/Batch.h"
#include "mindustry/graphics/FloorRenderer_ChunkMesh.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/gl/IndexData.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/graphics/FloorRenderer_FloorRenderBatch.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/struct/IntSet_IntSetIterator.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "java/lang/Throwable.h"
#include "arc/graphics/Blending.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/util/Structs.h"
#include "arc/util/Time.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/FloorRenderer.h"
#include "arc/struct/ObjectSet.h"
#include "arc/graphics/Camera.h"
#include "arc/graphics/Mesh.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/graphics/VertexAttribute.h"
#include "mindustry/graphics/CacheLayer.h"
#include "java/lang/Float.h"
#include "arc/struct/IntSeq.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/graphics/FloorRenderer_invoke_arc_func_Cons_1.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/graphics/gl/SpriteIndices.h"
#include "arc/graphics/Gl.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jbool SF_mindustry_graphics_FloorRenderer_growSprites;
jobject SF_mindustry_graphics_FloorRenderer_attributes;
jint SF_mindustry_graphics_FloorRenderer_chunksize;
jint SF_mindustry_graphics_FloorRenderer_chunkunits;
jint SF_mindustry_graphics_FloorRenderer_vertexSize;
jint SF_mindustry_graphics_FloorRenderer_spriteSize;
jint SF_mindustry_graphics_FloorRenderer_maxSprites;
jfloat SF_mindustry_graphics_FloorRenderer_packPad;
jfloat SF_mindustry_graphics_FloorRenderer_pad;
jbool SF_mindustry_graphics_FloorRenderer_dynamic;

void mark_mindustry_graphics_FloorRenderer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_FloorRenderer_attributes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_FloorRenderer_attributes)->clazz)->markFunction)((jobject) SF_mindustry_graphics_FloorRenderer_attributes, mark, depth + 1);
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
	auto self = (mindustry_graphics_FloorRenderer *) object;
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_batch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_batch)->clazz)->markFunction)((jobject) self->F_batch, mark, depth + 1);
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
	if (self->F_combinedMat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_combinedMat)->clazz)->markFunction)((jobject) self->F_combinedMat, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_error)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_error)->clazz)->markFunction)((jobject) self->F_error, mark, depth + 1);
	if (self->F_cache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cache)->clazz)->markFunction)((jobject) self->F_cache, mark, depth + 1);
	if (self->F_dirty)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dirty)->clazz)->markFunction)((jobject) self->F_dirty, mark, depth + 1);
	if (self->F_drawnLayerSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawnLayerSet)->clazz)->markFunction)((jobject) self->F_drawnLayerSet, mark, depth + 1);
	if (self->F_drawnLayers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawnLayers)->clazz)->markFunction)((jobject) self->F_drawnLayers, mark, depth + 1);
	if (self->F_used)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_used)->clazz)->markFunction)((jobject) self->F_used, mark, depth + 1);
	if (self->F_underwaterDraw)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_underwaterDraw)->clazz)->markFunction)((jobject) self->F_underwaterDraw, mark, depth + 1);
	if (self->F_underwaterBlend)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_underwaterBlend)->clazz)->markFunction)((jobject) self->F_underwaterBlend, mark, depth + 1);
}

void init_mindustry_graphics_FloorRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_FloorRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(70);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(97200)));
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_FloorRenderer$FloorRenderBatch(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_FloorRenderer$FloorRenderBatch);
	init_mindustry_graphics_FloorRenderer$FloorRenderBatch_mindustry_graphics_FloorRenderer(ctx, sp[1].o, (frame[0].o));
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_batch = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_combinedMat = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_drawnLayerSet = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_drawnLayers = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_used = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_java_lang_Runnable)));
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_underwaterDraw = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Blending);
	init_arc_graphics_Blending_int_int_int_int(ctx, sp[1].o, (770), (771), (772), (771));
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_underwaterBlend = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_Shader(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"attribute vec4 a_position;\nattribute vec4 a_color;\nattribute vec2 a_texCoord0;\n\nuniform mat4 u_projectionViewMatrix;\nvarying vec4 v_color;\nvarying vec2 v_texCoords;\n\nvoid main(){\n   v_color = a_color;\n   v_color.a = v_color.a * (255.0/254.0);\n   v_texCoords = a_texCoord0;\n   gl_Position =  u_projectionViewMatrix * a_position;\n}\n"_j))), (((jobject) createStringLiteral(ctx, u8"varying vec4 v_color;\nvarying vec2 v_texCoords;\nuniform sampler2D u_texture;\n\nvoid main(){\n  gl_FragColor = v_color * texture2D(u_texture, v_texCoords);\n}\n"_j))));
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_shader = (jref) sp[1].o;
	LINE_NUMBER(98);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_FloorRenderer_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_graphics_FloorRenderer_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_graphics_FloorRenderer_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_FloorRenderer_getVertexBuffer_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:getVertexBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:recacheTile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	((func_mindustry_graphics_FloorRenderer_recacheTile_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_recacheTile_int_int])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_recacheTile_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:recacheTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_dirty;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(112);
	frame[3].i = ((frame[1].i) / (30));
	frame[4].i = ((frame[2].i) / (30));
	LINE_NUMBER(113);
	if ((frame[3].i) < 0) goto label_4;
	}
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_4;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_dirty;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_dirty;
	if (temp0 >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length)) goto label_4;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_dirty;
	ARRAY_ACCESS(jbyte, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (frame[4].i)) = (jint(1));
	}
label_4:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_drawFloor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:drawFloor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	((func_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean])(ctx, (frame[0].o), (jint(1)), (jint(0)));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:drawFloor", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	if (sp[0].o != nullptr) goto label_1;
	}
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(127);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[3].o = sp[0].o;
	LINE_NUMBER(129);
	frame[4].f = (jfloat(4.0f));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_position;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) - (((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_width) / (jfloat(2)))) - (frame[4].f)) / (jfloat(240.0f))))), (jint(0)));
	frame[5].i = temp0;
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_position;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) - (((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_height) / (jfloat(2)))) - (frame[4].f)) / (jfloat(240.0f))))), (jint(0)));
	frame[6].i = temp1;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_position;
	jint temp2 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_width) / (jfloat(2)))) + (frame[4].f)) / (jfloat(240.0f))));
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[7].i = temp3;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_position;
	jint temp4 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_height) / (jfloat(2)))) + (frame[4].f)) / (jfloat(240.0f))));
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	jint temp5 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp4, (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length));
	frame[8].i = temp5;
	LINE_NUMBER(137);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	frame[9].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_drawnLayers;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_drawnLayerSet;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(142);
	sp[0].o = frame[3].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r3;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(145);
	frame[11].i = (frame[5].i);
	}
label_13:;
	{
	if ((frame[11].i) > (frame[7].i)) goto label_14;
	}
	{
	LINE_NUMBER(146);
	frame[12].i = (frame[6].i);
	}
label_16:;
	{
	if ((frame[12].i) > (frame[8].i)) goto label_17;
	}
	{
	LINE_NUMBER(148);
	jint temp0 = frame[11].i;
	jint temp1 = frame[12].i;
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	jint temp2 = (jint)SM_arc_util_Structs_inBounds_int_int_Array2_java_lang_Object_R_boolean(ctx, temp0, temp1, sp[0].o);
	if (temp2 != 0) goto label_19;
	}
	goto label_20;
label_19:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	if ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[11].i))), (frame[12].i)))))->length) == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_dirty;
	if (((jint)ARRAY_ACCESS(jbyte, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[11].i))), (frame[12].i))) == 0) goto label_22;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_22;
label_21:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_dirty;
	ARRAY_ACCESS(jbyte, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[11].i))), (frame[12].i)) = (jint(0));
	LINE_NUMBER(152);
	((func_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean])(ctx, (frame[0].o), (frame[11].i), (frame[12].i), (frame[2].i));
	}
label_22:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[11].i))), (frame[12].i)));
	LINE_NUMBER(158);
	frame[14].i = (jint(0));
	}
label_25:;
	{
	if ((frame[14].i) >= (frame[9].i)) goto label_20;
	}
	{
	LINE_NUMBER(159);
	if ((frame[14].i) >= (((jarray) nullCheck(ctx, (frame[13].o)))->length)) goto label_27;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[14].i))) == nullptr) goto label_27;
	}
	{
	jint temp0 = frame[14].i;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_walls;
	if (temp0 == ((jint)((mindustry_graphics_CacheLayer *) NULL_CHECK(sp[0].o))->F_id)) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$ChunkMesh *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[14].i)))))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, (frame[10].o));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_drawnLayerSet;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, (frame[14].i));
	}
label_27:;
	{
	LINE_NUMBER(158);
	INST_IINC(14, 1);
	goto label_25;
	}
label_20:;
	{
	LINE_NUMBER(146);
	INST_IINC(12, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(145);
	INST_IINC(11, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_drawnLayerSet;
	sp[0].o = (jobject)((func_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(167);
	if (((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[11].o)))->F_hasNext) == 0) goto label_30;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_drawnLayers;
	jint temp0 = (jint)((func_arc_struct_IntSet$IntSetIterator_next_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_IntSet$IntSetIterator_next_R_int])(ctx, (frame[11].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_drawnLayers;
	((func_arc_struct_IntSeq_sort) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_sort])(ctx, sp[0].o);
	LINE_NUMBER(173);
	((func_mindustry_graphics_FloorRenderer_beginDraw) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_beginDraw])(ctx, (frame[0].o));
	LINE_NUMBER(175);
	frame[12].i = (jint(0));
	}
label_34:;
	{
	jint temp0 = frame[12].i;
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_drawnLayers;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_35;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	sp[2].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_drawnLayers;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[2].o, (frame[12].i));
	((func_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)));
	LINE_NUMBER(175);
	INST_IINC(12, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_underwaterDraw;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_drawUnderwater_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:drawUnderwater", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_underwaterDraw;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_beginDraw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:beginDraw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	if (sp[0].o != nullptr) goto label_1;
	}
	LINE_NUMBER(188);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(191);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_projectionViewMatrix"_j));
	sp[2].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_combinedMat;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_camera;
	sp[3].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[3].o))->F_mat;
	sp[2].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_math_Mat_translate_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat])(ctx, sp[2].o, (jfloat(-64.0f)), (jfloat(-64.0f)));
	sp[2].o = (jobject)((func_arc_math_Mat_scale_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Mat_scale_float_float_R_arc_math_Mat])(ctx, sp[2].o, ((jfloat)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_packWidth), ((jfloat)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_packHeight));
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_Texture_bind_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_bind_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(200);
	SM_arc_graphics_Gl_enable_int(ctx, (3042));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:drawLayer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	((func_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:drawLayer", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	if (sp[0].o != nullptr) goto label_1;
	}
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(212);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[3].o = sp[0].o;
	LINE_NUMBER(215);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_position;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) - (((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_width) / (jfloat(2)))) - (jfloat(4.0f))) / (jfloat(240.0f))))), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(216);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_position;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) - (((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_height) / (jfloat(2)))) - (jfloat(4.0f))) / (jfloat(240.0f))))), (jint(0)));
	frame[5].i = temp1;
	LINE_NUMBER(217);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_position;
	jint temp2 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_width) / (jfloat(2)))) + (jfloat(4.0f))) / (jfloat(240.0f))));
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[6].i = temp3;
	LINE_NUMBER(218);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_position;
	jint temp4 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[3].o)))->F_height) / (jfloat(2)))) + (jfloat(4.0f))) / (jfloat(240.0f))));
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	jint temp5 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp4, (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length));
	frame[7].i = temp5;
	LINE_NUMBER(220);
	((func_mindustry_graphics_CacheLayer_begin) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_CacheLayer_begin])(ctx, (frame[1].o));
	LINE_NUMBER(222);
	sp[0].o = frame[3].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r3;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(224);
	frame[9].i = (frame[4].i);
	}
label_10:;
	{
	if ((frame[9].i) > (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(225);
	frame[10].i = (frame[5].i);
	}
label_13:;
	{
	if ((frame[10].i) > (frame[7].i)) goto label_14;
	}
	{
	LINE_NUMBER(227);
	jint temp0 = frame[9].i;
	jint temp1 = frame[10].i;
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	jint temp2 = (jint)SM_arc_util_Structs_inBounds_int_int_Array2_java_lang_Object_R_boolean(ctx, temp0, temp1, sp[0].o);
	if (temp2 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	if ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))), (frame[10].i)))))->length) != 0) goto label_17;
	}
	LINE_NUMBER(228);
	goto label_16;
label_17:;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_dirty;
	if (((jint)ARRAY_ACCESS(jbyte, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))), (frame[10].i))) == 0) goto label_19;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_19;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_dirty;
	ARRAY_ACCESS(jbyte, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))), (frame[10].i)) = (jint(0));
	LINE_NUMBER(233);
	((func_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean])(ctx, (frame[0].o), (frame[9].i), (frame[10].i), (jint(0)));
	}
label_19:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))), (frame[10].i))), ((jint)((mindustry_graphics_CacheLayer *) NULL_CHECK((frame[1].o)))->F_id)));
	LINE_NUMBER(238);
	if ((frame[11].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$ChunkMesh *) NULL_CHECK((frame[11].o)))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, (frame[8].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	jint temp0 = jint(4);
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_mindustry_graphics_FloorRenderer$ChunkMesh_getMaxVertices_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getMaxVertices_R_int])(ctx, (frame[11].o));
	((func_mindustry_graphics_FloorRenderer$ChunkMesh_render_arc_graphics_gl_Shader_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_render_arc_graphics_gl_Shader_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, ((temp2 * (6)) / (jint(4))));
	}
label_16:;
	{
	LINE_NUMBER(225);
	INST_IINC(10, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(224);
	INST_IINC(9, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(245);
	if (((jint)((mindustry_graphics_CacheLayer *) NULL_CHECK((frame[1].o)))->F_liquid) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_underwaterDraw;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_underwaterBlend;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_underwaterDraw;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[9].o = (checkCast(ctx, getArrayClass(&class_java_lang_Runnable, 1), sp[0].o));
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_underwaterDraw;
	frame[10].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(251);
	frame[11].i = (jint(0));
	}
label_29:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_30;
	}
	{
	LINE_NUMBER(252);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i))));
	LINE_NUMBER(251);
	INST_IINC(11, 1);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(255);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(256);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_normal;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(257);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_normal;
	((func_arc_graphics_Blending_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Blending_apply])(ctx, sp[0].o);
	LINE_NUMBER(258);
	((func_mindustry_graphics_FloorRenderer_beginDraw) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_beginDraw])(ctx, (frame[0].o));
	}
label_24:;
	{
	LINE_NUMBER(261);
	((func_mindustry_graphics_CacheLayer_end) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_CacheLayer_end])(ctx, (frame[1].o));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:cacheChunk", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_used;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(267);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (((frame[1].i) * (30)) - (jint(1))), (jint(0)));
	frame[4].i = temp0;
	}
label_2:;
	{
	if ((frame[4].i) >= ((((frame[1].i) + (jint(1))) * (30)) + (jint(1)))) goto label_3;
	}
	{
	jint temp0 = frame[4].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (((frame[2].i) * (30)) - (jint(1))), (jint(0)));
	frame[5].i = temp0;
	}
label_5:;
	{
	if ((frame[5].i) >= ((((frame[2].i) + (jint(1))) * (30)) + (jint(1)))) goto label_6;
	}
	{
	jint temp0 = frame[5].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(269);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[4].i), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(270);
	if ((frame[3].i) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_cacheLayer;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_normal;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(272);
	if ((frame[7].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_used;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_cacheLayer;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(276);
	if ((frame[7].i) == 0) goto label_14;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isAccessible_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isAccessible_int_int_R_boolean])(ctx, sp[0].o, (frame[4].i), (frame[5].i));
	if (temp0 == 0) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_used;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_cacheLayer;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(268);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(267);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	if ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i)))))->length) != 0) goto label_16;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	jint temp0 = frame[2].i;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_FloorRenderer$ChunkMesh, (((jarray) nullCheck(ctx, sp[1].o))->length));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i)));
	LINE_NUMBER(288);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_19:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_20;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(289);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((jint)((mindustry_graphics_CacheLayer *) NULL_CHECK((frame[8].o)))->F_id))) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(290);
	((func_mindustry_graphics_FloorRenderer$ChunkMesh_dispose) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((jint)((mindustry_graphics_CacheLayer *) NULL_CHECK((frame[8].o)))->F_id))))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_dispose])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((jint)((mindustry_graphics_CacheLayer *) NULL_CHECK((frame[8].o)))->F_id))));
	}
label_22:;
	{
	LINE_NUMBER(292);
	ARRAY_ACCESS(jobject, (frame[4].o), ((jint)((mindustry_graphics_CacheLayer *) NULL_CHECK((frame[8].o)))->F_id)) = (jobject(nullptr));
	LINE_NUMBER(288);
	INST_IINC(7, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_used;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_25:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_graphics_CacheLayer, sp[0].o));
	LINE_NUMBER(296);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((mindustry_graphics_CacheLayer *) NULL_CHECK((frame[6].o)))->F_id;
	sp[1].o = (jobject)((func_mindustry_graphics_FloorRenderer_cacheChunkLayer_int_int_mindustry_graphics_CacheLayer_boolean_R_mindustry_graphics_FloorRenderer$ChunkMesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_cacheChunkLayer_int_int_mindustry_graphics_CacheLayer_boolean_R_mindustry_graphics_FloorRenderer$ChunkMesh])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[6].o), (frame[3].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(297);
	goto label_25;
	}
label_26:;
	LINE_NUMBER(298);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_FloorRenderer_cacheChunkLayer_int_int_mindustry_graphics_CacheLayer_boolean_R_mindustry_graphics_FloorRenderer$ChunkMesh(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:cacheChunkLayer", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(301);
	((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_vidx = (jint(0));
	LINE_NUMBER(303);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	frame[5].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(306);
	sp[0].o = frame[3].o;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_walls;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	INST_ICONST(1);
	clinit_mindustry_graphics_FloorRenderer(ctx);
	SF_mindustry_graphics_FloorRenderer_growSprites = (--sp)->i;
label_8:;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = sp[0].o;
	LINE_NUMBER(309);
	frame[6].i = ((frame[1].i) * (30));
	}
label_10:;
	{
	if ((frame[6].i) >= (((frame[1].i) + (jint(1))) * (30))) goto label_1;
	}
	{
	LINE_NUMBER(310);
	frame[7].i = ((frame[2].i) * (30));
	}
label_12:;
	{
	if ((frame[7].i) >= (((frame[2].i) + (jint(1))) * (30))) goto label_13;
	}
	{
	LINE_NUMBER(311);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(314);
	if ((frame[8].o) != nullptr) goto label_16;
	}
	LINE_NUMBER(315);
	goto label_18;
label_16:;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(320);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_cacheLayer;
	if (sp[0].o != (frame[3].o)) goto label_20;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_walls;
	if (sp[0].o != sp[1].o) goto label_20;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isDarkened_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_isDarkened_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_21;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_data) >= (jint(5))) goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	((func_mindustry_world_Block_drawBase_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawBase_mindustry_world_Tile])(ctx, sp[0].o, (frame[8].o));
	goto label_18;
	}
label_20:;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_cacheLayer;
	if (sp[0].o != (frame[3].o)) goto label_22;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_23;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isAccessible_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isAccessible_int_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_y));
	if (temp0 != 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_cacheLayer;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_walls;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_fillsTile) != 0) goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(323);
	((func_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile])(ctx, (frame[9].o), (frame[8].o));
	goto label_18;
	}
label_22:;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_cacheLayer;
	if (sp[0].o == (frame[3].o)) goto label_18;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_walls;
	if (sp[0].o == sp[1].o) goto label_18;
	}
	{
	LINE_NUMBER(325);
	((func_mindustry_world_blocks_environment_Floor_drawNonLayer_mindustry_world_Tile_mindustry_graphics_CacheLayer) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawNonLayer_mindustry_world_Tile_mindustry_graphics_CacheLayer])(ctx, (frame[9].o), (frame[8].o), (frame[3].o));
	}
label_18:;
	{
	LINE_NUMBER(310);
	INST_IINC(7, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(309);
	INST_IINC(6, 1);
	goto label_10;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(330);
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = (frame[5].o);
	LINE_NUMBER(331);
	clinit_mindustry_graphics_FloorRenderer(ctx);
	SF_mindustry_graphics_FloorRenderer_growSprites = (jint(0));
	LINE_NUMBER(332);
	goto label_27;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(330);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	{
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = (frame[5].o);
	LINE_NUMBER(331);
	clinit_mindustry_graphics_FloorRenderer(ctx);
	SF_mindustry_graphics_FloorRenderer_growSprites = (jint(0));
	LINE_NUMBER(332);
	throwException(ctx, (frame[10].o));	}
label_27:;
	{
	LINE_NUMBER(334);
	frame[6].i = ((jint)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_vidx);
	LINE_NUMBER(335);
	clinit_mindustry_graphics_FloorRenderer$ChunkMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_FloorRenderer$ChunkMesh);
	jint temp0 = jint(1);
	jint temp1 = (frame[6].i) / (jint(3));
	jint temp2 = jint(0);
	clinit_mindustry_graphics_FloorRenderer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_FloorRenderer_attributes;
	init_mindustry_graphics_FloorRenderer$ChunkMesh_boolean_int_int_Array1_arc_graphics_VertexAttribute_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, ((jfloat((((frame[1].i) * (8)) * (30)))) - (jfloat(4.0f))), ((jfloat((((frame[2].i) * (8)) * (30)))) - (jfloat(4.0f))), ((jfloat(((((frame[1].i) + (jint(1))) * (8)) * (30)))) + (jfloat(4.0f))), ((jfloat(((((frame[2].i) + (jint(1))) * (8)) * (30)))) + (jfloat(4.0f))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(339);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_mindustry_graphics_FloorRenderer$ChunkMesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_vidx));
	LINE_NUMBER(341);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_arc_graphics_gl_SpriteIndices_get_R_arc_graphics_gl_IndexData(ctx);
	((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_reload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:reload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	((func_mindustry_graphics_FloorRenderer_reload_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_reload_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_reload_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:reload", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK((frame[0].o)))->F_cache;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_1;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(354);
	frame[6].o = (frame[5].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_5:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_6;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(355);
	frame[10].o = (frame[9].o);
	frame[11].i = (((jarray) nullCheck(ctx, (frame[10].o)))->length);
	frame[12].i = (jint(0));
	}
label_8:;
	{
	if ((frame[12].i) >= (frame[11].i)) goto label_9;
	}
	{
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[12].i)));
	LINE_NUMBER(356);
	if ((frame[13].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(357);
	((func_mindustry_graphics_FloorRenderer$ChunkMesh_dispose) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_dispose])(ctx, (frame[13].o));
	}
label_11:;
	{
	LINE_NUMBER(355);
	INST_IINC(12, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(354);
	INST_IINC(8, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(353);
	INST_IINC(4, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(364);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat(temp0)) / (jfloat(30.0f))));
	frame[2].i = temp1;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat(temp2)) / (jfloat(30.0f))));
	frame[3].i = temp3;
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	jint temp4 = frame[2].i;
	jint temp5 = frame[3].i;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	sp[1].o = (jobject)createMultiArray(ctx, &class_mindustry_graphics_FloorRenderer$ChunkMesh, {temp4, temp5, (((jarray) nullCheck(ctx, sp[1].o))->length)});
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_cache = (jref) sp[1].o;
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createMultiArray(ctx, &class_boolean, {(frame[2].i), (frame[3].i)});
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_dirty = (jref) sp[1].o;
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"grass1"_j))));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_texture;
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"env-error"_j))));
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_error = (jref) sp[1].o;
	LINE_NUMBER(371);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp6 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[1].o);
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_packWidth = ((jfloat(temp6)) + (jfloat(128.0f)));
	LINE_NUMBER(372);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[1].o);
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_packHeight = ((jfloat(temp7)) + (jfloat(128.0f)));
	LINE_NUMBER(376);
	SM_arc_util_Time_mark(ctx);
	LINE_NUMBER(378);
	frame[4].i = (jint(0));
	}
label_22:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_23;
	}
	{
	LINE_NUMBER(379);
	frame[5].i = (jint(0));
	}
label_25:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_26;
	}
	{
	LINE_NUMBER(380);
	((func_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean])(ctx, (frame[0].o), (frame[4].i), (frame[5].i), (frame[1].i));
	LINE_NUMBER(379);
	INST_IINC(5, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(378);
	INST_IINC(4, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(384);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Generated world mesh: @ms"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)SM_arc_util_Time_elapsed_R_float(ctx);
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	((func_mindustry_graphics_FloorRenderer_reload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer_reload])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_FloorRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_FloorRenderer_chunksize = jint(30);
	SF_mindustry_graphics_FloorRenderer_chunkunits = jint(240);
	SF_mindustry_graphics_FloorRenderer_vertexSize = jint(3);
	SF_mindustry_graphics_FloorRenderer_spriteSize = jint(12);
	SF_mindustry_graphics_FloorRenderer_maxSprites = jint(8100);
	SF_mindustry_graphics_FloorRenderer_packPad = jfloat(64.0f);
	SF_mindustry_graphics_FloorRenderer_pad = jfloat(4.0f);
	SF_mindustry_graphics_FloorRenderer_dynamic = jint(0);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_FloorRenderer(ctx);
	{
	LINE_NUMBER(33);
	clinit_mindustry_graphics_FloorRenderer(ctx);
	SF_mindustry_graphics_FloorRenderer_growSprites = (jint(1));
	LINE_NUMBER(35);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_VertexAttribute, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = (jobject)SF_arc_graphics_VertexAttribute_packedPosition;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = (jobject)SF_arc_graphics_VertexAttribute_color;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = (jobject)SF_arc_graphics_VertexAttribute_packedTexCoords;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	clinit_mindustry_graphics_FloorRenderer(ctx);
	SF_mindustry_graphics_FloorRenderer_attributes = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_FloorRenderer[] {
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
	(void *) M_mindustry_graphics_FloorRenderer_getVertexBuffer_R_Array1_float,
	(void *) M_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile,
	(void *) M_mindustry_graphics_FloorRenderer_recacheTile_int_int,
	(void *) M_mindustry_graphics_FloorRenderer_drawFloor,
	(void *) M_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean,
	(void *) M_mindustry_graphics_FloorRenderer_drawUnderwater_java_lang_Runnable,
	(void *) M_mindustry_graphics_FloorRenderer_beginDraw,
	(void *) M_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer,
	(void *) M_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean,
	(void *) M_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean,
	(void *) M_mindustry_graphics_FloorRenderer_cacheChunkLayer_int_int_mindustry_graphics_CacheLayer_boolean_R_mindustry_graphics_FloorRenderer$ChunkMesh,
	(void *) M_mindustry_graphics_FloorRenderer_reload,
	(void *) M_mindustry_graphics_FloorRenderer_reload_boolean,
	(void *) M_mindustry_graphics_FloorRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent,
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
	{ "getVertexBuffer", "()[F" },
	{ "recacheTile", "(Lmindustry/world/Tile;)V" },
	{ "recacheTile", "(II)V" },
	{ "drawFloor", "()V" },
	{ "drawFloor", "(ZZ)V" },
	{ "drawUnderwater", "(Ljava/lang/Runnable;)V" },
	{ "beginDraw", "()V" },
	{ "drawLayer", "(Lmindustry/graphics/CacheLayer;)V" },
	{ "drawLayer", "(Lmindustry/graphics/CacheLayer;Z)V" },
	{ "cacheChunk", "(IIZ)V" },
	{ "cacheChunkLayer", "(IILmindustry/graphics/CacheLayer;Z)Lmindustry/graphics/FloorRenderer$ChunkMesh;" },
	{ "reload", "()V" },
	{ "reload", "(Z)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_graphics_FloorRenderer$FloorRenderBatch,
	&class_mindustry_graphics_FloorRenderer$ChunkMesh,
};

static FieldMetadata fields[] {
	{ "growSprites", &class_boolean, (intptr_t) &SF_mindustry_graphics_FloorRenderer_growSprites, "Z", 9 },
	{ "attributes", getArrayClass(&class_arc_graphics_VertexAttribute, 1), (intptr_t) &SF_mindustry_graphics_FloorRenderer_attributes, "[Larc/graphics/VertexAttribute;", 26 },
	{ "chunksize", &class_int, (intptr_t) &SF_mindustry_graphics_FloorRenderer_chunksize, "I", 26 },
	{ "chunkunits", &class_int, (intptr_t) &SF_mindustry_graphics_FloorRenderer_chunkunits, "I", 26 },
	{ "vertexSize", &class_int, (intptr_t) &SF_mindustry_graphics_FloorRenderer_vertexSize, "I", 26 },
	{ "spriteSize", &class_int, (intptr_t) &SF_mindustry_graphics_FloorRenderer_spriteSize, "I", 26 },
	{ "maxSprites", &class_int, (intptr_t) &SF_mindustry_graphics_FloorRenderer_maxSprites, "I", 26 },
	{ "packPad", &class_float, (intptr_t) &SF_mindustry_graphics_FloorRenderer_packPad, "F", 26 },
	{ "pad", &class_float, (intptr_t) &SF_mindustry_graphics_FloorRenderer_pad, "F", 26 },
	{ "dynamic", &class_boolean, (intptr_t) &SF_mindustry_graphics_FloorRenderer_dynamic, "Z", 26 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(mindustry_graphics_FloorRenderer, F_vertices), "[F", 2 },
	{ "vidx", &class_int, offsetof(mindustry_graphics_FloorRenderer, F_vidx), "I", 2 },
	{ "batch", &class_mindustry_graphics_FloorRenderer$FloorRenderBatch, offsetof(mindustry_graphics_FloorRenderer, F_batch), "Lmindustry/graphics/FloorRenderer$FloorRenderBatch;", 2 },
	{ "shader", &class_arc_graphics_gl_Shader, offsetof(mindustry_graphics_FloorRenderer, F_shader), "Larc/graphics/gl/Shader;", 2 },
	{ "combinedMat", &class_arc_math_Mat, offsetof(mindustry_graphics_FloorRenderer, F_combinedMat), "Larc/math/Mat;", 2 },
	{ "texture", &class_arc_graphics_Texture, offsetof(mindustry_graphics_FloorRenderer, F_texture), "Larc/graphics/Texture;", 2 },
	{ "error", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_graphics_FloorRenderer, F_error), "Larc/graphics/g2d/TextureRegion;", 2 },
	{ "cache", getArrayClass(&class_mindustry_graphics_FloorRenderer$ChunkMesh, 3), offsetof(mindustry_graphics_FloorRenderer, F_cache), "[[[Lmindustry/graphics/FloorRenderer$ChunkMesh;", 2 },
	{ "dirty", getArrayClass(&class_boolean, 2), offsetof(mindustry_graphics_FloorRenderer, F_dirty), "[[Z", 2 },
	{ "drawnLayerSet", &class_arc_struct_IntSet, offsetof(mindustry_graphics_FloorRenderer, F_drawnLayerSet), "Larc/struct/IntSet;", 2 },
	{ "drawnLayers", &class_arc_struct_IntSeq, offsetof(mindustry_graphics_FloorRenderer, F_drawnLayers), "Larc/struct/IntSeq;", 2 },
	{ "used", &class_arc_struct_ObjectSet, offsetof(mindustry_graphics_FloorRenderer, F_used), "Larc/struct/ObjectSet;", 2 },
	{ "packWidth", &class_float, offsetof(mindustry_graphics_FloorRenderer, F_packWidth), "F", 2 },
	{ "packHeight", &class_float, offsetof(mindustry_graphics_FloorRenderer, F_packHeight), "F", 2 },
	{ "underwaterDraw", &class_arc_struct_Seq, offsetof(mindustry_graphics_FloorRenderer, F_underwaterDraw), "Larc/struct/Seq;", 2 },
	{ "underwaterBlend", &class_arc_graphics_Blending, offsetof(mindustry_graphics_FloorRenderer, F_underwaterBlend), "Larc/graphics/Blending;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_FloorRenderer, 0, "()V", 1 },
	{ "getVertexBuffer", (intptr_t) M_mindustry_graphics_FloorRenderer_getVertexBuffer_R_Array1_float, VTABLE_mindustry_graphics_FloorRenderer_getVertexBuffer_R_Array1_float, "()[F", 1 },
	{ "recacheTile", (intptr_t) M_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile, VTABLE_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "recacheTile", (intptr_t) M_mindustry_graphics_FloorRenderer_recacheTile_int_int, VTABLE_mindustry_graphics_FloorRenderer_recacheTile_int_int, "(II)V", 1 },
	{ "drawFloor", (intptr_t) M_mindustry_graphics_FloorRenderer_drawFloor, VTABLE_mindustry_graphics_FloorRenderer_drawFloor, "()V", 1 },
	{ "drawFloor", (intptr_t) M_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean, VTABLE_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean, "(ZZ)V", 1 },
	{ "drawUnderwater", (intptr_t) M_mindustry_graphics_FloorRenderer_drawUnderwater_java_lang_Runnable, VTABLE_mindustry_graphics_FloorRenderer_drawUnderwater_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "beginDraw", (intptr_t) M_mindustry_graphics_FloorRenderer_beginDraw, VTABLE_mindustry_graphics_FloorRenderer_beginDraw, "()V", 1 },
	{ "drawLayer", (intptr_t) M_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer, VTABLE_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer, "(Lmindustry/graphics/CacheLayer;)V", 1 },
	{ "drawLayer", (intptr_t) M_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean, VTABLE_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean, "(Lmindustry/graphics/CacheLayer;Z)V", 1 },
	{ "cacheChunk", (intptr_t) M_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean, VTABLE_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean, "(IIZ)V", 2 },
	{ "cacheChunkLayer", (intptr_t) M_mindustry_graphics_FloorRenderer_cacheChunkLayer_int_int_mindustry_graphics_CacheLayer_boolean_R_mindustry_graphics_FloorRenderer$ChunkMesh, VTABLE_mindustry_graphics_FloorRenderer_cacheChunkLayer_int_int_mindustry_graphics_CacheLayer_boolean_R_mindustry_graphics_FloorRenderer$ChunkMesh, "(IILmindustry/graphics/CacheLayer;Z)Lmindustry/graphics/FloorRenderer$ChunkMesh;", 2 },
	{ "reload", (intptr_t) M_mindustry_graphics_FloorRenderer_reload, VTABLE_mindustry_graphics_FloorRenderer_reload, "()V", 1 },
	{ "reload", (intptr_t) M_mindustry_graphics_FloorRenderer_reload_boolean, VTABLE_mindustry_graphics_FloorRenderer_reload_boolean, "(Z)V", 1 },
	{ "lambda$new$0", (intptr_t) M_mindustry_graphics_FloorRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_graphics_FloorRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_FloorRenderer, 0, "()V", 8 },
};

Class class_mindustry_graphics_FloorRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/FloorRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_FloorRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_FloorRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_FloorRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_FloorRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_FloorRenderer = registerClass(&class_mindustry_graphics_FloorRenderer);

}
