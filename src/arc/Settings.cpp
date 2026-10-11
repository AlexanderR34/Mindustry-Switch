#include "arc/Settings.h"
#include "java/lang/Number.h"
#include "arc/util/Strings.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"

static jint extractInt(jcontext ctx, jobject obj, jint def) {
	if (!obj) return def;
	if (isInstance(ctx, obj, &class_java_lang_Number)) {
		return ((func_java_lang_Number_intValue_R_int)((void**)nullCheck(ctx, obj)->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, obj);
	}
	if (isInstance(ctx, obj, &class_java_lang_String)) {
		return SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, obj, def);
	}
	return def;
}

static jfloat extractFloat(jcontext ctx, jobject obj, jfloat def) {
	if (!obj) return def;
	if (isInstance(ctx, obj, &class_java_lang_Number)) {
		return ((func_java_lang_Number_floatValue_R_float)((void**)nullCheck(ctx, obj)->vtable)[VTABLE_java_lang_Number_floatValue_R_float])(ctx, obj);
	}
	if (isInstance(ctx, obj, &class_java_lang_String)) {
		return SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, obj, def);
	}
	return def;
}

static jlong extractLong(jcontext ctx, jobject obj, jlong def) {
	if (!obj) return def;
	if (isInstance(ctx, obj, &class_java_lang_Number)) {
		return ((func_java_lang_Number_longValue_R_long)((void**)nullCheck(ctx, obj)->vtable)[VTABLE_java_lang_Number_longValue_R_long])(ctx, obj);
	}
	if (isInstance(ctx, obj, &class_java_lang_String)) {
		return SM_arc_util_Strings_parseLong_java_lang_String_long_R_long(ctx, obj, def);
	}
	return def;
}
#include "arc/func/Prov.h"
#include "java/util/concurrent/Future.h"
#include "java/io/DataOutput.h"
#include "java/lang/Runnable.h"
#include "arc/util/serialization/Json.h"
#include "arc/struct/Seq.h"
#include "java/util/zip/InflaterInputStream.h"
#include "arc/util/OS.h"
#include "arc/Settings.h"
#include "java/lang/Throwable.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "java/io/DataInputStream.h"
#include "arc/Files.h"
#include "arc/util/Structs.h"
#include "arc/util/Time.h"
#include "java/io/BufferedInputStream.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/JsonValue.h"
#include "java/io/DataOutputStream.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/lang/System.h"
#include "java/lang/Boolean.h"
#include "java/util/HashMap.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "java/lang/Float.h"
#include "arc/files/Fi.h"
#include "java/lang/Iterable.h"
#include "arc/util/io/FastDeflaterOutputStream.h"
#include "arc/func/Cons.h"
#include "java/io/InputStream.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "java/io/IOException.h"
#include "java/io/FilterInputStream.h"
#include "arc/util/serialization/UBJsonReader.h"
#include "arc/func/Longf.h"
#include "arc/Settings_invoke_java_lang_Runnable_0.h"
#include "java/lang/AutoCloseable.h"
#include "arc/util/serialization/BaseJsonWriter.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/serialization/UBJsonWriter.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "java/lang/Long.h"
#include "java/io/OutputStream.h"
#include "arc/util/Threads.h"
#include "arc/Settings_invoke_arc_func_Longf_0.h"
#include "arc/Settings_invoke_arc_func_Longf_1.h"
#include "java/lang/Class.h"

extern "C" {

jbyte SF_arc_Settings_typeBool;
jbyte SF_arc_Settings_typeInt;
jbyte SF_arc_Settings_typeLong;
jbyte SF_arc_Settings_typeFloat;
jbyte SF_arc_Settings_typeString;
jbyte SF_arc_Settings_typeBinary;
jint SF_arc_Settings_maxBackups;
jint SF_arc_Settings_minBackupIntervalMs;

void mark_arc_Settings(jobject object, jint mark, jint depth) {
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
	auto self = (arc_Settings *) object;
	if (self->F_dataDirectory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dataDirectory)->clazz)->markFunction)((jobject) self->F_dataDirectory, mark, depth + 1);
	if (self->F_appName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_appName)->clazz)->markFunction)((jobject) self->F_appName, mark, depth + 1);
	if (self->F_defaults)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaults)->clazz)->markFunction)((jobject) self->F_defaults, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
	if (self->F_errorHandler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errorHandler)->clazz)->markFunction)((jobject) self->F_errorHandler, mark, depth + 1);
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
	if (self->F_byteStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteStream)->clazz)->markFunction)((jobject) self->F_byteStream, mark, depth + 1);
	if (self->F_byteInputStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteInputStream)->clazz)->markFunction)((jobject) self->F_byteInputStream, mark, depth + 1);
	if (self->F_ureader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ureader)->clazz)->markFunction)((jobject) self->F_ureader, mark, depth + 1);
	if (self->F_json)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_json)->clazz)->markFunction)((jobject) self->F_json, mark, depth + 1);
}

void clinit_arc_Settings(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_Settings_typeBool = jint(0);
	SF_arc_Settings_typeInt = jint(1);
	SF_arc_Settings_typeLong = jint(2);
	SF_arc_Settings_typeFloat = jint(3);
	SF_arc_Settings_typeString = jint(4);
	SF_arc_Settings_typeBinary = jint(5);
	SF_arc_Settings_maxBackups = jint(10);
	SF_arc_Settings_minBackupIntervalMs = jint(120000);
}

