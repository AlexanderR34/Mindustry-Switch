#include "mindustry/entities/part/RegionPart.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/part/DrawPart_PartMove.h"
#include "java/lang/reflect/Method.h"
#include "arc/graphics/Blending.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/entities/part/DrawPart.h"
#include "arc/util/Nullable.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/entities/part/RegionPart.h"

extern "C" {


void mark_mindustry_entities_part_RegionPart(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_part_DrawPart(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_part_RegionPart *) object;
	if (self->F_childParam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_childParam)->clazz)->markFunction)((jobject) self->F_childParam, mark, depth + 1);
	if (self->F_suffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suffix)->clazz)->markFunction)((jobject) self->F_suffix, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_heat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heat)->clazz)->markFunction)((jobject) self->F_heat, mark, depth + 1);
	if (self->F_light)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_light)->clazz)->markFunction)((jobject) self->F_light, mark, depth + 1);
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
	if (self->F_outlines)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outlines)->clazz)->markFunction)((jobject) self->F_outlines, mark, depth + 1);
	if (self->F_progress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_progress)->clazz)->markFunction)((jobject) self->F_progress, mark, depth + 1);
	if (self->F_growProgress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_growProgress)->clazz)->markFunction)((jobject) self->F_growProgress, mark, depth + 1);
	if (self->F_heatProgress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heatProgress)->clazz)->markFunction)((jobject) self->F_heatProgress, mark, depth + 1);
	if (self->F_blending)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blending)->clazz)->markFunction)((jobject) self->F_blending, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_colorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorTo)->clazz)->markFunction)((jobject) self->F_colorTo, mark, depth + 1);
	if (self->F_mixColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mixColor)->clazz)->markFunction)((jobject) self->F_mixColor, mark, depth + 1);
	if (self->F_mixColorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mixColorTo)->clazz)->markFunction)((jobject) self->F_mixColorTo, mark, depth + 1);
	if (self->F_heatColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heatColor)->clazz)->markFunction)((jobject) self->F_heatColor, mark, depth + 1);
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
	if (self->F_moves)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moves)->clazz)->markFunction)((jobject) self->F_moves, mark, depth + 1);
}

void clinit_mindustry_entities_part_RegionPart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_DrawPart(ctx);
}

void init_mindustry_entities_part_RegionPart_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/RegionPart:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_RegionPart(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	init_mindustry_entities_part_DrawPart(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartParams(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartParams);
	init_mindustry_entities_part_DrawPart$PartParams(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_childParam = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(0)));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(0)));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_outlines = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(25);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(27);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_replaceOutline = (jint(0));
	LINE_NUMBER(29);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_drawRegion = (jint(1));
	LINE_NUMBER(31);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLight = (jint(0));
	LINE_NUMBER(33);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_clampProgress = (jint(1));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_growProgress = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_heat;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatProgress = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_normal;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(41);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(0));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLayerOffset = (jfloat(1));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_turretHeatLayer = (jfloat(50.1f));
	LINE_NUMBER(42);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outlineLayerOffset = (jfloat(-1,000000e-03f));
	LINE_NUMBER(44);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_xScl = (jfloat(1));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_yScl = (jfloat(1));
	LINE_NUMBER(46);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLightOpacity = (jfloat(0.3f));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_turretHeat;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_moves = (jref) sp[1].o;
	LINE_NUMBER(53);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (frame[1].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_part_RegionPart_java_lang_String_arc_graphics_Blending_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/RegionPart:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_RegionPart(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(56);
	init_mindustry_entities_part_DrawPart(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartParams(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartParams);
	init_mindustry_entities_part_DrawPart$PartParams(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_childParam = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(0)));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(0)));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_outlines = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(25);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(27);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_replaceOutline = (jint(0));
	LINE_NUMBER(29);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_drawRegion = (jint(1));
	LINE_NUMBER(31);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLight = (jint(0));
	LINE_NUMBER(33);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_clampProgress = (jint(1));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_growProgress = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_heat;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatProgress = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_normal;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(41);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(0));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLayerOffset = (jfloat(1));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_turretHeatLayer = (jfloat(50.1f));
	LINE_NUMBER(42);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outlineLayerOffset = (jfloat(-1,000000e-03f));
	LINE_NUMBER(44);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_xScl = (jfloat(1));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_yScl = (jfloat(1));
	LINE_NUMBER(46);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLightOpacity = (jfloat(0.3f));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_turretHeat;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_moves = (jref) sp[1].o;
	LINE_NUMBER(57);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (frame[1].o);
	LINE_NUMBER(58);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_blending = (jref) (frame[2].o);
	LINE_NUMBER(59);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[3].o);
	LINE_NUMBER(60);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outline = (jint(0));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_part_RegionPart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/RegionPart:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_RegionPart(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(63);
	init_mindustry_entities_part_DrawPart(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartParams(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartParams);
	init_mindustry_entities_part_DrawPart$PartParams(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_childParam = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(0)));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(0)));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_outlines = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(25);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(27);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_replaceOutline = (jint(0));
	LINE_NUMBER(29);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_drawRegion = (jint(1));
	LINE_NUMBER(31);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLight = (jint(0));
	LINE_NUMBER(33);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_clampProgress = (jint(1));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_growProgress = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_heat;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatProgress = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_normal;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(41);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(0));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLayerOffset = (jfloat(1));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_turretHeatLayer = (jfloat(50.1f));
	LINE_NUMBER(42);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outlineLayerOffset = (jfloat(-1,000000e-03f));
	LINE_NUMBER(44);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_xScl = (jfloat(1));
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_yScl = (jfloat(1));
	LINE_NUMBER(46);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLightOpacity = (jfloat(0.3f));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_turretHeat;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_moves = (jref) sp[1].o;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_RegionPart_draw_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[35];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/RegionPart:draw", 35 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(69);
	if ((floatCompare(((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layer), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_2:;
	{
	LINE_NUMBER(71);
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_under) == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_turretShading) == 0) goto label_3;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((frame[2].f) - (jfloat(1,000000e-04f))));
	}
