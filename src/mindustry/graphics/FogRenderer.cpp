#include "mindustry/graphics/FogRenderer.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/Events.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/BlockIndexer.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "arc/struct/Bits.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Camera.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/graphics/Shaders_FogShader.h"
#include "mindustry/world/Block.h"
#include "arc/struct/LongSeq.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/FogControl.h"
#include "java/lang/Float.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/gen/FogEvent.h"
#include "arc/func/Cons.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/graphics/FogRenderer_invoke_arc_func_Cons_1.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "java/lang/Math.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Player.h"
#include "mindustry/graphics/FogRenderer.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"
#include "arc/graphics/g2d/ScissorStack.h"

extern "C" {


void mark_mindustry_graphics_FogRenderer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_FogRenderer *) object;
	if (self->F_staticFog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_staticFog)->clazz)->markFunction)((jobject) self->F_staticFog, mark, depth + 1);
	if (self->F_dynamicFog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dynamicFog)->clazz)->markFunction)((jobject) self->F_dynamicFog, mark, depth + 1);
	if (self->F_events)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_events)->clazz)->markFunction)((jobject) self->F_events, mark, depth + 1);
	if (self->F_rect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rect)->clazz)->markFunction)((jobject) self->F_rect, mark, depth + 1);
	if (self->F_lastTeam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTeam)->clazz)->markFunction)((jobject) self->F_lastTeam, mark, depth + 1);
}

void clinit_mindustry_graphics_FogRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_FogRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FogRenderer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_FogRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer(ctx, sp[1].o);
	((mindustry_graphics_FogRenderer *) NULL_CHECK(sp[0].o))->F_staticFog = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer(ctx, sp[1].o);
	((mindustry_graphics_FogRenderer *) NULL_CHECK(sp[0].o))->F_dynamicFog = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq(ctx, sp[1].o);
	((mindustry_graphics_FogRenderer *) NULL_CHECK(sp[0].o))->F_events = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_graphics_FogRenderer *) NULL_CHECK(sp[0].o))->F_rect = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_FogRenderer_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_graphics_FogRenderer_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_graphics_FogRenderer_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FogRenderer_handleEvent_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FogRenderer:handleEvent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_events;
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_FogRenderer_getStaticTexture_R_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FogRenderer:getStaticTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_FogRenderer_getDynamicTexture_R_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FogRenderer:getDynamicTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_dynamicFog;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FogRenderer_drawFog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FogRenderer:drawFog", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	frame[1].i = temp2;
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_dynamicFog;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, temp3, temp4);
	LINE_NUMBER(53);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_lastTeam;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(54);
	((func_mindustry_graphics_FogRenderer_copyFromCpu) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FogRenderer_copyFromCpu])(ctx, (frame[0].o));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	((mindustry_graphics_FogRenderer *) NULL_CHECK(sp[0].o))->F_lastTeam = (jref) sp[1].o;
	LINE_NUMBER(56);
	frame[1].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(61);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp3 = jfloat((temp2 * (8)));
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_proj_float_float_float_float(ctx, temp0, temp1, temp3, (jfloat((temp4 * (8)))));
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_dynamicFog;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_rect;
	jfloat temp5 = jfloat(1);
	jfloat temp6 = jfloat(1);
	sp[1].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	jint temp7 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp8 = jfloat((temp7 - (jint(2))));
	sp[1].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	jint temp9 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp5, temp6, temp8, (jfloat((temp9 - (jint(2))))));
	jint temp10 = (jint)SM_arc_graphics_g2d_ScissorStack_push_arc_math_geom_Rect_R_boolean(ctx, sp[0].o);
	LINE_NUMBER(65);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(67);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = frame[2].o;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_hasFogRadius;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_fogRadius_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_fogRadius_R_float])(ctx, (frame[4].o));
	((func_mindustry_graphics_FogRenderer_poly_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FogRenderer_poly_float_float_float])(ctx, sp[0].o, temp0, temp1, (temp2 * (jfloat(8.0f))));
	LINE_NUMBER(69);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[2].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_type;
	((func_mindustry_graphics_FogRenderer_poly_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FogRenderer_poly_float_float_float])(ctx, sp[0].o, temp0, temp1, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_fogRadius) * (jfloat(8.0f))));
	LINE_NUMBER(73);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_dynamicFog;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)SM_arc_graphics_g2d_ScissorStack_pop_R_arc_math_geom_Rect(ctx);
	LINE_NUMBER(77);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera(ctx, sp[0].o);
	LINE_NUMBER(81);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_23;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_24;
	{
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_events;
	if (((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(83);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp3 = jfloat(temp2);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_proj_float_float_float_float(ctx, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(86);
	if ((frame[1].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	}
label_28:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_rect;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = jfloat(1);
	sp[1].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat((temp2 - (jint(2))));
	sp[1].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat((temp4 - (jint(2))))));
	jint temp5 = (jint)SM_arc_graphics_g2d_ScissorStack_push_arc_math_geom_Rect_R_boolean(ctx, sp[0].o);
	LINE_NUMBER(94);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(97);
	frame[2].i = (jint(0));
	}
label_31:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_events;
	if (temp0 >= ((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_32;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_events;
	sp[1].o = (jobject)((arc_struct_LongSeq *) NULL_CHECK(sp[1].o))->F_items;
	((func_mindustry_graphics_FogRenderer_renderEvent_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FogRenderer_renderEvent_long])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[2].i))));
	LINE_NUMBER(97);
	INST_IINC(2, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_events;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(103);
	sp[0].o = (jobject)SM_arc_graphics_g2d_ScissorStack_pop_R_arc_math_geom_Rect(ctx);
	LINE_NUMBER(104);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(107);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_38;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	}
label_38:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_dynamicFog;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_fog;
	SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader(ctx, sp[0].o);
	LINE_NUMBER(113);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dynamicColor;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_dynamicColor;
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a));
	sp += 1;
	if (temp0 == 0) goto label_42;
	}
	(sp++)->f = jfloat(0.5f);
	goto label_43;
