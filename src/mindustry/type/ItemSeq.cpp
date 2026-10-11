#include "mindustry/type/ItemSeq.h"
#include "mindustry/type/ItemSeq.h"
#include "java/lang/Math.h"
#include "arc/util/serialization/Json_JsonSerializable.h"
#include "java/lang/Integer.h"
#include "java/util/Iterator.h"
#include "mindustry/type/Item.h"
#include "mindustry/io/JsonIO.h"
#include "java/lang/Iterable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/world/modules/ItemModule_ItemConsumer.h"
#include "arc/func/Cons.h"
#include "mindustry/type/ItemSeq_invoke_mindustry_world_modules_ItemModule_ItemConsumer_3.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/type/ItemSeq_invoke_mindustry_world_modules_ItemModule_ItemConsumer_2.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/struct/Seq.h"
#include "mindustry/type/ItemSeq_invoke_arc_func_Cons_1.h"
#include "mindustry/Vars.h"
#include "java/lang/System.h"

extern "C" {


void mark_mindustry_type_ItemSeq(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_ItemSeq *) object;
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_mindustry_type_ItemSeq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_type_ItemSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_ItemSeq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_type_ItemSeq *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_ItemSeq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_ItemSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_type_ItemSeq *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_ItemSeq_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_type_ItemSeq_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_type_ItemSeq_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_checkNegative(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:checkNegative", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) >= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(25);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(28);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_ItemSeq_copy_R_mindustry_type_ItemSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:copy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(32);
	((mindustry_type_ItemSeq *) NULL_CHECK((frame[1].o)))->F_total = ((jint)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_total);
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:each", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[1].o, (frame[2].i));
	sp[2].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	((func_mindustry_world_modules_ItemModule$ItemConsumer_accept_mindustry_type_Item_int) resolveInterfaceMethod(ctx, &class_mindustry_world_modules_ItemModule$ItemConsumer, INDEX_mindustry_world_modules_ItemModule$ItemConsumer_accept_mindustry_type_Item_int, sp[0].o))(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))));
	}
label_4:;
	{
	LINE_NUMBER(38);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_total = (jint(0));
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_ItemSeq_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:toSeq", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(52);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) == 0) goto label_5;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[2].o, (frame[2].i));
	sp[3].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[1].o, sp[2].o, ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(52);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:toArray", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	frame[1].i = (jint(0));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(61);
	if ((frame[5].i) == 0) goto label_5;
	}
	INST_IINC(1, 1);
label_5:;
	{
	LINE_NUMBER(60);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(64);
	frame[3].i = (jint(0));
	LINE_NUMBER(65);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i))) == 0) goto label_11;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[2].o, (frame[4].i));
	sp[3].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[1].o, sp[2].o, ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[4].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(65);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_min_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:min", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[3].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (frame[1].i));
	((func_mindustry_type_ItemSeq_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_set_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp1);
	LINE_NUMBER(76);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id))) <= 0) goto label_1;
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

jbool M_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 <= ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)))) goto label_4;
	}
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(84);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_ItemSeq_has_mindustry_type_Item_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:has", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id))) < (frame[2].i)) goto label_1;
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