label_3:;
	{
	LINE_NUMBER(72);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (temp0 + ((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layerOffset)));
	LINE_NUMBER(74);
	jfloat temp1 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[3].f = temp1;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_progress;
	jfloat temp2 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o), ((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_clampProgress));
	frame[4].f = temp2;
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_growProgress;
	jfloat temp3 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o), ((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_clampProgress));
	frame[5].f = temp3;
	LINE_NUMBER(76);
	frame[6].f = (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveX) * (frame[4].f));
	frame[7].f = (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveY) * (frame[4].f));
	frame[8].f = ((((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveRot) * (frame[4].f)) + ((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(77);
	frame[9].f = (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_growX) * (frame[5].f));
	frame[10].f = (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_growY) * (frame[5].f));
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moves;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(80);
	frame[11].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[11].i;
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moves;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_13;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moves;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[11].i));
	frame[12].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart$PartMove, sp[0].o));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[12].o)))->F_progress;
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o), ((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_clampProgress));
	frame[13].f = temp0;
	LINE_NUMBER(83);
	frame[6].f = ((frame[6].f) + (((jfloat)((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[12].o)))->F_x) * (frame[13].f)));
	LINE_NUMBER(84);
	frame[7].f = ((frame[7].f) + (((jfloat)((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[12].o)))->F_y) * (frame[13].f)));
	LINE_NUMBER(85);
	frame[8].f = ((frame[8].f) + (((jfloat)((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[12].o)))->F_rot) * (frame[13].f)));
	LINE_NUMBER(86);
	frame[9].f = ((frame[9].f) + (((jfloat)((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[12].o)))->F_gx) * (frame[13].f)));
	LINE_NUMBER(87);
	frame[10].f = ((frame[10].f) + (((jfloat)((mindustry_entities_part_DrawPart$PartMove *) NULL_CHECK((frame[12].o)))->F_gy) * (frame[13].f)));
	LINE_NUMBER(80);
	INST_IINC(11, 1);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(91);
	if (((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror) == 0) goto label_24;
	}
	{
	if (((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideOverride) != (jint(-1))) goto label_24;
	}
	INST_ICONST(2);
	goto label_25;
label_24:;
	INST_ICONST(1);
label_25:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(92);
	frame[12].f = (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl);
	frame[13].f = (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl);
	LINE_NUMBER(93);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = ((clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl) * (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_xScl) + (frame[9].f)));
	LINE_NUMBER(94);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = ((clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl) * (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_yScl) + (frame[10].f)));
	LINE_NUMBER(95);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_getMixColorPacked_R_float(ctx);
	frame[14].f = temp0;
	jfloat temp1 = (jfloat)SM_arc_graphics_g2d_Draw_getColorPacked_R_float(ctx);
	frame[15].f = temp1;
	LINE_NUMBER(97);
	frame[16].i = (jint(0));
	}
