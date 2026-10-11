#include "mindustry/editor/EditorRenderer.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/math/geom/Point2.h"
#include "arc/graphics/gl/IndexData.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Intc.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Boolf.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/editor/EditorRenderer_invoke_arc_func_Intc_1.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/util/Structs.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "mindustry/gen/Building.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/editor/EditorRenderer.h"
#include "mindustry/graphics/FloorRenderer.h"
#include "mindustry/editor/EditorSpriteCache.h"
#include "mindustry/world/blocks/environment/StaticWall.h"
#include "arc/graphics/Camera.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/graphics/CacheLayer.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "arc/struct/IntSet.h"
#include "mindustry/editor/EditorRenderer_invoke_arc_func_Boolf_1.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "java/lang/Math.h"
#include "mindustry/graphics/Shaders_DarknessShader.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/graphics/gl/SpriteIndices.h"
#include "mindustry/content/Blocks.h"
#include "arc/graphics/Gl.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/editor/MapEditor.h"

extern "C" {

jfloat SF_mindustry_editor_EditorRenderer_packPad;
jint SF_mindustry_editor_EditorRenderer_chunkSize;
jobject SF_mindustry_editor_EditorRenderer_tmpTiles;

void mark_mindustry_editor_EditorRenderer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_editor_EditorRenderer_tmpTiles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_EditorRenderer_tmpTiles)->clazz)->markFunction)((jobject) SF_mindustry_editor_EditorRenderer_tmpTiles, mark, depth + 1);
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
	auto self = (mindustry_editor_EditorRenderer *) object;
	if (self->F_chunks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chunks)->clazz)->markFunction)((jobject) self->F_chunks, mark, depth + 1);
	if (self->F_recacheChunks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_recacheChunks)->clazz)->markFunction)((jobject) self->F_recacheChunks, mark, depth + 1);
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
}