label_42:;
	{
	jfloat temp0 = jfloat(0.5f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dynamicColor;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a));
	sp[0].f = temp1;
	sp += 1;
	}
label_43:;
	{
	sp -= 2;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_dynamicFog;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int(ctx, sp[0].o, temp0, temp1, (8));
	LINE_NUMBER(116);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_46;
	}
	{
	LINE_NUMBER(118);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int_float(ctx, sp[0].o, temp0, temp1, (8), (jfloat(4.0f)));
	}
label_46:;
	{
	LINE_NUMBER(121);
	SM_arc_graphics_g2d_Draw_shader(ctx);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FogRenderer_poly_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FogRenderer:poly", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(125);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float(ctx, (frame[1].f), (frame[2].f), (20), (frame[3].f));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FogRenderer_renderEvent_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FogRenderer:renderEvent", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)SM_mindustry_gen_FogEvent_x_long_R_int(ctx, (frame[1].l));
	jint temp1 = (jint)SM_mindustry_gen_FogEvent_y_long_R_int(ctx, (frame[1].l));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	frame[3].o = sp[0].o;
	LINE_NUMBER(130);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(132);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) % (jint(2))) != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(133);
	frame[4].f = (jfloat(0.5f));
	}
label_3:;
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)SM_mindustry_gen_FogEvent_x_long_R_int(ctx, (frame[1].l));
	jfloat temp1 = ((jfloat(temp0)) + (jfloat(0.5f))) + (frame[4].f);
	jint temp2 = (jint)SM_mindustry_gen_FogEvent_y_long_R_int(ctx, (frame[1].l));
	jfloat temp3 = ((jfloat(temp2)) + (jfloat(0.5f))) + (frame[4].f);
	jint temp4 = 20;
	jint temp5 = (jint)SM_mindustry_gen_FogEvent_radius_long_R_int(ctx, (frame[1].l));
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float(ctx, temp1, temp3, temp4, ((jfloat(temp5)) + (jfloat(0.3f))));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FogRenderer_copyFromCpu(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FogRenderer:copyFromCpu", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(141);
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp5 = jfloat(temp4);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	jint temp6 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_proj_float_float_float_float(ctx, temp2, temp3, temp5, (jfloat(temp6)));
	LINE_NUMBER(142);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[1].i = temp7;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp8 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[2].i = temp8;
	LINE_NUMBER(145);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(146);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp9 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp10 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[4].i = (temp9 * temp10);
	LINE_NUMBER(147);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(148);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[3].o), (frame[5].i));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(151);
	frame[6].i = ((frame[5].i) % (frame[1].i));
	frame[7].i = ((frame[5].i) / (frame[1].i));
	LINE_NUMBER(154);
	if ((frame[6].i) <= 0) goto label_13;
	}
	INST_ILOAD(7);
	if ((--sp)->i <= 0) goto label_13;
	{
	if ((frame[6].i) >= ((frame[1].i) - (jint(1)))) goto label_13;
	}
	{
	if ((frame[7].i) >= ((frame[2].i) - (jint(1)))) goto label_13;
	}
	{
	LINE_NUMBER(155);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, ((jfloat((frame[6].i))) + (jfloat(0.5f))), ((jfloat((frame[7].i))) + (jfloat(0.5f))), (jfloat(1)), (jfloat(1)));
	}