label_33:;
	{
	if ((frame[16].i) >= (frame[11].i)) goto label_34;
	}
	{
	LINE_NUMBER(99);
	if (((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideOverride) != (jint(-1))) goto label_36;
	}
	INST_ILOAD(16);
	goto label_37;
label_36:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[-1].o))->F_sideOverride;
label_37:;
	{
	sp -= 1;
	frame[17].i = sp[0].i;
	LINE_NUMBER(102);
	if (((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_drawRegion) == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_regions;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_regions;
	jint temp0 = frame[17].i;
	sp[1].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_regions;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp1);
	sp += 1;
	goto label_40;
	}
label_39:;
	INST_ACONST_NULL();
label_40:;
	{
	sp -= 1;
	frame[18].o = sp[0].o;
	LINE_NUMBER(103);
	if ((frame[17].i) != 0) goto label_42;
	}
	INST_ICONST(1);
	goto label_43;
label_42:;
	INST_ICONST(-1);
label_43:;
	{
	sp -= 1;
	frame[19].f = (jfloat((sp[0].i * ((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideMultiplier))));
	LINE_NUMBER(104);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_x) + (frame[6].f)) * (frame[19].f)), (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_y) + (frame[7].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))) * (jfloat(0.017453292f))));
	LINE_NUMBER(106);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = ((clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl) * (frame[19].f));
	LINE_NUMBER(108);
	if ((floatCompare(((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_originX), (jfloat(0)), -1)) != 0) goto label_47;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_originY), (jfloat(0)), -1)) == 0) goto label_48;
	}
label_47:;
	{
	LINE_NUMBER(110);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((-((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_originX)) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl)), ((-((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_originY)) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl)));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_originX) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl)), (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_originY) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_48:;
	{
	LINE_NUMBER(114);
	jfloat temp0 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[20].f = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(115);
	jfloat temp1 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[21].f = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(116);
	frame[22].f = ((((frame[8].f) * (frame[19].f)) + ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation)) - (jfloat(90.0f)));
	LINE_NUMBER(118);
	if (((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outline) == 0) goto label_52;
	}
	{
	if (((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_drawRegion) == 0) goto label_52;
	}
	{
	LINE_NUMBER(119);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((frame[3].f) + ((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outlineLayerOffset)));
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outlines;
	jint temp0 = frame[17].i;
	sp[2].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_regions;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((((jarray) nullCheck(ctx, sp[2].o))->length) - (jint(1))));
	((func_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1)), (frame[20].f), (frame[21].f), (frame[22].f));
	LINE_NUMBER(121);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[3].f));
	}
label_52:;
	{
	LINE_NUMBER(124);
	if (((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_drawRegion) == 0) goto label_56;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, (frame[18].o));
	if (temp0 == 0) goto label_56;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_58;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_colorTo;
	if (sp[0].o == nullptr) goto label_58;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_colorTo;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[4].f));
	goto label_60;
	}
label_58:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_60;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_60:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mixColor;
	if (sp[0].o == nullptr) goto label_62;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mixColorTo;
	if (sp[0].o == nullptr) goto label_62;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mixColor;
	sp[1].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mixColorTo;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[4].f));
	goto label_64;
	}
label_62:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mixColor;
	if (sp[0].o == nullptr) goto label_64;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mixColor;
	sp[1].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mixColor;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a));
	}
label_64:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_blending;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(138);
	((func_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float])(ctx, (frame[0].o), (frame[18].o), (frame[20].f), (frame[21].f), (frame[22].f));
	LINE_NUMBER(139);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_56;
	}
	SM_arc_graphics_g2d_Draw_color(ctx);
label_56:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heat;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_69;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatProgress;
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o), ((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_clampProgress));
	frame[23].f = temp0;
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatColor;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = frame[23].f;
	sp[1].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (temp1 * ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a)));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heat;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	jfloat temp2 = jfloat(1);
	jfloat temp3 = frame[20].f;
	jfloat temp4 = frame[21].f;
	jfloat temp5 = frame[22].f;
	sp[2].f = temp2;
	sp[3].f = temp3;
	sp[4].f = temp4;
	sp[5].f = temp5;
	sp += 6;
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_turretShading) == 0) goto label_73;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_turretHeatLayer;
	sp[0].f = temp0;
	sp += 1;
	goto label_74;
	}