void init_arc_Settings(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Settings(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_appName = (jref) (((jobject) createStringLiteral(ctx, u8"app"_j)));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_Settings *) NULL_CHECK(sp[0].o))->F_defaults = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((arc_Settings *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(28);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_shouldAutosave = (jint(1));
	LINE_NUMBER(29);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(0));
	LINE_NUMBER(30);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_writeCompressed = (jint(0));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Threads_executor_java_lang_String_int_R_java_util_concurrent_ExecutorService(ctx, (((jobject) createStringLiteral(ctx, u8"Settings Backup"_j))), (jint(1)));
	((arc_Settings *) NULL_CHECK(sp[0].o))->F_executor = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream_int(ctx, sp[1].o, (32));
	((arc_Settings *) NULL_CHECK(sp[0].o))->F_byteStream = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_util_io_ReusableByteInStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_ReusableByteInStream);
	init_arc_util_io_ReusableByteInStream(ctx, sp[1].o);
	((arc_Settings *) NULL_CHECK(sp[0].o))->F_byteInputStream = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_UBJsonReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_UBJsonReader);
	init_arc_util_serialization_UBJsonReader(ctx, sp[1].o);
	((arc_Settings *) NULL_CHECK(sp[0].o))->F_ureader = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_Json(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_Json);
	init_arc_util_serialization_Json(ctx, sp[1].o);
	((arc_Settings *) NULL_CHECK(sp[0].o))->F_json = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_setJson_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:setJson", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_json = (jref) (frame[1].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_setCompressed_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:setCompressed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(45);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_writeCompressed = (frame[1].i);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_getAppName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getAppName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_appName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_setAppName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:setAppName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_appName = (jref) (frame[1].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_setErrorHandler_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:setErrorHandler", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_errorHandler = (jref) (frame[1].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_setAutosave_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:setAutosave", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(66);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_shouldAutosave = (frame[1].i);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_Settings_modified_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:modified", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return ((jint)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_modified);
	}

	popStackFrame(ctx);
}

void M_arc_Settings_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(76);
	((func_arc_Settings_loadValues) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_loadValues])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(85);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(77);
	frame[1].o = sp[0].o;
	LINE_NUMBER(78);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Error loading settings"_j))), (frame[1].o));
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_errorHandler;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(80);
	if (((jint)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_hasErrored) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_errorHandler;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(82);
	// Settings failed to load and no errorHandler is set: do not crash startup, fallback to defaults
	}
label_9:;
	{
	LINE_NUMBER(84);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_hasErrored = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(87);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(1));
	LINE_NUMBER(88);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_forceSave(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:forceSave", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	if (((jint)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_loaded) != 0) goto label_0;
	}
	popStackFrame(ctx, self);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(95);
	((func_arc_Settings_saveValues) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_saveValues])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(104);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(96);
	frame[1].o = sp[0].o;
	LINE_NUMBER(97);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Error writing settings"_j))), (frame[1].o));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_errorHandler;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(99);
	if (((jint)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_hasErrored) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_errorHandler;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(101);
	throwException(ctx, (frame[1].o));	}
label_10:;
	{
	LINE_NUMBER(103);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_hasErrored = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(105);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_modified = (jint(0));
	LINE_NUMBER(106);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_manualSave(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:manualSave", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	if (((jint)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_loaded) == 0) goto label_1;
	}
	{
	LINE_NUMBER(111);
	((func_arc_Settings_forceSave) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_forceSave])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(113);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Settings_autosave(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:autosave", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	if (((jint)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_modified) == 0) goto label_1;
	}
	{
	if (((jint)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_shouldAutosave) == 0) goto label_1;
	}
	{
	LINE_NUMBER(118);
	((func_arc_Settings_forceSave) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_forceSave])(ctx, (frame[0].o));
	LINE_NUMBER(119);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_modified = (jint(0));
	}
label_1:;
	LINE_NUMBER(121);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Settings_loadValues(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:loadValues", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_Settings_getSettingsFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getSettingsFile_R_arc_files_Fi])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((func_arc_Settings_getBackupSettingsFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getBackupSettingsFile_R_arc_files_Fi])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_0;
	}
	LINE_NUMBER(127);
	popStackFrame(ctx, self);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_Settings_getSettingsFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getSettingsFile_R_arc_files_Fi])(ctx, (frame[0].o));
	((func_arc_Settings_loadValues_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_loadValues_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_arc_Settings_getSettingsFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getSettingsFile_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_Settings_getBackupSettingsFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getBackupSettingsFile_R_arc_files_Fi])(ctx, (frame[0].o));
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(156);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(135);
	frame[1].o = sp[0].o;
	LINE_NUMBER(136);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to load base settings file, attempting to load backup."_j))), (frame[1].o));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_arc_Settings_getBackupFolder_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getBackupFolder_R_arc_files_Fi])(ctx, (frame[0].o));
	if (sp[0].o) {
		sp[0].o = (jobject)((func_arc_files_Fi_seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_seq_R_arc_struct_Seq])(ctx, sp[0].o);
	}
	if (!sp[0].o) {
		clinit_arc_struct_Seq(ctx);
		sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq(ctx, sp[0].o);
	}
	sp[1].o = (jobject)((func_arc_Settings_getBackupSettingsFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getBackupSettingsFile_R_arc_files_Fi])(ctx, (frame[0].o));
	if (sp[1].o && ((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[1].o)) {
		sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
	frame[2].o = sp[0].o;
	LINE_NUMBER(140);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_arc_Settings_invoke_arc_func_Longf_0(ctx);
		auto proxy = (arc_Settings_invoke_arc_func_Longf_0 *) gcAlloc(ctx, &class_arc_Settings_invoke_arc_func_Longf_0);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingLong_arc_func_Longf_R_java_util_Comparator(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_files_Fi, sp[0].o));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(145);
	((func_arc_Settings_loadValues_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_loadValues_arc_files_Fi])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(146);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_Settings_getSettingsFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getSettingsFile_R_arc_files_Fi])(ctx, (frame[0].o));
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(148);
	SM_arc_util_Log_info_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8"Loaded backup settings file successfully!"_j))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(151);
	popStackFrame(ctx, self);
	INST_RETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(152);
	frame[5].o = sp[0].o;
	LINE_NUMBER(153);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to load backup settings file."_j))), (frame[5].o));
	LINE_NUMBER(155);
	goto label_16;
	}
