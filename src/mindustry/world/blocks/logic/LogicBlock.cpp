#include "mindustry/world/blocks/logic/LogicBlock.h"
#include "java/lang/Integer.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "java/io/DataOutput.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/util/zip/InflaterInputStream.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/logic/LogicBlock.h"
#include "mindustry/maps/Map.h"
#include "java/util/Iterator.h"
#include "mindustry/world/meta/Stats.h"
#include "java/io/DataInputStream.h"
#include "mindustry/world/blocks/logic/LogicBlock_invoke_arc_func_Cons2_7.h"
#include "mindustry/world/blocks/logic/LogicBlock_invoke_arc_func_Boolf_1.h"
#include "mindustry/world/blocks/logic/LogicBlock_invoke_arc_func_Cons2_6.h"
#include "mindustry/world/blocks/logic/LogicBlock_invoke_arc_func_Cons2_5.h"
#include "mindustry/world/blocks/logic/LogicBlock_invoke_arc_func_Cons2_4.h"
#include "arc/func/Cons2.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "java/io/DataOutputStream.h"
#include "java/lang/RuntimeException.h"
#include "java/io/ByteArrayOutputStream.h"
#include "mindustry/world/Block.h"
#include "java/nio/charset/Charset.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/game/Rules.h"
#include "arc/struct/FloatSeq.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/logic/LExecutor.h"
#include "java/io/InputStream.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/io/IOException.h"
#include "java/io/FilterInputStream.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "java/lang/Math.h"
#include "java/lang/AutoCloseable.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicLink.h"
#include "java/io/ByteArrayInputStream.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "java/io/OutputStream.h"
#include "arc/util/Strings.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {

jint SF_mindustry_world_blocks_logic_LogicBlock_maxByteLen;
jint SF_mindustry_world_blocks_logic_LogicBlock_maxCompressedLen;
jint SF_mindustry_world_blocks_logic_LogicBlock_maxLinks;
jint SF_mindustry_world_blocks_logic_LogicBlock_maxNameLength;
jobject SF_mindustry_world_blocks_logic_LogicBlock_usedBuildings;
jobject SF_mindustry_world_blocks_logic_LogicBlock_waitIndices;
jobject SF_mindustry_world_blocks_logic_LogicBlock_waitValues;

void mark_mindustry_world_blocks_logic_LogicBlock(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_logic_LogicBlock_usedBuildings)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicBlock_usedBuildings)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicBlock_usedBuildings, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicBlock_waitIndices)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicBlock_waitIndices)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicBlock_waitIndices, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicBlock_waitValues)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicBlock_waitValues)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicBlock_waitValues, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Block(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_logic_LogicBlock *) object;
}

void init_mindustry_world_blocks_logic_LogicBlock_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(45);
	((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK((frame[0].o)))->F_maxInstructionScale = (jint(5));
	LINE_NUMBER(46);
	((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK((frame[0].o)))->F_instructionsPerTick = (jint(1));
	LINE_NUMBER(48);
	((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK((frame[0].o)))->F_maxInstructionsPerTick = (40);
	LINE_NUMBER(49);
	((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(80.0f));
	LINE_NUMBER(53);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(54);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(55);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurable = (jint(1));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_logic;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(57);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_schematicPriority = (jint(5));
	LINE_NUMBER(58);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ignoreResizeConfig = (jint(1));
	LINE_NUMBER(59);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawCached = (jint(1));
	LINE_NUMBER(60);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawDynamic = (jint(0));
	LINE_NUMBER(63);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envEnabled = (jint(-1));
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) getArrayClass(&class_byte, 1));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_4(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_logic_LogicBlock_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_java_lang_String);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_5(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_logic_LogicBlock_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_java_lang_Character);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_6(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_logic_LogicBlock_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_java_lang_Integer);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_7(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Cons2_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_logic_LogicBlock_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicBlock_checkForceDark_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:checkForceDark", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:accessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_privileged) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_playtestingMap;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditWorldProcessors) == 0) goto label_2;
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

jbool M_mindustry_world_blocks_logic_LogicBlock_canBreak_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:canBreak", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_logic_LogicBlock_getLinkName_mindustry_world_Block_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:getLinkName", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	frame[1].o = sp[0].o;
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (45));
	if (temp0 == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"-"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(134);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) < (jint(2))) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1))))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1))))), (((jobject) createStringLiteral(ctx, u8"large"_j))));
	if (temp0 != 0) goto label_6;
	}
	{
	jint temp0 = (jint)SM_arc_util_Strings_canParseFloat_java_lang_String_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1))))));
	if (temp0 == 0) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(135);
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(2)))));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(137);
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)))));
	}
