#include "mindustry/net/NetworkIO.h"
#include "mindustry/type/MapLocales.h"
#include "mindustry/net/NetworkIO_invoke_arc_func_Cons_2.h"
#include "mindustry/net/NetworkIO_invoke_arc_func_Cons_3.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/core/Version.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "java/io/DataOutput.h"
#include "arc/struct/StringMap.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "mindustry/gen/Entityc.h"
#include "arc/struct/Seq.h"
#include "arc/Settings.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/Map.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "java/io/DataInputStream.h"
#include "arc/util/Time.h"
#include "mindustry/mod/DataAssetCache.h"
#include "java/io/DataInput.h"
#include "mindustry/logic/GlobalVars.h"
#include "mindustry/core/World_Context.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveIO.h"
#include "java/io/DataOutputStream.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "arc/util/io/Writes.h"
#include "mindustry/io/SaveReadState.h"
#include "arc/math/Rand.h"
#include "java/nio/charset/Charset.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Groups.h"
#include "arc/files/Fi.h"
#include "java/io/InputStream.h"
#include "arc/func/Cons.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/String.h"
#include "mindustry/io/SaveFileReader.h"
#include "mindustry/world/WorldContext.h"
#include "java/nio/channels/ClosedChannelException.h"
#include "java/io/IOException.h"
#include "mindustry/net/Administration.h"
#include "mindustry/game/Gamemode.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/AutoCloseable.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/io/JsonIO.h"
#include "java/lang/Enum.h"
#include "mindustry/net/NetworkIO_invoke_arc_func_Boolf_1.h"
#include "mindustry/net/NetworkIO.h"
#include "java/io/OutputStream.h"
#include "arc/util/io/Reads.h"
#include "mindustry/net/Administration_Config.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Player.h"
#include "mindustry/io/SaveVersion.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/net/Host.h"
#include "mindustry/ctype/ContentType.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_net_NetworkIO(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_NetworkIO *) object;
}

void clinit_mindustry_net_NetworkIO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_NetworkIO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_NetworkIO_writeWorld_mindustry_gen_Player_java_io_OutputStream(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:writeWorld", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(32);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(34);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(35);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_researched;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(36);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_15:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_12;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(37);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	LINE_NUMBER(38);
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_20;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[8].o)));
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlocked_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlocked_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[9].o)))->F_techNode;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(39);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_researched;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[9].o));
	}
label_20:;
	LINE_NUMBER(41);
	goto label_17;
