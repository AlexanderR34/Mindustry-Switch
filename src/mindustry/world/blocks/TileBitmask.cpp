#include "mindustry/world/blocks/TileBitmask.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/blocks/TileBitmask.h"

extern "C" {

jobject SF_mindustry_world_blocks_TileBitmask_values;

void mark_mindustry_world_blocks_TileBitmask(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_TileBitmask_values)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_TileBitmask_values)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_TileBitmask_values, mark, depth + 1);
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
	auto self = (mindustry_world_blocks_TileBitmask *) object;
}

void init_mindustry_world_blocks_TileBitmask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/TileBitmask:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_TileBitmask(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_TileBitmask_load_java_lang_String_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/TileBitmask:load", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_TileBitmask(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (47));
	frame[1].o = sp[0].o;
	LINE_NUMBER(29);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (47)) goto label_3;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[0].o), boxInteger(ctx, (frame[2].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(29);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_TileBitmask_loadVariants_java_lang_String_int_R_Array2_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0, jint param1) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/TileBitmask:loadVariants", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_TileBitmask(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)createMultiArray(ctx, &class_arc_graphics_g2d_TextureRegion, {(frame[1].i), (47)});
	frame[2].o = sp[0].o;
	LINE_NUMBER(37);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(38);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (47)) goto label_6;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i));
	jint temp0 = frame[4].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001-\u0001"_j.string, 3, (frame[0].o), boxInteger(ctx, ((frame[3].i) + (jint(1)))), boxInteger(ctx, (frame[4].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(38);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(37);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_TileBitmask(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/TileBitmask:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_TileBitmask(ctx);
	{
	LINE_NUMBER(8);
	sp[0].o = (jobject) createArray(ctx, &class_int, (256));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (24);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (24);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (18)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (19)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (20)) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (21)) = (41);
	ARRAY_ACCESS(jint, sp[0].o, (22)) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (23)) = (43);
	ARRAY_ACCESS(jint, sp[0].o, (24)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (25)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (26)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (27)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (28)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (29)) = (21);
	ARRAY_ACCESS(jint, sp[0].o, (30)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (31)) = (25);
	ARRAY_ACCESS(jint, sp[0].o, (32)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (33)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (34)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (35)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (36)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (37)) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (38)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (39)) = (24);
	ARRAY_ACCESS(jint, sp[0].o, (40)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (41)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (42)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (43)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (44)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (45)) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (46)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (47)) = (24);
	ARRAY_ACCESS(jint, sp[0].o, (48)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (49)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (50)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (51)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (52)) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (53)) = (41);
	ARRAY_ACCESS(jint, sp[0].o, (54)) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (55)) = (43);
	ARRAY_ACCESS(jint, sp[0].o, (56)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (57)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (58)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (59)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (60)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (61)) = (21);
	ARRAY_ACCESS(jint, sp[0].o, (62)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (63)) = (25);
	ARRAY_ACCESS(jint, sp[0].o, (64)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (65)) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (66)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (67)) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (68)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (69)) = (40);
	ARRAY_ACCESS(jint, sp[0].o, (70)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (71)) = (20);
	ARRAY_ACCESS(jint, sp[0].o, (72)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (73)) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (74)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (75)) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (76)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (77)) = (40);
	ARRAY_ACCESS(jint, sp[0].o, (78)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (79)) = (20);
	ARRAY_ACCESS(jint, sp[0].o, (80)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (81)) = (28);
	ARRAY_ACCESS(jint, sp[0].o, (82)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (83)) = (28);
	ARRAY_ACCESS(jint, sp[0].o, (84)) = (29);
	ARRAY_ACCESS(jint, sp[0].o, (85)) = (10);
	ARRAY_ACCESS(jint, sp[0].o, (86)) = (29);
	ARRAY_ACCESS(jint, sp[0].o, (87)) = (23);
	ARRAY_ACCESS(jint, sp[0].o, (88)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (89)) = (28);
	ARRAY_ACCESS(jint, sp[0].o, (90)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (91)) = (28);
	ARRAY_ACCESS(jint, sp[0].o, (92)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (93)) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (94)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (95)) = (32);
	ARRAY_ACCESS(jint, sp[0].o, (96)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (97)) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (98)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (99)) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (100)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (101)) = (40);
	ARRAY_ACCESS(jint, sp[0].o, (102)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (103)) = (20);
	ARRAY_ACCESS(jint, sp[0].o, (104)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (105)) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (106)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (107)) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (108)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (109)) = (40);
	ARRAY_ACCESS(jint, sp[0].o, (110)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (111)) = (20);
	ARRAY_ACCESS(jint, sp[0].o, (112)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (113)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (114)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (115)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (116)) = (9);
	ARRAY_ACCESS(jint, sp[0].o, (117)) = (46);
	ARRAY_ACCESS(jint, sp[0].o, (118)) = (9);
	ARRAY_ACCESS(jint, sp[0].o, (119)) = (22);
	ARRAY_ACCESS(jint, sp[0].o, (120)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (121)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (122)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (123)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (124)) = (14);
	ARRAY_ACCESS(jint, sp[0].o, (125)) = (44);
	ARRAY_ACCESS(jint, sp[0].o, (126)) = (14);
	ARRAY_ACCESS(jint, sp[0].o, (127)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (128)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (129)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (130)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (131)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (132)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (133)) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (134)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (135)) = (24);
	ARRAY_ACCESS(jint, sp[0].o, (136)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (137)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (138)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (139)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (140)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (141)) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (142)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (143)) = (24);
	ARRAY_ACCESS(jint, sp[0].o, (144)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (145)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (146)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (147)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (148)) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (149)) = (41);
	ARRAY_ACCESS(jint, sp[0].o, (150)) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (151)) = (43);
	ARRAY_ACCESS(jint, sp[0].o, (152)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (153)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (154)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (155)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (156)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (157)) = (21);
	ARRAY_ACCESS(jint, sp[0].o, (158)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (159)) = (25);
	ARRAY_ACCESS(jint, sp[0].o, (160)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (161)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (162)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (163)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (164)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (165)) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (166)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (167)) = (24);
	ARRAY_ACCESS(jint, sp[0].o, (168)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (169)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (170)) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (171)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (172)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (173)) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (174)) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (175)) = (24);
	ARRAY_ACCESS(jint, sp[0].o, (176)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (177)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (178)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (179)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (180)) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (181)) = (41);
	ARRAY_ACCESS(jint, sp[0].o, (182)) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (183)) = (43);
	ARRAY_ACCESS(jint, sp[0].o, (184)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (185)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (186)) = (38);
	ARRAY_ACCESS(jint, sp[0].o, (187)) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (188)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (189)) = (21);
	ARRAY_ACCESS(jint, sp[0].o, (190)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (191)) = (25);
	ARRAY_ACCESS(jint, sp[0].o, (192)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (193)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (194)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (195)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (196)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (197)) = (42);
	ARRAY_ACCESS(jint, sp[0].o, (198)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (199)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (200)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (201)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (202)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (203)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (204)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (205)) = (42);
	ARRAY_ACCESS(jint, sp[0].o, (206)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (207)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (208)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (209)) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (210)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (211)) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (212)) = (29);
	ARRAY_ACCESS(jint, sp[0].o, (213)) = (35);
	ARRAY_ACCESS(jint, sp[0].o, (214)) = (29);
	ARRAY_ACCESS(jint, sp[0].o, (215)) = (33);
	ARRAY_ACCESS(jint, sp[0].o, (216)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (217)) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (218)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (219)) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (220)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (221)) = (34);
	ARRAY_ACCESS(jint, sp[0].o, (222)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (223)) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (224)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (225)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (226)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (227)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (228)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (229)) = (42);
	ARRAY_ACCESS(jint, sp[0].o, (230)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (231)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (232)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (233)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (234)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (235)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (236)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (237)) = (42);
	ARRAY_ACCESS(jint, sp[0].o, (238)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (239)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (240)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (241)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (242)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (243)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (244)) = (9);
	ARRAY_ACCESS(jint, sp[0].o, (245)) = (45);
	ARRAY_ACCESS(jint, sp[0].o, (246)) = (9);
	ARRAY_ACCESS(jint, sp[0].o, (247)) = (19);
	ARRAY_ACCESS(jint, sp[0].o, (248)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (249)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (250)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (251)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (252)) = (14);
	ARRAY_ACCESS(jint, sp[0].o, (253)) = (18);
	ARRAY_ACCESS(jint, sp[0].o, (254)) = (14);
	ARRAY_ACCESS(jint, sp[0].o, (255)) = (13);
	clinit_mindustry_world_blocks_TileBitmask(ctx);
	SF_mindustry_world_blocks_TileBitmask_values = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_TileBitmask[] {
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
};

static FieldMetadata fields[] {
	{ "values", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_world_blocks_TileBitmask_values, "[I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_TileBitmask, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_world_blocks_TileBitmask_load_java_lang_String_R_Array1_arc_graphics_g2d_TextureRegion, 0, "(Ljava/lang/String;)[Larc/graphics/g2d/TextureRegion;", 9 },
	{ "loadVariants", (intptr_t) SM_mindustry_world_blocks_TileBitmask_loadVariants_java_lang_String_int_R_Array2_arc_graphics_g2d_TextureRegion, 0, "(Ljava/lang/String;I)[[Larc/graphics/g2d/TextureRegion;", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_TileBitmask, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_TileBitmask{
		.nativeName = (intptr_t) "mindustry/world/blocks/TileBitmask",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_TileBitmask),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_TileBitmask,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_TileBitmask,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_TileBitmask,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_TileBitmask = registerClass(&class_mindustry_world_blocks_TileBitmask);

}
