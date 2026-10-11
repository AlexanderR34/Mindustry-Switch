#include "mindustry/io/MapIO.h"
#include "mindustry/core/Version.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/Pixmap.h"
#include "arc/struct/StringMap.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/zip/InflaterInputStream.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "java/lang/Throwable.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Exception.h"
#include "java/util/Iterator.h"
#include "java/io/DataInputStream.h"
#include "mindustry/io/MapIO_invoke_mindustry_io_SaveFileReader_IORunner_4.h"
#include "java/io/DataInput.h"
#include "mindustry/io/MapIO.h"
#include "mindustry/io/MapIO_invoke_mindustry_io_SaveFileReader_IORunner_7.h"
#include "mindustry/io/SaveOptions.h"
#include "mindustry/io/MapIO_invoke_mindustry_io_SaveFileReader_IORunner_6.h"
#include "mindustry/io/MapIO_invoke_mindustry_io_SaveFileReader_IORunner_5.h"
#include "java/io/BufferedInputStream.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveIO.h"
#include "mindustry/io/SaveFileReader_IORunner.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/io/SaveReadState.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/CachedTile.h"
#include "mindustry/world/ColorMapper.h"
#include "arc/files/Fi.h"
#include "mindustry/world/Tiles.h"
#include "java/io/InputStream.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/io/SaveFileReader.h"
#include "mindustry/world/WorldContext.h"
#include "java/io/IOException.h"
#include "java/io/FilterInputStream.h"
#include "mindustry/io/MapIO_1.h"
#include "mindustry/io/MapIO_2.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/io/MapIO_3.h"
#include "mindustry/io/MapIO_4.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/Enum.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/io/SaveVersion.h"
#include "arc/util/io/CounterInputStream.h"
#include "java/util/Objects.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_io_MapIO_pngHeader;

void mark_mindustry_io_MapIO(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_io_MapIO_pngHeader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_MapIO_pngHeader)->clazz)->markFunction)((jobject) SF_mindustry_io_MapIO_pngHeader, mark, depth + 1);
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
	auto self = (mindustry_io_MapIO *) object;
}

void init_mindustry_io_MapIO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_io_MapIO_isImage_arc_files_Fi_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:isImage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[4]{};

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_17; } // goto label_13
	}
	if (bypasses[3]) { goto label_3; }
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, (frame[0].o), (32));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_18; }
	{
	LINE_NUMBER(27);
	clinit_mindustry_io_MapIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_MapIO_pngHeader;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_18:;
	{
	if ((frame[4].i) >= (frame[3].i)) { popExceptionFrames(frameRef, 2); bypasses[1] = true; goto label_16; } // goto label_19
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(28);
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, (frame[1].o));
	if (temp0 == (frame[5].i)) { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(29);
	frame[6].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(33);
	if ((frame[1].o) == nullptr) goto label_12;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
label_12:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_4:;
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_17; } // goto label_13
	}
	if (bypasses[1]) { goto label_6; }
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_19; }
	{
	LINE_NUMBER(27);
	INST_IINC(4, 1);
	{ popExceptionFrames(frameRef, 2); bypasses[3] = true; goto label_14; } // goto label_18
	}
label_19:;
	{
	LINE_NUMBER(32);
	frame[2].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(33);
	if ((frame[1].o) == nullptr) goto label_15;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
label_15:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_13;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_13; }
	if (bypasses[2]) { bypasses[2] = false; goto label_13; }
	{
	sp -= 1;
	LINE_NUMBER(26);
	frame[2].o = sp[0].o;
	if ((frame[1].o) == nullptr) goto label_22;
	}
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_9; }
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_22;
label_9:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[2].o), (frame[3].o));
	}
