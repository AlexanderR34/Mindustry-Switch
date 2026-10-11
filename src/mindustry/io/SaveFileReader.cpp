#include "mindustry/io/SaveFileReader.h"
#include "mindustry/io/SaveFileReader_invoke_mindustry_io_SaveFileReader_IORunnerLength_4.h"
#include "mindustry/io/SaveReadState.h"
#include "mindustry/io/SaveFileReader_invoke_mindustry_io_SaveFileReader_IORunner_1.h"
#include "mindustry/io/SaveFileReader_invoke_mindustry_io_SaveFileReader_IORunnerLength_6.h"
#include "mindustry/io/SaveFileReader_invoke_mindustry_io_SaveFileReader_IORunnerLength_5.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "java/io/DataOutput.h"
#include "java/lang/String.h"
#include "arc/struct/StringMap.h"
#include "mindustry/io/SaveFileReader.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "arc/util/io/ReusableByteOutStream.h"
#include "java/util/Iterator.h"
#include "mindustry/io/SaveFileReader_IORunnerLength.h"
#include "java/io/DataInputStream.h"
#include "mindustry/io/SaveFileReader_CustomChunk.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "java/io/DataInput.h"
#include "mindustry/io/SaveOptions.h"
#include "java/io/OutputStream.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveFileReader_IORunner.h"
#include "java/io/DataOutputStream.h"
#include "arc/util/io/CounterInputStream.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/io/SaveFileReader_invoke_mindustry_io_SaveFileReader_IORunnerLength_7.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/ByteArrayInputStream.h"
#include "arc/util/io/Writes.h"

extern "C" {

jobject SF_mindustry_io_SaveFileReader_fallback;
jobject SF_mindustry_io_SaveFileReader_modContentNameMap;
jobject SF_mindustry_io_SaveFileReader_byteOutput;
jobject SF_mindustry_io_SaveFileReader_byteOutput2;
jobject SF_mindustry_io_SaveFileReader_dataBytes;
jobject SF_mindustry_io_SaveFileReader_dataBytes2;
jobject SF_mindustry_io_SaveFileReader_writes1;
jobject SF_mindustry_io_SaveFileReader_writes2;
jobject SF_mindustry_io_SaveFileReader_chunkReads;
jbool SF_mindustry_io_SaveFileReader_chunkNested;

void mark_mindustry_io_SaveFileReader(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_io_SaveFileReader_fallback)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveFileReader_fallback)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveFileReader_fallback, mark, depth + 1);
		if (SF_mindustry_io_SaveFileReader_modContentNameMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveFileReader_modContentNameMap)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveFileReader_modContentNameMap, mark, depth + 1);
		if (SF_mindustry_io_SaveFileReader_byteOutput)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveFileReader_byteOutput)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveFileReader_byteOutput, mark, depth + 1);
		if (SF_mindustry_io_SaveFileReader_byteOutput2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveFileReader_byteOutput2)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveFileReader_byteOutput2, mark, depth + 1);
		if (SF_mindustry_io_SaveFileReader_dataBytes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveFileReader_dataBytes)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveFileReader_dataBytes, mark, depth + 1);
		if (SF_mindustry_io_SaveFileReader_dataBytes2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveFileReader_dataBytes2)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveFileReader_dataBytes2, mark, depth + 1);
		if (SF_mindustry_io_SaveFileReader_writes1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveFileReader_writes1)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveFileReader_writes1, mark, depth + 1);
		if (SF_mindustry_io_SaveFileReader_writes2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveFileReader_writes2)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveFileReader_writes2, mark, depth + 1);
		if (SF_mindustry_io_SaveFileReader_chunkReads)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveFileReader_chunkReads)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveFileReader_chunkReads, mark, depth + 1);
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
	auto self = (mindustry_io_SaveFileReader *) object;
}

