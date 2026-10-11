#include "mindustry/io/JsonIO.h"
#include "arc/func/Prov.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/world/meta/Attribute.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/maps/Maps.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/Json_Serializer.h"
#include "mindustry/io/JsonIO_9.h"
#include "mindustry/type/Liquid.h"
#include "java/io/DataInputStream.h"
#include "mindustry/io/JsonIO_5.h"
#include "mindustry/io/JsonIO_6.h"
#include "mindustry/io/JsonIO_7.h"
#include "mindustry/type/Item.h"
#include "mindustry/io/JsonIO_8.h"
#include "mindustry/io/JsonIO_1.h"
#include "mindustry/io/JsonIO_2.h"
#include "mindustry/io/JsonIO_3.h"
#include "mindustry/io/JsonIO_4.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/JsonValue.h"
#include "java/io/DataOutputStream.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "java/lang/String.h"
#include "mindustry/audio/MusicContainer.h"
#include "arc/util/serialization/UBJsonReader.h"
#include "arc/util/serialization/JsonReader.h"
#include "mindustry/io/JsonIO_14.h"
#include "mindustry/io/JsonIO_15.h"
#include "mindustry/io/JsonIO_16.h"
#include "mindustry/io/JsonIO_10.h"
#include "arc/util/serialization/BaseJsonWriter.h"
#include "mindustry/io/JsonIO_11.h"
#include "mindustry/type/Weather.h"
#include "mindustry/type/Weather_WeatherEntry.h"
#include "mindustry/io/JsonIO_12.h"
#include "mindustry/io/JsonIO_13.h"
#include "arc/util/serialization/UBJsonWriter.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/type/Sector.h"
#include "mindustry/type/UnitType.h"
#include "java/io/OutputStream.h"
#include "java/lang/CharSequence.h"
#include "mindustry/game/SpawnGroup.h"
#include "arc/util/Strings.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/type/Planet.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"

extern "C" {

jobject SF_mindustry_io_JsonIO_json;

void mark_mindustry_io_JsonIO(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_io_JsonIO_json)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_JsonIO_json)->clazz)->markFunction)((jobject) SF_mindustry_io_JsonIO_json, mark, depth + 1);
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
	auto self = (mindustry_io_JsonIO *) object;
}

