#include "mindustry/world/blocks/logic/TileableLogicDisplay.h"
#include "java/lang/Math.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/util/Iterator.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_TileableLogicDisplayBuild.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay.h"
#include "mindustry/gen/Building.h"
#include "arc/struct/IntSet.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/logic/LogicDisplay.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_MergeBuffer.h"
#include "mindustry/world/blocks/logic/LogicDisplay_LogicDisplayBuild.h"

extern "C" {

jobject SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue;
jobject SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays;
jobject SF_mindustry_world_blocks_logic_TileableLogicDisplay_buffers;
jobject SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed;

void mark_mindustry_world_blocks_logic_TileableLogicDisplay(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_TileableLogicDisplay_buffers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_TileableLogicDisplay_buffers)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_TileableLogicDisplay_buffers, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_logic_LogicDisplay(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_logic_TileableLogicDisplay *) object;
	if (self->F_tileRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tileRegion)->clazz)->markFunction)((jobject) self->F_tileRegion, mark, depth + 1);
	if (self->F_backRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backRegion)->clazz)->markFunction)((jobject) self->F_backRegion, mark, depth + 1);
}

void init_mindustry_world_blocks_logic_TileableLogicDisplay_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	init_mindustry_world_blocks_logic_LogicDisplay_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(27);
	((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK((frame[0].o)))->F_maxDisplayDimensions = (16);
	LINE_NUMBER(30);
	((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK((frame[0].o)))->F_frameSize = (6);
	LINE_NUMBER(35);
	((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK((frame[0].o)))->F_displaySize = (32);
	LINE_NUMBER(36);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowRectanglePlacement = (jint(1));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_logic_TileableLogicDisplay_linkDisplays_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild(jcontext ctx, jobject param0) {
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay:linkDisplays", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(40);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[2].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[3].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[4].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[5].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(44);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(45);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(46);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(48);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(49);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(51);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(52);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, sp[0].o));
	LINE_NUMBER(53);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_id));
	LINE_NUMBER(56);
	if ((frame[1].o) == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	if (temp0 < ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x)) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	if (temp0 >= ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y)) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(57);
	frame[1].o = (frame[6].o);
	}
label_16:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_tile;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_tile;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y), (frame[3].i));
	frame[3].i = temp1;
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_tile;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x), (frame[4].i));
	frame[4].i = temp2;
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_tile;
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y), (frame[5].i));
	frame[5].i = temp3;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(66);
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild)) == 0) goto label_24;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, (frame[8].o)));
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_id));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(67);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(68);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[9].o));
	}
label_24:;
	LINE_NUMBER(70);
	goto label_21;
label_22:;
	LINE_NUMBER(71);
	goto label_10;
label_11:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_prevBuffers;
	if (sp[0].o != nullptr) goto label_28;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = frame[1].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_prevBuffers = (jref) sp[1].o;
	}
label_28:;
	{
	LINE_NUMBER(78);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_buffers;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(79);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_31:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, sp[0].o));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[7].o)))->F_buffer;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_buffers;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[7].o)))->F_buffer;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_prevBuffers;
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer);
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[7].o)))->F_buffer;
	init_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer_arc_graphics_gl_FrameBuffer_int_int_int_int(ctx, sp[1].o, sp[2].o, ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[7].o)))->F_originX), ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[7].o)))->F_originY), ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[7].o)))->F_tilesWidth), ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[7].o)))->F_tilesHeight));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_34:;
	LINE_NUMBER(83);
	goto label_31;
label_32:;
	{
	LINE_NUMBER(85);
	frame[6].i = (((frame[2].i) - (frame[4].i)) + (jint(1)));
	frame[7].i = (((frame[3].i) - (frame[5].i)) + (jint(1)));
	LINE_NUMBER(86);
	jint temp0 = (frame[6].i) * (frame[7].i);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays;
	if (temp0 != ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_38;
	}
	INST_ICONST(1);
	goto label_39;
label_38:;
	INST_ICONST(0);
label_39:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(89);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_41:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, sp[0].o));
	LINE_NUMBER(90);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[10].o)))->F_needsUpdate = (jint(0));
	LINE_NUMBER(91);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[10].o)))->F_rectangular = (frame[8].i);
	LINE_NUMBER(92);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[10].o)))->F_rootDisplay = (jref) (frame[1].o);
	LINE_NUMBER(93);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[10].o)))->F_tilesWidth = (frame[6].i);
	LINE_NUMBER(94);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[10].o)))->F_tilesHeight = (frame[7].i);
	LINE_NUMBER(95);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[10].o)))->F_originX = (frame[4].i);
	LINE_NUMBER(96);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[10].o)))->F_originY = (frame[5].i);
	LINE_NUMBER(97);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[10].o)))->F_buffer = (jref) (jobject(nullptr));
	LINE_NUMBER(98);
	goto label_41;
	}
label_42:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_logic_TileableLogicDisplay(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	{
	LINE_NUMBER(21);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue = sp[0].o;
	LINE_NUMBER(22);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays = sp[0].o;
	LINE_NUMBER(23);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	SF_mindustry_world_blocks_logic_TileableLogicDisplay_buffers = sp[0].o;
	LINE_NUMBER(24);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_logic_TileableLogicDisplay[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_Block_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_Block_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_Block_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild,
	&class_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer,
};

static FieldMetadata fields[] {
	{ "queue", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_world_blocks_logic_TileableLogicDisplay_queue, "Larc/struct/Seq;", 28 },
	{ "displays", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_world_blocks_logic_TileableLogicDisplay_displays, "Larc/struct/Seq;", 28 },
	{ "buffers", &class_arc_struct_ObjectSet, (intptr_t) &SF_mindustry_world_blocks_logic_TileableLogicDisplay_buffers, "Larc/struct/ObjectSet;", 28 },
	{ "processed", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed, "Larc/struct/IntSet;", 28 },
	{ "maxDisplayDimensions", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay, F_maxDisplayDimensions), "I", 1 },
	{ "tileRegion", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_blocks_logic_TileableLogicDisplay, F_tileRegion), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "backRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay, F_backRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "frameSize", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay, F_frameSize), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_TileableLogicDisplay_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "linkDisplays", (intptr_t) SM_mindustry_world_blocks_logic_TileableLogicDisplay_linkDisplays_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, 0, "(Lmindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_logic_TileableLogicDisplay, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_logic_TileableLogicDisplay{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/TileableLogicDisplay",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_logic_LogicDisplay,
		.size = sizeof(mindustry_world_blocks_logic_TileableLogicDisplay),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_TileableLogicDisplay,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_TileableLogicDisplay,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_TileableLogicDisplay,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 189,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_TileableLogicDisplay = registerClass(&class_mindustry_world_blocks_logic_TileableLogicDisplay);

}
