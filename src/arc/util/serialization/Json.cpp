#include "arc/util/serialization/Json.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "arc/util/serialization/AllowSerialization.h"
#include "java/lang/IllegalAccessException.h"
#include "arc/struct/ObjectFloatMap.h"
#include "java/io/Writer.h"
#include "java/util/ArrayList.h"
#include "arc/struct/ArrayMap.h"
#include "arc/util/serialization/Json_FieldMetadata.h"
#include "java/lang/reflect/Type.h"
#include "java/lang/reflect/Constructor.h"
#include "java/util/Collection.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/SerializationException.h"
#include "java/util/Arrays.h"
#include "arc/struct/IntSet_IntSetIterator.h"
#include "arc/struct/ObjectFloatMap_Entries.h"
#include "arc/struct/Seq.h"
#include "java/io/StringWriter.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/reflect/Modifier.h"
#include "java/util/Iterator.h"
#include "arc/util/serialization/Json_Serializer.h"
#include "java/lang/reflect/GenericArrayType.h"
#include "arc/struct/Queue.h"
#include "java/util/Map.h"
#include "arc/struct/ObjectMap_Values.h"
#include "java/lang/Object.h"
#include "arc/struct/ObjectIntMap_Entry.h"
#include "java/lang/NumberFormatException.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/struct/ObjectFloatMap_Entry.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Double.h"
#include "arc/util/serialization/JsonWriter_OutputType.h"
#include "java/lang/SecurityException.h"
#include "java/lang/reflect/ParameterizedType.h"
#include "arc/struct/OrderedMap.h"
#include "java/lang/Boolean.h"
#include "java/util/HashMap.h"
#include "java/lang/reflect/Array.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "java/lang/Float.h"
#include "arc/struct/IntMap.h"
#include "arc/files/Fi.h"
#include "arc/struct/IntSeq.h"
#include "arc/util/serialization/JsonWriter.h"
#include "java/io/InputStream.h"
#include "java/lang/Short.h"
#include "arc/struct/IntSet.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/struct/ObjectIntMap_Entries.h"
#include "arc/struct/IntMap_Entries.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "arc/util/serialization/JsonReader.h"
#include "arc/util/serialization/Json_JsonSerializable.h"
#include "java/lang/Byte.h"
#include "arc/util/serialization/BaseJsonWriter.h"
#include "java/util/Map_Entry.h"
#include "arc/util/serialization/JsonValue_PrettyPrintSettings.h"
#include "arc/util/serialization/UBJsonWriter.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "arc/struct/IntMap_Entry.h"
#include "java/lang/Enum.h"
#include "java/lang/Long.h"
#include "java/io/OutputStream.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Reflect.h"
#include "arc/struct/OrderedMap_OrderedMapValues.h"
#include "arc/util/io/Streams.h"
#include "java/lang/Class.h"
#include "arc/struct/ObjectIntMap.h"
#include "java/lang/Deprecated.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jbool SF_arc_util_serialization_Json_debug;

void mark_arc_util_serialization_Json(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_Json *) object;
	if (self->F_typeToFields)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_typeToFields)->clazz)->markFunction)((jobject) self->F_typeToFields, mark, depth + 1);
	if (self->F_tagToClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tagToClass)->clazz)->markFunction)((jobject) self->F_tagToClass, mark, depth + 1);
	if (self->F_classToTag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classToTag)->clazz)->markFunction)((jobject) self->F_classToTag, mark, depth + 1);
	if (self->F_classToSerializer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classToSerializer)->clazz)->markFunction)((jobject) self->F_classToSerializer, mark, depth + 1);
	if (self->F_classToDefaultValues)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classToDefaultValues)->clazz)->markFunction)((jobject) self->F_classToDefaultValues, mark, depth + 1);
	if (self->F_equals1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_equals1)->clazz)->markFunction)((jobject) self->F_equals1, mark, depth + 1);
	if (self->F_equals2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_equals2)->clazz)->markFunction)((jobject) self->F_equals2, mark, depth + 1);
	if (self->F_writer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writer)->clazz)->markFunction)((jobject) self->F_writer, mark, depth + 1);
	if (self->F_typeName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_typeName)->clazz)->markFunction)((jobject) self->F_typeName, mark, depth + 1);
	if (self->F_outputType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outputType)->clazz)->markFunction)((jobject) self->F_outputType, mark, depth + 1);
	if (self->F_defaultSerializer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultSerializer)->clazz)->markFunction)((jobject) self->F_defaultSerializer, mark, depth + 1);
}

void clinit_arc_util_serialization_Json(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_serialization_Json_debug = jint(0);
}

void init_arc_util_serialization_Json(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Json(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_typeToFields = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_tagToClass = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_classToTag = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_classToSerializer = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_classToDefaultValues = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_equals1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_equals2 = (jref) sp[1].o;
	LINE_NUMBER(33);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName = (jref) (((jobject) createStringLiteral(ctx, u8"class"_j)));
	LINE_NUMBER(34);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_usePrototypes = (jint(1));
	LINE_NUMBER(37);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_ignoreUnknownFields = (jint(1));
	LINE_NUMBER(40);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_enumNames = (jint(1));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimal;
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_outputType = (jref) sp[1].o;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_Json_arc_util_serialization_JsonWriter$OutputType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Json(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_typeToFields = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_tagToClass = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_classToTag = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_classToSerializer = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_classToDefaultValues = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_equals1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_equals2 = (jref) sp[1].o;
	LINE_NUMBER(33);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName = (jref) (((jobject) createStringLiteral(ctx, u8"class"_j)));
	LINE_NUMBER(34);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_usePrototypes = (jint(1));
	LINE_NUMBER(37);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_ignoreUnknownFields = (jint(1));
	LINE_NUMBER(40);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_enumNames = (jint(1));
	LINE_NUMBER(48);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_outputType = (jref) (frame[1].o);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Json_getIgnoreUnknownFields_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:getIgnoreUnknownFields", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return ((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_ignoreUnknownFields);
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setIgnoreUnknownFields_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setIgnoreUnknownFields", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(59);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_ignoreUnknownFields = (frame[1].i);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setIgnoreDeprecated_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setIgnoreDeprecated", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(64);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_ignoreDeprecated = (frame[1].i);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setReadDeprecated_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setReadDeprecated", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(72);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_readDeprecated = (frame[1].i);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setOutputType_arc_util_serialization_JsonWriter$OutputType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setOutputType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_outputType = (jref) (frame[1].o);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setQuoteLongValues_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setQuoteLongValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(82);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_quoteLongValues = (frame[1].i);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setEnumNames_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setEnumNames", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(90);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_enumNames = (frame[1].i);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_addClassTag_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:addClassTag", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_tagToClass;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToTag;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_getClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:getClass", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_tagToClass;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_getTag_java_lang_Class_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:getTag", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToTag;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setTypeName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setTypeName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName = (jref) (frame[1].o);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setDefaultSerializer_arc_util_serialization_Json$Serializer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setDefaultSerializer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_defaultSerializer = (jref) (frame[1].o);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setSerializer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToSerializer;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_getSerializer_java_lang_Class_R_arc_util_serialization_Json$Serializer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:getSerializer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToSerializer;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_serialization_Json$Serializer, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setUsePrototypes_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setUsePrototypes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(140);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_usePrototypes = (frame[1].i);
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setElementType", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[2].o));
	frame[5].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(150);
	if ((frame[5].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(151);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(152);
	((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[5].o)))->F_elementType = (jref) (frame[3].o);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:getFields", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeToFields;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_OrderedMap, sp[0].o));
	LINE_NUMBER(158);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(160);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(161);
	frame[4].o = (frame[1].o);
	}
label_8:;
	{
	LINE_NUMBER(162);
	if ((frame[4].o) == (((jobject) &class_java_lang_Object))) goto label_9;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(166);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(167);
	frame[6].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) - (jint(1)));
	}
label_13:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_14;
	{
	LINE_NUMBER(168);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[6].i));
	sp[1].o = (jobject)((func_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Class, sp[1].o)))->vtable)[VTABLE_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field])(ctx, (checkCast(ctx, &class_java_lang_Class, sp[1].o)));
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(167);
	INST_IINC(6, -1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(170);
	clinit_arc_struct_OrderedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_size));
	frame[6].o = sp[0].o;
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_lang_reflect_Field, sp[0].o));
	LINE_NUMBER(173);
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, (frame[8].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isTransient_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_21;
	}
	goto label_18;
label_21:;
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, (frame[8].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_22;
	}
	goto label_18;
label_22:;
	{
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_java_lang_reflect_Field_isSynthetic_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_isSynthetic_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isEnum_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isEnum_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_18;
	}
	{
	jint temp0 = (jint)SM_arc_util_Reflect_isWrapper_java_lang_Class_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_23;
	}
	goto label_18;
label_23:;
	{
	LINE_NUMBER(178);
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAccessible_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_isAccessible_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_24;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(180);
	((func_java_lang_reflect_Field_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_setAccessible_boolean])(ctx, (frame[8].o), (jint(1)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(183);
	goto label_24;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(181);
	frame[9].o = sp[0].o;
	LINE_NUMBER(182);
	goto label_18;
	}
label_24:;
	{
	LINE_NUMBER(186);
	if (((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_ignoreDeprecated) == 0) goto label_26;
	}
	{
	if (((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_readDeprecated) != 0) goto label_26;
	}
	{
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[8].o), (((jobject) &class_java_lang_Deprecated)));
	if (temp0 == 0) goto label_26;
	}
	goto label_18;
label_26:;
	{
	LINE_NUMBER(187);
	clinit_arc_util_serialization_Json$FieldMetadata(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Json$FieldMetadata);
	init_arc_util_serialization_Json$FieldMetadata_java_lang_reflect_Field(ctx, sp[0].o, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(189);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[9].o));
	LINE_NUMBER(190);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeToFields;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[6].o));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_toJson_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:toJson", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_java_lang_Class, (jobject(nullptr)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:toJson", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_java_lang_Class, (jobject(nullptr)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_toUBJson_java_lang_Object_java_lang_Class_java_io_OutputStream(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:toUBJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_UBJsonWriter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_UBJsonWriter);
	init_arc_util_serialization_UBJsonWriter_java_io_OutputStream(ctx, sp[1].o, (frame[3].o));
	((arc_util_serialization_Json *) NULL_CHECK(sp[0].o))->F_writer = (jref) sp[1].o;
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_java_lang_Class, (jobject(nullptr)))));
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:toJson", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(214);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	init_java_io_StringWriter(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(215);
	((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_java_io_StringWriter_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_StringWriter_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_toJson_java_lang_Object_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:toJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 3;
	((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_arc_files_Fi])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:toJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(225);
	((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_arc_files_Fi])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (frame[3].o));
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:toJson", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(233);
	frame[5].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_arc_files_Fi_writer_boolean_java_lang_String_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_files_Fi_writer_boolean_java_lang_String_R_java_io_Writer])(ctx, (frame[4].o), (jint(0)), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(236);
	((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[5].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(240);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[5].o));
	LINE_NUMBER(241);
	goto label_11;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(237);
	frame[6].o = sp[0].o;
	LINE_NUMBER(238);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(240);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[5].o));
	LINE_NUMBER(241);
	throwException(ctx, (frame[7].o));	}