void init_mindustry_io_JsonIO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_JsonIO_writeBytes_java_lang_Object_java_lang_Class_java_io_DataOutputStream(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:writeBytes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(45);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	clinit_arc_util_serialization_UBJsonWriter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_UBJsonWriter);
	init_arc_util_serialization_UBJsonWriter_java_io_OutputStream(ctx, sp[1].o, (frame[2].o));
	((func_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = frame[0].o;
	sp += 2;
	if ((frame[0].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 3;
	((func_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_JsonIO_readBytes_java_lang_Class_java_lang_Class_java_io_DataInputStream_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:readBytes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(50);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	clinit_arc_util_serialization_UBJsonReader(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_util_serialization_UBJsonReader);
	init_arc_util_serialization_UBJsonReader(ctx, sp[3].o);
	sp[3].o = (jobject)((func_arc_util_serialization_UBJsonReader_parseWihoutClosing_java_io_DataInputStream_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_UBJsonReader_parseWihoutClosing_java_io_DataInputStream_R_arc_util_serialization_JsonValue])(ctx, sp[3].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_JsonIO_copy_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:copy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(58);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_JsonIO_copy_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:copy", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:read", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(67);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"io.anuke."_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_JsonIO_read_java_lang_Object_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(71);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = frame[0].o;
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[2].o);
	sp[3].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"io.anuke."_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[2].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, sp[2].o, sp[3].o);
	((func_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_JsonIO_print_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:print", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(76);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_prettyPrint_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_prettyPrint_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_JsonIO_classTag_java_lang_String_java_lang_Class(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:classTag", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(80);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_addClassTag_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_addClassTag_java_lang_String_java_lang_Class])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_io_JsonIO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO:<clinit>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO(ctx);
	{
	LINE_NUMBER(23);
	clinit_mindustry_io_JsonIO$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$1);
	init_mindustry_io_JsonIO$1(ctx, sp[0].o);
	clinit_mindustry_io_JsonIO(ctx);
	SF_mindustry_io_JsonIO_json = sp[0].o;
	LINE_NUMBER(84);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class])(ctx, sp[0].o, (((jobject) &class_mindustry_game_Rules)), (((jobject) createStringLiteral(ctx, u8"spawns"_j))), (((jobject) &class_mindustry_game_SpawnGroup)));
	LINE_NUMBER(85);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class])(ctx, sp[0].o, (((jobject) &class_mindustry_game_Rules)), (((jobject) createStringLiteral(ctx, u8"loadout"_j))), (((jobject) &class_mindustry_type_ItemStack)));
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class])(ctx, sp[0].o, (((jobject) &class_mindustry_game_Rules)), (((jobject) createStringLiteral(ctx, u8"weather"_j))), (((jobject) &class_mindustry_type_Weather$WeatherEntry)));
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_addClassTag_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_addClassTag_java_lang_String_java_lang_Class])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WeatherEntry"_j))), (((jobject) &class_mindustry_type_Weather$WeatherEntry)));
	LINE_NUMBER(87);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_audio_MusicContainer);
	clinit_mindustry_io_JsonIO$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$2);
	init_mindustry_io_JsonIO$2(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(99);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_arc_graphics_Color);
	clinit_mindustry_io_JsonIO$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$3);
	init_mindustry_io_JsonIO$3(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(116);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_type_Sector);
	clinit_mindustry_io_JsonIO$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$4);
	init_mindustry_io_JsonIO$4(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(130);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_type_SectorPreset);
	clinit_mindustry_io_JsonIO$5(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$5);
	init_mindustry_io_JsonIO$5(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(142);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_type_Liquid);
	clinit_mindustry_io_JsonIO$6(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$6);
	init_mindustry_io_JsonIO$6(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(156);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_world_meta_Attribute);
	clinit_mindustry_io_JsonIO$7(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$7);
	init_mindustry_io_JsonIO$7(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(168);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_type_Item);
	clinit_mindustry_io_JsonIO$8(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$8);
	init_mindustry_io_JsonIO$8(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(182);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_game_Team);
	clinit_mindustry_io_JsonIO$9(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$9);
	init_mindustry_io_JsonIO$9(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(194);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_world_Block);
	clinit_mindustry_io_JsonIO$10(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$10);
	init_mindustry_io_JsonIO$10(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(208);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_type_Planet);
	clinit_mindustry_io_JsonIO$11(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$11);
	init_mindustry_io_JsonIO$11(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(224);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_type_Weather);
	clinit_mindustry_io_JsonIO$12(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$12);
	init_mindustry_io_JsonIO$12(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(236);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_type_UnitType);
	clinit_mindustry_io_JsonIO$13(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$13);
	init_mindustry_io_JsonIO$13(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(250);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_type_ItemStack);
	clinit_mindustry_io_JsonIO$14(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$14);
	init_mindustry_io_JsonIO$14(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(265);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_ctype_UnlockableContent);
	clinit_mindustry_io_JsonIO$15(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$15);
	init_mindustry_io_JsonIO$15(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(280);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_mindustry_game_MapObjectives);
	clinit_mindustry_io_JsonIO$16(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_io_JsonIO$16);
	init_mindustry_io_JsonIO$16(ctx, sp[2].o);
	((func_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(341);
	clinit_mindustry_maps_Maps(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_Maps_allFilterTypes;
	frame[0].o = sp[0].o;
	frame[1].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	frame[2].i = (jint(0));
	}
label_19:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_20;
	}
	{
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_maps_filters_GenerateFilter, sp[0].o));
	LINE_NUMBER(343);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Filter"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)SM_arc_util_Strings_camelize_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[4].o));
	((func_arc_util_serialization_Json_addClassTag_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_addClassTag_java_lang_String_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(341);
	INST_IINC(2, 1);
	goto label_19;
	}
label_20:;
	LINE_NUMBER(345);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_io_JsonIO[] {
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
	{ "json", &class_arc_util_serialization_Json, (intptr_t) &SF_mindustry_io_JsonIO_json, "Larc/util/serialization/Json;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_JsonIO, 0, "()V", 1 },
	{ "writeBytes", (intptr_t) SM_mindustry_io_JsonIO_writeBytes_java_lang_Object_java_lang_Class_java_io_DataOutputStream, 0, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/io/DataOutputStream;)V", 9 },
	{ "readBytes", (intptr_t) SM_mindustry_io_JsonIO_readBytes_java_lang_Class_java_lang_Class_java_io_DataInputStream_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/io/DataInputStream;)Ljava/lang/Object;", 9 },
	{ "write", (intptr_t) SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "copy", (intptr_t) SM_mindustry_io_JsonIO_copy_java_lang_Object_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "copy", (intptr_t) SM_mindustry_io_JsonIO_copy_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "read", (intptr_t) SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "read", (intptr_t) SM_mindustry_io_JsonIO_read_java_lang_Object_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "print", (intptr_t) SM_mindustry_io_JsonIO_print_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "classTag", (intptr_t) SM_mindustry_io_JsonIO_classTag_java_lang_String_java_lang_Class, 0, "(Ljava/lang/String;Ljava/lang/Class;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_io_JsonIO, 0, "()V", 8 },
};

Class class_mindustry_io_JsonIO{
		.nativeName = (intptr_t) "mindustry/io/JsonIO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_JsonIO),
		.classVtable = (intptr_t) vtable_mindustry_io_JsonIO,
		.staticInitializer = (intptr_t) clinit_mindustry_io_JsonIO,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_JsonIO,
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
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_JsonIO = registerClass(&class_mindustry_io_JsonIO);

}
