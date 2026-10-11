#include "mindustry/io/TypeIO.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/io/TypeIO_UnitBox.h"
#include "mindustry/io/TypeIO_BuildingBox.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/ai/types/GroundAI.h"
#include "arc/graphics/Color.h"
#include "java/io/DataOutput.h"
#include "arc/util/serialization/Json.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/func/Boolf.h"
#include "mindustry/io/TypeIO_ClientBuildPlans.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "arc/util/ArcRuntimeException.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/game/MapObjectives.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "java/lang/Double.h"
#include "arc/util/io/Writes.h"
#include "java/lang/Boolean.h"
#include "java/nio/charset/Charset.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "mindustry/game/Rules.h"
#include "mindustry/entities/abilities/EmptyDataAbility.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/EntityMapping.h"
#include "mindustry/entities/units/StatusEntry.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "java/lang/Number.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/net/Administration_TraceInfo.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/ai/types/CommandAI.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "mindustry/io/JsonIO.h"
#include "java/lang/Long.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "arc/util/io/Reads.h"
#include "mindustry/io/TypeIO_invoke_arc_func_Boolf_1.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/type/ItemStack.h"
#include "arc/audio/Sound.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LMarkerControl.h"
#include "mindustry/logic/LAccess.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "arc/math/geom/Position.h"
#include "mindustry/net/Packets_AdminAction.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/ai/UnitStance.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/ai/types/AssemblerAI.h"
#include "mindustry/entities/Units_UnitSyncContainer.h"
#include "arc/struct/Queue.h"
#include "mindustry/type/Item.h"
#include "java/io/DataInput.h"
#include "mindustry/net/Packets_KickReason.h"
#include "mindustry/io/TypeIO_ContentMapper.h"
#include "mindustry/io/TypeIO_Boxed.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/gen/BlockUnitc.h"
#include "java/lang/RuntimeException.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/type/LiquidStack.h"
#include "java/lang/Float.h"
#include "mindustry/ui/builder/MenuResult.h"
#include "arc/struct/IntSeq.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/type/Weather.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/type/StatusEffect.h"
#include "java/lang/Enum.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"

extern "C" {

jbyte SF_mindustry_io_TypeIO_nullType;
jbyte SF_mindustry_io_TypeIO_integerType;
jbyte SF_mindustry_io_TypeIO_longType;
jbyte SF_mindustry_io_TypeIO_floatType;
jbyte SF_mindustry_io_TypeIO_stringType;
jbyte SF_mindustry_io_TypeIO_contentType;
jbyte SF_mindustry_io_TypeIO_intSeqType;
jbyte SF_mindustry_io_TypeIO_point2Type;
jbyte SF_mindustry_io_TypeIO_point2ArrayType;
jbyte SF_mindustry_io_TypeIO_techNodeType;
jbyte SF_mindustry_io_TypeIO_booleanType;
jbyte SF_mindustry_io_TypeIO_doubleType;
jbyte SF_mindustry_io_TypeIO_buildingType;
jbyte SF_mindustry_io_TypeIO_lAccessType;
jbyte SF_mindustry_io_TypeIO_byteArrayType;
jbyte SF_mindustry_io_TypeIO_legacyType;
jbyte SF_mindustry_io_TypeIO_booleanArrayType;
jbyte SF_mindustry_io_TypeIO_unitType;
jbyte SF_mindustry_io_TypeIO_vec2ArrayType;
jbyte SF_mindustry_io_TypeIO_vec2Type;
jbyte SF_mindustry_io_TypeIO_teamType;
jbyte SF_mindustry_io_TypeIO_intArrayType;
jbyte SF_mindustry_io_TypeIO_objectArrayType;
jbyte SF_mindustry_io_TypeIO_unitCommandType;
jint SF_mindustry_io_TypeIO_maxArraySize;
jint SF_mindustry_io_TypeIO_maxByteArraySize;
jint SF_mindustry_io_TypeIO_maxSyncedPlans;
jobject SF_mindustry_io_TypeIO_noMounts;
jobject SF_mindustry_io_TypeIO_noAbilities;

void mark_mindustry_io_TypeIO(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_io_TypeIO_noMounts)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_TypeIO_noMounts)->clazz)->markFunction)((jobject) SF_mindustry_io_TypeIO_noMounts, mark, depth + 1);
		if (SF_mindustry_io_TypeIO_noAbilities)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_TypeIO_noAbilities)->clazz)->markFunction)((jobject) SF_mindustry_io_TypeIO_noAbilities, mark, depth + 1);
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
	auto self = (mindustry_io_TypeIO *) object;
}

void init_mindustry_io_TypeIO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[35];
	auto stack = &frame[32];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeObject", 35 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(73);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(74);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(0)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(75);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Integer)) == 0) goto label_4;
	}
	{
	frame[2].o = (checkCast(ctx, &class_java_lang_Integer, (frame[1].o)));
	LINE_NUMBER(76);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(78);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Long)) == 0) goto label_7;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_lang_Long, (frame[1].o)));
	LINE_NUMBER(79);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (frame[3].o));
	((func_arc_util_io_Writes_l_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_l_long])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(81);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Float)) == 0) goto label_10;
	}
	{
	frame[4].o = (checkCast(ctx, &class_java_lang_Float, (frame[1].o)));
	LINE_NUMBER(82);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (frame[4].o));
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_10:;
	{
	LINE_NUMBER(84);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_13;
	}
	{
	frame[5].o = (checkCast(ctx, &class_java_lang_String, (frame[1].o)));
	LINE_NUMBER(85);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(86);
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, (frame[0].o), (frame[5].o));
	goto label_3;
	}
label_13:;
	{
	LINE_NUMBER(87);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ctype_Content)) == 0) goto label_16;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_ctype_Content, (frame[1].o)));
	LINE_NUMBER(88);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte(temp0)));
	LINE_NUMBER(90);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[6].o)))->F_id));
	goto label_3;
	}
label_16:;
	{
	LINE_NUMBER(91);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_IntSeq)) == 0) goto label_20;
	}
	{
	frame[7].o = (checkCast(ctx, &class_arc_struct_IntSeq, (frame[1].o)));
	LINE_NUMBER(92);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[7].o)))->F_size) <= (1000)) goto label_22;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Array size too large: \u0001"_j.string, 1, boxInteger(ctx, ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[7].o)))->F_size)));
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(93);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (6));
	LINE_NUMBER(94);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (jshort(((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[7].o)))->F_size))));
	LINE_NUMBER(95);
	frame[28].i = (jint(0));
	}
label_25:;
	{
	if ((frame[28].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[7].o)))->F_size)) goto label_26;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[7].o)))->F_items;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[28].i))));
	LINE_NUMBER(95);
	INST_IINC(28, 1);
	goto label_25;
	}
label_26:;
	goto label_3;
label_20:;
	{
	LINE_NUMBER(98);
	if ((isInstance(ctx, (frame[1].o), &class_arc_math_geom_Point2)) == 0) goto label_29;
	}
	{
	frame[8].o = (checkCast(ctx, &class_arc_math_geom_Point2, (frame[1].o)));
	LINE_NUMBER(99);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (7));
	LINE_NUMBER(100);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_x));
	LINE_NUMBER(101);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_y));
	goto label_3;
	}
label_29:;
	{
	LINE_NUMBER(102);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_arc_math_geom_Point2, 1))) == 0) goto label_33;
	}
	{
	frame[9].o = (checkCast(ctx, getArrayClass(&class_arc_math_geom_Point2, 1), (frame[1].o)));
	LINE_NUMBER(104);
	if ((((jarray) nullCheck(ctx, (frame[9].o)))->length) <= (255)) goto label_35;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Array size too large: \u0001"_j.string, 1, boxInteger(ctx, (((jarray) nullCheck(ctx, (frame[9].o)))->length)));
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_35:;
	{
	LINE_NUMBER(105);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (8));
	LINE_NUMBER(106);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[9].o)))->length));
	LINE_NUMBER(107);
	frame[28].o = (frame[9].o);
	frame[29].i = (((jarray) nullCheck(ctx, (frame[28].o)))->length);
	frame[30].i = (jint(0));
	}
label_38:;
	{
	if ((frame[30].i) >= (frame[29].i)) goto label_39;
	}
	{
	frame[31].o = ((jobject)ARRAY_ACCESS(jobject, (frame[28].o), (frame[30].i)));
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_math_geom_Point2_pack_R_int) ((void **) nullCheck(ctx, (frame[31].o))->vtable)[VTABLE_arc_math_geom_Point2_pack_R_int])(ctx, (frame[31].o));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(107);
	INST_IINC(30, 1);
	goto label_38;
	}
label_39:;
	goto label_3;
label_33:;
	{
	LINE_NUMBER(110);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_content_TechTree$TechNode)) == 0) goto label_42;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, (frame[1].o)));
	LINE_NUMBER(111);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (9));
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[10].o)))->F_content;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte(temp0)));
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[10].o)))->F_content;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	goto label_3;
	}
label_42:;
	{
	LINE_NUMBER(114);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Boolean)) == 0) goto label_46;
	}
	{
	frame[11].o = (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o)));
	LINE_NUMBER(115);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (10));
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[11].o));
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_46:;
	{
	LINE_NUMBER(117);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Double)) == 0) goto label_49;
	}
	{
	frame[12].o = (checkCast(ctx, &class_java_lang_Double, (frame[1].o)));
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)((func_java_lang_Double_doubleValue_R_double) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_Double_doubleValue_R_double])(ctx, (frame[12].o));
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_double(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_49:;
	{
	LINE_NUMBER(119);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Building)) == 0) goto label_51;
	}
	{
	frame[13].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[1].o)));
	LINE_NUMBER(120);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (12));
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[13].o));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_51:;
	{
	LINE_NUMBER(122);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_io_TypeIO$BuildingBox)) == 0) goto label_54;
	}
	{
	frame[14].o = (checkCast(ctx, &class_mindustry_io_TypeIO$BuildingBox, (frame[1].o)));
	LINE_NUMBER(123);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (12));
	LINE_NUMBER(124);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((mindustry_io_TypeIO$BuildingBox *) NULL_CHECK((frame[14].o)))->F_pos));
	goto label_3;
	}
label_54:;
	{
	LINE_NUMBER(125);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_logic_LAccess)) == 0) goto label_57;
	}
	{
	frame[15].o = (checkCast(ctx, &class_mindustry_logic_LAccess, (frame[1].o)));
	LINE_NUMBER(126);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (13));
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[15].o));
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_57:;
	{
	LINE_NUMBER(128);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_byte, 1))) == 0) goto label_60;
	}
	{
	frame[16].o = (checkCast(ctx, getArrayClass(&class_byte, 1), (frame[1].o)));
	LINE_NUMBER(129);
	if ((((jarray) nullCheck(ctx, (frame[16].o)))->length) <= (jint(40000))) goto label_62;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Array size too large: \u0001"_j.string, 1, boxInteger(ctx, (((jarray) nullCheck(ctx, (frame[16].o)))->length)));
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_62:;
	{
	LINE_NUMBER(130);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (14));
	LINE_NUMBER(131);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[16].o)))->length));
	LINE_NUMBER(132);
	((func_arc_util_io_Writes_b_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_Array1_byte])(ctx, (frame[0].o), (frame[16].o));
	goto label_3;
	}
label_60:;
	{
	LINE_NUMBER(133);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_boolean, 1))) == 0) goto label_65;
	}
	{
	frame[17].o = (checkCast(ctx, getArrayClass(&class_boolean, 1), (frame[1].o)));
	LINE_NUMBER(134);
	if ((((jarray) nullCheck(ctx, (frame[17].o)))->length) <= (1000)) goto label_67;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Array size too large: \u0001"_j.string, 1, boxInteger(ctx, (((jarray) nullCheck(ctx, (frame[17].o)))->length)));
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_67:;
	{
	LINE_NUMBER(136);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (16));
	LINE_NUMBER(137);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[17].o)))->length));
	LINE_NUMBER(138);
	frame[28].o = (frame[17].o);
	frame[29].i = (((jarray) nullCheck(ctx, (frame[28].o)))->length);
	frame[30].i = (jint(0));
	}
label_70:;
	{
	if ((frame[30].i) >= (frame[29].i)) goto label_71;
	}
	{
	frame[31].i = ((jint)ARRAY_ACCESS(jbyte, (frame[28].o), (frame[30].i)));
	LINE_NUMBER(139);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[0].o), (frame[31].i));
	LINE_NUMBER(138);
	INST_IINC(30, 1);
	goto label_70;
	}
label_71:;
	goto label_3;
label_65:;
	{
	LINE_NUMBER(141);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Unit)) == 0) goto label_74;
	}
	{
	frame[18].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[1].o)));
	LINE_NUMBER(142);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (17));
	LINE_NUMBER(143);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[18].o)))->F_id));
	goto label_3;
	}
label_74:;
	{
	LINE_NUMBER(144);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_io_TypeIO$UnitBox)) == 0) goto label_77;
	}
	{
	frame[19].o = (checkCast(ctx, &class_mindustry_io_TypeIO$UnitBox, (frame[1].o)));
	LINE_NUMBER(145);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (17));
	LINE_NUMBER(146);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((mindustry_io_TypeIO$UnitBox *) NULL_CHECK((frame[19].o)))->F_id));
	goto label_3;
	}
label_77:;
	{
	LINE_NUMBER(147);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_arc_math_geom_Vec2, 1))) == 0) goto label_80;
	}
	{
	frame[20].o = (checkCast(ctx, getArrayClass(&class_arc_math_geom_Vec2, 1), (frame[1].o)));
	LINE_NUMBER(148);
	if ((((jarray) nullCheck(ctx, (frame[20].o)))->length) <= (1000)) goto label_82;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Array size too large: \u0001"_j.string, 1, boxInteger(ctx, (((jarray) nullCheck(ctx, (frame[20].o)))->length)));
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_82:;
	{
	LINE_NUMBER(150);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (18));
	LINE_NUMBER(151);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[20].o)))->length));
	LINE_NUMBER(152);
	frame[28].o = (frame[20].o);
	frame[29].i = (((jarray) nullCheck(ctx, (frame[28].o)))->length);
	frame[30].i = (jint(0));
	}