label_11:;
	LINE_NUMBER(242);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_toJson_java_lang_Object_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:toJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 3;
	((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:toJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(250);
	((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (frame[3].o));
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:toJson", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_JsonWriter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_JsonWriter);
	init_arc_util_serialization_JsonWriter_java_io_Writer(ctx, sp[1].o, (frame[4].o));
	((func_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter])(ctx, sp[0].o, sp[1].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(260);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, sp[0].o);
	LINE_NUMBER(263);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer = (jref) (jobject(nullptr));
	LINE_NUMBER(264);
	goto label_9;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(262);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, sp[0].o);
	LINE_NUMBER(263);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer = (jref) (jobject(nullptr));
	LINE_NUMBER(264);
	throwException(ctx, (frame[5].o));	}
label_9:;
	LINE_NUMBER(265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_getWriter_R_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:getWriter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:setWriter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(274);
	((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer = (jref) (frame[1].o);
	LINE_NUMBER(275);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_outputType;
	((func_arc_util_serialization_BaseJsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_arc_util_serialization_BaseJsonWriter_setQuoteLongValues_boolean) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_setQuoteLongValues_boolean, sp[0].o))(ctx, sp[0].o, ((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_quoteLongValues));
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeFields_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeFields", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(283);
	sp[0].o = (jobject)M_arc_util_serialization_Json_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, (frame[0].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(286);
	frame[5].i = (jint(0));
	LINE_NUMBER(287);
	clinit_arc_struct_OrderedMap$OrderedMapValues(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_OrderedMap$OrderedMapValues);
	init_arc_struct_OrderedMap$OrderedMapValues_arc_struct_OrderedMap(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_OrderedMap$OrderedMapValues_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap$OrderedMapValues_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_28:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_field;
	frame[8].o = sp[0].o;
	LINE_NUMBER(289);
	if (((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_readDeprecated) == 0) goto label_0;
	}
	{
	if (((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_ignoreDeprecated) == 0) goto label_0;
	}
	{
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[8].o), (((jobject) &class_java_lang_Deprecated)));
	if (temp0 == 0) goto label_0;
	}
	goto label_28;
label_0:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_serialization_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[8].o), (frame[1].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(292);
	if ((frame[3].o) == nullptr) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(293);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(294);
	if ((frame[9].o) != nullptr) { popExceptionFrames(frameRef, 3); goto label_4; }
	}
	INST_ALOAD(10);
	if ((--sp)->o != nullptr) { popExceptionFrames(frameRef, 3); goto label_4; }
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	goto label_28;
label_4:;
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_serialization_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(295);
	if ((frame[9].o) == nullptr) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) { popExceptionFrames(frameRef, 3); goto label_10; }
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[9].o), (frame[10].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 3); goto label_7; }
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	goto label_28;
label_7:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_serialization_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[10].o));
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_equals1;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[9].o);
	LINE_NUMBER(299);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_equals2;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[10].o);
	LINE_NUMBER(300);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_equals1;
	sp[1].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_equals2;
	jint temp0 = (jint)SM_java_util_Arrays_deepEquals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	goto label_28;
label_10:;
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_serialization_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	sp[1].o = frame[9].o;
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[8].o));
	sp[3].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_elementType;
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(317);
	goto label_40;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(308);
	frame[9].o = sp[0].o;
	LINE_NUMBER(309);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error accessing field: "_j))));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[9].o));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	sp -= 1;
	LINE_NUMBER(310);
	frame[9].o = sp[0].o;
	LINE_NUMBER(311);
	sp[0].o = frame[9].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(312);
	throwException(ctx, (frame[9].o));	}
label_18:;
	{
	sp -= 1;
	LINE_NUMBER(313);
	frame[9].o = sp[0].o;
	LINE_NUMBER(314);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = frame[10].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(316);
	throwException(ctx, (frame[10].o));	}
label_40:;
	LINE_NUMBER(318);
	goto label_28;
label_29:;
	LINE_NUMBER(319);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:getDefaultValues", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(322);
	if (((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_usePrototypes) != 0) goto label_13;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(323);
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToDefaultValues;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToDefaultValues;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(331);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(328);
	frame[3].o = sp[0].o;
	LINE_NUMBER(329);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToDefaultValues;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(334);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[3].o)))->F_size));
	frame[4].o = sp[0].o;
	LINE_NUMBER(335);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToDefaultValues;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[4].o));
	LINE_NUMBER(337);
	frame[5].i = (jint(0));
	LINE_NUMBER(338);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_22:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(339);
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_field;
	frame[8].o = sp[0].o;
	LINE_NUMBER(340);
	if (((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_readDeprecated) == 0) goto label_4;
	}
	{
	if (((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_ignoreDeprecated) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[8].o), (((jobject) &class_java_lang_Deprecated)));
	if (temp0 == 0) goto label_4;
	}
	goto label_22;
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_serialization_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_8; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(342);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[8].o), (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(352);
	goto label_26;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(343);
	frame[9].o = sp[0].o;
	LINE_NUMBER(344);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error accessing field: "_j))));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[9].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(345);
	frame[9].o = sp[0].o;
	LINE_NUMBER(346);
	sp[0].o = frame[9].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(347);
	throwException(ctx, (frame[9].o));	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(348);
	frame[9].o = sp[0].o;
	LINE_NUMBER(349);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(350);
	sp[0].o = frame[10].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(351);
	throwException(ctx, (frame[10].o));	}
label_26:;
	LINE_NUMBER(353);
	goto label_22;
label_23:;
	{
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeField", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(359);
	((func_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeField", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(367);
	((func_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeField", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(372);
	((func_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeField", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, (frame[0].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[6].o), (frame[2].o));
	frame[7].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(383);
	if ((frame[7].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(384);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_field;
	frame[8].o = sp[0].o;
	LINE_NUMBER(386);
	if ((frame[4].o) != nullptr) goto label_0;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_elementType;
	frame[4].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_serialization_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(390);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[8].o), (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[8].o));
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(400);
	goto label_16;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(391);
	frame[9].o = sp[0].o;
	LINE_NUMBER(392);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error accessing field: "_j))));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[9].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(393);
	frame[9].o = sp[0].o;
	LINE_NUMBER(394);
	sp[0].o = frame[9].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(395);
	throwException(ctx, (frame[9].o));	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(396);
	frame[9].o = sp[0].o;
	LINE_NUMBER(397);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(398);
	sp[0].o = frame[10].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(399);
	throwException(ctx, (frame[10].o));	}
label_16:;
	LINE_NUMBER(401);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(413);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(411);
	frame[3].o = sp[0].o;
	LINE_NUMBER(412);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(414);
	if ((frame[2].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(415);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (jobject(nullptr)));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(417);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)));
	}
label_8:;
	LINE_NUMBER(418);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(432);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(430);
	frame[4].o = sp[0].o;
	LINE_NUMBER(431);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(433);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(448);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(446);
	frame[5].o = sp[0].o;
	LINE_NUMBER(447);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(449);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeValue_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(457);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(458);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)));
	}
label_3:;
	LINE_NUMBER(461);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(469);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeValue", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(480);
	if ((frame[2].o) == nullptr) goto label_0;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(485);
	if ((frame[1].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (jobject(nullptr)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(487);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(490);
	if ((frame[2].o) == nullptr) goto label_64;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_65;
	}
label_64:;
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_String))) goto label_65;
	}
	{
	jint temp0 = (jint)SM_arc_util_Reflect_isWrapper_java_lang_Class_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_65:;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(492);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_66;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, sp[0].o);
	sp += 1;
	goto label_67;
	}
label_66:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_67:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(497);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_69;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_lang_String))) goto label_69;
	}
	{
	jint temp0 = (jint)SM_arc_util_Reflect_isWrapper_java_lang_Class_R_boolean(ctx, (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_69:;
	{
	LINE_NUMBER(498);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (jobject(nullptr)));
	LINE_NUMBER(499);
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[1].o));
	LINE_NUMBER(500);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(501);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(504);
	if ((isInstance(ctx, (frame[1].o), &class_arc_util_serialization_Json$JsonSerializable)) == 0) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	LINE_NUMBER(505);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(506);
	((func_arc_util_serialization_Json$JsonSerializable_write_arc_util_serialization_Json) resolveInterfaceMethod(ctx, &class_arc_util_serialization_Json$JsonSerializable, INDEX_arc_util_serialization_Json$JsonSerializable_write_arc_util_serialization_Json, (checkCast(ctx, &class_arc_util_serialization_Json$JsonSerializable, (frame[1].o)))))(ctx, (checkCast(ctx, &class_arc_util_serialization_Json$JsonSerializable, (frame[1].o))), (frame[0].o));
	LINE_NUMBER(507);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(508);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToSerializer;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_util_serialization_Json$Serializer, sp[0].o));
	LINE_NUMBER(512);
	if ((frame[5].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(513);
	((func_arc_util_serialization_Json$Serializer_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class) resolveInterfaceMethod(ctx, &class_arc_util_serialization_Json$Serializer, INDEX_arc_util_serialization_Json$Serializer_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), (frame[1].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(514);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(518);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) == 0) { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	LINE_NUMBER(519);
	if ((frame[2].o) == nullptr) goto label_78;
	}
	{
	if ((frame[4].o) == (frame[2].o)) goto label_78;
	}
	{
	if ((frame[4].o) == (((jobject) &class_arc_struct_Seq))) goto label_78;
	}
	{
	LINE_NUMBER(520);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Serialization of an Array other than the known type is not supported.\nKnown type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\nActual type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_78:;
	{
	LINE_NUMBER(522);
	((func_arc_util_serialization_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(523);
	frame[6].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[1].o)));
	LINE_NUMBER(524);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_83:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_84;
	}
	{
	LINE_NUMBER(525);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(524);
	INST_IINC(7, 1);
	goto label_83;
	}
label_84:;
	{
	LINE_NUMBER(526);
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(527);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(529);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectSet)) == 0) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	LINE_NUMBER(530);
	if ((frame[2].o) != nullptr) goto label_88;
	}
	(sp++)->o = ((jobject) &class_arc_struct_ObjectSet);
	INST_ASTORE(2);
label_88:;
	{
	LINE_NUMBER(531);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(532);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"values"_j))));
	LINE_NUMBER(533);
	((func_arc_util_serialization_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectSet, (frame[1].o))))->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, (checkCast(ctx, &class_arc_struct_ObjectSet, (frame[1].o))));
	frame[6].o = sp[0].o;
	}
