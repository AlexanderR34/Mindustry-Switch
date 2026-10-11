#include "mindustry/io/versions/ShortChunkSaveVersion.h"
#include "mindustry/io/SaveReadState.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/io/versions/ShortChunkSaveVersion.h"
#include "arc/func/Cons.h"
#include "mindustry/io/versions/ShortChunkSaveVersion_invoke_arc_func_Cons_5.h"
#include "mindustry/io/versions/ShortChunkSaveVersion_invoke_arc_func_Cons_3.h"
#include "mindustry/io/versions/ShortChunkSaveVersion_invoke_arc_func_Cons_4.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/io/SaveFileReader.h"
#include "mindustry/world/WorldContext.h"
#include "arc/struct/Seq.h"
#include "java/io/IOException.h"
#include "mindustry/world/Tile.h"
#include "java/lang/Throwable.h"
#include "mindustry/io/SaveFileReader_IORunnerLength.h"
#include "java/io/DataInput.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveVersion.h"
#include "mindustry/io/versions/ShortChunkSaveVersion_invoke_mindustry_io_SaveFileReader_IORunnerLength_3.h"
#include "mindustry/io/versions/ShortChunkSaveVersion_invoke_mindustry_io_SaveFileReader_IORunnerLength_2.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_io_versions_ShortChunkSaveVersion(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_io_SaveVersion(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_io_versions_ShortChunkSaveVersion *) object;
}

void clinit_mindustry_io_versions_ShortChunkSaveVersion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_io_SaveVersion(ctx);
}

void init_mindustry_io_versions_ShortChunkSaveVersion_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/ShortChunkSaveVersion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_versions_ShortChunkSaveVersion(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(17);
	init_mindustry_io_SaveVersion_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_versions_ShortChunkSaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/ShortChunkSaveVersion:readWorldEntities", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(23);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(24);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_ShortChunkSaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2(ctx);
		auto proxy = (mindustry_io_versions_ShortChunkSaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2 *) gcAlloc(ctx, &class_mindustry_io_versions_ShortChunkSaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_io_versions_ShortChunkSaveVersion_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_versions_ShortChunkSaveVersion_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(24);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(42);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_ShortChunkSaveVersion_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_io_versions_ShortChunkSaveVersion_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_io_versions_ShortChunkSaveVersion_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(43);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_ShortChunkSaveVersion_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_io_versions_ShortChunkSaveVersion_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_io_versions_ShortChunkSaveVersion_invoke_arc_func_Cons_4);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(44);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_build;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_ShortChunkSaveVersion_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_io_versions_ShortChunkSaveVersion_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_io_versions_ShortChunkSaveVersion_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_versions_ShortChunkSaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/ShortChunkSaveVersion:readMap", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_context;
	frame[3].o = sp[0].o;
	LINE_NUMBER(50);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(51);
	jint temp1 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp1;
	LINE_NUMBER(53);
	jint temp2 = (jint)((func_mindustry_world_WorldContext_isGenerating_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_isGenerating_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	frame[6].i = temp2;
	LINE_NUMBER(55);
	if ((frame[6].i) != 0) goto label_4;
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_mindustry_world_WorldContext_begin) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_begin, sp[0].o))(ctx, sp[0].o);
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(58);
	((func_mindustry_world_WorldContext_resize_int_int) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_resize_int_int, (frame[3].o)))(ctx, (frame[3].o), (frame[4].i), (frame[5].i));
	LINE_NUMBER(61);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	if ((frame[7].i) >= ((frame[4].i) * (frame[5].i))) goto label_17;
	}
	{
	LINE_NUMBER(62);
	frame[8].i = ((frame[7].i) % (frame[4].i));
	frame[9].i = ((frame[7].i) / (frame[4].i));
	LINE_NUMBER(63);
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[10].i = temp0;
	LINE_NUMBER(64);
	jint temp1 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[11].i = temp1;
	LINE_NUMBER(65);
	jint temp2 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[12].i = temp2;
	LINE_NUMBER(66);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, (frame[10].i));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_stone;
	frame[10].i = ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id);
	}
label_24:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[8].i), (frame[9].i), (frame[10].i), (frame[11].i), (jint(0)));
	LINE_NUMBER(70);
	frame[13].i = ((frame[7].i) + (jint(1)));
	}