label_2:;
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_logic_LogicBlock_compress_java_lang_String_arc_struct_Seq_R_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:compress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	frame[0].o = param0 ? param0 : (jobject)createStringLiteral(ctx, u8""_j);
	frame[1].o = param1;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_charset;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)SM_mindustry_world_blocks_logic_LogicBlock_compress_Array1_byte_arc_struct_Seq_R_Array1_byte(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_logic_LogicBlock_compress_Array1_byte_arc_struct_Seq_R_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:compress", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	if (param0 == nullptr) {
		clinit_mindustry_Vars(ctx);
		jobject emptyStr = (jobject)createStringLiteral(ctx, u8""_j);
		param0 = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, emptyStr)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, emptyStr, (jobject)SF_mindustry_Vars_charset);
	}
	if (param1 == nullptr) {
		clinit_arc_struct_Seq(ctx);
		param1 = gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq(ctx, param1);
	}
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(149);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(150);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	clinit_java_util_zip_DeflaterOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_DeflaterOutputStream);
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream(ctx, sp[1].o, (frame[2].o));
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(153);
	((func_java_io_DataOutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_write_int])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(156);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, (frame[3].o), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(157);
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(159);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, (frame[3].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink, sp[0].o));
	LINE_NUMBER(161);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[5].o)))->F_name;
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(162);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, (frame[3].o), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[5].o)))->F_x));
	LINE_NUMBER(163);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, (frame[3].o), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[5].o)))->F_y));
	LINE_NUMBER(164);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(166);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[3].o));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(169);
	frame[2].o = sp[0].o;
	LINE_NUMBER(170);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:setStats", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(178);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_privileged) != 0) goto label_2;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_linkRange;
	jfloat temp0 = ((jfloat)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK((frame[0].o)))->F_range) / (jfloat(8.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_instructions;
	jfloat temp1 = jfloat((((jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK((frame[0].o)))->F_instructionsPerTick) * (60)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	}
label_2:;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:drawPlace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(186);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_privileged) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(188);
	SM_mindustry_graphics_Drawf_circles_float_float_float(ctx, ((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK((frame[0].o)))->F_range));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_LogicBlock_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:pointConfig", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(193);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_byte, 1))) == 0) goto label_14;
	}
	{
	frame[3].o = (checkCast(ctx, getArrayClass(&class_byte, 1), (frame[1].o)));
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) > (16000)) goto label_14;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_12; } // goto label_10
	}
	{
	LINE_NUMBER(195);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[2].o, (frame[3].o));
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(197);
	jint temp0 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[4].o));
	LINE_NUMBER(199);
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[4].o));
	frame[5].i = temp1;
	LINE_NUMBER(201);
	if ((frame[5].i) <= (jint(102400))) goto label_18;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Logic data too long or malformed! Length: \u0001"_j.string, 1, boxInteger(ctx, (frame[5].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(204);
	((func_java_io_DataInputStream_readFully_Array1_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte])(ctx, (frame[4].o), (frame[6].o));
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (6000));
	frame[7].i = temp1;
	LINE_NUMBER(208);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(210);
	frame[9].i = (jint(0));
	}
label_23:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_24;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[4].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[4].o));
	frame[11].i = temp0;
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[4].o));
	frame[12].i = temp1;
	LINE_NUMBER(214);
	sp[0].o = frame[2].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_p1;
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, sp[1].o, (frame[11].i), (frame[12].i));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(215);
	sp[0].o = frame[8].o;
	clinit_mindustry_world_blocks_logic_LogicBlock$LogicLink(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_p1;
	jint temp2 = (jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_p1;
	init_mindustry_world_blocks_logic_LogicBlock$LogicLink_int_int_java_lang_String_boolean(ctx, sp[1].o, temp2, ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[2].o))->F_y), (frame[10].o), (jint(1)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(210);
	INST_IINC(9, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)SM_mindustry_world_blocks_logic_LogicBlock_compress_Array1_byte_arc_struct_Seq_R_Array1_byte(ctx, (frame[6].o), (frame[8].o));
	frame[9].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(219);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (frame[9].o);
	}
label_2:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_10;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_10; }
	LINE_NUMBER(195);
	INST_ASTORE(5);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_31;
label_6:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[5].o), (frame[6].o));
	}
label_31:;
	INST_ALOAD(5);
	INST_ATHROW();
	label_10:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(219);
	INST_ASTORE(4);
