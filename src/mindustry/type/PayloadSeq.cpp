#include "mindustry/type/PayloadSeq.h"
#include "java/util/Iterator.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/PayloadSeq_invoke_arc_func_Boolf_1.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "java/lang/Enum.h"
#include "arc/func/Cons.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "arc/struct/ObjectIntMap_Entry.h"
#include "arc/struct/ObjectIntMap_Entries.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "mindustry/type/PayloadSeq_invoke_arc_func_Cons_1.h"
#include "mindustry/type/PayloadStack.h"
#include "mindustry/ctype/ContentType.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/type/PayloadSeq.h"
#include "mindustry/Vars.h"
#include "arc/func/Boolf.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_type_PayloadSeq(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_PayloadSeq *) object;
	if (self->F_payloads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payloads)->clazz)->markFunction)((jobject) self->F_payloads, mark, depth + 1);
}

void clinit_mindustry_type_PayloadSeq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_type_PayloadSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_PayloadSeq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_type_PayloadSeq *) NULL_CHECK(sp[0].o))->F_payloads = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_PayloadSeq_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	if (((jint)((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_total) != 0) goto label_1;
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

jbool M_mindustry_type_PayloadSeq_any_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:any", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	if (((jint)((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_total) <= 0) goto label_1;
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

jint M_mindustry_type_PayloadSeq_total_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:total", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_total);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	((func_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(31);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_payloads;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	((mindustry_type_PayloadSeq *) NULL_CHECK(sp[0].o))->F_total = (((jint)((mindustry_type_PayloadSeq *) NULL_CHECK(sp[0].o))->F_total) + (frame[2].i));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	((func_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int])(ctx, (frame[0].o), (frame[1].o), (jint(-1)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(41);
	((func_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int])(ctx, (frame[0].o), (frame[1].o), (-(frame[2].i)));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_PayloadSeq_remove_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_PayloadSeq_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_type_PayloadSeq_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_type_PayloadSeq_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_PayloadSeq_removeAll_arc_func_Boolf_R_mindustry_type_PayloadSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:removeAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(51);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap$Entries_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_hasNext_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap$Entries_next_R_arc_struct_ObjectIntMap$Entry) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_next_R_arc_struct_ObjectIntMap$Entry])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[1].o)));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(54);
	((func_arc_struct_ObjectIntMap$Entries_remove) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_remove])(ctx, (frame[2].o));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	((mindustry_type_PayloadSeq *) NULL_CHECK(sp[0].o))->F_total = (((jint)((mindustry_type_PayloadSeq *) NULL_CHECK(sp[0].o))->F_total) - ((jint)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[3].o)))->F_value));
	}
label_5:;
	LINE_NUMBER(57);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_PayloadSeq_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_payloads;
	((func_arc_struct_ObjectIntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(63);
	((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_total = (jint(0));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_payloads;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_PayloadSeq_contains_arc_struct_Seq_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_PayloadSeq_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_type_PayloadSeq_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_type_PayloadSeq_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
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

jbool M_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 < (frame[2].i)) goto label_1;
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

jbool M_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 < (jint(1))) goto label_1;
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

jbool M_mindustry_type_PayloadSeq_contains_mindustry_type_PayloadStack_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[1].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 < ((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[1].o)))->F_amount)) goto label_1;
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

void M_mindustry_type_PayloadSeq_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_payloads;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, (-((jint)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[1].o))->F_size)));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap$Entries_iterator_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_iterator_R_arc_struct_ObjectIntMap$Entries])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectIntMap$Entry, sp[0].o));
	LINE_NUMBER(91);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[1].o)))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[1].o)));
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[1].o))))->F_id));
	LINE_NUMBER(93);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[3].o)))->F_value));
	LINE_NUMBER(94);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_PayloadSeq_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_total = (jint(0));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_type_PayloadSeq *) NULL_CHECK((frame[0].o)))->F_payloads;
	((func_arc_struct_ObjectIntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(100);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(101);
	if ((frame[2].i) < 0) goto label_4;
	}
	{
	LINE_NUMBER(103);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, temp0);
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((func_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int])(ctx, sp[0].o, sp[1].o, temp1);
	LINE_NUMBER(103);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	goto label_10;
label_4:;
	{
	LINE_NUMBER(108);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	if ((frame[3].i) >= (-(frame[2].i))) goto label_10;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_all;
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, temp0);
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp1);
	sp[1].o = checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[1].o);
	jint temp2 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((func_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int])(ctx, sp[0].o, sp[1].o, temp2);
	LINE_NUMBER(108);
	INST_IINC(3, 1);
	goto label_11;
	}
