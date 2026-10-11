#include "mindustry/logic/LExecutor_GetBlockI.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/Block.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_GetBlockI.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/gen/Building.h"
#include "mindustry/logic/LExecutor_1.h"
#include "java/lang/Object.h"
#include "mindustry/logic/TileLayer.h"
#include "mindustry/world/Tile.h"
#include "java/lang/IncompatibleClassChangeError.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_logic_LExecutor$GetBlockI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$GetBlockI *) object;
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_dest)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dest)->clazz)->markFunction)((jobject) self->F_dest, mark, depth + 1);
	if (self->F_layer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layer)->clazz)->markFunction)((jobject) self->F_layer, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$GetBlockI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$GetBlockI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_TileLayer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$GetBlockI:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$GetBlockI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1540);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1538);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_TileLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_TileLayer_block;
	((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK(sp[0].o))->F_layer = (jref) sp[1].o;
	LINE_NUMBER(1541);
	((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	LINE_NUMBER(1542);
	((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[2].o);
	LINE_NUMBER(1543);
	((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK((frame[0].o)))->F_dest = (jref) (frame[3].o);
	LINE_NUMBER(1544);
	((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK((frame[0].o)))->F_layer = (jref) (frame[4].o);
	LINE_NUMBER(1545);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$GetBlockI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$GetBlockI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$GetBlockI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1547);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1538);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_TileLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_TileLayer_block;
	((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK(sp[0].o))->F_layer = (jref) sp[1].o;
	LINE_NUMBER(1548);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$GetBlockI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$GetBlockI:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1552);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jint temp1 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp0);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp2);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, temp3);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1553);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1554);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK((frame[0].o)))->F_dest;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1556);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK((frame[0].o)))->F_dest;
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$GetBlockI *) NULL_CHECK((frame[0].o)))->F_layer;
	jint temp0 = (jint)((func_mindustry_logic_TileLayer_ordinal_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_TileLayer_ordinal_R_int])(ctx, sp[2].o);
	sp += 1;
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_7;
		case 4: goto label_8;
		default: goto label_9;
	}
	}
label_9:;
	{
	clinit_java_lang_IncompatibleClassChangeError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IncompatibleClassChangeError);
	init_java_lang_IncompatibleClassChangeError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1557);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp += 1;
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(1558);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp += 1;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(1559);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(1560);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp += 1;
	}
label_10:;
	LINE_NUMBER(1556);
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
label_4:;
	LINE_NUMBER(1563);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$GetBlockI[] {
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
	(void *) M_mindustry_logic_LExecutor$GetBlockI_run_mindustry_logic_LExecutor,
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
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$GetBlockI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$GetBlockI, F_y), "Lmindustry/logic/LVar;", 1 },
	{ "dest", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$GetBlockI, F_dest), "Lmindustry/logic/LVar;", 1 },
	{ "layer", &class_mindustry_logic_TileLayer, offsetof(mindustry_logic_LExecutor$GetBlockI, F_layer), "Lmindustry/logic/TileLayer;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$GetBlockI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_TileLayer, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/TileLayer;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$GetBlockI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$GetBlockI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$GetBlockI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$GetBlockI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$GetBlockI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$GetBlockI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$GetBlockI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$GetBlockI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$GetBlockI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$GetBlockI = registerClass(&class_mindustry_logic_LExecutor$GetBlockI);

}