label_11:;
	LINE_NUMBER(157);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Settings_loadValues_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:loadValues", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(2)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_arc_files_Fi_readBytes_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readBytes_Array1_byte_int_int_R_int])(ctx, (frame[1].o), (frame[2].o), (jint(0)), (jint(2)));
	LINE_NUMBER(163);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(0)))) != (120)) goto label_11;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(1)))) == (jint(1))) goto label_12;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(1)))) == (94)) goto label_12;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(1)))) == (-100)) goto label_12;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(1)))) != (-38)) goto label_11;
	}
label_12:;
	INST_ICONST(1);
	goto label_13;
label_11:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(165);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	sp[1].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, (frame[1].o), (8192));
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	sp[0].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, (frame[1].o), (8192));
	sp += 1;
	}
label_16:;
	POP_N(2); // Pop method args
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	INST_ASTORE(4);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(166);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(169);
	if ((frame[5].i) > 0) goto label_18;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0 values are not allowed."_j))));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(170);
	frame[6].i = (jint(0));
	}
label_19:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_20;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(173);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[4].o));
	frame[8].i = temp0;
	LINE_NUMBER(175);
	switch((frame[8].i)) {
		case 0: goto label_24;
		case 1: goto label_25;
		case 2: goto label_26;
		case 3: goto label_27;
		case 4: goto label_28;
		case 5: goto label_29;
		default: goto label_30;
	}
	}
label_24:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[1].o = frame[7].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readBoolean_R_boolean])(ctx, (frame[4].o));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(178);
	goto label_32;
	}
label_25:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[1].o = frame[7].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[4].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(181);
	goto label_32;
	}
label_26:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[1].o = frame[7].o;
	jlong temp0 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, (frame[4].o));
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(184);
	goto label_32;
	}
label_27:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[1].o = frame[7].o;
	jfloat temp0 = (jfloat)((func_java_io_DataInputStream_readFloat_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readFloat_R_float])(ctx, (frame[4].o));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(187);
	goto label_32;
	}
label_28:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(190);
	goto label_32;
	}
label_29:;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[4].o));
	frame[9].i = temp0;
	LINE_NUMBER(193);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(194);
	((func_java_io_DataInputStream_readFully_Array1_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte])(ctx, (frame[4].o), (frame[10].o));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[7].o), (frame[10].o));
	LINE_NUMBER(196);
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(198);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown key type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_32:;
	{
	LINE_NUMBER(170);
	INST_IINC(6, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[4].o));
	frame[6].i = temp0;
	LINE_NUMBER(203);
	if ((frame[6].i) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(204);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Trailing settings data; expected EOF, but got: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[6].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(206);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[4].o));
	goto label_43;
	}
label_2:;
	LINE_NUMBER(165);
	INST_ASTORE(5);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_44;
label_6:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[5].o), (frame[6].o));
	}
label_44:;
	INST_ALOAD(5);
	INST_ATHROW();
	label_43:;
	LINE_NUMBER(207);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Settings_saveValues(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:saveValues", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_arc_Settings_getSettingsFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getSettingsFile_R_arc_files_Fi])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(213);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_writeCompressed) == 0) goto label_13;
	}
	{
	clinit_arc_util_io_FastDeflaterOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_FastDeflaterOutputStream);
	sp[1].o = (jobject)((func_arc_files_Fi_write_boolean_int_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_write_boolean_int_R_java_io_OutputStream])(ctx, (frame[1].o), (jint(0)), (8192));
	init_arc_util_io_FastDeflaterOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((func_arc_files_Fi_write_boolean_int_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_write_boolean_int_R_java_io_OutputStream])(ctx, (frame[1].o), (jint(0)), (8192));
	sp += 1;
	}
label_14:;
	POP_N(2); // Pop method args
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	INST_ASTORE(2);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(214);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (jint)((func_java_util_HashMap_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_HashMap_size_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(216);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_java_util_HashMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_entrySet_R_java_util_Set])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(217);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(221);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_Boolean)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(222);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(223);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[5].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[5].o))));
	((func_java_io_DataOutputStream_writeBoolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeBoolean_boolean])(ctx, sp[0].o, temp0);
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(224);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_Integer)) == 0) goto label_24;
	}
	{
	LINE_NUMBER(225);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(226);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[5].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[5].o))));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, temp0);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(227);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_Long)) == 0) goto label_27;
	}
	{
	LINE_NUMBER(228);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[2].o), (jint(2)));
	LINE_NUMBER(229);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Long, (frame[5].o))))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (checkCast(ctx, &class_java_lang_Long, (frame[5].o))));
	((func_java_io_DataOutputStream_writeLong_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeLong_long])(ctx, sp[0].o, temp0);
	goto label_23;
	}