void init_mindustry_io_SaveFileReader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveFileReader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_SaveFileReader_mapFallback_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:mapFallback", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveFileReader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(83);
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveFileReader_fallback;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveFileReader_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:readRegion", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	const char* regName = (frame[1].o) ? stringToNative(ctx, (jstring)frame[1].o) : "unknown";
	printf("[SaveIO] >>> Enter region '%s'\n", regName);
	fflush(stdout);
	{
	LINE_NUMBER(88);
	((func_arc_util_io_CounterInputStream_resetCount) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_io_CounterInputStream_resetCount])(ctx, (frame[3].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveFileReader_invoke_mindustry_io_SaveFileReader$IORunnerLength_4(ctx);
		auto proxy = (mindustry_io_SaveFileReader_invoke_mindustry_io_SaveFileReader$IORunnerLength_4 *) gcAlloc(ctx, &class_mindustry_io_SaveFileReader_invoke_mindustry_io_SaveFileReader$IORunnerLength_4);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_io_SaveFileReader_readChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveFileReader_readChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].i = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(94);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(92);
	frame[6].o = sp[0].o;
	const char* exName = (frame[6].o) ? (const char*)((jclass)((jobject)frame[6].o)->clazz)->nativeName : "unknown";
	printf("[SaveIO:FATAL] Exception while reading region '%s': type=%s\n", regName, exName ? exName : "unknown");
	fflush(stdout);
	LINE_NUMBER(93);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Error reading region \"\u0001\"."_j.string, 1, (frame[1].o));
	init_java_io_IOException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(96);
	jint expected = frame[5].i;
	jint actual = (((jint)((arc_util_io_CounterInputStream *) NULL_CHECK((frame[3].o)))->F_count) - (jint(4)));
	printf("[SaveIO] <<< Finished region '%s': payloadSize=%d bytes, actualRead=%d bytes\n", regName, (int)expected, (int)actual);
	fflush(stdout);
	if (actual < expected) {
		((func_java_io_DataInput_skipBytes_int_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_skipBytes_int_R_int, (frame[2].o)))(ctx, (frame[2].o), (expected - actual));
	}
	goto label_7;
	}
label_7:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveFileReader_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:writeRegion", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveFileReader_invoke_mindustry_io_SaveFileReader$IORunner_1(ctx);
		auto proxy = (mindustry_io_SaveFileReader_invoke_mindustry_io_SaveFileReader$IORunner_1 *) gcAlloc(ctx, &class_mindustry_io_SaveFileReader_invoke_mindustry_io_SaveFileReader$IORunner_1);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveFileReader_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveFileReader_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(106);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(104);
	frame[4].o = sp[0].o;
	LINE_NUMBER(105);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Error writing region \"\u0001\"."_j.string, 1, (frame[1].o));
	init_java_io_IOException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveFileReader_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:writeChunk", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(111);
	frame[3].i = (clinit_mindustry_io_SaveFileReader(ctx), (jint)SF_mindustry_io_SaveFileReader_chunkNested);
	LINE_NUMBER(113);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_chunkNested = (jint(1));
	LINE_NUMBER(116);
	if ((frame[3].i) == 0) goto label_9;
	}
	clinit_mindustry_io_SaveFileReader(ctx);
	(sp++)->o = SF_mindustry_io_SaveFileReader_byteOutput2;
	goto label_10;
label_9:;
	clinit_mindustry_io_SaveFileReader(ctx);
	(sp++)->o = SF_mindustry_io_SaveFileReader_byteOutput;
label_10:;
	INST_ASTORE(4);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(120);
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, (frame[4].o));
	LINE_NUMBER(122);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_12;
	}
	clinit_mindustry_io_SaveFileReader(ctx);
	(sp++)->o = SF_mindustry_io_SaveFileReader_writes2;
	goto label_13;
label_12:;
	clinit_mindustry_io_SaveFileReader(ctx);
	(sp++)->o = SF_mindustry_io_SaveFileReader_writes1;