label_18:;
	{
	LINE_NUMBER(36);
	INST_IINC(5, 1);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getSaveWriter_R_mindustry_io_SaveVersion(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(48);
	((func_mindustry_io_SaveVersion_writeDataPatches_java_io_DataOutput_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeDataPatches_java_io_DataOutput_boolean])(ctx, (frame[3].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(50);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(51);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_mapLocales;
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_map;
	sp[2].o = (jobject)((mindustry_maps_Map *) NULL_CHECK(sp[2].o))->F_tags;
	((func_mindustry_io_SaveVersion_writeStringMap_java_io_DataOutput_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeStringMap_java_io_DataOutput_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(54);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave));
	LINE_NUMBER(55);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((func_java_io_DataOutputStream_writeFloat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeFloat_float])(ctx, sp[0].o, ((jfloat)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wavetime));
	LINE_NUMBER(56);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((func_java_io_DataOutputStream_writeDouble_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeDouble_double])(ctx, sp[0].o, ((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_tick));
	LINE_NUMBER(57);
	sp[0].o = frame[2].o;
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_GlobalVars_rand;
	((func_java_io_DataOutputStream_writeLong_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeLong_long])(ctx, sp[0].o, ((jlong)((arc_math_Rand *) NULL_CHECK(sp[1].o))->F_seed0));
	LINE_NUMBER(58);
	sp[0].o = frame[2].o;
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_GlobalVars_rand;
	((func_java_io_DataOutputStream_writeLong_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeLong_long])(ctx, sp[0].o, ((jlong)((arc_math_Rand *) NULL_CHECK(sp[1].o))->F_seed1));
	LINE_NUMBER(60);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, (frame[2].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_arc_util_io_Writes(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_Writes);
	init_arc_util_io_Writes_java_io_DataOutput(ctx, sp[1].o, (frame[2].o));
	((func_mindustry_gen_Player_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_write_arc_util_io_Writes])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	((func_mindustry_io_SaveVersion_writeContentHeader_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeContentHeader_java_io_DataOutput])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(64);
	((func_mindustry_io_SaveVersion_writeMap_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeMap_java_io_DataOutput])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(66);
	((func_mindustry_io_SaveVersion_writeEntityMapping_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeEntityMapping_java_io_DataOutput])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(67);
	((func_mindustry_io_SaveVersion_writeTeamBlocks_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeTeamBlocks_java_io_DataOutput])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(68);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp += 2;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_39;
	}
	{
	{ /* InvokeDynamic */
		clinit_mindustry_net_NetworkIO_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_net_NetworkIO_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_net_NetworkIO_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_40;
	}
label_39:;
	INST_ACONST_NULL();
label_40:;
	{
	sp -= 3;
	((func_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput_arc_func_Boolf])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(70);
	((func_mindustry_io_SaveVersion_writeMarkers_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeMarkers_java_io_DataOutput])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(71);
	((func_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean])(ctx, (frame[3].o), (frame[2].o), (jint(1)));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(72);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[2].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(32);
	INST_ASTORE(3);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_43;
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_43:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(74);
	goto label_44;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(72);
	frame[2].o = sp[0].o;
	LINE_NUMBER(73);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_44:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_NetworkIO_loadWorld_java_io_InputStream(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:loadWorld", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_15; } // goto label_12
	}
	{
	LINE_NUMBER(79);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getSaveWriter_R_mindustry_io_SaveVersion(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(81);
	SM_arc_util_Time_clear(ctx);
	LINE_NUMBER(82);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_io_SaveReadState(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_SaveReadState);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	sp[3].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[3].o))->F_context;
	init_mindustry_io_SaveReadState_mindustry_world_WorldContext(ctx, sp[2].o, sp[3].o);
	((func_mindustry_io_SaveVersion_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = ((jobject) &class_mindustry_game_Rules);
	sp[2].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules = (jref) (checkCast(ctx, &class_mindustry_game_Rules, sp[1].o));
	LINE_NUMBER(85);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = ((jobject) &class_mindustry_type_MapLocales);
	sp[2].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales = (jref) (checkCast(ctx, &class_mindustry_type_MapLocales, sp[1].o));
	LINE_NUMBER(86);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_maps_Map(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_Map);
	sp[2].o = (jobject)((func_mindustry_io_SaveVersion_readStringMap_java_io_DataInput_R_arc_struct_StringMap) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readStringMap_java_io_DataInput_R_arc_struct_StringMap])(ctx, (frame[2].o), (frame[1].o));
	init_mindustry_maps_Map_arc_struct_StringMap(ctx, sp[1].o, sp[2].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(88);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave = temp0;
	LINE_NUMBER(89);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jfloat temp1 = (jfloat)((func_java_io_DataInputStream_readFloat_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readFloat_R_float])(ctx, (frame[1].o));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wavetime = temp1;
	LINE_NUMBER(90);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jdouble temp2 = (jdouble)((func_java_io_DataInputStream_readDouble_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readDouble_R_double])(ctx, (frame[1].o));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_tick = temp2;
	LINE_NUMBER(91);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_rand;
	jlong temp3 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, (frame[1].o));
	((arc_math_Rand *) NULL_CHECK(sp[0].o))->F_seed0 = temp3;
	LINE_NUMBER(92);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_rand;
	jlong temp4 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, (frame[1].o));
	((arc_math_Rand *) NULL_CHECK(sp[0].o))->F_seed1 = temp4;
	LINE_NUMBER(94);
	clinit_arc_util_io_Reads(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Reads);
	init_arc_util_io_Reads_java_io_DataInput(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(96);
	SM_mindustry_gen_Groups_clear(ctx);
	LINE_NUMBER(97);
	jint temp5 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	frame[4].i = temp5;
	LINE_NUMBER(98);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_reset])(ctx, sp[0].o);
	LINE_NUMBER(99);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_read_arc_util_io_Reads) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_read_arc_util_io_Reads])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(100);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_id = (frame[4].i);
	LINE_NUMBER(101);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_add])(ctx, sp[0].o);
	LINE_NUMBER(103);
	clinit_mindustry_io_SaveReadState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_SaveReadState);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[1].o))->F_context;
	init_mindustry_io_SaveReadState_mindustry_world_WorldContext(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(105);
	((func_mindustry_io_SaveVersion_readContentHeader_java_io_DataInput) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readContentHeader_java_io_DataInput])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(106);
	((func_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState])(ctx, (frame[2].o), (frame[1].o), (frame[5].o));
	LINE_NUMBER(107);
	((func_mindustry_io_SaveVersion_readEntities_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readEntities_java_io_DataInput_mindustry_io_SaveReadState])(ctx, (frame[2].o), (frame[1].o), (frame[5].o));
	LINE_NUMBER(108);
	((func_mindustry_io_SaveVersion_readMarkers_java_io_DataInput) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readMarkers_java_io_DataInput])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(109);
	((func_mindustry_io_SaveVersion_readCustomChunks_java_io_DataInput) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readCustomChunks_java_io_DataInput])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(111);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	{ /* InvokeDynamic */
		clinit_mindustry_net_NetworkIO_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_net_NetworkIO_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_net_NetworkIO_invoke_arc_func_Cons_2);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_net_NetworkIO_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_net_NetworkIO_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_net_NetworkIO_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(113);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[1].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(79);
	INST_ASTORE(2);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_41;
