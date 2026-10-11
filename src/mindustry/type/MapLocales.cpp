#include "mindustry/type/MapLocales.h"
#include "arc/util/serialization/Json_JsonSerializable.h"
#include "mindustry/type/MapLocales.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "arc/util/serialization/JsonValue_JsonIterator.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "java/lang/Iterable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/StringMap.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/util/I18NBundle.h"
#include "arc/Settings.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"
#include "java/util/Locale.h"

extern "C" {


void mark_mindustry_type_MapLocales(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_MapLocales *) object;
}

void clinit_mindustry_type_MapLocales(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectMap(ctx);
}

void init_mindustry_type_MapLocales(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_MapLocales(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_arc_struct_ObjectMap(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_MapLocales_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_entries_R_arc_struct_ObjectMap$Entries])(ctx, (frame[0].o));
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
	LINE_NUMBER(17);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) &class_arc_struct_StringMap)), (((jobject) &class_java_lang_String)));
	LINE_NUMBER(18);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_MapLocales_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:read", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(24);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[4].o)))->F_child;
	frame[6].o = sp[0].o;
	}
label_5:;
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_6;
	{
	LINE_NUMBER(27);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_name;
	sp[2].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) &class_java_lang_String)), (jobject(nullptr)), (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[4].o)))->F_name;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[5].o));
	LINE_NUMBER(31);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:copy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	clinit_mindustry_type_MapLocales(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_MapLocales);
	init_mindustry_type_MapLocales(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_entries_R_arc_struct_ObjectMap$Entries])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(39);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	((func_arc_struct_StringMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_putAll_arc_struct_ObjectMap])(ctx, sp[0].o, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[1].o)));
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)), (frame[4].o));
	LINE_NUMBER(42);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:getProperty", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_type_MapLocales_currentLocale_R_java_lang_String(ctx);
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(49);
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"en"_j))), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"en"_j))));
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)), (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_3:;
	{
	LINE_NUMBER(50);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"???\u0001???"_j.string, 1, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_type_MapLocales_currentLocale_R_java_lang_String(ctx);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)), (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:getProperty", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(57);
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(58);
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"en"_j))), (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"en"_j))));
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)), (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_3:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"???\u0001???"_j.string, 1, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)), (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:containsProperty", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_type_MapLocales_currentLocale_R_java_lang_String(ctx);
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"en"_j))), (frame[1].o));
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

jbool M_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:containsProperty", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(69);
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)))->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_MapLocales_getFormatted_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:getFormatted", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(74);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_type_MapLocales_currentLocale_R_java_lang_String(ctx);
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"en"_j))), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"en"_j))), (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"???\u0001???"_j.string, 1, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)SM_mindustry_type_MapLocales_currentLocale_R_java_lang_String(ctx);
	sp[1].o = (jobject)((func_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(85);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_8;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_java_lang_StringBuilder_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_indexOf_java_lang_String_R_int])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"@"_j))));
	frame[8].i = temp0;
	LINE_NUMBER(88);
	if ((frame[8].i) != (jint(-1))) goto label_11;
	}
	goto label_8;