void init_mindustry_editor_EditorRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_editor_EditorRenderer *) NULL_CHECK(sp[0].o))->F_recacheChunks = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(30);
	((func_mindustry_editor_EditorRenderer_dispose) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorRenderer_dispose])(ctx, (frame[0].o));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_recacheChunks;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((jfloat((frame[1].i))) / (jfloat(60.0f))))));
	jint temp1 = jint(temp0);
	jdouble temp2 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((jfloat((frame[2].i))) / (jfloat(60.0f))))));
	sp[1].o = (jobject)createMultiArray(ctx, &class_mindustry_editor_EditorSpriteCache, {temp1, (jint(temp2))});
	((mindustry_editor_EditorRenderer *) NULL_CHECK(sp[0].o))->F_chunks = (jref) sp[1].o;
	LINE_NUMBER(35);
	((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(36);
	((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(37);
	((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_packWidth = ((jfloat(((frame[1].i) * (8)))) + (jfloat(160.0f)));
	LINE_NUMBER(38);
	((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_packHeight = ((jfloat(((frame[2].i) * (8)))) + (jfloat(160.0f)));
	LINE_NUMBER(41);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_9;
	}
	{
	LINE_NUMBER(42);
	frame[4].i = (jint(0));
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(43);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_environment_StaticWall)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(45);
	((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_data = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(42);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(41);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(50);
	((func_mindustry_editor_EditorRenderer_recache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorRenderer_recache])(ctx, (frame[0].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_draw_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_Shader(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"attribute vec4 a_position;\nattribute vec4 a_color;\nattribute vec2 a_texCoord0;\nuniform mat4 u_projTrans;\nvarying vec4 v_color;\nvarying vec2 v_texCoords;\nvoid main(){\n   v_color = a_color;\n   v_color.a = v_color.a * (255.0/254.0);\n   v_texCoords = a_texCoord0;\n   gl_Position = u_projTrans * a_position;\n}\n"_j))), (((jobject) createStringLiteral(ctx, u8"varying lowp vec4 v_color;\nvarying vec2 v_texCoords;\nuniform sampler2D u_texture;\n\nvoid main(){\n  gl_FragColor = v_color * texture2D(u_texture, v_texCoords);\n}\n"_j))));
	((mindustry_editor_EditorRenderer *) NULL_CHECK(sp[0].o))->F_shader = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(83);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(86);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jlong temp0 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[0].o);
	if ((longCompare((temp0 % (jlong(2ll))), (jlong(0)))) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(88);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	frame[6].i = ((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_animateWater);
	LINE_NUMBER(89);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_animateWater = (jint(0));
	LINE_NUMBER(91);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m4;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_idt_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_idt_R_arc_math_Mat])(ctx, sp[0].o);
	LINE_NUMBER(94);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(95);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	jfloat temp1 = ((jfloat(temp0)) / (jfloat(2))) * (jfloat(8.0f));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (((jfloat(temp2)) / (jfloat(2))) * (jfloat(8.0f))));
	LINE_NUMBER(96);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width = (jfloat(999999.0f));
	LINE_NUMBER(97);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height = (jfloat(999999.0f));
	LINE_NUMBER(98);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_mat;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_m3;
	sp[1].o = (jobject)((func_arc_math_Mat_setToTranslation_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Mat_setToTranslation_float_float_R_arc_math_Mat])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[1].o = (jobject)((func_arc_math_Mat_scale_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Mat_scale_float_float_R_arc_math_Mat])(ctx, sp[1].o, ((frame[3].f) / (jfloat((((jint)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_width) * (8))))), ((frame[4].f) / (jfloat((((jint)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_height) * (8))))));
	sp[1].o = (jobject)((func_arc_math_Mat_translate_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat])(ctx, sp[1].o, (jfloat(4.0f)), (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showFloor) == 0) goto label_16;
	}
	{
	LINE_NUMBER(100);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	jint temp0 = frame[5].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(temp1))->F_showTerrain) != 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	POP_N(3); // Pop method args
	((func_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean])(ctx, sp[0].o, sp[1].i, sp[2].i);
label_16:;
	{
	LINE_NUMBER(103);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m2;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(106);
	SM_arc_graphics_Gl_disable_int(ctx, (3089));
	LINE_NUMBER(108);
	if ((frame[5].i) == 0) goto label_22;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp += 1;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showBuildings) != 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showTerrain) != 0) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	POP_N(3); // Pop method args
	((func_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean])(ctx, sp[0].o, sp[1].i, sp[2].i);
label_22:;
	{
	LINE_NUMBER(110);
	SM_arc_graphics_Gl_enable_int(ctx, (3089));
	LINE_NUMBER(112);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_mat;
	SM_arc_graphics_g2d_Draw_proj_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(114);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_darkness;
	SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader(ctx, sp[0].o);
	LINE_NUMBER(115);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((func_mindustry_graphics_BlockRenderer_getShadowBuffer_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_getShadowBuffer_R_arc_graphics_gl_FrameBuffer])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	jfloat temp1 = ((jfloat((temp0 * (8)))) / (jfloat(2))) - (jfloat(4.0f));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	jfloat temp3 = ((jfloat((temp2 * (8)))) / (jfloat(2))) - (jfloat(4.0f));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	jfloat temp5 = jfloat((temp4 * (8)));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp6 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp1, temp3, temp5, (jfloat(((-temp6) * (8)))));
	LINE_NUMBER(116);
	SM_arc_graphics_g2d_Draw_shader(ctx);
	LINE_NUMBER(118);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m2;
	SM_arc_graphics_g2d_Draw_proj_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(120);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	((func_mindustry_graphics_FloorRenderer_beginDraw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_beginDraw])(ctx, sp[0].o);
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showTerrain) == 0) goto label_34;
	}
	{
	LINE_NUMBER(122);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_walls;
	((func_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean])(ctx, sp[0].o, sp[1].o, (frame[5].i));
	}
