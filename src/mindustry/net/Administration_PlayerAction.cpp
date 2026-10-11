#include "mindustry/net/Administration_PlayerAction.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/world/Block.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/gen/Player.h"
#include "mindustry/net/Administration_ActionType.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/net/Administration.h"
#include "mindustry/world/Tile.h"
#include "mindustry/net/Administration_PlayerAction.h"
#include "mindustry/world/blocks/payloads/Payload.h"

extern "C" {


void mark_mindustry_net_Administration$PlayerAction(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Administration$PlayerAction *) object;
	if (self->F_player)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_player)->clazz)->markFunction)((jobject) self->F_player, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_config)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_config)->clazz)->markFunction)((jobject) self->F_config, mark, depth + 1);
	if (self->F_item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_item)->clazz)->markFunction)((jobject) self->F_item, mark, depth + 1);
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_payload)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payload)->clazz)->markFunction)((jobject) self->F_payload, mark, depth + 1);
	if (self->F_plans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plans)->clazz)->markFunction)((jobject) self->F_plans, mark, depth + 1);
	if (self->F_unitIDs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitIDs)->clazz)->markFunction)((jobject) self->F_unitIDs, mark, depth + 1);
	if (self->F_unitCommand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitCommand)->clazz)->markFunction)((jobject) self->F_unitCommand, mark, depth + 1);
	if (self->F_buildingPositions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildingPositions)->clazz)->markFunction)((jobject) self->F_buildingPositions, mark, depth + 1);
	if (self->F_pingText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pingText)->clazz)->markFunction)((jobject) self->F_pingText, mark, depth + 1);
}

void clinit_mindustry_net_Administration$PlayerAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$PlayerAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$PlayerAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(700);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_R_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$PlayerAction:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(737);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_player = (jref) (frame[1].o);
	LINE_NUMBER(738);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(739);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (frame[3].o);
	LINE_NUMBER(740);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_gen_Unit_R_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$PlayerAction:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(744);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_player = (jref) (frame[1].o);
	LINE_NUMBER(745);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(746);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[3].o);
	LINE_NUMBER(747);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration$PlayerAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$PlayerAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(752);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_item = (jref) (jobject(nullptr));
	LINE_NUMBER(753);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_itemAmount = (jint(0));
	LINE_NUMBER(754);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_config = (jref) (jobject(nullptr));
	LINE_NUMBER(755);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_player = (jref) (jobject(nullptr));
	LINE_NUMBER(756);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_type = (jref) (jobject(nullptr));
	LINE_NUMBER(757);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (jobject(nullptr));
	LINE_NUMBER(758);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_block = (jref) (jobject(nullptr));
	LINE_NUMBER(759);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (jobject(nullptr));
	LINE_NUMBER(760);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_plans = (jref) (jobject(nullptr));
	LINE_NUMBER(761);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_net_Administration$PlayerAction;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field tile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field block
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field item
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field unit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field payload
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field plans
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field unitIDs
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field unitCommand
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field buildingPositions
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field pingText
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_net_Administration$PlayerAction[] {
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
	(void *) M_mindustry_net_Administration$PlayerAction_reset,
	(void *) M_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_R_mindustry_net_Administration$PlayerAction,
	(void *) M_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_gen_Unit_R_mindustry_net_Administration$PlayerAction,
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
	{ "reset", "()V" },
	{ "set", "(Lmindustry/gen/Player;Lmindustry/net/Administration$ActionType;Lmindustry/world/Tile;)Lmindustry/net/Administration$PlayerAction;" },
	{ "set", "(Lmindustry/gen/Player;Lmindustry/net/Administration$ActionType;Lmindustry/gen/Unit;)Lmindustry/net/Administration$PlayerAction;" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "player", &class_mindustry_gen_Player, offsetof(mindustry_net_Administration$PlayerAction, F_player), "Lmindustry/gen/Player;", 1 },
	{ "type", &class_mindustry_net_Administration$ActionType, offsetof(mindustry_net_Administration$PlayerAction, F_type), "Lmindustry/net/Administration$ActionType;", 1 },
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_net_Administration$PlayerAction, F_tile), "Lmindustry/world/Tile;", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_net_Administration$PlayerAction, F_block), "Lmindustry/world/Block;", 1 },
	{ "rotation", &class_int, offsetof(mindustry_net_Administration$PlayerAction, F_rotation), "I", 1 },
	{ "config", &class_java_lang_Object, offsetof(mindustry_net_Administration$PlayerAction, F_config), "Ljava/lang/Object;", 1 },
	{ "item", &class_mindustry_type_Item, offsetof(mindustry_net_Administration$PlayerAction, F_item), "Lmindustry/type/Item;", 1 },
	{ "itemAmount", &class_int, offsetof(mindustry_net_Administration$PlayerAction, F_itemAmount), "I", 1 },
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_net_Administration$PlayerAction, F_unit), "Lmindustry/gen/Unit;", 1 },
	{ "payload", &class_mindustry_world_blocks_payloads_Payload, offsetof(mindustry_net_Administration$PlayerAction, F_payload), "Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "plans", getArrayClass(&class_int, 1), offsetof(mindustry_net_Administration$PlayerAction, F_plans), "[I", 1 },
	{ "unitIDs", getArrayClass(&class_int, 1), offsetof(mindustry_net_Administration$PlayerAction, F_unitIDs), "[I", 1 },
	{ "unitCommand", &class_mindustry_ai_UnitCommand, offsetof(mindustry_net_Administration$PlayerAction, F_unitCommand), "Lmindustry/ai/UnitCommand;", 1 },
	{ "buildingPositions", getArrayClass(&class_int, 1), offsetof(mindustry_net_Administration$PlayerAction, F_buildingPositions), "[I", 1 },
	{ "pingText", &class_java_lang_String, offsetof(mindustry_net_Administration$PlayerAction, F_pingText), "Ljava/lang/String;", 1 },
	{ "pingX", &class_float, offsetof(mindustry_net_Administration$PlayerAction, F_pingX), "F", 1 },
	{ "pingY", &class_float, offsetof(mindustry_net_Administration$PlayerAction, F_pingY), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Administration$PlayerAction, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_R_mindustry_net_Administration$PlayerAction, VTABLE_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_R_mindustry_net_Administration$PlayerAction, "(Lmindustry/gen/Player;Lmindustry/net/Administration$ActionType;Lmindustry/world/Tile;)Lmindustry/net/Administration$PlayerAction;", 1 },
	{ "set", (intptr_t) M_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_gen_Unit_R_mindustry_net_Administration$PlayerAction, VTABLE_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_gen_Unit_R_mindustry_net_Administration$PlayerAction, "(Lmindustry/gen/Player;Lmindustry/net/Administration$ActionType;Lmindustry/gen/Unit;)Lmindustry/net/Administration$PlayerAction;", 1 },
	{ "reset", (intptr_t) M_mindustry_net_Administration$PlayerAction_reset, VTABLE_mindustry_net_Administration$PlayerAction_reset, "()V", 1 },
};

Class class_mindustry_net_Administration$PlayerAction{
		.nativeName = (intptr_t) "mindustry/net/Administration$PlayerAction",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Administration$PlayerAction),
		.classVtable = (intptr_t) vtable_mindustry_net_Administration$PlayerAction,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Administration$PlayerAction,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_net_Administration$PlayerAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Administration,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Administration$PlayerAction = registerClass(&class_mindustry_net_Administration$PlayerAction);

}

