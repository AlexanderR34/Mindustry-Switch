#include "mindustry/graphics/MenuRenderer.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/graphics/g2d/Batch.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/gen/Healthc.h"
#include "arc/graphics/g2d/CacheBatch.h"
#include "arc/math/Mathf.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "arc/util/Log.h"
#include "arc/util/Structs.h"
#include "arc/util/Time.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "mindustry/gen/Posc.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/func/Floatc2.h"
#include "arc/graphics/Camera.h"
#include "mindustry/graphics/MenuRenderer_invoke_arc_func_Floatc2_1.h"
#include "mindustry/graphics/MenuRenderer.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/CachedTile.h"
#include "java/lang/Float.h"
#include "mindustry/world/Tiles.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/String.h"
#include "arc/util/noise/Ridged.h"
#include "mindustry/content/UnitTypes.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/noise/Simplex.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/content/Blocks.h"
#include "arc/graphics/g2d/SpriteCache.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jfloat SF_mindustry_graphics_MenuRenderer_darkness;

void mark_mindustry_graphics_MenuRenderer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_MenuRenderer *) object;
	if (self->F_camera)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camera)->clazz)->markFunction)((jobject) self->F_camera, mark, depth + 1);
	if (self->F_mat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mat)->clazz)->markFunction)((jobject) self->F_mat, mark, depth + 1);
	if (self->F_shadows)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shadows)->clazz)->markFunction)((jobject) self->F_shadows, mark, depth + 1);
	if (self->F_batch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_batch)->clazz)->markFunction)((jobject) self->F_batch, mark, depth + 1);
	if (self->F_flyerType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flyerType)->clazz)->markFunction)((jobject) self->F_flyerType, mark, depth + 1);
}

void clinit_mindustry_graphics_MenuRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_MenuRenderer_darkness = jfloat(0.3f);
}

void init_mindustry_graphics_MenuRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MenuRenderer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MenuRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_2;
	}
	INST_BIPUSH(100);
	goto label_3;
label_2:;
	INST_BIPUSH(60);
label_3:;
	{
	sp -= 2;
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_width = sp[1].i;
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_4;
	}
	INST_BIPUSH(50);
	goto label_5;
label_4:;
	INST_BIPUSH(40);
label_5:;
	{
	sp -= 2;
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_height = sp[1].i;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Camera(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Camera);
	init_arc_graphics_Camera(ctx, sp[1].o);
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_camera = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_mat = (jref) sp[1].o;
	LINE_NUMBER(29);
	((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(30);
	((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerRot = (jfloat(45.0f));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.2)));
	sp += 1;
	if (temp0 == 0) goto label_11;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (35));
	sp[0].i = temp0;
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_BIPUSH(15);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, sp[0].i);
	sp++;