label_22:;
	INST_ALOAD(2);
	INST_ATHROW();
	label_13:;
	popExceptionFrame(frameRef);
	{
	sp -= 1;
	LINE_NUMBER(33);
	frame[1].o = sp[0].o;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_MapIO_createMap_arc_files_Fi_boolean_R_mindustry_maps_Map(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:createMap", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(39);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	sp[1].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, (frame[0].o), (8192));
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_21; } // goto label_19
	}
	{
	clinit_arc_util_io_CounterInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_CounterInputStream);
	init_arc_util_io_CounterInputStream_java_io_InputStream(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[1] = true; goto label_21; } // goto label_10
	}
	{
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(40);
	SM_mindustry_io_SaveIO_readHeader_java_io_DataInput(ctx, (frame[4].o));
	LINE_NUMBER(41);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(42);
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getSaveWriter_int_R_mindustry_io_SaveVersion(ctx, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(43);
	if ((frame[6].o) != nullptr) goto label_30;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown save version: \u0001. Are you trying to load a save from a newer version?"_j.string, 1, boxInteger(ctx, (frame[5].i)));
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(44);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = frame[6].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"meta"_j));
	sp[2].o = frame[4].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_4(ctx);
		auto proxy = (mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_4 *) gcAlloc(ctx, &class_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_4);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(46);
	clinit_mindustry_maps_Map(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_Map);
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_arc_struct_StringMap_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_StringMap_getInt_java_lang_String_R_int])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"width"_j))));
	jint temp1 = (jint)((func_arc_struct_StringMap_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_StringMap_getInt_java_lang_String_R_int])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"height"_j))));
	init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, (frame[7].o), (frame[1].i), (frame[5].i), (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build));
	frame[8].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(47);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_arc_util_io_CounterInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_CounterInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	{
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_InputStream_close])(ctx, (frame[2].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_2:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_19;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_19; }
	if (bypasses[1]) { goto label_12; }
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_10;
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_10; }
	LINE_NUMBER(39);
	INST_ASTORE(5);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_34;
label_6:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[5].o), (frame[6].o));
	}
label_34:;
	INST_ALOAD(5);
	INST_ATHROW();
	label_10:;
	popExceptionFrame(frameRef);
	INST_ASTORE(4);
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_15; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_arc_util_io_CounterInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_CounterInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_35;
label_15:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[4].o), (frame[5].o));
	}