label_34:;
	{
	LINE_NUMBER(124);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_animateWater = (frame[6].i);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	if (sp[0].o != nullptr) goto label_37;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_37:;
	{
	LINE_NUMBER(128);
	if ((frame[5].i) == 0) goto label_38;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_recacheChunks;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorRenderer_invoke_arc_func_Intc_1(ctx);
		auto proxy = (mindustry_editor_EditorRenderer_invoke_arc_func_Intc_1 *) gcAlloc(ctx, &class_mindustry_editor_EditorRenderer_invoke_arc_func_Intc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSet_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_recacheChunks;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	}
label_38:;
	{
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showBuildings) == 0) goto label_41;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_projTrans"_j));
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_m1;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_camera;
	sp[3].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[3].o))->F_mat;
	sp[2].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_math_Mat_translate_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat])(ctx, sp[2].o, (jfloat(-80.0f)), (jfloat(-80.0f)));
	sp[2].o = (jobject)((func_arc_math_Mat_scale_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Mat_scale_float_float_R_arc_math_Mat])(ctx, sp[2].o, ((jfloat)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_packWidth), ((jfloat)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_packHeight));
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(137);
	frame[7].i = (jint(0));
	}
label_45:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_41;
	}
	{
	LINE_NUMBER(138);
	frame[8].i = (jint(0));
	}
label_47:;
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	if (temp0 >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length)) goto label_48;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), (frame[8].i)));
	LINE_NUMBER(141);
	if ((frame[9].o) != nullptr) goto label_51;
	}
	goto label_52;
label_51:;
	{
	LINE_NUMBER(143);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_mindustry_editor_EditorSpriteCache_render_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_render_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	}
label_52:;
	{
	LINE_NUMBER(138);
	INST_IINC(8, 1);
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(137);
	INST_IINC(7, 1);
	goto label_45;
	}
label_41:;
	{
	LINE_NUMBER(149);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(150);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m4;
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_updateStatic_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:updateStatic", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(154);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	((func_mindustry_graphics_FloorRenderer_recacheTile_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_recacheTile_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(155);
	if ((frame[1].i) <= 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	((func_mindustry_graphics_FloorRenderer_recacheTile_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_recacheTile_int_int])(ctx, sp[0].o, ((frame[1].i) - (jint(1))), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(156);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	((func_mindustry_graphics_FloorRenderer_recacheTile_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_recacheTile_int_int])(ctx, sp[0].o, (frame[1].i), ((frame[2].i) - (jint(1))));
	}
label_3:;
	{
	LINE_NUMBER(157);
	jint temp0 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 - (jint(1)))) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	((func_mindustry_graphics_FloorRenderer_recacheTile_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_recacheTile_int_int])(ctx, sp[0].o, ((frame[1].i) + (jint(1))), (frame[2].i));
	}
label_4:;
	{
	LINE_NUMBER(158);
	jint temp0 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 - (jint(1)))) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	((func_mindustry_graphics_FloorRenderer_recacheTile_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_recacheTile_int_int])(ctx, sp[0].o, (frame[1].i), ((frame[2].i) + (jint(1))));
	}
label_5:;
	LINE_NUMBER(159);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:updateBlock", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	((func_mindustry_editor_EditorRenderer_updateBlock_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateBlock_int_int])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(163);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_updateBlock_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:updateBlock", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_recacheChunks;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, ((frame[1].i) / (60)), ((frame[2].i) / (60)));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_recache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:recache", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp += 1;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showTerrain) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_mindustry_graphics_FloorRenderer_reload_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_reload_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(172);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_reload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_reload])(ctx, sp[0].o);
	LINE_NUMBER(174);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(175);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	if (temp0 >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length)) goto label_9;
	}
	{
	LINE_NUMBER(176);
	((func_mindustry_editor_EditorRenderer_recacheChunk_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorRenderer_recacheChunk_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(175);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(174);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(180);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showBuildings) == 0) goto label_12;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showTerrain) != 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(181);
	((func_mindustry_editor_EditorRenderer_recacheShadows) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorRenderer_recacheShadows])(ctx, (frame[0].o));
	}
