#include "mindustry/io/versions/LegacySaveVersion.h"
#include "mindustry/io/SaveReadState.h"
#include "mindustry/world/Block.h"
#include "mindustry/io/versions/ShortChunkSaveVersion.h"
#include "java/lang/String.h"
#include "mindustry/world/modules/BlockModule.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/world/WorldContext.h"
#include "mindustry/io/SaveFileReader.h"
#include "arc/struct/Seq.h"
#include "java/io/IOException.h"
#include "mindustry/world/Tile.h"
#include "arc/util/Pack.h"
#include "mindustry/world/modules/PowerModule.h"
#include "java/lang/Throwable.h"
#include "mindustry/io/SaveFileReader_IORunnerLength.h"
#include "mindustry/io/versions/LegacySaveVersion.h"
#include "java/io/DataInput.h"
#include "mindustry/io/versions/LegacySaveVersion_invoke_mindustry_io_SaveFileReader_IORunnerLength_1.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveVersion.h"
#include "mindustry/io/versions/LegacyRegionSaveVersion.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/world/modules/LiquidModule.h"

extern "C" {


void mark_mindustry_io_versions_LegacySaveVersion(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_io_versions_LegacyRegionSaveVersion(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_io_versions_LegacySaveVersion *) object;
}

void clinit_mindustry_io_versions_LegacySaveVersion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_io_versions_LegacyRegionSaveVersion(ctx);
}

void init_mindustry_io_versions_LegacySaveVersion_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/LegacySaveVersion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_versions_LegacySaveVersion(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(16);
	init_mindustry_io_versions_LegacyRegionSaveVersion_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_versions_LegacySaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/LegacySaveVersion:readMap", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_context;
	frame[3].o = sp[0].o;
	LINE_NUMBER(22);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(23);
	jint temp1 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp1;
	LINE_NUMBER(25);
	jint temp2 = (jint)((func_mindustry_world_WorldContext_isGenerating_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_isGenerating_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	frame[6].i = temp2;
	LINE_NUMBER(27);
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
	LINE_NUMBER(29);
	((func_mindustry_world_WorldContext_resize_int_int) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_resize_int_int, (frame[3].o)))(ctx, (frame[3].o), (frame[4].i), (frame[5].i));
	LINE_NUMBER(32);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	if ((frame[7].i) >= ((frame[4].i) * (frame[5].i))) goto label_17;
	}
	{
	LINE_NUMBER(33);
	frame[8].i = ((frame[7].i) % (frame[4].i));
	frame[9].i = ((frame[7].i) / (frame[4].i));
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[10].i = temp0;
	LINE_NUMBER(35);
	jint temp1 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[11].i = temp1;
	LINE_NUMBER(36);
	jint temp2 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[12].i = temp2;
	LINE_NUMBER(37);
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
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[8].i), (frame[9].i), (frame[10].i), (frame[11].i), (jint(0)));
	LINE_NUMBER(41);
	frame[13].i = ((frame[7].i) + (jint(1)));
	}
label_26:;
	{
	if ((frame[13].i) >= (((frame[7].i) + (jint(1))) + (frame[12].i))) goto label_27;
	}
	{
	LINE_NUMBER(42);
	frame[14].i = ((frame[13].i) % (frame[4].i));
	frame[15].i = ((frame[13].i) / (frame[4].i));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[14].i), (frame[15].i), (frame[10].i), (frame[11].i), (jint(0)));
	LINE_NUMBER(41);
	INST_IINC(13, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(46);
	frame[7].i = ((frame[7].i) + (frame[12].i));
	LINE_NUMBER(32);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(50);
	frame[7].i = (jint(0));
	}
label_33:;
	{
	if ((frame[7].i) >= ((frame[4].i) * (frame[5].i))) goto label_5;
	}
	{
	LINE_NUMBER(51);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp0);
	frame[8].o = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[7].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(53);
	if ((frame[8].o) != nullptr) goto label_37;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	INST_ASTORE(8);
label_37:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	if (sp[0].o == nullptr) goto label_38;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (sp[0].o == (frame[8].o)) goto label_39;
	}
	{
	sp[0].o = frame[8].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_38;
	}
label_39:;
	INST_ICONST(1);
	goto label_40;
label_38:;
	INST_ICONST(0);
label_40:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(59);
	if ((frame[10].i) != 0) goto label_42;
	}
	{
	LINE_NUMBER(60);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	if (sp[0].o == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(62);
	if (((jint)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_preview) != 0) goto label_46;
	}
	{
	sp[0].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_allBuildings;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_46:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_enabled = (jint(1));
	}
label_42:;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)((func_mindustry_world_Block_hasBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Block_hasBuilding_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_47;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_LegacySaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_1(ctx);
		auto proxy = (mindustry_io_versions_LegacySaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_1 *) gcAlloc(ctx, &class_mindustry_io_versions_LegacySaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_io_versions_LegacySaveVersion_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_versions_LegacySaveVersion_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(91);
	goto label_48;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(89);
	frame[11].o = sp[0].o;
	LINE_NUMBER(90);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[8].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Failed to read tile entity of block: \u0001"_j.string, 1, sp[1].o);
	init_java_io_IOException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[11].o));
	throwException(ctx, sp[0].o);	}
label_48:;
	{
	LINE_NUMBER(93);
	((func_mindustry_world_WorldContext_onReadBuilding) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_onReadBuilding, (frame[3].o)))(ctx, (frame[3].o));
	goto label_50;
	}