label_27:;
	{
	LINE_NUMBER(230);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_Float)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(231);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[2].o), (jint(3)));
	LINE_NUMBER(232);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[5].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[5].o))));
	((func_java_io_DataOutputStream_writeFloat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeFloat_float])(ctx, sp[0].o, temp0);
	goto label_23;
	}
label_30:;
	{
	LINE_NUMBER(233);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_String)) == 0) goto label_33;
	}
	{
	LINE_NUMBER(234);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[2].o), (jint(4)));
	LINE_NUMBER(235);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, (frame[2].o), (checkCast(ctx, &class_java_lang_String, (frame[5].o))));
	goto label_23;
	}
label_33:;
	{
	LINE_NUMBER(236);
	if ((isInstance(ctx, (frame[5].o), getArrayClass(&class_byte, 1))) == 0) goto label_23;
	}
	{
	LINE_NUMBER(237);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[2].o), (jint(5)));
	LINE_NUMBER(238);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, (frame[2].o), (((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_byte, 1), (frame[5].o)))))->length));
	LINE_NUMBER(239);
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, (frame[2].o), (checkCast(ctx, getArrayClass(&class_byte, 1), (frame[5].o))));
	}
label_23:;
	LINE_NUMBER(241);
	goto label_16;
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(243);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[2].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(213);
	INST_ASTORE(3);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_39;
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_39:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(247);
	goto label_40;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(243);
	frame[2].o = sp[0].o;
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(246);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing preferences: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_40:;
	{
	LINE_NUMBER(249);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_lastBackupTime));
	if ((longCompare(temp0, (jlong(120000ll)))) <= 0) goto label_43;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((arc_Settings *) NULL_CHECK(sp[0].o))->F_lastBackupTime = temp0;
	LINE_NUMBER(252);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_executor;
	{ /* InvokeDynamic */
		clinit_arc_Settings_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_Settings_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_Settings_invoke_java_lang_Runnable_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_43:;
	LINE_NUMBER(271);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_Settings_getSettingsFile_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getSettingsFile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"settings.bin"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_getBackupFolder_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getBackupFolder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"settings_backups"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_getBackupSettingsFile_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getBackupSettingsFile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"settings_backup.bin"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_getDataDirectory_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getDataDirectory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_dataDirectory;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_appName;
	sp[1].o = (jobject)SM_arc_util_OS_getAppDataDirectoryString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_Files_absolute_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_Settings *) NULL_CHECK(sp[-1].o))->F_dataDirectory;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_arc_Settings_setDataDirectory_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:setDataDirectory", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(293);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_dataDirectory = (jref) (frame[1].o);
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_defaults_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:defaults", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_defaults;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (jint(1))))));
	LINE_NUMBER(301);
	INST_IINC(2, 2);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(304);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Settings_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(309);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_getDefault_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getDefault", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_defaults;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_Settings_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (jint)((func_java_util_HashMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (jint)((func_java_util_HashMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(2);
label_2:;
	popStackFrame(ctx, self);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_arc_Settings_isModified_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:isModified", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return ((jint)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_modified);
	}

	popStackFrame(ctx);
}

void M_arc_Settings_putJson_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:putJson", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(328);
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(329);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:putJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_byteStream;
	((func_java_io_ByteArrayOutputStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_ByteArrayOutputStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(334);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_json;
	clinit_arc_util_serialization_UBJsonWriter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_UBJsonWriter);
	sp[2].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_byteStream;
	init_arc_util_serialization_UBJsonWriter_java_io_OutputStream(ctx, sp[1].o, sp[2].o);
	((func_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(335);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_json;
	sp[1].o = frame[3].o;
	sp += 2;
	if ((frame[3].o) != nullptr) goto label_3;
	}
	INST_ACONST_NULL();
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_4:;
	{
	sp -= 3;
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_byteStream;
	sp[2].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, sp[2].o);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(339);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_modified = (jint(1));
	LINE_NUMBER(340);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getJson", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(344);
	jint temp0 = (jint)((func_arc_Settings_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_has_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_byteInputStream;
	sp[1].o = (jobject)((func_arc_Settings_getBytes_java_lang_String_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getBytes_java_lang_String_R_Array1_byte])(ctx, (frame[0].o), (frame[1].o));
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(346);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_json;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_ureader;
	sp[4].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_byteInputStream;
	sp[3].o = (jobject)((func_arc_util_serialization_UBJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(347);
	frame[5].o = sp[0].o;
	LINE_NUMBER(348);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error reading JSON with key '"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_Settings_getFloat_java_lang_String_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = extractFloat(ctx, sp[0].o, frame[2].f);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_arc_Settings_getLong_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getLong", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[2].l));
	sp[0].o = (jobject)((func_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jlong temp0 = extractLong(ctx, sp[0].o, frame[2].l);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_getLong_java_lang_String_R_java_lang_Long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getLong", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	jlong temp0 = (jlong)((func_arc_Settings_getLong_java_lang_String_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getLong_java_lang_String_long_R_long])(ctx, (frame[0].o), (frame[1].o), (jlong(0)));
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_Settings_getInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = extractInt(ctx, sp[0].o, frame[2].i);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_Settings_getBool_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getBool", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(374);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(375);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Boolean)) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[3].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[3].o))));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ILOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_Settings_getBytes_java_lang_String_Array1_byte_R_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getBytes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_byte, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

jfloat M_arc_Settings_getFloat_java_lang_String_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getFloat", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_defaults;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(0)));
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = extractFloat(ctx, sp[2].o, 0.0f);
	jfloat temp1 = (jfloat)((func_arc_Settings_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getFloat_java_lang_String_float_R_float])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_arc_Settings_getInt_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_defaults;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, sp[4].o);
	jint temp0 = extractInt(ctx, sp[2].o, 0);
	jint temp1 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_arc_Settings_getBool_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getBool", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(395);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_defaults;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, sp[4].o);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[2].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[2].o)));
	jint temp1 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getBoolOnce", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(400);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(401);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(404);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_Settings_getBoolOnce_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getBoolOnce", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(408);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	frame[2].i = temp0;
	LINE_NUMBER(409);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(410);
	if ((frame[2].i) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_Settings_getBytes_java_lang_String_R_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getBytes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(414);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_defaults;
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_Settings_getBytes_java_lang_String_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBytes_java_lang_String_Array1_byte_R_Array1_byte])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, getArrayClass(&class_byte, 1), sp[2].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_getString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:getString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_defaults;
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_putAll_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:putAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(423);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(424);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(425);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Settings_toggle_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:toggle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(429);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	sp += 2;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_putInt_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:putInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(434);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(435);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_putFloat_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:putFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (frame[2].f));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_put_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(444);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Float)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Integer)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Boolean)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Long)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_String)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_byte, 1))) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(447);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_modified = (jint(1));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(449);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid object stored: "_j))));
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[2].o) != nullptr) goto label_5;
	}
	INST_ACONST_NULL();
	goto label_6;