label_13:;
	{
	sp -= 2;
	((func_mindustry_io_SaveFileReader$IORunner_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$IORunner, INDEX_mindustry_io_SaveFileReader$IORunner_accept_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(125);
	jint temp0 = (jint)((func_arc_util_io_ReusableByteOutStream_size_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_size_R_int])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(126);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), (frame[5].i));
	LINE_NUMBER(127);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_util_io_ReusableByteOutStream_getBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_getBytes_R_Array1_byte])(ctx, (frame[4].o));
	((func_java_io_DataOutput_write_Array1_byte_int_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_write_Array1_byte_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[5].i));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(129);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_chunkNested = (frame[3].i);
	LINE_NUMBER(130);
	goto label_18;
	}
label_2:;
	sp -= 1;
	frame[6].o = sp[0].o;
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_chunkNested = (frame[3].i);
	// Write empty 0-length chunk safely so file structure is preserved without crashing
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	goto label_18;
label_18:;
	LINE_NUMBER(131);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_io_SaveFileReader_readChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:readChunk", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
		jint length = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
		if (length <= 0) {
			popStackFrame(ctx);
			return length;
		}
		auto byteArr = (jobject)createArray(ctx, &class_byte, length);
		frame[3].o = byteArr;
		((func_java_io_DataInput_readFully_Array1_byte_int_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte_int_int, (frame[1].o)))(ctx, (frame[1].o), byteArr, 0, length);

		clinit_java_io_ByteArrayInputStream(ctx);
		auto bais = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
		frame[4].o = bais;
		init_java_io_ByteArrayInputStream_Array1_byte(ctx, bais, byteArr);

		clinit_java_io_DataInputStream(ctx);
		auto dis = gcAlloc(ctx, &class_java_io_DataInputStream);
		frame[5].o = dis;
		init_java_io_DataInputStream_java_io_InputStream(ctx, dis, bais);

		tryCatch(frameRef, [&]() {
			((func_mindustry_io_SaveFileReader$IORunnerLength_accept_java_lang_Object_int) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$IORunnerLength, INDEX_mindustry_io_SaveFileReader$IORunnerLength_accept_java_lang_Object_int, (frame[2].o)))(ctx, (frame[2].o), dis, length);
		}, &class_java_lang_Throwable, [&](jobject err) {});

		popStackFrame(ctx);
		return length;
	}
}

jint M_mindustry_io_SaveFileReader_readChunkReads_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:readChunkReads", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
		jint length = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
		if (length <= 0) {
			popStackFrame(ctx);
			return length;
		}
		auto byteArr = (jobject)createArray(ctx, &class_byte, length);
		frame[3].o = byteArr;
		((func_java_io_DataInput_readFully_Array1_byte_int_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte_int_int, (frame[1].o)))(ctx, (frame[1].o), byteArr, 0, length);

		clinit_java_io_ByteArrayInputStream(ctx);
		auto bais = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
		frame[4].o = bais;
		init_java_io_ByteArrayInputStream_Array1_byte(ctx, bais, byteArr);

		clinit_java_io_DataInputStream(ctx);
		auto dis = gcAlloc(ctx, &class_java_io_DataInputStream);
		frame[5].o = dis;
		init_java_io_DataInputStream_java_io_InputStream(ctx, dis, bais);

		clinit_arc_util_io_Reads(ctx);
		auto reads = gcAlloc(ctx, &class_arc_util_io_Reads);
		frame[6].o = reads;
		init_arc_util_io_Reads_java_io_DataInput(ctx, reads, dis);

		tryCatch(frameRef, [&]() {
			((func_mindustry_io_SaveFileReader$IORunnerLength_accept_java_lang_Object_int) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$IORunnerLength, INDEX_mindustry_io_SaveFileReader$IORunnerLength_accept_java_lang_Object_int, (frame[2].o)))(ctx, (frame[2].o), reads, length);
		}, &class_java_lang_Throwable, [&](jobject err) {});

		popStackFrame(ctx);
		return length;
	}
}

void M_mindustry_io_SaveFileReader_skipChunk_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:skipChunk", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
		jint length = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
		if (length > 0) {
			((func_java_io_DataInput_skipBytes_int_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_skipBytes_int_R_int, (frame[1].o)))(ctx, (frame[1].o), length);
		}
		popStackFrame(ctx);
		return;
	}
}