label_6:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[2].o), (frame[3].o));
	}
label_41:;
	INST_ALOAD(2);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(116);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(117);
	goto label_43;
	}
label_10:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_12;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_12; }
	{
	sp -= 1;
	LINE_NUMBER(113);
	frame[1].o = sp[0].o;
	LINE_NUMBER(114);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	LINE_NUMBER(116);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(117);
	throwException(ctx, (frame[6].o));	}
label_43:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_NetworkIO_writeRequiredAssets_java_io_OutputStream_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:writeRequiredAssets", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(122);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(123);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, (frame[2].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(125);
	frame[3].i = (jint(0));
	}
label_13:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_mindustry_mod_data_DataAsset, sp[0].o));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[4].o)))->F_byteHash;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[4].o)))->F_path;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid asset (missing hash): \u0001"_j.string, 1, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[4].o)))->F_byteHash;
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(125);
	INST_IINC(3, 1);
	goto label_13;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(130);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[2].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(122);
	INST_ASTORE(3);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_18;
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_18:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(132);
	goto label_19;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(130);
	frame[2].o = sp[0].o;
	LINE_NUMBER(131);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_19:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_net_NetworkIO_readRequiredAssets_java_io_InputStream_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:readRequiredAssets", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(136);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(137);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (32));
	frame[2].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(138);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(140);
	frame[5].i = (jint(0));
	}