label_85:;
	{
	if ((frame[30].i) >= (frame[29].i)) goto label_86;
	}
	{
	frame[31].o = ((jobject)ARRAY_ACCESS(jobject, (frame[28].o), (frame[30].i)));
	LINE_NUMBER(153);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[31].o)))->F_x));
	LINE_NUMBER(154);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[31].o)))->F_y));
	LINE_NUMBER(152);
	INST_IINC(30, 1);
	goto label_85;
	}
label_86:;
	goto label_3;
label_80:;
	{
	LINE_NUMBER(156);
	if ((isInstance(ctx, (frame[1].o), &class_arc_math_geom_Vec2)) == 0) goto label_90;
	}
	{
	frame[21].o = (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o)));
	LINE_NUMBER(157);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (19));
	LINE_NUMBER(158);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[21].o)))->F_x));
	LINE_NUMBER(159);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[21].o)))->F_y));
	goto label_3;
	}
label_90:;
	{
	LINE_NUMBER(160);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_game_Team)) == 0) goto label_94;
	}
	{
	frame[22].o = (checkCast(ctx, &class_mindustry_game_Team, (frame[1].o)));
	LINE_NUMBER(161);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (20));
	LINE_NUMBER(162);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), ((jint)((mindustry_game_Team *) NULL_CHECK((frame[22].o)))->F_id));
	goto label_3;
	}
label_94:;
	{
	LINE_NUMBER(163);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_int, 1))) == 0) goto label_97;
	}
	{
	frame[23].o = (checkCast(ctx, getArrayClass(&class_int, 1), (frame[1].o)));
	LINE_NUMBER(164);
	if ((((jarray) nullCheck(ctx, (frame[23].o)))->length) <= (1000)) goto label_99;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Array size too large: \u0001"_j.string, 1, boxInteger(ctx, (((jarray) nullCheck(ctx, (frame[23].o)))->length)));
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_99:;
	{
	LINE_NUMBER(166);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (21));
	LINE_NUMBER(167);
	SM_mindustry_io_TypeIO_writeInts_arc_util_io_Writes_Array1_int(ctx, (frame[0].o), (frame[23].o));
	goto label_3;
	}
label_97:;
	{
	LINE_NUMBER(168);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_java_lang_Object, 1))) == 0) goto label_101;
	}
	{
	frame[24].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[1].o)));
	LINE_NUMBER(169);
	if ((((jarray) nullCheck(ctx, (frame[24].o)))->length) <= (1000)) goto label_103;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Array size too large: \u0001"_j.string, 1, boxInteger(ctx, (((jarray) nullCheck(ctx, (frame[24].o)))->length)));
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_103:;
	{
	LINE_NUMBER(171);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (22));
	LINE_NUMBER(172);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[24].o)))->length));
	LINE_NUMBER(173);
	frame[28].o = (frame[24].o);
	frame[29].i = (((jarray) nullCheck(ctx, (frame[28].o)))->length);
	frame[30].i = (jint(0));
	}
label_106:;
	{
	if ((frame[30].i) >= (frame[29].i)) goto label_107;
	}
	{
	frame[31].o = ((jobject)ARRAY_ACCESS(jobject, (frame[28].o), (frame[30].i)));
	LINE_NUMBER(174);
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, (frame[0].o), (frame[31].o));
	LINE_NUMBER(173);
	INST_IINC(30, 1);
	goto label_106;
	}
label_107:;
	goto label_3;
label_101:;
	{
	LINE_NUMBER(176);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ai_UnitCommand)) == 0) goto label_110;
	}
	{
	frame[25].o = (checkCast(ctx, &class_mindustry_ai_UnitCommand, (frame[1].o)));
	LINE_NUMBER(177);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (23));
	LINE_NUMBER(178);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[25].o)))->F_id));
	goto label_3;
	}
label_110:;
	{
	LINE_NUMBER(179);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Bullet)) == 0) goto label_113;
	}
	{
	frame[26].o = (checkCast(ctx, &class_mindustry_gen_Bullet, (frame[1].o)));
	goto label_115;
	}
label_113:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) == 0) goto label_116;
	}
	{
	frame[27].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[1].o)));
	}
label_115:;
	{
	LINE_NUMBER(180);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(0)));
	goto label_3;
	}
label_116:;
	{
	LINE_NUMBER(182);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown object type: \u0001"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_double(jcontext ctx, jobject param0, jdouble param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeObject", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].d = param1;
	{
	LINE_NUMBER(188);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (11));
	LINE_NUMBER(189);
	((func_arc_util_io_Writes_d_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_d_double])(ctx, (frame[0].o), (frame[1].d));
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readObject", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObjectBoxed_arc_util_io_Reads_boolean_R_java_lang_Object(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readObjectBoxed_arc_util_io_Reads_boolean_R_java_lang_Object(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readObjectBoxed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_R_java_lang_Object(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readObjectSafe_arc_util_io_Reads_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readObjectSafe", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_R_java_lang_Object(ctx, (frame[0].o), (jint(0)), (jobject(nullptr)), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_R_java_lang_Object(jcontext ctx, jobject param0, jbool param1, jobject param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readObject", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_boolean_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_boolean_R_java_lang_Object(jcontext ctx, jobject param0, jbool param1, jobject param2, jbool param3, jbool param4) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readObject", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(214);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(215);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_boolean_byte_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_boolean_byte_R_java_lang_Object(jcontext ctx, jobject param0, jbool param1, jobject param2, jbool param3, jbool param4, jbyte param5) {
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readObject", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(220);
	if ((frame[3].i) == 0) goto label_1;
	}
	INST_SIPUSH(1000);
	goto label_2;
label_1:;
	INST_SIPUSH(200);
label_2:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(222);
	switch((frame[5].i)) {
		case 0: goto label_4;
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_7;
		case 4: goto label_8;
		case 5: goto label_9;
		case 6: goto label_10;
		case 7: goto label_11;
		case 8: goto label_12;
		case 9: goto label_13;
		case 10: goto label_14;
		case 11: goto label_15;
		case 12: goto label_16;
		case 13: goto label_17;
		case 14: goto label_18;
		case 15: goto label_19;
		case 16: goto label_20;
		case 17: goto label_21;
		case 18: goto label_22;
		case 19: goto label_23;
		case 20: goto label_24;
		case 21: goto label_25;
		case 22: goto label_26;
		case 23: goto label_27;
		default: goto label_28;
	}
	}
label_4:;
	{
	LINE_NUMBER(223);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_29;
	}
label_5:;
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp += 1;
	goto label_29;
	}
label_6:;
	{
	LINE_NUMBER(225);
	jlong temp0 = (jlong)((func_arc_util_io_Reads_l_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_l_R_long])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	sp += 1;
	goto label_29;
	}
label_7:;
	{
	LINE_NUMBER(226);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp += 1;
	goto label_29;
	}
label_8:;
	{
	LINE_NUMBER(228);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(229);
	if ((frame[7].i) == 0) goto label_31;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_33;
	}
	INST_SIPUSH(1200);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_arc_util_io_Reads_str_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_str_int_R_java_lang_String])(ctx, sp[0].o, sp[1].i);
	sp++;
	goto label_29;
label_31:;
	{
	LINE_NUMBER(233);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_29;
	}
label_9:;
	{
	LINE_NUMBER(236);
	if ((frame[2].o) != nullptr) goto label_35;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0);
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, temp1);
	sp += 1;
	goto label_29;
	}
label_35:;
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0);
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_io_TypeIO$ContentMapper_get_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) resolveInterfaceMethod(ctx, &class_mindustry_io_TypeIO$ContentMapper, INDEX_mindustry_io_TypeIO$ContentMapper_get_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content, sp[0].o))(ctx, sp[0].o, sp[1].o, temp1);
	sp += 1;
	goto label_29;
	}
label_10:;
	{
	LINE_NUMBER(238);
	if ((frame[4].i) != 0) goto label_36;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Nested arrays are not allowed"_j))));
	throwException(ctx, sp[0].o);	}
label_36:;
	{
	LINE_NUMBER(239);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(240);
	if ((frame[7].i) <= (frame[6].i)) goto label_38;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid array size: \u0001"_j.string, 1, boxShort(ctx, (frame[7].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_38:;
	{
	LINE_NUMBER(241);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[0].o, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(242);
	frame[9].i = (jint(0));
	}
label_40:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_41;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	INST_IINC(9, 1);
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(243);
	sp[0].o = frame[8].o;
	sp += 1;
	goto label_29;
	}
label_11:;
	{
	LINE_NUMBER(245);
	clinit_arc_math_geom_Point2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	init_arc_math_geom_Point2_int_int(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_29;
	}
label_12:;
	{
	LINE_NUMBER(247);
	if ((frame[4].i) != 0) goto label_42;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Nested arrays are not allowed"_j))));
	throwException(ctx, sp[0].o);	}
label_42:;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(249);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(250);
	frame[9].i = (jint(0));
	}
label_45:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_46;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_arc_math_geom_Point2_unpack_int_R_arc_math_geom_Point2(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	INST_IINC(9, 1);
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(251);
	sp[0].o = frame[8].o;
	sp += 1;
	goto label_29;
	}
label_13:;
	{
	LINE_NUMBER(253);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0);
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, temp1);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o))))->F_techNode;
	sp += 1;
	goto label_29;
	}
label_14:;
	{
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	sp += 1;
	goto label_29;
	}
label_15:;
	{
	LINE_NUMBER(255);
	jdouble temp0 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	sp += 1;
	goto label_29;
	}
label_16:;
	{
	LINE_NUMBER(256);
	if ((frame[1].i) != 0) goto label_47;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_29;
	}
label_47:;
	{
	clinit_mindustry_io_TypeIO$BuildingBox(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_TypeIO$BuildingBox);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	init_mindustry_io_TypeIO$BuildingBox_int(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_29;
	}
label_17:;
	{
	LINE_NUMBER(257);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAccess_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	sp += 1;
	goto label_29;
	}
label_18:;
	{
	LINE_NUMBER(259);
	if ((frame[4].i) != 0) goto label_48;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Nested arrays are not allowed"_j))));
	throwException(ctx, sp[0].o);	}
label_48:;
	{
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(261);
	if ((frame[7].i) <= (jint(40000))) goto label_50;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid array size: \u0001"_j.string, 1, boxInteger(ctx, (frame[7].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_50:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(264);
	sp[0].o = (jobject)((func_arc_util_io_Reads_b_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_Array1_byte_R_Array1_byte])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(265);
	sp[0].o = frame[8].o;
	sp += 1;
	goto label_29;
	}
label_19:;
	{
	LINE_NUMBER(269);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	LINE_NUMBER(270);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_29;
	}
label_20:;
	{
	LINE_NUMBER(273);
	if ((frame[4].i) != 0) goto label_54;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Nested arrays are not allowed"_j))));
	throwException(ctx, sp[0].o);	}
label_54:;
	{
	LINE_NUMBER(274);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(275);
	if ((frame[7].i) <= (frame[6].i)) goto label_56;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid array size: \u0001"_j.string, 1, boxInteger(ctx, (frame[7].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_56:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(278);
	frame[9].i = (jint(0));
	}
label_58:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_59;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[0].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	INST_IINC(9, 1);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(279);
	sp[0].o = frame[8].o;
	sp += 1;
	goto label_29;
	}
label_21:;
	{
	LINE_NUMBER(281);
	if ((frame[1].i) != 0) goto label_60;
	}
	{
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_29;
	}
label_60:;
	{
	clinit_mindustry_io_TypeIO$UnitBox(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_TypeIO$UnitBox);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	init_mindustry_io_TypeIO$UnitBox_int(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_29;
	}
label_22:;
	{
	LINE_NUMBER(283);
	if ((frame[4].i) != 0) goto label_61;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Nested arrays are not allowed"_j))));
	throwException(ctx, sp[0].o);	}
label_61:;
	{
	LINE_NUMBER(284);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(285);
	if ((frame[7].i) <= (frame[6].i)) goto label_63;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid array size: \u0001"_j.string, 1, boxInteger(ctx, (frame[7].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_63:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec2, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(288);
	frame[9].i = (jint(0));
	}
label_65:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_66;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	init_arc_math_geom_Vec2_float_float(ctx, sp[1].o, temp1, temp2);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	INST_IINC(9, 1);
	goto label_65;
	}
label_66:;
	{
	LINE_NUMBER(289);
	sp[0].o = frame[8].o;
	sp += 1;
	goto label_29;
	}
label_23:;
	{
	LINE_NUMBER(291);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	init_arc_math_geom_Vec2_float_float(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_29;
	}
label_24:;
	{
	LINE_NUMBER(292);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	sp += 1;
	goto label_29;
	}
label_25:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readInts_arc_util_io_Reads_R_Array1_int(ctx, (frame[0].o));
	sp += 1;
	goto label_29;
	}
label_26:;
	{
	LINE_NUMBER(295);
	if ((frame[4].i) != 0) goto label_67;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Nested arrays are not allowed"_j))));
	throwException(ctx, sp[0].o);	}
label_67:;
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(297);
	if ((frame[7].i) <= (frame[6].i)) goto label_69;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid array size: \u0001"_j.string, 1, boxInteger(ctx, (frame[7].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_69:;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(300);
	frame[9].i = (jint(0));
	}
label_71:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_72;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_boolean_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(300);
	INST_IINC(9, 1);
	goto label_71;
	}
label_72:;
	{
	LINE_NUMBER(303);
	sp[0].o = frame[8].o;
	sp += 1;
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(305);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitCommand_int_R_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitCommand_int_R_mindustry_ai_UnitCommand])(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_29;
	}
label_28:;
	{
	LINE_NUMBER(306);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown object type: \u0001"_j.string, 1, boxByte(ctx, (frame[5].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_29:;
	LINE_NUMBER(222);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeUiBuilder_arc_util_io_Writes_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeUiBuilder", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(311);
	((func_mindustry_ui_builder_UiBuilder$NodeBuilder_write_arc_util_io_Writes) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_write_arc_util_io_Writes])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readUiBuilder_arc_util_io_Reads_R_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readUiBuilder", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiBuilder$NodeBuilder_read_arc_util_io_Reads_R_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeMenuResult_arc_util_io_Writes_mindustry_ui_builder_MenuResult(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeMenuResult", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(319);
	((func_arc_util_io_Writes_l_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_l_long])(ctx, (frame[0].o), ((jlong)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[1].o)))->F_token));
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[1].o)))->F_result;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	jint temp0 = 500;
	sp[1].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[1].o))->F_size));
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(324);
	frame[2].i = (jint(0));
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[1].o)))->F_values;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(326);
	INST_IINC(2, 1);
	if ((frame[2].i) <= (500)) goto label_8;
	}
	LINE_NUMBER(327);
	goto label_6;
