#include "mindustry/io/JsonIO_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/BaseJsonWriter.h"
#include "mindustry/ctype/MappableContent.h"
#include "java/io/IOException.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/io/JsonIO_1.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_mindustry_io_JsonIO$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_util_serialization_Json(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_io_JsonIO$1 *) object;
}

void clinit_mindustry_io_JsonIO$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_util_serialization_Json(ctx);
}

void init_mindustry_io_JsonIO$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$1:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO$1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_arc_util_serialization_Json(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_JsonIO$1_writeValue_java_lang_Object_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$1:writeValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(26);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ctype_MappableContent)) == 0) goto label_5;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_ctype_MappableContent, (frame[1].o)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_mindustry_io_JsonIO$1_getWriter_R_arc_util_serialization_BaseJsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_JsonIO$1_getWriter_R_arc_util_serialization_BaseJsonWriter])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[4].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(31);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(29);
	frame[5].o = sp[0].o;
	LINE_NUMBER(30);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(33);
	M_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	}
label_6:;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_io_JsonIO$1_convertToString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$1:convertToString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ctype_MappableContent)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ctype_MappableContent, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[2].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)M_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_JsonIO$1[] {
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
	(void *) M_arc_util_serialization_Json_getIgnoreUnknownFields_R_boolean,
	(void *) M_arc_util_serialization_Json_setIgnoreUnknownFields_boolean,
	(void *) M_arc_util_serialization_Json_setIgnoreDeprecated_boolean,
	(void *) M_arc_util_serialization_Json_setReadDeprecated_boolean,
	(void *) M_arc_util_serialization_Json_setOutputType_arc_util_serialization_JsonWriter$OutputType,
	(void *) M_arc_util_serialization_Json_setQuoteLongValues_boolean,
	(void *) M_arc_util_serialization_Json_setEnumNames_boolean,
	(void *) M_arc_util_serialization_Json_addClassTag_java_lang_String_java_lang_Class,
	(void *) M_arc_util_serialization_Json_getClass_java_lang_String_R_java_lang_Class,
	(void *) M_arc_util_serialization_Json_getTag_java_lang_Class_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_setTypeName_java_lang_String,
	(void *) M_arc_util_serialization_Json_setDefaultSerializer_arc_util_serialization_Json$Serializer,
	(void *) M_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer,
	(void *) M_arc_util_serialization_Json_getSerializer_java_lang_Class_R_arc_util_serialization_Json$Serializer,
	(void *) M_arc_util_serialization_Json_setUsePrototypes_boolean,
	(void *) M_arc_util_serialization_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class,
	(void *) M_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap,
	(void *) M_arc_util_serialization_Json_toJson_java_lang_Object_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_toUBJson_java_lang_Object_java_lang_Class_java_io_OutputStream,
	(void *) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_toJson_java_lang_Object_arc_files_Fi,
	(void *) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_arc_files_Fi,
	(void *) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_arc_files_Fi,
	(void *) M_arc_util_serialization_Json_toJson_java_lang_Object_java_io_Writer,
	(void *) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_io_Writer,
	(void *) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer,
	(void *) M_arc_util_serialization_Json_getWriter_R_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter,
	(void *) M_arc_util_serialization_Json_writeFields_java_lang_Object,
	(void *) M_arc_util_serialization_Json_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object,
	(void *) M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String,
	(void *) M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_Class,
	(void *) M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String,
	(void *) M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class,
	(void *) M_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object,
	(void *) M_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class,
	(void *) M_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class,
	(void *) M_arc_util_serialization_Json_writeValue_java_lang_Object,
	(void *) M_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class,
	(void *) M_mindustry_io_JsonIO$1_writeValue_java_lang_Object_java_lang_Class_java_lang_Class,
	(void *) M_arc_util_serialization_Json_writeObjectStart_java_lang_String,
	(void *) M_arc_util_serialization_Json_writeObjectStart_java_lang_String_java_lang_Class_java_lang_Class,
	(void *) M_arc_util_serialization_Json_writeObjectStart,
	(void *) M_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class,
	(void *) M_arc_util_serialization_Json_writeObjectEnd,
	(void *) M_arc_util_serialization_Json_writeArrayStart_java_lang_String,
	(void *) M_arc_util_serialization_Json_writeArrayStart,
	(void *) M_arc_util_serialization_Json_writeArrayEnd,
	(void *) M_arc_util_serialization_Json_writeType_java_lang_Class,
	(void *) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_io_Reader_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_io_Reader_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_io_InputStream_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_io_InputStream_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_fromJson_java_lang_Class_arc_files_Fi_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_arc_files_Fi_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_fromJson_java_lang_Class_Array1_char_int_int_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_Array1_char_int_int_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_reflect_Field_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_Json_ignoreUnknownField_java_lang_Class_java_lang_String_R_boolean,
	(void *) M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object,
	(void *) M_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object_boolean,
	(void *) M_arc_util_serialization_Json_resolveClass_java_lang_String_R_java_lang_Class,
	(void *) M_arc_util_serialization_Json_convertToString_java_lang_Enum_R_java_lang_String,
	(void *) M_mindustry_io_JsonIO$1_convertToString_java_lang_Object_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_Object_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_Object_int_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_String_int_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_Object_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_String_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String,
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
	{ "getIgnoreUnknownFields", "()Z" },
	{ "setIgnoreUnknownFields", "(Z)V" },
	{ "setIgnoreDeprecated", "(Z)V" },
	{ "setReadDeprecated", "(Z)V" },
	{ "setOutputType", "(Larc/util/serialization/JsonWriter$OutputType;)V" },
	{ "setQuoteLongValues", "(Z)V" },
	{ "setEnumNames", "(Z)V" },
	{ "addClassTag", "(Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "getClass", "(Ljava/lang/String;)Ljava/lang/Class;" },
	{ "getTag", "(Ljava/lang/Class;)Ljava/lang/String;" },
	{ "setTypeName", "(Ljava/lang/String;)V" },
	{ "setDefaultSerializer", "(Larc/util/serialization/Json$Serializer;)V" },
	{ "setSerializer", "(Ljava/lang/Class;Larc/util/serialization/Json$Serializer;)V" },
	{ "getSerializer", "(Ljava/lang/Class;)Larc/util/serialization/Json$Serializer;" },
	{ "setUsePrototypes", "(Z)V" },
	{ "setElementType", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "getFields", "(Ljava/lang/Class;)Larc/struct/OrderedMap;" },
	{ "toJson", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/String;" },
	{ "toUBJson", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/io/OutputStream;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/String;" },
	{ "toJson", "(Ljava/lang/Object;Larc/files/Fi;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;Larc/files/Fi;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;Larc/files/Fi;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/io/Writer;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/io/Writer;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;Ljava/io/Writer;)V" },
	{ "getWriter", "()Larc/util/serialization/BaseJsonWriter;" },
	{ "setWriter", "(Larc/util/serialization/BaseJsonWriter;)V" },
	{ "writeFields", "(Ljava/lang/Object;)V" },
	{ "getDefaultValues", "(Ljava/lang/Class;)[Ljava/lang/Object;" },
	{ "writeField", "(Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "writeField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "writeField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "writeField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "writeValue", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "writeValue", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "writeValue", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)V" },
	{ "writeValue", "(Ljava/lang/Object;)V" },
	{ "writeValue", "(Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "writeValue", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)V" },
	{ "writeObjectStart", "(Ljava/lang/String;)V" },
	{ "writeObjectStart", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;)V" },
	{ "writeObjectStart", "()V" },
	{ "writeObjectStart", "(Ljava/lang/Class;Ljava/lang/Class;)V" },
	{ "writeObjectEnd", "()V" },
	{ "writeArrayStart", "(Ljava/lang/String;)V" },
	{ "writeArrayStart", "()V" },
	{ "writeArrayEnd", "()V" },
	{ "writeType", "(Ljava/lang/Class;)V" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/io/Reader;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/io/Reader;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/io/InputStream;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/io/InputStream;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Larc/files/Fi;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/Class;Larc/files/Fi;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;[CII)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/Class;[CII)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "readField", "(Ljava/lang/Object;Ljava/lang/String;Larc/util/serialization/JsonValue;)V" },
	{ "readField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Class;Larc/util/serialization/JsonValue;)V" },
	{ "readField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)V" },
	{ "readField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;Larc/util/serialization/JsonValue;)V" },
	{ "readField", "(Ljava/lang/Object;Ljava/lang/reflect/Field;Ljava/lang/String;Ljava/lang/Class;Larc/util/serialization/JsonValue;)V" },
	{ "readFields", "(Ljava/lang/Object;Larc/util/serialization/JsonValue;)V" },
	{ "ignoreUnknownField", "(Ljava/lang/Class;Ljava/lang/String;)Z" },
	{ "readValue", "(Ljava/lang/String;Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Object;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Object;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/Class;Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/Class;Ljava/lang/Class;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "copyFields", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "copyFields", "(Ljava/lang/Object;Ljava/lang/Object;Z)V" },
	{ "resolveClass", "(Ljava/lang/String;)Ljava/lang/Class;" },
	{ "convertToString", "(Ljava/lang/Enum;)Ljava/lang/String;" },
	{ "convertToString", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "newInstance", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "prettyPrint", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "prettyPrint", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "prettyPrint", "(Ljava/lang/Object;I)Ljava/lang/String;" },
	{ "prettyPrint", "(Ljava/lang/String;I)Ljava/lang/String;" },
	{ "prettyPrint", "(Ljava/lang/Object;Larc/util/serialization/JsonValue$PrettyPrintSettings;)Ljava/lang/String;" },
	{ "prettyPrint", "(Ljava/lang/String;Larc/util/serialization/JsonValue$PrettyPrintSettings;)Ljava/lang/String;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_JsonIO$1, 0, "()V", 0 },
	{ "writeValue", (intptr_t) M_mindustry_io_JsonIO$1_writeValue_java_lang_Object_java_lang_Class_java_lang_Class, VTABLE_mindustry_io_JsonIO$1_writeValue_java_lang_Object_java_lang_Class_java_lang_Class, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "convertToString", (intptr_t) M_mindustry_io_JsonIO$1_convertToString_java_lang_Object_R_java_lang_String, VTABLE_mindustry_io_JsonIO$1_convertToString_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 4 },
};

Class class_mindustry_io_JsonIO$1{
		.nativeName = (intptr_t) "mindustry/io/JsonIO$1",
		.parentClass = (intptr_t) &class_arc_util_serialization_Json,
		.size = sizeof(mindustry_io_JsonIO$1),
		.classVtable = (intptr_t) vtable_mindustry_io_JsonIO$1,
		.staticInitializer = (intptr_t) clinit_mindustry_io_JsonIO$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_JsonIO$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 98,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_io_JsonIO$1 = registerClass(&class_mindustry_io_JsonIO$1);

}