label_12:;
	{
	sp -= 2;
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_flyers = sp[1].i;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_UnitType, (9));
	jint temp0 = jint(0);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_flare;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_horizon;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_zenith;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_mono;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_poly;
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_mega;
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = 6;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_alpha;
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_beta;
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = 8;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_gamma;
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_random_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_random_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_flyerType = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(36);
	SM_arc_util_Time_mark(ctx);
	LINE_NUMBER(37);
	((func_mindustry_graphics_MenuRenderer_generate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MenuRenderer_generate])(ctx, (frame[0].o));
	LINE_NUMBER(38);
	((func_mindustry_graphics_MenuRenderer_cache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MenuRenderer_cache])(ctx, (frame[0].o));
	LINE_NUMBER(39);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Time to generate menu: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp9 = jint(0);
	jfloat temp10 = (jfloat)SM_arc_util_Time_elapsed_R_float(ctx);
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp10);
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MenuRenderer_generate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[43];
	auto stack = &frame[32];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MenuRenderer:generate", 43 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_setGenerating_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_setGenerating_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(46);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles])(ctx, sp[0].o, ((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_height));
	frame[1].o = sp[0].o;
	LINE_NUMBER(48);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (6));
	jint temp0 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreCopper;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreLead;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreScrap;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreCoal;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreTitanium;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreThorium;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer_int_int(ctx, sp[1].o, ((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_height));
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_shadows = (jref) sp[1].o;
	LINE_NUMBER(50);
	jint temp6 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (jint(100000)));
	frame[3].i = temp6;
	LINE_NUMBER(51);
	frame[4].i = (frame[3].i);
	frame[5].i = ((frame[3].i) + (jint(1)));
	frame[6].i = ((frame[3].i) + (jint(2)));
	LINE_NUMBER(52);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_mindustry_world_Block, 1), (9));
	jint temp7 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp8 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sandWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp10 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp11 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_shale;
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	jint temp12 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_shaleWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp12) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp13 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp14 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[1].o, temp14) = sp[2].o;
	jint temp15 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_iceWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp15) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp16 = jint(3);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp17 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[1].o, temp17) = sp[2].o;
	jint temp18 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sandWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp18) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp19 = jint(4);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp20 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_shale;
	ARRAY_ACCESS(jobject, sp[1].o, temp20) = sp[2].o;
	jint temp21 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_shaleWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp21) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp22 = jint(5);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp23 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[1].o, temp23) = sp[2].o;
	jint temp24 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_iceWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp24) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp25 = 6;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp26 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_moss;
	ARRAY_ACCESS(jobject, sp[1].o, temp26) = sp[2].o;
	jint temp27 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sporePine;
	ARRAY_ACCESS(jobject, sp[1].o, temp27) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp28 = 7;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp29 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_dirt;
	ARRAY_ACCESS(jobject, sp[1].o, temp29) = sp[2].o;
	jint temp30 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_dirtWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp30) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp31 = 8;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp32 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_dacite;
	ARRAY_ACCESS(jobject, sp[1].o, temp32) = sp[2].o;
	jint temp33 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_daciteWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp33) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	sp[0].o = (jobject)SM_arc_util_Structs_random_Array1_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	frame[7].o = (checkCast(ctx, getArrayClass(&class_mindustry_world_Block, 1), sp[0].o));
	LINE_NUMBER(63);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_mindustry_world_Block, 1), (6));
	jint temp34 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp35 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[1].o, temp35) = sp[2].o;
	jint temp36 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_duneWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp36) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp37 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp38 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[1].o, temp38) = sp[2].o;
	jint temp39 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_duneWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp39) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp40 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp41 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[1].o, temp41) = sp[2].o;
	jint temp42 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_stoneWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp42) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp43 = jint(3);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp44 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[1].o, temp44) = sp[2].o;
	jint temp45 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_stoneWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp45) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp43) = sp[1].o;
	jint temp46 = jint(4);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp47 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_moss;
	ARRAY_ACCESS(jobject, sp[1].o, temp47) = sp[2].o;
	jint temp48 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sporeWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp48) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp49 = jint(5);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp50 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_salt;
	ARRAY_ACCESS(jobject, sp[1].o, temp50) = sp[2].o;
	jint temp51 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_saltWall;
	ARRAY_ACCESS(jobject, sp[1].o, temp51) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp49) = sp[1].o;
	sp[0].o = (jobject)SM_arc_util_Structs_random_Array1_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	frame[8].o = (checkCast(ctx, getArrayClass(&class_mindustry_world_Block, 1), sp[0].o));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_arc_struct_Seq_random_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_random_R_java_lang_Object])(ctx, (frame[2].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(73);
	jint temp52 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[9].o));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_arc_struct_Seq_random_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_random_R_java_lang_Object])(ctx, (frame[2].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(76);
	jfloat temp53 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.65f)), (jfloat(0.85f)));
	frame[11].d = (jdouble(temp53));
	LINE_NUMBER(77);
	jfloat temp54 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.65f)), (jfloat(0.85f)));
	frame[13].d = (jdouble(temp54));
	LINE_NUMBER(78);
	jint temp55 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.25)));
	frame[15].i = temp55;
	LINE_NUMBER(79);
	jint temp56 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.25)));
	frame[16].i = temp56;
	LINE_NUMBER(80);
	jint temp57 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.25)));
	frame[17].i = temp57;
	LINE_NUMBER(81);
	frame[18].i = (10);
	LINE_NUMBER(83);
	frame[19].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0))));
	frame[20].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1))));
	LINE_NUMBER(84);
	frame[21].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(0))));
	frame[22].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(1))));
	LINE_NUMBER(86);
	frame[23].i = (jint(0));
	}
