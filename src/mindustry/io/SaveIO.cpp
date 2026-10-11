#include "mindustry/io/SaveIO.h"
#include "arc/Events.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/DataOutput.h"
#include "mindustry/game/EventType_SaveLoadEvent.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/util/zip/InflaterInputStream.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/io/SaveIO_SaveException.h"
#include "java/lang/Throwable.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "java/io/DataInputStream.h"
#include "arc/util/Nullable.h"
#include "java/io/DataInput.h"
#include "mindustry/io/SaveOptions.h"
#include "java/io/BufferedInputStream.h"
#include "mindustry/core/World_Context.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveIO.h"
#include "mindustry/core/Logic.h"
#include "mindustry/game/EventType_SaveWriteEvent.h"
#include "java/io/DataOutputStream.h"
#include "mindustry/game/EventType_RulesLoadEvent.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/io/SaveReadState.h"
#include "mindustry/game/Rules.h"
#include "arc/struct/IntMap.h"
#include "arc/files/Fi.h"
#include "arc/util/io/FastDeflaterOutputStream.h"
#include "java/io/InputStream.h"
#include "mindustry/io/versions/Save4.h"
#include "mindustry/io/versions/Save5.h"
#include "mindustry/io/versions/Save6.h"
#include "java/lang/String.h"
#include "mindustry/io/versions/Save7.h"
#include "mindustry/io/versions/Save8.h"
#include "mindustry/io/versions/Save9.h"
#include "mindustry/world/WorldContext.h"
#include "java/io/IOException.h"
#include "java/io/FilterInputStream.h"
#include "mindustry/io/SaveMeta.h"
#include "mindustry/io/versions/Save1.h"
#include "mindustry/io/versions/Save2.h"
#include "mindustry/io/versions/Save3.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/annotation/Annotation.h"
#include "java/io/OutputStream.h"
#include "mindustry/io/SaveVersion.h"
#include "arc/util/io/CounterInputStream.h"
#include "mindustry/io/versions/Save10.h"
#include "mindustry/io/versions/Save12.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"
#include "mindustry/io/versions/Save11.h"
#include "mindustry/io/versions/Save13.h"

extern "C" {

jobject SF_mindustry_io_SaveIO_header;
jobject SF_mindustry_io_SaveIO_versions;
jobject SF_mindustry_io_SaveIO_versionArray;

void mark_mindustry_io_SaveIO(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_io_SaveIO_header)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveIO_header)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveIO_header, mark, depth + 1);
		if (SF_mindustry_io_SaveIO_versions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveIO_versions)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveIO_versions, mark, depth + 1);
		if (SF_mindustry_io_SaveIO_versionArray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveIO_versionArray)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveIO_versionArray, mark, depth + 1);
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
	auto self = (mindustry_io_SaveIO *) object;
}