label_35:;
	INST_ALOAD(4);
	INST_ATHROW();
	label_19:;
	popExceptionFrame(frameRef);
	INST_ASTORE(3);
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_24; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_36;
label_24:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_36:;
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void SM_mindustry_io_MapIO_writeMap_arc_files_Fi_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:writeMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(51);
	SM_mindustry_io_MapIO_writeMap_arc_files_Fi_mindustry_maps_Map_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_MapIO_writeMap_arc_files_Fi_mindustry_maps_Map_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:writeMap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_mindustry_io_MapIO$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_io_MapIO$1);
	init_mindustry_io_MapIO$1_mindustry_maps_Map_boolean(ctx, sp[1].o, (frame[1].o), (frame[2].i));
	SM_mindustry_io_SaveIO_write_arc_files_Fi_mindustry_io_SaveOptions(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(63);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(61);
	frame[3].o = sp[0].o;
	LINE_NUMBER(62);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_MapIO_loadMap_mindustry_maps_Map(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:loadMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	SM_mindustry_io_SaveIO_load_arc_files_Fi(ctx, sp[0].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_MapIO_loadMap_mindustry_maps_Map_mindustry_world_WorldContext(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:loadMap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	SM_mindustry_io_SaveIO_load_arc_files_Fi_mindustry_world_WorldContext(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_MapIO_generatePreview_mindustry_maps_Map_R_arc_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[30];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:generatePreview", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(75);
	((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_spawns = (jint(0));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_teams;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	}
label_29: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_31; } // goto label_28
	}
	{
	LINE_NUMBER(78);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, sp[1].o, (8192));
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	}
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[1] = true; goto label_31; } // goto label_19
	}
	{
	clinit_arc_util_io_CounterInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_CounterInputStream);
	init_arc_util_io_CounterInputStream_java_io_InputStream(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); bypasses[2] = true; goto label_31; } // goto label_10
	}
	{
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 4); goto label_2; }
	}
	{
	LINE_NUMBER(79);
	SM_mindustry_io_SaveIO_readHeader_java_io_DataInput(ctx, (frame[3].o));
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(81);
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getSaveWriter_int_R_mindustry_io_SaveVersion(ctx, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(82);
	if ((frame[5].o) != nullptr) goto label_37;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown save version: \u0001. Are you trying to load a save from a newer version?"_j.string, 1, boxInteger(ctx, (frame[4].i)));
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_37:;
	{
	LINE_NUMBER(83);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"meta"_j));
	sp[2].o = frame[3].o;
	sp[3].o = frame[2].o;
	sp[4].o = frame[5].o;
	sp[5].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_5(ctx);
		auto proxy = (mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_5 *) gcAlloc(ctx, &class_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_5);
		proxy->F_field0 = (jref) sp[4].o;
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(85);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_height));
	frame[6].o = sp[0].o;
	LINE_NUMBER(86);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_height));
	frame[7].o = sp[0].o;
	LINE_NUMBER(87);
	frame[8].i = (255);
	LINE_NUMBER(88);
	jint temp0 = (jint)SM_arc_graphics_Color_rgba8888_float_float_float_float_R_int(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.5f)));
	frame[9].i = temp0;
	LINE_NUMBER(90);
	frame[10].i = ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_width);
	frame[11].i = ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_height);
	LINE_NUMBER(91);
	frame[12].i = ((frame[10].i) * (frame[11].i));
	LINE_NUMBER(92);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[12].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (frame[12].i));
	frame[14].o = sp[0].o;
	LINE_NUMBER(95);
	clinit_mindustry_io_MapIO$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_MapIO$2);
	init_mindustry_io_MapIO$2_int_arc_graphics_Pixmap_arc_graphics_Pixmap_int(ctx, sp[0].o, (frame[8].i), (frame[7].o), (frame[6].o), (frame[9].i));
	frame[15].o = sp[0].o;
	LINE_NUMBER(110);
	if (((jint)((mindustry_io_SaveVersion *) NULL_CHECK((frame[5].o)))->F_version) < (12)) goto label_49;
	}
	{
	((func_mindustry_io_SaveVersion_skipChunk_java_io_DataInput) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_io_SaveVersion_skipChunk_java_io_DataInput])(ctx, (frame[5].o), (frame[3].o));
	}
label_49:;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"content"_j));
	sp[2].o = frame[3].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_6(ctx);
		auto proxy = (mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_6 *) gcAlloc(ctx, &class_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_6);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(112);
	if (((jint)((mindustry_io_SaveVersion *) NULL_CHECK((frame[5].o)))->F_version) != (11)) goto label_51;
	}
	{
	((func_mindustry_io_SaveVersion_skipChunk_java_io_DataInput) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_io_SaveVersion_skipChunk_java_io_DataInput])(ctx, (frame[5].o), (frame[3].o));
	}
label_51:;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"preview_map"_j));
	sp[2].o = frame[3].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7(ctx);
		auto proxy = (mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7 *) gcAlloc(ctx, &class_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7);
		proxy->F_field7 = (jref) (frame[14].o);
		proxy->F_field6 = (frame[10].i);
		proxy->F_field5 = (jref) (frame[13].o);
		proxy->F_field4 = (jref) (frame[0].o);
		proxy->F_field3 = (jref) (frame[6].o);
		proxy->F_field2 = (jref) (frame[7].o);
		proxy->F_field1 = (jref) (frame[15].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(184);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_boolean])(ctx, (frame[6].o), (frame[7].o), (jint(1)));
	LINE_NUMBER(185);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[7].o));
	LINE_NUMBER(186);
	frame[16].o = (frame[6].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(187);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_arc_util_io_CounterInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_CounterInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(188);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (frame[16].o);
	}
