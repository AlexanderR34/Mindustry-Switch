#include "mindustry/io/versions/Save11.h"
#include "mindustry/io/SaveReadState.h"
#include "mindustry/io/versions/Save11_invoke_mindustry_io_SaveFileReader_IORunner_10.h"
#include "mindustry/io/versions/Save11_invoke_mindustry_io_SaveFileReader_IORunner_11.h"
#include "mindustry/io/versions/Save11_invoke_mindustry_io_SaveFileReader_IORunner_12.h"
#include "mindustry/io/versions/Save11_invoke_mindustry_io_SaveFileReader_IORunner_13.h"
#include "java/nio/charset/Charset.h"
#include "arc/Events.h"
#include "mindustry/mod/data/PatchAsset.h"
#include "mindustry/io/versions/Save11_invoke_mindustry_io_SaveFileReader_IORunner_8.h"
#include "mindustry/io/versions/Save11_invoke_mindustry_io_SaveFileReader_IORunner_9.h"
#include "mindustry/io/versions/Save11_invoke_mindustry_io_SaveFileReader_IORunner_7.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/io/SaveFileReader.h"
#include "mindustry/mod/DataManager.h"
#include "arc/struct/Seq.h"
#include "java/lang/Throwable.h"
#include "java/io/DataInputStream.h"
#include "java/io/DataInput.h"
#include "mindustry/game/EventType_DataPatchLoadEvent.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveFileReader_IORunner.h"
#include "mindustry/io/SaveVersion.h"
#include "arc/util/io/CounterInputStream.h"
#include "mindustry/io/versions/Save11.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_io_versions_Save11(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_versions_Save11 *) object;
}

void clinit_mindustry_io_versions_Save11(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_io_SaveVersion(ctx);
}