label_92:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_93;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(535);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[7].o), (frame[3].o), (jobject(nullptr)));
	goto label_92;
	}
label_93:;
	{
	LINE_NUMBER(536);
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, (frame[0].o));
	LINE_NUMBER(537);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(538);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(540);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_IntSet)) == 0) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(541);
	if ((frame[2].o) != nullptr) goto label_98;
	}
	(sp++)->o = ((jobject) &class_arc_struct_IntSet);
	INST_ASTORE(2);
label_98:;
	{
	LINE_NUMBER(542);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(543);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"values"_j))));
	LINE_NUMBER(544);
	((func_arc_util_serialization_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(545);
	sp[0].o = (jobject)((func_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_IntSet, (frame[1].o))))->vtable)[VTABLE_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator])(ctx, (checkCast(ctx, &class_arc_struct_IntSet, (frame[1].o))));
	frame[6].o = sp[0].o;
	}
label_102:;
	{
	if (((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[6].o)))->F_hasNext) == 0) goto label_103;
	}
	{
	LINE_NUMBER(546);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_struct_IntSet$IntSetIterator_next_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_IntSet$IntSetIterator_next_R_int])(ctx, (frame[6].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_java_lang_Integer)), (jobject(nullptr)));
	goto label_102;
	}
label_103:;
	{
	LINE_NUMBER(547);
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, (frame[0].o));
	LINE_NUMBER(548);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(549);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(551);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_IntSeq)) == 0) { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(552);
	((func_arc_util_serialization_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(553);
	frame[6].o = (checkCast(ctx, &class_arc_struct_IntSeq, (frame[1].o)));
	LINE_NUMBER(554);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_110:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_111;
	}
	{
	LINE_NUMBER(555);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[6].o), (frame[7].i));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_java_lang_Integer)), (jobject(nullptr)));
	LINE_NUMBER(554);
	INST_IINC(7, 1);
	goto label_110;
	}
label_111:;
	{
	LINE_NUMBER(556);
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(557);
	popStackFrame(ctx);
	INST_RETURN();
label_28:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(559);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Queue)) == 0) { popExceptionFrames(frameRef, 1); goto label_31; }
	}
	{
	LINE_NUMBER(560);
	if ((frame[2].o) == nullptr) goto label_115;
	}
	{
	if ((frame[4].o) == (frame[2].o)) goto label_115;
	}
	{
	if ((frame[4].o) == (((jobject) &class_arc_struct_Queue))) goto label_115;
	}
	{
	LINE_NUMBER(561);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Serialization of a Queue other than the known type is not supported.\nKnown type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\nActual type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_115:;
	{
	LINE_NUMBER(563);
	((func_arc_util_serialization_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(564);
	frame[6].o = (checkCast(ctx, &class_arc_struct_Queue, (frame[1].o)));
	LINE_NUMBER(565);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_120:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_121;
	}
	{
	LINE_NUMBER(566);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(565);
	INST_IINC(7, 1);
	goto label_120;
	}
label_121:;
	{
	LINE_NUMBER(567);
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(568);
	popStackFrame(ctx);
	INST_RETURN();
label_31:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(570);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Collection)) == 0) { popExceptionFrames(frameRef, 1); goto label_34; }
	}
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	if (sp[0].o == nullptr) goto label_125;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_util_ArrayList))) goto label_125;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_126;
	{
	if ((frame[2].o) == (frame[4].o)) goto label_125;
	}
label_126:;
	{
	LINE_NUMBER(572);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(573);
	((func_arc_util_serialization_Json_writeArrayStart_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"items"_j))));
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (checkCast(ctx, &class_java_util_Collection, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_util_Collection, (frame[1].o))));
	frame[6].o = sp[0].o;
	}
label_129:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_130;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(575);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[7].o), (frame[3].o), (jobject(nullptr)));
	goto label_129;
	}
label_130:;
	{
	LINE_NUMBER(576);
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, (frame[0].o));
	LINE_NUMBER(577);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	goto label_32;
	}
label_125:;
	{
	LINE_NUMBER(579);
	((func_arc_util_serialization_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(580);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (checkCast(ctx, &class_java_util_Collection, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_util_Collection, (frame[1].o))));
	frame[6].o = sp[0].o;
	}
label_135:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_136;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(581);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[7].o), (frame[3].o), (jobject(nullptr)));
	goto label_135;
	}
label_136:;
	{
	LINE_NUMBER(582);
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, (frame[0].o));
	}
label_32:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(584);
	popStackFrame(ctx);
	INST_RETURN();
label_34:;
label_36: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(586);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_37; }
	}
	{
	LINE_NUMBER(587);
	if ((frame[3].o) != nullptr) goto label_140;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[4].o));
	frame[3].o = sp[0].o;
	}
label_140:;
	{
	LINE_NUMBER(588);
	jint temp0 = (jint)SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(589);
	((func_arc_util_serialization_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(590);
	frame[7].i = (jint(0));
	}
label_143:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_144;
	}
	{
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_reflect_Array_get_java_lang_Object_int_R_java_lang_Object(ctx, (frame[1].o), (frame[7].i));
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(590);
	INST_IINC(7, 1);
	goto label_143;
	}
label_144:;
	{
	LINE_NUMBER(592);
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(593);
	popStackFrame(ctx);
	INST_RETURN();
label_37:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(597);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(598);
	if ((frame[2].o) != nullptr) goto label_148;
	}
	(sp++)->o = ((jobject) &class_arc_struct_ObjectMap);
	INST_ASTORE(2);
label_148:;
	{
	LINE_NUMBER(599);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(600);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, (frame[1].o))))->vtable)[VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, (frame[1].o))));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_150:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_151;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(601);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(602);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(603);
	goto label_150;
	}
label_151:;
	{
	LINE_NUMBER(604);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(605);
	popStackFrame(ctx);
	INST_RETURN();
label_40:;
label_42: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(607);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectIntMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_43; }
	}
	{
	LINE_NUMBER(608);
	if ((frame[2].o) != nullptr) goto label_156;
	}
	(sp++)->o = ((jobject) &class_arc_struct_ObjectIntMap);
	INST_ASTORE(2);
label_156:;
	{
	LINE_NUMBER(609);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(610);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectIntMap, (frame[1].o))))->vtable)[VTABLE_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries])(ctx, (checkCast(ctx, &class_arc_struct_ObjectIntMap, (frame[1].o))));
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap$Entries_iterator_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_iterator_R_arc_struct_ObjectIntMap$Entries])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_158:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_159;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_struct_ObjectIntMap$Entry, sp[0].o));
	LINE_NUMBER(611);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(612);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[7].o)))->F_value));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(613);
	goto label_158;
	}
label_159:;
	{
	LINE_NUMBER(614);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(615);
	popStackFrame(ctx);
	INST_RETURN();
label_43:;
label_45: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(617);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectFloatMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_46; }
	}
	{
	LINE_NUMBER(618);
	if ((frame[2].o) != nullptr) goto label_164;
	}
	(sp++)->o = ((jobject) &class_arc_struct_ObjectFloatMap);
	INST_ASTORE(2);
label_164:;
	{
	LINE_NUMBER(619);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(620);
	sp[0].o = (jobject)((func_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectFloatMap, (frame[1].o))))->vtable)[VTABLE_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries])(ctx, (checkCast(ctx, &class_arc_struct_ObjectFloatMap, (frame[1].o))));
	sp[0].o = (jobject)((func_arc_struct_ObjectFloatMap$Entries_iterator_R_arc_struct_ObjectFloatMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap$Entries_iterator_R_arc_struct_ObjectFloatMap$Entries])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_166:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_167;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_struct_ObjectFloatMap$Entry, sp[0].o));
	LINE_NUMBER(621);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_struct_ObjectFloatMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(622);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((arc_struct_ObjectFloatMap$Entry *) NULL_CHECK((frame[7].o)))->F_value));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(623);
	goto label_166;
	}
label_167:;
	{
	LINE_NUMBER(624);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(625);
	popStackFrame(ctx);
	INST_RETURN();
label_46:;
label_48: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(627);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_IntMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_49; }
	}
	{
	LINE_NUMBER(628);
	if ((frame[2].o) != nullptr) goto label_172;
	}
	(sp++)->o = ((jobject) &class_arc_struct_IntMap);
	INST_ASTORE(2);
label_172:;
	{
	LINE_NUMBER(629);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(630);
	sp[0].o = (jobject)((func_arc_struct_IntMap_entries_R_arc_struct_IntMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_IntMap, (frame[1].o))))->vtable)[VTABLE_arc_struct_IntMap_entries_R_arc_struct_IntMap$Entries])(ctx, (checkCast(ctx, &class_arc_struct_IntMap, (frame[1].o))));
	sp[0].o = (jobject)((func_arc_struct_IntMap$Entries_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap$Entries_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_174:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_175;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_struct_IntMap$Entry, sp[0].o));
	LINE_NUMBER(631);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[7].o)))->F_key));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(632);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(633);
	goto label_174;
	}
label_175:;
	{
	LINE_NUMBER(634);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(635);
	popStackFrame(ctx);
	INST_RETURN();
label_49:;
label_51: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(637);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ArrayMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_52; }
	}
	{
	LINE_NUMBER(638);
	if ((frame[2].o) != nullptr) goto label_180;
	}
	(sp++)->o = ((jobject) &class_arc_struct_ArrayMap);
	INST_ASTORE(2);
label_180:;
	{
	LINE_NUMBER(639);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(640);
	frame[6].o = (checkCast(ctx, &class_arc_struct_ArrayMap, (frame[1].o)));
	LINE_NUMBER(641);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_184:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_185;
	}
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[6].o)))->F_keys;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[7].i))));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(643);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[6].o)))->F_values;
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[7].i))), (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(641);
	INST_IINC(7, 1);
	goto label_184;
	}
label_185:;
	{
	LINE_NUMBER(645);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(646);
	popStackFrame(ctx);
	INST_RETURN();
label_52:;
label_54: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(648);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map)) == 0) { popExceptionFrames(frameRef, 1); goto label_55; }
	}
	{
	LINE_NUMBER(649);
	if ((frame[2].o) != nullptr) goto label_190;
	}
	(sp++)->o = ((jobject) &class_java_util_HashMap);
	INST_ASTORE(2);
label_190:;
	{
	LINE_NUMBER(650);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(651);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (checkCast(ctx, &class_java_util_Map, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_util_Map, (frame[1].o))));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_192:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_193;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(652);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(653);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(654);
	goto label_192;
	}
label_193:;
	{
	LINE_NUMBER(655);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(656);
	popStackFrame(ctx);
	INST_RETURN();
label_55:;
label_57: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(660);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_lang_Enum)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_java_lang_Enum)), (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_58; }
	}
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	if (sp[0].o == nullptr) goto label_198;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_199;
	{
	if ((frame[2].o) == (frame[4].o)) goto label_198;
	}