label_73:;
	{
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	jfloat temp1 = temp0 + ((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLayerOffset);
	sp[0].f = temp1;
	sp += 1;
	}
label_74:;
	{
	sp -= 7;
	SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].f, sp[3].f, sp[4].f, sp[5].f, sp[6].f, ((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_originX), ((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_originY));
	LINE_NUMBER(147);
	if (((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLight) == 0) goto label_69;
	}
	{
	jfloat temp0 = frame[20].f;
	jfloat temp1 = frame[21].f;
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_light;
	jint temp2 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if (temp2 == 0) goto label_76;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_light;
	sp += 1;
	goto label_77;
	}
label_76:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[-1].o))->F_heat;
label_77:;
	{
	sp -= 3;
	jfloat temp0 = frame[22].f;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_c1;
	SM_mindustry_graphics_Drawf_light_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float(ctx, sp[0].f, sp[1].f, sp[2].o, temp0, sp[3].o, (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLightOpacity) * (frame[23].f)));
	}
label_69:;
	{
	LINE_NUMBER(150);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = ((clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl) * (frame[19].f));
	LINE_NUMBER(97);
	INST_IINC(16, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(153);
	SM_arc_graphics_g2d_Draw_color_float(ctx, (frame[15].f));
	LINE_NUMBER(154);
	SM_arc_graphics_g2d_Draw_mixcol_float(ctx, (frame[14].f));
	LINE_NUMBER(156);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_children;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_82;
	}
	{
	LINE_NUMBER(161);
	frame[16].i = (jint(0));
	}
label_84:;
	{
	if ((frame[16].i) >= (frame[11].i)) goto label_82;
	}
	{
	LINE_NUMBER(162);
	if (((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideOverride) != (jint(-1))) goto label_86;
	}
	INST_ILOAD(16);
	goto label_87;
label_86:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[-1].o))->F_sideOverride;
label_87:;
	{
	sp -= 1;
	frame[17].i = sp[0].i;
	LINE_NUMBER(163);
	if ((frame[17].i) != (jint(1))) goto label_89;
	}
	INST_ICONST(-1);
	goto label_90;
label_89:;
	INST_ICONST(1);
label_90:;
	{
	sp -= 1;
	frame[18].f = (jfloat((sp[0].i * ((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideMultiplier))));
	LINE_NUMBER(164);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_x) + (frame[6].f)) * (frame[18].f)), (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_y) + (frame[7].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))) * (jfloat(0.017453292f))));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_childParam;
	jfloat temp0 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_warmup;
	jfloat temp1 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_reload;
	jfloat temp2 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_smoothReload;
	jfloat temp3 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_heat;
	jfloat temp4 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_recoil;
	jfloat temp5 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_charge;
	jfloat temp6 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp7 = temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp8 = (jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp7, (temp8 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (((frame[8].f) * (frame[18].f)) + ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation)));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_childParam;
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[0].o))->F_sideMultiplier = ((jint)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_sideMultiplier);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_childParam;
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[0].o))->F_life = ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_life);
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_childParam;
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[0].o))->F_sideOverride = (frame[17].i);
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[19].o = sp[0].o;
	}
