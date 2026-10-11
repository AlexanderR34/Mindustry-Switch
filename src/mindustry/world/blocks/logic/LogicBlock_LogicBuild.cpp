#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/world/blocks/logic/LogicBlock.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/logic/Ranged.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "java/util/zip/InflaterInputStream.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "java/io/DataInputStream.h"
#include "mindustry/logic/LWritable.h"
#include "arc/Graphics_Cursor.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_arc_func_Cons_4.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_arc_func_Cons_5.h"
#include "mindustry/io/TypeIO.h"
#include "java/lang/Double.h"
#include "arc/util/io/Writes.h"
#include "java/nio/charset/Charset.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "arc/struct/FloatSeq.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "java/io/IOException.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Number.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicLink.h"
#include "java/io/ByteArrayInputStream.h"
#include "mindustry/ui/Styles.h"
#include "arc/util/io/Reads.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/logic/LReadable.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/logic/LExecutor_WaitI.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Throwable.h"
#include "mindustry/world/blocks/logic/LogicBlock.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/struct/Bits.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LAssembler.h"
#include "arc/util/Structs.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/io/TypeIO_Boxed.h"
#include "java/lang/NumberFormatException.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_arc_func_Prov_1.h"
#include "mindustry/logic/LogicDialog.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_java_lang_Runnable_2.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_java_lang_Runnable_3.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "java/lang/Float.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_arc_func_Cons_3.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/logic/LExecutor.h"
#include "java/io/InputStream.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_arc_func_Boolf_8.h"
#include "java/io/FilterInputStream.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_arc_func_Boolf_7.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_arc_func_Boolf_6.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild_invoke_arc_func_Boolf_9.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/gen/Icon.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_world_blocks_logic_LogicBlock$LogicBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_gen_Building(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_logic_LogicBlock$LogicBuild *) object;
	if (self->F_code)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_code)->clazz)->markFunction)((jobject) self->F_code, mark, depth + 1);
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
	if (self->F_links)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_links)->clazz)->markFunction)((jobject) self->F_links, mark, depth + 1);
	if (self->F_linkMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_linkMap)->clazz)->markFunction)((jobject) self->F_linkMap, mark, depth + 1);
	if (self->F_tag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tag)->clazz)->markFunction)((jobject) self->F_tag, mark, depth + 1);
	if (self->F_linksVar)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_linksVar)->clazz)->markFunction)((jobject) self->F_linksVar, mark, depth + 1);
	if (self->F_loadBlock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadBlock)->clazz)->markFunction)((jobject) self->F_loadBlock, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

static inline void ensureLogicBuildFields(jcontext ctx, jobject self) {
	if (!self) return;
	auto self_build = (mindustry_world_blocks_logic_LogicBlock$LogicBuild *) self;
	if (!self_build->F_this$0 && self_build->parent.F_block) {
		self_build->F_this$0 = self_build->parent.F_block;
	}
	if (!self_build->F_code) {
		self_build->F_code = (jref)createStringLiteral(ctx, u8""_j);
	}
	if (!self_build->F_executor) {
		clinit_mindustry_logic_LExecutor(ctx);
		self_build->F_executor = (jref)gcAlloc(ctx, &class_mindustry_logic_LExecutor);
		init_mindustry_logic_LExecutor(ctx, (jobject)self_build->F_executor);
		if (self_build->F_this$0) {
			((mindustry_logic_LExecutor *) self_build->F_executor)->F_privileged = ((jint)((mindustry_world_Block *) self_build->F_this$0)->F_privileged);
		}
		((mindustry_logic_LExecutor *) self_build->F_executor)->F_build = (jref) self;
	}
	if (!self_build->F_links) {
		clinit_arc_struct_Seq(ctx);
		self_build->F_links = (jref)gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq(ctx, (jobject)self_build->F_links);
	}
}

void init_mindustry_world_blocks_logic_LogicBlock$LogicBuild_mindustry_world_blocks_logic_LogicBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(254);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(256);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_code = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LExecutor(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor);
	init_mindustry_logic_LExecutor(ctx, sp[1].o);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_executor = (jref) sp[1].o;
	LINE_NUMBER(258);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_accumulator = (jfloat(0));
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_links = (jref) sp[1].o;
	LINE_NUMBER(261);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_checkedDuplicates = (jint(0));
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_ipt = ((jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[1].o))->F_instructionsPerTick);
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_privileged = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_privileged);
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readCompressed_Array1_byte_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:readCompressed", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	ensureLogicBuildFields(ctx, (frame[0].o));
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(278);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[2].o, (frame[1].o));
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(281);
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	frame[5].i = temp1;
	LINE_NUMBER(282);
	if ((frame[5].i) <= (jint(102400))) goto label_14;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Malformed logic data! Length: \u0001"_j.string, 1, boxInteger(ctx, (frame[5].i)));
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(284);
	((func_java_io_DataInputStream_readFully_Array1_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte])(ctx, (frame[3].o), (frame[6].o));
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(288);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (6000));
	frame[7].i = temp1;
	LINE_NUMBER(290);
	if ((frame[4].i) != 0) goto label_19;
	}
	{
	LINE_NUMBER(293);
	frame[8].i = (jint(0));
	}
label_21:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_22;
	}
	{
	LINE_NUMBER(294);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	LINE_NUMBER(293);
	INST_IINC(8, 1);
	goto label_21;
	}
label_22:;
	goto label_25;
label_19:;
	{
	LINE_NUMBER(297);
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicBlock_usedBuildings;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(298);
	frame[8].i = (jint(0));
	}
label_27:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_25;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[3].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(300);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[3].o));
	frame[10].i = temp0;
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[3].o));
	frame[11].i = temp1;
	LINE_NUMBER(302);
	if ((frame[2].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(303);
	jint temp0 = frame[10].i;
	jint temp1 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_tileX_R_int])(ctx, (frame[0].o));
	frame[10].i = (jshort((temp0 + temp1)));
	LINE_NUMBER(304);
	jint temp2 = frame[11].i;
	jint temp3 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_tileY_R_int])(ctx, (frame[0].o));
	frame[11].i = (jshort((temp2 + temp3)));
	}
label_32:;
	{
	LINE_NUMBER(307);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[10].i), (frame[11].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(309);
	if ((frame[12].o) == nullptr) goto label_36;
	}
	{
	LINE_NUMBER(310);
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicBlock_usedBuildings;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_id));
	if (temp0 != 0) goto label_38;
	}
	LINE_NUMBER(311);
	goto label_40;
label_38:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_block;
	sp[0].o = (jobject)SM_mindustry_world_blocks_logic_LogicBlock_getLinkName_mindustry_world_Block_R_java_lang_String(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(314);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[9].o), (frame[13].o));
	if (temp0 != 0) goto label_36;
	}
	{
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_block;
	sp[0].o = (jobject)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_findLinkName_mindustry_world_Block_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_findLinkName_mindustry_world_Block_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	clinit_mindustry_world_blocks_logic_LogicBlock$LogicLink(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink);
	init_mindustry_world_blocks_logic_LogicBlock$LogicLink_int_int_java_lang_String_boolean(ctx, sp[1].o, (frame[10].i), (frame[11].i), (frame[9].o), (jint(0)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_40:;
	{
	LINE_NUMBER(298);
	INST_IINC(8, 1);
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = frame[6].o;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_charset;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(324);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(278);
	INST_ASTORE(4);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_43;
label_6:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[4].o), (frame[5].o));
	}
label_43:;
	INST_ALOAD(4);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(326);
	goto label_44;
label_10:;
	LINE_NUMBER(324);
	INST_ASTORE(3);
label_44:;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_findLinkName_mindustry_world_Block_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:findLinkName", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)SM_mindustry_world_blocks_logic_LogicBlock_getLinkName_mindustry_world_Block_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(331);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	init_arc_struct_Bits_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[3].o = sp[0].o;
	LINE_NUMBER(332);
	frame[4].i = (jint(1));
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o));
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[6].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[6].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	frame[7].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(339);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(340);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[3].o), (frame[8].i));
	LINE_NUMBER(341);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[8].i), (frame[4].i));
	frame[4].i = temp1;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(344);
	goto label_11;
