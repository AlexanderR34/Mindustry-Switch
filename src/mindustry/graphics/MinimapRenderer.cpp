#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/graphics/MinimapRenderer_invoke_arc_func_Cons_13.h"
#include "mindustry/graphics/MinimapRenderer_invoke_arc_func_Cons_14.h"
#include "mindustry/graphics/MinimapRenderer_invoke_arc_func_Cons_11.h"
#include "mindustry/graphics/MinimapRenderer_invoke_arc_func_Prov_1.h"
#include "arc/func/Prov.h"
#include "mindustry/graphics/MinimapRenderer_invoke_arc_func_Cons_12.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/graphics/MinimapRenderer_invoke_arc_func_Cons_15.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "arc/func/Intc.h"
#include "arc/graphics/Pixmap.h"
#include "arc/util/pooling/Pools.h"
#include "arc/util/Tmp.h"
#include "mindustry/gen/Indicator.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/graphics/MinimapRenderer_invoke_arc_func_Cons_10.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/math/Interp.h"
#include "mindustry/graphics/MinimapRenderer_invoke_arc_func_Cons_9.h"
#include "mindustry/graphics/MinimapRenderer_invoke_arc_func_Cons_8.h"
#include "arc/util/Time.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "mindustry/game/MapObjectives.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/graphics/Shaders_FogShader.h"
#include "arc/struct/LongSeq.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "mindustry/game/EventType_TilePreChangeEvent.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/core/Control.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/game/EventType_BuildTeamChangeEvent.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/graphics/MinimapRenderer_invoke_java_lang_Runnable_1.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/EventType_TileChangeEvent.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/graphics/FogRenderer.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/Events.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/gl/Shader.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/game/MapMarkers.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/io/MapIO.h"
#include "mindustry/graphics/MinimapRenderer_invoke_arc_func_Intc_1.h"
#include "mindustry/entities/Units.h"
#include "mindustry/ai/WaveSpawner.h"
#include "arc/graphics/Camera.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "arc/graphics/g2d/Lines.h"
#include "java/lang/Float.h"
#include "mindustry/world/Tiles.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Icon.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "mindustry/game/AttackIndicators.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"

extern "C" {

jfloat SF_mindustry_graphics_MinimapRenderer_baseSize;
jfloat SF_mindustry_graphics_MinimapRenderer_updateInterval;

void mark_mindustry_graphics_MinimapRenderer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_MinimapRenderer *) object;
	if (self->F_units)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_units)->clazz)->markFunction)((jobject) self->F_units, mark, depth + 1);
	if (self->F_pixmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixmap)->clazz)->markFunction)((jobject) self->F_pixmap, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_rect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rect)->clazz)->markFunction)((jobject) self->F_rect, mark, depth + 1);
	if (self->F_updates)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updates)->clazz)->markFunction)((jobject) self->F_updates, mark, depth + 1);
}

void clinit_mindustry_graphics_MinimapRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_MinimapRenderer_baseSize = jfloat(16.0f);
	SF_mindustry_graphics_MinimapRenderer_updateInterval = jfloat(2.0f);
}