label_199:;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object])(ctx, (frame[4].o));
	if (sp[0].o != nullptr) goto label_200;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	}
label_200:;
	{
	LINE_NUMBER(665);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (jobject(nullptr)));
	LINE_NUMBER(666);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"value"_j))));
	LINE_NUMBER(667);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)M_arc_util_serialization_Json_convertToString_java_lang_Enum_R_java_lang_String(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(668);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	goto label_56;
	}
label_198:;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)M_arc_util_serialization_Json_convertToString_java_lang_Enum_R_java_lang_String(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_56:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(672);
	popStackFrame(ctx);
	INST_RETURN();
label_58:;
label_60: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(675);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(676);
	((func_arc_util_serialization_Json_writeFields_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeFields_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(677);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(680);
	goto label_206;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(678);
	frame[4].o = sp[0].o;
	LINE_NUMBER(679);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_206:;
	LINE_NUMBER(681);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeObjectStart_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeObjectStart", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(688);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(686);
	frame[2].o = sp[0].o;
	LINE_NUMBER(687);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(689);
	((func_arc_util_serialization_Json_writeObjectStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart])(ctx, (frame[0].o));
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeObjectStart_java_lang_String_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeObjectStart", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(698);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(696);
	frame[4].o = sp[0].o;
	LINE_NUMBER(697);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(699);
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeObjectStart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeObjectStart", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(707);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(705);
	frame[1].o = sp[0].o;
	LINE_NUMBER(706);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(708);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeObjectStart", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(719);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(717);
	frame[3].o = sp[0].o;
	LINE_NUMBER(718);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(720);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	if ((frame[2].o) == (frame[1].o)) goto label_7;
	}
label_6:;
	{
	((func_arc_util_serialization_Json_writeType_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_writeType_java_lang_Class])(ctx, (frame[0].o), (frame[1].o));
	}
label_7:;
	LINE_NUMBER(721);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeObjectEnd(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeObjectEnd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_pop_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_pop_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(728);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(726);
	frame[1].o = sp[0].o;
	LINE_NUMBER(727);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(729);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeArrayStart_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeArrayStart", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(733);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(734);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_array_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_array_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(737);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(735);
	frame[2].o = sp[0].o;
	LINE_NUMBER(736);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(738);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeArrayStart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeArrayStart", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_array_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_array_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(745);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(743);
	frame[1].o = sp[0].o;
	LINE_NUMBER(744);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(746);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeArrayEnd(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeArrayEnd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_pop_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_pop_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(753);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(751);
	frame[1].o = sp[0].o;
	LINE_NUMBER(752);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(754);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_writeType_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:writeType", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(757);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	if (sp[0].o != nullptr) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getTag_java_lang_Class_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_getTag_java_lang_Class_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(759);
	if ((frame[2].o) != nullptr) goto label_0;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonWriter, INDEX_arc_util_serialization_BaseJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(764);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(762);
	frame[3].o = sp[0].o;
	LINE_NUMBER(763);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(766);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_fromJson_java_lang_Class_java_io_Reader_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:fromJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(773);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_io_Reader_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:fromJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(782);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_fromJson_java_lang_Class_java_io_InputStream_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:fromJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(790);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_io_InputStream_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:fromJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(799);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_fromJson_java_lang_Class_arc_files_Fi_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:fromJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(808);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(809);
	frame[3].o = sp[0].o;
	LINE_NUMBER(810);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_arc_files_Fi_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:fromJson", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(821);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(822);
	frame[4].o = sp[0].o;
	LINE_NUMBER(823);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_fromJson_java_lang_Class_Array1_char_int_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:fromJson", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(832);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[2].o), (frame[3].i), (frame[4].i));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_Array1_char_int_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:fromJson", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(841);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[3].o), (frame[4].i), (frame[5].i));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:fromJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(849);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:fromJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(857);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readField", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(861);
	((func_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[2].o), (jobject(nullptr)), (frame[3].o));
	LINE_NUMBER(862);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readField", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(865);
	((func_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(866);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readField", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(869);
	((func_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jobject(nullptr)), (frame[4].o));
	LINE_NUMBER(870);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readField", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(874);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(875);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, (frame[0].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(876);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), (frame[2].o));
	frame[8].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(877);
	if ((frame[8].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(878);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(879);
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[8].o)))->F_field;
	frame[9].o = sp[0].o;
	LINE_NUMBER(880);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[8].o)))->F_elementType;
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(881);
	((func_arc_util_serialization_Json_readField_java_lang_Object_java_lang_reflect_Field_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readField_java_lang_Object_java_lang_reflect_Field_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[9].o), (frame[3].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(882);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_reflect_Field_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readField", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(889);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[5].o), (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(890);
	if ((frame[6].o) != nullptr) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_serialization_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
	{
	LINE_NUMBER(892);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, (frame[4].o), (frame[6].o));
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(904);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(893);
	frame[7].o = sp[0].o;
	LINE_NUMBER(894);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error accessing field: "_j))));
	sp[2].o = frame[2].o;
	LINE_NUMBER(895);
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[7].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(896);
	frame[7].o = sp[0].o;
	LINE_NUMBER(897);
	sp[0].o = frame[7].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(898);
	throwException(ctx, (frame[7].o));	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(899);
	frame[7].o = sp[0].o;
	LINE_NUMBER(900);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(901);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_trace_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_trace_R_java_lang_String])(ctx, (frame[6].o));
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(902);
	sp[0].o = frame[8].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(903);
	throwException(ctx, (frame[8].o));	}
label_10:;
	LINE_NUMBER(905);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readFields", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(908);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(909);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(910);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_child;
	frame[5].o = sp[0].o;
	}
label_11:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_12;
	{
	LINE_NUMBER(911);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(912);
	if ((frame[6].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(913);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_17;
	}
	goto label_18;
label_17:;
	{
	LINE_NUMBER(914);
	if (((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_ignoreUnknownFields) != 0) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[5].o)))->F_name;
	jint temp0 = (jint)((func_arc_util_serialization_Json_ignoreUnknownField_java_lang_Class_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_ignoreUnknownField_java_lang_Class_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_19;
	}
	LINE_NUMBER(916);
	goto label_18;
label_19:;
	{
	LINE_NUMBER(918);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(919);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_trace_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_trace_R_java_lang_String])(ctx, (frame[5].o));
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(920);
	throwException(ctx, (frame[7].o));	}
label_15:;
	{
	LINE_NUMBER(923);
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[6].o)))->F_field;
	frame[7].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_serialization_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
	{
	LINE_NUMBER(925);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[7].o));
	sp[4].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[6].o)))->F_elementType;
	sp[5].o = frame[5].o;
	sp[6].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[6].o)))->F_keyType;
	sp[2].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(936);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(926);
	frame[8].o = sp[0].o;
	LINE_NUMBER(927);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error accessing field: "_j))));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[8].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(928);
	frame[8].o = sp[0].o;
	LINE_NUMBER(929);
	sp[0].o = frame[8].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(930);
	throwException(ctx, (frame[8].o));	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(931);
	frame[8].o = sp[0].o;
	LINE_NUMBER(932);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(933);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_trace_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_trace_R_java_lang_String])(ctx, (frame[5].o));
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(934);
	sp[0].o = frame[9].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(935);
	throwException(ctx, (frame[9].o));	}
label_18:;
	{
	LINE_NUMBER(910);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_12:;
	LINE_NUMBER(938);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_Json_ignoreUnknownField_java_lang_Class_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:ignoreUnknownField", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(949);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(957);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[4].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(966);
	if ((frame[5].o) != nullptr) goto label_2;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(967);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(976);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readValue", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(985);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[5].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(986);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(995);
	if ((frame[4].o) != nullptr) goto label_1;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(996);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:readValue", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1016);
	if ((frame[3].o) != nullptr) goto label_46;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_46:;
	{
	LINE_NUMBER(1018);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_47;
	}
	{
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	if (sp[0].o != nullptr) goto label_49;
	}
	INST_ACONST_NULL();
	goto label_50;
label_49:;
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	sp += 1;
	}
label_50:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1020);
	if ((frame[5].o) == nullptr) goto label_52;
	}
	{
	LINE_NUMBER(1021);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_resolveClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_resolveClass_java_lang_String_R_java_lang_Class])(ctx, (frame[0].o), (frame[5].o));
	frame[1].o = sp[0].o;
	}
label_52:;
	{
	LINE_NUMBER(1024);
	if ((frame[1].o) != nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1025);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_defaultSerializer;
	if (sp[0].o == nullptr) goto label_56;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_defaultSerializer;
	sp[0].o = (jobject)((func_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_util_serialization_Json$Serializer, INDEX_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_56:;
	{
	LINE_NUMBER(1026);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_54:;
	{
	LINE_NUMBER(1029);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	if (sp[0].o == nullptr) goto label_57;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_util_Collection)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_java_util_Collection)), (frame[1].o));
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(1031);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"items"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1032);
	if ((frame[3].o) != nullptr) goto label_47;
	}
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to convert object to struct: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = frame[1].o;
	LINE_NUMBER(1033);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_57:;
	{
	LINE_NUMBER(1035);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToSerializer;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[6].o = (checkCast(ctx, &class_arc_util_serialization_Json$Serializer, sp[0].o));
	LINE_NUMBER(1036);
	if ((frame[6].o) == nullptr) goto label_62;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_util_serialization_Json$Serializer, INDEX_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[0].o), (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_62:;
	{
	LINE_NUMBER(1038);
	if ((frame[1].o) == (((jobject) &class_java_lang_String))) goto label_63;
	}
	{
	jint temp0 = (jint)SM_arc_util_Reflect_isWrapper_java_lang_Class_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_63;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_lang_Enum)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_java_lang_Enum)), (frame[1].o));
	if (temp0 == 0) goto label_64;
	}