label_2:;
	LINE_NUMBER(342);
	INST_ASTORE(8);
label_11:;
	LINE_NUMBER(346);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(348);
	frame[5].i = (jint(0));
	LINE_NUMBER(350);
	frame[6].i = (jint(1));
	}
label_16:;
	{
	if ((frame[6].i) >= ((frame[4].i) + (jint(2)))) goto label_17;
	}
	{
	LINE_NUMBER(351);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[3].o), (frame[6].i));
	if (temp0 != 0) goto label_19;
	}
	{
	LINE_NUMBER(352);
	frame[5].i = (frame[6].i);
	LINE_NUMBER(353);
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(350);
	INST_IINC(6, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, (frame[2].o), boxInteger(ctx, (frame[5].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:updateCode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(361);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String_boolean_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String_boolean_arc_func_Cons])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jobject(nullptr)));
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String_boolean_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:updateCode", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(365);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_linkMap = (jref) (jobject(nullptr));
	LINE_NUMBER(366);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(367);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_code = (jref) (frame[1].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(371);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_mindustry_logic_LAssembler_assemble_java_lang_String_boolean_R_mindustry_logic_LAssembler(ctx, sp[0].o, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_privileged));
	frame[4].o = sp[0].o;
	LINE_NUMBER(374);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o));
	LINE_NUMBER(375);
	sp[0].o = frame[6].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	sp[2].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[2].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[6].o)))->F_y));
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK(sp[0].o))->F_valid = temp0;
	LINE_NUMBER(376);
	if (((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[6].o)))->F_valid) == 0) goto label_13;
	}
	{
	LINE_NUMBER(377);
	sp[0].o = frame[6].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[6].o)))->F_name;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	sp[3].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[3].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[6].o)))->F_y));
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK(sp[0].o))->F_logicVar = (jref) sp[1].o;
	}
label_13:;
	LINE_NUMBER(379);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_5);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_gen_Building, temp0);
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_links = (jref) sp[1].o;
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_linkIds;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(385);
	frame[5].i = (jint(0));
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o));
	LINE_NUMBER(387);
	if (((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[7].o)))->F_valid) == 0) goto label_21;
	}
	{
	LINE_NUMBER(388);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[7].o)))->F_y));
	frame[8].o = sp[0].o;
	LINE_NUMBER(389);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[8].o);
	LINE_NUMBER(390);
	if ((frame[8].o) == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_linkIds;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_id));
	}
label_21:;
	LINE_NUMBER(392);
	goto label_18;
label_19:;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@links"_j));
	sp[3].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[3].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[3].o))->F_links;
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (((jarray) nullCheck(ctx, sp[3].o))->length));
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_linksVar = (jref) sp[1].o;
	LINE_NUMBER(395);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ipt"_j));
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[2].o))->F_instructionsPerTick));
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(397);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(399);
	if ((frame[2].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_unit;
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval;
	frame[6].o = sp[0].o;
	LINE_NUMBER(402);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_vars;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_31:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_28;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(403);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[10].o)))->F_constant) != 0) goto label_33;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[10].o)))->F_name;
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(405);
	if ((frame[11].o) == nullptr) goto label_33;
	}
	{
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[11].o)))->F_constant) != 0) goto label_33;
	}
	{
	LINE_NUMBER(406);
	((func_mindustry_logic_LVar_set_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_logic_LVar_set_mindustry_logic_LVar])(ctx, (frame[11].o), (frame[10].o));
	}
label_33:;
	{
	LINE_NUMBER(402);
	INST_IINC(9, 1);
	goto label_31;
	}
label_28:;
	{
	LINE_NUMBER(413);
	if ((frame[3].o) == nullptr) goto label_37;
	}
	{
	LINE_NUMBER(414);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(416);
	if ((frame[6].o) != nullptr) goto label_37;
	}
	{
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@unit"_j))));
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@unit"_j))));
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval;
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_gen_Unit)) == 0) goto label_37;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[8].o)));
	LINE_NUMBER(417);
	frame[6].o = (frame[7].o);
	}
label_37:;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@this"_j))));
	((func_mindustry_logic_LVar_setconst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setconst_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(422);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@thisx"_j));
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(423);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@thisy"_j));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp1);
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	((func_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_unit;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval = (jref) (frame[6].o);
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_unit;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(431);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(428);
	frame[4].o = sp[0].o;
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[1].o))->F_code = (jref) sp[2].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)SM_mindustry_logic_LAssembler_assemble_java_lang_String_boolean_R_mindustry_logic_LAssembler(ctx, sp[2].o, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_privileged));
	((func_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	LINE_NUMBER(433);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_collide_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:collide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destructible) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_displayable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:displayable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:damage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destructible) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(449);
	M_mindustry_gen_Building_damage_float(ctx, (frame[0].o), (frame[1].f));
	}
label_2:;
	LINE_NUMBER(451);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_removeFromProximity(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:removeFromProximity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	M_mindustry_gen_Building_removeFromProximity(ctx, (frame[0].o));
	LINE_NUMBER(457);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_links;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(458);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_enabled) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_lastDisabler;
	if (sp[0].o != (frame[0].o)) goto label_5;
	}
	{
	LINE_NUMBER(459);
	((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_enabled = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(457);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(462);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_getCursor_R_arc_Graphics$Cursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:getCursor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	(sp++)->o = SF_arc_Graphics$Cursor$SystemCursor_arrow;
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_canPickup_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:canPickup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_range_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:range", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[0].o))->F_range);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:updateTile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	ensureLogicBuildFields(ctx, (frame[0].o));
	{
	LINE_NUMBER(482);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_checkReadCode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_checkReadCode])(ctx, (frame[0].o));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(486);
	if (((jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_checkedDuplicates) != 0) goto label_3;
	}
	{
	LINE_NUMBER(487);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_checkedDuplicates = (jint(1));
	LINE_NUMBER(488);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(489);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(490);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o));
	LINE_NUMBER(491);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_y));
	frame[5].o = sp[0].o;
	LINE_NUMBER(492);
	if ((frame[5].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(493);
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_id));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[4].o));
	}
label_12:;
	LINE_NUMBER(497);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	jint temp0 = (jint)((func_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean])(ctx, sp[0].o, (frame[2].o));
	}
label_3:;
	{
	LINE_NUMBER(502);
	frame[1].i = (jint(0));
	frame[2].i = (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(504);
	if ((frame[2].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(505);
	frame[2].i = (jint(0));
	LINE_NUMBER(507);
	frame[3].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_21;
	}
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o));
	LINE_NUMBER(510);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_y));
	frame[5].o = sp[0].o;
	LINE_NUMBER(512);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(513);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_lastBuild;
	if (sp[0].o != nullptr) goto label_26;
	}
	INST_ACONST_NULL();
	goto label_27;
label_26:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_lastBuild;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	sp += 1;
	}
label_27:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_lastBuild;
	if (sp[0].o != nullptr) goto label_29;
	}
	{
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_lastBuild = (jref) (frame[5].o);
	}
label_29:;
	{
	LINE_NUMBER(515);
	if ((frame[6].i) != ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_valid)) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_lastBuild;
	if (sp[0].o == (frame[5].o)) goto label_31;
	}