label_15:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_1;
	}
	{
	LINE_NUMBER(141);
	((func_java_io_DataInputStream_readFully_Array1_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(142);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_mod_DataAssetCache_encodeHash_Array1_byte_R_java_lang_String(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(140);
	INST_IINC(5, 1);
	goto label_15;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(144);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(138);
	INST_ASTORE(4);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_19;
label_6:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[4].o), (frame[5].o));
	}
label_19:;
	INST_ALOAD(4);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(146);
	goto label_20;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(144);
	frame[3].o = sp[0].o;
	LINE_NUMBER(145);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_NetworkIO_writeAssets_java_io_OutputStream_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:writeAssets", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(151);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(152);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, (frame[2].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_mod_data_DataAsset, sp[0].o));
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(156);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, (frame[2].o), (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	LINE_NUMBER(157);
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, (frame[2].o), (frame[6].o));
	LINE_NUMBER(158);
	goto label_13;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(159);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[2].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(151);
	INST_ASTORE(3);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_19;
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_19:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(161);
	goto label_20;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(159);
	frame[2].o = sp[0].o;
	LINE_NUMBER(160);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_20:;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_NetworkIO_loadAssets_java_io_InputStream(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:loadAssets", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_nio_channels_ClosedChannelException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(165);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(166);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(167);
	frame[3].i = (jint(0));
	}
label_13:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(169);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(170);
	((func_java_io_DataInputStream_readFully_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte])(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_assetCache;
	sp[0].o = (jobject)((func_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(167);
	INST_IINC(3, 1);
	goto label_13;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(173);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[1].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(165);
	INST_ASTORE(2);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_19;
label_6:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[2].o), (frame[3].o));
	}
label_19:;
	INST_ALOAD(2);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(175);
	goto label_20;
label_10:;
	LINE_NUMBER(173);
	INST_ASTORE(1);
label_20:;
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_NetworkIO_packTexture_java_io_OutputStream_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:packTexture", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(179);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(180);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(181);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, (frame[3].o), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(182);
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, (frame[3].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(183);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[3].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(179);
	INST_ASTORE(4);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_14;
label_6:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[4].o), (frame[5].o));
	}