label_47:;
	{
	LINE_NUMBER(95);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[11].i = temp0;
	LINE_NUMBER(98);
	sp[0].o = frame[8].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_52;
	}
	{
	LINE_NUMBER(99);
	frame[12].i = ((frame[7].i) + (jint(1)));
	}
label_54:;
	{
	if ((frame[12].i) >= (((frame[7].i) + (jint(1))) + (frame[11].i))) goto label_52;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[12].i));
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(99);
	INST_IINC(12, 1);
	goto label_54;
	}
label_52:;
	{
	LINE_NUMBER(104);
	frame[7].i = ((frame[7].i) + (frame[11].i));
	}
label_50:;
	{
	LINE_NUMBER(50);
	INST_IINC(7, 1);
	goto label_33;
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(108);
	if ((frame[6].i) != 0) goto label_57;
	}
	{
	((func_mindustry_world_WorldContext_end) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_end, (frame[3].o)))(ctx, (frame[3].o));
	goto label_57;
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ASTORE(16);
	popExceptionFrame(frameRef);
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_58;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_mindustry_world_WorldContext_end) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_end, sp[0].o))(ctx, sp[0].o);
label_58:;
	{
	LINE_NUMBER(109);
	throwException(ctx, (frame[16].o));	}
label_57:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_versions_LegacySaveVersion_readLegacyEntities_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/LegacySaveVersion:readLegacyEntities", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(115);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(117);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(119);
	((func_mindustry_io_versions_LegacySaveVersion_skipLegacyShortChunk_java_io_DataInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_versions_LegacySaveVersion_skipLegacyShortChunk_java_io_DataInput])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(117);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(115);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_versions_LegacySaveVersion_lambda$readMap$0_mindustry_world_Tile_java_io_DataInput_arc_util_io_Reads_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/LegacySaveVersion:lambda$readMap$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_versions_LegacySaveVersion(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(70);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp1 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = (jfloat(temp1));
	LINE_NUMBER(73);
	jint temp2 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp2;
	LINE_NUMBER(74);
	jint temp3 = (jint)SM_arc_util_Pack_leftByte_byte_R_byte(ctx, (frame[5].i));
	if (temp3 != (8)) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ILOAD(5);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_arc_util_Pack_leftByte_byte_R_byte(ctx, sp[0].i);
	sp++;
label_5:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(75);
	jint temp0 = (jint)SM_arc_util_Pack_rightByte_byte_R_byte(ctx, (frame[5].i));
	frame[7].i = temp0;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, (frame[6].i));
	((func_mindustry_world_Tile_setTeam_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setTeam_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation = (frame[7].i);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	((func_mindustry_world_modules_ItemModule_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_read_arc_util_io_Reads_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	((func_mindustry_world_modules_PowerModule_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_PowerModule_read_arc_util_io_Reads_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_11:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_read_arc_util_io_Reads_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(84);
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_read_arc_util_io_Reads_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_read_arc_util_io_Reads_byte])(ctx, sp[0].o, (frame[2].o), (frame[4].i));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_versions_LegacySaveVersion[] {
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
	(void *) M_mindustry_io_versions_LegacyRegionSaveVersion_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_write_java_io_DataOutputStream_mindustry_io_SaveOptions,
	(void *) M_mindustry_io_SaveVersion_getMeta_java_io_DataInput_R_mindustry_io_SaveMeta,
	(void *) M_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean,
	(void *) M_mindustry_io_SaveVersion_readCustomChunks_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_writeMeta_java_io_DataOutput_arc_struct_StringMap,
	(void *) M_mindustry_io_SaveVersion_readMeta_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_writeMap_java_io_DataOutput,
	(void *) M_mindustry_io_versions_LegacySaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState,
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
	(void *) M_mindustry_io_versions_LegacyRegionSaveVersion_lambda$read$2_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_versions_LegacyRegionSaveVersion_lambda$read$1_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_versions_LegacyRegionSaveVersion_lambda$read$0_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_versions_LegacySaveVersion_readLegacyEntities_java_io_DataInput,
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
	{ "readLegacyEntities", "(Ljava/io/DataInput;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_versions_LegacySaveVersion_int, 0, "(I)V", 1 },
	{ "readMap", (intptr_t) M_mindustry_io_versions_LegacySaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState, VTABLE_mindustry_io_versions_LegacySaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState, "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V", 1 },
	{ "readLegacyEntities", (intptr_t) M_mindustry_io_versions_LegacySaveVersion_readLegacyEntities_java_io_DataInput, VTABLE_mindustry_io_versions_LegacySaveVersion_readLegacyEntities_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "lambda$readMap$0", (intptr_t) SM_mindustry_io_versions_LegacySaveVersion_lambda$readMap$0_mindustry_world_Tile_java_io_DataInput_arc_util_io_Reads_int, 0, "(Lmindustry/world/Tile;Ljava/io/DataInput;Larc/util/io/Reads;I)V", 4106 },
};

Class class_mindustry_io_versions_LegacySaveVersion{
		.nativeName = (intptr_t) "mindustry/io/versions/LegacySaveVersion",
		.parentClass = (intptr_t) &class_mindustry_io_versions_LegacyRegionSaveVersion,
		.size = sizeof(mindustry_io_versions_LegacySaveVersion),
		.classVtable = (intptr_t) vtable_mindustry_io_versions_LegacySaveVersion,
		.staticInitializer = (intptr_t) clinit_mindustry_io_versions_LegacySaveVersion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_versions_LegacySaveVersion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 55,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_versions_LegacySaveVersion = registerClass(&class_mindustry_io_versions_LegacySaveVersion);

}
