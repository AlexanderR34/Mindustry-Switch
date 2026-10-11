#include "mindustry/world/blocks/defense/turrets/ItemTurret_ItemEntry.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_ItemEntry.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/defense/turrets/Turret_AmmoEntry.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) object;
	if (self->F_item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_item)->clazz)->markFunction)((jobject) self->F_item, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry(ctx);
}

void init_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_mindustry_world_blocks_defense_turrets_ItemTurret_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemEntry:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(229);
	((mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry(ctx, (frame[0].o));
	LINE_NUMBER(230);
	((mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[2].o);
	LINE_NUMBER(231);
	((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK((frame[0].o)))->F_amount = (frame[3].i);
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_type_R_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemEntry:type", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) NULL_CHECK(sp[0].o))->F_ammoTypes;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) NULL_CHECK((frame[0].o)))->F_item;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemEntry:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) NULL_CHECK((frame[0].o)))->F_item;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"ItemEntry{item=\u0001, amount=\u0001}"_j.string, 2, sp[0].o, boxInteger(ctx, ((jint)((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK((frame[0].o)))->F_amount)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_type_R_mindustry_entities_bullet_BulletType,
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
	{ "type", "()Lmindustry/entities/bullet/BulletType;" },
};

static FieldMetadata fields[] {
	{ "item", &class_mindustry_type_Item, offsetof(mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry, F_item), "Lmindustry/type/Item;", 1 },
	{ "this$0", &class_mindustry_world_blocks_defense_turrets_ItemTurret, offsetof(mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry, F_this$0), "Lmindustry/world/blocks/defense/turrets/ItemTurret;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_mindustry_world_blocks_defense_turrets_ItemTurret_mindustry_type_Item_int, 0, "(Lmindustry/world/blocks/defense/turrets/ItemTurret;Lmindustry/type/Item;I)V", 0 },
	{ "type", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_type_R_mindustry_entities_bullet_BulletType, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_type_R_mindustry_entities_bullet_BulletType, "()Lmindustry/entities/bullet/BulletType;", 1 },
	{ "toString", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_toString_R_java_lang_String, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/turrets/ItemTurret$ItemEntry",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry,
		.size = sizeof(mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_ItemTurret,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry = registerClass(&class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry);

}