label_13:;
	LINE_NUMBER(183);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_recacheTerrain(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:recacheTerrain", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp += 1;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showTerrain) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_mindustry_graphics_FloorRenderer_reload_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_reload_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_reload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_reload])(ctx, sp[0].o);
	LINE_NUMBER(188);
	((func_mindustry_editor_EditorRenderer_recacheShadows) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorRenderer_recacheShadows])(ctx, (frame[0].o));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_recacheShadows(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:recacheShadows", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp += 1;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showBuildings) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_showTerrain) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 3;
	((func_mindustry_graphics_BlockRenderer_updateShadows_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_updateShadows_boolean_boolean])(ctx, sp[0].o, sp[1].i, sp[2].i);
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_recacheChunk_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:recacheChunk", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	((func_mindustry_editor_EditorSpriteCache_dispose) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i))))->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_dispose])(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i))));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i)) = (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(201);
	clinit_mindustry_editor_EditorSpriteCache(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_EditorSpriteCache);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	sp[1].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[1].o))->F_blocks;
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[1].o))->F_floor;
	sp[1].o = (jobject)((func_mindustry_graphics_FloorRenderer_getVertexBuffer_R_Array1_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_getVertexBuffer_R_Array1_float])(ctx, sp[1].o);
	init_mindustry_editor_EditorSpriteCache_Array1_float_float_float_float_float(ctx, sp[0].o, sp[1].o, (jfloat(80.0f)), (jfloat(80.0f)), ((jfloat)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_packWidth), ((jfloat)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_packHeight));
	frame[3].o = sp[0].o;
	LINE_NUMBER(203);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"block-border"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(205);
	clinit_mindustry_editor_EditorRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_EditorRenderer_tmpTiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(207);
	frame[5].i = ((frame[1].i) * (60));
	}
label_7:;
	{
	if ((frame[5].i) >= (((frame[1].i) + (jint(1))) * (60))) goto label_8;
	}
	{
	LINE_NUMBER(208);
	frame[6].i = ((frame[2].i) * (60));
	}
label_10:;
	{
	if ((frame[6].i) >= (((frame[2].i) + (jint(1))) * (60))) goto label_11;
	}
	{
	LINE_NUMBER(209);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[5].i), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(211);
	if ((frame[7].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_cacheLayer;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_normal;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(212);
	clinit_mindustry_editor_EditorRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_EditorRenderer_tmpTiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	}
label_14:;
	{
	LINE_NUMBER(208);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(207);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(217);
	clinit_mindustry_editor_EditorRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_EditorRenderer_tmpTiles;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorRenderer_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_editor_EditorRenderer_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_editor_EditorRenderer_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingBool_arc_func_Boolf_R_java_util_Comparator(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(219);
	clinit_mindustry_editor_EditorRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_EditorRenderer_tmpTiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(220);
	frame[7].i = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x);
	frame[8].i = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y);
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[9].o)))->F_fullIcon;
	frame[10].o = sp[0].o;
	LINE_NUMBER(225);
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[10].o)))->F_width));
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[10].o));
	frame[11].f = (temp0 * temp1);
	jfloat temp2 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[10].o)))->F_height));
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[10].o));
	frame[12].f = (temp2 * temp3);
	LINE_NUMBER(227);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[9].o)))->F_fullIcon;
	jfloat temp4 = ((jfloat(((frame[7].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_offset)) - ((frame[11].f) / (jfloat(2)));
	jfloat temp5 = ((jfloat(((frame[8].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_offset)) - ((frame[12].f) / (jfloat(2)));
	jfloat temp6 = (frame[11].f) / (jfloat(2));
	jfloat temp7 = (frame[12].f) / (jfloat(2));
	jfloat temp8 = frame[11].f;
	jfloat temp9 = frame[12].f;
	LINE_NUMBER(232);
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	jobject temp10 = sp[2].o;
	sp[2].f = temp4;
	sp[3].f = temp5;
	sp[4].f = temp6;
	sp[5].f = temp7;
	sp[6].f = temp8;
	sp[7].f = temp9;
	sp += 8;
	if (temp10 == nullptr) goto label_27;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_rotate) == 0) goto label_27;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_rotateDrawEditor) != 0) goto label_28;
	}
label_27:;
	INST_FCONST(0);
	goto label_29;
label_28:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_rotdeg_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_rotdeg_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_29:;
	{
	sp -= 9;
	clinit_arc_graphics_Color(ctx);
	jfloat temp0 = (jfloat)SF_arc_graphics_Color_whiteFloatBits;
	LINE_NUMBER(227);
	((func_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float])(ctx, sp[0].o, sp[1].o, sp[2].f, sp[3].f, sp[4].f, sp[5].f, sp[6].f, sp[7].f, sp[8].f, temp0);
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = frame[3].o;
	sp[1].o = frame[4].o;
	jfloat temp0 = ((jfloat(((frame[7].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_offset)) - ((frame[11].f) / (jfloat(2)));
	jfloat temp1 = ((jfloat(((frame[8].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_offset)) - ((frame[12].f) / (jfloat(2)));
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0);
	jfloat temp4 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_width));
	sp[2].o = frame[4].o;
	LINE_NUMBER(240);
	jfloat temp5 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[2].o);
	jfloat temp6 = temp4 * temp5;
	jfloat temp7 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_height));
	jfloat temp8 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[4].o));
	jfloat temp9 = temp7 * temp8;
	jfloat temp10 = jfloat(0);
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[2].o))->F_team;
	sp[2].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[2].o))->F_color;
	LINE_NUMBER(242);
	jfloat temp11 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[2].o);
	LINE_NUMBER(236);
	((func_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, temp6, temp9, temp10, temp11);
	}