label_14:;
	INST_ALOAD(4);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(185);
	goto label_15;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(183);
	frame[3].o = sp[0].o;
	LINE_NUMBER(184);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_15:;
	LINE_NUMBER(186);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_net_NetworkIO_writeServerData_R_java_nio_ByteBuffer(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:writeServerData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	{
	LINE_NUMBER(189);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	{
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_serverName;
	sp[0].o = (jobject)((func_mindustry_net_Administration$Config_string_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_string_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
	sp[-1].o = (jobject) ((mindustry_gen_Player *) NULL_CHECK(sp[-1].o))->F_name;
label_2:;
	{
	sp -= 1;
	frame[0].o = sp[0].o;
	LINE_NUMBER(190);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_4;
	}
	{
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_desc;
	sp[0].o = (jobject)((func_mindustry_net_Administration$Config_string_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_string_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"off"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_desc;
	sp[0].o = (jobject)((func_mindustry_net_Administration$Config_string_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_string_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_5:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(191);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map;
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(193);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocate_int_R_java_nio_ByteBuffer(ctx, (500));
	frame[3].o = sp[0].o;
	LINE_NUMBER(195);
	SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String_int(ctx, (frame[3].o), (frame[0].o), (100));
	LINE_NUMBER(196);
	SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String_int(ctx, (frame[3].o), (frame[2].o), (64));
	LINE_NUMBER(198);
	sp[0].o = frame[3].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"totalPlayers"_j));
	clinit_mindustry_gen_Groups(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[3].o);
	jint temp1 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[1].o, sp[2].o, temp0);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(199);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave));
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, (frame[3].o), (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build));
	LINE_NUMBER(201);
	sp[0].o = frame[3].o;
	clinit_mindustry_core_Version(ctx);
	sp[1].o = (jobject)SF_mindustry_core_Version_type;
	SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(203);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((func_mindustry_game_Rules_mode_R_mindustry_game_Gamemode) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_mode_R_mindustry_game_Gamemode])(ctx, sp[1].o);
	jint temp2 = (jint)((func_mindustry_game_Gamemode_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Gamemode_ordinal_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, (jbyte(temp2)));
	LINE_NUMBER(204);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_netServer;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[1].o))->F_admins;
	jint temp3 = (jint)((func_mindustry_net_Administration_getPlayerLimit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration_getPlayerLimit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp3);
	LINE_NUMBER(206);
	SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String_int(ctx, (frame[3].o), (frame[1].o), (100));
	LINE_NUMBER(207);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_modeName;
	sp += 1;
	if (sp[0].o != nullptr) goto label_18;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_19;
label_18:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_modeName;
	sp += 1;
	}
label_19:;
	{
	sp -= 2;
	SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String_int(ctx, sp[0].o, sp[1].o, (50));
	LINE_NUMBER(208);
	sp[0].o = frame[3].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"port"_j))), (6567));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer])(ctx, sp[0].o, (jshort(temp0)));
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_NetworkIO_readServerData_int_java_lang_String_java_nio_ByteBuffer_R_mindustry_net_Host(jcontext ctx, jint param0, jobject param1, jobject param2) {
	jtype frame[31];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:readServerData", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)SM_mindustry_net_NetworkIO_readString_java_nio_ByteBuffer_R_java_lang_String(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_mindustry_net_NetworkIO_readString_java_nio_ByteBuffer_R_java_lang_String(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(216);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(217);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, (frame[2].o));
	frame[6].i = temp1;
	LINE_NUMBER(218);
	jint temp2 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, (frame[2].o));
	frame[7].i = temp2;
	LINE_NUMBER(219);
	sp[0].o = (jobject)SM_mindustry_net_NetworkIO_readString_java_nio_ByteBuffer_R_java_lang_String(ctx, (frame[2].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(221);
	jint temp3 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, (frame[2].o));
	frame[9].i = temp3;
	LINE_NUMBER(222);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_all;
	jint temp4 = frame[9].i;
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_all;
	sp += 1;
	if (temp4 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	INST_ILOAD(9);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, sp[1].i));
	LINE_NUMBER(223);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, (frame[2].o));
	frame[11].i = temp0;
	LINE_NUMBER(225);
	sp[0].o = (jobject)SM_mindustry_net_NetworkIO_readString_java_nio_ByteBuffer_R_java_lang_String(ctx, (frame[2].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(226);
	sp[0].o = (jobject)SM_mindustry_net_NetworkIO_readString_java_nio_ByteBuffer_R_java_lang_String(ctx, (frame[2].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(227);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_getShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_getShort_R_short])(ctx, (frame[2].o));
	frame[14].i = temp1;
	LINE_NUMBER(228);
	if ((frame[14].i) == 0) goto label_15;
	}
	INST_ILOAD(14);
	goto label_16;
label_15:;
	INST_SIPUSH(6567);
label_16:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(230);
	clinit_mindustry_net_Host(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Host);
	jint temp0 = frame[0].i;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	jint temp1 = frame[15].i;
	sp[3].o = frame[4].o;
	jint temp2 = frame[6].i;
	jint temp3 = frame[5].i;
	jint temp4 = frame[7].i;
	sp[4].o = frame[8].o;
	sp[5].o = frame[10].o;
	jint temp5 = frame[11].i;
	sp[6].o = frame[12].o;
	jint temp6 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[13].o));
	jobject temp7 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp8 = sp[2].o;
	sp[2].i = temp0;
	jobject temp9 = sp[3].o;
	sp[3].o = temp7;
	jobject temp10 = sp[4].o;
	sp[4].o = temp8;
	jobject temp11 = sp[5].o;
	sp[5].i = temp1;
	jobject temp12 = sp[6].o;
	sp[6].o = temp9;
	sp[7].i = temp2;
	sp[8].i = temp3;
	sp[9].i = temp4;
	sp[10].o = temp10;
	sp[11].o = temp11;
	sp[12].i = temp5;
	sp[13].o = temp12;
	sp += 14;
	if (temp6 == 0) goto label_18;
	}
	INST_ACONST_NULL();
	goto label_19;
label_18:;
	INST_ALOAD(13);