label_8:;
	{
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	((func_arc_util_io_Writes_str_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_str_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(331);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_java_lang_Float)) == 0) goto label_11;
	}
	{
	frame[6].o = (checkCast(ctx, &class_java_lang_Float, (frame[8].o)));
	LINE_NUMBER(332);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (frame[6].o));
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, temp0);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_java_lang_Boolean)) == 0) goto label_15;
	}
	{
	frame[7].o = (checkCast(ctx, &class_java_lang_Boolean, (frame[8].o)));
	LINE_NUMBER(335);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[7].o));
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, sp[0].o, temp0);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_java_lang_String)) == 0) goto label_18;
	}
	{
	frame[5].o = (checkCast(ctx, &class_java_lang_String, (frame[8].o)));
	LINE_NUMBER(338);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(339);
	((func_arc_util_io_Writes_str_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_str_java_lang_String])(ctx, (frame[0].o), (frame[5].o));
	goto label_14;
	}
label_18:;
	{
	LINE_NUMBER(341);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown object type: \u0001"_j.string, 1, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	LINE_NUMBER(343);
	goto label_5;
label_6:;
	LINE_NUMBER(344);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readMenuResult_arc_util_io_Reads_R_mindustry_ui_builder_MenuResult(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readMenuResult", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(347);
	clinit_mindustry_ui_builder_MenuResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_MenuResult);
	init_mindustry_ui_builder_MenuResult(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(349);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((func_arc_util_io_Reads_l_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_l_R_long])(ctx, (frame[0].o));
	((mindustry_ui_builder_MenuResult *) NULL_CHECK(sp[0].o))->F_token = temp0;
	LINE_NUMBER(352);
	frame[2].i = (6000);
	LINE_NUMBER(354);
	jint temp1 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[3].i = temp1;
	LINE_NUMBER(355);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(356);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_str_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_str_int_R_java_lang_String])(ctx, (frame[0].o), (500));
	((mindustry_ui_builder_MenuResult *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(357);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[1].o)))->F_result;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 - temp1);
	}
label_5:;
	{
	LINE_NUMBER(360);
	jint temp0 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(361);
	if ((frame[4].i) <= (500)) goto label_9;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"UI result entry count exceeds max entries: \u0001"_j.string, 1, boxInteger(ctx, (frame[4].i)));
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(363);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(364);
	if ((frame[2].i) > 0) goto label_13;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too many long strings in MenuResult, reduce your amount of elements/IDs."_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[2].i), (1000));
	sp[0].o = (jobject)((func_arc_util_io_Reads_str_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_str_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	frame[6].o = sp[0].o;
	LINE_NUMBER(366);
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	frame[2].i = (temp1 - temp2);
	LINE_NUMBER(368);
	jint temp3 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[7].i = temp3;
	LINE_NUMBER(370);
	switch((frame[7].i)) {
		case 0: goto label_17;
		case 1: goto label_18;
		case 2: goto label_19;
		default: goto label_20;
	}
	}
label_17:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[1].o)))->F_values;
	sp[1].o = frame[6].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[1].o)))->F_values;
	sp[1].o = frame[6].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(374);
	if ((frame[2].i) > 0) goto label_22;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too many long strings in MenuResult, reduce your amount of elements/IDs."_j))));
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(375);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[2].i), (1000));
	sp[0].o = (jobject)((func_arc_util_io_Reads_str_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_str_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	frame[8].o = sp[0].o;
	LINE_NUMBER(376);
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	frame[2].i = (temp1 - temp2);
	LINE_NUMBER(377);
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[1].o)))->F_values;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[6].o), (frame[8].o));
	LINE_NUMBER(378);
	goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(379);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown UI entry type: \u0001"_j.string, 1, boxByte(ctx, (frame[7].i)));
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(363);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writePayload_arc_util_io_Writes_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writePayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(386);
	SM_mindustry_world_blocks_payloads_Payload_write_mindustry_world_blocks_payloads_Payload_arc_util_io_Writes(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readPayload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)SM_mindustry_world_blocks_payloads_Payload_read_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeMounts_arc_util_io_Writes_Array1_mindustry_entities_units_WeaponMount(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeMounts", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(394);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(395);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(396);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_shoot) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_rotate) == 0) goto label_7;
	}
	INST_ICONST(2);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 3;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (sp[1].i | sp[2].i));
	LINE_NUMBER(397);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_aimX));
	LINE_NUMBER(398);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_aimY));
	LINE_NUMBER(395);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(400);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readMounts", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(403);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(404);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(405);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(406);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	frame[5].f = temp1;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	frame[6].f = temp2;
	LINE_NUMBER(408);
	if ((frame[3].i) > ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_8;
	}
	{
	LINE_NUMBER(409);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(410);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_aimX = (frame[5].f);
	LINE_NUMBER(411);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_aimY = (frame[6].f);
	LINE_NUMBER(412);
	sp[0].o = frame[7].o;
	sp += 1;
	if (((frame[4].i) & (jint(1))) == 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_shoot = sp[1].i;
	LINE_NUMBER(413);
	sp[0].o = frame[7].o;
	sp += 1;
	if (((frame[4].i) & (jint(2))) == 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	sp -= 2;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_rotate = sp[1].i;
label_8:;
	{
	LINE_NUMBER(404);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_R_Array1_mindustry_entities_units_WeaponMount(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readMounts", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	((func_arc_util_io_Reads_skip_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_skip_int])(ctx, sp[0].o, (temp0 * (9)));
	LINE_NUMBER(426);
	clinit_mindustry_io_TypeIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_TypeIO_noMounts;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readAbilities", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(430);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(432);
	if ((frame[2].i) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_entities_abilities_Ability, (frame[2].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(434);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	clinit_mindustry_entities_abilities_EmptyDataAbility(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_abilities_EmptyDataAbility);
	init_mindustry_entities_abilities_EmptyDataAbility(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	INST_IINC(3, 1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(437);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(438);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	frame[4].f = temp0;
	LINE_NUMBER(439);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(440);
	((mindustry_entities_abilities_Ability *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)))))->F_data = (frame[4].f);
	}
label_10:;
	{
	LINE_NUMBER(437);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeAbilities_arc_util_io_Writes_Array1_mindustry_entities_abilities_Ability(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeAbilities", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(447);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(448);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(449);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK((frame[5].o)))->F_data));
	LINE_NUMBER(448);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(451);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_R_Array1_mindustry_entities_abilities_Ability(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readAbilities", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	((func_arc_util_io_Reads_skip_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_skip_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(457);
	clinit_mindustry_io_TypeIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_TypeIO_noAbilities;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeUnitContainer_arc_util_io_Writes_mindustry_entities_Units$UnitSyncContainer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeUnitContainer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_Units$UnitSyncContainer *) NULL_CHECK((frame[1].o)))->F_unit;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_Units$UnitSyncContainer *) NULL_CHECK((frame[1].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_classId_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_classId_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (temp0 & (255)));
	LINE_NUMBER(463);
	sp[0].o = (jobject)((mindustry_entities_Units$UnitSyncContainer *) NULL_CHECK((frame[1].o)))->F_unit;
	((func_mindustry_gen_Unit_beforeWrite) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_beforeWrite])(ctx, sp[0].o);
	LINE_NUMBER(464);
	sp[0].o = (jobject)((mindustry_entities_Units$UnitSyncContainer *) NULL_CHECK((frame[1].o)))->F_unit;
	((func_mindustry_gen_Unit_writeSync_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_writeSync_arc_util_io_Writes])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readUnitContainer_arc_util_io_Reads_R_mindustry_entities_Units$UnitSyncContainer(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readUnitContainer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(468);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(469);
	jint temp1 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(471);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(472);
	frame[4].i = (jint(0));
	frame[5].i = (jint(0));
	LINE_NUMBER(474);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)SM_mindustry_gen_EntityMapping_map_int_R_arc_func_Prov(ctx, ((frame[2].i) & (255)));
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(476);
	((func_mindustry_gen_Unit_id_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_id_int])(ctx, (frame[3].o), (frame[1].i));
	LINE_NUMBER(478);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_core_NetClient_isEntityUsed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_isEntityUsed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(479);
	frame[4].i = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(481);
	frame[5].i = (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(485);
	((func_mindustry_gen_Unit_readSync_arc_util_io_Reads) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_readSync_arc_util_io_Reads])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(487);
	if ((frame[5].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(489);
	((func_mindustry_gen_Unit_snapSync) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_snapSync])(ctx, (frame[3].o));
	}
label_13:;
	{
	LINE_NUMBER(492);
	if ((frame[4].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(493);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[3].o));
	LINE_NUMBER(494);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_Unit_id_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_id_R_int])(ctx, (frame[3].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	}
label_15:;
	{
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeUnit_arc_util_io_Writes_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeUnit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(501);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_BlockUnitc)) == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_2;
label_3:;
	INST_ICONST(2);
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(504);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_BlockUnitc)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(505);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building, (checkCast(ctx, &class_mindustry_gen_BlockUnitc, (frame[1].o)))))(ctx, (checkCast(ctx, &class_mindustry_gen_BlockUnitc, (frame[1].o))));
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(506);
	if ((frame[1].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(507);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), (jint(0)));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(509);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_id));
	}
label_7:;
	LINE_NUMBER(511);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readUnit_arc_util_io_Reads_R_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readUnit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(514);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(515);
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(517);
	if ((frame[1].i) != 0) goto label_3;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(518);
	if ((frame[1].i) != (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(519);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(520);
	if ((frame[1].i) != (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(521);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(522);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_ControlBlock)) == 0) goto label_9;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_ControlBlock, (frame[3].o)));
	sp[0].o = (jobject)((func_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit, (frame[4].o)))(ctx, (frame[4].o));
	sp += 1;
	goto label_11;
	}
label_9:;
	INST_ACONST_NULL();
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeCommand_arc_util_io_Writes_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeCommand", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_SIPUSH(255);
	goto label_2;
label_1:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_ctype_Content *) NULL_CHECK(sp[-1].o))->F_id;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readCommand_arc_util_io_Reads_R_mindustry_ai_UnitCommand(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readCommand", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(532);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(533);
	if ((frame[1].i) != (255)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitCommand_int_R_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitCommand_int_R_mindustry_ai_UnitCommand])(ctx, sp[0].o, (frame[1].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeStance_arc_util_io_Writes_mindustry_ai_UnitStance(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeStance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_SIPUSH(255);
	goto label_2;
label_1:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_ctype_Content *) NULL_CHECK(sp[-1].o))->F_id;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readStance_arc_util_io_Reads_R_mindustry_ai_UnitStance(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readStance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(541);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(543);
	if ((frame[1].i) == (255)) goto label_2;
	}
	{
	jint temp0 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq])(ctx, sp[0].o);
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
label_2:;
	clinit_mindustry_ai_UnitStance(ctx);
	(sp++)->o = SF_mindustry_ai_UnitStance_stop;
	goto label_4;
label_3:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitStance_int_R_mindustry_ai_UnitStance) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitStance_int_R_mindustry_ai_UnitStance])(ctx, sp[0].o, (frame[1].i));
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writePosEntity_arc_util_io_Writes_mindustry_gen_Posc(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writePosEntity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(547);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, sp[0].o))(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readPosEntity_arc_util_io_Reads_R_mindustry_gen_Posc(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readPosEntity", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(551);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Posc, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeEntity_arc_util_io_Writes_mindustry_gen_Entityc(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeEntity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(555);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, sp[0].o))(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readEntity_arc_util_io_Reads_R_mindustry_gen_Entityc(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readEntity", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(559);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeBuilding_arc_util_io_Writes_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeBuilding", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(563);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(564);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readBuilding_arc_util_io_Reads_R_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readBuilding", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(567);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeTile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(571);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (jint(-1)), (jint(-1)));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readTile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(575);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeBlock_arc_util_io_Writes_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeBlock", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(579);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_ctype_Content *) NULL_CHECK(sp[-1].o))->F_id;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readBlock_arc_util_io_Reads_R_mindustry_world_Block(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readBlock", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(583);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(584);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, (frame[1].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_io_TypeIO_getMaxPlans_arc_struct_Queue_R_int(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:getMaxPlans", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(590);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size), (20));
	frame[1].i = temp0;
	LINE_NUMBER(591);
	frame[2].i = (jint(0));
	LINE_NUMBER(594);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(596);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_config;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), getArrayClass(&class_byte, 1))) == 0) goto label_7;
	}
	{
	frame[5].o = (checkCast(ctx, getArrayClass(&class_byte, 1), (frame[6].o)));
	LINE_NUMBER(597);
	frame[2].i = ((frame[2].i) + (((jarray) nullCheck(ctx, (frame[5].o)))->length));
	}
label_7:;
	{
	LINE_NUMBER(600);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_config;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_java_lang_String)) == 0) goto label_9;
	}
	{
	frame[5].o = (checkCast(ctx, &class_java_lang_String, (frame[6].o)));
	LINE_NUMBER(601);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	frame[2].i = (temp0 + temp1);
	}
label_9:;
	{
	LINE_NUMBER(604);
	if ((frame[2].i) <= (500)) goto label_11;
	}
	{
	LINE_NUMBER(605);
	frame[1].i = ((frame[3].i) + (jint(1)));
	LINE_NUMBER(606);
	goto label_4;
	}
