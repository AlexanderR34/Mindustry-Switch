#include "mindustry/game/SpawnGroup.h"
#include "java/lang/Integer.h"
#include "java/lang/Float.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "arc/struct/StringMap.h"
#include "arc/util/serialization/Json.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/content/UnitTypes.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "mindustry/game/SpawnGroup_invoke_arc_func_Cons_1.h"
#include "java/lang/Math.h"
#include "arc/util/serialization/Json_JsonSerializable.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "mindustry/game/SpawnGroup_invoke_arc_func_Boolf_1.h"
#include "java/lang/Cloneable.h"
#include "mindustry/gen/Payloadc.h"
#include "mindustry/game/SpawnGroup_invoke_arc_func_Func_2.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/SpawnGroup_invoke_arc_func_Func_3.h"
#include "arc/util/Structs.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/type/Item.h"
#include "java/lang/CloneNotSupportedException.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/SpawnGroup.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/gen/Itemsc.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/io/versions/LegacyIO.h"
#include "mindustry/gen/Statusc.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "arc/struct/ObjectMap.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"

extern "C" {

jint SF_mindustry_game_SpawnGroup_never;

void mark_mindustry_game_SpawnGroup(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_SpawnGroup *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_payloads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payloads)->clazz)->markFunction)((jobject) self->F_payloads, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
}

void clinit_mindustry_game_SpawnGroup(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_game_SpawnGroup_never = jint(2147483647);
}

void init_mindustry_game_SpawnGroup_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SpawnGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(28);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_end = (jint(2147483647));
	LINE_NUMBER(32);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing = (jint(1));
	LINE_NUMBER(34);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max = (40);
	LINE_NUMBER(36);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitScaling = (jfloat(2,147484e+09f));
	LINE_NUMBER(38);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shields = (jfloat(0));
	LINE_NUMBER(40);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shieldScaling = (jfloat(0));
	LINE_NUMBER(42);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount = (jint(1));
	LINE_NUMBER(44);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn = (jint(-1));
	LINE_NUMBER(55);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_SpawnGroup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SpawnGroup(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(28);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_end = (jint(2147483647));
	LINE_NUMBER(32);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing = (jint(1));
	LINE_NUMBER(34);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max = (40);
	LINE_NUMBER(36);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitScaling = (jfloat(2,147484e+09f));
	LINE_NUMBER(38);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shields = (jfloat(0));
	LINE_NUMBER(40);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shieldScaling = (jfloat(0));
	LINE_NUMBER(42);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount = (jint(1));
	LINE_NUMBER(44);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn = (jint(-1));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_SpawnGroup_canSpawn_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:canSpawn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(63);
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn) == (jint(-1))) goto label_1;
	}
	{
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn) != (frame[1].i)) goto label_2;
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

jint M_mindustry_game_SpawnGroup_getSpawned_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:getSpawned", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(68);
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing) != 0) goto label_1;
	}
	{
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(69);
	if ((frame[1].i) < ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin)) goto label_2;
	}
	{
	if ((frame[1].i) > ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_end)) goto label_2;
	}
	{
	if ((((frame[1].i) - ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin)) % ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing)) == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount) + (jint(((jfloat((((frame[1].i) - ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin)) / ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing)))) / ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitScaling))))), ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_SpawnGroup_getShield_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:getShield", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shields) + (((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shieldScaling) * (jfloat(((frame[1].i) - ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin)))))), (jfloat(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:createUnit", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit])(ctx, sp[0].o, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_effect;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_effect;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, (jfloat(999999.0f)));
	}
label_2:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	sp[2].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_gen_Unit_addItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addItem_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount));
	}
label_4:;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[7].o;
	jfloat temp0 = (jfloat)((func_mindustry_game_SpawnGroup_getShield_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_SpawnGroup_getShield_int_R_float])(ctx, (frame[0].o), (frame[5].i));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp0;
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_payloads;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_gen_Payloadc)) == 0) goto label_7;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[7].o)));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(97);
	if ((frame[10].o) != nullptr) goto label_11;
	}
	goto label_9;