label_30:;
	{
	LINE_NUMBER(516);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_lastBuild = (jref) (frame[5].o);
	LINE_NUMBER(517);
	frame[1].i = (jint(1));
	LINE_NUMBER(518);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_valid = (frame[6].i);
	LINE_NUMBER(520);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	((func_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(522);
	if ((frame[6].i) == 0) goto label_31;
	}
	{
	LINE_NUMBER(524);
	if ((frame[7].o) == nullptr) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	if (sp[0].o != (frame[7].o)) goto label_38;
	}
label_37:;
	INST_ALOAD(7);
	if ((--sp)->o != nullptr) goto label_39;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_name;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	LINE_NUMBER(526);
	sp[1].o = (jobject)SM_mindustry_world_blocks_logic_LogicBlock_getLinkName_mindustry_world_Block_R_java_lang_String(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_39;
	}
label_38:;
	{
	LINE_NUMBER(527);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_logicVar = (jref) (jobject(nullptr));
	LINE_NUMBER(528);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(529);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	sp[1].o = (jobject)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_findLinkName_mindustry_world_Block_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_findLinkName_mindustry_world_Block_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	}
label_39:;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_6);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(540);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	((func_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[5].o));
	LINE_NUMBER(543);
	frame[2].i = (jint(1));
	LINE_NUMBER(544);
	goto label_21;
	}
label_31:;
	{
	LINE_NUMBER(507);
	INST_IINC(3, 1);
	goto label_20;
	}
label_21:;
	goto label_16;
label_17:;
	{
	LINE_NUMBER(550);
	if ((frame[1].i) == 0) goto label_46;
	}
	{
	LINE_NUMBER(551);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateLinks) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateLinks])(ctx, (frame[0].o));
	}
label_46:;
	{
	LINE_NUMBER(554);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableWorldProcessors) == 0) goto label_48;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) == 0) goto label_48;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_48:;
	{
	LINE_NUMBER(556);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_49;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	jint temp0 = (jint)((func_mindustry_logic_LExecutor_initialized_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor_initialized_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_49;
	}
	{
	LINE_NUMBER(557);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, (jfloat((((jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[0].o))->F_maxInstructionScale) * ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_ipt)))), -1)) <= 0) goto label_51;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_accumulator = (jfloat((((jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[1].o))->F_maxInstructionScale) * ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_ipt))));
	}
label_51:;
	{
	LINE_NUMBER(559);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_accumulator), (jfloat(1)), -1)) < 0) goto label_52;
	}
	{
	LINE_NUMBER(560);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	((func_mindustry_logic_LExecutor_runOnce) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor_runOnce])(ctx, sp[0].o);
	LINE_NUMBER(561);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_yield) == 0) goto label_55;
	}
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_yield = (jint(0));
	LINE_NUMBER(563);
	goto label_52;
	}
label_55:;
	{
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_accumulator = (((jfloat)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_accumulator) - (jfloat(1)));
	goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(570);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_accumulator;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_edelta_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_accumulator = (temp0 + (temp1 * (jfloat(((jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_ipt)))));
	}
label_49:;
	LINE_NUMBER(572);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateLinks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:updateLinks", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_linksVar;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_7);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(578);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_gen_Building, (frame[1].i));
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_links = (jref) sp[1].o;
	LINE_NUMBER(579);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_linkIds;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(581);
	frame[2].i = (jint(0));
	LINE_NUMBER(582);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o));
	LINE_NUMBER(583);
	if (((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_valid) == 0) goto label_9;
	}
	{
	LINE_NUMBER(584);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[4].o)))->F_y));
	frame[5].o = sp[0].o;
	LINE_NUMBER(585);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[5].o);
	LINE_NUMBER(586);
	if ((frame[5].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_linkIds;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_id));
	}
label_9:;
	LINE_NUMBER(588);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_linksVar;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (jdouble((frame[1].i)));
	LINE_NUMBER(591);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readable_mindustry_logic_LExecutor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:readable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(595);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_read_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(600);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_objval;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_lang_String, (frame[4].o)));
	LINE_NUMBER(601);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((func_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(602);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(603);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_optionalLink_java_lang_String_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_optionalLink_java_lang_String_R_mindustry_gen_Building])(ctx, (frame[0].o), (frame[3].o));
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(606);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_constant) == 0) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(607);
	((func_mindustry_logic_LVar_set_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LVar_set_mindustry_logic_LVar])(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(608);
	goto label_9;
	}
label_1:;
	{
	LINE_NUMBER(609);
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(610);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[4].i) < 0) goto label_11;
	}
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_links;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_links;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_ACONST_NULL();
label_12:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
label_9:;
	LINE_NUMBER(612);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_optionalLink_java_lang_String_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:optionalLink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(615);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(617);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[2].i = temp1;
	LINE_NUMBER(618);
	if ((frame[2].i) < (48)) goto label_4;
	}
	{
	if ((frame[2].i) <= (57)) goto label_5;
	}
label_4:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(620);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_linkMap;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(621);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_linkMap = (jref) sp[1].o;
	LINE_NUMBER(622);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_linkMap;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[1].o))))->F_name;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, (frame[3].i));
	LINE_NUMBER(622);
	INST_IINC(3, 1);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_linkMap;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(-1)));
	frame[3].i = temp0;
	LINE_NUMBER(627);
	if ((frame[3].i) < 0) goto label_13;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	if (((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o))))->F_valid) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o))))->F_lastBuild;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ACONST_NULL();
label_14:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_writable_mindustry_logic_LExecutor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:writable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(632);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readable_mindustry_logic_LExecutor_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readable_mindustry_logic_LExecutor_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_write_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(637);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_objval;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_lang_String, (frame[4].o)));
	LINE_NUMBER(638);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((func_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(639);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[4].o)))->F_constant) == 0) goto label_5;
	}
label_4:;
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(640);
	((func_mindustry_logic_LVar_set_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_logic_LVar_set_mindustry_logic_LVar])(ctx, (frame[4].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(642);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_config_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:config", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_code;
	sp[1].o = (jobject)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_relativeConnections_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_relativeConnections_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_world_blocks_logic_LogicBlock_compress_java_lang_String_arc_struct_Seq_R_Array1_byte(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_relativeConnections_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:relativeConnections", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(650);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	init_arc_struct_Seq_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(651);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o));
	LINE_NUMBER(652);
	sp[0].o = (jobject)((func_mindustry_world_blocks_logic_LogicBlock$LogicLink_copy_R_mindustry_world_blocks_logic_LogicBlock$LogicLink) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_copy_R_mindustry_world_blocks_logic_LogicBlock$LogicLink])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(653);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK(sp[0].o))->F_x;
	jint temp1 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_tileX_R_int])(ctx, (frame[0].o));
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK(sp[0].o))->F_x = (temp0 - temp1);
	LINE_NUMBER(654);
	sp[0].o = frame[4].o;
	jint temp2 = (jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK(sp[0].o))->F_y;
	jint temp3 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_tileY_R_int])(ctx, (frame[0].o));
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK(sp[0].o))->F_y = (temp2 - temp3);
	LINE_NUMBER(655);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(656);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(657);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_drawConfigure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:drawConfigure", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(662);
	M_mindustry_gen_Building_drawConfigure(ctx, (frame[0].o));
	LINE_NUMBER(664);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_2;
	}
	{
	LINE_NUMBER(665);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_circles_float_float_float(ctx, temp0, temp1, ((jfloat)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[0].o))->F_range));
	}
label_2:;
	{
	LINE_NUMBER(668);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o));
	LINE_NUMBER(669);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[2].o)))->F_y));
	frame[3].o = sp[0].o;
	LINE_NUMBER(670);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(671);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp2 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(1));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	}
label_8:;
	LINE_NUMBER(673);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o));
	LINE_NUMBER(677);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[2].o)))->F_y));
	frame[3].o = sp[0].o;
	LINE_NUMBER(678);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[3].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[3].o));
	jfloat temp2 = (jfloat)((func_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, (jint(1)));
	}
label_14:;
	LINE_NUMBER(681);
	goto label_10;
label_11:;
	LINE_NUMBER(682);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:drawSelect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(686);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(688);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Cons_3);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(693);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_pixelate) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_tag;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_tag;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(694);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	frame[1].o = sp[0].o;
	LINE_NUMBER(695);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(696);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(697);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	jfloat temp1 = jfloat(0.25f);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (temp1 / temp2));
	LINE_NUMBER(698);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(700);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_tag;
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jfloat(90.0f)), (8), (jint(1)));
	LINE_NUMBER(701);
	frame[4].f = (jfloat(1));
	LINE_NUMBER(705);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(706);
	((func_arc_graphics_g2d_Font_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_float_float_float_float])(ctx, (frame[1].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(0.5f)));
	LINE_NUMBER(707);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_tag;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[2].o)))->F_width) / (jfloat(2)))), (((((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + (jfloat(8.0f))) + (jfloat(2))) - (frame[4].f)), (jfloat(90.0f)), (8), (jint(1)));
	LINE_NUMBER(708);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(710);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(712);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	}