label_11:;
	{
	LINE_NUMBER(594);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writePlansQueueNet_arc_util_io_Writes_arc_struct_Queue(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writePlansQueueNet", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(615);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(616);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(620);
	jint temp0 = (jint)SM_mindustry_io_TypeIO_getMaxPlans_arc_struct_Queue_R_int(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(622);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(623);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(624);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	SM_mindustry_io_TypeIO_writePlan_arc_util_io_Writes_mindustry_entities_units_BuildPlan(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[1].o)));
	LINE_NUMBER(623);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(626);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readPlansQueueNet_arc_util_io_Reads_R_arc_struct_Queue(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readPlansQueueNet", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(629);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(630);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(631);
	if ((frame[1].i) <= (20)) goto label_3;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Queue too long: \u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(632);
	clinit_arc_struct_Queue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(633);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(634);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlan_arc_util_io_Reads_R_mindustry_entities_units_BuildPlan(ctx, (frame[0].o));
	((func_arc_struct_Queue_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(633);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readPlansQueue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(640);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(641);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(643);
	clinit_arc_struct_Queue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(644);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(645);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlan_arc_util_io_Reads_R_mindustry_entities_units_BuildPlan(ctx, (frame[0].o));
	((func_arc_struct_Queue_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(644);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writePlan_arc_util_io_Writes_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writePlan", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(651);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(653);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) != 0) goto label_5;
	}
	{
	LINE_NUMBER(654);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(655);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jbyte(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation))));
	LINE_NUMBER(656);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(657);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_config;
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(659);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readPlan_arc_util_io_Reads_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readPlan", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(664);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(665);
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[3].i = temp1;
	LINE_NUMBER(667);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].i));
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(671);
	if ((frame[2].i) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(672);
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[3].i));
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[3].i));
	init_mindustry_entities_units_BuildPlan_int_int(ctx, sp[0].o, temp0, temp1);
	frame[1].o = sp[0].o;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(674);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(675);
	jint temp1 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(676);
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	if (temp2 != (jint(1))) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(677);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObjectSafe_arc_util_io_Reads_R_java_lang_Object(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(678);
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[3].i));
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[3].i));
	jint temp2 = frame[5].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, (frame[4].i));
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(680);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(681);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_config = (jref) (frame[7].o);
	}
label_8:;
	{
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writePlans_arc_util_io_Writes_Array1_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writePlans", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(689);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(690);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(691);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(693);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (jshort((((jarray) nullCheck(ctx, (frame[1].o)))->length))));
	LINE_NUMBER(694);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(695);
	SM_mindustry_io_TypeIO_writePlan_arc_util_io_Writes_mindustry_entities_units_BuildPlan(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(694);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(697);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readPlans_arc_util_io_Reads_R_Array1_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readPlans", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(700);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(701);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(705);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_entities_units_BuildPlan, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(706);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(707);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPlan_arc_util_io_Reads_R_mindustry_entities_units_BuildPlan(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(708);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(709);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)) = (frame[4].o);
	}
label_9:;
	{
	LINE_NUMBER(706);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(713);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeClientPlans_arc_util_io_Writes_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeClientPlans", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(717);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(718);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(719);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(721);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (jshort(((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size))));
	LINE_NUMBER(723);
	sp[0].o = (jobject)((func_mindustry_io_TypeIO$ClientBuildPlans_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_io_TypeIO$ClientBuildPlans_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(724);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_breaking) == 0) goto label_8;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Breaking plans should not be sent."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(725);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(727);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(728);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_11;
	}
	{
	LINE_NUMBER(729);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jbyte(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_rotation))));
	}
label_11:;
	{
	LINE_NUMBER(731);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_config;
	jint temp0 = (jint)SM_mindustry_io_TypeIO_validClientPlanConfig_java_lang_Object_R_boolean(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_config;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ACONST_NULL();
label_14:;
	{
	sp -= 2;
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(732);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(733);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readClientPlans_arc_util_io_Reads_R_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jobject param0) {
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readClientPlans", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(736);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(738);
	if ((frame[1].i) != 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(739);
	if ((frame[1].i) <= (1000)) goto label_3;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Too many plans: \u0001"_j.string, 1, boxShort(ctx, (frame[1].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(741);
	clinit_mindustry_io_TypeIO$ClientBuildPlans(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_TypeIO$ClientBuildPlans);
	init_mindustry_io_TypeIO$ClientBuildPlans(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(742);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[1].i), (1000));
	sp[0].o = (jobject)((func_mindustry_io_TypeIO$ClientBuildPlans_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_TypeIO$ClientBuildPlans_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	LINE_NUMBER(743);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(744);
	jint temp0 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(745);
	jint temp1 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(746);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp2 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp2);
	frame[6].o = sp[0].o;
	LINE_NUMBER(747);
	if ((frame[6].o) != nullptr) goto label_12;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid block ID in block plans! Client is likely using an incorrectly configured mod."_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(748);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[6].o)))->F_rotate) == 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(749);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readClientPlanConfig_arc_util_io_Reads_R_java_lang_Object(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(750);
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[0].o, (frame[4].i), (frame[5].i), (frame[7].i), (frame[6].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(751);
	sp[0].o = (jobject)((func_mindustry_io_TypeIO$ClientBuildPlans_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_io_TypeIO$ClientBuildPlans_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[9].o));
	LINE_NUMBER(743);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(754);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readClientPlanConfig_arc_util_io_Reads_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readClientPlanConfig", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(758);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(759);
	switch((frame[1].i)) {
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_6;
		case 7: goto label_6;
		case 8: goto label_6;
		case 9: goto label_6;
		case 10: goto label_8;
		case 11: goto label_9;
		default: goto label_6;
	}
	}
label_2:;
	{
	LINE_NUMBER(760);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(761);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp += 1;
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(762);
	jlong temp0 = (jlong)((func_arc_util_io_Reads_l_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_l_R_long])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	sp += 1;
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(763);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp += 1;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(764);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0);
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, temp1);
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(765);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(766);
	jdouble temp0 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	sp += 1;
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(767);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown plan config object type: \u0001"_j.string, 1, boxByte(ctx, (frame[1].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	LINE_NUMBER(759);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_io_TypeIO_validClientPlanConfig_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:validClientPlanConfig", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(773);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Boolean)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_ctype_Content)) == 0) goto label_2;
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

void SM_mindustry_io_TypeIO_writeController_arc_util_io_Writes_mindustry_entities_units_UnitController(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeController", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(778);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Player)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[1].o)));
	LINE_NUMBER(779);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(780);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_id));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(781);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ai_types_LogicAI)) == 0) goto label_5;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ai_types_LogicAI, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[3].o)))->F_controller;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(782);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(783);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[3].o)))->F_controller;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(784);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_9;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[1].o)));
	LINE_NUMBER(785);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (9));
	LINE_NUMBER(786);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_attackTarget;
	sp += 1;
	if (sp[0].o == nullptr) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(787);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_targetPos;
	sp += 1;
	if (sp[0].o == nullptr) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(789);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(790);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_targetPos;
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(791);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_targetPos;
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_18:;
	{
	LINE_NUMBER(793);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(794);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_attackTarget;
	sp += 1;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Building)) == 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(795);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_attackTarget;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Building)) == 0) goto label_26;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[6].o)));
	LINE_NUMBER(796);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[5].o));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	goto label_21;
	}
label_26:;
	{
	LINE_NUMBER(798);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_attackTarget;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o))))->F_id));
	}
label_21:;
	{
	LINE_NUMBER(801);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_command;
	sp += 1;
	if (sp[0].o != nullptr) goto label_28;
	}
	INST_ICONST(-1);
	goto label_29;
label_28:;
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_command;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_29:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(803);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_commandQueue;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(804);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[4].o)))->F_commandQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_32:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_math_geom_Position, sp[0].o));
	LINE_NUMBER(805);
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Building)) == 0) goto label_35;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[6].o)));
	LINE_NUMBER(806);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(807);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[7].o));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	goto label_38;
	}
label_35:;
	{
	LINE_NUMBER(808);
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Unit)) == 0) goto label_39;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[6].o)));
	LINE_NUMBER(809);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(810);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[8].o)))->F_id));
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(811);
	if ((isInstance(ctx, (frame[6].o), &class_arc_math_geom_Vec2)) == 0) goto label_42;
	}
	{
	frame[9].o = (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[6].o)));
	LINE_NUMBER(812);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(813);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[9].o)))->F_x));
	LINE_NUMBER(814);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[9].o)))->F_y));
	goto label_38;
	}
label_42:;
	{
	LINE_NUMBER(817);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(3)));
	}
label_38:;
	LINE_NUMBER(819);
	goto label_32;
label_33:;
	{
	LINE_NUMBER(821);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_io_TypeIO_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_io_TypeIO_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_io_TypeIO_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[5].i = temp0;
	LINE_NUMBER(823);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(825);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_48:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_49;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_ai_UnitStance, sp[0].o));
	LINE_NUMBER(826);
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, (frame[4].o), (frame[7].o));
	if (temp0 == 0) goto label_51;
	}
	{
	LINE_NUMBER(827);
	SM_mindustry_io_TypeIO_writeStance_arc_util_io_Writes_mindustry_ai_UnitStance(ctx, (frame[0].o), (frame[7].o));
	}
label_51:;
	LINE_NUMBER(829);
	goto label_48;
label_49:;
	LINE_NUMBER(831);
	goto label_4;
label_9:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ai_types_AssemblerAI)) == 0) goto label_53;
	}
	{
	LINE_NUMBER(832);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(5)));
	goto label_4;
	}
label_53:;
	{
	LINE_NUMBER(834);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(2)));
	}
label_4:;
	LINE_NUMBER(836);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readController", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(839);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(840);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(841);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(842);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(844);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(845);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
	{
	LINE_NUMBER(846);
	if ((frame[2].i) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(847);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	LINE_NUMBER(848);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_7:;
	{
	LINE_NUMBER(849);
	if ((frame[2].i) != (jint(3))) goto label_10;
	}
	{
	LINE_NUMBER(850);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(851);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ai_types_LogicAI)) == 0) goto label_13;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_ai_types_LogicAI, (frame[1].o)));
	LINE_NUMBER(852);
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[1].o, (frame[3].i));
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(853);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_13:;
	{
	LINE_NUMBER(856);
	clinit_mindustry_ai_types_LogicAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_LogicAI);
	init_mindustry_ai_types_LogicAI(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(858);
	((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[5].o)))->F_controlTimer = (jfloat(600.0f));
	LINE_NUMBER(859);
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[1].o, (frame[3].i));
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(860);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_10:;
	{
	LINE_NUMBER(863);
	if ((frame[2].i) == (jint(4))) goto label_19;
	}
	{
	if ((frame[2].i) == (6)) goto label_19;
	}
	{
	if ((frame[2].i) == (7)) goto label_19;
	}
	{
	if ((frame[2].i) == (8)) goto label_19;
	}
	{
	if ((frame[2].i) != (9)) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(864);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_21;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[1].o)));
	sp[0].o = frame[4].o;
	sp += 1;
	goto label_23;
	}
label_21:;
	{
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_CommandAI);
	init_mindustry_ai_types_CommandAI(ctx, sp[0].o);
	sp += 1;
	}
label_23:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(866);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[0].o));
	frame[4].i = temp0;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(867);
	if ((frame[5].i) == 0) goto label_27;
	}
	{
	LINE_NUMBER(868);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_targetPos;
	if (sp[0].o != nullptr) goto label_29;
	}
	{
	sp[0].o = frame[3].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_targetPos = (jref) sp[1].o;
	}
label_29:;
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_targetPos;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	goto label_30;
	}
label_27:;
	{
	LINE_NUMBER(871);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_targetPos = (jref) (jobject(nullptr));
	}
label_30:;
	{
	LINE_NUMBER(873);
	((func_mindustry_ai_types_CommandAI_setupLastPos) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_setupLastPos])(ctx, (frame[3].o));
	LINE_NUMBER(874);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_readAttackTarget = (jint(-1));
	LINE_NUMBER(876);
	if ((frame[4].i) == 0) goto label_33;
	}
	{
	LINE_NUMBER(877);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[6].i = temp0;
	LINE_NUMBER(878);
	if ((frame[6].i) != (jint(1))) goto label_36;
	}
	{
	LINE_NUMBER(879);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[1].o, temp0);
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_attackTarget = (jref) sp[1].o;
	goto label_38;
	}
label_36:;
	{
	LINE_NUMBER(881);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[2].o = frame[3].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[2].o))->F_readAttackTarget = temp0;
	sp[1].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[1].o, temp0);
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_attackTarget = (jref) (checkCast(ctx, &class_mindustry_gen_Teamc, sp[1].o));
	}
label_38:;
	LINE_NUMBER(883);
	goto label_39;
label_33:;
	{
	LINE_NUMBER(884);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_attackTarget = (jref) (jobject(nullptr));
	}
label_39:;
	{
	LINE_NUMBER(887);
	if ((frame[2].i) == (6)) goto label_40;
	}
	{
	if ((frame[2].i) == (7)) goto label_40;
	}
	{
	if ((frame[2].i) == (8)) goto label_40;
	}
	{
	if ((frame[2].i) != (9)) goto label_41;
	}
label_40:;
	{
	LINE_NUMBER(888);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[6].i = temp0;
	LINE_NUMBER(889);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[6].i) >= 0) goto label_43;
	}
	INST_ACONST_NULL();
	goto label_44;
label_43:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitCommand_int_R_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitCommand_int_R_mindustry_ai_UnitCommand])(ctx, sp[0].o, (frame[6].i));
	sp += 1;
	}
label_44:;
	{
	sp -= 2;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	LINE_NUMBER(890);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_command;
	if (sp[0].o != nullptr) goto label_41;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_moveCommand;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	}
label_41:;
	{
	LINE_NUMBER(894);
	if ((frame[2].i) == (7)) goto label_46;
	}
	{
	if ((frame[2].i) == (8)) goto label_46;
	}
	{
	if ((frame[2].i) != (9)) goto label_47;
	}
label_46:;
	{
	LINE_NUMBER(895);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_commandQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(896);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[6].i = temp0;
	LINE_NUMBER(897);
	frame[7].i = (jint(0));
	}
label_50:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_47;
	}
	{
	LINE_NUMBER(898);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[8].i = temp0;
	LINE_NUMBER(899);
	switch((frame[8].i)) {
		case 0: goto label_53;
		case 1: goto label_54;
		case 2: goto label_55;
		default: goto label_56;
	}
	}