void init_mindustry_graphics_MinimapRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MinimapRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_units = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_rect = (jref) sp[1].o;
	LINE_NUMBER(31);
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(4.0f));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_updates = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_updateCounter = (jfloat(0));
	LINE_NUMBER(37);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(42);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TileChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(58);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TilePreChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(68);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BuildTeamChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_updateCounter) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_updateCounter = temp0;
	if ((floatCompare(temp0, (jfloat(2)), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_updateCounter = (fmodf(((jfloat)((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_updateCounter), (jfloat(2))));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_updates;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MinimapRenderer_invoke_arc_func_Intc_1(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_arc_func_Intc_1 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_arc_func_Intc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSet_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_updates;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_MinimapRenderer_getPixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:getPixmap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:getTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_texture;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_zoomBy_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:zoomBy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_zoom = (((jfloat)((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_zoom) + (frame[1].f));
	LINE_NUMBER(101);
	((func_mindustry_graphics_MinimapRenderer_setZoom_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_setZoom_float])(ctx, (frame[0].o), ((jfloat)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_zoom));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_setZoom_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:setZoom", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, temp3);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp1, (((jfloat(temp4)) / (jfloat(16.0f))) / (jfloat(2))));
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_zoom = temp5;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_graphics_MinimapRenderer_getZoom_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:getZoom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_zoom);
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:reset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_updates;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(118);
	((func_mindustry_graphics_MinimapRenderer_setZoom_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_setZoom_float])(ctx, (frame[0].o), (jfloat(4.0f)));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[2].o);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[2].o);
	init_arc_graphics_Pixmap_int_int(ctx, sp[1].o, temp0, temp1);
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_pixmap = (jref) sp[1].o;
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	sp[2].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[2].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_texture;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_drawEntities_float_float_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:drawEntities", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(126);
	if ((frame[5].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(127);
	((func_mindustry_graphics_MinimapRenderer_updateUnitArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_updateUnitArray])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(130);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[1].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(133);
	frame[6].f = ((jfloat(16.0f)) * ((jfloat)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_zoom));
	LINE_NUMBER(134);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[7].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(8.0f)));
	LINE_NUMBER(135);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[8].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(8.0f)));
	LINE_NUMBER(136);
	jfloat temp0 = frame[7].f;
	jfloat temp1 = frame[6].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp1, ((jfloat(temp2)) - (frame[6].f)));
	frame[7].f = temp3;
	LINE_NUMBER(137);
	jfloat temp4 = frame[8].f;
	jfloat temp5 = frame[6].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp6 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp4, temp5, ((jfloat(temp6)) - (frame[6].f)));
	frame[8].f = temp7;
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_rect;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (((frame[7].f) - (frame[6].f)) * (jfloat(8.0f))), (((frame[8].f) - (frame[6].f)) * (jfloat(8.0f))), (((frame[6].f) * (jfloat(2))) * (jfloat(8.0f))), (((frame[6].f) * (jfloat(2))) * (jfloat(8.0f))));
	LINE_NUMBER(141);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m2;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(144);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m1;
	sp[0].o = (jobject)((func_arc_math_Mat_idt_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_idt_R_arc_math_Mat])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_math_Mat_translate_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat])(ctx, (frame[10].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(146);
	if ((frame[5].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = frame[10].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = frame[3].f;
	sp[2].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_rect;
	jfloat temp1 = temp0 / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_width);
	frame[9].f = temp1;
	jfloat temp4 = frame[4].f;
	sp[2].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_rect;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp1, (temp4 / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_height)));
	sp[0].o = (jobject)((func_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(148);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_rect;
	jfloat temp5 = -((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_rect;
	sp[0].o = (jobject)((func_arc_math_Mat_translate_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp5, (-((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y)));
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(150);
	sp[0].o = frame[10].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = frame[3].f;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[2].o);
	jfloat temp2 = temp0 / (jfloat(temp1));
	frame[9].f = temp2;
	jfloat temp5 = frame[4].f;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp6 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp2, (temp5 / (jfloat(temp6))));
	sp[0].o = (jobject)((func_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_arc_math_Mat_translate_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat])(ctx, (frame[10].o), (jfloat(4.0f)), (jfloat(4.0f)));
	LINE_NUMBER(153);
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, (frame[10].o));
	LINE_NUMBER(155);
	frame[9].f = ((jfloat(1)) / (frame[9].f));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(158);
	sp[0].o = frame[12].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[12].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_drawMinimap) != 0) goto label_26;
	}
	goto label_23;
label_26:;
	{
	LINE_NUMBER(160);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	frame[13].f = ((temp0 * (jfloat(8.0f))) * (jfloat(3.0f)));
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_icon_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Unit_icon_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[12].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[12].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(164);
	sp[0].o = frame[14].o;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[12].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[12].o)))->F_y;
	jfloat temp3 = frame[13].f;
	jfloat temp4 = ((frame[13].f) * (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[14].o)))->F_height)))) / (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[14].o)))->F_width)));
	jfloat temp5 = (jfloat)((func_mindustry_gen_Unit_rotation_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Unit_rotation_R_float])(ctx, (frame[12].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp1, temp2, temp3, temp4, (temp5 - (jfloat(90.0f))));
	LINE_NUMBER(165);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(166);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(168);
	if ((frame[5].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(169);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_34:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(170);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[12].o));
	if (temp0 != 0) goto label_36;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_name;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_color;
	((func_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o, (frame[9].f));
	}
label_36:;
	{
	LINE_NUMBER(173);
	if ((floatCompare(((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingTime), (jfloat(0)), -1)) <= 0) goto label_38;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_showPings) == 0) goto label_38;
	}
	{
	LINE_NUMBER(175);
	frame[13].f = (jfloat(12.0f));
	LINE_NUMBER(177);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_darkGray;
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(178);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((frame[9].f) * (jfloat(9.0f))));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp0);
	LINE_NUMBER(179);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingX), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingY), (jint(4)), ((frame[9].f) * (frame[13].f)), (jfloat(0)));
	LINE_NUMBER(181);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingX), (((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingY) + ((frame[9].f) * (jfloat(30.0f)))), (jint(3)), ((frame[9].f) * (jfloat(16.0f))), (jfloat(-90.0f)));
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(184);
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((frame[9].f) * (jfloat(3.0f))));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp1);
	LINE_NUMBER(185);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingX), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingY), (jint(4)), ((frame[9].f) * (frame[13].f)), (jfloat(0)));
	LINE_NUMBER(187);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingX), (((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingY) + ((frame[9].f) * (jfloat(30.0f)))), (jint(3)), ((frame[9].f) * (jfloat(10.0f))), (jfloat(-90.0f)));
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingText;
	if (sp[0].o == nullptr) goto label_49;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingX;
	jfloat temp1 = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingY) + ((frame[9].f) * (jfloat(65.0f)));
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_name;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_color;
	((func_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o, ((frame[9].f) * (jfloat(0.7f))), (jint(0)));
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingX;
	jfloat temp3 = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingY) + ((frame[9].f) * (jfloat(50.0f)));
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingText;
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	((func_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean])(ctx, sp[0].o, temp2, temp3, sp[1].o, sp[2].o, (frame[9].f), (jint(0)));
	goto label_52;
	}