label_10:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_PayloadSeq_lambda$contains$0_mindustry_type_PayloadStack_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:lambda$contains$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[1].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 >= ((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[1].o)))->F_amount)) goto label_1;
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

void M_mindustry_type_PayloadSeq_lambda$remove$0_mindustry_type_PayloadStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadSeq:lambda$remove$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[1].o)))->F_item;
	((func_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[1].o)))->F_amount));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_PayloadSeq[] {
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
	(void *) M_mindustry_type_PayloadSeq_isEmpty_R_boolean,
	(void *) M_mindustry_type_PayloadSeq_any_R_boolean,
	(void *) M_mindustry_type_PayloadSeq_total_R_int,
	(void *) M_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int,
	(void *) M_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int,
	(void *) M_mindustry_type_PayloadSeq_remove_arc_struct_Seq,
	(void *) M_mindustry_type_PayloadSeq_removeAll_arc_func_Boolf_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_type_PayloadSeq_clear,
	(void *) M_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int,
	(void *) M_mindustry_type_PayloadSeq_contains_arc_struct_Seq_R_boolean,
	(void *) M_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean,
	(void *) M_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_R_boolean,
	(void *) M_mindustry_type_PayloadSeq_contains_mindustry_type_PayloadStack_R_boolean,
	(void *) M_mindustry_type_PayloadSeq_write_arc_util_io_Writes,
	(void *) M_mindustry_type_PayloadSeq_read_arc_util_io_Reads,
	(void *) M_mindustry_type_PayloadSeq_lambda$contains$0_mindustry_type_PayloadStack_R_boolean,
	(void *) M_mindustry_type_PayloadSeq_lambda$remove$0_mindustry_type_PayloadStack,
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
	{ "isEmpty", "()Z" },
	{ "any", "()Z" },
	{ "total", "()I" },
	{ "add", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "add", "(Lmindustry/ctype/UnlockableContent;I)V" },
	{ "remove", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "remove", "(Lmindustry/ctype/UnlockableContent;I)V" },
	{ "remove", "(Larc/struct/Seq;)V" },
	{ "removeAll", "(Larc/func/Boolf;)Lmindustry/type/PayloadSeq;" },
	{ "clear", "()V" },
	{ "get", "(Lmindustry/ctype/UnlockableContent;)I" },
	{ "contains", "(Larc/struct/Seq;)Z" },
	{ "contains", "(Lmindustry/ctype/UnlockableContent;I)Z" },
	{ "contains", "(Lmindustry/ctype/UnlockableContent;)Z" },
	{ "contains", "(Lmindustry/type/PayloadStack;)Z" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "lambda$contains$0", "(Lmindustry/type/PayloadStack;)Z" },
	{ "lambda$remove$0", "(Lmindustry/type/PayloadStack;)V" },
};