label_53:;
	{
	LINE_NUMBER(901);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0);
	frame[9].o = sp[0].o;
	LINE_NUMBER(902);
	if ((frame[9].o) == nullptr) goto label_58;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_commandQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[9].o));
	}
label_58:;
	LINE_NUMBER(903);
	goto label_56;
label_54:;
	{
	LINE_NUMBER(905);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, temp0);
	frame[9].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(906);
	if ((frame[9].o) == nullptr) goto label_60;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_commandQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[9].o));
	}
label_60:;
	LINE_NUMBER(907);
	goto label_56;
label_55:;
	{
	LINE_NUMBER(909);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_commandQueue;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	init_arc_math_geom_Vec2_float_float(ctx, sp[1].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_56:;
	{
	LINE_NUMBER(897);
	INST_IINC(7, 1);
	goto label_50;
	}
label_47:;
	{
	LINE_NUMBER(916);
	if ((frame[2].i) != (8)) goto label_61;
	}
	{
	LINE_NUMBER(917);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readStance_arc_util_io_Reads_R_mindustry_ai_UnitStance(ctx, (frame[0].o));
	((func_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance])(ctx, sp[0].o, sp[1].o);
	goto label_63;
	}
label_61:;
	{
	LINE_NUMBER(918);
	if ((frame[2].i) != (9)) goto label_63;
	}
	{
	LINE_NUMBER(919);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[6].i = temp0;
	LINE_NUMBER(920);
	frame[7].i = (jint(0));
	}
label_66:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_63;
	}
	{
	LINE_NUMBER(921);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readStance_arc_util_io_Reads_R_mindustry_ai_UnitStance(ctx, (frame[0].o));
	((func_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(920);
	INST_IINC(7, 1);
	goto label_66;
	}
label_63:;
	{
	LINE_NUMBER(925);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_20:;
	{
	LINE_NUMBER(926);
	if ((frame[2].i) != (jint(5))) goto label_69;
	}
	{
	LINE_NUMBER(928);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ai_types_AssemblerAI)) == 0) goto label_71;
	}
	INST_ALOAD(1);
	goto label_72;
label_71:;
	{
	clinit_mindustry_ai_types_AssemblerAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_AssemblerAI);
	init_mindustry_ai_types_AssemblerAI(ctx, sp[0].o);
	sp += 1;
	}
label_72:;
	popStackFrame(ctx);
	INST_ARETURN();
label_69:;
	{
	LINE_NUMBER(935);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_entities_units_AIController)) == 0) goto label_73;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ai_types_LogicAI)) == 0) goto label_74;
	}
label_73:;
	{
	clinit_mindustry_ai_types_GroundAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_GroundAI);
	init_mindustry_ai_types_GroundAI(ctx, sp[0].o);
	sp += 1;
	goto label_75;
	}
label_74:;
	INST_ALOAD(1);
label_75:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeKick_arc_util_io_Writes_mindustry_net_Packets$KickReason(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeKick", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(940);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_net_Packets$KickReason_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_Packets$KickReason_ordinal_R_int])(ctx, (frame[1].o));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte(temp0)));
	LINE_NUMBER(941);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readKick_arc_util_io_Reads_R_mindustry_net_Packets$KickReason(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readKick", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(944);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packets$KickReason_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeMarkerControl_arc_util_io_Writes_mindustry_logic_LMarkerControl(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeMarkerControl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(948);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte(temp0)));
	LINE_NUMBER(949);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readMarkerControl_arc_util_io_Reads_R_mindustry_logic_LMarkerControl(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readMarkerControl", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(952);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LMarkerControl_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeRules_arc_util_io_Writes_mindustry_game_Rules(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeRules", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(956);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(957);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_charset;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(958);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	LINE_NUMBER(959);
	((func_arc_util_io_Writes_b_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_Array1_byte])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(960);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readRules_arc_util_io_Reads_R_mindustry_game_Rules(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readRules", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(963);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(965);
	if ((frame[1].i) <= (jint(100000))) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Rules too long"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(966);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_b_Array1_byte_R_Array1_byte])(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_charset;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(967);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, (((jobject) &class_mindustry_game_Rules)), (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_game_Rules, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeObjectives_arc_util_io_Writes_mindustry_game_MapObjectives(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeObjectives", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(971);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(972);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_charset;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(973);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	LINE_NUMBER(974);
	((func_arc_util_io_Writes_b_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_Array1_byte])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(975);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readObjectives_arc_util_io_Reads_R_mindustry_game_MapObjectives(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readObjectives", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(978);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(979);
	if ((frame[1].i) < (jint(60000))) goto label_2;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Objectives bytes too long: \u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(980);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_b_Array1_byte_R_Array1_byte])(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_charset;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(981);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, (((jobject) &class_mindustry_game_MapObjectives)), (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_game_MapObjectives, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeObjectiveMarker_arc_util_io_Writes_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeObjectiveMarker", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(985);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String])(ctx, sp[0].o, (frame[1].o), (((jobject) &class_mindustry_game_MapObjectives$ObjectiveMarker)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(986);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_charset;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(987);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	LINE_NUMBER(988);
	((func_arc_util_io_Writes_b_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_Array1_byte])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(989);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readObjectiveMarker_arc_util_io_Reads_R_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readObjectiveMarker", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(992);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(993);
	if ((frame[1].i) <= (jint(40000))) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Objective marker too long"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(994);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Reads_b_Array1_byte_R_Array1_byte])(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_charset;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(995);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, (((jobject) &class_mindustry_game_MapObjectives$ObjectiveMarker)), (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeVecNullable_arc_util_io_Writes_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeVecNullable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(999);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1000);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), (jfloat(std::numeric_limits<float>::quiet_NaN())));
	LINE_NUMBER(1001);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), (jfloat(std::numeric_limits<float>::quiet_NaN())));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1003);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(1004);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_4:;
	LINE_NUMBER(1006);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readVecNullable_arc_util_io_Reads_R_arc_math_geom_Vec2(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readVecNullable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1009);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	frame[2].f = temp1;
	LINE_NUMBER(1010);
	jint temp2 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[1].f));
	if (temp2 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[2].f));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	INST_ACONST_NULL();
	goto label_5;
label_4:;
	{
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	sp += 1;
	}
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeVec2_arc_util_io_Writes_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeVec2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1014);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1015);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), (jfloat(0)));
	LINE_NUMBER(1016);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), (jfloat(0)));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1018);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(1019);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_4:;
	LINE_NUMBER(1021);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readVec2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1024);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_R_arc_math_geom_Vec2(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readVec2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1028);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	init_arc_math_geom_Vec2_float_float(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeStatus_arc_util_io_Writes_mindustry_entities_units_StatusEntry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeStatus", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1032);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_effect;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(1033);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_time));
	LINE_NUMBER(1036);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_effect;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_dynamic) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1038);
	sp[0].o = frame[0].o;
	LINE_NUMBER(1039);
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_damageMultiplier), (jfloat(1)), -1)) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	LINE_NUMBER(1040);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_healthMultiplier), (jfloat(1)), -1)) == 0) goto label_8;
	}
	INST_ICONST(2);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	LINE_NUMBER(1041);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_speedMultiplier), (jfloat(1)), -1)) == 0) goto label_11;
	}
	INST_ICONST(4);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	LINE_NUMBER(1042);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_reloadMultiplier), (jfloat(1)), -1)) == 0) goto label_14;
	}
	INST_BIPUSH(8);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	LINE_NUMBER(1043);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_buildSpeedMultiplier), (jfloat(1)), -1)) == 0) goto label_17;
	}
	INST_BIPUSH(16);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	LINE_NUMBER(1044);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_dragMultiplier), (jfloat(1)), -1)) == 0) goto label_20;
	}
	INST_BIPUSH(32);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	LINE_NUMBER(1045);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_23;
	}
	INST_BIPUSH(64);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 3;
	jint temp0 = sp[1].i | sp[2].i;
	LINE_NUMBER(1038);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1048);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_damageMultiplier), (jfloat(1)), -1)) == 0) goto label_27;
	}
	{
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_damageMultiplier));
	}
label_27:;
	{
	LINE_NUMBER(1049);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_healthMultiplier), (jfloat(1)), -1)) == 0) goto label_28;
	}
	{
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_healthMultiplier));
	}
label_28:;
	{
	LINE_NUMBER(1050);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_speedMultiplier), (jfloat(1)), -1)) == 0) goto label_29;
	}
	{
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_speedMultiplier));
	}
label_29:;
	{
	LINE_NUMBER(1051);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_reloadMultiplier), (jfloat(1)), -1)) == 0) goto label_30;
	}
	{
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_reloadMultiplier));
	}
label_30:;
	{
	LINE_NUMBER(1052);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_buildSpeedMultiplier), (jfloat(1)), -1)) == 0) goto label_31;
	}
	{
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_buildSpeedMultiplier));
	}
label_31:;
	{
	LINE_NUMBER(1053);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_dragMultiplier), (jfloat(1)), -1)) == 0) goto label_32;
	}
	{
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_dragMultiplier));
	}
label_32:;
	{
	LINE_NUMBER(1054);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_3;
	}
	{
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_armorOverride));
	}
label_3:;
	LINE_NUMBER(1056);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readStatus", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1059);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1060);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	frame[2].f = temp1;
	LINE_NUMBER(1062);
	clinit_mindustry_entities_units_StatusEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_units_StatusEntry);
	init_mindustry_entities_units_StatusEntry(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_status;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, (frame[1].i));
	sp[0].o = (jobject)((func_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[1].o)), (frame[2].f));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1064);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_dynamic) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1066);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(1068);
	if (((frame[4].i) & (jint(1))) == 0) goto label_7;
	}
	{
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_damageMultiplier = temp0;
	}
label_7:;
	{
	LINE_NUMBER(1069);
	if (((frame[4].i) & (jint(2))) == 0) goto label_8;
	}
	{
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_healthMultiplier = temp0;
	}
label_8:;
	{
	LINE_NUMBER(1070);
	if (((frame[4].i) & (jint(4))) == 0) goto label_9;
	}
	{
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_speedMultiplier = temp0;
	}
label_9:;
	{
	LINE_NUMBER(1071);
	if (((frame[4].i) & (8)) == 0) goto label_10;
	}
	{
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_reloadMultiplier = temp0;
	}
label_10:;
	{
	LINE_NUMBER(1072);
	if (((frame[4].i) & (16)) == 0) goto label_11;
	}
	{
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = temp0;
	}
label_11:;
	{
	LINE_NUMBER(1073);
	if (((frame[4].i) & (32)) == 0) goto label_12;
	}
	{
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_dragMultiplier = temp0;
	}
label_12:;
	{
	LINE_NUMBER(1074);
	if (((frame[4].i) & (64)) == 0) goto label_4;
	}
	{
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_armorOverride = temp0;
	}
label_4:;
	{
	LINE_NUMBER(1077);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeItems_arc_util_io_Writes_mindustry_type_ItemStack(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeItems", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1081);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	SM_mindustry_io_TypeIO_writeItem_arc_util_io_Writes_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1082);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount));
	LINE_NUMBER(1083);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readItems", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1086);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItem_arc_util_io_Reads_R_mindustry_type_Item(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_type_ItemStack_set_mindustry_type_Item_int_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemStack_set_mindustry_type_Item_int_R_mindustry_type_ItemStack])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_R_mindustry_type_ItemStack(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readItems", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1090);
	clinit_mindustry_type_ItemStack(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItem_arc_util_io_Reads_R_mindustry_type_Item(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeItemStacks_arc_util_io_Writes_Array1_mindustry_type_ItemStack(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeItemStacks", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1094);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(1095);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1096);
	SM_mindustry_io_TypeIO_writeItems_arc_util_io_Writes_mindustry_type_ItemStack(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(1095);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1098);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readItemStacks_arc_util_io_Reads_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readItemStacks", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1101);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1102);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1103);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(1104);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_R_mindustry_type_ItemStack(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1103);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1105);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeLiquidStacks_arc_util_io_Writes_Array1_mindustry_type_LiquidStack(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeLiquidStacks", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1109);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(1110);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1111);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[5].o)))->F_liquid;
	SM_mindustry_io_TypeIO_writeLiquid_arc_util_io_Writes_mindustry_type_Liquid(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1112);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[0].o), ((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[5].o)))->F_amount));
	LINE_NUMBER(1110);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readLiquidStacks_arc_util_io_Reads_R_Array1_mindustry_type_LiquidStack(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readLiquidStacks", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1117);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1118);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_LiquidStack, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1119);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(1120);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readLiquid_arc_util_io_Reads_R_mindustry_type_Liquid(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1121);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_mindustry_type_LiquidStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_LiquidStack);
	sp[2].o = frame[4].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[0].o));
	init_mindustry_type_LiquidStack_mindustry_type_Liquid_float(ctx, sp[1].o, sp[2].o, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1119);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1123);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeTeam", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1127);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_game_Team *) NULL_CHECK(sp[-1].o))->F_id;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readTeam", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1131);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeAction_arc_util_io_Writes_mindustry_net_Packets$AdminAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1135);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_net_Packets$AdminAction_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_Packets$AdminAction_ordinal_R_int])(ctx, (frame[1].o));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte(temp0)));
	LINE_NUMBER(1136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readAction_arc_util_io_Reads_R_mindustry_net_Packets$AdminAction(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readAction", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1139);
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packets$AdminAction_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeUnitType_arc_util_io_Writes_mindustry_type_UnitType(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeUnitType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1143);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(1144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readUnitType_arc_util_io_Reads_R_mindustry_type_UnitType(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readUnitType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1147);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeEffect_arc_util_io_Writes_mindustry_entities_Effect(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeEffect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1151);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), ((jint)((mindustry_entities_Effect *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(1152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readEffect_arc_util_io_Reads_R_mindustry_entities_Effect(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readEffect", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1155);
	jint temp0 = (jint)((func_arc_util_io_Reads_us_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_us_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_entities_Effect_get_int_R_mindustry_entities_Effect(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeColor_arc_util_io_Writes_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1159);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, (frame[1].o));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readColor_arc_util_io_Reads_R_arc_graphics_Color(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1163);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	init_arc_graphics_Color_int(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readColor_arc_util_io_Reads_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1167);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeIntSeq_arc_util_io_Writes_arc_struct_IntSeq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeIntSeq", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1171);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(1172);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(1173);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	LINE_NUMBER(1172);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readIntSeq_arc_util_io_Reads_R_arc_struct_IntSeq(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readIntSeq", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1178);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1179);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1180);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(1181);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[2].o)))->F_items;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1180);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1183);
	((arc_struct_IntSeq *) NULL_CHECK((frame[2].o)))->F_size = (frame[1].i);
	LINE_NUMBER(1184);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeContent_arc_util_io_Writes_mindustry_ctype_Content(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeContent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1188);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1189);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(1190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readContent_arc_util_io_Reads_R_mindustry_ctype_Content(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readContent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1193);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1194);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i));
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeLiquid_arc_util_io_Writes_mindustry_type_Liquid(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeLiquid", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1198);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_ctype_Content *) NULL_CHECK(sp[-1].o))->F_id;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readLiquid_arc_util_io_Reads_R_mindustry_type_Liquid(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readLiquid", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1202);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1203);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid])(ctx, sp[0].o, (frame[1].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeBulletType_arc_util_io_Writes_mindustry_entities_bullet_BulletType(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeBulletType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1207);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(1208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readBulletType_arc_util_io_Reads_R_mindustry_entities_bullet_BulletType(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readBulletType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1211);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_bullet;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeItem_arc_util_io_Writes_mindustry_type_Item(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1215);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_ctype_Content *) NULL_CHECK(sp[-1].o))->F_id;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readItem_arc_util_io_Reads_R_mindustry_type_Item(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1219);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1220);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, (frame[1].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeSound_arc_util_io_Writes_arc_audio_Sound(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeSound", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1225);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_gen_Sounds_getSoundId_arc_audio_Sound_R_int(ctx, (frame[1].o));
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readSound_arc_util_io_Reads_R_arc_audio_Sound(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readSound", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1229);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_gen_Sounds_getSound_int_R_arc_audio_Sound(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeWeather_arc_util_io_Writes_mindustry_type_Weather(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeWeather", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1233);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_ctype_Content *) NULL_CHECK(sp[-1].o))->F_id;
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readWeather_arc_util_io_Reads_R_mindustry_type_Weather(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readWeather", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1237);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1238);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_mindustry_type_Weather, sp[0].o);
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1242);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1243);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(1244);
	((func_arc_util_io_Writes_str_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_str_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1246);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (jint(0)));
	}