label_19:;
	POP_N(14); // Pop method args
	init_mindustry_net_Host_int_java_lang_String_java_lang_String_int_java_lang_String_int_int_int_java_lang_String_mindustry_game_Gamemode_int_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].i, sp[2].o, sp[3].o, sp[4].i, sp[5].o, sp[6].i, sp[7].i, sp[8].i, sp[9].o, sp[10].o, sp[11].i, sp[12].o, sp[13].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:writeString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(234);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_charset;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(236);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_byte_int_int_R_Array1_byte(ctx, (frame[3].o), (jint(0)), (frame[2].i));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (jbyte((((jarray) nullCheck(ctx, (frame[3].o)))->length))));
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:writeString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(245);
	SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (32));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_NetworkIO_readString_java_nio_ByteBuffer_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:readString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(249);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, (frame[0].o));
	frame[1].i = (jshort((temp0 & (255))));
	LINE_NUMBER(250);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(252);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_charset;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_NetworkIO_lambda$loadWorld$1_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:lambda$loadWorld$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(112);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_Unit_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_id_R_int])(ctx, (frame[0].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_NetworkIO_lambda$loadWorld$0_mindustry_gen_Entityc(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:lambda$loadWorld$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(111);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[0].o)))(ctx, (frame[0].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_NetworkIO_lambda$writeWorld$0_mindustry_gen_Player_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetworkIO:lambda$writeWorld$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetworkIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
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

void *vtable_mindustry_net_NetworkIO[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_NetworkIO, 0, "()V", 1 },
	{ "writeWorld", (intptr_t) SM_mindustry_net_NetworkIO_writeWorld_mindustry_gen_Player_java_io_OutputStream, 0, "(Lmindustry/gen/Player;Ljava/io/OutputStream;)V", 9 },
	{ "loadWorld", (intptr_t) SM_mindustry_net_NetworkIO_loadWorld_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 9 },
	{ "writeRequiredAssets", (intptr_t) SM_mindustry_net_NetworkIO_writeRequiredAssets_java_io_OutputStream_arc_struct_Seq, 0, "(Ljava/io/OutputStream;Larc/struct/Seq;)V", 9 },
	{ "readRequiredAssets", (intptr_t) SM_mindustry_net_NetworkIO_readRequiredAssets_java_io_InputStream_R_arc_struct_Seq, 0, "(Ljava/io/InputStream;)Larc/struct/Seq;", 9 },
	{ "writeAssets", (intptr_t) SM_mindustry_net_NetworkIO_writeAssets_java_io_OutputStream_arc_struct_Seq, 0, "(Ljava/io/OutputStream;Larc/struct/Seq;)V", 9 },
	{ "loadAssets", (intptr_t) SM_mindustry_net_NetworkIO_loadAssets_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 9 },
	{ "packTexture", (intptr_t) SM_mindustry_net_NetworkIO_packTexture_java_io_OutputStream_java_lang_String_Array1_byte, 0, "(Ljava/io/OutputStream;Ljava/lang/String;[B)V", 9 },
	{ "writeServerData", (intptr_t) SM_mindustry_net_NetworkIO_writeServerData_R_java_nio_ByteBuffer, 0, "()Ljava/nio/ByteBuffer;", 9 },
	{ "readServerData", (intptr_t) SM_mindustry_net_NetworkIO_readServerData_int_java_lang_String_java_nio_ByteBuffer_R_mindustry_net_Host, 0, "(ILjava/lang/String;Ljava/nio/ByteBuffer;)Lmindustry/net/Host;", 9 },
	{ "writeString", (intptr_t) SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String_int, 0, "(Ljava/nio/ByteBuffer;Ljava/lang/String;I)V", 10 },
	{ "writeString", (intptr_t) SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String, 0, "(Ljava/nio/ByteBuffer;Ljava/lang/String;)V", 10 },
	{ "readString", (intptr_t) SM_mindustry_net_NetworkIO_readString_java_nio_ByteBuffer_R_java_lang_String, 0, "(Ljava/nio/ByteBuffer;)Ljava/lang/String;", 10 },
	{ "lambda$loadWorld$1", (intptr_t) SM_mindustry_net_NetworkIO_lambda$loadWorld$1_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$loadWorld$0", (intptr_t) SM_mindustry_net_NetworkIO_lambda$loadWorld$0_mindustry_gen_Entityc, 0, "(Lmindustry/gen/Entityc;)V", 4106 },
	{ "lambda$writeWorld$0", (intptr_t) SM_mindustry_net_NetworkIO_lambda$writeWorld$0_mindustry_gen_Player_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Unit;)Z", 4106 },
};

Class class_mindustry_net_NetworkIO{
		.nativeName = (intptr_t) "mindustry/net/NetworkIO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_NetworkIO),
		.classVtable = (intptr_t) vtable_mindustry_net_NetworkIO,
		.staticInitializer = (intptr_t) clinit_mindustry_net_NetworkIO,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_NetworkIO,
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
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_NetworkIO = registerClass(&class_mindustry_net_NetworkIO);

}