label_13:;
	{
	LINE_NUMBER(148);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_staticFog;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(162);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera(ctx, sp[0].o);
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FogRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FogRenderer:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_lastTeam = (jref) (jobject(nullptr));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_graphics_FogRenderer *) NULL_CHECK((frame[0].o)))->F_events;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_graphics_FogRenderer;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastTeam
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
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
}

void *vtable_mindustry_graphics_FogRenderer[] {
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
	(void *) M_mindustry_graphics_FogRenderer_handleEvent_long,
	(void *) M_mindustry_graphics_FogRenderer_getStaticTexture_R_arc_graphics_Texture,
	(void *) M_mindustry_graphics_FogRenderer_getDynamicTexture_R_arc_graphics_Texture,
	(void *) M_mindustry_graphics_FogRenderer_drawFog,
	(void *) M_mindustry_graphics_FogRenderer_poly_float_float_float,
	(void *) M_mindustry_graphics_FogRenderer_renderEvent_long,
	(void *) M_mindustry_graphics_FogRenderer_copyFromCpu,
	(void *) M_mindustry_graphics_FogRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent,
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
	{ "handleEvent", "(J)V" },
	{ "getStaticTexture", "()Larc/graphics/Texture;" },
	{ "getDynamicTexture", "()Larc/graphics/Texture;" },
	{ "drawFog", "()V" },
	{ "poly", "(FFF)V" },
	{ "renderEvent", "(J)V" },
	{ "copyFromCpu", "()V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
};

static FieldMetadata fields[] {
	{ "staticFog", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_graphics_FogRenderer, F_staticFog), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "dynamicFog", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_graphics_FogRenderer, F_dynamicFog), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "events", &class_arc_struct_LongSeq, offsetof(mindustry_graphics_FogRenderer, F_events), "Larc/struct/LongSeq;", 2 },
	{ "rect", &class_arc_math_geom_Rect, offsetof(mindustry_graphics_FogRenderer, F_rect), "Larc/math/geom/Rect;", 2 },
	{ "lastTeam", &class_mindustry_game_Team, offsetof(mindustry_graphics_FogRenderer, F_lastTeam), "Lmindustry/game/Team;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_FogRenderer, 0, "()V", 1 },
	{ "handleEvent", (intptr_t) M_mindustry_graphics_FogRenderer_handleEvent_long, VTABLE_mindustry_graphics_FogRenderer_handleEvent_long, "(J)V", 1 },
	{ "getStaticTexture", (intptr_t) M_mindustry_graphics_FogRenderer_getStaticTexture_R_arc_graphics_Texture, VTABLE_mindustry_graphics_FogRenderer_getStaticTexture_R_arc_graphics_Texture, "()Larc/graphics/Texture;", 1 },
	{ "getDynamicTexture", (intptr_t) M_mindustry_graphics_FogRenderer_getDynamicTexture_R_arc_graphics_Texture, VTABLE_mindustry_graphics_FogRenderer_getDynamicTexture_R_arc_graphics_Texture, "()Larc/graphics/Texture;", 1 },
	{ "drawFog", (intptr_t) M_mindustry_graphics_FogRenderer_drawFog, VTABLE_mindustry_graphics_FogRenderer_drawFog, "()V", 1 },
	{ "poly", (intptr_t) M_mindustry_graphics_FogRenderer_poly_float_float_float, VTABLE_mindustry_graphics_FogRenderer_poly_float_float_float, "(FFF)V", 0 },
	{ "renderEvent", (intptr_t) M_mindustry_graphics_FogRenderer_renderEvent_long, VTABLE_mindustry_graphics_FogRenderer_renderEvent_long, "(J)V", 0 },
	{ "copyFromCpu", (intptr_t) M_mindustry_graphics_FogRenderer_copyFromCpu, VTABLE_mindustry_graphics_FogRenderer_copyFromCpu, "()V", 1 },
	{ "lambda$new$0", (intptr_t) M_mindustry_graphics_FogRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_graphics_FogRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
};

Class class_mindustry_graphics_FogRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/FogRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_FogRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_FogRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_FogRenderer,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_graphics_FogRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_FogRenderer = registerClass(&class_mindustry_graphics_FogRenderer);

}