label_4:;
	LINE_NUMBER(1248);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1251);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1252);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1253);
	sp[0].o = (jobject)((func_arc_util_io_Reads_str_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_str_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1255);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeString_java_nio_ByteBuffer_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1260);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1261);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_charset;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1262);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (jshort((((jarray) nullCheck(ctx, (frame[2].o)))->length))));
	LINE_NUMBER(1263);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1264);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(1265);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (jint(-1)));
	}
label_6:;
	LINE_NUMBER(1267);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readString_java_nio_ByteBuffer_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1270);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getShort_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_getShort_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1271);
	if ((frame[1].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1272);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1273);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1274);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_charset;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1276);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeBytes_arc_util_io_Writes_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeBytes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1281);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (jshort((((jarray) nullCheck(ctx, (frame[1].o)))->length))));
	LINE_NUMBER(1282);
	((func_arc_util_io_Writes_b_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_Array1_byte])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readBytes_arc_util_io_Reads_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readBytes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1286);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1287);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	sp[0].o = (jobject)((func_arc_util_io_Reads_b_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_b_Array1_byte_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeInts_arc_util_io_Writes_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeInts", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1291);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (jshort((((jarray) nullCheck(ctx, (frame[1].o)))->length))));
	LINE_NUMBER(1292);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1293);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(1292);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1295);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readInts_arc_util_io_Reads_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readInts", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1298);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1299);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1300);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(1301);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1300);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1303);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeShorts_arc_util_io_Writes_Array1_short(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeShorts", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1307);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (jshort((((jarray) nullCheck(ctx, (frame[1].o)))->length))));
	LINE_NUMBER(1308);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1309);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(1308);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1311);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readShorts_arc_util_io_Reads_R_Array1_short(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readShorts", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1314);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1315);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1316);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(1317);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1316);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1319);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeTraceInfo_arc_util_io_Writes_mindustry_net_Administration$TraceInfo(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeTraceInfo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1323);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[1].o)))->F_ip;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1324);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[1].o)))->F_uuid;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1325);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[1].o)))->F_locale;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1326);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[1].o)))->F_modded) == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1327);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[1].o)))->F_mobile) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1328);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[1].o)))->F_timesJoined));
	LINE_NUMBER(1329);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[0].o), ((jint)((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[1].o)))->F_timesKicked));
	LINE_NUMBER(1331);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[1].o)))->F_ips;
	SM_mindustry_io_TypeIO_writeStrings_arc_util_io_Writes_Array1_java_lang_String_int(ctx, sp[0].o, sp[1].o, (12));
	LINE_NUMBER(1332);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[1].o)))->F_names;
	SM_mindustry_io_TypeIO_writeStrings_arc_util_io_Writes_Array1_java_lang_String_int(ctx, sp[0].o, sp[1].o, (12));
	LINE_NUMBER(1333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readTraceInfo_arc_util_io_Reads_R_mindustry_net_Administration$TraceInfo(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readTraceInfo", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1336);
	clinit_mindustry_net_Administration$TraceInfo(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$TraceInfo);
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[0].o));
	sp[3].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp2 = sp[2].o;
	sp[2].o = temp1;
	jobject temp3 = sp[3].o;
	sp[3].o = temp2;
	sp[4].o = temp3;
	sp += 5;
	if (temp0 != (jint(1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	if (temp0 != (jint(1))) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 7;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readStrings_arc_util_io_Reads_R_Array1_java_lang_String(ctx, (frame[0].o));
	sp[7].o = (jobject)SM_mindustry_io_TypeIO_readStrings_arc_util_io_Reads_R_Array1_java_lang_String(ctx, (frame[0].o));
	init_mindustry_net_Administration$TraceInfo_java_lang_String_java_lang_String_java_lang_String_boolean_boolean_int_int_Array1_java_lang_String_Array1_java_lang_String(ctx, sp[0].o, sp[2].o, sp[3].o, sp[4].o, sp[5].i, sp[6].i, temp0, temp1, sp[1].o, sp[7].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeStrings_arc_util_io_Writes_Array1_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeStrings", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1340);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1341);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(1342);
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(1341);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1344);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeStrings_arc_util_io_Writes_Array1_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeStrings", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1347);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(1348);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1349);
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(1348);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1351);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readStrings_arc_util_io_Reads_R_Array1_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readStrings", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1354);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1355);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1356);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(1357);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1356);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1359);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeStringArray_arc_util_io_Writes_Array2_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeStringArray", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1364);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(1365);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1366);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[5].o)))->length));
	LINE_NUMBER(1367);
	frame[6].o = (frame[5].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_6:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_7;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(1368);
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, (frame[0].o), (frame[9].o));
	LINE_NUMBER(1367);
	INST_IINC(8, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1365);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1371);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readStringArray_arc_util_io_Reads_R_Array2_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readStringArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1374);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1376);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1377);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(1378);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(1379);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[4].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1380);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(1381);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i));
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1380);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(1377);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1384);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_TypeIO_writeStringData_java_io_DataOutput_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:writeStringData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1388);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1389);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_charset;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1390);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, (frame[0].o)))(ctx, (frame[0].o), (jshort((((jarray) nullCheck(ctx, (frame[2].o)))->length))));
	LINE_NUMBER(1391);
	((func_java_io_DataOutput_write_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_write_Array1_byte, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1392);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(1393);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, (frame[0].o)))(ctx, (frame[0].o), (jint(-1)));
	}
label_6:;
	LINE_NUMBER(1395);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_io_TypeIO_readStringData_java_io_DataInput_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:readStringData", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1398);
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1399);
	if ((frame[1].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1400);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1401);
	((func_java_io_DataInput_readFully_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1402);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_charset;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1404);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_io_TypeIO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_io_TypeIO_nullType = jint(0);
	SF_mindustry_io_TypeIO_integerType = jint(1);
	SF_mindustry_io_TypeIO_longType = jint(2);
	SF_mindustry_io_TypeIO_floatType = jint(3);
	SF_mindustry_io_TypeIO_stringType = jint(4);
	SF_mindustry_io_TypeIO_contentType = jint(5);
	SF_mindustry_io_TypeIO_intSeqType = jint(6);
	SF_mindustry_io_TypeIO_point2Type = jint(7);
	SF_mindustry_io_TypeIO_point2ArrayType = jint(8);
	SF_mindustry_io_TypeIO_techNodeType = jint(9);
	SF_mindustry_io_TypeIO_booleanType = jint(10);
	SF_mindustry_io_TypeIO_doubleType = jint(11);
	SF_mindustry_io_TypeIO_buildingType = jint(12);
	SF_mindustry_io_TypeIO_lAccessType = jint(13);
	SF_mindustry_io_TypeIO_byteArrayType = jint(14);
	SF_mindustry_io_TypeIO_legacyType = jint(15);
	SF_mindustry_io_TypeIO_booleanArrayType = jint(16);
	SF_mindustry_io_TypeIO_unitType = jint(17);
	SF_mindustry_io_TypeIO_vec2ArrayType = jint(18);
	SF_mindustry_io_TypeIO_vec2Type = jint(19);
	SF_mindustry_io_TypeIO_teamType = jint(20);
	SF_mindustry_io_TypeIO_intArrayType = jint(21);
	SF_mindustry_io_TypeIO_objectArrayType = jint(22);
	SF_mindustry_io_TypeIO_unitCommandType = jint(23);
	SF_mindustry_io_TypeIO_maxArraySize = jint(1000);
	SF_mindustry_io_TypeIO_maxByteArraySize = jint(40000);
	SF_mindustry_io_TypeIO_maxSyncedPlans = jint(20);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO(ctx);
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_entities_units_WeaponMount, (jint(0)));
	clinit_mindustry_io_TypeIO(ctx);
	SF_mindustry_io_TypeIO_noMounts = sp[0].o;
	LINE_NUMBER(453);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_entities_abilities_Ability, (jint(0)));
	clinit_mindustry_io_TypeIO(ctx);
	SF_mindustry_io_TypeIO_noAbilities = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_io_TypeIO;
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

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method readObject
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method readObjectBoxed
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method readObject
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method readObjectSafe
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method readObject
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method readObject
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method readObject
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method readCommand
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[26]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method readClientPlanConfig
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[49]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method readVecNullable
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[64]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[115]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[118]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[119]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[120]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[121]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_io_TypeIO[] {
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
	&class_mindustry_io_TypeIO$BuildingBox,
	&class_mindustry_io_TypeIO$UnitBox,
	&class_mindustry_io_TypeIO$ContentMapper,
	&class_mindustry_io_TypeIO$ClientBuildPlans,
	&class_mindustry_io_TypeIO$Boxed,
};