label_49:;
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingX;
	jfloat temp1 = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_pingY) + ((frame[9].f) * (jfloat(50.0f)));
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_name;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[12].o)))->F_color;
	((func_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o, (frame[9].f), (jint(0)));
	}
label_52:;
	LINE_NUMBER(196);
	SM_arc_graphics_g2d_Draw_color(ctx);
label_38:;
	LINE_NUMBER(198);
	goto label_34;
label_32:;
	{
	LINE_NUMBER(201);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(203);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_54;
	}
	{
	LINE_NUMBER(204);
	if ((frame[5].i) == 0) goto label_56;
	}
	{
	LINE_NUMBER(205);
	frame[11].f = ((jfloat)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_zoom);
	LINE_NUMBER(207);
	((func_mindustry_graphics_MinimapRenderer_setZoom_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_setZoom_float])(ctx, (frame[0].o), (jfloat(99999.0f)));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o));
	LINE_NUMBER(209);
	((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_zoom = (frame[11].f);
	}
label_56:;
	{
	LINE_NUMBER(211);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_fog;
	SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader(ctx, sp[0].o);
	LINE_NUMBER(212);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_fog;
	sp[0].o = (jobject)((func_mindustry_graphics_FogRenderer_getStaticTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FogRenderer_getStaticTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_fog;
	sp[0].o = (jobject)((func_mindustry_graphics_FogRenderer_getDynamicTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FogRenderer_getDynamicTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(215);
	sp[0].o = frame[12].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(217);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, (frame[12].o));
	LINE_NUMBER(218);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(1)), (jfloat(1)), (jfloat(0)));
	LINE_NUMBER(220);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[13].f = (jfloat((temp0 * (8))));
	LINE_NUMBER(221);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[14].f = (jfloat((temp1 * (8))));
	LINE_NUMBER(223);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dynamicColor;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_dynamicColor;
	jint temp2 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a));
	sp += 1;
	if (temp2 == 0) goto label_69;
	}
	(sp++)->f = jfloat(0.5f);
	goto label_70;
label_69:;
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
label_70:;
	{
	sp -= 2;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(224);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, ((frame[13].f) / (jfloat(2))), ((frame[14].f) / (jfloat(2))), (frame[13].f), (frame[14].f));
	LINE_NUMBER(226);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_73;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = frame[11].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(229);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture = (jref) (frame[11].o);
	LINE_NUMBER(231);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(232);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, ((frame[13].f) / (jfloat(2))), ((frame[14].f) / (jfloat(2))), (frame[13].f), (frame[14].f));
	}
label_73:;
	{
	LINE_NUMBER(235);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(236);
	SM_arc_graphics_g2d_Draw_shader(ctx);
	}
label_54:;
	{
	LINE_NUMBER(240);
	if ((frame[5].i) == 0) goto label_79;
	}
	{
	LINE_NUMBER(241);
	((func_mindustry_graphics_MinimapRenderer_drawSpawns) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_drawSpawns])(ctx, (frame[0].o));
	LINE_NUMBER(243);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_79;
	}
	{
	LINE_NUMBER(245);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(246);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(3.0f)));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * (frame[9].f)));
	LINE_NUMBER(247);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(248);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[11].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[11].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[11].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[11].o)))->F_height));
	LINE_NUMBER(249);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_79:;
	{
	LINE_NUMBER(253);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_indicators;
	sp[0].o = (jobject)((func_mindustry_game_AttackIndicators_list_R_arc_struct_LongSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_AttackIndicators_list_R_arc_struct_LongSeq])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(254);
	frame[12].f = (fmodf(((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime) / (jfloat(30.0f))), (jfloat(1))));
	LINE_NUMBER(255);
	frame[13].f = ((((frame[12].f) * (jfloat(5.0f))) + (jfloat(8.0f))) - (jfloat(2)));
	LINE_NUMBER(256);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((((jfloat(1)) - (frame[12].f)) * (jfloat(4.0f))) + (jfloat(0.5f))));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp0);
	LINE_NUMBER(258);
	frame[14].i = (jint(0));
	}