label_2:;
label_31: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_28;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_28; }
	if (bypasses[1]) { goto label_21; }
	if (bypasses[2]) { goto label_21; }
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_19;
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_19; }
	if (bypasses[2]) { goto label_12; }
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_10;
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_10; }
	LINE_NUMBER(78);
	INST_ASTORE(4);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_56;
label_6:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[4].o), (frame[5].o));
	}
label_56:;
	INST_ALOAD(4);
	INST_ATHROW();
	label_10:;
	popExceptionFrame(frameRef);
	INST_ASTORE(3);
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_15; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_arc_util_io_CounterInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_CounterInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_57;
label_15:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_57:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_19:;
	popExceptionFrame(frameRef);
	INST_ASTORE(2);
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_24; }
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_58;
label_24:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[2].o), (frame[3].o));
	}
label_58:;
	INST_ALOAD(2);
	INST_ATHROW();
	label_28:;
	LINE_NUMBER(188);
	INST_ASTORE(17);
	popExceptionFrame(frameRef);
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(189);
	throwException(ctx, (frame[17].o));	}

	popStackFrame(ctx);
}

void SM_mindustry_io_MapIO_readPreviewContentHeader_java_io_DataInput(jcontext ctx, jobject param0) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:readPreviewContentHeader", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(194);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(196);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[0].o = (jobject)createMultiArray(ctx, &class_mindustry_ctype_MappableContent, {(((jarray) nullCheck(ctx, sp[0].o))->length), (jint(0))});
	frame[2].o = sp[0].o;
	LINE_NUMBER(198);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(199);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[0].o)))(ctx, (frame[0].o));
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(200);
	jint temp1 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[0].o)))(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(201);
	sp[0].o = frame[2].o;
	jint temp2 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[4].o));
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ctype_MappableContent, (frame[5].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(203);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_java_io_DataInput_readUTF_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUTF_R_java_lang_String, (frame[0].o)))(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(206);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[4].o));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	jint temp1 = frame[6].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = frame[4].o;
	sp[3].o = frame[4].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[4].o = (jobject)SF_mindustry_ctype_ContentType_block;
	jobject temp2 = sp[1].o;
	sp[1].i = temp1;
	jobject temp3 = sp[2].o;
	sp[2].o = temp2;
	jobject temp4 = sp[3].o;
	sp[3].o = temp3;
	sp += 4;
	if (temp4 != sp[0].o) goto label_13;
	}
	{
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveFileReader_fallback;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[7].o), (frame[7].o));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ALOAD(7);
label_14:;
	{
	sp -= 5;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(203);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(198);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(210);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_MapIO_generatePreview_mindustry_world_Tiles_R_arc_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:generatePreview", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(214);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_height));
	frame[1].o = sp[0].o;
	LINE_NUMBER(215);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width)) goto label_3;
	}
	{
	LINE_NUMBER(216);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height)) goto label_6;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(218);
	frame[5].i = (jint(0));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int])(ctx, sp[0].o, (frame[4].o));
	frame[5].i = temp0;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_minimapColor_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_minimapColor_mindustry_world_Tile_R_int])(ctx, sp[0].o, (frame[4].o));
	frame[5].i = temp0;
	}
label_12:;
	{
	LINE_NUMBER(224);
	if ((frame[5].i) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	sp[2].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	sp[3].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[4].o));
	jint temp0 = (jint)SM_mindustry_io_MapIO_colorFor_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].i = temp0;
	}
label_14:;
	{
	LINE_NUMBER(225);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[1].o), (frame[2].i), ((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height) - (jint(1))) - (frame[3].i)), (frame[5].i));
	LINE_NUMBER(216);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(215);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_io_MapIO_colorFor_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:colorFor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[3].o)))->F_color;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(235);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[2].o)))))->F_wallOre) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_mapColor;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_mapColor;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_5:;
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_useColor) != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_mapColor;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(236);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_environment_OverlayFloor)) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_mapColor;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	jint temp1 = (temp0 & (-256)) | (128);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_mapColor;
	jint temp2 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_arc_graphics_Pixmap_blend_int_int_R_int(ctx, temp1, temp2);
	sp[0].i = temp3;
	sp += 1;
	goto label_4;
	}