label_26:;
	{
	if ((frame[13].i) >= (((frame[7].i) + (jint(1))) + (frame[12].i))) goto label_27;
	}
	{
	LINE_NUMBER(71);
	frame[14].i = ((frame[13].i) % (frame[4].i));
	frame[15].i = ((frame[13].i) / (frame[4].i));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[14].i), (frame[15].i), (frame[10].i), (frame[11].i), (jint(0)));
	LINE_NUMBER(70);
	INST_IINC(13, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(75);
	frame[7].i = ((frame[7].i) + (frame[12].i));
	LINE_NUMBER(61);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(79);
	frame[7].i = (jint(0));
	}
label_33:;
	{
	if ((frame[7].i) >= ((frame[4].i) * (frame[5].i))) goto label_5;
	}
	{
	LINE_NUMBER(80);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp0);
	frame[8].o = sp[0].o;
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[7].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(82);
	if ((frame[8].o) != nullptr) goto label_37;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	INST_ASTORE(8);
label_37:;
	{
	LINE_NUMBER(83);
	frame[10].i = (jint(1));
	LINE_NUMBER(84);
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[11].i = temp0;
	LINE_NUMBER(85);
	if (((frame[11].i) & (jint(1))) == 0) goto label_40;
	}
	INST_ICONST(1);
	goto label_41;
label_40:;
	INST_ICONST(0);
label_41:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(88);
	if (((frame[11].i) & (jint(2))) == 0) goto label_43;
	}
	INST_ICONST(1);
	goto label_44;
label_43:;
	INST_ICONST(0);
label_44:;
	{
	sp -= 1;
	frame[13].i = sp[0].i;
	if (((frame[11].i) & (jint(4))) == 0) goto label_46;
	}
	INST_ICONST(1);
	goto label_47;
label_46:;
	INST_ICONST(0);
label_47:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(90);
	frame[15].i = (jint(0));
	frame[16].i = (jint(0));
	frame[17].i = (jint(0));
	LINE_NUMBER(91);
	frame[18].i = (jint(0));
	LINE_NUMBER(93);
	if ((frame[14].i) == 0) goto label_53;
	}
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[15].i = temp0;
	LINE_NUMBER(95);
	jint temp1 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[16].i = temp1;
	LINE_NUMBER(96);
	jint temp2 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[17].i = temp2;
	LINE_NUMBER(97);
	jint temp3 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[18].i = temp3;
	}