label_14:;
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock_lambda$new$3_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_Integer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:lambda$new$3", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[1].o, temp0);
	jint temp1 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp1 != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(90);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	LINE_NUMBER(91);
	jint temp1 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[3].o));
	frame[4].i = temp1;
	jint temp2 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[3].o));
	frame[5].i = temp2;
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[1].o)))->F_links;
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[1].o)))->F_links;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock_invoke_arc_func_Boolf_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	jint temp3 = frame[6].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[1].o)))->F_links;
	if (temp3 <= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_autoResetEnabled) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_lastDisabler;
	if (sp[0].o != (frame[1].o)) goto label_10;
	}
	{
	LINE_NUMBER(103);
	((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_enabled = (jint(1));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(106);
	clinit_mindustry_world_blocks_logic_LogicBlock$LogicLink(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink);
	jint temp0 = frame[4].i;
	jint temp1 = frame[5].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	sp[1].o = (jobject)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_findLinkName_mindustry_world_Block_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_findLinkName_mindustry_world_Block_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	init_mindustry_world_blocks_logic_LogicBlock$LogicLink_int_int_java_lang_String_boolean(ctx, sp[0].o, temp0, temp1, sp[1].o, (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(107);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[1].o)))->F_executor;
	((func_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[1].o)))->F_links;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	}
label_10:;
	{
	LINE_NUMBER(111);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateLinks) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_updateLinks])(ctx, (frame[1].o));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_logic_LogicBlock_lambda$new$4_mindustry_gen_Building_mindustry_world_blocks_logic_LogicBlock$LogicBuild_mindustry_world_blocks_logic_LogicBlock$LogicLink_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:lambda$new$4", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(95);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[2].o)))->F_y));
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(96);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[1].o)))->F_executor;
	((func_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	}
label_4:;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock_lambda$new$2_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_Character(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:lambda$new$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_privileged) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_Character_charValue_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Character_charValue_R_char])(ctx, (frame[2].o));
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_iconTag = temp0;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock_lambda$new$1_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:lambda$new$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_privileged) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(74);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= (32)) goto label_3;
	}
	{
	LINE_NUMBER(75);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[1].o)))->F_tag = (jref) (frame[2].o);
	}