label_63:;
	{
	LINE_NUMBER(1039);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_64:;
	{
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1044);
	if ((isInstance(ctx, (frame[7].o), &class_arc_util_serialization_Json$JsonSerializable)) == 0) goto label_66;
	}
	{
	LINE_NUMBER(1045);
	((func_arc_util_serialization_Json$JsonSerializable_read_arc_util_serialization_Json_arc_util_serialization_JsonValue) resolveInterfaceMethod(ctx, &class_arc_util_serialization_Json$JsonSerializable, INDEX_arc_util_serialization_Json$JsonSerializable_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, (checkCast(ctx, &class_arc_util_serialization_Json$JsonSerializable, (frame[7].o)))))(ctx, (checkCast(ctx, &class_arc_util_serialization_Json$JsonSerializable, (frame[7].o))), (frame[0].o), (frame[3].o));
	LINE_NUMBER(1046);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_66:;
	{
	LINE_NUMBER(1050);
	if ((isInstance(ctx, (frame[7].o), &class_arc_struct_ObjectMap)) == 0) goto label_69;
	}
	{
	LINE_NUMBER(1051);
	frame[8].o = (checkCast(ctx, &class_arc_struct_ObjectMap, (frame[7].o)));
	LINE_NUMBER(1052);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[9].o = sp[0].o;
	}
label_72:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_73;
	{
	LINE_NUMBER(1054);
	sp[0].o = frame[8].o;
	sp += 1;
	if ((frame[4].o) == nullptr) goto label_75;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = jobject(nullptr);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	sp[4].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_name;
	init_arc_util_serialization_JsonValue_java_lang_String(ctx, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	goto label_76;
	}
label_75:;
	INST_ALOAD(9);
	sp[-1].o = (jobject) ((arc_util_serialization_JsonValue *) NULL_CHECK(sp[-1].o))->F_name;
label_76:;
	{
	sp -= 2;
	sp[2].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[9].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1052);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_72;
	}
label_73:;
	{
	LINE_NUMBER(1057);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_69:;
	{
	LINE_NUMBER(1059);
	if ((isInstance(ctx, (frame[7].o), &class_arc_struct_ObjectIntMap)) == 0) goto label_78;
	}
	{
	LINE_NUMBER(1060);
	frame[8].o = (checkCast(ctx, &class_arc_struct_ObjectIntMap, (frame[7].o)));
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[9].o = sp[0].o;
	}
label_81:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_82;
	{
	LINE_NUMBER(1062);
	sp[0].o = frame[8].o;
	sp += 1;
	if ((frame[2].o) == nullptr) goto label_84;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = jobject(nullptr);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	sp[4].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_name;
	init_arc_util_serialization_JsonValue_java_lang_String(ctx, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	goto label_85;
	}
label_84:;
	INST_ALOAD(9);
	sp[-1].o = (jobject) ((arc_util_serialization_JsonValue *) NULL_CHECK(sp[-1].o))->F_name;
label_85:;
	{
	sp -= 2;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (frame[9].o));
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_81;
	}
label_82:;
	{
	LINE_NUMBER(1065);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_78:;
	{
	LINE_NUMBER(1067);
	if ((isInstance(ctx, (frame[7].o), &class_arc_struct_ObjectFloatMap)) == 0) goto label_87;
	}
	{
	LINE_NUMBER(1068);
	frame[8].o = (checkCast(ctx, &class_arc_struct_ObjectFloatMap, (frame[7].o)));
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[9].o = sp[0].o;
	}
label_90:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_91;
	{
	LINE_NUMBER(1070);
	sp[0].o = frame[8].o;
	sp += 1;
	if ((frame[2].o) == nullptr) goto label_93;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = jobject(nullptr);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	sp[4].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_name;
	init_arc_util_serialization_JsonValue_java_lang_String(ctx, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	goto label_94;
	}
label_93:;
	INST_ALOAD(9);
	sp[-1].o = (jobject) ((arc_util_serialization_JsonValue *) NULL_CHECK(sp[-1].o))->F_name;
label_94:;
	{
	sp -= 2;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, (frame[9].o));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_90;
	}
label_91:;
	{
	LINE_NUMBER(1073);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_87:;
	{
	LINE_NUMBER(1075);
	if ((isInstance(ctx, (frame[7].o), &class_arc_struct_IntMap)) == 0) goto label_96;
	}
	{
	LINE_NUMBER(1076);
	frame[8].o = (checkCast(ctx, &class_arc_struct_IntMap, (frame[7].o)));
	LINE_NUMBER(1077);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[9].o = sp[0].o;
	}
label_99:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_100;
	{
	LINE_NUMBER(1078);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_name;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[9].o));
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(1077);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_99;
	}
label_100:;
	{
	LINE_NUMBER(1081);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_96:;
	{
	LINE_NUMBER(1083);
	if ((isInstance(ctx, (frame[7].o), &class_arc_struct_ObjectSet)) == 0) goto label_103;
	}
	{
	LINE_NUMBER(1084);
	frame[8].o = (checkCast(ctx, &class_arc_struct_ObjectSet, (frame[7].o)));
	LINE_NUMBER(1085);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_getChild_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getChild_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"values"_j))));
	frame[9].o = sp[0].o;
	}
label_106:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_107;
	{
	LINE_NUMBER(1086);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[9].o));
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1085);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_106;
	}
label_107:;
	{
	LINE_NUMBER(1087);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_103:;
	{
	LINE_NUMBER(1089);
	if ((isInstance(ctx, (frame[7].o), &class_arc_struct_IntSet)) == 0) goto label_110;
	}
	{
	LINE_NUMBER(1090);
	frame[8].o = (checkCast(ctx, &class_arc_struct_IntSet, (frame[7].o)));
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_getChild_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getChild_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"values"_j))));
	frame[9].o = sp[0].o;
	}
label_113:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_114;
	{
	LINE_NUMBER(1092);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_113;
	}
label_114:;
	{
	LINE_NUMBER(1093);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_110:;
	{
	LINE_NUMBER(1095);
	if ((isInstance(ctx, (frame[7].o), &class_arc_struct_IntSeq)) == 0) goto label_117;
	}
	{
	LINE_NUMBER(1096);
	frame[8].o = (checkCast(ctx, &class_arc_struct_IntSeq, (frame[7].o)));
	LINE_NUMBER(1097);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[9].o = sp[0].o;
	}
label_120:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_121;
	{
	LINE_NUMBER(1098);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (frame[9].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1097);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_120;
	}
label_121:;
	{
	LINE_NUMBER(1099);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_117:;
	{
	LINE_NUMBER(1101);
	if ((isInstance(ctx, (frame[7].o), &class_arc_struct_ArrayMap)) == 0) goto label_124;
	}
	{
	LINE_NUMBER(1102);
	frame[8].o = (checkCast(ctx, &class_arc_struct_ArrayMap, (frame[7].o)));
	LINE_NUMBER(1103);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[9].o = sp[0].o;
	}
label_127:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_128;
	{
	LINE_NUMBER(1104);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_name;
	sp[2].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[9].o));
	jint temp0 = (jint)((func_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1103);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_127;
	}
label_128:;
	{
	LINE_NUMBER(1106);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_124:;
	{
	LINE_NUMBER(1108);
	if ((isInstance(ctx, (frame[7].o), &class_java_util_Map)) == 0) goto label_131;
	}
	{
	LINE_NUMBER(1109);
	frame[8].o = (checkCast(ctx, &class_java_util_Map, (frame[7].o)));
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[9].o = sp[0].o;
	}
label_134:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_135;
	{
	LINE_NUMBER(1111);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_name;
	sp[1].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_137;
	}
	LINE_NUMBER(1112);
	goto label_139;
label_137:;
	{
	LINE_NUMBER(1114);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_name;
	sp[2].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[9].o));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_139:;
	{
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_134;
	}
label_135:;
	{
	LINE_NUMBER(1116);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_131:;
	{
	LINE_NUMBER(1119);
	((func_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[7].o), (frame[3].o));
	LINE_NUMBER(1120);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_47:;
	{
	LINE_NUMBER(1124);
	if ((frame[1].o) == nullptr) goto label_141;
	}
	{
	LINE_NUMBER(1125);
	sp[0].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_classToSerializer;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_arc_util_serialization_Json$Serializer, sp[0].o));
	LINE_NUMBER(1126);
	if ((frame[5].o) == nullptr) goto label_144;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_util_serialization_Json$Serializer, INDEX_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_144:;
	{
	LINE_NUMBER(1128);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_arc_util_serialization_Json$JsonSerializable)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_arc_util_serialization_Json$JsonSerializable)), (frame[1].o));
	if (temp0 == 0) goto label_141;
	}
	{
	LINE_NUMBER(1130);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1131);
	((func_arc_util_serialization_Json$JsonSerializable_read_arc_util_serialization_Json_arc_util_serialization_JsonValue) resolveInterfaceMethod(ctx, &class_arc_util_serialization_Json$JsonSerializable, INDEX_arc_util_serialization_Json$JsonSerializable_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, (checkCast(ctx, &class_arc_util_serialization_Json$JsonSerializable, (frame[6].o)))))(ctx, (checkCast(ctx, &class_arc_util_serialization_Json$JsonSerializable, (frame[6].o))), (frame[0].o), (frame[3].o));
	LINE_NUMBER(1132);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_141:;
	{
	LINE_NUMBER(1136);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_148;
	}
	{
	LINE_NUMBER(1138);
	if ((frame[1].o) == nullptr) goto label_150;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Object))) goto label_151;
	}
label_150:;
	(sp++)->o = ((jobject) &class_arc_struct_Seq);
	INST_ASTORE(1);
label_151:;
	{
	LINE_NUMBER(1139);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_arc_struct_Seq)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_arc_struct_Seq)), (frame[1].o));
	if (temp0 == 0) goto label_152;
	}
	{
	LINE_NUMBER(1140);
	if ((frame[1].o) != (((jobject) &class_arc_struct_Seq))) goto label_154;
	}
	{
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	sp += 1;
	goto label_155;
	}
label_154:;
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_Seq, sp[0].o);
	sp += 1;
	}
label_155:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[6].o = sp[0].o;
	}
label_157:;
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_158;
	{
	LINE_NUMBER(1142);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_157;
	}
label_158:;
	{
	LINE_NUMBER(1143);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_152:;
	{
	LINE_NUMBER(1145);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_arc_struct_IntSeq)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_arc_struct_IntSeq)), (frame[1].o));
	if (temp0 == 0) goto label_161;
	}
	{
	LINE_NUMBER(1146);
	if ((frame[1].o) != (((jobject) &class_arc_struct_IntSeq))) goto label_163;
	}
	{
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	sp += 1;
	goto label_164;
	}
label_163:;
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_IntSeq, sp[0].o);
	sp += 1;
	}
label_164:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1147);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[6].o = sp[0].o;
	}
label_166:;
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_167;
	{
	LINE_NUMBER(1148);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (frame[6].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1147);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_166;
	}
label_167:;
	{
	LINE_NUMBER(1149);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_161:;
	{
	LINE_NUMBER(1151);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_arc_struct_ObjectSet)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_arc_struct_ObjectSet)), (frame[1].o));
	if (temp0 == 0) goto label_170;
	}
	{
	LINE_NUMBER(1152);
	if ((frame[1].o) != (((jobject) &class_arc_struct_ObjectSet))) goto label_172;
	}
	{
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	sp += 1;
	goto label_173;
	}
label_172:;
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_ObjectSet, sp[0].o);
	sp += 1;
	}
label_173:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1153);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[6].o = sp[0].o;
	}
label_175:;
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_176;
	{
	LINE_NUMBER(1154);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[6].o));
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1153);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_175;
	}