label_11:;
	{
	LINE_NUMBER(98);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[7].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(99);
	((func_mindustry_gen_Payloadc_pickup_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_pickup_mindustry_gen_Unit, (frame[8].o)))(ctx, (frame[8].o), (frame[11].o));
	LINE_NUMBER(100);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:createUnit", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(0);
	jint temp3 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SpawnGroup_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_game_SpawnGroup_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_game_SpawnGroup_invoke_arc_func_Cons_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SpawnGroup_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"type"_j));
	sp[2].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[2].o))->F_name;
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(115);
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin) == 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"begin"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	{
	LINE_NUMBER(116);
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_end) == (jint(2147483647))) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"end"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_end));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_4:;
	{
	LINE_NUMBER(117);
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing) == (jint(1))) goto label_5;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"spacing"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(118);
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max) == (40)) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"max"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	{
	LINE_NUMBER(119);
	if ((floatCompare(((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitScaling), (jfloat(2,147484e+09f)), -1)) == 0) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"scaling"_j));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitScaling));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_7:;
	{
	LINE_NUMBER(120);
	if ((floatCompare(((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shields), (jfloat(0)), -1)) == 0) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shields"_j));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shields));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_8:;
	{
	LINE_NUMBER(121);
	if ((floatCompare(((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shieldScaling), (jfloat(0)), -1)) == 0) goto label_9;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shieldScaling"_j));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shieldScaling));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(122);
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount) == (jint(1))) goto label_10;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"amount"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_10:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_effect;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"effect"_j));
	sp[2].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_effect;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[2].o))->F_name;
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_11:;
	{
	LINE_NUMBER(124);
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn) == (jint(-1))) goto label_12;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"spawn"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spawn));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_12:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_payloads;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_payloads;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"payloads"_j));
	sp[2].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_payloads;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SpawnGroup_invoke_arc_func_Func_2(ctx);
		auto proxy = (mindustry_game_SpawnGroup_invoke_arc_func_Func_2 *) gcAlloc(ctx, &class_mindustry_game_SpawnGroup_invoke_arc_func_Func_2);
		sp[3].o = (jobject) proxy;
	}
	sp[2].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[2].o, (((jobject) &class_java_lang_String)));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_13:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) <= 0) goto label_14;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"items"_j));
	sp[2].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_items;
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_14:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"team"_j));
	sp[2].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_team;
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[2].o))->F_id));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_15:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_SpawnGroup_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8"dagger"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_io_versions_LegacyIO(ctx);
	sp[2].o = (jobject)SF_mindustry_io_versions_LegacyIO_unitMap;
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (frame[3].o), (frame[3].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_unit_java_lang_String_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unit_java_lang_String_R_mindustry_type_UnitType])(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_internal) == 0) goto label_4;
	}
label_3:;
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"begin"_j))), (jint(0)));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_begin = temp0;
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"end"_j))), (jint(2147483647)));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_end = temp1;
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"spacing"_j))), (jint(1)));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_spacing = temp2;
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"max"_j))), (40));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_max = temp3;
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"scaling"_j))), (jfloat(2,147484e+09f)));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_unitScaling = temp4;
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"shields"_j))), (jfloat(0)));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_shields = temp5;
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"shieldScaling"_j))), (jfloat(0)));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_shieldScaling = temp6;
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"amount"_j))), (jint(1)));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_unitAmount = temp7;
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"spawn"_j))), (jint(-1)));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_spawn = temp8;
	LINE_NUMBER(145);
	jint temp9 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"payloads"_j))));
	if (temp9 == 0) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) getArrayClass(&class_java_lang_String, 1));
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"payloads"_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[1].o)));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_SpawnGroup_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_game_SpawnGroup_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_game_SpawnGroup_invoke_arc_func_Func_3);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_SpawnGroup_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_game_SpawnGroup_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_game_SpawnGroup_invoke_arc_func_Boolf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_payloads = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"items"_j))));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) &class_mindustry_type_ItemStack);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"items"_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_items = (jref) (checkCast(ctx, &class_mindustry_type_ItemStack, sp[1].o));
	}
label_15:;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"team"_j))));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"team"_j))));
	sp[1].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, temp0);
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(151);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"effect"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"effect"_j))));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_isNumber_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"effect"_j))), (jint(-1)));
	if (temp0 != (8)) goto label_17;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_boss;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"effect"_j))));
	sp += 2;
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"effect"_j))));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"effect"_j))), (((jobject) createStringLiteral(ctx, u8"none"_j))));
	sp += 1;
	goto label_21;
	}
label_20:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"none"_j));
label_21:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_mindustry_core_ContentLoader_statusEffect_java_lang_String_R_mindustry_type_StatusEffect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_statusEffect_java_lang_String_R_mindustry_type_StatusEffect])(ctx, sp[0].o, sp[1].o);
	sp++;
	sp -= 2;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