label_91:;
	{
	if ((frame[14].i) >= ((jint)((arc_struct_LongSeq *) NULL_CHECK((frame[11].o)))->F_size)) goto label_92;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((arc_struct_LongSeq *) NULL_CHECK((frame[11].o)))->F_items;
	frame[15].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[14].i)));
	LINE_NUMBER(261);
	jint temp0 = (jint)SM_mindustry_gen_Indicator_pos_long_R_int(ctx, (frame[15].l));
	frame[17].i = temp0;
	LINE_NUMBER(262);
	jint temp1 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[17].i));
	frame[18].i = temp1;
	LINE_NUMBER(263);
	jint temp2 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[17].i));
	frame[19].i = temp2;
	LINE_NUMBER(264);
	jfloat temp3 = (jfloat)SM_mindustry_gen_Indicator_time_long_R_float(ctx, (frame[15].l));
	frame[20].f = temp3;
	frame[21].f = (jfloat(0));
	LINE_NUMBER(267);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[17].i));
	frame[22].o = sp[0].o;
	LINE_NUMBER(268);
	if ((frame[22].o) == nullptr) goto label_101;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[22].o)))->F_block;
	frame[21].f = (((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset) / (jfloat(8.0f)));
	}
label_101:;
	{
	LINE_NUMBER(272);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_orange;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_scarlet;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[20].f) / (jfloat(70.0f))));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(274);
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, ((((jfloat((frame[18].i))) + (jfloat(0.5f))) + (frame[21].f)) * (jfloat(8.0f))), ((((jfloat((frame[19].i))) + (jfloat(0.5f))) + (frame[21].f)) * (jfloat(8.0f))), (frame[13].f));
	LINE_NUMBER(258);
	INST_IINC(14, 1);
	goto label_91;
	}
label_92:;
	{
	LINE_NUMBER(277);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(280);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives;
	if (sp[0].o) {
		clinit_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_12);
		sp[1].o = (jobject) proxy;
		((func_mindustry_game_MapObjectives_eachRunning_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives_eachRunning_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
	LINE_NUMBER(287);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK(sp[0].o))->F_mapMarkers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	}
label_107:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 == 0) goto label_108;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[14].o)))(ctx, (frame[14].o));
	frame[15].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o));
	LINE_NUMBER(288);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_draw_float) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_draw_float])(ctx, (frame[15].o), (jfloat(1)));
	LINE_NUMBER(289);
	goto label_107;
	}
label_108:;
	{
	LINE_NUMBER(290);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(292);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m2;
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_drawSpawns(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:drawSpawns", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(296);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_hideSpawns) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_hasSpawns_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_hasSpawns_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(298);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_units;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(300);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(3.0f)));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp0);
	LINE_NUMBER(302);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c2;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[2].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_waveTeam;
	sp[2].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[2].o))->F_color;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_value_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_value_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(1.2f)));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(16.0f)), (jfloat(1)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp1);
	LINE_NUMBER(304);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[2].f = ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dropZoneRadius);
	LINE_NUMBER(305);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, (fmodf((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(240.0f)))), (jfloat(120.0f)), (jfloat(240.0f)));
	frame[3].f = temp2;
	LINE_NUMBER(307);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(308);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[5].o));
	frame[6].f = temp0;
	LINE_NUMBER(309);
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[5].o));
	frame[7].f = temp1;
	LINE_NUMBER(311);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, (frame[1].o), (frame[6].f), (frame[7].f), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width))), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_height))));
	LINE_NUMBER(312);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, (frame[6].f), (frame[7].f), (frame[2].f));
	LINE_NUMBER(313);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) <= 0) goto label_15;
	}
	{
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	jfloat temp2 = frame[2].f;
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow3Out;
	jfloat temp3 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (frame[3].f));
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, temp0, temp1, (temp2 * temp3));
	}