label_53:;
	{
	LINE_NUMBER(100);
	if ((frame[12].i) == 0) goto label_58;
	}
	{
	LINE_NUMBER(101);
	jint temp0 = (jint)((func_java_io_DataInput_readBoolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readBoolean_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	frame[10].i = temp0;
	}
label_58:;
	{
	LINE_NUMBER(105);
	if ((frame[10].i) == 0) goto label_60;
	}
	{
	LINE_NUMBER(106);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	if (sp[0].o == nullptr) goto label_60;
	}
	{
	LINE_NUMBER(108);
	if (((jint)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_preview) != 0) goto label_64;
	}
	{
	sp[0].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_allBuildings;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_64:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_enabled = (jint(1));
	}
label_60:;
	{
	LINE_NUMBER(114);
	if ((frame[14].i) == 0) goto label_65;
	}
	{
	LINE_NUMBER(115);
	((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_data = (frame[15].i);
	LINE_NUMBER(116);
	((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_floorData = (frame[16].i);
	LINE_NUMBER(117);
	((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_overlayData = (frame[17].i);
	LINE_NUMBER(118);
	((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_extraData = (frame[18].i);
	LINE_NUMBER(119);
	((func_mindustry_world_WorldContext_onReadTileData) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_onReadTileData, (frame[3].o)))(ctx, (frame[3].o));
	}
label_65:;
	{
	LINE_NUMBER(122);
	if ((frame[12].i) == 0) goto label_71;
	}
	{
	LINE_NUMBER(123);
	if ((frame[10].i) == 0) goto label_73;
	}
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_mindustry_world_Block_hasBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Block_hasBuilding_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_75;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_ShortChunkSaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_3(ctx);
		auto proxy = (mindustry_io_versions_ShortChunkSaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_3 *) gcAlloc(ctx, &class_mindustry_io_versions_ShortChunkSaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_3);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_io_versions_ShortChunkSaveVersion_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_versions_ShortChunkSaveVersion_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(132);
	goto label_76;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(130);
	frame[19].o = sp[0].o;
	LINE_NUMBER(131);
	if (((jint)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_preview) == 0) {
		clinit_java_io_IOException(ctx);
		sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
		sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[8].o));
		sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Failed to read tile entity of block: \u0001"_j.string, 1, sp[1].o);
		init_java_io_IOException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[19].o));
		throwException(ctx, sp[0].o);
	}
	goto label_76;
	}
label_75:;
	{
	LINE_NUMBER(135);
	((func_mindustry_io_versions_ShortChunkSaveVersion_skipLegacyShortChunk_java_io_DataInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_versions_ShortChunkSaveVersion_skipLegacyShortChunk_java_io_DataInput])(ctx, (frame[0].o), (frame[1].o));
	}
label_76:;
	{
	LINE_NUMBER(138);
	((func_mindustry_world_WorldContext_onReadBuilding) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_onReadBuilding, (frame[3].o)))(ctx, (frame[3].o));
	goto label_73;
	}
label_71:;
	{
	LINE_NUMBER(140);
	if ((frame[13].i) != 0) goto label_78;
	}
	INST_ILOAD(14);
	if ((--sp)->i == 0) goto label_79;
label_78:;
	{
	LINE_NUMBER(141);
	if ((frame[13].i) == 0) goto label_73;
	}
	{
	LINE_NUMBER(142);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(144);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_data = temp0;
	goto label_73;
	}
label_79:;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[19].i = temp0;
	LINE_NUMBER(149);
	frame[20].i = ((frame[7].i) + (jint(1)));
	}
label_83:;
	{
	if ((frame[20].i) >= (((frame[7].i) + (jint(1))) + (frame[19].i))) goto label_84;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[20].i));
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(149);
	INST_IINC(20, 1);
	goto label_83;
	}
label_84:;
	{
	LINE_NUMBER(153);
	frame[7].i = ((frame[7].i) + (frame[19].i));
	}
label_73:;
	{
	LINE_NUMBER(79);
	INST_IINC(7, 1);
	goto label_33;
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(157);
	if ((frame[6].i) != 0) goto label_87;
	}
	{
	((func_mindustry_world_WorldContext_end) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_end, (frame[3].o)))(ctx, (frame[3].o));
	goto label_87;
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ASTORE(21);
	popExceptionFrame(frameRef);
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_88;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_mindustry_world_WorldContext_end) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_end, sp[0].o))(ctx, sp[0].o);
label_88:;
	{
	LINE_NUMBER(158);
	throwException(ctx, (frame[21].o));	}