label_176:;
	{
	LINE_NUMBER(1155);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_170:;
	{
	LINE_NUMBER(1157);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_arc_struct_Queue)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_arc_struct_Queue)), (frame[1].o));
	if (temp0 == 0) goto label_179;
	}
	{
	LINE_NUMBER(1158);
	if ((frame[1].o) != (((jobject) &class_arc_struct_Queue))) goto label_181;
	}
	{
	clinit_arc_struct_Queue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue(ctx, sp[0].o);
	sp += 1;
	goto label_182;
	}
label_181:;
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_Queue, sp[0].o);
	sp += 1;
	}
label_182:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1159);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[6].o = sp[0].o;
	}
label_184:;
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_185;
	{
	LINE_NUMBER(1160);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[6].o));
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1159);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_184;
	}
label_185:;
	{
	LINE_NUMBER(1161);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_179:;
	{
	LINE_NUMBER(1163);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_util_Collection)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_java_util_Collection)), (frame[1].o));
	if (temp0 == 0) goto label_188;
	}
	{
	LINE_NUMBER(1164);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_190;
	}
	{
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	sp += 1;
	goto label_191;
	}
label_190:;
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_java_util_Collection, sp[0].o);
	sp += 1;
	}
label_191:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1165);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[6].o = sp[0].o;
	}
label_193:;
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_194;
	{
	LINE_NUMBER(1166);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[6].o));
	jint temp0 = (jint)((func_java_util_Collection_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1165);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_193;
	}
label_194:;
	{
	LINE_NUMBER(1167);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_188:;
	{
	LINE_NUMBER(1169);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_197;
	}
	{
	LINE_NUMBER(1170);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1171);
	if ((frame[2].o) != nullptr) goto label_200;
	}
	INST_ALOAD(5);
	INST_ASTORE(2);
label_200:;
	{
	LINE_NUMBER(1172);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[5].o), ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_size));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1173);
	frame[7].i = (jint(0));
	LINE_NUMBER(1174);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_203:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_204;
	{
	LINE_NUMBER(1175);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[8].o));
	SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(1174);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_203;
	}
label_204:;
	{
	LINE_NUMBER(1176);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_197:;
	{
	LINE_NUMBER(1178);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to convert value to required type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_148:;
	{
	LINE_NUMBER(1181);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNumber_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_207;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1183);
	if ((frame[1].o) == nullptr) goto label_208;
	}
	{
	sp[0].o = frame[1].o;
	clinit_java_lang_Float(ctx);
	sp[1].o = (jobject)SF_java_lang_Float_TYPE;
	if (sp[0].o == sp[1].o) goto label_208;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Float))) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_208:;
	{
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1184);
	sp[0].o = frame[1].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o == sp[1].o) goto label_209;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Integer))) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_209:;
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1185);
	sp[0].o = frame[1].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	if (sp[0].o == sp[1].o) goto label_210;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Long))) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_210:;
	{
	jlong temp0 = (jlong)((func_arc_util_serialization_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asLong_R_long])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1186);
	sp[0].o = frame[1].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o == sp[1].o) goto label_211;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Double))) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
label_211:;
	{
	jdouble temp0 = (jdouble)((func_arc_util_serialization_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asDouble_R_double])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1187);
	if ((frame[1].o) != (((jobject) &class_java_lang_String))) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1188);
	sp[0].o = frame[1].o;
	clinit_java_lang_Short(ctx);
	sp[1].o = (jobject)SF_java_lang_Short_TYPE;
	if (sp[0].o == sp[1].o) goto label_212;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Short))) { popExceptionFrames(frameRef, 1); goto label_19; }
	}
label_212:;
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asShort_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asShort_R_short])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1189);
	sp[0].o = frame[1].o;
	clinit_java_lang_Byte(ctx);
	sp[1].o = (jobject)SF_java_lang_Byte_TYPE;
	if (sp[0].o == sp[1].o) goto label_213;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Byte))) { popExceptionFrames(frameRef, 1); goto label_214; }
	}
label_213:;
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asByte_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asByte_R_byte])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_214:;
	LINE_NUMBER(1191);
	goto label_215;
label_2:;
	LINE_NUMBER(1190);
	INST_ASTORE(5);
label_215:;
	{
	LINE_NUMBER(1192);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	init_arc_util_serialization_JsonValue_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_207:;
	{
	LINE_NUMBER(1195);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isBoolean_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_216;
	}
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_24; }
	}
	{
	LINE_NUMBER(1197);
	if ((frame[1].o) == nullptr) goto label_217;
	}
	{
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o == sp[1].o) goto label_217;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Boolean))) { popExceptionFrames(frameRef, 1); goto label_218; }
	}
label_217:;
	{
	LINE_NUMBER(1198);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asBoolean_R_boolean])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_218:;
	LINE_NUMBER(1200);
	goto label_219;
label_24:;
	LINE_NUMBER(1199);
	INST_ASTORE(5);
label_219:;
	{
	LINE_NUMBER(1201);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	init_arc_util_serialization_JsonValue_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_216:;
	{
	LINE_NUMBER(1204);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_220;
	}
	{
	LINE_NUMBER(1205);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1206);
	if ((frame[1].o) == nullptr) goto label_223;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_String))) goto label_26;
	}
label_223:;
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_26:;
label_29: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(1208);
	sp[0].o = frame[1].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o == sp[1].o) goto label_224;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Integer))) { popExceptionFrames(frameRef, 1); goto label_30; }
	}
label_224:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Integer_valueOf_java_lang_String_R_java_lang_Integer(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_30:;
label_32: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(1209);
	sp[0].o = frame[1].o;
	clinit_java_lang_Float(ctx);
	sp[1].o = (jobject)SF_java_lang_Float_TYPE;
	if (sp[0].o == sp[1].o) goto label_225;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Float))) { popExceptionFrames(frameRef, 1); goto label_33; }
	}
label_225:;
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"f"_j))));
	if (temp0 == 0) goto label_226;
	}
	{
	sp[0].o = frame[5].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_java_lang_String_R_java_lang_Float(ctx, sp[0].o);
	sp += 1;
	goto label_31;
	}
label_226:;
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"f,"_j))));
	if (temp0 == 0) goto label_227;
	}
	{
	sp[0].o = frame[5].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(2))));
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_java_lang_String_R_java_lang_Float(ctx, sp[0].o);
	sp += 1;
	goto label_31;
	}
label_227:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Float_valueOf_java_lang_String_R_java_lang_Float(ctx, sp[0].o);
	sp++;
label_31:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_33:;
label_35: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(1210);
	sp[0].o = frame[1].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	if (sp[0].o == sp[1].o) goto label_228;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Long))) { popExceptionFrames(frameRef, 1); goto label_36; }
	}
label_228:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Long_valueOf_java_lang_String_R_java_lang_Long(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_36:;
label_38: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(1211);
	sp[0].o = frame[1].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o == sp[1].o) goto label_229;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Double))) { popExceptionFrames(frameRef, 1); goto label_39; }
	}
label_229:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Double_valueOf_java_lang_String_R_java_lang_Double(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_39:;
label_41: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(1212);
	sp[0].o = frame[1].o;
	clinit_java_lang_Short(ctx);
	sp[1].o = (jobject)SF_java_lang_Short_TYPE;
	if (sp[0].o == sp[1].o) goto label_230;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Short))) { popExceptionFrames(frameRef, 1); goto label_42; }
	}
label_230:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Short_valueOf_java_lang_String_R_java_lang_Short(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_42:;
label_44: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(1213);
	sp[0].o = frame[1].o;
	clinit_java_lang_Byte(ctx);
	sp[1].o = (jobject)SF_java_lang_Byte_TYPE;
	if (sp[0].o == sp[1].o) goto label_231;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Byte))) { popExceptionFrames(frameRef, 1); goto label_232; }
	}
label_231:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Byte_valueOf_java_lang_String_R_java_lang_Byte(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_232:;
	LINE_NUMBER(1215);
	goto label_233;
label_28:;
	LINE_NUMBER(1214);
	INST_ASTORE(6);
label_233:;
	{
	LINE_NUMBER(1216);
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o == sp[1].o) goto label_234;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Boolean))) goto label_235;
	}
label_234:;
	{
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_java_lang_String_R_java_lang_Boolean(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_235:;
	{
	LINE_NUMBER(1217);
	sp[0].o = frame[1].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o == sp[1].o) goto label_236;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Character))) goto label_237;
	}
label_236:;
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[5].o), (jint(0)));
	sp[0].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_237:;
	{
	LINE_NUMBER(1218);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_lang_Enum)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_java_lang_Enum)), (frame[1].o));
	if (temp0 == 0) goto label_238;
	}
	{
	LINE_NUMBER(1219);
	sp[0].o = (jobject)((func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object])(ctx, (frame[1].o));
	frame[6].o = (checkCast(ctx, getArrayClass(&class_java_lang_Enum, 1), sp[0].o));
	LINE_NUMBER(1220);
	frame[7].i = (jint(0));
	frame[8].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	}
label_242:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_238;
	}
	{
	LINE_NUMBER(1221);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(1222);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)M_arc_util_serialization_Json_convertToString_java_lang_Enum_R_java_lang_String(ctx, (frame[0].o), (frame[9].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_245;
	}
	INST_ALOAD(9);
	popStackFrame(ctx);
	INST_ARETURN();
label_245:;
	{
	LINE_NUMBER(1220);
	INST_IINC(7, 1);
	goto label_242;
	}
label_238:;
	{
	LINE_NUMBER(1225);
	if ((frame[1].o) != (((jobject) &class_java_lang_CharSequence))) goto label_246;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_246:;
	{
	LINE_NUMBER(1226);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to convert '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' to "_j))));
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[1].o));
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp1;
	sp += 3;
	if (temp0 == 0) goto label_247;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_248;
	}
label_247:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_248:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_220:;
	{
	LINE_NUMBER(1229);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:copyFields", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1238);
	((func_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(1239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:copyFields", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1242);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1243);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(1244);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	frame[7].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(1245);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_value;
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o))))->F_field;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1246);
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, (frame[8].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isFinal_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_11;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_11;
	goto label_6;
label_11:;
	{
	LINE_NUMBER(1248);
	if ((frame[7].o) != nullptr) goto label_0;
	}
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"To object is missing field"_j))));
	sp[2].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1250);
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_field;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[8].o), (frame[1].o));
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1253);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1251);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1252);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error copying field: "_j))));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[9].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	LINE_NUMBER(1254);
	goto label_6;
