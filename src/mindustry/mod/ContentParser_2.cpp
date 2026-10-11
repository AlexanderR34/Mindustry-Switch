#include "mindustry/mod/ContentParser_2.h"
#include "java/lang/Integer.h"
#include "mindustry/mod/ContentParser_ParseListener.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/LiquidStack.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/consumers/ConsumeLiquid.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/SerializationException.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/mod/ContentParser_2.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/mod/ContentParser_2_invoke_arc_func_Cons_1.h"
#include "mindustry/type/PayloadStack.h"
#include "java/lang/Throwable.h"
#include "mindustry/mod/ContentParser_FieldParser.h"
#include "java/lang/Exception.h"
#include "java/util/Iterator.h"
#include "mindustry/world/meta/Env.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/serialization/JsonValue_JsonIterator.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/mod/ContentParser_2_invoke_arc_func_Prov_1.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Reflect.h"
#include "arc/util/Strings.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/mod/ContentParser.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_mod_ContentParser$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_ContentParser$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_mod_ContentParser$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_util_serialization_Json(ctx);
}

void init_mindustry_mod_ContentParser$2_mindustry_mod_ContentParser(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(411);
	((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_util_serialization_Json(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$2_resolveClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$2:resolveClass", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_allowClassResolution) == 0) goto label_1;
	}
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)M_arc_util_serialization_Json_resolveClass_java_lang_String_R_java_lang_Class(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(417);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Resolving arbitrary classes (\u0001) is not allowed. Use short names for classes only (without the package prefix)."_j.string, 1, (frame[1].o));
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$2_newInstance_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$2:newInstance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)M_arc_util_serialization_Json_newInstance_java_lang_Class_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(424);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_onNewInstance_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_onNewInstance_java_lang_Object_java_lang_Class])(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$2_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$2:readValue", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$2_internalRead_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser$2_internalRead_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(431);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[5].o));
	jint temp0 = (jint)SM_arc_util_Reflect_isWrapper_java_lang_Class_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_checkNullFields_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_checkNullFields_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(433);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_listeners;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$2_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_mod_ContentParser$2_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$2_invoke_arc_func_Cons_1);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$2_internalRead_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$2:internalRead", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(441);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_classParsers;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_classParsers;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$FieldParser_parse_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_mod_ContentParser$FieldParser, INDEX_mindustry_mod_ContentParser$FieldParser_parse_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, (checkCast(ctx, &class_mindustry_mod_ContentParser$FieldParser, sp[0].o))))(ctx, (checkCast(ctx, &class_mindustry_mod_ContentParser$FieldParser, sp[0].o)), (frame[1].o), (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(445);
	frame[5].o = sp[0].o;
	LINE_NUMBER(446);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_RuntimeException)) == 0) goto label_9;
	}
	{
	frame[6].o = (checkCast(ctx, &class_java_lang_RuntimeException, (frame[5].o)));
	LINE_NUMBER(447);
	throwException(ctx, (frame[6].o));	}
label_9:;
	{
	LINE_NUMBER(449);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(454);
	sp[0].o = frame[1].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Integer))) goto label_12;
	}
label_11:;
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(455);
	frame[5].i = (jint(0));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(457);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[7].o));
	if (temp0 != 0) goto label_18;
	}
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[7].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Integer bitfield values must all be strings. Found: \u0001"_j.string, 1, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(459);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, (((jobject) &class_mindustry_world_meta_Env)), (frame[8].o));
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	frame[5].i = (temp0 | temp1);
	LINE_NUMBER(460);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(466);
	if ((frame[1].o) != (((jobject) &class_mindustry_type_ItemStack))) goto label_21;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_type_ItemStack);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"{item: \u0001, amount: \u0001}"_j.string, 2, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$2_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$2_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(473);
	if ((frame[1].o) != (((jobject) &class_mindustry_type_PayloadStack))) goto label_24;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(475);
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))), (jint(1)));
	frame[6].i = temp0;
	LINE_NUMBER(476);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unit_java_lang_String_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unit_java_lang_String_R_mindustry_type_UnitType])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	if (sp[0].o != nullptr) goto label_28;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	sp += 1;
	goto label_29;
	}
label_28:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unit_java_lang_String_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unit_java_lang_String_R_mindustry_type_UnitType])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	sp += 1;
	}
label_29:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(478);
	clinit_mindustry_type_PayloadStack(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_PayloadStack);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[7].o) != nullptr) goto label_31;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_router;
	goto label_32;
label_31:;
	INST_ALOAD(7);