jint M_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)));
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_set_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (temp0 - ((jint)ARRAY_ACCESS(jint, sp[2].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)))));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_ItemSeq_invoke_mindustry_world_modules_ItemModule$ItemConsumer_2(ctx);
		auto proxy = (mindustry_type_ItemSeq_invoke_mindustry_world_modules_ItemModule$ItemConsumer_2 *) gcAlloc(ctx, &class_mindustry_type_ItemSeq_invoke_mindustry_world_modules_ItemModule$ItemConsumer_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(110);
	((func_mindustry_type_ItemSeq_add_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_ItemStack])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(109);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_ItemSeq_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3(ctx);
		auto proxy = (mindustry_type_ItemSeq_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3 *) gcAlloc(ctx, &class_mindustry_type_ItemSeq_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_add_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_add_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_add_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[2].i));
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	((mindustry_type_ItemSeq *) NULL_CHECK(sp[0].o))->F_total = (((jint)((mindustry_type_ItemSeq *) NULL_CHECK(sp[0].o))->F_total) + (frame[2].i));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_remove_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (-((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount)));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_remove_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (jint(-1)));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_remove_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(141);
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (-(frame[2].i)));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[3].o)))->F_name;
	sp[2].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)ARRAY_ACCESS(jint, sp[2].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_4:;
	LINE_NUMBER(150);
	goto label_1;
label_2:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_ItemSeq_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(155);
	((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_total = (jint(0));
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	int itemsSize = sp[0].o ? ((arc_struct_Seq *) sp[0].o)->F_size : 0;
	if (!((mindustry_type_ItemSeq *) frame[0].o)->F_values) {
		((mindustry_type_ItemSeq *) frame[0].o)->F_values = (jref) createArray(ctx, &class_int, itemsSize);
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id;
	if (sp[0].o && temp0 >= 0 && temp0 < ((jarray)sp[0].o)->length && frame[2].o) {
		sp[1].o = frame[2].o;
		sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[4].o)))->F_name;
		jint temp1 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, sp[1].o, sp[2].o, (jint(0)));
		ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
		((mindustry_type_ItemSeq *) frame[0].o)->F_total += temp1;
	}
	LINE_NUMBER(159);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_ItemSeq_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_print_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_ItemSeq_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemSeq:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_mindustry_type_ItemSeq_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_ItemSeq_toSeq_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_ItemSeq[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_ItemSeq_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_type_ItemSeq_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_mindustry_type_ItemSeq_write_arc_util_serialization_Json,
	(void *) M_mindustry_type_ItemSeq_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_type_ItemSeq_checkNegative,
	(void *) M_mindustry_type_ItemSeq_copy_R_mindustry_type_ItemSeq,
	(void *) M_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer,
	(void *) M_mindustry_type_ItemSeq_clear,
	(void *) M_mindustry_type_ItemSeq_toSeq_R_arc_struct_Seq,
	(void *) M_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_type_ItemSeq_min_int,
	(void *) M_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean,
	(void *) M_mindustry_type_ItemSeq_has_mindustry_type_Item_int_R_boolean,
	(void *) M_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int,
	(void *) M_mindustry_type_ItemSeq_set_mindustry_type_Item_int,
	(void *) M_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq,
	(void *) M_mindustry_type_ItemSeq_add_mindustry_type_ItemStack,
	(void *) M_mindustry_type_ItemSeq_add_mindustry_type_Item,
	(void *) M_mindustry_type_ItemSeq_add_mindustry_type_Item_int,
	(void *) M_mindustry_type_ItemSeq_remove_mindustry_type_ItemStack,
	(void *) M_mindustry_type_ItemSeq_remove_mindustry_type_Item,
	(void *) M_mindustry_type_ItemSeq_remove_mindustry_type_Item_int,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
	{ "checkNegative", "()V" },
	{ "copy", "()Lmindustry/type/ItemSeq;" },
	{ "each", "(Lmindustry/world/modules/ItemModule$ItemConsumer;)V" },
	{ "clear", "()V" },
	{ "toSeq", "()Larc/struct/Seq;" },
	{ "toArray", "()[Lmindustry/type/ItemStack;" },
	{ "min", "(I)V" },
	{ "has", "(Lmindustry/type/Item;)Z" },
	{ "has", "(Lmindustry/type/ItemSeq;)Z" },
	{ "has", "(Lmindustry/type/Item;I)Z" },
	{ "get", "(Lmindustry/type/Item;)I" },
	{ "set", "(Lmindustry/type/Item;I)V" },
	{ "add", "(Lmindustry/world/modules/ItemModule;)V" },
	{ "add", "([Lmindustry/type/ItemStack;)V" },
	{ "add", "(Lmindustry/type/ItemSeq;)V" },
	{ "add", "(Lmindustry/type/ItemStack;)V" },
	{ "add", "(Lmindustry/type/Item;)V" },
	{ "add", "(Lmindustry/type/Item;I)V" },
	{ "remove", "(Lmindustry/type/ItemStack;)V" },
	{ "remove", "(Lmindustry/type/Item;)V" },
	{ "remove", "(Lmindustry/type/Item;I)V" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_arc_util_serialization_Json$JsonSerializable, };

static FieldMetadata fields[] {
	{ "values", getArrayClass(&class_int, 1), offsetof(mindustry_type_ItemSeq, F_values), "[I", 20 },
	{ "total", &class_int, offsetof(mindustry_type_ItemSeq, F_total), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_ItemSeq, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_ItemSeq_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 1 },
	{ "checkNegative", (intptr_t) M_mindustry_type_ItemSeq_checkNegative, VTABLE_mindustry_type_ItemSeq_checkNegative, "()V", 1 },
	{ "copy", (intptr_t) M_mindustry_type_ItemSeq_copy_R_mindustry_type_ItemSeq, VTABLE_mindustry_type_ItemSeq_copy_R_mindustry_type_ItemSeq, "()Lmindustry/type/ItemSeq;", 1 },
	{ "each", (intptr_t) M_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer, VTABLE_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer, "(Lmindustry/world/modules/ItemModule$ItemConsumer;)V", 1 },
	{ "clear", (intptr_t) M_mindustry_type_ItemSeq_clear, VTABLE_mindustry_type_ItemSeq_clear, "()V", 1 },
	{ "toSeq", (intptr_t) M_mindustry_type_ItemSeq_toSeq_R_arc_struct_Seq, VTABLE_mindustry_type_ItemSeq_toSeq_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "toArray", (intptr_t) M_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack, VTABLE_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack, "()[Lmindustry/type/ItemStack;", 1 },
	{ "min", (intptr_t) M_mindustry_type_ItemSeq_min_int, VTABLE_mindustry_type_ItemSeq_min_int, "(I)V", 1 },
	{ "has", (intptr_t) M_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean, VTABLE_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "has", (intptr_t) M_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean, VTABLE_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean, "(Lmindustry/type/ItemSeq;)Z", 1 },
	{ "has", (intptr_t) M_mindustry_type_ItemSeq_has_mindustry_type_Item_int_R_boolean, VTABLE_mindustry_type_ItemSeq_has_mindustry_type_Item_int_R_boolean, "(Lmindustry/type/Item;I)Z", 1 },
	{ "get", (intptr_t) M_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int, VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "set", (intptr_t) M_mindustry_type_ItemSeq_set_mindustry_type_Item_int, VTABLE_mindustry_type_ItemSeq_set_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "add", (intptr_t) M_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule, VTABLE_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule, "(Lmindustry/world/modules/ItemModule;)V", 1 },
	{ "add", (intptr_t) M_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack, VTABLE_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack, "([Lmindustry/type/ItemStack;)V", 1 },
	{ "add", (intptr_t) M_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq, VTABLE_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq, "(Lmindustry/type/ItemSeq;)V", 1 },
	{ "add", (intptr_t) M_mindustry_type_ItemSeq_add_mindustry_type_ItemStack, VTABLE_mindustry_type_ItemSeq_add_mindustry_type_ItemStack, "(Lmindustry/type/ItemStack;)V", 1 },
	{ "add", (intptr_t) M_mindustry_type_ItemSeq_add_mindustry_type_Item, VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "add", (intptr_t) M_mindustry_type_ItemSeq_add_mindustry_type_Item_int, VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "remove", (intptr_t) M_mindustry_type_ItemSeq_remove_mindustry_type_ItemStack, VTABLE_mindustry_type_ItemSeq_remove_mindustry_type_ItemStack, "(Lmindustry/type/ItemStack;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_type_ItemSeq_remove_mindustry_type_Item, VTABLE_mindustry_type_ItemSeq_remove_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_type_ItemSeq_remove_mindustry_type_Item_int, VTABLE_mindustry_type_ItemSeq_remove_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "write", (intptr_t) M_mindustry_type_ItemSeq_write_arc_util_serialization_Json, VTABLE_mindustry_type_ItemSeq_write_arc_util_serialization_Json, "(Larc/util/serialization/Json;)V", 1 },
	{ "read", (intptr_t) M_mindustry_type_ItemSeq_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, VTABLE_mindustry_type_ItemSeq_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V", 1 },
	{ "toString", (intptr_t) M_mindustry_type_ItemSeq_toString_R_java_lang_String, VTABLE_mindustry_type_ItemSeq_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_mindustry_type_ItemSeq_iterator_R_java_util_Iterator, VTABLE_mindustry_type_ItemSeq_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_mindustry_type_ItemSeq{
		.nativeName = (intptr_t) "mindustry/type/ItemSeq",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_ItemSeq),
		.classVtable = (intptr_t) vtable_mindustry_type_ItemSeq,
		.staticInitializer = (intptr_t) clinit_mindustry_type_ItemSeq,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_ItemSeq,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_ItemSeq = registerClass(&class_mindustry_type_ItemSeq);

}