label_3:;
	{
	LINE_NUMBER(715);
	if (((jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_iconTag) == 0) goto label_17;
	}
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_unicodeToName_int_R_java_lang_String(ctx, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_iconTag));
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getLargeIcon_java_lang_String_R_arc_graphics_g2d_TextureRegion(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(717);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(718);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(0.5f)));
	LINE_NUMBER(720);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(8.0f);
	jfloat temp3 = jfloat(8.0f);
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_TextureRegion_ratio_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_ratio_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, (temp3 / temp4));
	LINE_NUMBER(722);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_17:;
	LINE_NUMBER(725);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:validLink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(728);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[2].o))->F_range;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp1 = (jint)((func_mindustry_gen_Building_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size) * (8)))) / (jfloat(2)))));
	if (temp1 == 0) goto label_1;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_worldProcessorPlayerLink) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o == sp[1].o) goto label_1;
	}
label_3:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:shouldShowConfigure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(733);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:buildConfiguration", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(738);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencil;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_cleari;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	LINE_NUMBER(739);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_showEditDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:showEditDialog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(742);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_showEditDialog_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_showEditDialog_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(743);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_showEditDialog_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:showEditDialog", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(746);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_logic;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_code;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[3].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[3].o))->F_privileged;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Cons_4);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_logic_LogicDialog_show_java_lang_String_mindustry_logic_LExecutor_boolean_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LogicDialog_show_java_lang_String_mindustry_logic_LExecutor_boolean_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(758);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:onConfigureBuildTapped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(762);
	if ((frame[0].o) == (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(763);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(764);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(767);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(768);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(769);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(772);
	jint temp0 = (jint)M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(777);
	popStackFrame(ctx);
	return (jint(5));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:write", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(782);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(784);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_code;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)SM_mindustry_world_blocks_logic_LogicBlock_compress_java_lang_String_arc_struct_Seq_R_Array1_byte(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(785);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(786);
	((func_arc_util_io_Writes_b_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_Array1_byte])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(788);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	if (sp[0].o == nullptr) goto label_5;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) sp[0].o)->F_unit;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	if (sp[0].o == nullptr) goto label_5;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) sp[0].o)->F_unit;
	if (sp[0].o == nullptr) goto label_5;
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval;
	if (sp[0].o == nullptr) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(791);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	if (sp[0].o == nullptr) {
		frame[4].i = (frame[3].i != 0) ? 1 : 0;
		((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), (frame[4].i));
		goto label_16;
	}
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) sp[0].o)->F_vars;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Boolf_9);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_count_Array1_java_lang_Object_arc_func_Boolf_R_int(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[3].i) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	frame[4].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(793);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), (frame[4].i));
	LINE_NUMBER(796);
	if ((frame[3].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(797);
	((func_arc_util_io_Writes_str_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_str_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@unit"_j))));
	LINE_NUMBER(798);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[1].o))->F_unit;
	sp[1].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_objval;
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(801);
	frame[5].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_vars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_16;
	}
	{
	LINE_NUMBER(802);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_vars;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(805);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[6].o)))->F_isobj) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[6].o)))->F_objval;
	if (sp[0].o != nullptr) goto label_19;
	}
	goto label_20;
label_19:;
	{
	LINE_NUMBER(808);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[6].o)))->F_name;
	((func_arc_util_io_Writes_str_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_str_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(810);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[6].o)))->F_isobj) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[6].o)))->F_objval;
	sp += 1;
	goto label_23;
	}
label_22:;
	{
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[6].o)))->F_numval));
	sp += 1;
	}
label_23:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(811);
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, (frame[1].o), (frame[7].o));
	}
label_20:;
	{
	LINE_NUMBER(801);
	INST_IINC(5, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(815);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(817);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) == 0) goto label_26;
	}
	{
	LINE_NUMBER(818);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_ipt;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[1].o))->F_maxInstructionsPerTick));
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, temp2);
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(820);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_ipt;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp += 1;
	if (temp0 != ((jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[0].o))->F_instructionsPerTick)) goto label_29;
	}
	INST_ICONST(0);
	goto label_30;
label_29:;
	{
	jint temp0 = (jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_ipt;
	jint temp1 = jint(1);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[0].o))->F_instructionsPerTick));
	sp[0].i = temp2;
	sp += 1;
	}
label_30:;
	POP_N(2); // Pop method args
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
label_28:;
	{
	LINE_NUMBER(823);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_tag;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(824);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_iconTag));
	LINE_NUMBER(826);
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicBlock_waitIndices;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(827);
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicBlock_waitValues;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(828);
	frame[5].i = (jint(0));
	}
label_35:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_instructions;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_36;
	}
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_instructions;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_logic_LExecutor$WaitI)) == 0) goto label_38;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_logic_LExecutor$WaitI, (frame[7].o)));
	LINE_NUMBER(830);
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicBlock_waitValues;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((mindustry_logic_LExecutor$WaitI *) NULL_CHECK((frame[6].o)))->F_curTime));
	LINE_NUMBER(831);
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicBlock_waitIndices;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[5].i));
	}
label_38:;
	{
	LINE_NUMBER(828);
	INST_IINC(5, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(835);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicBlock_waitIndices;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(836);
	frame[5].i = (jint(0));
	}
label_42:;
	{
	jint temp0 = frame[5].i;
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicBlock_waitIndices;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_43;
	}
	{
	LINE_NUMBER(837);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicBlock_waitIndices;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[5].i));
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(838);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicBlock_waitValues;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, (frame[5].i));
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, temp1);
	LINE_NUMBER(836);
	INST_IINC(5, 1);
	goto label_42;
	}
label_43:;
	{
	LINE_NUMBER(841);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_accumulator));
	LINE_NUMBER(842);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_checkReadCode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:checkReadCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_loadBlock;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_loadBlock;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(847);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_loadBlock = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(849);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:afterReadAll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(853);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_checkReadCode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_checkReadCode])(ctx, (frame[0].o));
	LINE_NUMBER(854);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:read", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	ensureLogicBuildFields(ctx, (frame[0].o));
	{
	LINE_NUMBER(858);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	ensureLogicBuildFields(ctx, (frame[0].o));
	LINE_NUMBER(860);
	if ((frame[2].i) < (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(861);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(862);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(863);
	sp[0].o = (jobject)((func_arc_util_io_Reads_b_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_Array1_byte_R_Array1_byte])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(864);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readCompressed_Array1_byte_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readCompressed_Array1_byte_boolean])(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(865);
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(866);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_str_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_str_R_java_lang_String])(ctx, (frame[1].o));
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_code = (jref) sp[1].o;
	LINE_NUMBER(867);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(868);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(869);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(870);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	LINE_NUMBER(869);
	INST_IINC(4, 1);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(874);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(877);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(878);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(880);
	frame[6].i = (jint(0));
	}
label_18:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_19;
	}
	{
	LINE_NUMBER(881);
	sp[0].o = (jobject)((func_arc_util_io_Reads_str_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_str_R_java_lang_String])(ctx, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(882);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObjectBoxed_arc_util_io_Reads_boolean_R_java_lang_Object(ctx, (frame[1].o), (jint(1)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(884);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)) = (frame[7].o);
	LINE_NUMBER(885);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)) = (frame[8].o);
	LINE_NUMBER(880);
	INST_IINC(6, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(888);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(890);
	((func_arc_util_io_Reads_skip_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_skip_int])(ctx, (frame[1].o), ((frame[6].i) * (8)));
	LINE_NUMBER(892);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) == 0) goto label_27;
	}
	{
	if ((frame[2].i) < (jint(2))) goto label_27;
	}
	{
	LINE_NUMBER(893);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[1].o))->F_maxInstructionsPerTick));
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_ipt = temp2;
	}