label_11:;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[3].o;
	jint temp0 = frame[8].i;
	jint temp1 = (frame[8].i) + (jint(1));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(85);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_MapLocales_currentLocale_R_java_lang_String(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:currentLocale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_MapLocales(ctx);
	{
	LINE_NUMBER(98);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"locale"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(99);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"default"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp[0].o = (jobject)((func_java_util_Locale_getLanguage_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_getLanguage_R_java_lang_String])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_MapLocales_copy_R_arc_struct_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/MapLocales:copy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_MapLocales[] {
	(void *) M_arc_struct_ObjectMap_hashCode_R_int,
	(void *) M_arc_struct_ObjectMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ObjectMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ObjectMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectMap_place_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putAll_Array1_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_each_arc_func_Cons2,
	(void *) M_mindustry_type_MapLocales_copy_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_set_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_notEmpty_R_boolean,
	(void *) M_arc_struct_ObjectMap_isEmpty_R_boolean,
	(void *) M_arc_struct_ObjectMap_shrink_int,
	(void *) M_arc_struct_ObjectMap_clear_int,
	(void *) M_arc_struct_ObjectMap_clear,
	(void *) M_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_ensureCapacity_int,
	(void *) M_arc_struct_ObjectMap_resize_int,
	(void *) M_arc_struct_ObjectMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries,
	(void *) M_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries,
	(void *) M_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values,
	(void *) M_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys,
	(void *) M_mindustry_type_MapLocales_write_arc_util_serialization_Json,
	(void *) M_mindustry_type_MapLocales_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales,
	(void *) M_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean,
	(void *) M_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean,
	(void *) M_mindustry_type_MapLocales_getFormatted_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "place", "(Ljava/lang/Object;)I" },
	{ "locateKey", "(Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putMissing", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "([Ljava/lang/Object;)V" },
	{ "putAll", "(Larc/struct/ObjectMap;)V" },
	{ "merge", "(Larc/struct/ObjectMap;)Larc/struct/ObjectMap;" },
	{ "each", "(Larc/func/Cons2;)V" },
	{ "copy", "()Larc/struct/ObjectMap;" },
	{ "set", "(Larc/struct/ObjectMap;)V" },
	{ "putResize", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "getThrow", "(Ljava/lang/Object;Larc/func/Prov;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Larc/func/Prov;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "findKey", "(Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "iterator", "()Larc/struct/ObjectMap$Entries;" },
	{ "entries", "()Larc/struct/ObjectMap$Entries;" },
	{ "values", "()Larc/struct/ObjectMap$Values;" },
	{ "keys", "()Larc/struct/ObjectMap$Keys;" },
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
	{ "copy", "()Lmindustry/type/MapLocales;" },
	{ "getProperty", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "containsProperty", "(Ljava/lang/String;)Z" },
	{ "containsProperty", "(Ljava/lang/String;Ljava/lang/String;)Z" },
	{ "getFormatted", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_arc_util_serialization_Json$JsonSerializable, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_MapLocales, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_type_MapLocales_write_arc_util_serialization_Json, VTABLE_mindustry_type_MapLocales_write_arc_util_serialization_Json, "(Larc/util/serialization/Json;)V", 1 },
	{ "read", (intptr_t) M_mindustry_type_MapLocales_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, VTABLE_mindustry_type_MapLocales_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V", 1 },
	{ "copy", (intptr_t) M_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales, VTABLE_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales, "()Lmindustry/type/MapLocales;", 1 },
	{ "getProperty", (intptr_t) M_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String, VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getProperty", (intptr_t) M_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "containsProperty", (intptr_t) M_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean, VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "containsProperty", (intptr_t) M_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean, VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean, "(Ljava/lang/String;Ljava/lang/String;)Z", 2 },
	{ "getFormatted", (intptr_t) M_mindustry_type_MapLocales_getFormatted_java_lang_String_Array1_java_lang_Object_R_java_lang_String, VTABLE_mindustry_type_MapLocales_getFormatted_java_lang_String_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 129 },
	{ "currentLocale", (intptr_t) SM_mindustry_type_MapLocales_currentLocale_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "copy", (intptr_t) M_mindustry_type_MapLocales_copy_R_arc_struct_ObjectMap, VTABLE_mindustry_type_MapLocales_copy_R_arc_struct_ObjectMap, "()Larc/struct/ObjectMap;", 4161 },
};

Class class_mindustry_type_MapLocales{
		.nativeName = (intptr_t) "mindustry/type/MapLocales",
		.parentClass = (intptr_t) &class_arc_struct_ObjectMap,
		.size = sizeof(mindustry_type_MapLocales),
		.classVtable = (intptr_t) vtable_mindustry_type_MapLocales,
		.staticInitializer = (intptr_t) clinit_mindustry_type_MapLocales,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_MapLocales,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 54,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_MapLocales = registerClass(&class_mindustry_type_MapLocales);

}