label_32:;
	LINE_NUMBER(244);
	goto label_17;
label_18:;
	{
	LINE_NUMBER(246);
	clinit_mindustry_editor_EditorRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_EditorRenderer_tmpTiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_mindustry_editor_EditorSpriteCache_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_38;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_arc_graphics_gl_SpriteIndices_get_R_arc_graphics_gl_IndexData(ctx);
	((func_mindustry_editor_EditorSpriteCache_build_arc_graphics_gl_IndexData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_build_arc_graphics_gl_IndexData])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i)) = (frame[3].o);
	}
label_38:;
	LINE_NUMBER(252);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:dispose", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(258);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(259);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	if (temp0 >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length)) goto label_6;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i))) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_editor_EditorRenderer *) NULL_CHECK((frame[0].o)))->F_chunks;
	((func_mindustry_editor_EditorSpriteCache_dispose) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i))))->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_dispose])(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i))));
	}
label_8:;
	{
	LINE_NUMBER(259);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(258);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorRenderer_lambda$recacheChunk$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:lambda$recacheChunk$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorRenderer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorRenderer_lambda$draw$0_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:lambda$draw$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[1].i));
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[1].i));
	((func_mindustry_editor_EditorRenderer_recacheChunk_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_recacheChunk_int_int])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_editor_EditorRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_editor_EditorRenderer_packPad = jfloat(80.0f);
	SF_mindustry_editor_EditorRenderer_chunkSize = jint(60);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorRenderer:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorRenderer(ctx);
	{
	LINE_NUMBER(20);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_editor_EditorRenderer(ctx);
	SF_mindustry_editor_EditorRenderer_tmpTiles = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_EditorRenderer[] {
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
	(void *) M_mindustry_editor_EditorRenderer_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_editor_EditorRenderer_resize_int_int,
	(void *) M_mindustry_editor_EditorRenderer_draw_float_float_float_float,
	(void *) M_mindustry_editor_EditorRenderer_updateStatic_int_int,
	(void *) M_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile,
	(void *) M_mindustry_editor_EditorRenderer_updateBlock_int_int,
	(void *) M_mindustry_editor_EditorRenderer_recache,
	(void *) M_mindustry_editor_EditorRenderer_recacheTerrain,
	(void *) M_mindustry_editor_EditorRenderer_recacheShadows,
	(void *) M_mindustry_editor_EditorRenderer_recacheChunk_int_int,
	(void *) M_mindustry_editor_EditorRenderer_lambda$draw$0_int,
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
	{ "resize", "(II)V" },
	{ "draw", "(FFFF)V" },
	{ "updateStatic", "(II)V" },
	{ "updateBlock", "(Lmindustry/world/Tile;)V" },
	{ "updateBlock", "(II)V" },
	{ "recache", "()V" },
	{ "recacheTerrain", "()V" },
	{ "recacheShadows", "()V" },
	{ "recacheChunk", "(II)V" },
	{ "lambda$draw$0", "(I)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "packPad", &class_float, (intptr_t) &SF_mindustry_editor_EditorRenderer_packPad, "F", 26 },
	{ "chunkSize", &class_int, (intptr_t) &SF_mindustry_editor_EditorRenderer_chunkSize, "I", 26 },
	{ "tmpTiles", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_editor_EditorRenderer_tmpTiles, "Larc/struct/Seq;", 26 },
	{ "chunks", getArrayClass(&class_mindustry_editor_EditorSpriteCache, 2), offsetof(mindustry_editor_EditorRenderer, F_chunks), "[[Lmindustry/editor/EditorSpriteCache;", 2 },
	{ "recacheChunks", &class_arc_struct_IntSet, offsetof(mindustry_editor_EditorRenderer, F_recacheChunks), "Larc/struct/IntSet;", 2 },
	{ "width", &class_int, offsetof(mindustry_editor_EditorRenderer, F_width), "I", 2 },
	{ "height", &class_int, offsetof(mindustry_editor_EditorRenderer, F_height), "I", 2 },
	{ "packWidth", &class_float, offsetof(mindustry_editor_EditorRenderer, F_packWidth), "F", 2 },
	{ "packHeight", &class_float, offsetof(mindustry_editor_EditorRenderer, F_packHeight), "F", 2 },
	{ "shader", &class_arc_graphics_gl_Shader, offsetof(mindustry_editor_EditorRenderer, F_shader), "Larc/graphics/gl/Shader;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_EditorRenderer, 0, "()V", 1 },
	{ "resize", (intptr_t) M_mindustry_editor_EditorRenderer_resize_int_int, VTABLE_mindustry_editor_EditorRenderer_resize_int_int, "(II)V", 1 },
	{ "draw", (intptr_t) M_mindustry_editor_EditorRenderer_draw_float_float_float_float, VTABLE_mindustry_editor_EditorRenderer_draw_float_float_float_float, "(FFFF)V", 1 },
	{ "updateStatic", (intptr_t) M_mindustry_editor_EditorRenderer_updateStatic_int_int, VTABLE_mindustry_editor_EditorRenderer_updateStatic_int_int, "(II)V", 0 },
	{ "updateBlock", (intptr_t) M_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile, VTABLE_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 0 },
	{ "updateBlock", (intptr_t) M_mindustry_editor_EditorRenderer_updateBlock_int_int, VTABLE_mindustry_editor_EditorRenderer_updateBlock_int_int, "(II)V", 0 },
	{ "recache", (intptr_t) M_mindustry_editor_EditorRenderer_recache, VTABLE_mindustry_editor_EditorRenderer_recache, "()V", 0 },
	{ "recacheTerrain", (intptr_t) M_mindustry_editor_EditorRenderer_recacheTerrain, VTABLE_mindustry_editor_EditorRenderer_recacheTerrain, "()V", 0 },
	{ "recacheShadows", (intptr_t) M_mindustry_editor_EditorRenderer_recacheShadows, VTABLE_mindustry_editor_EditorRenderer_recacheShadows, "()V", 0 },
	{ "recacheChunk", (intptr_t) M_mindustry_editor_EditorRenderer_recacheChunk_int_int, VTABLE_mindustry_editor_EditorRenderer_recacheChunk_int_int, "(II)V", 0 },
	{ "dispose", (intptr_t) M_mindustry_editor_EditorRenderer_dispose, VTABLE_mindustry_editor_EditorRenderer_dispose, "()V", 1 },
	{ "lambda$recacheChunk$0", (intptr_t) SM_mindustry_editor_EditorRenderer_lambda$recacheChunk$0_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_editor_EditorRenderer_lambda$draw$0_int, VTABLE_mindustry_editor_EditorRenderer_lambda$draw$0_int, "(I)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_editor_EditorRenderer, 0, "()V", 8 },
};

Class class_mindustry_editor_EditorRenderer{
		.nativeName = (intptr_t) "mindustry/editor/EditorRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_EditorRenderer),
		.classVtable = (intptr_t) vtable_mindustry_editor_EditorRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_EditorRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_EditorRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_EditorRenderer = registerClass(&class_mindustry_editor_EditorRenderer);

}