label_7:;
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_mapColor;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_MapIO_writeImage_mindustry_world_Tiles_R_arc_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:writeImage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(240);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_height));
	frame[1].o = sp[0].o;
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasColor) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_mindustry_world_Block_hasBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_hasBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_mapColor;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_mapColor;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(245);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[1].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x), ((((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_height) - (jint(1))) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y)), (frame[4].i));
	LINE_NUMBER(246);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_MapIO_readImage_arc_graphics_Pixmap_mindustry_world_Tiles(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:readImage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x), ((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height) - (jint(1))) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y)));
	frame[4].i = temp0;
	LINE_NUMBER(253);
	sp[0].o = (jobject)SM_mindustry_world_ColorMapper_get_int_R_mindustry_world_Block(ctx, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(256);
	jint temp1 = (jint)((func_mindustry_world_Block_hasBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Block_hasBuilding_R_boolean])(ctx, (frame[5].o));
	if (temp1 == 0) goto label_6;
	}
	goto label_1;
label_6:;
	{
	LINE_NUMBER(258);
	jint temp0 = (jint)((func_mindustry_world_Block_isOverlay_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Block_isOverlay_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(262);
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(263);
	sp[0].o = frame[3].o;
	sp[1].o = frame[5].o;
	clinit_mindustry_game_Team(ctx);
	sp[2].o = (jobject)SF_mindustry_game_Team_derelict;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(265);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, (frame[3].o), (frame[5].o));
	}
label_9:;
	LINE_NUMBER(267);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = frame[3].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_stone;
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[1].o)));
	}
label_17:;
	LINE_NUMBER(274);
	goto label_14;