label_15:;
	LINE_NUMBER(314);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(316);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:getRegion", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(322);
	jfloat temp0 = (jfloat(16.0f)) * ((jfloat)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_zoom);
	jfloat temp1 = jfloat(16.0f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, temp3);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp1, (jfloat(temp4)));
	frame[1].f = temp5;
	LINE_NUMBER(323);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[2].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(8.0f)));
	LINE_NUMBER(324);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[3].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(8.0f)));
	LINE_NUMBER(325);
	jfloat temp6 = frame[2].f;
	jfloat temp7 = frame[1].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp8 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp6, temp7, ((jfloat(temp8)) - (frame[1].f)));
	frame[2].f = temp9;
	LINE_NUMBER(326);
	jfloat temp10 = frame[3].f;
	jfloat temp11 = frame[1].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp12 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jfloat temp13 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp10, temp11, ((jfloat(temp12)) - (frame[1].f)));
	frame[3].f = temp13;
	LINE_NUMBER(327);
	jfloat temp14 = jfloat(1);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_texture;
	frame[4].f = (temp14 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width))));
	LINE_NUMBER(328);
	jfloat temp15 = jfloat(1);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_texture;
	frame[5].f = (temp15 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height))));
	LINE_NUMBER(329);
	frame[6].f = ((frame[2].f) - (frame[1].f));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp16 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[7].f = (((jfloat(temp16)) - (frame[3].f)) - (frame[1].f));
	frame[8].f = ((frame[1].f) * (jfloat(2)));
	frame[9].f = ((frame[1].f) * (jfloat(2)));
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_region;
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, sp[0].o, ((frame[6].f) * (frame[4].f)), ((frame[7].f) * (frame[5].f)), (((frame[6].f) + (frame[8].f)) * (frame[4].f)), (((frame[7].f) + (frame[9].f)) * (frame[5].f)));
	LINE_NUMBER(331);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_updateAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:updateAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp0 = (jint)((func_arc_graphics_Texture_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(336);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x;
	sp[1].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp1 = (((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height) - (jint(1))) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y);
	jint temp2 = (jint)((func_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int])(ctx, (frame[0].o), (frame[2].o));
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(338);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_arc_graphics_Texture_draw_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_draw_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(343);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(346);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_13);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(360);
	((func_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:updatePixel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_updates;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_updateUnitArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:updateUnitArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(368);
	frame[1].f = ((jfloat(16.0f)) * ((jfloat)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_zoom));
	LINE_NUMBER(369);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[2].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(8.0f)));
	LINE_NUMBER(370);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[3].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(8.0f)));
	LINE_NUMBER(371);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[1].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp1, ((jfloat(temp2)) - (frame[1].f)));
	frame[2].f = temp3;
	LINE_NUMBER(372);
	jfloat temp4 = frame[3].f;
	jfloat temp5 = frame[1].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp6 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp4, temp5, ((jfloat(temp6)) - (frame[1].f)));
	frame[3].f = temp7;
	LINE_NUMBER(374);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(375);
	jfloat temp8 = ((frame[2].f) - (frame[1].f)) * (jfloat(8.0f));
	jfloat temp9 = ((frame[3].f) - (frame[1].f)) * (jfloat(8.0f));
	jfloat temp10 = ((frame[1].f) * (jfloat(2))) * (jfloat(8.0f));
	jfloat temp11 = ((frame[1].f) * (jfloat(2))) * (jfloat(8.0f));
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_units;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_float_float_float_float_arc_func_Cons(ctx, temp8, temp9, temp10, temp11, sp[0].o);
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:realBlock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_wasVisible) != 0) goto label_3;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_2;
label_3:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:colorFor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(384);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int])(ctx, (frame[2].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(387);
	if ((frame[3].i) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_minimapColor_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_minimapColor_mindustry_world_Tile_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[3].i = temp0;
	}
label_4:;
	{
	LINE_NUMBER(389);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp += 1;
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	jint temp0 = (jint)SM_mindustry_io_MapIO_colorFor_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ILOAD(3);
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].i);
	frame[4].o = sp[0].o;
	LINE_NUMBER(390);
	sp[0].o = frame[4].o;
	jfloat temp0 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp1 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[1].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp1 / (jfloat(4.0f))));
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (temp0 - temp2));
	LINE_NUMBER(392);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 - (jint(1)))) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) + (jint(1))));
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_9;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, (frame[4].o), (jfloat(0.7f)));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) == 0) goto label_11;
	}
	{
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 - (jint(1)))) goto label_12;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) + (jint(1))));
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color])(ctx, (frame[4].o), (jfloat(0.84f)), (jfloat(0.84f)), (jfloat(0.9f)), (jfloat(1)));
	}