label_27:;
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_29;
	}
	{
	if ((frame[2].i) < (jint(5))) goto label_29;
	}
	{
	LINE_NUMBER(897);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(898);
	if ((frame[7].i) == 0) goto label_29;
	}
	{
	LINE_NUMBER(899);
	sp[0].o = frame[0].o;
	jint temp0 = frame[7].i;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK(sp[1].o))->F_instructionsPerTick));
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_ipt = temp2;
	}
label_29:;
	{
	LINE_NUMBER(903);
	if ((frame[2].i) < (jint(3))) goto label_33;
	}
	{
	LINE_NUMBER(904);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_tag = (jref) sp[1].o;
	LINE_NUMBER(905);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_iconTag = (jchar(temp0));
	}
label_33:;
	{
	LINE_NUMBER(908);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(909);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(912);
	if ((frame[2].i) < (jint(4))) goto label_38;
	}
	{
	LINE_NUMBER(913);
	jint temp0 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[1].o));
	frame[9].i = temp0;
	LINE_NUMBER(914);
	frame[10].i = (jint(0));
	}
label_41:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_42;
	}
	{
	LINE_NUMBER(915);
	jint temp0 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[1].o));
	frame[11].i = temp0;
	LINE_NUMBER(916);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	frame[12].f = temp1;
	LINE_NUMBER(917);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[7].o), (frame[11].i));
	LINE_NUMBER(918);
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, (frame[8].o), (frame[12].f));
	LINE_NUMBER(914);
	INST_IINC(10, 1);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(921);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_accumulator = temp0;
	}
label_38:;
	{
	LINE_NUMBER(924);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_java_lang_Runnable_3);
		proxy->F_field5 = (jref) (frame[8].o);
		proxy->F_field4 = (jref) (frame[7].o);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_loadBlock = (jref) sp[1].o;
	LINE_NUMBER(951);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_config_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_config_R_Array1_byte])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$read$0_int_Array1_java_lang_String_Array1_java_lang_Object_arc_struct_IntSeq_arc_struct_FloatSeq(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:lambda$read$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(924);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_code;
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild_invoke_arc_func_Cons_5);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (frame[1].i);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String_boolean_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String_boolean_arc_func_Cons])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$read$1_int_Array1_java_lang_String_Array1_java_lang_Object_arc_struct_IntSeq_arc_struct_FloatSeq_mindustry_logic_LAssembler(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:lambda$read$1", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(926);
	frame[6].i = (jint(0));
	}
label_1:;
	{
	if ((frame[6].i) >= (frame[0].i)) goto label_2;
	}
	{
	LINE_NUMBER(927);
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[5].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(928);
	if ((frame[7].o) == nullptr) goto label_5;
	}
	{
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[7].o)))->F_constant) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[7].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@unit"_j))));
	if (temp0 == 0) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(929);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(930);
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_io_TypeIO$Boxed)) == 0) goto label_8;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_io_TypeIO$Boxed, (frame[8].o)));
	sp[0].o = (jobject)((func_mindustry_io_TypeIO$Boxed_unbox_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_io_TypeIO$Boxed, INDEX_mindustry_io_TypeIO$Boxed_unbox_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[8].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(932);
	if ((isInstance(ctx, (frame[8].o), &class_java_lang_Number)) == 0) goto label_10;
	}
	{
	frame[9].o = (checkCast(ctx, &class_java_lang_Number, (frame[8].o)));
	LINE_NUMBER(933);
	sp[0].o = frame[7].o;
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (frame[9].o));
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = temp0;
	LINE_NUMBER(934);
	((mindustry_logic_LVar *) NULL_CHECK((frame[7].o)))->F_isobj = (jint(0));
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(936);
	((mindustry_logic_LVar *) NULL_CHECK((frame[7].o)))->F_objval = (jref) (frame[8].o);
	LINE_NUMBER(937);
	((mindustry_logic_LVar *) NULL_CHECK((frame[7].o)))->F_isobj = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(926);
	INST_IINC(6, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(943);
	frame[6].i = (jint(0));
	}
label_14:;
	{
	if ((frame[6].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_15;
	}
	{
	LINE_NUMBER(944);
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[3].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(945);
	if ((frame[7].i) < 0) goto label_18;
	}
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_logic_LAssembler *) NULL_CHECK((frame[5].o)))->F_instructions;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LAssembler *) NULL_CHECK((frame[5].o)))->F_instructions;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)));
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_logic_LExecutor$WaitI)) == 0) goto label_18;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_logic_LExecutor$WaitI, (frame[9].o)));
	LINE_NUMBER(946);
	sp[0].o = frame[8].o;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[4].o), (frame[6].i));
	((mindustry_logic_LExecutor$WaitI *) NULL_CHECK(sp[0].o))->F_curTime = temp0;
	}
label_18:;
	{
	LINE_NUMBER(943);
	INST_IINC(6, 1);
	goto label_14;
	}
label_15:;
	LINE_NUMBER(949);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$write$0_mindustry_logic_LVar_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:lambda$write$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(791);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if (sp[0].o == nullptr) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$showEditDialog$0_boolean_java_lang_String(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:lambda$showEditDialog$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(747);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[3].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor);
	LINE_NUMBER(749);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(750);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_relativeConnections_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_relativeConnections_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_world_blocks_logic_LogicBlock_compress_java_lang_String_arc_struct_Seq_R_Array1_byte(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(751);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= (16000)) goto label_4;
	}
	{
	LINE_NUMBER(752);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"logic.error.toolong"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (16000));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(754);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_configure_java_lang_Object])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(755);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor = (frame[3].i);
	}