static FieldMetadata fields[] {
	{ "nullType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_nullType, "B", 25 },
	{ "integerType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_integerType, "B", 25 },
	{ "longType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_longType, "B", 25 },
	{ "floatType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_floatType, "B", 25 },
	{ "stringType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_stringType, "B", 25 },
	{ "contentType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_contentType, "B", 25 },
	{ "intSeqType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_intSeqType, "B", 25 },
	{ "point2Type", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_point2Type, "B", 25 },
	{ "point2ArrayType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_point2ArrayType, "B", 25 },
	{ "techNodeType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_techNodeType, "B", 25 },
	{ "booleanType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_booleanType, "B", 25 },
	{ "doubleType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_doubleType, "B", 25 },
	{ "buildingType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_buildingType, "B", 25 },
	{ "lAccessType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_lAccessType, "B", 25 },
	{ "byteArrayType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_byteArrayType, "B", 25 },
	{ "legacyType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_legacyType, "B", 25 },
	{ "booleanArrayType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_booleanArrayType, "B", 25 },
	{ "unitType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_unitType, "B", 25 },
	{ "vec2ArrayType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_vec2ArrayType, "B", 25 },
	{ "vec2Type", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_vec2Type, "B", 25 },
	{ "teamType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_teamType, "B", 25 },
	{ "intArrayType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_intArrayType, "B", 25 },
	{ "objectArrayType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_objectArrayType, "B", 25 },
	{ "unitCommandType", &class_byte, (intptr_t) &SF_mindustry_io_TypeIO_unitCommandType, "B", 25 },
	{ "maxArraySize", &class_int, (intptr_t) &SF_mindustry_io_TypeIO_maxArraySize, "I", 26 },
	{ "maxByteArraySize", &class_int, (intptr_t) &SF_mindustry_io_TypeIO_maxByteArraySize, "I", 26 },
	{ "maxSyncedPlans", &class_int, (intptr_t) &SF_mindustry_io_TypeIO_maxSyncedPlans, "I", 26 },
	{ "noMounts", getArrayClass(&class_mindustry_entities_units_WeaponMount, 1), (intptr_t) &SF_mindustry_io_TypeIO_noMounts, "[Lmindustry/entities/units/WeaponMount;", 24 },
	{ "noAbilities", getArrayClass(&class_mindustry_entities_abilities_Ability, 1), (intptr_t) &SF_mindustry_io_TypeIO_noAbilities, "[Lmindustry/entities/abilities/Ability;", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_TypeIO, 0, "()V", 1 },
	{ "writeObject", (intptr_t) SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object, 0, "(Larc/util/io/Writes;Ljava/lang/Object;)V", 9 },
	{ "writeObject", (intptr_t) SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_double, 0, "(Larc/util/io/Writes;D)V", 9 },
	{ "readObject", (intptr_t) SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_R_java_lang_Object, 0, "(Larc/util/io/Reads;)Ljava/lang/Object;", 9 },
	{ "readObjectBoxed", (intptr_t) SM_mindustry_io_TypeIO_readObjectBoxed_arc_util_io_Reads_boolean_R_java_lang_Object, 0, "(Larc/util/io/Reads;Z)Ljava/lang/Object;", 9 },
	{ "readObject", (intptr_t) SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_R_java_lang_Object, 0, "(Larc/util/io/Reads;ZLmindustry/io/TypeIO$ContentMapper;)Ljava/lang/Object;", 9 },
	{ "readObjectSafe", (intptr_t) SM_mindustry_io_TypeIO_readObjectSafe_arc_util_io_Reads_R_java_lang_Object, 0, "(Larc/util/io/Reads;)Ljava/lang/Object;", 9 },
	{ "readObject", (intptr_t) SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_R_java_lang_Object, 0, "(Larc/util/io/Reads;ZLmindustry/io/TypeIO$ContentMapper;Z)Ljava/lang/Object;", 9 },
	{ "readObject", (intptr_t) SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_boolean_R_java_lang_Object, 0, "(Larc/util/io/Reads;ZLmindustry/io/TypeIO$ContentMapper;ZZ)Ljava/lang/Object;", 9 },
	{ "readObject", (intptr_t) SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_boolean_boolean_byte_R_java_lang_Object, 0, "(Larc/util/io/Reads;ZLmindustry/io/TypeIO$ContentMapper;ZZB)Ljava/lang/Object;", 9 },
	{ "writeUiBuilder", (intptr_t) SM_mindustry_io_TypeIO_writeUiBuilder_arc_util_io_Writes_mindustry_ui_builder_UiBuilder$NodeBuilder, 0, "(Larc/util/io/Writes;Lmindustry/ui/builder/UiBuilder$NodeBuilder;)V", 9 },
	{ "readUiBuilder", (intptr_t) SM_mindustry_io_TypeIO_readUiBuilder_arc_util_io_Reads_R_mindustry_ui_builder_UiBuilder$NodeBuilder, 0, "(Larc/util/io/Reads;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 9 },
	{ "writeMenuResult", (intptr_t) SM_mindustry_io_TypeIO_writeMenuResult_arc_util_io_Writes_mindustry_ui_builder_MenuResult, 0, "(Larc/util/io/Writes;Lmindustry/ui/builder/MenuResult;)V", 9 },
	{ "readMenuResult", (intptr_t) SM_mindustry_io_TypeIO_readMenuResult_arc_util_io_Reads_R_mindustry_ui_builder_MenuResult, 0, "(Larc/util/io/Reads;)Lmindustry/ui/builder/MenuResult;", 9 },
	{ "writePayload", (intptr_t) SM_mindustry_io_TypeIO_writePayload_arc_util_io_Writes_mindustry_world_blocks_payloads_Payload, 0, "(Larc/util/io/Writes;Lmindustry/world/blocks/payloads/Payload;)V", 9 },
	{ "readPayload", (intptr_t) SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload, 0, "(Larc/util/io/Reads;)Lmindustry/world/blocks/payloads/Payload;", 9 },
	{ "writeMounts", (intptr_t) SM_mindustry_io_TypeIO_writeMounts_arc_util_io_Writes_Array1_mindustry_entities_units_WeaponMount, 0, "(Larc/util/io/Writes;[Lmindustry/entities/units/WeaponMount;)V", 9 },
	{ "readMounts", (intptr_t) SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount, 0, "(Larc/util/io/Reads;[Lmindustry/entities/units/WeaponMount;)[Lmindustry/entities/units/WeaponMount;", 9 },
	{ "readMounts", (intptr_t) SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_R_Array1_mindustry_entities_units_WeaponMount, 0, "(Larc/util/io/Reads;)[Lmindustry/entities/units/WeaponMount;", 9 },
	{ "readAbilities", (intptr_t) SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability, 0, "(Larc/util/io/Reads;[Lmindustry/entities/abilities/Ability;)[Lmindustry/entities/abilities/Ability;", 9 },
	{ "writeAbilities", (intptr_t) SM_mindustry_io_TypeIO_writeAbilities_arc_util_io_Writes_Array1_mindustry_entities_abilities_Ability, 0, "(Larc/util/io/Writes;[Lmindustry/entities/abilities/Ability;)V", 9 },
	{ "readAbilities", (intptr_t) SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_R_Array1_mindustry_entities_abilities_Ability, 0, "(Larc/util/io/Reads;)[Lmindustry/entities/abilities/Ability;", 9 },
	{ "writeUnitContainer", (intptr_t) SM_mindustry_io_TypeIO_writeUnitContainer_arc_util_io_Writes_mindustry_entities_Units$UnitSyncContainer, 0, "(Larc/util/io/Writes;Lmindustry/entities/Units$UnitSyncContainer;)V", 9 },
	{ "readUnitContainer", (intptr_t) SM_mindustry_io_TypeIO_readUnitContainer_arc_util_io_Reads_R_mindustry_entities_Units$UnitSyncContainer, 0, "(Larc/util/io/Reads;)Lmindustry/entities/Units$UnitSyncContainer;", 9 },
	{ "writeUnit", (intptr_t) SM_mindustry_io_TypeIO_writeUnit_arc_util_io_Writes_mindustry_gen_Unit, 0, "(Larc/util/io/Writes;Lmindustry/gen/Unit;)V", 9 },
	{ "readUnit", (intptr_t) SM_mindustry_io_TypeIO_readUnit_arc_util_io_Reads_R_mindustry_gen_Unit, 0, "(Larc/util/io/Reads;)Lmindustry/gen/Unit;", 9 },
	{ "writeCommand", (intptr_t) SM_mindustry_io_TypeIO_writeCommand_arc_util_io_Writes_mindustry_ai_UnitCommand, 0, "(Larc/util/io/Writes;Lmindustry/ai/UnitCommand;)V", 9 },
	{ "readCommand", (intptr_t) SM_mindustry_io_TypeIO_readCommand_arc_util_io_Reads_R_mindustry_ai_UnitCommand, 0, "(Larc/util/io/Reads;)Lmindustry/ai/UnitCommand;", 9 },
	{ "writeStance", (intptr_t) SM_mindustry_io_TypeIO_writeStance_arc_util_io_Writes_mindustry_ai_UnitStance, 0, "(Larc/util/io/Writes;Lmindustry/ai/UnitStance;)V", 9 },
	{ "readStance", (intptr_t) SM_mindustry_io_TypeIO_readStance_arc_util_io_Reads_R_mindustry_ai_UnitStance, 0, "(Larc/util/io/Reads;)Lmindustry/ai/UnitStance;", 9 },
	{ "writePosEntity", (intptr_t) SM_mindustry_io_TypeIO_writePosEntity_arc_util_io_Writes_mindustry_gen_Posc, 0, "(Larc/util/io/Writes;Lmindustry/gen/Posc;)V", 9 },
	{ "readPosEntity", (intptr_t) SM_mindustry_io_TypeIO_readPosEntity_arc_util_io_Reads_R_mindustry_gen_Posc, 0, "(Larc/util/io/Reads;)Lmindustry/gen/Posc;", 9 },
	{ "writeEntity", (intptr_t) SM_mindustry_io_TypeIO_writeEntity_arc_util_io_Writes_mindustry_gen_Entityc, 0, "(Larc/util/io/Writes;Lmindustry/gen/Entityc;)V", 9 },
	{ "readEntity", (intptr_t) SM_mindustry_io_TypeIO_readEntity_arc_util_io_Reads_R_mindustry_gen_Entityc, 0, "(Larc/util/io/Reads;)Lmindustry/gen/Entityc;", 9 },
	{ "writeBuilding", (intptr_t) SM_mindustry_io_TypeIO_writeBuilding_arc_util_io_Writes_mindustry_gen_Building, 0, "(Larc/util/io/Writes;Lmindustry/gen/Building;)V", 9 },
	{ "readBuilding", (intptr_t) SM_mindustry_io_TypeIO_readBuilding_arc_util_io_Reads_R_mindustry_gen_Building, 0, "(Larc/util/io/Reads;)Lmindustry/gen/Building;", 9 },
	{ "writeTile", (intptr_t) SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile, 0, "(Larc/util/io/Writes;Lmindustry/world/Tile;)V", 9 },
	{ "readTile", (intptr_t) SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile, 0, "(Larc/util/io/Reads;)Lmindustry/world/Tile;", 9 },
	{ "writeBlock", (intptr_t) SM_mindustry_io_TypeIO_writeBlock_arc_util_io_Writes_mindustry_world_Block, 0, "(Larc/util/io/Writes;Lmindustry/world/Block;)V", 9 },
	{ "readBlock", (intptr_t) SM_mindustry_io_TypeIO_readBlock_arc_util_io_Reads_R_mindustry_world_Block, 0, "(Larc/util/io/Reads;)Lmindustry/world/Block;", 9 },
	{ "getMaxPlans", (intptr_t) SM_mindustry_io_TypeIO_getMaxPlans_arc_struct_Queue_R_int, 0, "(Larc/struct/Queue;)I", 9 },
	{ "writePlansQueueNet", (intptr_t) SM_mindustry_io_TypeIO_writePlansQueueNet_arc_util_io_Writes_arc_struct_Queue, 0, "(Larc/util/io/Writes;Larc/struct/Queue;)V", 9 },
	{ "readPlansQueueNet", (intptr_t) SM_mindustry_io_TypeIO_readPlansQueueNet_arc_util_io_Reads_R_arc_struct_Queue, 0, "(Larc/util/io/Reads;)Larc/struct/Queue;", 9 },
	{ "readPlansQueue", (intptr_t) SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue, 0, "(Larc/util/io/Reads;)Larc/struct/Queue;", 9 },
	{ "writePlan", (intptr_t) SM_mindustry_io_TypeIO_writePlan_arc_util_io_Writes_mindustry_entities_units_BuildPlan, 0, "(Larc/util/io/Writes;Lmindustry/entities/units/BuildPlan;)V", 9 },
	{ "readPlan", (intptr_t) SM_mindustry_io_TypeIO_readPlan_arc_util_io_Reads_R_mindustry_entities_units_BuildPlan, 0, "(Larc/util/io/Reads;)Lmindustry/entities/units/BuildPlan;", 9 },
	{ "writePlans", (intptr_t) SM_mindustry_io_TypeIO_writePlans_arc_util_io_Writes_Array1_mindustry_entities_units_BuildPlan, 0, "(Larc/util/io/Writes;[Lmindustry/entities/units/BuildPlan;)V", 9 },
	{ "readPlans", (intptr_t) SM_mindustry_io_TypeIO_readPlans_arc_util_io_Reads_R_Array1_mindustry_entities_units_BuildPlan, 0, "(Larc/util/io/Reads;)[Lmindustry/entities/units/BuildPlan;", 9 },
	{ "writeClientPlans", (intptr_t) SM_mindustry_io_TypeIO_writeClientPlans_arc_util_io_Writes_mindustry_io_TypeIO$ClientBuildPlans, 0, "(Larc/util/io/Writes;Lmindustry/io/TypeIO$ClientBuildPlans;)V", 9 },
	{ "readClientPlans", (intptr_t) SM_mindustry_io_TypeIO_readClientPlans_arc_util_io_Reads_R_mindustry_io_TypeIO$ClientBuildPlans, 0, "(Larc/util/io/Reads;)Lmindustry/io/TypeIO$ClientBuildPlans;", 9 },
	{ "readClientPlanConfig", (intptr_t) SM_mindustry_io_TypeIO_readClientPlanConfig_arc_util_io_Reads_R_java_lang_Object, 0, "(Larc/util/io/Reads;)Ljava/lang/Object;", 8 },
	{ "validClientPlanConfig", (intptr_t) SM_mindustry_io_TypeIO_validClientPlanConfig_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 8 },
	{ "writeController", (intptr_t) SM_mindustry_io_TypeIO_writeController_arc_util_io_Writes_mindustry_entities_units_UnitController, 0, "(Larc/util/io/Writes;Lmindustry/entities/units/UnitController;)V", 9 },
	{ "readController", (intptr_t) SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController, 0, "(Larc/util/io/Reads;Lmindustry/entities/units/UnitController;)Lmindustry/entities/units/UnitController;", 9 },
	{ "writeKick", (intptr_t) SM_mindustry_io_TypeIO_writeKick_arc_util_io_Writes_mindustry_net_Packets$KickReason, 0, "(Larc/util/io/Writes;Lmindustry/net/Packets$KickReason;)V", 9 },
	{ "readKick", (intptr_t) SM_mindustry_io_TypeIO_readKick_arc_util_io_Reads_R_mindustry_net_Packets$KickReason, 0, "(Larc/util/io/Reads;)Lmindustry/net/Packets$KickReason;", 9 },
	{ "writeMarkerControl", (intptr_t) SM_mindustry_io_TypeIO_writeMarkerControl_arc_util_io_Writes_mindustry_logic_LMarkerControl, 0, "(Larc/util/io/Writes;Lmindustry/logic/LMarkerControl;)V", 9 },
	{ "readMarkerControl", (intptr_t) SM_mindustry_io_TypeIO_readMarkerControl_arc_util_io_Reads_R_mindustry_logic_LMarkerControl, 0, "(Larc/util/io/Reads;)Lmindustry/logic/LMarkerControl;", 9 },
	{ "writeRules", (intptr_t) SM_mindustry_io_TypeIO_writeRules_arc_util_io_Writes_mindustry_game_Rules, 0, "(Larc/util/io/Writes;Lmindustry/game/Rules;)V", 9 },
	{ "readRules", (intptr_t) SM_mindustry_io_TypeIO_readRules_arc_util_io_Reads_R_mindustry_game_Rules, 0, "(Larc/util/io/Reads;)Lmindustry/game/Rules;", 9 },
	{ "writeObjectives", (intptr_t) SM_mindustry_io_TypeIO_writeObjectives_arc_util_io_Writes_mindustry_game_MapObjectives, 0, "(Larc/util/io/Writes;Lmindustry/game/MapObjectives;)V", 9 },
	{ "readObjectives", (intptr_t) SM_mindustry_io_TypeIO_readObjectives_arc_util_io_Reads_R_mindustry_game_MapObjectives, 0, "(Larc/util/io/Reads;)Lmindustry/game/MapObjectives;", 9 },
	{ "writeObjectiveMarker", (intptr_t) SM_mindustry_io_TypeIO_writeObjectiveMarker_arc_util_io_Writes_mindustry_game_MapObjectives$ObjectiveMarker, 0, "(Larc/util/io/Writes;Lmindustry/game/MapObjectives$ObjectiveMarker;)V", 9 },
	{ "readObjectiveMarker", (intptr_t) SM_mindustry_io_TypeIO_readObjectiveMarker_arc_util_io_Reads_R_mindustry_game_MapObjectives$ObjectiveMarker, 0, "(Larc/util/io/Reads;)Lmindustry/game/MapObjectives$ObjectiveMarker;", 9 },
	{ "writeVecNullable", (intptr_t) SM_mindustry_io_TypeIO_writeVecNullable_arc_util_io_Writes_arc_math_geom_Vec2, 0, "(Larc/util/io/Writes;Larc/math/geom/Vec2;)V", 9 },
	{ "readVecNullable", (intptr_t) SM_mindustry_io_TypeIO_readVecNullable_arc_util_io_Reads_R_arc_math_geom_Vec2, 0, "(Larc/util/io/Reads;)Larc/math/geom/Vec2;", 9 },
	{ "writeVec2", (intptr_t) SM_mindustry_io_TypeIO_writeVec2_arc_util_io_Writes_arc_math_geom_Vec2, 0, "(Larc/util/io/Writes;Larc/math/geom/Vec2;)V", 9 },
	{ "readVec2", (intptr_t) SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2, 0, "(Larc/util/io/Reads;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 9 },
	{ "readVec2", (intptr_t) SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_R_arc_math_geom_Vec2, 0, "(Larc/util/io/Reads;)Larc/math/geom/Vec2;", 9 },
	{ "writeStatus", (intptr_t) SM_mindustry_io_TypeIO_writeStatus_arc_util_io_Writes_mindustry_entities_units_StatusEntry, 0, "(Larc/util/io/Writes;Lmindustry/entities/units/StatusEntry;)V", 9 },
	{ "readStatus", (intptr_t) SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry, 0, "(Larc/util/io/Reads;)Lmindustry/entities/units/StatusEntry;", 9 },
	{ "writeItems", (intptr_t) SM_mindustry_io_TypeIO_writeItems_arc_util_io_Writes_mindustry_type_ItemStack, 0, "(Larc/util/io/Writes;Lmindustry/type/ItemStack;)V", 9 },
	{ "readItems", (intptr_t) SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack, 0, "(Larc/util/io/Reads;Lmindustry/type/ItemStack;)Lmindustry/type/ItemStack;", 9 },
	{ "readItems", (intptr_t) SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_R_mindustry_type_ItemStack, 0, "(Larc/util/io/Reads;)Lmindustry/type/ItemStack;", 9 },
	{ "writeItemStacks", (intptr_t) SM_mindustry_io_TypeIO_writeItemStacks_arc_util_io_Writes_Array1_mindustry_type_ItemStack, 0, "(Larc/util/io/Writes;[Lmindustry/type/ItemStack;)V", 9 },
	{ "readItemStacks", (intptr_t) SM_mindustry_io_TypeIO_readItemStacks_arc_util_io_Reads_R_Array1_mindustry_type_ItemStack, 0, "(Larc/util/io/Reads;)[Lmindustry/type/ItemStack;", 9 },
	{ "writeLiquidStacks", (intptr_t) SM_mindustry_io_TypeIO_writeLiquidStacks_arc_util_io_Writes_Array1_mindustry_type_LiquidStack, 0, "(Larc/util/io/Writes;[Lmindustry/type/LiquidStack;)V", 9 },
	{ "readLiquidStacks", (intptr_t) SM_mindustry_io_TypeIO_readLiquidStacks_arc_util_io_Reads_R_Array1_mindustry_type_LiquidStack, 0, "(Larc/util/io/Reads;)[Lmindustry/type/LiquidStack;", 9 },
	{ "writeTeam", (intptr_t) SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team, 0, "(Larc/util/io/Writes;Lmindustry/game/Team;)V", 9 },
	{ "readTeam", (intptr_t) SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team, 0, "(Larc/util/io/Reads;)Lmindustry/game/Team;", 9 },
	{ "writeAction", (intptr_t) SM_mindustry_io_TypeIO_writeAction_arc_util_io_Writes_mindustry_net_Packets$AdminAction, 0, "(Larc/util/io/Writes;Lmindustry/net/Packets$AdminAction;)V", 9 },
	{ "readAction", (intptr_t) SM_mindustry_io_TypeIO_readAction_arc_util_io_Reads_R_mindustry_net_Packets$AdminAction, 0, "(Larc/util/io/Reads;)Lmindustry/net/Packets$AdminAction;", 9 },
	{ "writeUnitType", (intptr_t) SM_mindustry_io_TypeIO_writeUnitType_arc_util_io_Writes_mindustry_type_UnitType, 0, "(Larc/util/io/Writes;Lmindustry/type/UnitType;)V", 9 },
	{ "readUnitType", (intptr_t) SM_mindustry_io_TypeIO_readUnitType_arc_util_io_Reads_R_mindustry_type_UnitType, 0, "(Larc/util/io/Reads;)Lmindustry/type/UnitType;", 9 },
	{ "writeEffect", (intptr_t) SM_mindustry_io_TypeIO_writeEffect_arc_util_io_Writes_mindustry_entities_Effect, 0, "(Larc/util/io/Writes;Lmindustry/entities/Effect;)V", 9 },
	{ "readEffect", (intptr_t) SM_mindustry_io_TypeIO_readEffect_arc_util_io_Reads_R_mindustry_entities_Effect, 0, "(Larc/util/io/Reads;)Lmindustry/entities/Effect;", 9 },
	{ "writeColor", (intptr_t) SM_mindustry_io_TypeIO_writeColor_arc_util_io_Writes_arc_graphics_Color, 0, "(Larc/util/io/Writes;Larc/graphics/Color;)V", 9 },
	{ "readColor", (intptr_t) SM_mindustry_io_TypeIO_readColor_arc_util_io_Reads_R_arc_graphics_Color, 0, "(Larc/util/io/Reads;)Larc/graphics/Color;", 9 },
	{ "readColor", (intptr_t) SM_mindustry_io_TypeIO_readColor_arc_util_io_Reads_arc_graphics_Color_R_arc_graphics_Color, 0, "(Larc/util/io/Reads;Larc/graphics/Color;)Larc/graphics/Color;", 9 },
	{ "writeIntSeq", (intptr_t) SM_mindustry_io_TypeIO_writeIntSeq_arc_util_io_Writes_arc_struct_IntSeq, 0, "(Larc/util/io/Writes;Larc/struct/IntSeq;)V", 9 },
	{ "readIntSeq", (intptr_t) SM_mindustry_io_TypeIO_readIntSeq_arc_util_io_Reads_R_arc_struct_IntSeq, 0, "(Larc/util/io/Reads;)Larc/struct/IntSeq;", 9 },
	{ "writeContent", (intptr_t) SM_mindustry_io_TypeIO_writeContent_arc_util_io_Writes_mindustry_ctype_Content, 0, "(Larc/util/io/Writes;Lmindustry/ctype/Content;)V", 9 },
	{ "readContent", (intptr_t) SM_mindustry_io_TypeIO_readContent_arc_util_io_Reads_R_mindustry_ctype_Content, 0, "(Larc/util/io/Reads;)Lmindustry/ctype/Content;", 9 },
	{ "writeLiquid", (intptr_t) SM_mindustry_io_TypeIO_writeLiquid_arc_util_io_Writes_mindustry_type_Liquid, 0, "(Larc/util/io/Writes;Lmindustry/type/Liquid;)V", 9 },
	{ "readLiquid", (intptr_t) SM_mindustry_io_TypeIO_readLiquid_arc_util_io_Reads_R_mindustry_type_Liquid, 0, "(Larc/util/io/Reads;)Lmindustry/type/Liquid;", 9 },
	{ "writeBulletType", (intptr_t) SM_mindustry_io_TypeIO_writeBulletType_arc_util_io_Writes_mindustry_entities_bullet_BulletType, 0, "(Larc/util/io/Writes;Lmindustry/entities/bullet/BulletType;)V", 9 },
	{ "readBulletType", (intptr_t) SM_mindustry_io_TypeIO_readBulletType_arc_util_io_Reads_R_mindustry_entities_bullet_BulletType, 0, "(Larc/util/io/Reads;)Lmindustry/entities/bullet/BulletType;", 9 },
	{ "writeItem", (intptr_t) SM_mindustry_io_TypeIO_writeItem_arc_util_io_Writes_mindustry_type_Item, 0, "(Larc/util/io/Writes;Lmindustry/type/Item;)V", 9 },
	{ "readItem", (intptr_t) SM_mindustry_io_TypeIO_readItem_arc_util_io_Reads_R_mindustry_type_Item, 0, "(Larc/util/io/Reads;)Lmindustry/type/Item;", 9 },
	{ "writeSound", (intptr_t) SM_mindustry_io_TypeIO_writeSound_arc_util_io_Writes_arc_audio_Sound, 0, "(Larc/util/io/Writes;Larc/audio/Sound;)V", 9 },
	{ "readSound", (intptr_t) SM_mindustry_io_TypeIO_readSound_arc_util_io_Reads_R_arc_audio_Sound, 0, "(Larc/util/io/Reads;)Larc/audio/Sound;", 9 },
	{ "writeWeather", (intptr_t) SM_mindustry_io_TypeIO_writeWeather_arc_util_io_Writes_mindustry_type_Weather, 0, "(Larc/util/io/Writes;Lmindustry/type/Weather;)V", 9 },
	{ "readWeather", (intptr_t) SM_mindustry_io_TypeIO_readWeather_arc_util_io_Reads_R_mindustry_type_Weather, 0, "(Larc/util/io/Reads;)Lmindustry/type/Weather;", 9 },
	{ "writeString", (intptr_t) SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String, 0, "(Larc/util/io/Writes;Ljava/lang/String;)V", 9 },
	{ "readString", (intptr_t) SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String, 0, "(Larc/util/io/Reads;)Ljava/lang/String;", 9 },
	{ "writeString", (intptr_t) SM_mindustry_io_TypeIO_writeString_java_nio_ByteBuffer_java_lang_String, 0, "(Ljava/nio/ByteBuffer;Ljava/lang/String;)V", 9 },
	{ "readString", (intptr_t) SM_mindustry_io_TypeIO_readString_java_nio_ByteBuffer_R_java_lang_String, 0, "(Ljava/nio/ByteBuffer;)Ljava/lang/String;", 9 },
	{ "writeBytes", (intptr_t) SM_mindustry_io_TypeIO_writeBytes_arc_util_io_Writes_Array1_byte, 0, "(Larc/util/io/Writes;[B)V", 9 },
	{ "readBytes", (intptr_t) SM_mindustry_io_TypeIO_readBytes_arc_util_io_Reads_R_Array1_byte, 0, "(Larc/util/io/Reads;)[B", 9 },
	{ "writeInts", (intptr_t) SM_mindustry_io_TypeIO_writeInts_arc_util_io_Writes_Array1_int, 0, "(Larc/util/io/Writes;[I)V", 9 },
	{ "readInts", (intptr_t) SM_mindustry_io_TypeIO_readInts_arc_util_io_Reads_R_Array1_int, 0, "(Larc/util/io/Reads;)[I", 9 },
	{ "writeShorts", (intptr_t) SM_mindustry_io_TypeIO_writeShorts_arc_util_io_Writes_Array1_short, 0, "(Larc/util/io/Writes;[S)V", 9 },
	{ "readShorts", (intptr_t) SM_mindustry_io_TypeIO_readShorts_arc_util_io_Reads_R_Array1_short, 0, "(Larc/util/io/Reads;)[S", 9 },
	{ "writeTraceInfo", (intptr_t) SM_mindustry_io_TypeIO_writeTraceInfo_arc_util_io_Writes_mindustry_net_Administration$TraceInfo, 0, "(Larc/util/io/Writes;Lmindustry/net/Administration$TraceInfo;)V", 9 },
	{ "readTraceInfo", (intptr_t) SM_mindustry_io_TypeIO_readTraceInfo_arc_util_io_Reads_R_mindustry_net_Administration$TraceInfo, 0, "(Larc/util/io/Reads;)Lmindustry/net/Administration$TraceInfo;", 9 },
	{ "writeStrings", (intptr_t) SM_mindustry_io_TypeIO_writeStrings_arc_util_io_Writes_Array1_java_lang_String_int, 0, "(Larc/util/io/Writes;[Ljava/lang/String;I)V", 9 },
	{ "writeStrings", (intptr_t) SM_mindustry_io_TypeIO_writeStrings_arc_util_io_Writes_Array1_java_lang_String, 0, "(Larc/util/io/Writes;[Ljava/lang/String;)V", 9 },
	{ "readStrings", (intptr_t) SM_mindustry_io_TypeIO_readStrings_arc_util_io_Reads_R_Array1_java_lang_String, 0, "(Larc/util/io/Reads;)[Ljava/lang/String;", 9 },
	{ "writeStringArray", (intptr_t) SM_mindustry_io_TypeIO_writeStringArray_arc_util_io_Writes_Array2_java_lang_String, 0, "(Larc/util/io/Writes;[[Ljava/lang/String;)V", 9 },
	{ "readStringArray", (intptr_t) SM_mindustry_io_TypeIO_readStringArray_arc_util_io_Reads_R_Array2_java_lang_String, 0, "(Larc/util/io/Reads;)[[Ljava/lang/String;", 9 },
	{ "writeStringData", (intptr_t) SM_mindustry_io_TypeIO_writeStringData_java_io_DataOutput_java_lang_String, 0, "(Ljava/io/DataOutput;Ljava/lang/String;)V", 9 },
	{ "readStringData", (intptr_t) SM_mindustry_io_TypeIO_readStringData_java_io_DataInput_R_java_lang_String, 0, "(Ljava/io/DataInput;)Ljava/lang/String;", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_io_TypeIO, 0, "()V", 8 },
};

Class class_mindustry_io_TypeIO{
		.nativeName = (intptr_t) "mindustry/io/TypeIO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_TypeIO),
		.classVtable = (intptr_t) vtable_mindustry_io_TypeIO,
		.staticInitializer = (intptr_t) clinit_mindustry_io_TypeIO,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_io_TypeIO,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 29,
		.nativeFields = (intptr_t) fields,
		.methodCount = 123,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_TypeIO = registerClass(&class_mindustry_io_TypeIO);

}