label_19:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_SpawnGroup_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:toString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	jint temp0 = (jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_end;
	jint temp1 = (jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin;
	jint temp2 = (jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing;
	jint temp3 = (jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp4 = (jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitScaling;
	jint temp5 = (jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_effect;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_items;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"SpawnGroup{type=\u0001, end=\u0001, begin=\u0001, spacing=\u0001, max=\u0001, unitScaling=\u0001, unitAmount=\u0001, effect=\u0001, items=\u0001}"_j.string, 9, sp[0].o, boxInteger(ctx, temp0), boxInteger(ctx, temp1), boxInteger(ctx, temp2), boxInteger(ctx, temp3), boxFloat(ctx, temp4), boxInteger(ctx, temp5), sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = checkCast(ctx, &class_mindustry_game_SpawnGroup, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(176);
	frame[1].o = sp[0].o;
	LINE_NUMBER(177);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"If you see this, what did you even do?"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_SpawnGroup_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(184);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(185);
	frame[2].o = (checkCast(ctx, &class_mindustry_game_SpawnGroup, (frame[1].o)));
	LINE_NUMBER(186);
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_end) != ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_end)) goto label_5;
	}
	{
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin) != ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_begin)) goto label_5;
	}
	{
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing) != ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_spacing)) goto label_5;
	}
	{
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max) != ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_max)) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_unitScaling;
	jfloat temp1 = (jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitScaling;
	LINE_NUMBER(187);
	jint temp2 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, temp0, temp1);
	if (temp2 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_shields), ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shields));
	if (temp0 != 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_shieldScaling;
	jfloat temp1 = (jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shieldScaling;
	LINE_NUMBER(188);
	jint temp2 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, temp0, temp1);
	if (temp2 != 0) goto label_5;
	}
	{
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount) != ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_unitAmount)) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_type;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_effect;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_effect;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_items;
	LINE_NUMBER(189);
	jint temp0 = (jint)SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_9;
label_5:;
	INST_ICONST(0);