jint M_mindustry_io_SaveFileReader_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:readLegacyShortChunk", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(160);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(161);
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveFileReader_chunkReads;
	((arc_util_io_Reads *) NULL_CHECK(sp[0].o))->F_input = (jref) (frame[1].o);
	LINE_NUMBER(162);
	sp[0].o = frame[2].o;
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[1].o = (jobject)SF_mindustry_io_SaveFileReader_chunkReads;
	if (frame[2].o != nullptr) {
		((func_mindustry_io_SaveFileReader$IORunnerLength_accept_java_lang_Object_int) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$IORunnerLength, INDEX_mindustry_io_SaveFileReader$IORunnerLength_accept_java_lang_Object_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[3].i));
	}
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveFileReader_skipLegacyShortChunk_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:skipLegacyShortChunk", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
		jint length = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[1].o)))(ctx, (frame[1].o));
		if (length > 0) {
			((func_java_io_DataInput_skipBytes_int_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_skipBytes_int_R_int, (frame[1].o)))(ctx, (frame[1].o), length);
		}
		popStackFrame(ctx);
		return;
	}
}

void M_mindustry_io_SaveFileReader_writeStringMap_java_io_DataOutput_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:writeStringMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(176);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[2].o)))->F_size));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(178);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	((func_java_io_DataOutput_writeUTF_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeUTF_java_lang_String, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(179);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	((func_java_io_DataOutput_writeUTF_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeUTF_java_lang_String, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(180);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(181);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_io_SaveFileReader_readStringMap_java_io_DataInput_R_arc_struct_StringMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:readStringMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(186);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_io_DataInput_readUTF_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUTF_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_java_io_DataInput_readUTF_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUTF_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(186);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveFileReader_lambda$skipLegacyShortChunk$0_arc_util_io_Reads_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:lambda$skipLegacyShortChunk$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveFileReader(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveFileReader_lambda$skipChunk$0_java_io_DataInput_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:lambda$skipChunk$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveFileReader(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveFileReader_lambda$readChunkReads$0_mindustry_io_SaveFileReader$IORunnerLength_java_io_DataInput_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:lambda$readChunkReads$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveFileReader(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(144);
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveFileReader_chunkReads;
	((arc_util_io_Reads *) NULL_CHECK(sp[0].o))->F_input = (jref) (frame[1].o);
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[1].o = (jobject)SF_mindustry_io_SaveFileReader_chunkReads;
	((func_mindustry_io_SaveFileReader$IORunnerLength_accept_java_lang_Object_int) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$IORunnerLength, INDEX_mindustry_io_SaveFileReader$IORunnerLength_accept_java_lang_Object_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveFileReader_lambda$writeRegion$0_mindustry_io_SaveFileReader$IORunner_arc_util_io_Writes(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:lambda$writeRegion$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveFileReader(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[1].o)))->F_output;
	((func_mindustry_io_SaveFileReader$IORunner_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$IORunner, INDEX_mindustry_io_SaveFileReader$IORunner_accept_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveFileReader_lambda$readRegion$0_mindustry_io_SaveFileReader$IORunner_java_io_DataInput_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:lambda$readRegion$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveFileReader(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(91);
	((func_mindustry_io_SaveFileReader$IORunner_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$IORunner, INDEX_mindustry_io_SaveFileReader$IORunner_accept_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_io_SaveFileReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveFileReader(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (102));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"dart-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"legacy-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"dart-ship-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"legacy-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"javelin-ship-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"legacy-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"trident-ship-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"legacy-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"glaive-ship-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"legacy-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"alpha-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"legacy-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"tau-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (13)) = (((jobject) createStringLiteral(ctx, u8"legacy-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (14)) = (((jobject) createStringLiteral(ctx, u8"omega-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (15)) = (((jobject) createStringLiteral(ctx, u8"legacy-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (16)) = (((jobject) createStringLiteral(ctx, u8"delta-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (17)) = (((jobject) createStringLiteral(ctx, u8"legacy-mech-pad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (18)) = (((jobject) createStringLiteral(ctx, u8"draug-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (19)) = (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (20)) = (((jobject) createStringLiteral(ctx, u8"spirit-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (21)) = (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (22)) = (((jobject) createStringLiteral(ctx, u8"phantom-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (23)) = (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (24)) = (((jobject) createStringLiteral(ctx, u8"wraith-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (25)) = (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (26)) = (((jobject) createStringLiteral(ctx, u8"ghoul-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (27)) = (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory-air"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (28)) = (((jobject) createStringLiteral(ctx, u8"revenant-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (29)) = (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory-air"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (30)) = (((jobject) createStringLiteral(ctx, u8"dagger-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (31)) = (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (32)) = (((jobject) createStringLiteral(ctx, u8"crawler-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (33)) = (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (34)) = (((jobject) createStringLiteral(ctx, u8"titan-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (35)) = (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory-ground"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (36)) = (((jobject) createStringLiteral(ctx, u8"fortress-factory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (37)) = (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory-ground"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (38)) = (((jobject) createStringLiteral(ctx, u8"mass-conveyor"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (39)) = (((jobject) createStringLiteral(ctx, u8"payload-conveyor"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (40)) = (((jobject) createStringLiteral(ctx, u8"vestige"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (41)) = (((jobject) createStringLiteral(ctx, u8"scepter"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (42)) = (((jobject) createStringLiteral(ctx, u8"turbine-generator"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (43)) = (((jobject) createStringLiteral(ctx, u8"steam-generator"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (44)) = (((jobject) createStringLiteral(ctx, u8"rocks"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (45)) = (((jobject) createStringLiteral(ctx, u8"stone-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (46)) = (((jobject) createStringLiteral(ctx, u8"sporerocks"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (47)) = (((jobject) createStringLiteral(ctx, u8"spore-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (48)) = (((jobject) createStringLiteral(ctx, u8"icerocks"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (49)) = (((jobject) createStringLiteral(ctx, u8"ice-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (50)) = (((jobject) createStringLiteral(ctx, u8"dunerocks"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (51)) = (((jobject) createStringLiteral(ctx, u8"dune-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (52)) = (((jobject) createStringLiteral(ctx, u8"sandrocks"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (53)) = (((jobject) createStringLiteral(ctx, u8"sand-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (54)) = (((jobject) createStringLiteral(ctx, u8"shalerocks"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (55)) = (((jobject) createStringLiteral(ctx, u8"shale-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (56)) = (((jobject) createStringLiteral(ctx, u8"snowrocks"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (57)) = (((jobject) createStringLiteral(ctx, u8"snow-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (58)) = (((jobject) createStringLiteral(ctx, u8"saltrocks"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (59)) = (((jobject) createStringLiteral(ctx, u8"salt-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (60)) = (((jobject) createStringLiteral(ctx, u8"dirtwall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (61)) = (((jobject) createStringLiteral(ctx, u8"dirt-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (62)) = (((jobject) createStringLiteral(ctx, u8"ignarock"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (63)) = (((jobject) createStringLiteral(ctx, u8"basalt"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (64)) = (((jobject) createStringLiteral(ctx, u8"holostone"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (65)) = (((jobject) createStringLiteral(ctx, u8"dacite"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (66)) = (((jobject) createStringLiteral(ctx, u8"holostone-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (67)) = (((jobject) createStringLiteral(ctx, u8"dacite-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (68)) = (((jobject) createStringLiteral(ctx, u8"rock"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (69)) = (((jobject) createStringLiteral(ctx, u8"boulder"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (70)) = (((jobject) createStringLiteral(ctx, u8"snowrock"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (71)) = (((jobject) createStringLiteral(ctx, u8"snow-boulder"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (72)) = (((jobject) createStringLiteral(ctx, u8"cliffs"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (73)) = (((jobject) createStringLiteral(ctx, u8"stone-wall"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (74)) = (((jobject) createStringLiteral(ctx, u8"craters"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (75)) = (((jobject) createStringLiteral(ctx, u8"crater-stone"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (76)) = (((jobject) createStringLiteral(ctx, u8"deepwater"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (77)) = (((jobject) createStringLiteral(ctx, u8"deep-water"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (78)) = (((jobject) createStringLiteral(ctx, u8"water"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (79)) = (((jobject) createStringLiteral(ctx, u8"shallow-water"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (80)) = (((jobject) createStringLiteral(ctx, u8"sand"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (81)) = (((jobject) createStringLiteral(ctx, u8"sand-floor"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (82)) = (((jobject) createStringLiteral(ctx, u8"slag"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (83)) = (((jobject) createStringLiteral(ctx, u8"molten-slag"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (84)) = (((jobject) createStringLiteral(ctx, u8"cryofluidmixer"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (85)) = (((jobject) createStringLiteral(ctx, u8"cryofluid-mixer"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (86)) = (((jobject) createStringLiteral(ctx, u8"block-forge"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (87)) = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (88)) = (((jobject) createStringLiteral(ctx, u8"block-unloader"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (89)) = (((jobject) createStringLiteral(ctx, u8"payload-unloader"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (90)) = (((jobject) createStringLiteral(ctx, u8"block-loader"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (91)) = (((jobject) createStringLiteral(ctx, u8"payload-loader"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (92)) = (((jobject) createStringLiteral(ctx, u8"thermal-pump"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (93)) = (((jobject) createStringLiteral(ctx, u8"impulse-pump"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (94)) = (((jobject) createStringLiteral(ctx, u8"alloy-smelter"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (95)) = (((jobject) createStringLiteral(ctx, u8"surge-smelter"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (96)) = (((jobject) createStringLiteral(ctx, u8"steam-vent"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (97)) = (((jobject) createStringLiteral(ctx, u8"rhyolite-vent"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (98)) = (((jobject) createStringLiteral(ctx, u8"fabricator"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (99)) = (((jobject) createStringLiteral(ctx, u8"tank-fabricator"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (100)) = (((jobject) createStringLiteral(ctx, u8"basic-reconstructor"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (101)) = (((jobject) createStringLiteral(ctx, u8"refabricator"_j)));
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_fallback = sp[0].o;
	LINE_NUMBER(69);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (8));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"craters"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"crater-stone"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"deepwater"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"deep-water"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"water"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"shallow-water"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"slag"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"molten-slag"_j)));
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_modContentNameMap = sp[0].o;
	LINE_NUMBER(76);
	clinit_arc_util_io_ReusableByteOutStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_ReusableByteOutStream);
	init_arc_util_io_ReusableByteOutStream(ctx, sp[0].o);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_byteOutput = sp[0].o;
	clinit_arc_util_io_ReusableByteOutStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_ReusableByteOutStream);
	init_arc_util_io_ReusableByteOutStream(ctx, sp[0].o);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_byteOutput2 = sp[0].o;
	LINE_NUMBER(77);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[1].o = (jobject)SF_mindustry_io_SaveFileReader_byteOutput;
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_dataBytes = sp[0].o;
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[1].o = (jobject)SF_mindustry_io_SaveFileReader_byteOutput2;
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_dataBytes2 = sp[0].o;
	LINE_NUMBER(78);
	clinit_arc_util_io_Writes(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Writes);
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[1].o = (jobject)SF_mindustry_io_SaveFileReader_dataBytes;
	init_arc_util_io_Writes_java_io_DataOutput(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_writes1 = sp[0].o;
	clinit_arc_util_io_Writes(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Writes);
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[1].o = (jobject)SF_mindustry_io_SaveFileReader_dataBytes2;
	init_arc_util_io_Writes_java_io_DataOutput(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_writes2 = sp[0].o;
	LINE_NUMBER(79);
	clinit_arc_util_io_Reads(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Reads);
	init_arc_util_io_Reads_java_io_DataInput(ctx, sp[0].o, (jobject(nullptr)));
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_chunkReads = sp[0].o;
	LINE_NUMBER(80);
	clinit_mindustry_io_SaveFileReader(ctx);
	SF_mindustry_io_SaveFileReader_chunkNested = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_SaveFileReader[] {
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
	(void *) nullptr,
	(void *) nullptr,
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
};

static jclass innerClasses[] {
	&class_mindustry_io_SaveFileReader$IORunner,
	&class_mindustry_io_SaveFileReader$IORunnerLength,
	&class_mindustry_io_SaveFileReader$CustomChunk,
};

static FieldMetadata fields[] {
	{ "fallback", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_io_SaveFileReader_fallback, "Larc/struct/ObjectMap;", 25 },
	{ "modContentNameMap", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_io_SaveFileReader_modContentNameMap, "Larc/struct/ObjectMap;", 25 },
	{ "byteOutput", &class_arc_util_io_ReusableByteOutStream, (intptr_t) &SF_mindustry_io_SaveFileReader_byteOutput, "Larc/util/io/ReusableByteOutStream;", 28 },
	{ "byteOutput2", &class_arc_util_io_ReusableByteOutStream, (intptr_t) &SF_mindustry_io_SaveFileReader_byteOutput2, "Larc/util/io/ReusableByteOutStream;", 28 },
	{ "dataBytes", &class_java_io_DataOutputStream, (intptr_t) &SF_mindustry_io_SaveFileReader_dataBytes, "Ljava/io/DataOutputStream;", 28 },
	{ "dataBytes2", &class_java_io_DataOutputStream, (intptr_t) &SF_mindustry_io_SaveFileReader_dataBytes2, "Ljava/io/DataOutputStream;", 28 },
	{ "writes1", &class_arc_util_io_Writes, (intptr_t) &SF_mindustry_io_SaveFileReader_writes1, "Larc/util/io/Writes;", 28 },
	{ "writes2", &class_arc_util_io_Writes, (intptr_t) &SF_mindustry_io_SaveFileReader_writes2, "Larc/util/io/Writes;", 28 },
	{ "chunkReads", &class_arc_util_io_Reads, (intptr_t) &SF_mindustry_io_SaveFileReader_chunkReads, "Larc/util/io/Reads;", 28 },
	{ "chunkNested", &class_boolean, (intptr_t) &SF_mindustry_io_SaveFileReader_chunkNested, "Z", 12 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_SaveFileReader, 0, "()V", 1 },
	{ "mapFallback", (intptr_t) SM_mindustry_io_SaveFileReader_mapFallback_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "readRegion", (intptr_t) M_mindustry_io_SaveFileReader_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner, VTABLE_mindustry_io_SaveFileReader_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner, "(Ljava/lang/String;Ljava/io/DataInput;Larc/util/io/CounterInputStream;Lmindustry/io/SaveFileReader$IORunner;)V", 1 },
	{ "writeRegion", (intptr_t) M_mindustry_io_SaveFileReader_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner, VTABLE_mindustry_io_SaveFileReader_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner, "(Ljava/lang/String;Ljava/io/DataOutput;Lmindustry/io/SaveFileReader$IORunner;)V", 1 },
	{ "writeChunk", (intptr_t) M_mindustry_io_SaveFileReader_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner, VTABLE_mindustry_io_SaveFileReader_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner, "(Ljava/io/DataOutput;Lmindustry/io/SaveFileReader$IORunner;)V", 1 },
	{ "readChunk", (intptr_t) M_mindustry_io_SaveFileReader_readChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int, VTABLE_mindustry_io_SaveFileReader_readChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int, "(Ljava/io/DataInput;Lmindustry/io/SaveFileReader$IORunnerLength;)I", 1 },
	{ "readChunkReads", (intptr_t) M_mindustry_io_SaveFileReader_readChunkReads_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int, VTABLE_mindustry_io_SaveFileReader_readChunkReads_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int, "(Ljava/io/DataInput;Lmindustry/io/SaveFileReader$IORunnerLength;)I", 1 },
	{ "skipChunk", (intptr_t) M_mindustry_io_SaveFileReader_skipChunk_java_io_DataInput, VTABLE_mindustry_io_SaveFileReader_skipChunk_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "readLegacyShortChunk", (intptr_t) M_mindustry_io_SaveFileReader_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int, VTABLE_mindustry_io_SaveFileReader_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int, "(Ljava/io/DataInput;Lmindustry/io/SaveFileReader$IORunnerLength;)I", 1 },
	{ "skipLegacyShortChunk", (intptr_t) M_mindustry_io_SaveFileReader_skipLegacyShortChunk_java_io_DataInput, VTABLE_mindustry_io_SaveFileReader_skipLegacyShortChunk_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "writeStringMap", (intptr_t) M_mindustry_io_SaveFileReader_writeStringMap_java_io_DataOutput_arc_struct_ObjectMap, VTABLE_mindustry_io_SaveFileReader_writeStringMap_java_io_DataOutput_arc_struct_ObjectMap, "(Ljava/io/DataOutput;Larc/struct/ObjectMap;)V", 1 },
	{ "readStringMap", (intptr_t) M_mindustry_io_SaveFileReader_readStringMap_java_io_DataInput_R_arc_struct_StringMap, VTABLE_mindustry_io_SaveFileReader_readStringMap_java_io_DataInput_R_arc_struct_StringMap, "(Ljava/io/DataInput;)Larc/struct/StringMap;", 1 },
	{ "read", 0, VTABLE_mindustry_io_SaveFileReader_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState, "(Ljava/io/DataInputStream;Larc/util/io/CounterInputStream;Lmindustry/io/SaveReadState;)V", 1025 },
	{ "write", 0, VTABLE_mindustry_io_SaveFileReader_write_java_io_DataOutputStream_mindustry_io_SaveOptions, "(Ljava/io/DataOutputStream;Lmindustry/io/SaveOptions;)V", 1025 },
	{ "lambda$skipLegacyShortChunk$0", (intptr_t) SM_mindustry_io_SaveFileReader_lambda$skipLegacyShortChunk$0_arc_util_io_Reads_int, 0, "(Larc/util/io/Reads;I)V", 4106 },
	{ "lambda$skipChunk$0", (intptr_t) SM_mindustry_io_SaveFileReader_lambda$skipChunk$0_java_io_DataInput_int, 0, "(Ljava/io/DataInput;I)V", 4106 },
	{ "lambda$readChunkReads$0", (intptr_t) SM_mindustry_io_SaveFileReader_lambda$readChunkReads$0_mindustry_io_SaveFileReader$IORunnerLength_java_io_DataInput_int, 0, "(Lmindustry/io/SaveFileReader$IORunnerLength;Ljava/io/DataInput;I)V", 4106 },
	{ "lambda$writeRegion$0", (intptr_t) SM_mindustry_io_SaveFileReader_lambda$writeRegion$0_mindustry_io_SaveFileReader$IORunner_arc_util_io_Writes, 0, "(Lmindustry/io/SaveFileReader$IORunner;Larc/util/io/Writes;)V", 4106 },
	{ "lambda$readRegion$0", (intptr_t) SM_mindustry_io_SaveFileReader_lambda$readRegion$0_mindustry_io_SaveFileReader$IORunner_java_io_DataInput_int, 0, "(Lmindustry/io/SaveFileReader$IORunner;Ljava/io/DataInput;I)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_io_SaveFileReader, 0, "()V", 8 },
};

Class class_mindustry_io_SaveFileReader{
		.nativeName = (intptr_t) "mindustry/io/SaveFileReader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_SaveFileReader),
		.classVtable = (intptr_t) vtable_mindustry_io_SaveFileReader,
		.staticInitializer = (intptr_t) clinit_mindustry_io_SaveFileReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_SaveFileReader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_SaveFileReader = registerClass(&class_mindustry_io_SaveFileReader);

}
