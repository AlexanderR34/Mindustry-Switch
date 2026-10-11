#include "mindustry/ctype/ContentType.h"
#include "mindustry/ai/UnitStance.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/type/Weather.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/type/Item.h"
#include "java/lang/Enum.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "mindustry/type/TeamEntry.h"
#include "java/lang/String.h"
#include "mindustry/type/Planet.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/ContentType.h"
#include "java/lang/Class.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/type/SectorPreset.h"

extern "C" {

jobject SF_mindustry_ctype_ContentType_item;
jobject SF_mindustry_ctype_ContentType_block;
jobject SF_mindustry_ctype_ContentType_mech_UNUSED;
jobject SF_mindustry_ctype_ContentType_bullet;
jobject SF_mindustry_ctype_ContentType_liquid;
jobject SF_mindustry_ctype_ContentType_status;
jobject SF_mindustry_ctype_ContentType_unit;
jobject SF_mindustry_ctype_ContentType_weather;
jobject SF_mindustry_ctype_ContentType_effect_UNUSED;
jobject SF_mindustry_ctype_ContentType_sector;
jobject SF_mindustry_ctype_ContentType_loadout_UNUSED;
jobject SF_mindustry_ctype_ContentType_typeid_UNUSED;
jobject SF_mindustry_ctype_ContentType_error;
jobject SF_mindustry_ctype_ContentType_planet;
jobject SF_mindustry_ctype_ContentType_ammo_UNUSED;
jobject SF_mindustry_ctype_ContentType_team;
jobject SF_mindustry_ctype_ContentType_unitCommand;
jobject SF_mindustry_ctype_ContentType_unitStance;
jobject SF_mindustry_ctype_ContentType_all;
jobject SF_mindustry_ctype_ContentType_$VALUES;

void mark_mindustry_ctype_ContentType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ctype_ContentType_item)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_item)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_item, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_block)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_block)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_block, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_mech_UNUSED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_mech_UNUSED)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_mech_UNUSED, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_bullet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_bullet)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_bullet, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_liquid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_liquid)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_liquid, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_status)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_status)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_status, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_unit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_unit)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_unit, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_weather)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_weather)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_weather, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_effect_UNUSED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_effect_UNUSED)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_effect_UNUSED, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_sector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_sector)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_sector, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_loadout_UNUSED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_loadout_UNUSED)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_loadout_UNUSED, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_typeid_UNUSED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_typeid_UNUSED)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_typeid_UNUSED, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_error)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_error)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_error, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_planet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_planet)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_planet, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_ammo_UNUSED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_ammo_UNUSED)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_ammo_UNUSED, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_team)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_team)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_team, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_unitCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_unitCommand)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_unitCommand, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_unitStance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_unitStance)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_unitStance, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_all)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_all, mark, depth + 1);
		if (SF_mindustry_ctype_ContentType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ctype_ContentType_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_ctype_ContentType_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ctype_ContentType *) object;
	if (self->F_contentClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentClass)->clazz)->markFunction)((jobject) self->F_contentClass, mark, depth + 1);
	if (self->F_folderName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_folderName)->clazz)->markFunction)((jobject) self->F_folderName, mark, depth + 1);
}