void init_mindustry_io_versions_Save11(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/Save11:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_versions_Save11(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_mindustry_io_SaveVersion_int(ctx, (frame[0].o), (11));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_versions_Save11_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/Save11:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"meta"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_7(ctx);
		auto proxy = (mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_7 *) gcAlloc(ctx, &class_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_7);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"content"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_8(ctx);
		auto proxy = (mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_8 *) gcAlloc(ctx, &class_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"patches"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_9(ctx);
		auto proxy = (mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_9 *) gcAlloc(ctx, &class_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_9);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"map"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_10(ctx);
		auto proxy = (mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_10 *) gcAlloc(ctx, &class_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_10);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"entities"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_11(ctx);
		auto proxy = (mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_11 *) gcAlloc(ctx, &class_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_11);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"markers"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_12(ctx);
		auto proxy = (mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_12 *) gcAlloc(ctx, &class_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"custom"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_13(ctx);
		auto proxy = (mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_13 *) gcAlloc(ctx, &class_mindustry_io_versions_Save11_invoke_mindustry_io_SaveFileReader$IORunner_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_versions_Save11_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(36);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(37);
	goto label_13;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(36);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(37);
	throwException(ctx, (frame[4].o));	}
label_13:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_versions_Save11_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/Save11:readDataPatches", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(43);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(46);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(47);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(48);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(49);
	((func_java_io_DataInput_readFully_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte, (frame[1].o)))(ctx, (frame[1].o), (frame[7].o));
	LINE_NUMBER(50);
	sp[0].o = frame[3].o;
	clinit_mindustry_mod_data_PatchAsset(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_data_PatchAsset);
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	sp[3].o = frame[7].o;
	clinit_arc_util_Strings(ctx);
	sp[4].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[2].o, sp[3].o, sp[4].o);
	init_mindustry_mod_data_PatchAsset_java_lang_String(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(53);
	clinit_mindustry_game_EventType$DataPatchLoadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$DataPatchLoadEvent);
	init_mindustry_game_EventType$DataPatchLoadEvent_arc_struct_Seq(ctx, sp[0].o, (frame[3].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(55);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_load_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_load_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_versions_Save11_lambda$read$3_mindustry_io_SaveReadState_java_io_DataInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/Save11:lambda$read$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	((func_mindustry_io_versions_Save11_readEntities_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_versions_Save11_readEntities_java_io_DataInput_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_versions_Save11_lambda$read$2_mindustry_io_SaveReadState_java_io_DataInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/Save11:lambda$read$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(31);
	((func_mindustry_io_versions_Save11_readMap_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_versions_Save11_readMap_java_io_DataInput_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_versions_Save11_lambda$read$1_mindustry_io_SaveReadState_java_io_DataInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/Save11:lambda$read$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(30);
	((func_mindustry_io_versions_Save11_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_versions_Save11_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_versions_Save11_lambda$read$0_mindustry_io_SaveReadState_java_io_DataInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/Save11:lambda$read$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	((func_mindustry_io_versions_Save11_readMeta_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_versions_Save11_readMeta_java_io_DataInput_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_versions_Save11[] {
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
	(void *) M_mindustry_io_versions_Save11_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_write_java_io_DataOutputStream_mindustry_io_SaveOptions,
	(void *) M_mindustry_io_SaveVersion_getMeta_java_io_DataInput_R_mindustry_io_SaveMeta,
	(void *) M_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean,
	(void *) M_mindustry_io_SaveVersion_readCustomChunks_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_writeMeta_java_io_DataOutput_arc_struct_StringMap,
	(void *) M_mindustry_io_SaveVersion_readMeta_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_writeMap_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_writeTeamBlocks_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput_arc_func_Boolf,
	(void *) M_mindustry_io_SaveVersion_writeEntity_mindustry_gen_Entityc_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeEntityMapping_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeEntities_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeMarkers_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_readMarkers_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_readTeamBlocks_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_readEntityMapping_java_io_DataInput_R_Array1_arc_func_Prov,
	(void *) M_mindustry_io_SaveVersion_readEntities_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_versions_Save11_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_writeDataPatches_java_io_DataOutput_boolean,
	(void *) M_mindustry_io_SaveVersion_readContentHeader_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_writeContentHeader_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$write$2_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$write$1_mindustry_io_SaveOptions_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$write$0_mindustry_io_SaveOptions_java_io_DataOutput,
	(void *) M_mindustry_io_versions_Save11_lambda$read$3_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_versions_Save11_lambda$read$2_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_versions_Save11_lambda$read$1_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_versions_Save11_lambda$read$0_mindustry_io_SaveReadState_java_io_DataInput,
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
	{ "<init>", (intptr_t) init_mindustry_io_versions_Save11, 0, "()V", 1 },
	{ "read", (intptr_t) M_mindustry_io_versions_Save11_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState, VTABLE_mindustry_io_versions_Save11_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState, "(Ljava/io/DataInputStream;Larc/util/io/CounterInputStream;Lmindustry/io/SaveReadState;)V", 1 },
	{ "readDataPatches", (intptr_t) M_mindustry_io_versions_Save11_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState, VTABLE_mindustry_io_versions_Save11_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState, "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V", 1 },
	{ "lambda$read$3", (intptr_t) M_mindustry_io_versions_Save11_lambda$read$3_mindustry_io_SaveReadState_java_io_DataInput, VTABLE_mindustry_io_versions_Save11_lambda$read$3_mindustry_io_SaveReadState_java_io_DataInput, "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V", 4098 },
	{ "lambda$read$2", (intptr_t) M_mindustry_io_versions_Save11_lambda$read$2_mindustry_io_SaveReadState_java_io_DataInput, VTABLE_mindustry_io_versions_Save11_lambda$read$2_mindustry_io_SaveReadState_java_io_DataInput, "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V", 4098 },
	{ "lambda$read$1", (intptr_t) M_mindustry_io_versions_Save11_lambda$read$1_mindustry_io_SaveReadState_java_io_DataInput, VTABLE_mindustry_io_versions_Save11_lambda$read$1_mindustry_io_SaveReadState_java_io_DataInput, "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V", 4098 },
	{ "lambda$read$0", (intptr_t) M_mindustry_io_versions_Save11_lambda$read$0_mindustry_io_SaveReadState_java_io_DataInput, VTABLE_mindustry_io_versions_Save11_lambda$read$0_mindustry_io_SaveReadState_java_io_DataInput, "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V", 4098 },
};

Class class_mindustry_io_versions_Save11{
		.nativeName = (intptr_t) "mindustry/io/versions/Save11",
		.parentClass = (intptr_t) &class_mindustry_io_SaveVersion,
		.size = sizeof(mindustry_io_versions_Save11),
		.classVtable = (intptr_t) vtable_mindustry_io_versions_Save11,
		.staticInitializer = (intptr_t) clinit_mindustry_io_versions_Save11,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_versions_Save11,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 54,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_versions_Save11 = registerClass(&class_mindustry_io_versions_Save11);

}