label_32:;
	{
	sp -= 3;
	init_mindustry_type_PayloadStack_mindustry_ctype_UnlockableContent_int(ctx, sp[0].o, sp[2].o, (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(482);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(484);
	if ((frame[1].o) != (((jobject) &class_mindustry_type_LiquidStack))) goto label_36;
	}
	{
	LINE_NUMBER(485);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_type_LiquidStack);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"{liquid: \u0001, amount: \u0001}"_j.string, 2, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$2_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$2_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(486);
	if ((frame[1].o) != (((jobject) &class_mindustry_world_consumers_ConsumeLiquid))) goto label_33;
	}
	{
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_world_consumers_ConsumeLiquid);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"{liquid: \u0001, amount: \u0001}"_j.string, 2, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$2_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$2_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(492);
	if ((frame[1].o) != (((jobject) &class_arc_math_geom_Rect))) goto label_39;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_39;
	}
	{
	if (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_size) != (jint(4))) goto label_39;
	}
	{
	LINE_NUMBER(493);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (jint(0)));
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (jint(1)));
	jfloat temp1 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (jint(2)));
	jfloat temp2 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (jint(3)));
	jfloat temp3 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, sp[1].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(497);
	if ((frame[1].o) != (((jobject) &class_mindustry_ctype_UnlockableContent))) goto label_41;
	}
	{
	LINE_NUMBER(498);
	clinit_mindustry_mod_ContentParser(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ContentParser_typesToSearch;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_43:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_44;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(499);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(500);
	if ((frame[9].o) == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return (frame[9].o);
	}
label_47:;
	{
	LINE_NUMBER(498);
	INST_IINC(7, 1);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(504);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_name;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\"\u0001\": No content found with name '\u0001'."_j.string, 2, sp[1].o, sp[2].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_41:;
	{
	LINE_NUMBER(507);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_mindustry_ctype_Content)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_mindustry_ctype_Content)), (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_contentTypes;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$2_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_mod_ContentParser$2_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$2_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_ctype_ContentType, sp[0].o));
	LINE_NUMBER(509);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_currentMod;
	if (sp[0].o == nullptr) goto label_51;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_currentMod;
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_52;
	}
label_51:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_52:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(510);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = frame[5].o;
	sp[2].o = frame[6].o;
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(511);
	if ((frame[7].o) == nullptr) goto label_55;
	}
	INST_ALOAD(7);
	popStackFrame(ctx);
	INST_ARETURN();
label_55:;
	{
	LINE_NUMBER(512);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(514);
	if ((frame[8].o) == nullptr) goto label_57;
	}
	INST_ALOAD(8);
	popStackFrame(ctx);
	INST_ARETURN();
label_57:;
	{
	LINE_NUMBER(515);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_name;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp += 2;
	if (temp0 != nullptr) goto label_58;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_59;
label_58:;
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\"\u0001\": "_j.string, 1, sp[0].o);
	sp += 1;
	}
label_59:;
	{
	sp -= 3;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[5].o));
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp[4].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001No \u0001 found with name '\u0001'.\nMake sure '\u0001' is spelled correctly, and that it really exists!\nThis may also occur because its file failed to parse."_j.string, 4, sp[2].o, sp[1].o, sp[3].o, sp[4].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)M_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_ContentParser$2_lambda$internalRead$0_java_lang_Class_R_java_lang_RuntimeException(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$2:lambda$internalRead$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(508);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"No content type for class: \u0001"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_ContentParser$2_lambda$readValue$0_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object_mindustry_mod_ContentParser$ParseListener(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$2:lambda$readValue$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$2(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(434);
	((func_mindustry_mod_ContentParser$ParseListener_parsed_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_mod_ContentParser$ParseListener, INDEX_mindustry_mod_ContentParser$ParseListener_parsed_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_ContentParser$2[] {
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
	(void *) M_mindustry_mod_ContentParser$2_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object,
	(void *) M_arc_util_serialization_Json_copyFields_java_lang_Object_java_lang_Object_boolean,
	(void *) M_mindustry_mod_ContentParser$2_resolveClass_java_lang_String_R_java_lang_Class,
	(void *) M_arc_util_serialization_Json_convertToString_java_lang_Enum_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_convertToString_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_mod_ContentParser$2_newInstance_java_lang_Class_R_java_lang_Object,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_Object_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_Object_int_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_String_int_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_Object_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String,
	(void *) M_arc_util_serialization_Json_prettyPrint_java_lang_String_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String,
	(void *) M_mindustry_mod_ContentParser$2_internalRead_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object,
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
	{ "internalRead", "(Ljava/lang/Class;Ljava/lang/Class;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_mod_ContentParser, offsetof(mindustry_mod_ContentParser$2, F_this$0), "Lmindustry/mod/ContentParser;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_ContentParser$2_mindustry_mod_ContentParser, 0, "(Lmindustry/mod/ContentParser;)V", 0 },
	{ "resolveClass", (intptr_t) M_mindustry_mod_ContentParser$2_resolveClass_java_lang_String_R_java_lang_Class, VTABLE_mindustry_mod_ContentParser$2_resolveClass_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 4 },
	{ "newInstance", (intptr_t) M_mindustry_mod_ContentParser$2_newInstance_java_lang_Class_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$2_newInstance_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 4 },
	{ "readValue", (intptr_t) M_mindustry_mod_ContentParser$2_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$2_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "internalRead", (intptr_t) M_mindustry_mod_ContentParser$2_internalRead_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$2_internalRead_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 2 },
	{ "lambda$internalRead$0", (intptr_t) SM_mindustry_mod_ContentParser$2_lambda$internalRead$0_java_lang_Class_R_java_lang_RuntimeException, 0, "(Ljava/lang/Class;)Ljava/lang/RuntimeException;", 4106 },
	{ "lambda$readValue$0", (intptr_t) SM_mindustry_mod_ContentParser$2_lambda$readValue$0_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object_mindustry_mod_ContentParser$ParseListener, 0, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;Ljava/lang/Object;Lmindustry/mod/ContentParser$ParseListener;)V", 4106 },
};

Class class_mindustry_mod_ContentParser$2{
		.nativeName = (intptr_t) "mindustry/mod/ContentParser$2",
		.parentClass = (intptr_t) &class_arc_util_serialization_Json,
		.size = sizeof(mindustry_mod_ContentParser$2),
		.classVtable = (intptr_t) vtable_mindustry_mod_ContentParser$2,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ContentParser$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_ContentParser$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 99,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_mod_ContentParser$2 = registerClass(&class_mindustry_mod_ContentParser$2);

}