label_97:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[19].o)))(ctx, (frame[19].o));
	if (temp0 == 0) goto label_98;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[19].o)))(ctx, (frame[19].o));
	frame[20].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(171);
	sp[0].o = frame[20].o;
	sp[1].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_childParam;
	((func_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(172);
	goto label_97;
	}
label_98:;
	{
	LINE_NUMBER(161);
	INST_IINC(16, 1);
	goto label_84;
	}
label_82:;
	{
	LINE_NUMBER(176);
	SM_arc_graphics_g2d_Draw_scl_float_float(ctx, (frame[12].f), (frame[13].f));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/RegionPart:rect", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(180);
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width));
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[1].o));
	frame[5].f = ((temp0 * temp1) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl));
	jfloat temp2 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_height));
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[1].o));
	frame[6].f = ((temp2 * temp3) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl));
	LINE_NUMBER(181);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(ctx, (frame[1].o), (frame[2].f), (frame[3].f), (frame[5].f), (frame[6].f), (((frame[5].f) / (jfloat(2))) + (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_originX) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl))), (((frame[6].f) / (jfloat(2))) + (((jfloat)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_originY) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl))), (frame[4].f));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_RegionPart_load_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/RegionPart:load", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[-1].o))->F_name;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(188);
	if (((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_drawRegion) == 0) goto label_4;
	}
	{
	LINE_NUMBER(189);
	if (((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror) == 0) goto label_6;
	}
	{
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_turretShading) == 0) goto label_6;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_atlas;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-r"_j.string, 1, (frame[2].o));
	LINE_NUMBER(191);
	sp[2].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_atlas;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-l"_j.string, 1, (frame[2].o));
	LINE_NUMBER(192);
	sp[2].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(2)));
	jint temp2 = jint(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_atlas;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-r-outline"_j.string, 1, (frame[2].o));
	LINE_NUMBER(196);
	sp[2].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(1);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_atlas;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-l-outline"_j.string, 1, (frame[2].o));
	LINE_NUMBER(197);
	sp[2].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_outlines = (jref) sp[1].o;
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[2].o, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	jint temp1 = jint(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_atlas;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-outline"_j.string, 1, (frame[2].o));
	sp[2].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_outlines = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-heat"_j.string, 1, (frame[2].o));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heat = (jref) sp[1].o;
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-light"_j.string, 1, (frame[2].o));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_light = (jref) sp[1].o;
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_children;
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
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(208);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[4].o)))->F_turretShading = ((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_turretShading);
	LINE_NUMBER(209);
	((func_mindustry_entities_part_DrawPart_load_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_part_DrawPart_load_java_lang_String])(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(210);
	goto label_16;
	}
label_17:;
	LINE_NUMBER(211);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_part_RegionPart_getOutlines_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/RegionPart:getOutlines", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(215);
	if (((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outline) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_drawRegion) == 0) goto label_1;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(219);
	((func_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(220);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(221);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_part_RegionPart;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field name
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field color
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[35]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field colorTo
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[36]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field mixColor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[37]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field mixColorTo
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[38]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_part_RegionPart[] {
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
	(void *) M_mindustry_entities_part_RegionPart_draw_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_RegionPart_load_java_lang_String,
	(void *) M_mindustry_entities_part_RegionPart_getOutlines_arc_struct_Seq,
	(void *) M_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float,
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
	{ "draw", "(Lmindustry/entities/part/DrawPart$PartParams;)V" },
	{ "load", "(Ljava/lang/String;)V" },
	{ "getOutlines", "(Larc/struct/Seq;)V" },
	{ "rect", "(Larc/graphics/g2d/TextureRegion;FFF)V" },
};

static FieldMetadata fields[] {
	{ "childParam", &class_mindustry_entities_part_DrawPart$PartParams, offsetof(mindustry_entities_part_RegionPart, F_childParam), "Lmindustry/entities/part/DrawPart$PartParams;", 4 },
	{ "suffix", &class_java_lang_String, offsetof(mindustry_entities_part_RegionPart, F_suffix), "Ljava/lang/String;", 1 },
	{ "name", &class_java_lang_String, offsetof(mindustry_entities_part_RegionPart, F_name), "Ljava/lang/String;", 1 },
	{ "heat", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_part_RegionPart, F_heat), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "light", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_part_RegionPart, F_light), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "regions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_entities_part_RegionPart, F_regions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "outlines", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_entities_part_RegionPart, F_outlines), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "mirror", &class_boolean, offsetof(mindustry_entities_part_RegionPart, F_mirror), "Z", 1 },
	{ "outline", &class_boolean, offsetof(mindustry_entities_part_RegionPart, F_outline), "Z", 1 },
	{ "replaceOutline", &class_boolean, offsetof(mindustry_entities_part_RegionPart, F_replaceOutline), "Z", 1 },
	{ "drawRegion", &class_boolean, offsetof(mindustry_entities_part_RegionPart, F_drawRegion), "Z", 1 },
	{ "heatLight", &class_boolean, offsetof(mindustry_entities_part_RegionPart, F_heatLight), "Z", 1 },
	{ "clampProgress", &class_boolean, offsetof(mindustry_entities_part_RegionPart, F_clampProgress), "Z", 1 },
	{ "progress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_entities_part_RegionPart, F_progress), "Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "growProgress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_entities_part_RegionPart, F_growProgress), "Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "heatProgress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_entities_part_RegionPart, F_heatProgress), "Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "blending", &class_arc_graphics_Blending, offsetof(mindustry_entities_part_RegionPart, F_blending), "Larc/graphics/Blending;", 1 },
	{ "layer", &class_float, offsetof(mindustry_entities_part_RegionPart, F_layer), "F", 1 },
	{ "layerOffset", &class_float, offsetof(mindustry_entities_part_RegionPart, F_layerOffset), "F", 1 },
	{ "heatLayerOffset", &class_float, offsetof(mindustry_entities_part_RegionPart, F_heatLayerOffset), "F", 1 },
	{ "turretHeatLayer", &class_float, offsetof(mindustry_entities_part_RegionPart, F_turretHeatLayer), "F", 1 },
	{ "outlineLayerOffset", &class_float, offsetof(mindustry_entities_part_RegionPart, F_outlineLayerOffset), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_part_RegionPart, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_part_RegionPart, F_y), "F", 1 },
	{ "xScl", &class_float, offsetof(mindustry_entities_part_RegionPart, F_xScl), "F", 1 },
	{ "yScl", &class_float, offsetof(mindustry_entities_part_RegionPart, F_yScl), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_part_RegionPart, F_rotation), "F", 1 },
	{ "originX", &class_float, offsetof(mindustry_entities_part_RegionPart, F_originX), "F", 1 },
	{ "originY", &class_float, offsetof(mindustry_entities_part_RegionPart, F_originY), "F", 1 },
	{ "moveX", &class_float, offsetof(mindustry_entities_part_RegionPart, F_moveX), "F", 1 },
	{ "moveY", &class_float, offsetof(mindustry_entities_part_RegionPart, F_moveY), "F", 1 },
	{ "growX", &class_float, offsetof(mindustry_entities_part_RegionPart, F_growX), "F", 1 },
	{ "growY", &class_float, offsetof(mindustry_entities_part_RegionPart, F_growY), "F", 1 },
	{ "moveRot", &class_float, offsetof(mindustry_entities_part_RegionPart, F_moveRot), "F", 1 },
	{ "heatLightOpacity", &class_float, offsetof(mindustry_entities_part_RegionPart, F_heatLightOpacity), "F", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_part_RegionPart, F_color), "Larc/graphics/Color;", 1 },
	{ "colorTo", &class_arc_graphics_Color, offsetof(mindustry_entities_part_RegionPart, F_colorTo), "Larc/graphics/Color;", 1 },
	{ "mixColor", &class_arc_graphics_Color, offsetof(mindustry_entities_part_RegionPart, F_mixColor), "Larc/graphics/Color;", 1 },
	{ "mixColorTo", &class_arc_graphics_Color, offsetof(mindustry_entities_part_RegionPart, F_mixColorTo), "Larc/graphics/Color;", 1 },
	{ "heatColor", &class_arc_graphics_Color, offsetof(mindustry_entities_part_RegionPart, F_heatColor), "Larc/graphics/Color;", 1 },
	{ "children", &class_arc_struct_Seq, offsetof(mindustry_entities_part_RegionPart, F_children), "Larc/struct/Seq;", 1 },
	{ "moves", &class_arc_struct_Seq, offsetof(mindustry_entities_part_RegionPart, F_moves), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_part_RegionPart_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_part_RegionPart_java_lang_String_arc_graphics_Blending_arc_graphics_Color, 0, "(Ljava/lang/String;Larc/graphics/Blending;Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_part_RegionPart, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_part_RegionPart_draw_mindustry_entities_part_DrawPart$PartParams, VTABLE_mindustry_entities_part_RegionPart_draw_mindustry_entities_part_DrawPart$PartParams, "(Lmindustry/entities/part/DrawPart$PartParams;)V", 1 },
	{ "rect", (intptr_t) M_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float, VTABLE_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFF)V", 0 },
	{ "load", (intptr_t) M_mindustry_entities_part_RegionPart_load_java_lang_String, VTABLE_mindustry_entities_part_RegionPart_load_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getOutlines", (intptr_t) M_mindustry_entities_part_RegionPart_getOutlines_arc_struct_Seq, VTABLE_mindustry_entities_part_RegionPart_getOutlines_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
};

Class class_mindustry_entities_part_RegionPart{
		.nativeName = (intptr_t) "mindustry/entities/part/RegionPart",
		.parentClass = (intptr_t) &class_mindustry_entities_part_DrawPart,
		.size = sizeof(mindustry_entities_part_RegionPart),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_RegionPart,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_RegionPart,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_part_RegionPart,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 42,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_RegionPart = registerClass(&class_mindustry_entities_part_RegionPart);

}