label_15:;
	LINE_NUMBER(275);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_MapIO_lambda$generatePreview$0_mindustry_io_SaveVersion_mindustry_world_CachedTile_arc_graphics_Pixmap_arc_graphics_Pixmap_mindustry_maps_Map_Array1_short_int_Array1_boolean_java_io_DataInput(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jint param6, jobject param7, jobject param8) {
	jtype frame[22];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:lambda$generatePreview$0", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	frame[7].o = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = frame[8].o;
	clinit_mindustry_io_MapIO$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_MapIO$4);
	clinit_mindustry_io_MapIO$3(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_io_MapIO$3);
	init_mindustry_io_MapIO$3_mindustry_world_CachedTile_arc_graphics_Pixmap_arc_graphics_Pixmap_mindustry_maps_Map_Array1_short_int_Array1_boolean(ctx, sp[3].o, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].i), (frame[7].o));
	init_mindustry_io_MapIO$4_mindustry_world_WorldContext(ctx, sp[2].o, sp[3].o);
	((func_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_MapIO_lambda$createMap$0_arc_struct_StringMap_mindustry_io_SaveVersion_java_io_DataInput(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:lambda$createMap$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_io_SaveVersion_readStringMap_java_io_DataInput_R_arc_struct_StringMap) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readStringMap_java_io_DataInput_R_arc_struct_StringMap])(ctx, (frame[1].o), (frame[2].o));
	((func_arc_struct_StringMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_putAll_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_io_MapIO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO(ctx);
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (137);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (80);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (78);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (71);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (10);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (10);
	clinit_mindustry_io_MapIO(ctx);
	SF_mindustry_io_MapIO_pngHeader = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_MapIO[] {
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
	{ "pngHeader", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_io_MapIO_pngHeader, "[I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_MapIO, 0, "()V", 1 },
	{ "isImage", (intptr_t) SM_mindustry_io_MapIO_isImage_arc_files_Fi_R_boolean, 0, "(Larc/files/Fi;)Z", 9 },
	{ "createMap", (intptr_t) SM_mindustry_io_MapIO_createMap_arc_files_Fi_boolean_R_mindustry_maps_Map, 0, "(Larc/files/Fi;Z)Lmindustry/maps/Map;", 9 },
	{ "writeMap", (intptr_t) SM_mindustry_io_MapIO_writeMap_arc_files_Fi_mindustry_maps_Map, 0, "(Larc/files/Fi;Lmindustry/maps/Map;)V", 9 },
	{ "writeMap", (intptr_t) SM_mindustry_io_MapIO_writeMap_arc_files_Fi_mindustry_maps_Map_boolean, 0, "(Larc/files/Fi;Lmindustry/maps/Map;Z)V", 9 },
	{ "loadMap", (intptr_t) SM_mindustry_io_MapIO_loadMap_mindustry_maps_Map, 0, "(Lmindustry/maps/Map;)V", 9 },
	{ "loadMap", (intptr_t) SM_mindustry_io_MapIO_loadMap_mindustry_maps_Map_mindustry_world_WorldContext, 0, "(Lmindustry/maps/Map;Lmindustry/world/WorldContext;)V", 9 },
	{ "generatePreview", (intptr_t) SM_mindustry_io_MapIO_generatePreview_mindustry_maps_Map_R_arc_graphics_Pixmap, 0, "(Lmindustry/maps/Map;)Larc/graphics/Pixmap;", 9 },
	{ "readPreviewContentHeader", (intptr_t) SM_mindustry_io_MapIO_readPreviewContentHeader_java_io_DataInput, 0, "(Ljava/io/DataInput;)V", 10 },
	{ "generatePreview", (intptr_t) SM_mindustry_io_MapIO_generatePreview_mindustry_world_Tiles_R_arc_graphics_Pixmap, 0, "(Lmindustry/world/Tiles;)Larc/graphics/Pixmap;", 9 },
	{ "colorFor", (intptr_t) SM_mindustry_io_MapIO_colorFor_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_R_int, 0, "(Lmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;Lmindustry/game/Team;)I", 9 },
	{ "writeImage", (intptr_t) SM_mindustry_io_MapIO_writeImage_mindustry_world_Tiles_R_arc_graphics_Pixmap, 0, "(Lmindustry/world/Tiles;)Larc/graphics/Pixmap;", 9 },
	{ "readImage", (intptr_t) SM_mindustry_io_MapIO_readImage_arc_graphics_Pixmap_mindustry_world_Tiles, 0, "(Larc/graphics/Pixmap;Lmindustry/world/Tiles;)V", 9 },
	{ "lambda$generatePreview$0", (intptr_t) SM_mindustry_io_MapIO_lambda$generatePreview$0_mindustry_io_SaveVersion_mindustry_world_CachedTile_arc_graphics_Pixmap_arc_graphics_Pixmap_mindustry_maps_Map_Array1_short_int_Array1_boolean_java_io_DataInput, 0, "(Lmindustry/io/SaveVersion;Lmindustry/world/CachedTile;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Lmindustry/maps/Map;[SI[ZLjava/io/DataInput;)V", 4106 },
	{ "lambda$createMap$0", (intptr_t) SM_mindustry_io_MapIO_lambda$createMap$0_arc_struct_StringMap_mindustry_io_SaveVersion_java_io_DataInput, 0, "(Larc/struct/StringMap;Lmindustry/io/SaveVersion;Ljava/io/DataInput;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_io_MapIO, 0, "()V", 8 },
};

Class class_mindustry_io_MapIO{
		.nativeName = (intptr_t) "mindustry/io/MapIO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_MapIO),
		.classVtable = (intptr_t) vtable_mindustry_io_MapIO,
		.staticInitializer = (intptr_t) clinit_mindustry_io_MapIO,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_MapIO,
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
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_MapIO = registerClass(&class_mindustry_io_MapIO);

}