label_7:;
	LINE_NUMBER(1255);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_resolveClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:resolveClass", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1258);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_getClass_java_lang_String_R_java_lang_Class])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1259);
	if ((frame[2].o) != nullptr) goto label_8;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_5; } // goto label_2
	}
	{
	LINE_NUMBER(1261);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_boolean_java_lang_ClassLoader_R_java_lang_Class(ctx, sp[0].o, temp0, sp[1].o);
	frame[2].o = sp[0].o;
	if (frame[2].o != nullptr) goto label_10;
	LINE_NUMBER(1262);
	jint temp1 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_arc_util_serialization_Json$JsonSerializable)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_arc_util_serialization_Json$JsonSerializable)), (frame[2].o));
	if (temp1 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_arc_util_serialization_AllowSerialization)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_arc_util_serialization_AllowSerialization)), (frame[2].o));
	if (temp0 != 0) goto label_10;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_String))) goto label_10;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Long))) goto label_10;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Integer))) goto label_10;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Short))) goto label_10;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Byte))) goto label_10;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Boolean))) goto label_10;
	}
	{
	if ((frame[2].o) != (((jobject) &class_java_lang_Character))) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_10:;
	LINE_NUMBER(1264);
	INST_ALOAD(2);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	{
	LINE_NUMBER(1266);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	return nullptr;
	}
label_2:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	return nullptr;
label_8:;
	{
	LINE_NUMBER(1271);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_convertToString_java_lang_Enum_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:convertToString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1275);
	if (((jint)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_enumNames) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Enum_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Enum_name_R_java_lang_String])(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Enum_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Enum_toString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:convertToString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1279);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Enum)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)M_arc_util_serialization_Json_convertToString_java_lang_Enum_R_java_lang_String(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1280);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Class)) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Class, (frame[1].o))))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (checkCast(ctx, &class_java_lang_Class, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1281);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:newInstance", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1286);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(1287);
	INST_ASTORE(2);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_8; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(1290);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1291);
	((func_java_lang_reflect_Constructor_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Constructor_setAccessible_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(1292);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(1293);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1307);
	goto label_15;
	}
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(1294);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1295);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_lang_Enum)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_java_lang_Enum)), (frame[1].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1296);
	sp[0].o = (jobject)((func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(1297);
	sp[0].o = (jobject)((func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}
label_17:;
	{
	LINE_NUMBER(1299);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(1300);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Encountered JSON object when expected array of type: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(1301);
	jint temp0 = (jint)((func_java_lang_Class_isMemberClass_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isMemberClass_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_22;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getModifiers_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_22;
	}
	{
	LINE_NUMBER(1302);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Class cannot be created (non-static member class): "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(1304);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Class cannot be created (missing no-arg constructor): "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(1305);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1306);
	frame[2].o = (frame[3].o);
	}
label_15:;
	{
	LINE_NUMBER(1308);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error constructing instance of class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_prettyPrint_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:prettyPrint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1313);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_prettyPrint_java_lang_Object_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_Object_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_prettyPrint_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:prettyPrint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1317);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_prettyPrint_java_lang_String_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_String_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_prettyPrint_java_lang_Object_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:prettyPrint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1321);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_toJson_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_prettyPrint_java_lang_String_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_String_int_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_prettyPrint_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:prettyPrint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1325);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((arc_util_serialization_Json *) NULL_CHECK((frame[0].o)))->F_outputType;
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_int_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_prettyPrint_java_lang_Object_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:prettyPrint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1329);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_toJson_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_prettyPrint_java_lang_String_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_String_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Json_prettyPrint_java_lang_String_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:prettyPrint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1333);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Json_getElementType_java_lang_reflect_Field_int_R_java_lang_Class(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json:getElementType", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Json(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1361);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1362);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_reflect_ParameterizedType)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1363);
	sp[0].o = (jobject)((func_java_lang_reflect_ParameterizedType_getActualTypeArguments_R_Array1_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_ParameterizedType, INDEX_java_lang_reflect_ParameterizedType_getActualTypeArguments_R_Array1_java_lang_reflect_Type, (checkCast(ctx, &class_java_lang_reflect_ParameterizedType, (frame[2].o)))))(ctx, (checkCast(ctx, &class_java_lang_reflect_ParameterizedType, (frame[2].o))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1364);
	if (((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1))) < (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(1365);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(1366);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Class)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1367);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Class, (frame[4].o)));
	}