label_87:;
	LINE_NUMBER(159);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_versions_ShortChunkSaveVersion_lambda$readMap$0_mindustry_world_Tile_arc_util_io_Reads_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/ShortChunkSaveVersion:lambda$readMap$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_versions_ShortChunkSaveVersion(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_readAll_arc_util_io_Reads_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_readAll_arc_util_io_Reads_byte])(ctx, sp[0].o, (frame[1].o), (frame[3].i));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_versions_ShortChunkSaveVersion_lambda$readWorldEntities$0_Array1_arc_func_Prov_arc_util_io_Reads_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/ShortChunkSaveVersion:lambda$readWorldEntities$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_versions_ShortChunkSaveVersion(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(27);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(28);
	((func_arc_util_io_Reads_skip_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_skip_int])(ctx, (frame[1].o), ((frame[2].i) - (jint(1))));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o));
	LINE_NUMBER(35);
	SM_mindustry_entities_EntityGroup_checkNextId_int(ctx, (frame[4].i));
	LINE_NUMBER(36);
	((func_mindustry_gen_Entityc_id_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_int, (frame[5].o)))(ctx, (frame[5].o), (frame[4].i));
	LINE_NUMBER(37);
	((func_mindustry_gen_Entityc_read_arc_util_io_Reads) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_read_arc_util_io_Reads, (frame[5].o)))(ctx, (frame[5].o), (frame[1].o));
	LINE_NUMBER(38);
	((func_mindustry_gen_Entityc_add) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_add, (frame[5].o)))(ctx, (frame[5].o));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_versions_ShortChunkSaveVersion[] {
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
	(void *) M_mindustry_io_SaveFileReader_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner,
	(void *) M_mindustry_io_SaveFileReader_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner,
	(void *) M_mindustry_io_SaveFileReader_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner,
	(void *) M_mindustry_io_SaveFileReader_readChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int,
	(void *) M_mindustry_io_SaveFileReader_readChunkReads_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int,
	(void *) M_mindustry_io_SaveFileReader_skipChunk_java_io_DataInput,
	(void *) M_mindustry_io_SaveFileReader_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int,
	(void *) M_mindustry_io_SaveFileReader_skipLegacyShortChunk_java_io_DataInput,
	(void *) M_mindustry_io_SaveFileReader_writeStringMap_java_io_DataOutput_arc_struct_ObjectMap,
	(void *) M_mindustry_io_SaveFileReader_readStringMap_java_io_DataInput_R_arc_struct_StringMap,
	(void *) M_mindustry_io_SaveVersion_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_write_java_io_DataOutputStream_mindustry_io_SaveOptions,
	(void *) M_mindustry_io_SaveVersion_getMeta_java_io_DataInput_R_mindustry_io_SaveMeta,
	(void *) M_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean,
	(void *) M_mindustry_io_SaveVersion_readCustomChunks_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_writeMeta_java_io_DataOutput_arc_struct_StringMap,
	(void *) M_mindustry_io_SaveVersion_readMeta_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_writeMap_java_io_DataOutput,
	(void *) M_mindustry_io_versions_ShortChunkSaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_writeTeamBlocks_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput_arc_func_Boolf,
	(void *) M_mindustry_io_SaveVersion_writeEntity_mindustry_gen_Entityc_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeEntityMapping_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeEntities_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeMarkers_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_readMarkers_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_readTeamBlocks_java_io_DataInput,
	(void *) M_mindustry_io_versions_ShortChunkSaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_readEntityMapping_java_io_DataInput_R_Array1_arc_func_Prov,
	(void *) M_mindustry_io_SaveVersion_readEntities_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_writeDataPatches_java_io_DataOutput_boolean,
	(void *) M_mindustry_io_SaveVersion_readContentHeader_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_writeContentHeader_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$write$2_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$write$1_mindustry_io_SaveOptions_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$write$0_mindustry_io_SaveOptions_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$read$3_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_lambda$read$2_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_lambda$read$1_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_lambda$read$0_mindustry_io_SaveReadState_java_io_DataInput,
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
	{ "readRegion", "(Ljava/lang/String;Ljava/io/DataInput;Larc/util/io/CounterInputStream;Lmindustry/io/SaveFileReader$IORunner;)V" },
	{ "writeRegion", "(Ljava/lang/String;Ljava/io/DataOutput;Lmindustry/io/SaveFileReader$IORunner;)V" },
	{ "writeChunk", "(Ljava/io/DataOutput;Lmindustry/io/SaveFileReader$IORunner;)V" },
	{ "readChunk", "(Ljava/io/DataInput;Lmindustry/io/SaveFileReader$IORunnerLength;)I" },
	{ "readChunkReads", "(Ljava/io/DataInput;Lmindustry/io/SaveFileReader$IORunnerLength;)I" },
	{ "skipChunk", "(Ljava/io/DataInput;)V" },
	{ "readLegacyShortChunk", "(Ljava/io/DataInput;Lmindustry/io/SaveFileReader$IORunnerLength;)I" },
	{ "skipLegacyShortChunk", "(Ljava/io/DataInput;)V" },
	{ "writeStringMap", "(Ljava/io/DataOutput;Larc/struct/ObjectMap;)V" },
	{ "readStringMap", "(Ljava/io/DataInput;)Larc/struct/StringMap;" },
	{ "read", "(Ljava/io/DataInputStream;Larc/util/io/CounterInputStream;Lmindustry/io/SaveReadState;)V" },
	{ "write", "(Ljava/io/DataOutputStream;Lmindustry/io/SaveOptions;)V" },
	{ "getMeta", "(Ljava/io/DataInput;)Lmindustry/io/SaveMeta;" },
	{ "writeCustomChunks", "(Ljava/io/DataOutput;Z)V" },
	{ "readCustomChunks", "(Ljava/io/DataInput;)V" },
	{ "writeMeta", "(Ljava/io/DataOutput;Larc/struct/StringMap;)V" },
	{ "readMeta", "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V" },
	{ "readRules", "(Lmindustry/io/SaveReadState;)V" },
	{ "writeMap", "(Ljava/io/DataOutput;)V" },
	{ "readMap", "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V" },
	{ "writeTeamBlocks", "(Ljava/io/DataOutput;)V" },
	{ "writeWorldEntities", "(Ljava/io/DataOutput;)V" },
	{ "writeWorldEntities", "(Ljava/io/DataOutput;Larc/func/Boolf;)V" },
	{ "writeEntity", "(Lmindustry/gen/Entityc;Ljava/io/DataOutput;)V" },
	{ "writeEntityMapping", "(Ljava/io/DataOutput;)V" },
	{ "writeEntities", "(Ljava/io/DataOutput;)V" },
	{ "writeMarkers", "(Ljava/io/DataOutput;)V" },
	{ "readMarkers", "(Ljava/io/DataInput;)V" },
	{ "readTeamBlocks", "(Ljava/io/DataInput;)V" },
	{ "readWorldEntities", "(Ljava/io/DataInput;[Larc/func/Prov;Lmindustry/io/SaveReadState;)V" },
	{ "readEntityMapping", "(Ljava/io/DataInput;)[Larc/func/Prov;" },
	{ "readEntities", "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V" },
	{ "readDataPatches", "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V" },
	{ "writeDataPatches", "(Ljava/io/DataOutput;Z)V" },
	{ "readContentHeader", "(Ljava/io/DataInput;)V" },
	{ "writeContentHeader", "(Ljava/io/DataOutput;)V" },
	{ "lambda$write$2", "(Ljava/io/DataOutput;)V" },
	{ "lambda$write$1", "(Lmindustry/io/SaveOptions;Ljava/io/DataOutput;)V" },
	{ "lambda$write$0", "(Lmindustry/io/SaveOptions;Ljava/io/DataOutput;)V" },
	{ "lambda$read$3", "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V" },
	{ "lambda$read$2", "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V" },
	{ "lambda$read$1", "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V" },
	{ "lambda$read$0", "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_versions_ShortChunkSaveVersion_int, 0, "(I)V", 1 },
	{ "readWorldEntities", (intptr_t) M_mindustry_io_versions_ShortChunkSaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState, VTABLE_mindustry_io_versions_ShortChunkSaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState, "(Ljava/io/DataInput;[Larc/func/Prov;Lmindustry/io/SaveReadState;)V", 1 },
	{ "readMap", (intptr_t) M_mindustry_io_versions_ShortChunkSaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState, VTABLE_mindustry_io_versions_ShortChunkSaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState, "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V", 1 },
	{ "lambda$readMap$0", (intptr_t) SM_mindustry_io_versions_ShortChunkSaveVersion_lambda$readMap$0_mindustry_world_Tile_arc_util_io_Reads_int, 0, "(Lmindustry/world/Tile;Larc/util/io/Reads;I)V", 4106 },
	{ "lambda$readWorldEntities$0", (intptr_t) SM_mindustry_io_versions_ShortChunkSaveVersion_lambda$readWorldEntities$0_Array1_arc_func_Prov_arc_util_io_Reads_int, 0, "([Larc/func/Prov;Larc/util/io/Reads;I)V", 4106 },
};

Class class_mindustry_io_versions_ShortChunkSaveVersion{
		.nativeName = (intptr_t) "mindustry/io/versions/ShortChunkSaveVersion",
		.parentClass = (intptr_t) &class_mindustry_io_SaveVersion,
		.size = sizeof(mindustry_io_versions_ShortChunkSaveVersion),
		.classVtable = (intptr_t) vtable_mindustry_io_versions_ShortChunkSaveVersion,
		.staticInitializer = (intptr_t) clinit_mindustry_io_versions_ShortChunkSaveVersion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_versions_ShortChunkSaveVersion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 54,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_versions_ShortChunkSaveVersion = registerClass(&class_mindustry_io_versions_ShortChunkSaveVersion);

}