label_11:;
	{
	LINE_NUMBER(398);
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:drawLabel", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(402);
	((func_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].o), (frame[4].o), (frame[5].f), (jint(1)));
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:drawLabel", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(406);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	frame[7].o = sp[0].o;
	LINE_NUMBER(407);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MinimapRenderer_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[8].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(408);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[7].o));
	frame[9].i = temp0;
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[7].o));
	jfloat temp1 = jfloat(0.8f);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (((temp1 / temp2) * (frame[5].f)) * (jfloat(1))));
	LINE_NUMBER(410);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[7].o), (jint(0)));
	LINE_NUMBER(412);
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean])(ctx, (frame[8].o), (frame[7].o), (frame[3].o), (frame[4].o), ((jfloat(90.0f)) * (frame[5].f)), (8), (jint(0)));
	LINE_NUMBER(414);
	if ((frame[6].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(415);
	frame[10].f = ((jfloat(3.0f)) * (frame[5].f));
	LINE_NUMBER(416);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.2f)));
	LINE_NUMBER(417);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, (frame[1].f), (((frame[2].f) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_height) / (jfloat(2)))) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_height) / (jfloat(2)))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_width) + (frame[10].f)), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_height) + (frame[10].f)));
	LINE_NUMBER(418);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_7:;
	{
	LINE_NUMBER(421);
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, (frame[7].o), (frame[4].o));
	LINE_NUMBER(422);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[7].o), (frame[3].o), ((frame[1].f) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_width) / (jfloat(2)))), ((frame[2].f) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_height) / (jfloat(2)))), ((jfloat(90.0f)) * (frame[5].f)), (8), (jint(0)));
	LINE_NUMBER(423);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[7].o), (frame[9].i));
	LINE_NUMBER(425);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[7].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(427);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[8].o));
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_lambda$update$1_mindustry_world_Tile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:lambda$update$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(347);
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(348);
	((func_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile])(ctx, (frame[0].o), (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(352);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y) - (jint(1))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(353);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(354);
	((func_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile])(ctx, (frame[0].o), (frame[3].o));
	}
label_3:;
	LINE_NUMBER(357);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_MinimapRenderer_lambda$drawEntities$0_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject param0) {
	if (!param0) return;
	auto obj = (mindustry_game_MapObjectives$MapObjective *) param0;
	if (!obj->F_markers) return;

	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:lambda$drawEntities$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MinimapRenderer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_markers;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_4;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	if (!frame[4].o) goto label_6;
	LINE_NUMBER(282);
	if (((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[4].o)))->F_minimap) == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(283);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_draw_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_draw_float])(ctx, (frame[4].o), (jfloat(1)));
	}