jobject SM_mindustry_ctype_ContentType_values_R_Array1_mindustry_ctype_ContentType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/ContentType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ctype_ContentType(ctx);
	{
	LINE_NUMBER(10);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_ctype_ContentType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ctype_ContentType_valueOf_java_lang_String_R_mindustry_ctype_ContentType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/ContentType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ctype_ContentType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_ctype_ContentType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ctype_ContentType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_ctype_ContentType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/ContentType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ctype_ContentType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(35);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(36);
	((mindustry_ctype_ContentType *) NULL_CHECK((frame[0].o)))->F_contentClass = (jref) (jobject(nullptr));
	LINE_NUMBER(37);
	((mindustry_ctype_ContentType *) NULL_CHECK((frame[0].o)))->F_folderName = (jref) (((jobject) createStringLiteral(ctx, u8"unused"_j)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/ContentType:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ctype_ContentType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(40);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(41);
	((mindustry_ctype_ContentType *) NULL_CHECK((frame[0].o)))->F_contentClass = (jref) (frame[4].o);
	LINE_NUMBER(42);
	((mindustry_ctype_ContentType *) NULL_CHECK((frame[0].o)))->F_folderName = (jref) (frame[3].o);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ctype_ContentType_$values_R_Array1_mindustry_ctype_ContentType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/ContentType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ctype_ContentType(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ctype_ContentType, (18));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_mech_UNUSED;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_bullet;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_effect_UNUSED;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_sector;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_loadout_UNUSED;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_typeid_UNUSED;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_error;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_ammo_UNUSED;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_team;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unitCommand;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unitStance;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ctype_ContentType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/ContentType:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ctype_ContentType(ctx);
	{
	LINE_NUMBER(11);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item"_j))), (jint(0)), (((jobject) createStringLiteral(ctx, u8"items"_j))), (((jobject) &class_mindustry_type_Item)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_item = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"block"_j))), (jint(1)), (((jobject) createStringLiteral(ctx, u8"blocks"_j))), (((jobject) &class_mindustry_world_Block)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_block = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mech_UNUSED"_j))), (jint(2)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_mech_UNUSED = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bullet"_j))), (jint(3)), (((jobject) createStringLiteral(ctx, u8"bullets"_j))), (((jobject) &class_mindustry_entities_bullet_BulletType)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_bullet = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquid"_j))), (jint(4)), (((jobject) createStringLiteral(ctx, u8"liquids"_j))), (((jobject) &class_mindustry_type_Liquid)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_liquid = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"status"_j))), (jint(5)), (((jobject) createStringLiteral(ctx, u8"statuses"_j))), (((jobject) &class_mindustry_type_StatusEffect)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_status = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unit"_j))), (6), (((jobject) createStringLiteral(ctx, u8"units"_j))), (((jobject) &class_mindustry_type_UnitType)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_unit = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"weather"_j))), (7), (((jobject) createStringLiteral(ctx, u8"weather"_j))), (((jobject) &class_mindustry_type_Weather)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_weather = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"effect_UNUSED"_j))), (8));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_effect_UNUSED = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector"_j))), (9), (((jobject) createStringLiteral(ctx, u8"sectors"_j))), (((jobject) &class_mindustry_type_SectorPreset)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_sector = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"loadout_UNUSED"_j))), (10));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_loadout_UNUSED = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"typeid_UNUSED"_j))), (11));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_typeid_UNUSED = sp[0].o;
	LINE_NUMBER(23);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error"_j))), (12));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_error = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"planet"_j))), (13), (((jobject) createStringLiteral(ctx, u8"planets"_j))), (((jobject) &class_mindustry_type_Planet)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_planet = sp[0].o;
	LINE_NUMBER(25);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ammo_UNUSED"_j))), (14));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_ammo_UNUSED = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"team"_j))), (15), (((jobject) createStringLiteral(ctx, u8"teams"_j))), (((jobject) &class_mindustry_type_TeamEntry)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_team = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitCommand"_j))), (16), (((jobject) createStringLiteral(ctx, u8"unitCommands"_j))), (((jobject) &class_mindustry_ai_UnitCommand)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_unitCommand = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ctype_ContentType);
	init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitStance"_j))), (17), (((jobject) createStringLiteral(ctx, u8"unitStances"_j))), (((jobject) &class_mindustry_ai_UnitStance)));
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_unitStance = sp[0].o;
	LINE_NUMBER(10);
	sp[0].o = (jobject)SM_mindustry_ctype_ContentType_$values_R_Array1_mindustry_ctype_ContentType(ctx);
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_$VALUES = sp[0].o;
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_mindustry_ctype_ContentType_values_R_Array1_mindustry_ctype_ContentType(ctx);
	clinit_mindustry_ctype_ContentType(ctx);
	SF_mindustry_ctype_ContentType_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ctype_ContentType;
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

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field contentClass
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[19]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ctype_ContentType[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "item", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_item, "Lmindustry/ctype/ContentType;", 16409 },
	{ "block", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_block, "Lmindustry/ctype/ContentType;", 16409 },
	{ "mech_UNUSED", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_mech_UNUSED, "Lmindustry/ctype/ContentType;", 16409 },
	{ "bullet", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_bullet, "Lmindustry/ctype/ContentType;", 16409 },
	{ "liquid", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_liquid, "Lmindustry/ctype/ContentType;", 16409 },
	{ "status", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_status, "Lmindustry/ctype/ContentType;", 16409 },
	{ "unit", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_unit, "Lmindustry/ctype/ContentType;", 16409 },
	{ "weather", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_weather, "Lmindustry/ctype/ContentType;", 16409 },
	{ "effect_UNUSED", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_effect_UNUSED, "Lmindustry/ctype/ContentType;", 16409 },
	{ "sector", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_sector, "Lmindustry/ctype/ContentType;", 16409 },
	{ "loadout_UNUSED", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_loadout_UNUSED, "Lmindustry/ctype/ContentType;", 16409 },
	{ "typeid_UNUSED", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_typeid_UNUSED, "Lmindustry/ctype/ContentType;", 16409 },
	{ "error", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_error, "Lmindustry/ctype/ContentType;", 16409 },
	{ "planet", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_planet, "Lmindustry/ctype/ContentType;", 16409 },
	{ "ammo_UNUSED", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_ammo_UNUSED, "Lmindustry/ctype/ContentType;", 16409 },
	{ "team", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_team, "Lmindustry/ctype/ContentType;", 16409 },
	{ "unitCommand", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_unitCommand, "Lmindustry/ctype/ContentType;", 16409 },
	{ "unitStance", &class_mindustry_ctype_ContentType, (intptr_t) &SF_mindustry_ctype_ContentType_unitStance, "Lmindustry/ctype/ContentType;", 16409 },
	{ "all", getArrayClass(&class_mindustry_ctype_ContentType, 1), (intptr_t) &SF_mindustry_ctype_ContentType_all, "[Lmindustry/ctype/ContentType;", 25 },
	{ "contentClass", &class_java_lang_Class, offsetof(mindustry_ctype_ContentType, F_contentClass), "Ljava/lang/Class;", 17 },
	{ "folderName", &class_java_lang_String, offsetof(mindustry_ctype_ContentType, F_folderName), "Ljava/lang/String;", 17 },
	{ "$VALUES", getArrayClass(&class_mindustry_ctype_ContentType, 1), (intptr_t) &SF_mindustry_ctype_ContentType_$VALUES, "[Lmindustry/ctype/ContentType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_ctype_ContentType_values_R_Array1_mindustry_ctype_ContentType, 0, "()[Lmindustry/ctype/ContentType;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_ctype_ContentType_valueOf_java_lang_String_R_mindustry_ctype_ContentType, 0, "(Ljava/lang/String;)Lmindustry/ctype/ContentType;", 9 },
	{ "<init>", (intptr_t) init_mindustry_ctype_ContentType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_ctype_ContentType_java_lang_String_int_java_lang_String_java_lang_Class, 0, "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Class;)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_ctype_ContentType_$values_R_Array1_mindustry_ctype_ContentType, 0, "()[Lmindustry/ctype/ContentType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ctype_ContentType, 0, "()V", 8 },
};

Class class_mindustry_ctype_ContentType{
		.nativeName = (intptr_t) "mindustry/ctype/ContentType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_ctype_ContentType),
		.classVtable = (intptr_t) vtable_mindustry_ctype_ContentType,
		.staticInitializer = (intptr_t) clinit_mindustry_ctype_ContentType,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ctype_ContentType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ctype_ContentType = registerClass(&class_mindustry_ctype_ContentType);

}
