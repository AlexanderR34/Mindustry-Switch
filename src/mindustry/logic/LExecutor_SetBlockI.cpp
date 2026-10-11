#include "mindustry/logic/LExecutor_SetBlockI.h"
#include "arc/math/Mathf.h"
#include "mindustry/logic/LExecutor_SetBlockI.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/logic/LExecutor_1.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/logic/TileLayer.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SetBlockI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SetBlockI *) object;
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_rotation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotation)->clazz)->markFunction)((jobject) self->F_rotation, mark, depth + 1);
	if (self->F_layer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layer)->clazz)->markFunction)((jobject) self->F_layer, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SetBlockI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SetBlockI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_TileLayer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetBlockI:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetBlockI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(1572);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1570);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_TileLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_TileLayer_block;
	((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK(sp[0].o))->F_layer = (jref) sp[1].o;
	LINE_NUMBER(1573);
	((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	LINE_NUMBER(1574);
	((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[2].o);
	LINE_NUMBER(1575);
	((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[3].o);
	LINE_NUMBER(1576);
	((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[4].o);
	LINE_NUMBER(1577);
	((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_rotation = (jref) (frame[5].o);
	LINE_NUMBER(1578);
	((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_layer = (jref) (frame[6].o);
	LINE_NUMBER(1579);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SetBlockI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetBlockI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetBlockI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1581);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1570);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_TileLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_TileLayer_block;
	((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK(sp[0].o))->F_layer = (jref) sp[1].o;
	LINE_NUMBER(1582);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SetBlockI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetBlockI:run", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1586);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1588);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp1 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1589);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_Block)) == 0) goto label_3;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[4].o)));
	LINE_NUMBER(1590);
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_layer;
	jint temp0 = (jint)((func_mindustry_logic_TileLayer_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_TileLayer_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_7;
		default: goto label_3;
	}
	}
label_6:;
	{
	LINE_NUMBER(1592);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_environment_OverlayFloor)) != 0) goto label_8;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_3;
	}
label_8:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	if (sp[0].o == (frame[3].o)) goto label_3;
	}
	{
	((func_mindustry_world_Tile_setOverlayNet_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_setOverlayNet_mindustry_world_Block])(ctx, (frame[2].o), (frame[3].o));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(1595);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_9;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[3].o)));
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	if (sp[0].o == (frame[4].o)) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isOverlay_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isOverlay_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isAir_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isAir_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(1596);
	((func_mindustry_world_Tile_setFloorNet_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_setFloorNet_mindustry_world_Block])(ctx, (frame[2].o), (frame[4].o));
	}
label_9:;
	LINE_NUMBER(1598);
	goto label_3;
label_7:;
	{
	LINE_NUMBER(1600);
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_3;
	}
label_12:;
	{
	LINE_NUMBER(1601);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1602);
	if ((frame[4].o) != nullptr) goto label_14;
	}
	clinit_mindustry_game_Team(ctx);
	(sp++)->o = SF_mindustry_game_Team_derelict;
	INST_ASTORE(4);
label_14:;
	{
	LINE_NUMBER(1604);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	if (sp[0].o != (frame[3].o)) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	if (sp[0].o == (frame[4].o)) goto label_3;
	}
label_15:;
	{
	LINE_NUMBER(1605);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((mindustry_logic_LExecutor$SetBlockI *) NULL_CHECK((frame[0].o)))->F_rotation;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[3].o);
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, (jint(0)), (jint(3)));
	((func_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp1);
	}
label_3:;
	LINE_NUMBER(1612);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SetBlockI[] {
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
	(void *) M_mindustry_logic_LExecutor$SetBlockI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetBlockI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetBlockI, F_y), "Lmindustry/logic/LVar;", 1 },
	{ "block", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetBlockI, F_block), "Lmindustry/logic/LVar;", 1 },
	{ "team", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetBlockI, F_team), "Lmindustry/logic/LVar;", 1 },
	{ "rotation", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetBlockI, F_rotation), "Lmindustry/logic/LVar;", 1 },
	{ "layer", &class_mindustry_logic_TileLayer, offsetof(mindustry_logic_LExecutor$SetBlockI, F_layer), "Lmindustry/logic/TileLayer;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetBlockI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_TileLayer, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/TileLayer;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetBlockI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SetBlockI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SetBlockI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SetBlockI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SetBlockI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SetBlockI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SetBlockI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SetBlockI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SetBlockI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$SetBlockI = registerClass(&class_mindustry_logic_LExecutor$SetBlockI);

}