label_24:;
	{
	if ((frame[23].i) >= ((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_width)) goto label_25;
	}
	{
	LINE_NUMBER(87);
	frame[24].i = (jint(0));
	}
label_27:;
	{
	if ((frame[24].i) >= ((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_height)) goto label_28;
	}
	{
	LINE_NUMBER(88);
	frame[25].o = (frame[19].o);
	LINE_NUMBER(89);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	frame[26].o = sp[0].o;
	LINE_NUMBER(90);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	frame[27].o = sp[0].o;
	LINE_NUMBER(92);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, (frame[4].i), (jdouble(3.0)), (jdouble(0.5)), (jdouble(0.05)), (jdouble((frame[23].i))), (jdouble((frame[24].i))));
	if ((doubleCompare((jdouble(temp0)), (jdouble(0.5)), -1)) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(93);
	frame[27].o = (frame[20].o);
	}
label_33:;
	{
	LINE_NUMBER(96);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, (frame[6].i), (jdouble(3.0)), (jdouble(0.5)), (jdouble(0.05)), (jdouble((frame[23].i))), (jdouble((frame[24].i))));
	if ((doubleCompare((jdouble(temp0)), (jdouble(0.5)), -1)) <= 0) goto label_35;
	}
	{
	LINE_NUMBER(97);
	frame[25].o = (frame[21].o);
	LINE_NUMBER(98);
	sp[0].o = frame[27].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_35;
	}
	{
	LINE_NUMBER(99);
	frame[27].o = (frame[22].o);
	}
label_35:;
	{
	LINE_NUMBER(103);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, (frame[5].i), (jdouble(3.0)), (jdouble(0.3)), (jdouble(0.03333333333333333)), (jdouble((frame[23].i))), (jdouble((frame[24].i))));
	if ((doubleCompare((jdouble(temp0)), (frame[11].d), -1)) <= 0) goto label_39;
	}
	{
	LINE_NUMBER(104);
	frame[26].o = (frame[9].o);
	}
label_39:;
	{
	LINE_NUMBER(107);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, (frame[5].i), (jdouble(2.0)), (jdouble(0.2)), (jdouble(0.06666666666666667)), (jdouble((frame[23].i))), (jdouble(((frame[24].i) + (jint(99999))))));
	if ((doubleCompare((jdouble(temp0)), (frame[13].d), -1)) <= 0) goto label_41;
	}
	{
	LINE_NUMBER(108);
	frame[26].o = (frame[10].o);
	}