label_3:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock_lambda$new$0_mindustry_world_blocks_logic_LogicBlock$LogicBuild_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(68);
	((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readCompressed_Array1_byte_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_readCompressed_Array1_byte_boolean])(ctx, (frame[1].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_logic_LogicBlock(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
	SF_mindustry_world_blocks_logic_LogicBlock_maxByteLen = jint(102400);
	SF_mindustry_world_blocks_logic_LogicBlock_maxCompressedLen = jint(16000);
	SF_mindustry_world_blocks_logic_LogicBlock_maxLinks = jint(6000);
	SF_mindustry_world_blocks_logic_LogicBlock_maxNameLength = jint(32);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	{
	LINE_NUMBER(41);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	SF_mindustry_world_blocks_logic_LogicBlock_usedBuildings = sp[0].o;
	LINE_NUMBER(42);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	SF_mindustry_world_blocks_logic_LogicBlock_waitIndices = sp[0].o;
	LINE_NUMBER(43);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[0].o);
	clinit_mindustry_world_blocks_logic_LogicBlock(ctx);
	SF_mindustry_world_blocks_logic_LogicBlock_waitValues = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_logic_LogicBlock[] {
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
	(void *) M_mindustry_world_Block_init,
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
	(void *) M_mindustry_world_blocks_logic_LogicBlock_setStats,
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
	(void *) M_mindustry_world_blocks_logic_LogicBlock_drawPlace_int_int_int_boolean,
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
	(void *) M_mindustry_world_blocks_logic_LogicBlock_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock_checkForceDark_mindustry_world_Tile_R_boolean,
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
	(void *) M_mindustry_world_blocks_logic_LogicBlock_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
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
	(void *) M_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicBlock_lambda$new$3_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_Integer,
	(void *) M_mindustry_world_blocks_logic_LogicBlock_lambda$new$2_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_Character,
	(void *) M_mindustry_world_blocks_logic_LogicBlock_lambda$new$1_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_String,
	(void *) M_mindustry_world_blocks_logic_LogicBlock_lambda$new$0_mindustry_world_blocks_logic_LogicBlock$LogicBuild_Array1_byte,
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
	{ "accessible", "()Z" },
	{ "lambda$new$3", "(Lmindustry/world/blocks/logic/LogicBlock$LogicBuild;Ljava/lang/Integer;)V" },
	{ "lambda$new$2", "(Lmindustry/world/blocks/logic/LogicBlock$LogicBuild;Ljava/lang/Character;)V" },
	{ "lambda$new$1", "(Lmindustry/world/blocks/logic/LogicBlock$LogicBuild;Ljava/lang/String;)V" },
	{ "lambda$new$0", "(Lmindustry/world/blocks/logic/LogicBlock$LogicBuild;[B)V" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_logic_LogicBlock$LogicLink,
	&class_mindustry_world_blocks_logic_LogicBlock$LogicBuild,
};

static FieldMetadata fields[] {
	{ "maxByteLen", &class_int, (intptr_t) &SF_mindustry_world_blocks_logic_LogicBlock_maxByteLen, "I", 26 },
	{ "maxCompressedLen", &class_int, (intptr_t) &SF_mindustry_world_blocks_logic_LogicBlock_maxCompressedLen, "I", 26 },
	{ "maxLinks", &class_int, (intptr_t) &SF_mindustry_world_blocks_logic_LogicBlock_maxLinks, "I", 26 },
	{ "maxNameLength", &class_int, (intptr_t) &SF_mindustry_world_blocks_logic_LogicBlock_maxNameLength, "I", 25 },
	{ "usedBuildings", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_world_blocks_logic_LogicBlock_usedBuildings, "Larc/struct/IntSet;", 26 },
	{ "waitIndices", &class_arc_struct_IntSeq, (intptr_t) &SF_mindustry_world_blocks_logic_LogicBlock_waitIndices, "Larc/struct/IntSeq;", 26 },
	{ "waitValues", &class_arc_struct_FloatSeq, (intptr_t) &SF_mindustry_world_blocks_logic_LogicBlock_waitValues, "Larc/struct/FloatSeq;", 26 },
	{ "maxInstructionScale", &class_int, offsetof(mindustry_world_blocks_logic_LogicBlock, F_maxInstructionScale), "I", 1 },
	{ "instructionsPerTick", &class_int, offsetof(mindustry_world_blocks_logic_LogicBlock, F_instructionsPerTick), "I", 1 },
	{ "maxInstructionsPerTick", &class_int, offsetof(mindustry_world_blocks_logic_LogicBlock, F_maxInstructionsPerTick), "I", 1 },
	{ "range", &class_float, offsetof(mindustry_world_blocks_logic_LogicBlock, F_range), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_LogicBlock_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "checkForceDark", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock_checkForceDark_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock_checkForceDark_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "accessible", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock_accessible_R_boolean, "()Z", 1 },
	{ "canBreak", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock_canBreak_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock_canBreak_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "getLinkName", (intptr_t) SM_mindustry_world_blocks_logic_LogicBlock_getLinkName_mindustry_world_Block_R_java_lang_String, 0, "(Lmindustry/world/Block;)Ljava/lang/String;", 9 },
	{ "compress", (intptr_t) SM_mindustry_world_blocks_logic_LogicBlock_compress_java_lang_String_arc_struct_Seq_R_Array1_byte, 0, "(Ljava/lang/String;Larc/struct/Seq;)[B", 9 },
	{ "compress", (intptr_t) SM_mindustry_world_blocks_logic_LogicBlock_compress_Array1_byte_arc_struct_Seq_R_Array1_byte, 0, "([BLarc/struct/Seq;)[B", 9 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock_setStats, VTABLE_mindustry_world_blocks_logic_LogicBlock_setStats, "()V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_logic_LogicBlock_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "pointConfig", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object, VTABLE_mindustry_world_blocks_logic_LogicBlock_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object, "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;", 1 },
	{ "lambda$new$3", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock_lambda$new$3_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_Integer, VTABLE_mindustry_world_blocks_logic_LogicBlock_lambda$new$3_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_Integer, "(Lmindustry/world/blocks/logic/LogicBlock$LogicBuild;Ljava/lang/Integer;)V", 4098 },
	{ "lambda$new$4", (intptr_t) SM_mindustry_world_blocks_logic_LogicBlock_lambda$new$4_mindustry_gen_Building_mindustry_world_blocks_logic_LogicBlock$LogicBuild_mindustry_world_blocks_logic_LogicBlock$LogicLink_R_boolean, 0, "(Lmindustry/gen/Building;Lmindustry/world/blocks/logic/LogicBlock$LogicBuild;Lmindustry/world/blocks/logic/LogicBlock$LogicLink;)Z", 4106 },
	{ "lambda$new$2", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock_lambda$new$2_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_Character, VTABLE_mindustry_world_blocks_logic_LogicBlock_lambda$new$2_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_Character, "(Lmindustry/world/blocks/logic/LogicBlock$LogicBuild;Ljava/lang/Character;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock_lambda$new$1_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_String, VTABLE_mindustry_world_blocks_logic_LogicBlock_lambda$new$1_mindustry_world_blocks_logic_LogicBlock$LogicBuild_java_lang_String, "(Lmindustry/world/blocks/logic/LogicBlock$LogicBuild;Ljava/lang/String;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock_lambda$new$0_mindustry_world_blocks_logic_LogicBlock$LogicBuild_Array1_byte, VTABLE_mindustry_world_blocks_logic_LogicBlock_lambda$new$0_mindustry_world_blocks_logic_LogicBlock$LogicBuild_Array1_byte, "(Lmindustry/world/blocks/logic/LogicBlock$LogicBuild;[B)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_logic_LogicBlock, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_logic_LogicBlock{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/LogicBlock",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_logic_LogicBlock),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_LogicBlock,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_LogicBlock,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_LogicBlock,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 194,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_LogicBlock = registerClass(&class_mindustry_world_blocks_logic_LogicBlock);

}