label_6:;
	{
	LINE_NUMBER(281);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(286);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_lambda$update$0_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:lambda$update$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(78);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x;
	sp[1].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp1, ((((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height) - (jint(1))) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y)), (frame[3].i));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x;
	sp[1].o = (jobject)((mindustry_graphics_MinimapRenderer *) NULL_CHECK((frame[0].o)))->F_pixmap;
	SM_arc_graphics_Pixmaps_drawPixel_arc_graphics_Texture_int_int_int(ctx, sp[0].o, temp2, ((((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height) - (jint(1))) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y)), (frame[3].i));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_lambda$new$5_mindustry_game_EventType$BuildTeamChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:lambda$new$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$BuildTeamChangeEvent *) NULL_CHECK((frame[1].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_tile;
	((func_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:lambda$new$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	if (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(61);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) - (jint(1))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(63);
	jfloat temp0 = jfloat(0);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MinimapRenderer_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_java_lang_Runnable_1);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_1:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_lambda$new$4_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:lambda$new$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	((func_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_lambda$new$1_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditorDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	if (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_lambda$new$2_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:lambda$new$2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) - (jint(1))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(50);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(51);
	((func_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile])(ctx, (frame[0].o), (frame[2].o));
	}
label_2:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_MinimapRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MinimapRenderer:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	((func_mindustry_graphics_MinimapRenderer_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_reset])(ctx, (frame[0].o));
	LINE_NUMBER(39);
	((func_mindustry_graphics_MinimapRenderer_updateAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_updateAll])(ctx, (frame[0].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_graphics_MinimapRenderer;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getTexture
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getRegion
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_graphics_MinimapRenderer[] {
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
	(void *) M_mindustry_graphics_MinimapRenderer_update,
	(void *) M_mindustry_graphics_MinimapRenderer_getPixmap_R_arc_graphics_Pixmap,
	(void *) M_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture,
	(void *) M_mindustry_graphics_MinimapRenderer_zoomBy_float,
	(void *) M_mindustry_graphics_MinimapRenderer_setZoom_float,
	(void *) M_mindustry_graphics_MinimapRenderer_getZoom_R_float,
	(void *) M_mindustry_graphics_MinimapRenderer_reset,
	(void *) M_mindustry_graphics_MinimapRenderer_drawEntities_float_float_float_float_boolean,
	(void *) M_mindustry_graphics_MinimapRenderer_drawSpawns,
	(void *) M_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_graphics_MinimapRenderer_updateAll,
	(void *) M_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile,
	(void *) M_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile,
	(void *) M_mindustry_graphics_MinimapRenderer_updateUnitArray,
	(void *) M_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block,
	(void *) M_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float,
	(void *) M_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean,
	(void *) M_mindustry_graphics_MinimapRenderer_lambda$update$1_mindustry_world_Tile_mindustry_world_Tile,
	(void *) M_mindustry_graphics_MinimapRenderer_lambda$update$0_int,
	(void *) M_mindustry_graphics_MinimapRenderer_lambda$new$5_mindustry_game_EventType$BuildTeamChangeEvent,
	(void *) M_mindustry_graphics_MinimapRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent,
	(void *) M_mindustry_graphics_MinimapRenderer_lambda$new$4_mindustry_world_Tile,
	(void *) M_mindustry_graphics_MinimapRenderer_lambda$new$1_mindustry_game_EventType$TileChangeEvent,
	(void *) M_mindustry_graphics_MinimapRenderer_lambda$new$2_mindustry_world_Tile,
	(void *) M_mindustry_graphics_MinimapRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent,
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
	{ "update", "()V" },
	{ "getPixmap", "()Larc/graphics/Pixmap;" },
	{ "getTexture", "()Larc/graphics/Texture;" },
	{ "zoomBy", "(F)V" },
	{ "setZoom", "(F)V" },
	{ "getZoom", "()F" },
	{ "reset", "()V" },
	{ "drawEntities", "(FFFFZ)V" },
	{ "drawSpawns", "()V" },
	{ "getRegion", "()Larc/graphics/g2d/TextureRegion;" },
	{ "updateAll", "()V" },
	{ "update", "(Lmindustry/world/Tile;)V" },
	{ "updatePixel", "(Lmindustry/world/Tile;)V" },
	{ "updateUnitArray", "()V" },
	{ "realBlock", "(Lmindustry/world/Tile;)Lmindustry/world/Block;" },
	{ "colorFor", "(Lmindustry/world/Tile;)I" },
	{ "drawLabel", "(FFLjava/lang/String;Larc/graphics/Color;F)V" },
	{ "drawLabel", "(FFLjava/lang/String;Larc/graphics/Color;FZ)V" },
	{ "lambda$update$1", "(Lmindustry/world/Tile;Lmindustry/world/Tile;)V" },
	{ "lambda$update$0", "(I)V" },
	{ "lambda$new$5", "(Lmindustry/game/EventType$BuildTeamChangeEvent;)V" },
	{ "lambda$new$3", "(Lmindustry/game/EventType$TilePreChangeEvent;)V" },
	{ "lambda$new$4", "(Lmindustry/world/Tile;)V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$TileChangeEvent;)V" },
	{ "lambda$new$2", "(Lmindustry/world/Tile;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
};

static FieldMetadata fields[] {
	{ "baseSize", &class_float, (intptr_t) &SF_mindustry_graphics_MinimapRenderer_baseSize, "F", 26 },
	{ "updateInterval", &class_float, (intptr_t) &SF_mindustry_graphics_MinimapRenderer_updateInterval, "F", 26 },
	{ "units", &class_arc_struct_Seq, offsetof(mindustry_graphics_MinimapRenderer, F_units), "Larc/struct/Seq;", 18 },
	{ "pixmap", &class_arc_graphics_Pixmap, offsetof(mindustry_graphics_MinimapRenderer, F_pixmap), "Larc/graphics/Pixmap;", 2 },
	{ "texture", &class_arc_graphics_Texture, offsetof(mindustry_graphics_MinimapRenderer, F_texture), "Larc/graphics/Texture;", 2 },
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_graphics_MinimapRenderer, F_region), "Larc/graphics/g2d/TextureRegion;", 2 },
	{ "rect", &class_arc_math_geom_Rect, offsetof(mindustry_graphics_MinimapRenderer, F_rect), "Larc/math/geom/Rect;", 2 },
	{ "zoom", &class_float, offsetof(mindustry_graphics_MinimapRenderer, F_zoom), "F", 2 },
	{ "updates", &class_arc_struct_IntSet, offsetof(mindustry_graphics_MinimapRenderer, F_updates), "Larc/struct/IntSet;", 2 },
	{ "updateCounter", &class_float, offsetof(mindustry_graphics_MinimapRenderer, F_updateCounter), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_MinimapRenderer, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_graphics_MinimapRenderer_update, VTABLE_mindustry_graphics_MinimapRenderer_update, "()V", 1 },
	{ "getPixmap", (intptr_t) M_mindustry_graphics_MinimapRenderer_getPixmap_R_arc_graphics_Pixmap, VTABLE_mindustry_graphics_MinimapRenderer_getPixmap_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "getTexture", (intptr_t) M_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture, VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture, "()Larc/graphics/Texture;", 1 },
	{ "zoomBy", (intptr_t) M_mindustry_graphics_MinimapRenderer_zoomBy_float, VTABLE_mindustry_graphics_MinimapRenderer_zoomBy_float, "(F)V", 1 },
	{ "setZoom", (intptr_t) M_mindustry_graphics_MinimapRenderer_setZoom_float, VTABLE_mindustry_graphics_MinimapRenderer_setZoom_float, "(F)V", 1 },
	{ "getZoom", (intptr_t) M_mindustry_graphics_MinimapRenderer_getZoom_R_float, VTABLE_mindustry_graphics_MinimapRenderer_getZoom_R_float, "()F", 1 },
	{ "reset", (intptr_t) M_mindustry_graphics_MinimapRenderer_reset, VTABLE_mindustry_graphics_MinimapRenderer_reset, "()V", 1 },
	{ "drawEntities", (intptr_t) M_mindustry_graphics_MinimapRenderer_drawEntities_float_float_float_float_boolean, VTABLE_mindustry_graphics_MinimapRenderer_drawEntities_float_float_float_float_boolean, "(FFFFZ)V", 1 },
	{ "drawSpawns", (intptr_t) M_mindustry_graphics_MinimapRenderer_drawSpawns, VTABLE_mindustry_graphics_MinimapRenderer_drawSpawns, "()V", 1 },
	{ "getRegion", (intptr_t) M_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "updateAll", (intptr_t) M_mindustry_graphics_MinimapRenderer_updateAll, VTABLE_mindustry_graphics_MinimapRenderer_updateAll, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile, VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "updatePixel", (intptr_t) M_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile, VTABLE_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "updateUnitArray", (intptr_t) M_mindustry_graphics_MinimapRenderer_updateUnitArray, VTABLE_mindustry_graphics_MinimapRenderer_updateUnitArray, "()V", 1 },
	{ "realBlock", (intptr_t) M_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block, VTABLE_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block, "(Lmindustry/world/Tile;)Lmindustry/world/Block;", 2 },
	{ "colorFor", (intptr_t) M_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int, VTABLE_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int, "(Lmindustry/world/Tile;)I", 2 },
	{ "drawLabel", (intptr_t) M_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float, VTABLE_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float, "(FFLjava/lang/String;Larc/graphics/Color;F)V", 1 },
	{ "drawLabel", (intptr_t) M_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean, VTABLE_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean, "(FFLjava/lang/String;Larc/graphics/Color;FZ)V", 1 },
	{ "lambda$update$1", (intptr_t) M_mindustry_graphics_MinimapRenderer_lambda$update$1_mindustry_world_Tile_mindustry_world_Tile, VTABLE_mindustry_graphics_MinimapRenderer_lambda$update$1_mindustry_world_Tile_mindustry_world_Tile, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)V", 4098 },
	{ "lambda$drawEntities$0", (intptr_t) SM_mindustry_graphics_MinimapRenderer_lambda$drawEntities$0_mindustry_game_MapObjectives$MapObjective, 0, "(Lmindustry/game/MapObjectives$MapObjective;)V", 4106 },
	{ "lambda$update$0", (intptr_t) M_mindustry_graphics_MinimapRenderer_lambda$update$0_int, VTABLE_mindustry_graphics_MinimapRenderer_lambda$update$0_int, "(I)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_graphics_MinimapRenderer_lambda$new$5_mindustry_game_EventType$BuildTeamChangeEvent, VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$5_mindustry_game_EventType$BuildTeamChangeEvent, "(Lmindustry/game/EventType$BuildTeamChangeEvent;)V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_graphics_MinimapRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent, VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent, "(Lmindustry/game/EventType$TilePreChangeEvent;)V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_graphics_MinimapRenderer_lambda$new$4_mindustry_world_Tile, VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$4_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_graphics_MinimapRenderer_lambda$new$1_mindustry_game_EventType$TileChangeEvent, VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$1_mindustry_game_EventType$TileChangeEvent, "(Lmindustry/game/EventType$TileChangeEvent;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_graphics_MinimapRenderer_lambda$new$2_mindustry_world_Tile, VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$2_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_graphics_MinimapRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
};

Class class_mindustry_graphics_MinimapRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/MinimapRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_MinimapRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_MinimapRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_MinimapRenderer,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_graphics_MinimapRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_MinimapRenderer = registerClass(&class_mindustry_graphics_MinimapRenderer);

}