label_41:;
	{
	LINE_NUMBER(111);
	if ((frame[15].i) == 0) goto label_43;
	}
	{
	LINE_NUMBER(112);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, (frame[6].i), (jdouble(4.0)), (jdouble(0.6)), (jdouble(0.02)), (jdouble((frame[23].i))), (jdouble(((frame[24].i) + (9999)))));
	frame[28].d = (jdouble(temp0));
	LINE_NUMBER(113);
	frame[30].d = (jdouble(0.65));
	LINE_NUMBER(115);
	if ((doubleCompare((frame[28].d), (frame[30].d), -1)) <= 0) goto label_43;
	}
	{
	LINE_NUMBER(116);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	frame[26].o = sp[0].o;
	LINE_NUMBER(117);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	frame[27].o = sp[0].o;
	LINE_NUMBER(118);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_basalt;
	frame[25].o = sp[0].o;
	LINE_NUMBER(120);
	if ((doubleCompare((frame[28].d), ((frame[30].d) + (jdouble(0.1))), -1)) <= 0) goto label_43;
	}
	{
	LINE_NUMBER(121);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_hotrock;
	frame[25].o = sp[0].o;
	LINE_NUMBER(123);
	if ((doubleCompare((frame[28].d), ((frame[30].d) + (jdouble(0.15))), -1)) <= 0) goto label_43;
	}
	{
	LINE_NUMBER(124);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_magmarock;
	frame[25].o = sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(130);
	if ((frame[17].i) == 0) goto label_54;
	}
	{
	LINE_NUMBER(131);
	frame[28].i = ((frame[23].i) % (frame[18].i));
	frame[29].i = ((frame[24].i) % (frame[18].i));
	LINE_NUMBER(132);
	frame[30].i = ((frame[23].i) / (frame[18].i));
	frame[31].i = ((frame[24].i) / (frame[18].i));
	LINE_NUMBER(133);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, (frame[4].i), (jdouble(2.0)), (jdouble(0.10000000149011612)), (jdouble(0.5)), (jdouble((frame[30].i))), (jdouble((frame[31].i))));
	if ((floatCompare(temp0, (jfloat(0.4f)), -1)) <= 0) goto label_54;
	}
	INST_ILOAD(28);
	if ((--sp)->i == 0) goto label_60;
	INST_ILOAD(29);
	if ((--sp)->i == 0) goto label_60;
	{
	if ((frame[28].i) == ((frame[18].i) - (jint(1)))) goto label_60;
	}
	{
	if ((frame[29].i) != ((frame[18].i) - (jint(1)))) goto label_54;
	}
label_60:;
	{
	LINE_NUMBER(134);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_darkPanel3;
	frame[25].o = sp[0].o;
	LINE_NUMBER(135);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (jfloat((frame[28].i))), (jfloat((frame[29].i))), (jfloat(((frame[18].i) / (jint(2))))), (jfloat(((frame[18].i) / (jint(2))))));
	if ((floatCompare(temp0, (((jfloat((frame[18].i))) / (jfloat(2))) + (jfloat(1))), -1)) <= 0) goto label_62;
	}
	{
	LINE_NUMBER(136);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_darkPanel4;
	frame[25].o = sp[0].o;
	}
label_62:;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[27].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_54;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.7)));
	if (temp0 == 0) goto label_54;
	}
	{
	LINE_NUMBER(141);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_darkMetal;
	frame[27].o = sp[0].o;
	}
label_54:;
	{
	LINE_NUMBER(146);
	if ((frame[16].i) == 0) goto label_65;
	}
	{
	LINE_NUMBER(147);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise2d_int_double_double_double_R_float(ctx, ((jint(1)) + (frame[3].i)), (jdouble((frame[23].i))), (jdouble((frame[24].i))), (jdouble(0.05882352963089943)));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_65;
	}
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.2)));
	if (temp0 == 0) goto label_68;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_sporeMoss;
	goto label_69;
label_68:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_moss;
label_69:;
	{
	sp -= 1;
	frame[25].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = frame[27].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_65;
	}
	{
	LINE_NUMBER(151);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_sporeWall;
	frame[27].o = sp[0].o;
	}