label_9:;
	LINE_NUMBER(186);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_game_SpawnGroup_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (11));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_end));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitScaling));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shields));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shieldScaling));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_effect;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = (jint)SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp11;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_SpawnGroup_lambda$read$0_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:lambda$read$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SpawnGroup(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(145);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_game_SpawnGroup_lambda$write$0_mindustry_type_UnitType_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:lambda$write$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SpawnGroup(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_SpawnGroup_lambda$createUnit$0_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SpawnGroup:lambda$createUnit$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SpawnGroup(ctx);
	frame[0].o = param0;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_SpawnGroup;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field payloads
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field effect
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field items
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field team
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_game_SpawnGroup[] {
	(void *) M_mindustry_game_SpawnGroup_hashCode_R_int,
	(void *) M_mindustry_game_SpawnGroup_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_SpawnGroup_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_SpawnGroup_write_arc_util_serialization_Json,
	(void *) M_mindustry_game_SpawnGroup_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_game_SpawnGroup_canSpawn_int_R_boolean,
	(void *) M_mindustry_game_SpawnGroup_getSpawned_int_R_int,
	(void *) M_mindustry_game_SpawnGroup_getShield_int_R_float,
	(void *) M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit,
	(void *) M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit,
	(void *) M_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup,
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
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
	{ "canSpawn", "(I)Z" },
	{ "getSpawned", "(I)I" },
	{ "getShield", "(I)F" },
	{ "createUnit", "(Lmindustry/game/Team;FFFILarc/func/Cons;)Lmindustry/gen/Unit;" },
	{ "createUnit", "(Lmindustry/game/Team;I)Lmindustry/gen/Unit;" },
	{ "copy", "()Lmindustry/game/SpawnGroup;" },
};

static jclass interfaces[] { &class_arc_util_serialization_Json$JsonSerializable, &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "never", &class_int, (intptr_t) &SF_mindustry_game_SpawnGroup_never, "I", 25 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_game_SpawnGroup, F_type), "Lmindustry/type/UnitType;", 1 },
	{ "end", &class_int, offsetof(mindustry_game_SpawnGroup, F_end), "I", 1 },
	{ "begin", &class_int, offsetof(mindustry_game_SpawnGroup, F_begin), "I", 1 },
	{ "spacing", &class_int, offsetof(mindustry_game_SpawnGroup, F_spacing), "I", 1 },
	{ "max", &class_int, offsetof(mindustry_game_SpawnGroup, F_max), "I", 1 },
	{ "unitScaling", &class_float, offsetof(mindustry_game_SpawnGroup, F_unitScaling), "F", 1 },
	{ "shields", &class_float, offsetof(mindustry_game_SpawnGroup, F_shields), "F", 1 },
	{ "shieldScaling", &class_float, offsetof(mindustry_game_SpawnGroup, F_shieldScaling), "F", 1 },
	{ "unitAmount", &class_int, offsetof(mindustry_game_SpawnGroup, F_unitAmount), "I", 1 },
	{ "spawn", &class_int, offsetof(mindustry_game_SpawnGroup, F_spawn), "I", 1 },
	{ "payloads", &class_arc_struct_Seq, offsetof(mindustry_game_SpawnGroup, F_payloads), "Larc/struct/Seq;", 1 },
	{ "effect", &class_mindustry_type_StatusEffect, offsetof(mindustry_game_SpawnGroup, F_effect), "Lmindustry/type/StatusEffect;", 1 },
	{ "items", &class_mindustry_type_ItemStack, offsetof(mindustry_game_SpawnGroup, F_items), "Lmindustry/type/ItemStack;", 1 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_game_SpawnGroup, F_team), "Lmindustry/game/Team;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_SpawnGroup_mindustry_type_UnitType, 0, "(Lmindustry/type/UnitType;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_SpawnGroup, 0, "()V", 1 },
	{ "canSpawn", (intptr_t) M_mindustry_game_SpawnGroup_canSpawn_int_R_boolean, VTABLE_mindustry_game_SpawnGroup_canSpawn_int_R_boolean, "(I)Z", 1 },
	{ "getSpawned", (intptr_t) M_mindustry_game_SpawnGroup_getSpawned_int_R_int, VTABLE_mindustry_game_SpawnGroup_getSpawned_int_R_int, "(I)I", 1 },
	{ "getShield", (intptr_t) M_mindustry_game_SpawnGroup_getShield_int_R_float, VTABLE_mindustry_game_SpawnGroup_getShield_int_R_float, "(I)F", 1 },
	{ "createUnit", (intptr_t) M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit, VTABLE_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit, "(Lmindustry/game/Team;FFFILarc/func/Cons;)Lmindustry/gen/Unit;", 1 },
	{ "createUnit", (intptr_t) M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit, VTABLE_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit, "(Lmindustry/game/Team;I)Lmindustry/gen/Unit;", 1 },
	{ "write", (intptr_t) M_mindustry_game_SpawnGroup_write_arc_util_serialization_Json, VTABLE_mindustry_game_SpawnGroup_write_arc_util_serialization_Json, "(Larc/util/serialization/Json;)V", 1 },
	{ "read", (intptr_t) M_mindustry_game_SpawnGroup_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, VTABLE_mindustry_game_SpawnGroup_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V", 1 },
	{ "toString", (intptr_t) M_mindustry_game_SpawnGroup_toString_R_java_lang_String, VTABLE_mindustry_game_SpawnGroup_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "copy", (intptr_t) M_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup, VTABLE_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup, "()Lmindustry/game/SpawnGroup;", 1 },
	{ "equals", (intptr_t) M_mindustry_game_SpawnGroup_equals_java_lang_Object_R_boolean, VTABLE_mindustry_game_SpawnGroup_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_mindustry_game_SpawnGroup_hashCode_R_int, VTABLE_mindustry_game_SpawnGroup_hashCode_R_int, "()I", 1 },
	{ "lambda$read$0", (intptr_t) SM_mindustry_game_SpawnGroup_lambda$read$0_mindustry_type_UnitType_R_boolean, 0, "(Lmindustry/type/UnitType;)Z", 4106 },
	{ "lambda$write$0", (intptr_t) SM_mindustry_game_SpawnGroup_lambda$write$0_mindustry_type_UnitType_R_java_lang_String, 0, "(Lmindustry/type/UnitType;)Ljava/lang/String;", 4106 },
	{ "lambda$createUnit$0", (intptr_t) SM_mindustry_game_SpawnGroup_lambda$createUnit$0_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
};

Class class_mindustry_game_SpawnGroup{
		.nativeName = (intptr_t) "mindustry/game/SpawnGroup",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_SpawnGroup),
		.classVtable = (intptr_t) vtable_mindustry_game_SpawnGroup,
		.staticInitializer = (intptr_t) clinit_mindustry_game_SpawnGroup,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_SpawnGroup,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_SpawnGroup = registerClass(&class_mindustry_game_SpawnGroup);

}
