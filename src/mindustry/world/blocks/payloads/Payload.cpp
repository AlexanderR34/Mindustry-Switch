#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/gen/EntityMapping.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "arc/util/io/Writes.h"

extern "C" {

jint SF_mindustry_world_blocks_payloads_Payload_payloadUnit;
jint SF_mindustry_world_blocks_payloads_Payload_payloadBlock;

void mark_mindustry_world_blocks_payloads_Payload(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_payloads_Payload *) object;
}

void clinit_mindustry_world_blocks_payloads_Payload(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_world_blocks_payloads_Payload_payloadUnit = jint(0);
	SF_mindustry_world_blocks_payloads_Payload_payloadBlock = jint(1);
}

void M_mindustry_world_blocks_payloads_Payload_update_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_Payload_isDead_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:isDead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_Payload_dump_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:dump", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_Payload_fits_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:fits", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(56);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, (frame[0].o)))(ctx, (frame[0].o));
	if ((floatCompare((temp0 / (jfloat(8.0f))), (frame[1].f), 1)) > 0) goto label_1;
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

jfloat M_mindustry_world_blocks_payloads_Payload_rotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:rotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_Payload_destroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:destroyed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_Payload_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_x_R_float, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_Payload_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_y_R_float, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_Payload_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:remove", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_payloads_Payload_write_mindustry_world_blocks_payloads_Payload_arc_util_io_Writes(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_Payload(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(88);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(89);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), (jint(0)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(91);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(92);
	((func_mindustry_world_blocks_payloads_Payload_write_arc_util_io_Writes) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_write_arc_util_io_Writes, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_payloads_Payload_read_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/Payload:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_Payload(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(100);
	if ((frame[1].i) != 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(103);
	if ((frame[2].i) != (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(104);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	LINE_NUMBER(105);
	clinit_mindustry_world_blocks_payloads_BuildPayload(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_BuildPayload);
	sp[1].o = frame[3].o;
	clinit_mindustry_game_Team(ctx);
	sp[2].o = (jobject)SF_mindustry_game_Team_derelict;
	init_mindustry_world_blocks_payloads_BuildPayload_mindustry_world_Block_mindustry_game_Team(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(106);
	jint temp1 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[4].o)))->F_build;
	((func_mindustry_gen_Building_readAll_arc_util_io_Reads_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_readAll_arc_util_io_Reads_byte])(ctx, sp[0].o, (frame[0].o), (frame[5].i));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[4].o)))->F_build;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_emptyTile;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_4:;
	{
	LINE_NUMBER(110);
	if ((frame[2].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(112);
	sp[0].o = (jobject)SM_mindustry_gen_EntityMapping_map_int_R_arc_func_Prov(ctx, (frame[3].i));
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"No type with ID \u0001 found."_j.string, 1, boxByte(ctx, (frame[3].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)SM_mindustry_gen_EntityMapping_map_int_R_arc_func_Prov(ctx, (frame[3].i));
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(114);
	((func_mindustry_gen_Unit_read_arc_util_io_Reads) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_read_arc_util_io_Reads])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(115);
	clinit_mindustry_world_blocks_payloads_UnitPayload(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_UnitPayload);
	init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit(ctx, sp[0].o, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(117);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown payload type: \u0001"_j.string, 1, boxByte(ctx, (frame[2].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_payloads_Payload;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method read
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[22]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}
}

void *vtable_mindustry_world_blocks_payloads_Payload[] {
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
	(void *) M_mindustry_world_blocks_payloads_Payload_getX_R_float,
	(void *) M_mindustry_world_blocks_payloads_Payload_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_world_blocks_payloads_Payload_update_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_payloads_Payload_isDead_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_Payload_dump_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_Payload_fits_float_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_Payload_rotation_R_float,
	(void *) M_mindustry_world_blocks_payloads_Payload_destroyed,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_world_blocks_payloads_Payload_remove,
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
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "set", "(FFF)V" },
	{ "draw", "()V" },
	{ "drawShadow", "(F)V" },
	{ "size", "()F" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "requirements", "()[Lmindustry/type/ItemStack;" },
	{ "buildTime", "()F" },
	{ "contentEquals", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "update", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "isDead", "()Z" },
	{ "dump", "()Z" },
	{ "fits", "(F)Z" },
	{ "rotation", "()F" },
	{ "destroyed", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "content", "()Lmindustry/ctype/UnlockableContent;" },
	{ "remove", "()V" },
};

static jclass interfaces[] { &class_arc_math_geom_Position, };

static FieldMetadata fields[] {
	{ "payloadUnit", &class_int, (intptr_t) &SF_mindustry_world_blocks_payloads_Payload_payloadUnit, "I", 25 },
	{ "payloadBlock", &class_int, (intptr_t) &SF_mindustry_world_blocks_payloads_Payload_payloadBlock, "I", 25 },
};

static MethodMetadata methods[] {
	{ "set", 0, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, "(FFF)V", 1025 },
	{ "draw", 0, INDEX_mindustry_world_blocks_payloads_Payload_draw, "()V", 1025 },
	{ "drawShadow", 0, INDEX_mindustry_world_blocks_payloads_Payload_drawShadow_float, "(F)V", 1025 },
	{ "size", 0, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, "()F", 1025 },
	{ "x", 0, INDEX_mindustry_world_blocks_payloads_Payload_x_R_float, "()F", 1025 },
	{ "y", 0, INDEX_mindustry_world_blocks_payloads_Payload_y_R_float, "()F", 1025 },
	{ "requirements", 0, INDEX_mindustry_world_blocks_payloads_Payload_requirements_R_Array1_mindustry_type_ItemStack, "()[Lmindustry/type/ItemStack;", 1025 },
	{ "buildTime", 0, INDEX_mindustry_world_blocks_payloads_Payload_buildTime_R_float, "()F", 1025 },
	{ "contentEquals", 0, INDEX_mindustry_world_blocks_payloads_Payload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/world/blocks/payloads/Payload;)Z", 1025 },
	{ "update", (intptr_t) M_mindustry_world_blocks_payloads_Payload_update_mindustry_gen_Unit_mindustry_gen_Building, INDEX_mindustry_world_blocks_payloads_Payload_update_mindustry_gen_Unit_mindustry_gen_Building, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 1 },
	{ "isDead", (intptr_t) M_mindustry_world_blocks_payloads_Payload_isDead_R_boolean, INDEX_mindustry_world_blocks_payloads_Payload_isDead_R_boolean, "()Z", 1 },
	{ "dump", (intptr_t) M_mindustry_world_blocks_payloads_Payload_dump_R_boolean, INDEX_mindustry_world_blocks_payloads_Payload_dump_R_boolean, "()Z", 1 },
	{ "fits", (intptr_t) M_mindustry_world_blocks_payloads_Payload_fits_float_R_boolean, INDEX_mindustry_world_blocks_payloads_Payload_fits_float_R_boolean, "(F)Z", 1 },
	{ "rotation", (intptr_t) M_mindustry_world_blocks_payloads_Payload_rotation_R_float, INDEX_mindustry_world_blocks_payloads_Payload_rotation_R_float, "()F", 1 },
	{ "destroyed", (intptr_t) M_mindustry_world_blocks_payloads_Payload_destroyed, INDEX_mindustry_world_blocks_payloads_Payload_destroyed, "()V", 1 },
	{ "write", 0, INDEX_mindustry_world_blocks_payloads_Payload_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1025 },
	{ "icon", 0, INDEX_mindustry_world_blocks_payloads_Payload_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1025 },
	{ "content", 0, INDEX_mindustry_world_blocks_payloads_Payload_content_R_mindustry_ctype_UnlockableContent, "()Lmindustry/ctype/UnlockableContent;", 1025 },
	{ "getX", (intptr_t) M_mindustry_world_blocks_payloads_Payload_getX_R_float, INDEX_mindustry_world_blocks_payloads_Payload_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_world_blocks_payloads_Payload_getY_R_float, INDEX_mindustry_world_blocks_payloads_Payload_getY_R_float, "()F", 1 },
	{ "remove", (intptr_t) M_mindustry_world_blocks_payloads_Payload_remove, INDEX_mindustry_world_blocks_payloads_Payload_remove, "()V", 1 },
	{ "write", (intptr_t) SM_mindustry_world_blocks_payloads_Payload_write_mindustry_world_blocks_payloads_Payload_arc_util_io_Writes, 0, "(Lmindustry/world/blocks/payloads/Payload;Larc/util/io/Writes;)V", 9 },
	{ "read", (intptr_t) SM_mindustry_world_blocks_payloads_Payload_read_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload, 0, "(Larc/util/io/Reads;)Lmindustry/world/blocks/payloads/Payload;", 9 },
};

Class class_mindustry_world_blocks_payloads_Payload{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/Payload",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_payloads_Payload),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_Payload,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_Payload,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_Payload,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_Payload = registerClass(&class_mindustry_world_blocks_payloads_Payload);

}
