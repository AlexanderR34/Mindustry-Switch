#include "mindustry/entities/comp/ItemsComp.h"
#include "mindustry/gen/Posc.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/type/Item.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/comp/ItemsComp.h"

extern "C" {


void mark_mindustry_entities_comp_ItemsComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_ItemsComp *) object;
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
}

void clinit_mindustry_entities_comp_ItemsComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_ItemsComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ItemsComp:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_ItemsComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	init_mindustry_type_ItemStack(ctx, sp[1].o);
	((mindustry_entities_comp_ItemsComp *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_ItemsComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ItemsComp:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_amount;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_mindustry_entities_comp_ItemsComp_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_ItemsComp_itemCapacity_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, temp2);
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = temp3;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_itemTime;
	jint temp5 = (jint)((func_mindustry_entities_comp_ItemsComp_hasItem_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_ItemsComp_hasItem_R_boolean])(ctx, (frame[0].o));
	jint temp6 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, temp5);
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, temp4, (jfloat(temp6)), (jfloat(0.05f)));
	((mindustry_entities_comp_ItemsComp *) NULL_CHECK(sp[0].o))->F_itemTime = temp7;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_ItemsComp_item_R_mindustry_type_Item(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ItemsComp:item", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_ItemsComp_clearItem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ItemsComp:clearItem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = (jint(0));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_ItemsComp_acceptsItem_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ItemsComp:acceptsItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_mindustry_entities_comp_ItemsComp_hasItem_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_ItemsComp_hasItem_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) + (jint(1));
	jint temp1 = (jint)((func_mindustry_entities_comp_ItemsComp_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_ItemsComp_itemCapacity_R_int])(ctx, (frame[0].o));
	if (temp0 > temp1) goto label_2;
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

jbool M_mindustry_entities_comp_ItemsComp_hasItem_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ItemsComp:hasItem", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) <= 0) goto label_1;
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

void M_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ItemsComp:addItem", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	((func_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ItemsComp:addItem", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	sp += 1;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) + (frame[2].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ILOAD(2);
label_2:;
	{
	sp -= 2;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = sp[1].i;
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_amount;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_mindustry_entities_comp_ItemsComp_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_ItemsComp_itemCapacity_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, temp2);
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = temp3;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_ItemsComp_maxAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ItemsComp:maxAccepted", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) <= 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_ItemsComp_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_ItemsComp_itemCapacity_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_entities_comp_ItemsComp *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp1 = temp0 - ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount);
	sp[0].i = temp1;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_ItemsComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_ItemsComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_ItemsComp_item_R_mindustry_type_Item,
	(void *) M_mindustry_entities_comp_ItemsComp_clearItem,
	(void *) M_mindustry_entities_comp_ItemsComp_acceptsItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_entities_comp_ItemsComp_hasItem_R_boolean,
	(void *) M_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item,
	(void *) M_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item_int,
	(void *) M_mindustry_entities_comp_ItemsComp_maxAccepted_mindustry_type_Item_R_int,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "itemCapacity", "()I" },
	{ "item", "()Lmindustry/type/Item;" },
	{ "clearItem", "()V" },
	{ "acceptsItem", "(Lmindustry/type/Item;)Z" },
	{ "hasItem", "()Z" },
	{ "addItem", "(Lmindustry/type/Item;)V" },
	{ "addItem", "(Lmindustry/type/Item;I)V" },
	{ "maxAccepted", "(Lmindustry/type/Item;)I" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, };

static FieldMetadata fields[] {
	{ "stack", &class_mindustry_type_ItemStack, offsetof(mindustry_entities_comp_ItemsComp, F_stack), "Lmindustry/type/ItemStack;", 0 },
	{ "itemTime", &class_float, offsetof(mindustry_entities_comp_ItemsComp, F_itemTime), "F", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_ItemsComp, 0, "()V", 0 },
	{ "itemCapacity", 0, VTABLE_mindustry_entities_comp_ItemsComp_itemCapacity_R_int, "()I", 1024 },
	{ "update", (intptr_t) M_mindustry_entities_comp_ItemsComp_update, VTABLE_mindustry_entities_comp_ItemsComp_update, "()V", 1 },
	{ "item", (intptr_t) M_mindustry_entities_comp_ItemsComp_item_R_mindustry_type_Item, VTABLE_mindustry_entities_comp_ItemsComp_item_R_mindustry_type_Item, "()Lmindustry/type/Item;", 0 },
	{ "clearItem", (intptr_t) M_mindustry_entities_comp_ItemsComp_clearItem, VTABLE_mindustry_entities_comp_ItemsComp_clearItem, "()V", 0 },
	{ "acceptsItem", (intptr_t) M_mindustry_entities_comp_ItemsComp_acceptsItem_mindustry_type_Item_R_boolean, VTABLE_mindustry_entities_comp_ItemsComp_acceptsItem_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 0 },
	{ "hasItem", (intptr_t) M_mindustry_entities_comp_ItemsComp_hasItem_R_boolean, VTABLE_mindustry_entities_comp_ItemsComp_hasItem_R_boolean, "()Z", 0 },
	{ "addItem", (intptr_t) M_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item, VTABLE_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item, "(Lmindustry/type/Item;)V", 0 },
	{ "addItem", (intptr_t) M_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item_int, VTABLE_mindustry_entities_comp_ItemsComp_addItem_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 0 },
	{ "maxAccepted", (intptr_t) M_mindustry_entities_comp_ItemsComp_maxAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_entities_comp_ItemsComp_maxAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 0 },
};

Class class_mindustry_entities_comp_ItemsComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/ItemsComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_ItemsComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_ItemsComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_ItemsComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_ItemsComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 61,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_ItemsComp = registerClass(&class_mindustry_entities_comp_ItemsComp);

}