label_6:;
	LINE_NUMBER(757);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$drawSelect$1_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:lambda$drawSelect$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(689);
	SM_mindustry_graphics_Drawf_square_float_float_float_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(45.0f))));
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$drawSelect$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:lambda$drawSelect$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ai_types_LogicAI)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_types_LogicAI, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[2].o)))->F_controller;
	if (sp[0].o != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$updateLinks$0_mindustry_world_blocks_logic_LogicBlock$LogicLink_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:lambda$updateLinks$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_valid);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$updateTile$0_mindustry_gen_Building_mindustry_world_blocks_logic_LogicBlock$LogicLink_mindustry_world_blocks_logic_LogicBlock$LogicLink_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:lambda$updateTile$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(534);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[3].o)))->F_y));
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	if ((frame[3].o) == (frame[2].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(535);
	if ((frame[4].i) == 0) goto label_4;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[0].o)))->F_executor;
	((func_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	}
label_4:;
	{
	LINE_NUMBER(536);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$updateCode$0_mindustry_world_blocks_logic_LogicBlock$LogicLink_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicBuild:lambda$updateCode$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_valid);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_logic_LogicBlock$LogicBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field linkMap
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field tag
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field linksVar
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field loadBlock
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method optionalLink
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_logic_LogicBlock$LogicBuild[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Building_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Building_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Building_getX_R_float,
	(void *) M_mindustry_gen_Building_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_isValid_R_boolean,
	(void *) M_mindustry_gen_Building_shouldAmbientSound_R_boolean,
	(void *) M_mindustry_gen_Building_getAmbientVolume_R_float,
	(void *) M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound,
	(void *) M_mindustry_gen_Building_hitSize_R_float,
	(void *) M_mindustry_gen_Building_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Building_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_isAdded_R_boolean,
	(void *) M_mindustry_gen_Building_isLocal_R_boolean,
	(void *) M_mindustry_gen_Building_isRemote_R_boolean,
	(void *) M_mindustry_gen_Building_serialize_R_boolean,
	(void *) M_mindustry_gen_Building_classId_R_int,
	(void *) M_mindustry_gen_Building_id_R_int,
	(void *) M_mindustry_gen_Building_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onSolid_R_boolean,
	(void *) M_mindustry_gen_Building_x_R_float,
	(void *) M_mindustry_gen_Building_y_R_float,
	(void *) M_mindustry_gen_Building_tileX_R_int,
	(void *) M_mindustry_gen_Building_tileY_R_int,
	(void *) M_mindustry_gen_Building_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_set_float_float,
	(void *) M_mindustry_gen_Building_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_trns_float_float,
	(void *) M_mindustry_gen_Building_x_float,
	(void *) M_mindustry_gen_Building_y_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_Building_damagePierce_float,
	(void *) M_mindustry_gen_Building_damagePierce_float_boolean,
	(void *) M_mindustry_gen_Building_healFract_float,
	(void *) M_mindustry_gen_Building_heal_float,
	(void *) M_mindustry_gen_Building_damaged_R_boolean,
	(void *) M_mindustry_gen_Building_dead_R_boolean,
	(void *) M_mindustry_gen_Building_health_R_float,
	(void *) M_mindustry_gen_Building_healthf_R_float,
	(void *) M_mindustry_gen_Building_hitTime_R_float,
	(void *) M_mindustry_gen_Building_maxHealth_R_float,
	(void *) M_mindustry_gen_Building_clampHealth,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_damage_float,
	(void *) M_mindustry_gen_Building_damage_float_boolean,
	(void *) M_mindustry_gen_Building_damageContinuous_float,
	(void *) M_mindustry_gen_Building_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Building_dead_boolean,
	(void *) M_mindustry_gen_Building_heal,
	(void *) M_mindustry_gen_Building_health_float,
	(void *) M_mindustry_gen_Building_hitTime_float,
	(void *) M_mindustry_gen_Building_kill,
	(void *) M_mindustry_gen_Building_killed,
	(void *) M_mindustry_gen_Building_maxHealth_float,
	(void *) M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_cheating_R_boolean,
	(void *) M_mindustry_gen_Building_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Building_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Building_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_displayable_R_boolean,
	(void *) M_mindustry_gen_Building_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_gen_Building_canUnload_R_boolean,
	(void *) M_mindustry_gen_Building_canWithdraw_R_boolean,
	(void *) M_mindustry_gen_Building_checkSolid_R_boolean,
	(void *) M_mindustry_gen_Building_checkSuppression_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_configTapped_R_boolean,
	(void *) M_mindustry_gen_Building_consumeTriggerValid_R_boolean,
	(void *) M_mindustry_gen_Building_dump_R_boolean,
	(void *) M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_inMapArea_R_boolean,
	(void *) M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isCommandable_R_boolean,
	(void *) M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isHealSuppressed_R_boolean,
	(void *) M_mindustry_gen_Building_isInsulated_R_boolean,
	(void *) M_mindustry_gen_Building_isPayload_R_boolean,
	(void *) M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_gen_Building_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_gen_Building_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_gen_Building_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_gen_Building_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_gen_Building_pickedUp,
	(void *) M_mindustry_gen_Building_playDestroySound,
	(void *) M_mindustry_gen_Building_powerGraphRemoved,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item_int,
	(void *) M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle,
	(void *) M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_readBase_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_recache,
	(void *) M_mindustry_gen_Building_recentlyHealed,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_removeFromProximity,
	(void *) M_mindustry_gen_Building_sleep,
	(void *) M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_tapped,
	(void *) M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_unitOn_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_updateConsumption,
	(void *) M_mindustry_gen_Building_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateTile,
	(void *) M_mindustry_gen_Building_writeAll_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeBase_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable,
	(void *) M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_range_R_float,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readable_mindustry_logic_LExecutor_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_read_mindustry_logic_LVar_mindustry_logic_LVar,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_writable_mindustry_logic_LExecutor_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_write_mindustry_logic_LVar_mindustry_logic_LVar,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readCompressed_Array1_byte_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_findLinkName_mindustry_world_Block_R_java_lang_String,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String_boolean_arc_func_Cons,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateLinks,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_optionalLink_java_lang_String_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_config_R_Array1_byte,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_relativeConnections_R_arc_struct_Seq,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_showEditDialog,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_showEditDialog_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_checkReadCode,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$read$0_int_Array1_java_lang_String_Array1_java_lang_Object_arc_struct_IntSeq_arc_struct_FloatSeq,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$showEditDialog$0_boolean_java_lang_String,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$drawSelect$0_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$updateTile$0_mindustry_gen_Building_mindustry_world_blocks_logic_LogicBlock$LogicLink_mindustry_world_blocks_logic_LogicBlock$LogicLink_R_boolean,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "isValid", "()Z" },
	{ "shouldAmbientSound", "()Z" },
	{ "getAmbientVolume", "()F" },
	{ "getAmbientSound", "()Larc/audio/Sound;" },
	{ "hitSize", "()F" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "control", "(Lmindustry/logic/LAccess;DDDD)V" },
	{ "control", "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "setIndex__build", "(I)V" },
	{ "back", "()Lmindustry/gen/Building;" },
	{ "front", "()Lmindustry/gen/Building;" },
	{ "left", "()Lmindustry/gen/Building;" },
	{ "right", "()Lmindustry/gen/Building;" },
	{ "getCommandPosition", "()Larc/math/geom/Vec2;" },
	{ "config", "()Ljava/lang/Object;" },
	{ "getPayloads", "()Lmindustry/type/PayloadSeq;" },
	{ "findClosestEdge", "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;" },
	{ "getPayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "takePayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "onRepaired", "()V" },
	{ "placed", "()V" },
	{ "playerPlaced", "(Ljava/lang/Object;)V" },
	{ "read", "(Larc/util/io/Reads;B)V" },
	{ "create", "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "getLiquidDestination", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;" },
	{ "init", "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;" },
	{ "nearby", "(II)Lmindustry/gen/Building;" },
	{ "nearby", "(I)Lmindustry/gen/Building;" },
	{ "getCursor", "()Larc/Graphics$Cursor;" },
	{ "getDisplayIcon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPowerConnections", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "absorbLasers", "()Z" },
	{ "acceptItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "acceptLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "acceptPayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "allowDeposit", "()Z" },
	{ "allowUpdate", "()Z" },
	{ "canBeReplaced", "(Lmindustry/world/Block;)Z" },
	{ "canConsume", "()Z" },
	{ "canControlSelect", "(Lmindustry/gen/Unit;)Z" },
	{ "canDump", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "canDumpLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "canPickup", "()Z" },
	{ "canResupply", "()Z" },
	{ "canUnload", "()Z" },
	{ "canWithdraw", "()Z" },
	{ "checkSolid", "()Z" },
	{ "checkSuppression", "()Z" },
	{ "collide", "(Lmindustry/gen/Bullet;)Z" },
	{ "collision", "(Lmindustry/gen/Bullet;)Z" },
	{ "conductsTo", "(Lmindustry/gen/Building;)Z" },
	{ "configTapped", "()Z" },
	{ "consumeTriggerValid", "()Z" },
	{ "dump", "()Z" },
	{ "dump", "(Lmindustry/type/Item;)Z" },
	{ "dumpAccumulate", "()Z" },
	{ "dumpAccumulate", "(Lmindustry/type/Item;)Z" },
	{ "dumpPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "inMapArea", "()Z" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "isCommandable", "()Z" },
	{ "isDiscovered", "(Lmindustry/game/Team;)Z" },
	{ "isHealSuppressed", "()Z" },
	{ "isInsulated", "()Z" },
	{ "isPayload", "()Z" },
	{ "moveForward", "(Lmindustry/type/Item;)Z" },
	{ "movePayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "onConfigureBuildTapped", "(Lmindustry/gen/Building;)Z" },
	{ "onConfigureTapped", "(FF)Z" },
	{ "payloadCheck", "(I)Z" },
	{ "productionValid", "()Z" },
	{ "put", "(Lmindustry/type/Item;)Z" },
	{ "shouldConsume", "()Z" },
	{ "shouldHideConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "shouldShowConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "wasRecentlyDamaged", "()Z" },
	{ "wasRecentlyHealed", "(F)Z" },
	{ "relativeTo", "(Lmindustry/gen/Building;)B" },
	{ "relativeTo", "(II)B" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeToEdge", "(Lmindustry/world/Tile;)B" },
	{ "version", "()B" },
	{ "ambientVolume", "()F" },
	{ "calculateHeat", "([F)F" },
	{ "calculateHeat", "([FLarc/struct/IntSet;)F" },
	{ "delta", "()F" },
	{ "drawrot", "()F" },
	{ "edelta", "()F" },
	{ "efficiencyScale", "()F" },
	{ "fogRadius", "()F" },
	{ "getDisplayEfficiency", "()F" },
	{ "getPowerProduction", "()F" },
	{ "getProgressIncrease", "(F)F" },
	{ "handleDamage", "(F)F" },
	{ "moveLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "moveLiquidForward", "(ZLmindustry/type/Liquid;)F" },
	{ "progress", "()F" },
	{ "rotdeg", "()F" },
	{ "timeScale", "()F" },
	{ "totalProgress", "()F" },
	{ "warmup", "()F" },
	{ "acceptStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I" },
	{ "explosionItemCap", "()I" },
	{ "getMaximumAccepted", "(Lmindustry/type/Item;)I" },
	{ "moduleBitmask", "()I" },
	{ "pos", "()I" },
	{ "removeStack", "(Lmindustry/type/Item;I)I" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "status", "()Lmindustry/world/meta/BlockStatus;" },
	{ "flowItems", "()Lmindustry/world/modules/ItemModule;" },
	{ "addPlan", "(Z)V" },
	{ "addPlan", "(ZZ)V" },
	{ "afterDestroyed", "()V" },
	{ "afterPickedUp", "()V" },
	{ "applyBoost", "(FF)V" },
	{ "applyHealSuppression", "(F)V" },
	{ "applyHealSuppression", "(FLarc/graphics/Color;)V" },
	{ "applySlowdown", "(FF)V" },
	{ "buildConfiguration", "(Larc/scene/ui/layout/Table;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;Z)V" },
	{ "checkAllowUpdate", "()V" },
	{ "configure", "(Ljava/lang/Object;)V" },
	{ "configureAny", "(Ljava/lang/Object;)V" },
	{ "configured", "(Lmindustry/gen/Unit;Ljava/lang/Object;)V" },
	{ "consume", "()V" },
	{ "created", "()V" },
	{ "damage", "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V" },
	{ "damage", "(Lmindustry/game/Team;F)V" },
	{ "deselect", "()V" },
	{ "displayBars", "(Larc/scene/ui/layout/Table;)V" },
	{ "displayConsumption", "(Larc/scene/ui/layout/Table;)V" },
	{ "draw", "()V" },
	{ "drawCached", "()V" },
	{ "drawConfigure", "()V" },
	{ "drawCracks", "()V" },
	{ "drawDisabled", "()V" },
	{ "drawItemSelection", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "drawLight", "()V" },
	{ "drawLiquidLight", "(Lmindustry/type/Liquid;F)V" },
	{ "drawSelect", "()V" },
	{ "drawStatus", "()V" },
	{ "drawTeam", "()V" },
	{ "drawTeamTop", "()V" },
	{ "dropped", "()V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;FI)V" },
	{ "eachEdge", "(Larc/func/Cons;)V" },
	{ "getStackOffset", "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V" },
	{ "handleItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)V" },
	{ "handleLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V" },
	{ "handlePayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "handleStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V" },
	{ "handleString", "(Ljava/lang/Object;)V" },
	{ "handleUnitPayload", "(Lmindustry/gen/Unit;Larc/func/Cons;)V" },
	{ "healthChanged", "()V" },
	{ "incrementDump", "(I)V" },
	{ "itemTaken", "(Lmindustry/type/Item;)V" },
	{ "noSleep", "()V" },
	{ "offload", "(Lmindustry/type/Item;)V" },
	{ "onCommand", "(Larc/math/geom/Vec2;)V" },
	{ "onConfigureClosed", "()V" },
	{ "onControlSelect", "(Lmindustry/gen/Unit;)V" },
	{ "onDeconstructed", "(Lmindustry/gen/Unit;)V" },
	{ "onDestroyed", "()V" },
	{ "onNearbyBuildAdded", "(Lmindustry/gen/Building;)V" },
	{ "onProximityAdded", "()V" },
	{ "onProximityRemoved", "()V" },
	{ "onProximityUpdate", "()V" },
	{ "onRemoved", "()V" },
	{ "overwrote", "(Larc/struct/Seq;)V" },
	{ "payloadDraw", "()V" },
	{ "pickedUp", "()V" },
	{ "playDestroySound", "()V" },
	{ "powerGraphRemoved", "()V" },
	{ "produced", "(Lmindustry/type/Item;)V" },
	{ "produced", "(Lmindustry/type/Item;I)V" },
	{ "puddleOn", "(Lmindustry/gen/Puddle;)V" },
	{ "readAll", "(Larc/util/io/Reads;B)V" },
	{ "readBase", "(Larc/util/io/Reads;)V" },
	{ "readSync", "(Larc/util/io/Reads;B)V" },
	{ "recache", "()V" },
	{ "recentlyHealed", "()V" },
	{ "removeFromProximity", "()V" },
	{ "sleep", "()V" },
	{ "splashLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "tapped", "()V" },
	{ "transferLiquid", "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V" },
	{ "unitOn", "(Lmindustry/gen/Unit;)V" },
	{ "unitOnAny", "(Lmindustry/gen/Unit;)V" },
	{ "unitRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "updateConsumption", "()V" },
	{ "updateEfficiencyMultiplier", "()V" },
	{ "updateFogVisibility", "()V" },
	{ "updateLastAccess", "(Lmindustry/gen/Player;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "updatePowerGraph", "()V" },
	{ "updateProximity", "()V" },
	{ "updateTableAlign", "(Larc/scene/ui/layout/Table;)V" },
	{ "updateTile", "()V" },
	{ "writeAll", "(Larc/util/io/Writes;)V" },
	{ "writeBase", "(Larc/util/io/Writes;)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "lambda$splashLiquid$0", "(Lmindustry/type/Liquid;F)V" },
	{ "lambda$onDeconstructed$0", "(FLmindustry/world/Tile;)V" },
	{ "lambda$display$6", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$9", "(Larc/struct/Bits;Ljava/lang/Runnable;)V" },
	{ "lambda$display$7", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$display$8", "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$placed$0", "(Lmindustry/gen/Building;)V" },
	{ "range", "()F" },
	{ "readable", "(Lmindustry/logic/LExecutor;)Z" },
	{ "read", "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V" },
	{ "writable", "(Lmindustry/logic/LExecutor;)Z" },
	{ "write", "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V" },
	{ "readCompressed", "([BZ)V" },
	{ "findLinkName", "(Lmindustry/world/Block;)Ljava/lang/String;" },
	{ "updateCode", "(Ljava/lang/String;)V" },
	{ "updateCode", "(Ljava/lang/String;ZLarc/func/Cons;)V" },
	{ "updateLinks", "()V" },
	{ "optionalLink", "(Ljava/lang/String;)Lmindustry/gen/Building;" },
	{ "config", "()[B" },
	{ "relativeConnections", "()Larc/struct/Seq;" },
	{ "validLink", "(Lmindustry/gen/Building;)Z" },
	{ "showEditDialog", "()V" },
	{ "showEditDialog", "(Z)V" },
	{ "checkReadCode", "()V" },
	{ "lambda$read$0", "(I[Ljava/lang/String;[Ljava/lang/Object;Larc/struct/IntSeq;Larc/struct/FloatSeq;)V" },
	{ "lambda$showEditDialog$0", "(ZLjava/lang/String;)V" },
	{ "lambda$drawSelect$0", "(Lmindustry/gen/Unit;)Z" },
	{ "lambda$updateTile$0", "(Lmindustry/gen/Building;Lmindustry/world/blocks/logic/LogicBlock$LogicLink;Lmindustry/world/blocks/logic/LogicBlock$LogicLink;)Z" },
};

static jclass interfaces[] { &class_mindustry_logic_Ranged, &class_mindustry_logic_LReadable, &class_mindustry_logic_LWritable, };

static FieldMetadata fields[] {
	{ "code", &class_java_lang_String, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_code), "Ljava/lang/String;", 1 },
	{ "executor", &class_mindustry_logic_LExecutor, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_executor), "Lmindustry/logic/LExecutor;", 1 },
	{ "accumulator", &class_float, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_accumulator), "F", 1 },
	{ "links", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_links), "Larc/struct/Seq;", 1 },
	{ "linkMap", &class_arc_struct_ObjectIntMap, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_linkMap), "Larc/struct/ObjectIntMap;", 1 },
	{ "checkedDuplicates", &class_boolean, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_checkedDuplicates), "Z", 1 },
	{ "ipt", &class_int, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_ipt), "I", 1 },
	{ "tag", &class_java_lang_String, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_tag), "Ljava/lang/String;", 1 },
	{ "iconTag", &class_char, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_iconTag), "C", 1 },
	{ "linksVar", &class_mindustry_logic_LVar, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_linksVar), "Lmindustry/logic/LVar;", 1 },
	{ "loadBlock", &class_java_lang_Runnable, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_loadBlock), "Ljava/lang/Runnable;", 1 },
	{ "this$0", &class_mindustry_world_blocks_logic_LogicBlock, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicBuild, F_this$0), "Lmindustry/world/blocks/logic/LogicBlock;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_LogicBlock$LogicBuild_mindustry_world_blocks_logic_LogicBlock, 0, "(Lmindustry/world/blocks/logic/LogicBlock;)V", 1 },
	{ "readCompressed", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readCompressed_Array1_byte_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readCompressed_Array1_byte_boolean, "([BZ)V", 1 },
	{ "findLinkName", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_findLinkName_mindustry_world_Block_R_java_lang_String, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_findLinkName_mindustry_world_Block_R_java_lang_String, "(Lmindustry/world/Block;)Ljava/lang/String;", 1 },
	{ "updateCode", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "updateCode", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String_boolean_arc_func_Cons, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateCode_java_lang_String_boolean_arc_func_Cons, "(Ljava/lang/String;ZLarc/func/Cons;)V", 1 },
	{ "collide", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_collide_mindustry_gen_Bullet_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_collide_mindustry_gen_Bullet_R_boolean, "(Lmindustry/gen/Bullet;)Z", 1 },
	{ "displayable", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_displayable_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_displayable_R_boolean, "()Z", 1 },
	{ "damage", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_damage_float, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_damage_float, "(F)V", 1 },
	{ "removeFromProximity", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_removeFromProximity, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_removeFromProximity, "()V", 1 },
	{ "getCursor", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_getCursor_R_arc_Graphics$Cursor, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_getCursor_R_arc_Graphics$Cursor, "()Larc/Graphics$Cursor;", 1 },
	{ "canPickup", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_canPickup_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_canPickup_R_boolean, "()Z", 1 },
	{ "range", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_range_R_float, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_range_R_float, "()F", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateTile, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateTile, "()V", 1 },
	{ "updateLinks", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateLinks, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateLinks, "()V", 1 },
	{ "readable", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readable_mindustry_logic_LExecutor_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readable_mindustry_logic_LExecutor_R_boolean, "(Lmindustry/logic/LExecutor;)Z", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_read_mindustry_logic_LVar_mindustry_logic_LVar, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_read_mindustry_logic_LVar_mindustry_logic_LVar, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "optionalLink", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_optionalLink_java_lang_String_R_mindustry_gen_Building, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_optionalLink_java_lang_String_R_mindustry_gen_Building, "(Ljava/lang/String;)Lmindustry/gen/Building;", 1 },
	{ "writable", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_writable_mindustry_logic_LExecutor_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_writable_mindustry_logic_LExecutor_R_boolean, "(Lmindustry/logic/LExecutor;)Z", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_write_mindustry_logic_LVar_mindustry_logic_LVar, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_write_mindustry_logic_LVar_mindustry_logic_LVar, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_config_R_Array1_byte, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_config_R_Array1_byte, "()[B", 1 },
	{ "relativeConnections", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_relativeConnections_R_arc_struct_Seq, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_relativeConnections_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "drawConfigure", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_drawConfigure, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_drawConfigure, "()V", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_drawSelect, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_drawSelect, "()V", 1 },
	{ "validLink", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "shouldShowConfigure", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "showEditDialog", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_showEditDialog, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_showEditDialog, "()V", 1 },
	{ "showEditDialog", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_showEditDialog_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_showEditDialog_boolean, "(Z)V", 1 },
	{ "onConfigureBuildTapped", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_version_R_byte, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "checkReadCode", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_checkReadCode, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_checkReadCode, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_afterReadAll, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_afterReadAll, "()V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "lambda$read$0", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$read$0_int_Array1_java_lang_String_Array1_java_lang_Object_arc_struct_IntSeq_arc_struct_FloatSeq, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$read$0_int_Array1_java_lang_String_Array1_java_lang_Object_arc_struct_IntSeq_arc_struct_FloatSeq, "(I[Ljava/lang/String;[Ljava/lang/Object;Larc/struct/IntSeq;Larc/struct/FloatSeq;)V", 4098 },
	{ "lambda$read$1", (intptr_t) SM_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$read$1_int_Array1_java_lang_String_Array1_java_lang_Object_arc_struct_IntSeq_arc_struct_FloatSeq_mindustry_logic_LAssembler, 0, "(I[Ljava/lang/String;[Ljava/lang/Object;Larc/struct/IntSeq;Larc/struct/FloatSeq;Lmindustry/logic/LAssembler;)V", 4106 },
	{ "lambda$write$0", (intptr_t) SM_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$write$0_mindustry_logic_LVar_R_boolean, 0, "(Lmindustry/logic/LVar;)Z", 4106 },
	{ "lambda$showEditDialog$0", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$showEditDialog$0_boolean_java_lang_String, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$showEditDialog$0_boolean_java_lang_String, "(ZLjava/lang/String;)V", 4098 },
	{ "lambda$drawSelect$1", (intptr_t) SM_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$drawSelect$1_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$drawSelect$0", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$drawSelect$0_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$drawSelect$0_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 4098 },
	{ "lambda$updateLinks$0", (intptr_t) SM_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$updateLinks$0_mindustry_world_blocks_logic_LogicBlock$LogicLink_R_boolean, 0, "(Lmindustry/world/blocks/logic/LogicBlock$LogicLink;)Z", 4106 },
	{ "lambda$updateTile$0", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$updateTile$0_mindustry_gen_Building_mindustry_world_blocks_logic_LogicBlock$LogicLink_mindustry_world_blocks_logic_LogicBlock$LogicLink_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$updateTile$0_mindustry_gen_Building_mindustry_world_blocks_logic_LogicBlock$LogicLink_mindustry_world_blocks_logic_LogicBlock$LogicLink_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/blocks/logic/LogicBlock$LogicLink;Lmindustry/world/blocks/logic/LogicBlock$LogicLink;)Z", 4098 },
	{ "lambda$updateCode$0", (intptr_t) SM_mindustry_world_blocks_logic_LogicBlock$LogicBuild_lambda$updateCode$0_mindustry_world_blocks_logic_LogicBlock$LogicLink_R_boolean, 0, "(Lmindustry/world/blocks/logic/LogicBlock$LogicLink;)Z", 4106 },
};

Class class_mindustry_world_blocks_logic_LogicBlock$LogicBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/LogicBlock$LogicBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_logic_LogicBlock$LogicBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_LogicBlock$LogicBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_LogicBlock$LogicBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_LogicBlock$LogicBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_logic_LogicBlock,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 44,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 331,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_LogicBlock$LogicBuild = registerClass(&class_mindustry_world_blocks_logic_LogicBlock$LogicBuild);

}