label_65:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[1].o;
	jint temp0 = frame[23].i;
	jint temp1 = frame[24].i;
	clinit_mindustry_world_CachedTile(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_CachedTile);
	init_mindustry_world_CachedTile(ctx, sp[1].o);
	frame[28].o = sp[1].o;
	((func_mindustry_world_Tiles_set_int_int_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_set_int_int_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(158);
	((mindustry_world_Tile *) NULL_CHECK((frame[28].o)))->F_x = (jshort((frame[23].i)));
	LINE_NUMBER(159);
	((mindustry_world_Tile *) NULL_CHECK((frame[28].o)))->F_y = (jshort((frame[24].i)));
	LINE_NUMBER(160);
	sp[0].o = frame[28].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[25].o));
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[28].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, (frame[28].o), (frame[27].o));
	LINE_NUMBER(162);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[28].o))->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, (frame[28].o), (frame[26].o));
	LINE_NUMBER(87);
	INST_IINC(24, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(86);
	INST_IINC(23, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(167);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_setGenerating_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_setGenerating_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MenuRenderer_cache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MenuRenderer:cache", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	sp[1].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	sp[1].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(175);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(177);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(179);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x))) + (jfloat(0.5f))), ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y))) + (jfloat(0.5f))), (jfloat(1)), (jfloat(1)));
	}
label_7:;
	LINE_NUMBER(181);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(183);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(186);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	frame[1].o = sp[0].o;
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_CacheBatch(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_CacheBatch);
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteCache);
	init_arc_graphics_g2d_SpriteCache_int_boolean(ctx, sp[2].o, ((((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_width) * ((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_height)) * (6)), (jint(0)));
	init_arc_graphics_g2d_CacheBatch_arc_graphics_g2d_SpriteCache(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_batch = (jref) sp[1].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = sp[1].o;
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g2d_CacheBatch_beginCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_beginCache])(ctx, sp[0].o);
	LINE_NUMBER(191);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	((func_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(193);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(195);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	((func_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(197);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	jint temp0 = (jint)((func_arc_graphics_g2d_CacheBatch_endCache_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_endCache_R_int])(ctx, sp[1].o);
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_cacheFloor = temp0;
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g2d_CacheBatch_beginCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_beginCache])(ctx, sp[0].o);
	LINE_NUMBER(202);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_24:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	((func_mindustry_world_Block_drawBase_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawBase_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(204);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	jint temp0 = (jint)((func_arc_graphics_g2d_CacheBatch_endCache_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_endCache_R_int])(ctx, sp[1].o);
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_cacheWall = temp0;
	LINE_NUMBER(208);
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = (frame[1].o);
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MenuRenderer_render(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MenuRenderer:render", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_graphics_MenuRenderer *) NULL_CHECK(sp[0].o))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(213);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp2 = (jfloat(temp1)) / (((jfloat(((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_width))) - (jfloat(1))) * (jfloat(8.0f)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp2, ((jfloat(temp3)) / (((jfloat(((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_height))) - (jfloat(1))) * (jfloat(8.0f)))));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp4);
	frame[1].f = temp5;
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat((((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_width) * (8)))) / (jfloat(2))), ((jfloat((((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_height) * (8)))) / (jfloat(2))));
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_camera;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp6 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp7 = (jfloat(temp6)) / (frame[1].f);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	LINE_NUMBER(216);
	jint temp8 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	jfloat temp9 = (jfloat(temp8)) / (frame[1].f);
	LINE_NUMBER(215);
	((func_arc_graphics_Camera_resize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_resize_float_float])(ctx, sp[0].o, temp7, temp9);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_mat;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(219);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_camera;
	SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera(ctx, sp[0].o);
	LINE_NUMBER(221);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	sp[1].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_mat;
	((func_arc_graphics_g2d_CacheBatch_setProjection_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_setProjection_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g2d_CacheBatch_beginDraw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_beginDraw])(ctx, sp[0].o);
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g2d_CacheBatch_drawCache_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_drawCache_int])(ctx, sp[0].o, ((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_cacheFloor));
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g2d_CacheBatch_endDraw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_endDraw])(ctx, sp[0].o);
	LINE_NUMBER(225);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (((jfloat((((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_width) * (8)))) / (jfloat(2))) - (jfloat(4.0f))), (((jfloat((((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_height) * (8)))) / (jfloat(2))) - (jfloat(4.0f))), (jfloat((((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_width) * (8)))), (jfloat(((-((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_height)) * (8)))));
	LINE_NUMBER(229);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g2d_CacheBatch_beginDraw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_beginDraw])(ctx, sp[0].o);
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g2d_CacheBatch_drawCache_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_drawCache_int])(ctx, sp[0].o, ((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_cacheWall));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g2d_CacheBatch_endDraw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_endDraw])(ctx, sp[0].o);
	LINE_NUMBER(234);
	((func_mindustry_graphics_MenuRenderer_drawFlyers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MenuRenderer_drawFlyers])(ctx, (frame[0].o));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_mat;
	SM_arc_graphics_g2d_Draw_proj_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(237);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.3f)));
	LINE_NUMBER(238);
	jfloat temp10 = jfloat(0);
	jfloat temp11 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp12 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp13 = jfloat(temp12);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp14 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, temp10, temp11, temp13, (jfloat(temp14)));
	LINE_NUMBER(239);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MenuRenderer_drawFlyers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MenuRenderer:drawFlyers", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_sample;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = (jfloat(1));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_sample;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_sample;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = ((jfloat)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerRot);
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_sample;
	sp[1].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	((func_mindustry_gen_Unit_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_setType_mindustry_type_UnitType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_sample;
	((func_mindustry_gen_Unit_heal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_heal])(ctx, sp[0].o);
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_MenuRenderer_invoke_arc_func_Floatc2_1(ctx);
		auto proxy = (mindustry_graphics_MenuRenderer_invoke_arc_func_Floatc2_1 *) gcAlloc(ctx, &class_mindustry_graphics_MenuRenderer_invoke_arc_func_Floatc2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_graphics_MenuRenderer_flyers_arc_func_Floatc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MenuRenderer_flyers_arc_func_Floatc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MenuRenderer_flyers_arc_func_Floatc2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MenuRenderer:flyers", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(258);
	frame[2].f = (((jfloat((((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_width) * (8)))) * (jfloat(1))) + (jfloat(8.0f)));
	LINE_NUMBER(259);
	frame[3].f = (((jfloat((((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_height) * (8)))) * (jfloat(1))) + (jfloat(8.0f)));
	LINE_NUMBER(260);
	frame[4].f = (jfloat(500.0f));
	LINE_NUMBER(261);
	frame[5].f = (jfloat(-100.0f));
	LINE_NUMBER(263);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= ((jint)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyers)) goto label_6;
	}
	{
	LINE_NUMBER(264);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerRot;
	jfloat temp1 = (jfloat)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_time;
	sp[1].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (temp1 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_speed)));
	LINE_NUMBER(266);
	sp[0].o = frame[1].o;
	jlong temp2 = jlong((frame[6].i));
	jfloat temp3 = frame[4].f;
	LINE_NUMBER(267);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, temp2, temp3);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp6 = (jfloat)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_time;
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong(((frame[6].i) + (jint(2))))), (jfloat(500.0f)));
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (temp6 + temp7), (jfloat(10.0f)), (jfloat(3.4f)));
	jfloat temp9 = (temp5 + temp8) + (frame[5].f);
	jfloat temp10 = frame[2].f;
	jint temp11 = (jint)SM_arc_math_Mathf_randomSeed_long_int_int_R_int(ctx, (jlong(((frame[6].i) + (jint(5))))), (jint(0)), (500));
	jfloat temp12 = fmodf(temp9, (temp10 + (jfloat(temp11))));
	jlong temp13 = jlong(((frame[6].i) + (jint(1))));
	jfloat temp14 = frame[4].f;
	LINE_NUMBER(268);
	jfloat temp15 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, temp13, temp14);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp16 = temp15 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp17 = (jfloat)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_time;
	jfloat temp18 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong(((frame[6].i) + (jint(3))))), (jfloat(500.0f)));
	jfloat temp19 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (temp17 + temp18), (jfloat(10.0f)), (jfloat(3.4f)));
	jfloat temp20 = fmodf(((temp16 + temp19) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(266);
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, sp[0].o))(ctx, sp[0].o, temp12, temp20);
	LINE_NUMBER(263);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(271);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_MenuRenderer_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MenuRenderer:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g2d_CacheBatch_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_dispose])(ctx, sp[0].o);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MenuRenderer_lambda$drawFlyers$0_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MenuRenderer:lambda$drawFlyers$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_sample;
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[1].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_sample;
	((func_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[1].o = (jobject)((mindustry_graphics_MenuRenderer *) NULL_CHECK((frame[0].o)))->F_flyerType;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_sample;
	((func_mindustry_type_UnitType_draw_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_draw_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_MenuRenderer[] {
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
	(void *) M_mindustry_graphics_MenuRenderer_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_graphics_MenuRenderer_generate,
	(void *) M_mindustry_graphics_MenuRenderer_cache,
	(void *) M_mindustry_graphics_MenuRenderer_render,
	(void *) M_mindustry_graphics_MenuRenderer_drawFlyers,
	(void *) M_mindustry_graphics_MenuRenderer_flyers_arc_func_Floatc2,
	(void *) M_mindustry_graphics_MenuRenderer_lambda$drawFlyers$0_float_float,
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
	{ "generate", "()V" },
	{ "cache", "()V" },
	{ "render", "()V" },
	{ "drawFlyers", "()V" },
	{ "flyers", "(Larc/func/Floatc2;)V" },
	{ "lambda$drawFlyers$0", "(FF)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "darkness", &class_float, (intptr_t) &SF_mindustry_graphics_MenuRenderer_darkness, "F", 26 },
	{ "width", &class_int, offsetof(mindustry_graphics_MenuRenderer, F_width), "I", 18 },
	{ "height", &class_int, offsetof(mindustry_graphics_MenuRenderer, F_height), "I", 18 },
	{ "cacheFloor", &class_int, offsetof(mindustry_graphics_MenuRenderer, F_cacheFloor), "I", 2 },
	{ "cacheWall", &class_int, offsetof(mindustry_graphics_MenuRenderer, F_cacheWall), "I", 2 },
	{ "camera", &class_arc_graphics_Camera, offsetof(mindustry_graphics_MenuRenderer, F_camera), "Larc/graphics/Camera;", 2 },
	{ "mat", &class_arc_math_Mat, offsetof(mindustry_graphics_MenuRenderer, F_mat), "Larc/math/Mat;", 2 },
	{ "shadows", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_graphics_MenuRenderer, F_shadows), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "batch", &class_arc_graphics_g2d_CacheBatch, offsetof(mindustry_graphics_MenuRenderer, F_batch), "Larc/graphics/g2d/CacheBatch;", 2 },
	{ "time", &class_float, offsetof(mindustry_graphics_MenuRenderer, F_time), "F", 2 },
	{ "flyerRot", &class_float, offsetof(mindustry_graphics_MenuRenderer, F_flyerRot), "F", 2 },
	{ "flyers", &class_int, offsetof(mindustry_graphics_MenuRenderer, F_flyers), "I", 2 },
	{ "flyerType", &class_mindustry_type_UnitType, offsetof(mindustry_graphics_MenuRenderer, F_flyerType), "Lmindustry/type/UnitType;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_MenuRenderer, 0, "()V", 1 },
	{ "generate", (intptr_t) M_mindustry_graphics_MenuRenderer_generate, VTABLE_mindustry_graphics_MenuRenderer_generate, "()V", 2 },
	{ "cache", (intptr_t) M_mindustry_graphics_MenuRenderer_cache, VTABLE_mindustry_graphics_MenuRenderer_cache, "()V", 2 },
	{ "render", (intptr_t) M_mindustry_graphics_MenuRenderer_render, VTABLE_mindustry_graphics_MenuRenderer_render, "()V", 1 },
	{ "drawFlyers", (intptr_t) M_mindustry_graphics_MenuRenderer_drawFlyers, VTABLE_mindustry_graphics_MenuRenderer_drawFlyers, "()V", 2 },
	{ "flyers", (intptr_t) M_mindustry_graphics_MenuRenderer_flyers_arc_func_Floatc2, VTABLE_mindustry_graphics_MenuRenderer_flyers_arc_func_Floatc2, "(Larc/func/Floatc2;)V", 2 },
	{ "dispose", (intptr_t) M_mindustry_graphics_MenuRenderer_dispose, VTABLE_mindustry_graphics_MenuRenderer_dispose, "()V", 1 },
	{ "lambda$drawFlyers$0", (intptr_t) M_mindustry_graphics_MenuRenderer_lambda$drawFlyers$0_float_float, VTABLE_mindustry_graphics_MenuRenderer_lambda$drawFlyers$0_float_float, "(FF)V", 4098 },
};

Class class_mindustry_graphics_MenuRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/MenuRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_MenuRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_MenuRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_MenuRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_MenuRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_MenuRenderer = registerClass(&class_mindustry_graphics_MenuRenderer);

}