label_7:;
	{
	LINE_NUMBER(1368);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_reflect_ParameterizedType)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1369);
	sp[0].o = (jobject)((func_java_lang_reflect_ParameterizedType_getRawType_R_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_ParameterizedType, INDEX_java_lang_reflect_ParameterizedType_getRawType_R_java_lang_reflect_Type, (checkCast(ctx, &class_java_lang_reflect_ParameterizedType, (frame[4].o)))))(ctx, (checkCast(ctx, &class_java_lang_reflect_ParameterizedType, (frame[4].o))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	}
label_9:;
	{
	LINE_NUMBER(1370);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_reflect_GenericArrayType)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1371);
	sp[0].o = (jobject)((func_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_GenericArrayType, INDEX_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type, (checkCast(ctx, &class_java_lang_reflect_GenericArrayType, (frame[4].o)))))(ctx, (checkCast(ctx, &class_java_lang_reflect_GenericArrayType, (frame[4].o))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1372);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_Class)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1373);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (checkCast(ctx, &class_java_lang_Class, (frame[5].o))), (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1377);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Json[] {
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
	(void *) M_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class,
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
	(void *) M_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String,
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

static jclass innerClasses[] {
	&class_arc_util_serialization_Json$Serializer,
	&class_arc_util_serialization_Json$FieldMetadata,
	&class_arc_util_serialization_Json$JsonSerializable,
};

static FieldMetadata fields[] {
	{ "debug", &class_boolean, (intptr_t) &SF_arc_util_serialization_Json_debug, "Z", 26 },
	{ "typeToFields", &class_arc_struct_ObjectMap, offsetof(arc_util_serialization_Json, F_typeToFields), "Larc/struct/ObjectMap;", 18 },
	{ "tagToClass", &class_arc_struct_ObjectMap, offsetof(arc_util_serialization_Json, F_tagToClass), "Larc/struct/ObjectMap;", 18 },
	{ "classToTag", &class_arc_struct_ObjectMap, offsetof(arc_util_serialization_Json, F_classToTag), "Larc/struct/ObjectMap;", 18 },
	{ "classToSerializer", &class_arc_struct_ObjectMap, offsetof(arc_util_serialization_Json, F_classToSerializer), "Larc/struct/ObjectMap;", 18 },
	{ "classToDefaultValues", &class_arc_struct_ObjectMap, offsetof(arc_util_serialization_Json, F_classToDefaultValues), "Larc/struct/ObjectMap;", 18 },
	{ "equals1", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_util_serialization_Json, F_equals1), "[Ljava/lang/Object;", 18 },
	{ "equals2", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_util_serialization_Json, F_equals2), "[Ljava/lang/Object;", 18 },
	{ "writer", &class_arc_util_serialization_BaseJsonWriter, offsetof(arc_util_serialization_Json, F_writer), "Larc/util/serialization/BaseJsonWriter;", 2 },
	{ "typeName", &class_java_lang_String, offsetof(arc_util_serialization_Json, F_typeName), "Ljava/lang/String;", 2 },
	{ "usePrototypes", &class_boolean, offsetof(arc_util_serialization_Json, F_usePrototypes), "Z", 2 },
	{ "outputType", &class_arc_util_serialization_JsonWriter$OutputType, offsetof(arc_util_serialization_Json, F_outputType), "Larc/util/serialization/JsonWriter$OutputType;", 2 },
	{ "quoteLongValues", &class_boolean, offsetof(arc_util_serialization_Json, F_quoteLongValues), "Z", 2 },
	{ "ignoreUnknownFields", &class_boolean, offsetof(arc_util_serialization_Json, F_ignoreUnknownFields), "Z", 2 },
	{ "ignoreDeprecated", &class_boolean, offsetof(arc_util_serialization_Json, F_ignoreDeprecated), "Z", 2 },
	{ "readDeprecated", &class_boolean, offsetof(arc_util_serialization_Json, F_readDeprecated), "Z", 2 },
	{ "enumNames", &class_boolean, offsetof(arc_util_serialization_Json, F_enumNames), "Z", 2 },
	{ "defaultSerializer", &class_arc_util_serialization_Json$Serializer, offsetof(arc_util_serialization_Json, F_defaultSerializer), "Larc/util/serialization/Json$Serializer;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_Json, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_util_serialization_Json_arc_util_serialization_JsonWriter$OutputType, 0, "(Larc/util/serialization/JsonWriter$OutputType;)V", 1 },
	{ "getIgnoreUnknownFields", (intptr_t) M_arc_util_serialization_Json_getIgnoreUnknownFields_R_boolean, VTABLE_arc_util_serialization_Json_getIgnoreUnknownFields_R_boolean, "()Z", 1 },
	{ "setIgnoreUnknownFields", (intptr_t) M_arc_util_serialization_Json_setIgnoreUnknownFields_boolean, VTABLE_arc_util_serialization_Json_setIgnoreUnknownFields_boolean, "(Z)V", 1 },
	{ "setIgnoreDeprecated", (intptr_t) M_arc_util_serialization_Json_setIgnoreDeprecated_boolean, VTABLE_arc_util_serialization_Json_setIgnoreDeprecated_boolean, "(Z)V", 1 },
	{ "setReadDeprecated", (intptr_t) M_arc_util_serialization_Json_setReadDeprecated_boolean, VTABLE_arc_util_serialization_Json_setReadDeprecated_boolean, "(Z)V", 1 },
	{ "setOutputType", (intptr_t) M_arc_util_serialization_Json_setOutputType_arc_util_serialization_JsonWriter$OutputType, VTABLE_arc_util_serialization_Json_setOutputType_arc_util_serialization_JsonWriter$OutputType, "(Larc/util/serialization/JsonWriter$OutputType;)V", 1 },
	{ "setQuoteLongValues", (intptr_t) M_arc_util_serialization_Json_setQuoteLongValues_boolean, VTABLE_arc_util_serialization_Json_setQuoteLongValues_boolean, "(Z)V", 1 },
	{ "setEnumNames", (intptr_t) M_arc_util_serialization_Json_setEnumNames_boolean, VTABLE_arc_util_serialization_Json_setEnumNames_boolean, "(Z)V", 1 },
	{ "addClassTag", (intptr_t) M_arc_util_serialization_Json_addClassTag_java_lang_String_java_lang_Class, VTABLE_arc_util_serialization_Json_addClassTag_java_lang_String_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "getClass", (intptr_t) M_arc_util_serialization_Json_getClass_java_lang_String_R_java_lang_Class, VTABLE_arc_util_serialization_Json_getClass_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 1 },
	{ "getTag", (intptr_t) M_arc_util_serialization_Json_getTag_java_lang_Class_R_java_lang_String, VTABLE_arc_util_serialization_Json_getTag_java_lang_Class_R_java_lang_String, "(Ljava/lang/Class;)Ljava/lang/String;", 1 },
	{ "setTypeName", (intptr_t) M_arc_util_serialization_Json_setTypeName_java_lang_String, VTABLE_arc_util_serialization_Json_setTypeName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setDefaultSerializer", (intptr_t) M_arc_util_serialization_Json_setDefaultSerializer_arc_util_serialization_Json$Serializer, VTABLE_arc_util_serialization_Json_setDefaultSerializer_arc_util_serialization_Json$Serializer, "(Larc/util/serialization/Json$Serializer;)V", 1 },
	{ "setSerializer", (intptr_t) M_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer, VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer, "(Ljava/lang/Class;Larc/util/serialization/Json$Serializer;)V", 1 },
	{ "getSerializer", (intptr_t) M_arc_util_serialization_Json_getSerializer_java_lang_Class_R_arc_util_serialization_Json$Serializer, VTABLE_arc_util_serialization_Json_getSerializer_java_lang_Class_R_arc_util_serialization_Json$Serializer, "(Ljava/lang/Class;)Larc/util/serialization/Json$Serializer;", 1 },
	{ "setUsePrototypes", (intptr_t) M_arc_util_serialization_Json_setUsePrototypes_boolean, VTABLE_arc_util_serialization_Json_setUsePrototypes_boolean, "(Z)V", 1 },
	{ "setElementType", (intptr_t) M_arc_util_serialization_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class, VTABLE_arc_util_serialization_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class, "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "getFields", (intptr_t) M_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap, VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap, "(Ljava/lang/Class;)Larc/struct/OrderedMap;", 1 },
	{ "toJson", (intptr_t) M_arc_util_serialization_Json_toJson_java_lang_Object_R_java_lang_String, VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "toJson", (intptr_t) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String, VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String, "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/String;", 1 },
	{ "toUBJson", (intptr_t) M_arc_util_serialization_Json_toUBJson_java_lang_Object_java_lang_Class_java_io_OutputStream, VTABLE_arc_util_serialization_Json_toUBJson_java_lang_Object_java_lang_Class_java_io_OutputStream, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/io/OutputStream;)V", 1 },
	{ "toJson", (intptr_t) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String, VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/String;", 1 },
	{ "toJson", (intptr_t) M_arc_util_serialization_Json_toJson_java_lang_Object_arc_files_Fi, VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_arc_files_Fi, "(Ljava/lang/Object;Larc/files/Fi;)V", 1 },
	{ "toJson", (intptr_t) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_arc_files_Fi, VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_arc_files_Fi, "(Ljava/lang/Object;Ljava/lang/Class;Larc/files/Fi;)V", 1 },
	{ "toJson", (intptr_t) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_arc_files_Fi, VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_arc_files_Fi, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;Larc/files/Fi;)V", 1 },
	{ "toJson", (intptr_t) M_arc_util_serialization_Json_toJson_java_lang_Object_java_io_Writer, VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_io_Writer, "(Ljava/lang/Object;Ljava/io/Writer;)V", 1 },
	{ "toJson", (intptr_t) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_io_Writer, VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_io_Writer, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/io/Writer;)V", 1 },
	{ "toJson", (intptr_t) M_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer, VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;Ljava/io/Writer;)V", 1 },
	{ "getWriter", (intptr_t) M_arc_util_serialization_Json_getWriter_R_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_Json_getWriter_R_arc_util_serialization_BaseJsonWriter, "()Larc/util/serialization/BaseJsonWriter;", 1 },
	{ "setWriter", (intptr_t) M_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter, VTABLE_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter, "(Larc/util/serialization/BaseJsonWriter;)V", 1 },
	{ "writeFields", (intptr_t) M_arc_util_serialization_Json_writeFields_java_lang_Object, VTABLE_arc_util_serialization_Json_writeFields_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getDefaultValues", (intptr_t) M_arc_util_serialization_Json_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object, VTABLE_arc_util_serialization_Json_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object, "(Ljava/lang/Class;)[Ljava/lang/Object;", 2 },
	{ "writeField", (intptr_t) M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String, VTABLE_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String, "(Ljava/lang/Object;Ljava/lang/String;)V", 1 },
	{ "writeField", (intptr_t) M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_Class, VTABLE_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_Class, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "writeField", (intptr_t) M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String, VTABLE_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "writeField", (intptr_t) M_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class, VTABLE_arc_util_serialization_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "writeValue", (intptr_t) M_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object, VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Object;)V", 1 },
	{ "writeValue", (intptr_t) M_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class, VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;)V", 1 },
	{ "writeValue", (intptr_t) M_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class, VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "writeValue", (intptr_t) M_arc_util_serialization_Json_writeValue_java_lang_Object, VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "writeValue", (intptr_t) M_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class, VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class, "(Ljava/lang/Object;Ljava/lang/Class;)V", 1 },
	{ "writeValue", (intptr_t) M_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class, VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "writeObjectStart", (intptr_t) M_arc_util_serialization_Json_writeObjectStart_java_lang_String, VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "writeObjectStart", (intptr_t) M_arc_util_serialization_Json_writeObjectStart_java_lang_String_java_lang_Class_java_lang_Class, VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_String_java_lang_Class_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "writeObjectStart", (intptr_t) M_arc_util_serialization_Json_writeObjectStart, VTABLE_arc_util_serialization_Json_writeObjectStart, "()V", 1 },
	{ "writeObjectStart", (intptr_t) M_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class, VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class, "(Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "writeObjectEnd", (intptr_t) M_arc_util_serialization_Json_writeObjectEnd, VTABLE_arc_util_serialization_Json_writeObjectEnd, "()V", 1 },
	{ "writeArrayStart", (intptr_t) M_arc_util_serialization_Json_writeArrayStart_java_lang_String, VTABLE_arc_util_serialization_Json_writeArrayStart_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "writeArrayStart", (intptr_t) M_arc_util_serialization_Json_writeArrayStart, VTABLE_arc_util_serialization_Json_writeArrayStart, "()V", 1 },
	{ "writeArrayEnd", (intptr_t) M_arc_util_serialization_Json_writeArrayEnd, VTABLE_arc_util_serialization_Json_writeArrayEnd, "()V", 1 },
	{ "writeType", (intptr_t) M_arc_util_serialization_Json_writeType_java_lang_Class, VTABLE_arc_util_serialization_Json_writeType_java_lang_Class, "(Ljava/lang/Class;)V", 1 },
	{ "fromJson", (intptr_t) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_io_Reader_R_java_lang_Object, VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_io_Reader_R_java_lang_Object, "(Ljava/lang/Class;Ljava/io/Reader;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_io_Reader_R_java_lang_Object, VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_io_Reader_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/io/Reader;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_io_InputStream_R_java_lang_Object, VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_io_InputStream_R_java_lang_Object, "(Ljava/lang/Class;Ljava/io/InputStream;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_io_InputStream_R_java_lang_Object, VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_io_InputStream_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/io/InputStream;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_arc_util_serialization_Json_fromJson_java_lang_Class_arc_files_Fi_R_java_lang_Object, VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_arc_files_Fi_R_java_lang_Object, "(Ljava/lang/Class;Larc/files/Fi;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_arc_files_Fi_R_java_lang_Object, VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_arc_files_Fi_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Larc/files/Fi;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_arc_util_serialization_Json_fromJson_java_lang_Class_Array1_char_int_int_R_java_lang_Object, VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_Array1_char_int_int_R_java_lang_Object, "(Ljava/lang/Class;[CII)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_Array1_char_int_int_R_java_lang_Object, VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_Array1_char_int_int_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;[CII)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object, VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object, VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", 1 },
	{ "readField", (intptr_t) M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_arc_util_serialization_JsonValue, "(Ljava/lang/Object;Ljava/lang/String;Larc/util/serialization/JsonValue;)V", 1 },
	{ "readField", (intptr_t) M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Class;Larc/util/serialization/JsonValue;)V", 1 },
	{ "readField", (intptr_t) M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_arc_util_serialization_JsonValue, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)V", 1 },
	{ "readField", (intptr_t) M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;Larc/util/serialization/JsonValue;)V", 1 },
	{ "readField", (intptr_t) M_arc_util_serialization_Json_readField_java_lang_Object_java_lang_reflect_Field_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_Json_readField_java_lang_Object_java_lang_reflect_Field_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue, "(Ljava/lang/Object;Ljava/lang/reflect/Field;Ljava/lang/String;Ljava/lang/Class;Larc/util/serialization/JsonValue;)V", 1 },
	{ "readFields", (intptr_t) M_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue, "(Ljava/lang/Object;Larc/util/serialization/JsonValue;)V", 1 },
	{ "ignoreUnknownField", (intptr_t) M_arc_util_serialization_Json_ignoreUnknownField_java_lang_Class_java_lang_String_R_boolean, VTABLE_arc_util_serialization_Json_ignoreUnknownField_java_lang_Class_java_lang_String_R_boolean, "(Ljava/lang/Class;Ljava/lang/String;)Z", 4 },
	{ "readValue", (intptr_t) M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_arc_util_serialization_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Object;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Object;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "copyFields", (intptr_t) M_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object, VTABLE_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 1 },
	{ "copyFields", (intptr_t) M_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object_boolean, VTABLE_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object_boolean, "(Ljava/lang/Object;Ljava/lang/Object;Z)V", 1 },
	{ "resolveClass", (intptr_t) M_arc_util_serialization_Json_resolveClass_java_lang_String_R_java_lang_Class, VTABLE_arc_util_serialization_Json_resolveClass_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 4 },
	{ "convertToString", (intptr_t) M_arc_util_serialization_Json_convertToString_java_lang_Enum_R_java_lang_String, VTABLE_arc_util_serialization_Json_convertToString_java_lang_Enum_R_java_lang_String, "(Ljava/lang/Enum;)Ljava/lang/String;", 2 },
	{ "convertToString", (intptr_t) M_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String, VTABLE_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 4 },
	{ "newInstance", (intptr_t) M_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object, VTABLE_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 4 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_Json_prettyPrint_java_lang_Object_R_java_lang_String, VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_Json_prettyPrint_java_lang_String_R_java_lang_String, VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_Json_prettyPrint_java_lang_Object_int_R_java_lang_String, VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_Object_int_R_java_lang_String, "(Ljava/lang/Object;I)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_Json_prettyPrint_java_lang_String_int_R_java_lang_String, VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_String_int_R_java_lang_String, "(Ljava/lang/String;I)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_Json_prettyPrint_java_lang_Object_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String, VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_Object_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String, "(Ljava/lang/Object;Larc/util/serialization/JsonValue$PrettyPrintSettings;)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_arc_util_serialization_Json_prettyPrint_java_lang_String_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String, VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_String_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String, "(Ljava/lang/String;Larc/util/serialization/JsonValue$PrettyPrintSettings;)Ljava/lang/String;", 1 },
	{ "getElementType", (intptr_t) SM_arc_util_serialization_Json_getElementType_java_lang_reflect_Field_int_R_java_lang_Class, 0, "(Ljava/lang/reflect/Field;I)Ljava/lang/Class;", 8 },
};

Class class_arc_util_serialization_Json{
		.nativeName = (intptr_t) "arc/util/serialization/Json",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_Json),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Json,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Json,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Json,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 90,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 98,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Json = registerClass(&class_arc_util_serialization_Json);

}