static FieldMetadata fields[] {
	{ "payloads", &class_arc_struct_ObjectIntMap, offsetof(mindustry_type_PayloadSeq, F_payloads), "Larc/struct/ObjectIntMap;", 2 },
	{ "total", &class_int, offsetof(mindustry_type_PayloadSeq, F_total), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_PayloadSeq, 0, "()V", 1 },
	{ "isEmpty", (intptr_t) M_mindustry_type_PayloadSeq_isEmpty_R_boolean, VTABLE_mindustry_type_PayloadSeq_isEmpty_R_boolean, "()Z", 1 },
	{ "any", (intptr_t) M_mindustry_type_PayloadSeq_any_R_boolean, VTABLE_mindustry_type_PayloadSeq_any_R_boolean, "()Z", 1 },
	{ "total", (intptr_t) M_mindustry_type_PayloadSeq_total_R_int, VTABLE_mindustry_type_PayloadSeq_total_R_int, "()I", 1 },
	{ "add", (intptr_t) M_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent, VTABLE_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent, "(Lmindustry/ctype/UnlockableContent;)V", 1 },
	{ "add", (intptr_t) M_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int, VTABLE_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int, "(Lmindustry/ctype/UnlockableContent;I)V", 1 },
	{ "remove", (intptr_t) M_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent, VTABLE_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent, "(Lmindustry/ctype/UnlockableContent;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int, VTABLE_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int, "(Lmindustry/ctype/UnlockableContent;I)V", 1 },
	{ "remove", (intptr_t) M_mindustry_type_PayloadSeq_remove_arc_struct_Seq, VTABLE_mindustry_type_PayloadSeq_remove_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "removeAll", (intptr_t) M_mindustry_type_PayloadSeq_removeAll_arc_func_Boolf_R_mindustry_type_PayloadSeq, VTABLE_mindustry_type_PayloadSeq_removeAll_arc_func_Boolf_R_mindustry_type_PayloadSeq, "(Larc/func/Boolf;)Lmindustry/type/PayloadSeq;", 1 },
	{ "clear", (intptr_t) M_mindustry_type_PayloadSeq_clear, VTABLE_mindustry_type_PayloadSeq_clear, "()V", 1 },
	{ "get", (intptr_t) M_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int, VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int, "(Lmindustry/ctype/UnlockableContent;)I", 1 },
	{ "contains", (intptr_t) M_mindustry_type_PayloadSeq_contains_arc_struct_Seq_R_boolean, VTABLE_mindustry_type_PayloadSeq_contains_arc_struct_Seq_R_boolean, "(Larc/struct/Seq;)Z", 1 },
	{ "contains", (intptr_t) M_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean, VTABLE_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean, "(Lmindustry/ctype/UnlockableContent;I)Z", 1 },
	{ "contains", (intptr_t) M_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_R_boolean, VTABLE_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_R_boolean, "(Lmindustry/ctype/UnlockableContent;)Z", 1 },
	{ "contains", (intptr_t) M_mindustry_type_PayloadSeq_contains_mindustry_type_PayloadStack_R_boolean, VTABLE_mindustry_type_PayloadSeq_contains_mindustry_type_PayloadStack_R_boolean, "(Lmindustry/type/PayloadStack;)Z", 1 },
	{ "write", (intptr_t) M_mindustry_type_PayloadSeq_write_arc_util_io_Writes, VTABLE_mindustry_type_PayloadSeq_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_type_PayloadSeq_read_arc_util_io_Reads, VTABLE_mindustry_type_PayloadSeq_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "lambda$contains$0", (intptr_t) M_mindustry_type_PayloadSeq_lambda$contains$0_mindustry_type_PayloadStack_R_boolean, VTABLE_mindustry_type_PayloadSeq_lambda$contains$0_mindustry_type_PayloadStack_R_boolean, "(Lmindustry/type/PayloadStack;)Z", 4098 },
	{ "lambda$remove$0", (intptr_t) M_mindustry_type_PayloadSeq_lambda$remove$0_mindustry_type_PayloadStack, VTABLE_mindustry_type_PayloadSeq_lambda$remove$0_mindustry_type_PayloadStack, "(Lmindustry/type/PayloadStack;)V", 4098 },
};

Class class_mindustry_type_PayloadSeq{
		.nativeName = (intptr_t) "mindustry/type/PayloadSeq",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_PayloadSeq),
		.classVtable = (intptr_t) vtable_mindustry_type_PayloadSeq,
		.staticInitializer = (intptr_t) clinit_mindustry_type_PayloadSeq,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_PayloadSeq,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_PayloadSeq = registerClass(&class_mindustry_type_PayloadSeq);

}