label_5:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_6:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(451);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Settings_remove_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(455);
	((arc_Settings *) NULL_CHECK((frame[0].o)))->F_modified = (jint(1));
	LINE_NUMBER(456);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_Settings_keys_R_java_lang_Iterable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:keys", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_java_util_HashMap_keySet_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_keySet_R_java_util_Set])(ctx, sp[0].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_Settings_keySize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:keySize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((arc_Settings *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (jint)((func_java_util_HashMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_Settings_lambda$saveValues$0_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:lambda$saveValues$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_arc_Settings_getBackupFolder_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Settings_getBackupFolder_R_arc_files_Fi])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_arc_files_Fi_seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_seq_R_arc_struct_Seq])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(259);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_arc_Settings_invoke_arc_func_Longf_1(ctx);
		auto proxy = (arc_Settings_invoke_arc_func_Longf_1 *) gcAlloc(ctx, &class_arc_Settings_invoke_arc_func_Longf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingLong_arc_func_Longf_R_java_util_Comparator(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(262);
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[2].o, temp0);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8".bin"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, sp[2].o);
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(265);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size) < (10)) goto label_11;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_files_Fi, sp[0].o)))->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, (checkCast(ctx, &class_arc_files_Fi, sp[0].o)));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(268);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_13;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_13:;
	LINE_NUMBER(269);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong SM_arc_Settings_lambda$saveValues$1_arc_files_Fi_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:lambda$saveValues$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Settings(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(259);
	jlong temp0 = (jlong)((func_arc_files_Fi_lastModified_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_lastModified_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (-temp0);
	}

	popStackFrame(ctx);
}

jlong SM_arc_Settings_lambda$loadValues$0_arc_files_Fi_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Settings:lambda$loadValues$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Settings(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(140);
	jlong temp0 = (jlong)((func_arc_files_Fi_lastModified_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_lastModified_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (-temp0);
	}

	popStackFrame(ctx);
}

void *vtable_arc_Settings[] {
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
	(void *) M_arc_Settings_setJson_arc_util_serialization_Json,
	(void *) M_arc_Settings_setCompressed_boolean,
	(void *) M_arc_Settings_getAppName_R_java_lang_String,
	(void *) M_arc_Settings_setAppName_java_lang_String,
	(void *) M_arc_Settings_setErrorHandler_arc_func_Cons,
	(void *) M_arc_Settings_setAutosave_boolean,
	(void *) M_arc_Settings_modified_R_boolean,
	(void *) M_arc_Settings_load,
	(void *) M_arc_Settings_forceSave,
	(void *) M_arc_Settings_manualSave,
	(void *) M_arc_Settings_autosave,
	(void *) M_arc_Settings_loadValues,
	(void *) M_arc_Settings_loadValues_arc_files_Fi,
	(void *) M_arc_Settings_saveValues,
	(void *) M_arc_Settings_getSettingsFile_R_arc_files_Fi,
	(void *) M_arc_Settings_getBackupFolder_R_arc_files_Fi,
	(void *) M_arc_Settings_getBackupSettingsFile_R_arc_files_Fi,
	(void *) M_arc_Settings_getDataDirectory_R_arc_files_Fi,
	(void *) M_arc_Settings_setDataDirectory_arc_files_Fi,
	(void *) M_arc_Settings_defaults_Array1_java_lang_Object,
	(void *) M_arc_Settings_clear,
	(void *) M_arc_Settings_getDefault_java_lang_String_R_java_lang_Object,
	(void *) M_arc_Settings_has_java_lang_String_R_boolean,
	(void *) M_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_Settings_isModified_R_boolean,
	(void *) M_arc_Settings_putJson_java_lang_String_java_lang_Object,
	(void *) M_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object,
	(void *) M_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_Settings_getFloat_java_lang_String_float_R_float,
	(void *) M_arc_Settings_getLong_java_lang_String_long_R_long,
	(void *) M_arc_Settings_getLong_java_lang_String_R_java_lang_Long,
	(void *) M_arc_Settings_getInt_java_lang_String_int_R_int,
	(void *) M_arc_Settings_getBool_java_lang_String_boolean_R_boolean,
	(void *) M_arc_Settings_getBytes_java_lang_String_Array1_byte_R_Array1_byte,
	(void *) M_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_arc_Settings_getFloat_java_lang_String_R_float,
	(void *) M_arc_Settings_getInt_java_lang_String_R_int,
	(void *) M_arc_Settings_getBool_java_lang_String_R_boolean,
	(void *) M_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable,
	(void *) M_arc_Settings_getBoolOnce_java_lang_String_R_boolean,
	(void *) M_arc_Settings_getBytes_java_lang_String_R_Array1_byte,
	(void *) M_arc_Settings_getString_java_lang_String_R_java_lang_String,
	(void *) M_arc_Settings_putAll_arc_struct_ObjectMap,
	(void *) M_arc_Settings_toggle_java_lang_String,
	(void *) M_arc_Settings_putInt_java_lang_String_int,
	(void *) M_arc_Settings_putFloat_java_lang_String_float,
	(void *) M_arc_Settings_put_java_lang_String_java_lang_Object,
	(void *) M_arc_Settings_remove_java_lang_String,
	(void *) M_arc_Settings_keys_R_java_lang_Iterable,
	(void *) M_arc_Settings_keySize_R_int,
	(void *) M_arc_Settings_lambda$saveValues$0_arc_files_Fi,
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
	{ "setJson", "(Larc/util/serialization/Json;)V" },
	{ "setCompressed", "(Z)V" },
	{ "getAppName", "()Ljava/lang/String;" },
	{ "setAppName", "(Ljava/lang/String;)V" },
	{ "setErrorHandler", "(Larc/func/Cons;)V" },
	{ "setAutosave", "(Z)V" },
	{ "modified", "()Z" },
	{ "load", "()V" },
	{ "forceSave", "()V" },
	{ "manualSave", "()V" },
	{ "autosave", "()V" },
	{ "loadValues", "()V" },
	{ "loadValues", "(Larc/files/Fi;)V" },
	{ "saveValues", "()V" },
	{ "getSettingsFile", "()Larc/files/Fi;" },
	{ "getBackupFolder", "()Larc/files/Fi;" },
	{ "getBackupSettingsFile", "()Larc/files/Fi;" },
	{ "getDataDirectory", "()Larc/files/Fi;" },
	{ "setDataDirectory", "(Larc/files/Fi;)V" },
	{ "defaults", "([Ljava/lang/Object;)V" },
	{ "clear", "()V" },
	{ "getDefault", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;)Z" },
	{ "get", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isModified", "()Z" },
	{ "putJson", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "putJson", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;)V" },
	{ "getJson", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Larc/func/Prov;)Ljava/lang/Object;" },
	{ "getJson", "(Ljava/lang/String;Ljava/lang/Class;Larc/func/Prov;)Ljava/lang/Object;" },
	{ "getFloat", "(Ljava/lang/String;F)F" },
	{ "getLong", "(Ljava/lang/String;J)J" },
	{ "getLong", "(Ljava/lang/String;)Ljava/lang/Long;" },
	{ "getInt", "(Ljava/lang/String;I)I" },
	{ "getBool", "(Ljava/lang/String;Z)Z" },
	{ "getBytes", "(Ljava/lang/String;[B)[B" },
	{ "getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "getFloat", "(Ljava/lang/String;)F" },
	{ "getInt", "(Ljava/lang/String;)I" },
	{ "getBool", "(Ljava/lang/String;)Z" },
	{ "getBoolOnce", "(Ljava/lang/String;Ljava/lang/Runnable;)V" },
	{ "getBoolOnce", "(Ljava/lang/String;)Z" },
	{ "getBytes", "(Ljava/lang/String;)[B" },
	{ "getString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "putAll", "(Larc/struct/ObjectMap;)V" },
	{ "toggle", "(Ljava/lang/String;)V" },
	{ "putInt", "(Ljava/lang/String;I)V" },
	{ "putFloat", "(Ljava/lang/String;F)V" },
	{ "put", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "remove", "(Ljava/lang/String;)V" },
	{ "keys", "()Ljava/lang/Iterable;" },
	{ "keySize", "()I" },
	{ "lambda$saveValues$0", "(Larc/files/Fi;)V" },
};

static FieldMetadata fields[] {
	{ "typeBool", &class_byte, (intptr_t) &SF_arc_Settings_typeBool, "B", 28 },
	{ "typeInt", &class_byte, (intptr_t) &SF_arc_Settings_typeInt, "B", 28 },
	{ "typeLong", &class_byte, (intptr_t) &SF_arc_Settings_typeLong, "B", 28 },
	{ "typeFloat", &class_byte, (intptr_t) &SF_arc_Settings_typeFloat, "B", 28 },
	{ "typeString", &class_byte, (intptr_t) &SF_arc_Settings_typeString, "B", 28 },
	{ "typeBinary", &class_byte, (intptr_t) &SF_arc_Settings_typeBinary, "B", 28 },
	{ "maxBackups", &class_int, (intptr_t) &SF_arc_Settings_maxBackups, "I", 28 },
	{ "minBackupIntervalMs", &class_int, (intptr_t) &SF_arc_Settings_minBackupIntervalMs, "I", 28 },
	{ "dataDirectory", &class_arc_files_Fi, offsetof(arc_Settings, F_dataDirectory), "Larc/files/Fi;", 4 },
	{ "appName", &class_java_lang_String, offsetof(arc_Settings, F_appName), "Ljava/lang/String;", 4 },
	{ "defaults", &class_arc_struct_ObjectMap, offsetof(arc_Settings, F_defaults), "Larc/struct/ObjectMap;", 4 },
	{ "values", &class_java_util_HashMap, offsetof(arc_Settings, F_values), "Ljava/util/HashMap;", 4 },
	{ "modified", &class_boolean, offsetof(arc_Settings, F_modified), "Z", 4 },
	{ "errorHandler", &class_arc_func_Cons, offsetof(arc_Settings, F_errorHandler), "Larc/func/Cons;", 4 },
	{ "hasErrored", &class_boolean, offsetof(arc_Settings, F_hasErrored), "Z", 4 },
	{ "shouldAutosave", &class_boolean, offsetof(arc_Settings, F_shouldAutosave), "Z", 4 },
	{ "loaded", &class_boolean, offsetof(arc_Settings, F_loaded), "Z", 4 },
	{ "writeCompressed", &class_boolean, offsetof(arc_Settings, F_writeCompressed), "Z", 4 },
	{ "lastBackupTime", &class_long, offsetof(arc_Settings, F_lastBackupTime), "J", 2 },
	{ "executor", &class_java_util_concurrent_ExecutorService, offsetof(arc_Settings, F_executor), "Ljava/util/concurrent/ExecutorService;", 4 },
	{ "byteStream", &class_java_io_ByteArrayOutputStream, offsetof(arc_Settings, F_byteStream), "Ljava/io/ByteArrayOutputStream;", 4 },
	{ "byteInputStream", &class_arc_util_io_ReusableByteInStream, offsetof(arc_Settings, F_byteInputStream), "Larc/util/io/ReusableByteInStream;", 4 },
	{ "ureader", &class_arc_util_serialization_UBJsonReader, offsetof(arc_Settings, F_ureader), "Larc/util/serialization/UBJsonReader;", 4 },
	{ "json", &class_arc_util_serialization_Json, offsetof(arc_Settings, F_json), "Larc/util/serialization/Json;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_Settings, 0, "()V", 1 },
	{ "setJson", (intptr_t) M_arc_Settings_setJson_arc_util_serialization_Json, VTABLE_arc_Settings_setJson_arc_util_serialization_Json, "(Larc/util/serialization/Json;)V", 1 },
	{ "setCompressed", (intptr_t) M_arc_Settings_setCompressed_boolean, VTABLE_arc_Settings_setCompressed_boolean, "(Z)V", 1 },
	{ "getAppName", (intptr_t) M_arc_Settings_getAppName_R_java_lang_String, VTABLE_arc_Settings_getAppName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setAppName", (intptr_t) M_arc_Settings_setAppName_java_lang_String, VTABLE_arc_Settings_setAppName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setErrorHandler", (intptr_t) M_arc_Settings_setErrorHandler_arc_func_Cons, VTABLE_arc_Settings_setErrorHandler_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "setAutosave", (intptr_t) M_arc_Settings_setAutosave_boolean, VTABLE_arc_Settings_setAutosave_boolean, "(Z)V", 1 },
	{ "modified", (intptr_t) M_arc_Settings_modified_R_boolean, VTABLE_arc_Settings_modified_R_boolean, "()Z", 1 },
	{ "load", (intptr_t) M_arc_Settings_load, VTABLE_arc_Settings_load, "()V", 33 },
	{ "forceSave", (intptr_t) M_arc_Settings_forceSave, VTABLE_arc_Settings_forceSave, "()V", 33 },
	{ "manualSave", (intptr_t) M_arc_Settings_manualSave, VTABLE_arc_Settings_manualSave, "()V", 33 },
	{ "autosave", (intptr_t) M_arc_Settings_autosave, VTABLE_arc_Settings_autosave, "()V", 33 },
	{ "loadValues", (intptr_t) M_arc_Settings_loadValues, VTABLE_arc_Settings_loadValues, "()V", 33 },
	{ "loadValues", (intptr_t) M_arc_Settings_loadValues_arc_files_Fi, VTABLE_arc_Settings_loadValues_arc_files_Fi, "(Larc/files/Fi;)V", 33 },
	{ "saveValues", (intptr_t) M_arc_Settings_saveValues, VTABLE_arc_Settings_saveValues, "()V", 33 },
	{ "getSettingsFile", (intptr_t) M_arc_Settings_getSettingsFile_R_arc_files_Fi, VTABLE_arc_Settings_getSettingsFile_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "getBackupFolder", (intptr_t) M_arc_Settings_getBackupFolder_R_arc_files_Fi, VTABLE_arc_Settings_getBackupFolder_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "getBackupSettingsFile", (intptr_t) M_arc_Settings_getBackupSettingsFile_R_arc_files_Fi, VTABLE_arc_Settings_getBackupSettingsFile_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "getDataDirectory", (intptr_t) M_arc_Settings_getDataDirectory_R_arc_files_Fi, VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "setDataDirectory", (intptr_t) M_arc_Settings_setDataDirectory_arc_files_Fi, VTABLE_arc_Settings_setDataDirectory_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "defaults", (intptr_t) M_arc_Settings_defaults_Array1_java_lang_Object, VTABLE_arc_Settings_defaults_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 161 },
	{ "clear", (intptr_t) M_arc_Settings_clear, VTABLE_arc_Settings_clear, "()V", 33 },
	{ "getDefault", (intptr_t) M_arc_Settings_getDefault_java_lang_String_R_java_lang_Object, VTABLE_arc_Settings_getDefault_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 33 },
	{ "has", (intptr_t) M_arc_Settings_has_java_lang_String_R_boolean, VTABLE_arc_Settings_has_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 33 },
	{ "get", (intptr_t) M_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object, VTABLE_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "isModified", (intptr_t) M_arc_Settings_isModified_R_boolean, VTABLE_arc_Settings_isModified_R_boolean, "()Z", 1 },
	{ "putJson", (intptr_t) M_arc_Settings_putJson_java_lang_String_java_lang_Object, VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Object;)V", 33 },
	{ "putJson", (intptr_t) M_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object, VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;)V", 33 },
	{ "getJson", (intptr_t) M_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object, VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Larc/func/Prov;)Ljava/lang/Object;", 33 },
	{ "getJson", (intptr_t) M_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object, VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Larc/func/Prov;)Ljava/lang/Object;", 1 },
	{ "getFloat", (intptr_t) M_arc_Settings_getFloat_java_lang_String_float_R_float, VTABLE_arc_Settings_getFloat_java_lang_String_float_R_float, "(Ljava/lang/String;F)F", 1 },
	{ "getLong", (intptr_t) M_arc_Settings_getLong_java_lang_String_long_R_long, VTABLE_arc_Settings_getLong_java_lang_String_long_R_long, "(Ljava/lang/String;J)J", 1 },
	{ "getLong", (intptr_t) M_arc_Settings_getLong_java_lang_String_R_java_lang_Long, VTABLE_arc_Settings_getLong_java_lang_String_R_java_lang_Long, "(Ljava/lang/String;)Ljava/lang/Long;", 1 },
	{ "getInt", (intptr_t) M_arc_Settings_getInt_java_lang_String_int_R_int, VTABLE_arc_Settings_getInt_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "getBool", (intptr_t) M_arc_Settings_getBool_java_lang_String_boolean_R_boolean, VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean, "(Ljava/lang/String;Z)Z", 1 },
	{ "getBytes", (intptr_t) M_arc_Settings_getBytes_java_lang_String_Array1_byte_R_Array1_byte, VTABLE_arc_Settings_getBytes_java_lang_String_Array1_byte_R_Array1_byte, "(Ljava/lang/String;[B)[B", 1 },
	{ "getString", (intptr_t) M_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getFloat", (intptr_t) M_arc_Settings_getFloat_java_lang_String_R_float, VTABLE_arc_Settings_getFloat_java_lang_String_R_float, "(Ljava/lang/String;)F", 1 },
	{ "getInt", (intptr_t) M_arc_Settings_getInt_java_lang_String_R_int, VTABLE_arc_Settings_getInt_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getBool", (intptr_t) M_arc_Settings_getBool_java_lang_String_R_boolean, VTABLE_arc_Settings_getBool_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getBoolOnce", (intptr_t) M_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable, VTABLE_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/Runnable;)V", 1 },
	{ "getBoolOnce", (intptr_t) M_arc_Settings_getBoolOnce_java_lang_String_R_boolean, VTABLE_arc_Settings_getBoolOnce_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getBytes", (intptr_t) M_arc_Settings_getBytes_java_lang_String_R_Array1_byte, VTABLE_arc_Settings_getBytes_java_lang_String_R_Array1_byte, "(Ljava/lang/String;)[B", 1 },
	{ "getString", (intptr_t) M_arc_Settings_getString_java_lang_String_R_java_lang_String, VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "putAll", (intptr_t) M_arc_Settings_putAll_arc_struct_ObjectMap, VTABLE_arc_Settings_putAll_arc_struct_ObjectMap, "(Larc/struct/ObjectMap;)V", 1 },
	{ "toggle", (intptr_t) M_arc_Settings_toggle_java_lang_String, VTABLE_arc_Settings_toggle_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "putInt", (intptr_t) M_arc_Settings_putInt_java_lang_String_int, VTABLE_arc_Settings_putInt_java_lang_String_int, "(Ljava/lang/String;I)V", 1 },
	{ "putFloat", (intptr_t) M_arc_Settings_putFloat_java_lang_String_float, VTABLE_arc_Settings_putFloat_java_lang_String_float, "(Ljava/lang/String;F)V", 1 },
	{ "put", (intptr_t) M_arc_Settings_put_java_lang_String_java_lang_Object, VTABLE_arc_Settings_put_java_lang_String_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Object;)V", 33 },
	{ "remove", (intptr_t) M_arc_Settings_remove_java_lang_String, VTABLE_arc_Settings_remove_java_lang_String, "(Ljava/lang/String;)V", 33 },
	{ "keys", (intptr_t) M_arc_Settings_keys_R_java_lang_Iterable, VTABLE_arc_Settings_keys_R_java_lang_Iterable, "()Ljava/lang/Iterable;", 33 },
	{ "keySize", (intptr_t) M_arc_Settings_keySize_R_int, VTABLE_arc_Settings_keySize_R_int, "()I", 33 },
	{ "lambda$saveValues$0", (intptr_t) M_arc_Settings_lambda$saveValues$0_arc_files_Fi, VTABLE_arc_Settings_lambda$saveValues$0_arc_files_Fi, "(Larc/files/Fi;)V", 4098 },
	{ "lambda$saveValues$1", (intptr_t) SM_arc_Settings_lambda$saveValues$1_arc_files_Fi_R_long, 0, "(Larc/files/Fi;)J", 4106 },
	{ "lambda$loadValues$0", (intptr_t) SM_arc_Settings_lambda$loadValues$0_arc_files_Fi_R_long, 0, "(Larc/files/Fi;)J", 4106 },
};

Class class_arc_Settings{
		.nativeName = (intptr_t) "arc/Settings",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_Settings),
		.classVtable = (intptr_t) vtable_arc_Settings,
		.staticInitializer = (intptr_t) clinit_arc_Settings,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Settings,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 55,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Settings = registerClass(&class_arc_Settings);

}