void init_mindustry_io_SaveIO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_SaveIO_getSaveWriter_R_mindustry_io_SaveVersion(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:getSaveWriter", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	{
	LINE_NUMBER(32);
	clinit_mindustry_io_SaveIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveIO_versionArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_io_SaveVersion, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_SaveIO_getSaveWriter_int_R_mindustry_io_SaveVersion(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:getSaveWriter", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(36);
	clinit_mindustry_io_SaveIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveIO_versions;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_io_SaveVersion, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveIO_save_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:save", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_io_SaveOptions(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_SaveOptions);
	init_mindustry_io_SaveOptions(ctx, sp[1].o);
	SM_mindustry_io_SaveIO_save_arc_files_Fi_mindustry_io_SaveOptions(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveIO_save_arc_files_Fi_mindustry_io_SaveOptions(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:save", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(44);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(45);
	if ((frame[2].i) == 0) goto label_0;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_SaveIO_backupFileFor_arc_files_Fi_R_arc_files_Fi(ctx, (frame[0].o));
	((func_arc_files_Fi_moveTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_moveTo_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(47);
	SM_mindustry_io_SaveIO_write_arc_files_Fi_mindustry_io_SaveOptions(ctx, (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(51);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(48);
	frame[3].o = sp[0].o;
	LINE_NUMBER(49);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_backupFileFor_arc_files_Fi_R_arc_files_Fi(ctx, (frame[0].o));
	((func_arc_files_Fi_moveTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_moveTo_arc_files_Fi])(ctx, sp[0].o, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(50);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_SaveIO_getStream_arc_files_Fi_R_java_io_DataInputStream(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:getStream", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(55);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	sp[2].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, (frame[0].o), (8192));
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_SaveIO_getBackupStream_arc_files_Fi_R_java_io_DataInputStream(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:getBackupStream", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(59);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	sp[2].o = (jobject)SM_mindustry_io_SaveIO_backupFileFor_arc_files_Fi_R_arc_files_Fi(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, sp[2].o, (8192));
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_io_SaveIO_isSaveValid_arc_files_Fi_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:isSaveValid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)SM_mindustry_io_SaveIO_isSaveFileValid_arc_files_Fi_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_backupFileFor_arc_files_Fi_R_arc_files_Fi(ctx, (frame[0].o));
	jint temp0 = (jint)SM_mindustry_io_SaveIO_isSaveFileValid_arc_files_Fi_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
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

jbool SM_mindustry_io_SaveIO_isSaveFileValid_arc_files_Fi_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:isSaveFileValid", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_12; } // goto label_10
	}
	{
	LINE_NUMBER(67);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	sp[2].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, (frame[0].o), (8192));
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getMeta_java_io_DataInputStream_R_mindustry_io_SaveMeta(ctx, (frame[1].o));
	LINE_NUMBER(69);
	frame[2].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(70);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_10;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_10; }
	LINE_NUMBER(67);
	INST_ASTORE(2);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_14;
label_6:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[2].o), (frame[3].o));
	}
label_14:;
	INST_ALOAD(2);
	INST_ATHROW();
	label_10:;
	popExceptionFrame(frameRef);
	{
	sp -= 1;
	LINE_NUMBER(70);
	frame[1].o = sp[0].o;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_io_SaveIO_isSaveValid_java_io_DataInputStream_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:isSaveValid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getMeta_java_io_DataInputStream_R_mindustry_io_SaveMeta(ctx, (frame[0].o));
	LINE_NUMBER(78);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(79);
	frame[1].o = sp[0].o;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_SaveIO_getMeta_arc_files_Fi_R_mindustry_io_SaveMeta(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:getMeta", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getStream_arc_files_Fi_R_java_io_DataInputStream(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getMeta_java_io_DataInputStream_R_mindustry_io_SaveMeta(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(87);
	frame[1].o = sp[0].o;
	LINE_NUMBER(88);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	LINE_NUMBER(89);
	jobject backupMeta = nullptr;
	tryCatch(frameRef, [&]() {
		auto backupStream = (jobject)SM_mindustry_io_SaveIO_getBackupStream_arc_files_Fi_R_java_io_DataInputStream(ctx, (frame[0].o));
		if (backupStream != nullptr) {
			backupMeta = (jobject)SM_mindustry_io_SaveIO_getMeta_java_io_DataInputStream_R_mindustry_io_SaveMeta(ctx, backupStream);
		}
	}, &class_java_lang_Throwable, [&](jobject) {});
	popStackFrame(ctx);
	return backupMeta;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_SaveIO_getMeta_java_io_DataInputStream_R_mindustry_io_SaveMeta(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:getMeta", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(96);
	SM_mindustry_io_SaveIO_readHeader_java_io_DataInput(ctx, (frame[0].o));
	LINE_NUMBER(97);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(98);
	clinit_mindustry_io_SaveIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveIO_versions;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_mindustry_io_SaveVersion, sp[0].o));
	LINE_NUMBER(100);
	if ((frame[2].o) != nullptr) goto label_7;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown save version: \u0001. Are you trying to load a save from a newer version?"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_mindustry_io_SaveVersion_getMeta_java_io_DataInput_R_mindustry_io_SaveMeta) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_io_SaveVersion_getMeta_java_io_DataInput_R_mindustry_io_SaveMeta])(ctx, (frame[2].o), (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(103);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[0].o));
	LINE_NUMBER(104);
	sp[0].o = frame[3].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(105);
	frame[1].o = sp[0].o;
	LINE_NUMBER(106);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_SaveIO_fileFor_int_R_arc_files_Fi(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:fileFor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(111);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_saveDirectory;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.msav"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_SaveIO_backupFileFor_arc_files_Fi_R_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:backupFileFor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_arc_files_Fi_extension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_extension_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-backup.\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveIO_write_arc_files_Fi_mindustry_io_SaveOptions(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(119);
	clinit_arc_util_io_FastDeflaterOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_FastDeflaterOutputStream);
	sp[1].o = (jobject)((func_arc_files_Fi_write_boolean_int_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_write_boolean_int_R_java_io_OutputStream])(ctx, (frame[0].o), (jint(0)), (8192));
	init_arc_util_io_FastDeflaterOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	SM_mindustry_io_SaveIO_write_java_io_OutputStream_mindustry_io_SaveOptions(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveIO_write_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	clinit_mindustry_io_SaveOptions(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_SaveOptions);
	init_mindustry_io_SaveOptions(ctx, sp[1].o);
	SM_mindustry_io_SaveIO_write_arc_files_Fi_mindustry_io_SaveOptions(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveIO_write_java_io_OutputStream_mindustry_io_SaveOptions(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(127);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(128);
	clinit_mindustry_game_EventType$SaveWriteEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$SaveWriteEvent);
	init_mindustry_game_EventType$SaveWriteEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getVersion_R_mindustry_io_SaveVersion(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(131);
	sp[0].o = frame[2].o;
	clinit_mindustry_io_SaveIO(ctx);
	sp[1].o = (jobject)SF_mindustry_io_SaveIO_header;
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, (frame[2].o), ((jint)((mindustry_io_SaveVersion *) NULL_CHECK((frame[3].o)))->F_version));
	LINE_NUMBER(133);
	((func_mindustry_io_SaveVersion_write_java_io_DataOutputStream_mindustry_io_SaveOptions) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_io_SaveVersion_write_java_io_DataOutputStream_mindustry_io_SaveOptions])(ctx, (frame[3].o), (frame[2].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(134);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[2].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(127);
	INST_ASTORE(3);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_16;
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_16:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(136);
	goto label_17;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(134);
	frame[2].o = sp[0].o;
	LINE_NUMBER(135);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_17:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveIO_load_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(140);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_saveDirectory;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.msav"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	SM_mindustry_io_SaveIO_load_arc_files_Fi(ctx, sp[0].o);
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveIO_load_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[1].o))->F_context;
	SM_mindustry_io_SaveIO_load_arc_files_Fi_mindustry_world_WorldContext(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveIO_load_arc_files_Fi_mindustry_world_WorldContext(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:load", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_mindustry_io_SaveIO$SaveException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(150);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	sp[1].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, (frame[0].o), (8192));
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	SM_mindustry_io_SaveIO_load_java_io_InputStream_mindustry_world_WorldContext(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(159);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(151);
	frame[2].o = sp[0].o;
	LINE_NUMBER(152);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_arc_files_Fi_extension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_extension_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-backup.\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(154);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(155);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	sp[1].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, (frame[3].o), (8192));
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	SM_mindustry_io_SaveIO_load_java_io_InputStream_mindustry_world_WorldContext(ctx, sp[0].o, (frame[1].o));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(157);
	clinit_mindustry_io_SaveIO$SaveException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_SaveIO$SaveException);
	sp[1].o = (jobject)((func_mindustry_io_SaveIO$SaveException_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_io_SaveIO$SaveException_getCause_R_java_lang_Throwable])(ctx, (frame[2].o));
	init_mindustry_io_SaveIO$SaveException_java_lang_Throwable(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveIO_load_java_io_InputStream_mindustry_world_WorldContext(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:load", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_23; } // goto label_20
	}
	{
	LINE_NUMBER(164);
	clinit_arc_util_io_CounterInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_CounterInputStream);
	init_arc_util_io_CounterInputStream_java_io_InputStream(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(165);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(166);
	SM_mindustry_io_SaveIO_readHeader_java_io_DataInput(ctx, (frame[3].o));
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(168);
	clinit_mindustry_io_SaveIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveIO_versions;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_mindustry_io_SaveVersion, sp[0].o));
	LINE_NUMBER(170);
	if ((frame[5].o) != nullptr) goto label_28;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown save version: \u0001. Are you trying to load a save from a newer version?"_j.string, 1, boxInteger(ctx, (frame[4].i)));
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[5].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[2].o;
	clinit_mindustry_io_SaveReadState(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_io_SaveReadState);
	init_mindustry_io_SaveReadState_mindustry_world_WorldContext(ctx, sp[3].o, (frame[1].o));
	((func_mindustry_io_SaveVersion_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(173);
	clinit_mindustry_game_EventType$SaveLoadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$SaveLoadEvent);
	jint temp0 = (jint)((func_mindustry_world_WorldContext_isMap_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_isMap_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	init_mindustry_game_EventType$SaveLoadEvent_boolean(ctx, sp[0].o, temp0);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(176);
	jint temp1 = (jint)((func_mindustry_world_WorldContext_isMap_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_isMap_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp1 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(177);
	clinit_mindustry_game_EventType$RulesLoadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$RulesLoadEvent);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	init_mindustry_game_EventType$RulesLoadEvent_mindustry_game_Rules_boolean(ctx, sp[0].o, sp[1].o, (jint(1)));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(179);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(164);
	INST_ASTORE(4);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_32;
label_6:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[4].o), (frame[5].o));
	}
label_32:;
	INST_ALOAD(4);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(179);
	((func_arc_util_io_CounterInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_io_CounterInputStream_close])(ctx, (frame[2].o));
	goto label_17;
	}
label_10:;
	LINE_NUMBER(164);
	INST_ASTORE(3);
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_arc_util_io_CounterInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_CounterInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_33;
label_14:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_33:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_17:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(182);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_setGenerating_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_setGenerating_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(183);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(184);
	goto label_36;
	}
label_18:;
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_20;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_20; }
	{
	sp -= 1;
	LINE_NUMBER(179);
	frame[2].o = sp[0].o;
	LINE_NUMBER(180);
	clinit_mindustry_io_SaveIO$SaveException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_SaveIO$SaveException);
	init_mindustry_io_SaveIO$SaveException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_20:;
	LINE_NUMBER(182);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_setGenerating_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_setGenerating_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(183);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(184);
	throwException(ctx, (frame[6].o));	}
label_36:;
	LINE_NUMBER(185);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_SaveIO_getVersion_R_mindustry_io_SaveVersion(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:getVersion", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	{
	LINE_NUMBER(188);
	clinit_mindustry_io_SaveIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveIO_versionArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_io_SaveVersion, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveIO_readHeader_java_io_DataInput(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:readHeader", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(192);
	clinit_mindustry_io_SaveIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveIO_header;
	sp[0].o = (jobject) createArray(ctx, &class_byte, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(193);
	((func_java_io_DataInput_readFully_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(194);
	sp[0].o = frame[1].o;
	clinit_mindustry_io_SaveIO(ctx);
	sp[1].o = (jobject)SF_mindustry_io_SaveIO_header;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_byte_Array1_byte_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(195);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_mindustry_io_SaveIO(ctx);
	sp[1].o = (jobject)SF_mindustry_io_SaveIO_header;
	sp[1].o = (jobject)SM_java_util_Arrays_toString_Array1_byte_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = (jobject)SM_java_util_Arrays_toString_Array1_byte_R_java_lang_String(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Incorrect header! Expecting: \u0001; Actual: \u0001"_j.string, 2, sp[1].o, sp[2].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(197);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_io_SaveIO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveIO:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveIO(ctx);
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(4)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (77);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (83);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (65);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (86);
	clinit_mindustry_io_SaveIO(ctx);
	SF_mindustry_io_SaveIO_header = sp[0].o;
	LINE_NUMBER(22);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	clinit_mindustry_io_SaveIO(ctx);
	SF_mindustry_io_SaveIO_versions = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_io_SaveVersion, (13));
	jint temp0 = jint(0);
	clinit_mindustry_io_versions_Save1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save1);
	init_mindustry_io_versions_Save1(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_io_versions_Save2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save2);
	init_mindustry_io_versions_Save2(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_io_versions_Save3(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save3);
	init_mindustry_io_versions_Save3(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_io_versions_Save4(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save4);
	init_mindustry_io_versions_Save4(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_io_versions_Save5(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save5);
	init_mindustry_io_versions_Save5(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_io_versions_Save6(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save6);
	init_mindustry_io_versions_Save6(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_io_versions_Save7(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save7);
	init_mindustry_io_versions_Save7(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_io_versions_Save8(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save8);
	init_mindustry_io_versions_Save8(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_io_versions_Save9(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save9);
	init_mindustry_io_versions_Save9(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_io_versions_Save10(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save10);
	init_mindustry_io_versions_Save10(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_io_versions_Save11(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save11);
	init_mindustry_io_versions_Save11(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_io_versions_Save12(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save12);
	init_mindustry_io_versions_Save12(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_io_versions_Save13(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_versions_Save13);
	init_mindustry_io_versions_Save13(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_io_SaveIO(ctx);
	SF_mindustry_io_SaveIO_versionArray = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_io_SaveIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveIO_versionArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_io_SaveVersion, sp[0].o));
	LINE_NUMBER(27);
	clinit_mindustry_io_SaveIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveIO_versions;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_io_SaveVersion *) NULL_CHECK((frame[1].o)))->F_version), (frame[1].o));
	LINE_NUMBER(28);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_io_SaveIO;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getSaveWriter
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_io_SaveIO[] {
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

static jclass innerClasses[] {
	&class_mindustry_io_SaveIO$SaveException,
};

static FieldMetadata fields[] {
	{ "header", getArrayClass(&class_byte, 1), (intptr_t) &SF_mindustry_io_SaveIO_header, "[B", 25 },
	{ "versions", &class_arc_struct_IntMap, (intptr_t) &SF_mindustry_io_SaveIO_versions, "Larc/struct/IntMap;", 25 },
	{ "versionArray", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_io_SaveIO_versionArray, "Larc/struct/Seq;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_SaveIO, 0, "()V", 1 },
	{ "getSaveWriter", (intptr_t) SM_mindustry_io_SaveIO_getSaveWriter_R_mindustry_io_SaveVersion, 0, "()Lmindustry/io/SaveVersion;", 9 },
	{ "getSaveWriter", (intptr_t) SM_mindustry_io_SaveIO_getSaveWriter_int_R_mindustry_io_SaveVersion, 0, "(I)Lmindustry/io/SaveVersion;", 9 },
	{ "save", (intptr_t) SM_mindustry_io_SaveIO_save_arc_files_Fi, 0, "(Larc/files/Fi;)V", 9 },
	{ "save", (intptr_t) SM_mindustry_io_SaveIO_save_arc_files_Fi_mindustry_io_SaveOptions, 0, "(Larc/files/Fi;Lmindustry/io/SaveOptions;)V", 9 },
	{ "getStream", (intptr_t) SM_mindustry_io_SaveIO_getStream_arc_files_Fi_R_java_io_DataInputStream, 0, "(Larc/files/Fi;)Ljava/io/DataInputStream;", 9 },
	{ "getBackupStream", (intptr_t) SM_mindustry_io_SaveIO_getBackupStream_arc_files_Fi_R_java_io_DataInputStream, 0, "(Larc/files/Fi;)Ljava/io/DataInputStream;", 9 },
	{ "isSaveValid", (intptr_t) SM_mindustry_io_SaveIO_isSaveValid_arc_files_Fi_R_boolean, 0, "(Larc/files/Fi;)Z", 9 },
	{ "isSaveFileValid", (intptr_t) SM_mindustry_io_SaveIO_isSaveFileValid_arc_files_Fi_R_boolean, 0, "(Larc/files/Fi;)Z", 10 },
	{ "isSaveValid", (intptr_t) SM_mindustry_io_SaveIO_isSaveValid_java_io_DataInputStream_R_boolean, 0, "(Ljava/io/DataInputStream;)Z", 9 },
	{ "getMeta", (intptr_t) SM_mindustry_io_SaveIO_getMeta_arc_files_Fi_R_mindustry_io_SaveMeta, 0, "(Larc/files/Fi;)Lmindustry/io/SaveMeta;", 9 },
	{ "getMeta", (intptr_t) SM_mindustry_io_SaveIO_getMeta_java_io_DataInputStream_R_mindustry_io_SaveMeta, 0, "(Ljava/io/DataInputStream;)Lmindustry/io/SaveMeta;", 9 },
	{ "fileFor", (intptr_t) SM_mindustry_io_SaveIO_fileFor_int_R_arc_files_Fi, 0, "(I)Larc/files/Fi;", 9 },
	{ "backupFileFor", (intptr_t) SM_mindustry_io_SaveIO_backupFileFor_arc_files_Fi_R_arc_files_Fi, 0, "(Larc/files/Fi;)Larc/files/Fi;", 9 },
	{ "write", (intptr_t) SM_mindustry_io_SaveIO_write_arc_files_Fi_mindustry_io_SaveOptions, 0, "(Larc/files/Fi;Lmindustry/io/SaveOptions;)V", 9 },
	{ "write", (intptr_t) SM_mindustry_io_SaveIO_write_arc_files_Fi, 0, "(Larc/files/Fi;)V", 9 },
	{ "write", (intptr_t) SM_mindustry_io_SaveIO_write_java_io_OutputStream_mindustry_io_SaveOptions, 0, "(Ljava/io/OutputStream;Lmindustry/io/SaveOptions;)V", 9 },
	{ "load", (intptr_t) SM_mindustry_io_SaveIO_load_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "load", (intptr_t) SM_mindustry_io_SaveIO_load_arc_files_Fi, 0, "(Larc/files/Fi;)V", 9 },
	{ "load", (intptr_t) SM_mindustry_io_SaveIO_load_arc_files_Fi_mindustry_world_WorldContext, 0, "(Larc/files/Fi;Lmindustry/world/WorldContext;)V", 9 },
	{ "load", (intptr_t) SM_mindustry_io_SaveIO_load_java_io_InputStream_mindustry_world_WorldContext, 0, "(Ljava/io/InputStream;Lmindustry/world/WorldContext;)V", 9 },
	{ "getVersion", (intptr_t) SM_mindustry_io_SaveIO_getVersion_R_mindustry_io_SaveVersion, 0, "()Lmindustry/io/SaveVersion;", 9 },
	{ "readHeader", (intptr_t) SM_mindustry_io_SaveIO_readHeader_java_io_DataInput, 0, "(Ljava/io/DataInput;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_io_SaveIO, 0, "()V", 8 },
};

Class class_mindustry_io_SaveIO{
		.nativeName = (intptr_t) "mindustry/io/SaveIO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_SaveIO),
		.classVtable = (intptr_t) vtable_mindustry_io_SaveIO,
		.staticInitializer = (intptr_t) clinit_mindustry_io_SaveIO,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_io_SaveIO,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_SaveIO = registerClass(&class_mindustry_io_SaveIO);

}
