#include "java/util/LinkedList_LinkIterator.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/LinkedList_Link.h"
#include "java/util/Iterator.h"
#include "java/util/LinkedList.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/LinkedList_LinkIterator.h"

extern "C" {


void mark_java_util_LinkedList$LinkIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_LinkedList$LinkIterator *) object;
	if (self->F_list)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_list)->clazz)->markFunction)((jobject) self->F_list, mark, depth + 1);
	if (self->F_link)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_link)->clazz)->markFunction)((jobject) self->F_link, mark, depth + 1);
	if (self->F_lastLink)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastLink)->clazz)->markFunction)((jobject) self->F_lastLink, mark, depth + 1);
}

void clinit_java_util_LinkedList$LinkIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_LinkedList$LinkIterator_java_util_LinkedList_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$LinkIterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedList$LinkIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(54);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(55);
	((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list = (jref) (frame[1].o);
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(57);
	if ((jint(0)) > (frame[2].i)) goto label_4;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	if (temp0 > ((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK(sp[1].o))->F_voidLink;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_link = (jref) sp[1].o;
	LINE_NUMBER(62);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	if (temp0 >= (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) / (jint(2)))) goto label_7;
	}
	{
	LINE_NUMBER(63);
	((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_pos = (jint(-1));
	}
label_9:;
	{
	if ((((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1))) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[1].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_link = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos = ((jint)((java_util_LinkedList *) NULL_CHECK(sp[1].o))->F_size);
	}
label_13:;
	{
	if (((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_pos) < (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[1].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[1].o))->F_previous;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_link = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos) - (jint(1)));
	goto label_13;
	}
label_4:;
	{
	LINE_NUMBER(72);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_LinkedList$LinkIterator_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$LinkIterator:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	clinit_java_util_LinkedList$Link(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList$Link);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	init_java_util_LinkedList$Link_java_lang_Object_java_util_LinkedList$Link_java_util_LinkedList$Link(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(81);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_previous = (jref) (frame[3].o);
	LINE_NUMBER(82);
	((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link = (jref) (frame[3].o);
	LINE_NUMBER(83);
	((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_lastLink = (jref) (jobject(nullptr));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = (((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount) + (jint(1)));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(88);
	goto label_13;
	}
label_1:;
	{
	LINE_NUMBER(89);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList$LinkIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$LinkIterator:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK(sp[1].o))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_1;
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

jbool M_java_util_LinkedList$LinkIterator_hasPrevious_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$LinkIterator:hasPrevious", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK(sp[1].o))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_1;
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

jobject M_java_util_LinkedList$LinkIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$LinkIterator:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(104);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK(sp[1].o))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[1].o))->F_link = (jref) sp[2].o;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_lastLink = (jref) sp[2].o;
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(109);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(111);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_LinkedList$LinkIterator_nextIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$LinkIterator:nextIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1)));
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList$LinkIterator_previous_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$LinkIterator:previous", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK(sp[1].o))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_lastLink = (jref) sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[1].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[1].o))->F_previous;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_link = (jref) sp[1].o;
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos) - (jint(1)));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_lastLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(126);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(128);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_LinkedList$LinkIterator_previousIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$LinkIterator:previousIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return ((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_pos);
	}

	popStackFrame(ctx);
}

void M_java_util_LinkedList$LinkIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$LinkIterator:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_lastLink;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_lastLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_lastLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous;
	frame[2].o = sp[0].o;
	LINE_NUMBER(140);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_previous = (jref) (frame[2].o);
	LINE_NUMBER(141);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_lastLink;
	sp[1].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_pos) - (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(145);
	((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_link = (jref) (frame[2].o);
	LINE_NUMBER(146);
	((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_lastLink = (jref) (jobject(nullptr));
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = (((jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount) + (jint(1)));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(152);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(154);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_LinkedList$LinkIterator_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$LinkIterator:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	jint temp0 = (jint)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_lastLink;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((java_util_LinkedList$LinkIterator *) NULL_CHECK((frame[0].o)))->F_lastLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_data = (jref) (frame[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(162);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(165);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(167);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_LinkedList$LinkIterator[] {
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
	(void *) M_java_util_LinkedList$LinkIterator_hasNext_R_boolean,
	(void *) M_java_util_LinkedList$LinkIterator_next_R_java_lang_Object,
	(void *) M_java_util_LinkedList$LinkIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_LinkedList$LinkIterator_add_java_lang_Object,
	(void *) M_java_util_LinkedList$LinkIterator_hasPrevious_R_boolean,
	(void *) M_java_util_LinkedList$LinkIterator_nextIndex_R_int,
	(void *) M_java_util_LinkedList$LinkIterator_previous_R_java_lang_Object,
	(void *) M_java_util_LinkedList$LinkIterator_previousIndex_R_int,
	(void *) M_java_util_LinkedList$LinkIterator_set_java_lang_Object,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "add", "(Ljava/lang/Object;)V" },
	{ "hasPrevious", "()Z" },
	{ "nextIndex", "()I" },
	{ "previous", "()Ljava/lang/Object;" },
	{ "previousIndex", "()I" },
	{ "set", "(Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_java_util_ListIterator, };

static FieldMetadata fields[] {
	{ "pos", &class_int, offsetof(java_util_LinkedList$LinkIterator, F_pos), "I", 0 },
	{ "expectedModCount", &class_int, offsetof(java_util_LinkedList$LinkIterator, F_expectedModCount), "I", 0 },
	{ "list", &class_java_util_LinkedList, offsetof(java_util_LinkedList$LinkIterator, F_list), "Ljava/util/LinkedList;", 16 },
	{ "link", &class_java_util_LinkedList$Link, offsetof(java_util_LinkedList$LinkIterator, F_link), "Ljava/util/LinkedList$Link;", 0 },
	{ "lastLink", &class_java_util_LinkedList$Link, offsetof(java_util_LinkedList$LinkIterator, F_lastLink), "Ljava/util/LinkedList$Link;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_LinkedList$LinkIterator_java_util_LinkedList_int, 0, "(Ljava/util/LinkedList;I)V", 0 },
	{ "add", (intptr_t) M_java_util_LinkedList$LinkIterator_add_java_lang_Object, VTABLE_java_util_LinkedList$LinkIterator_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "hasNext", (intptr_t) M_java_util_LinkedList$LinkIterator_hasNext_R_boolean, VTABLE_java_util_LinkedList$LinkIterator_hasNext_R_boolean, "()Z", 1 },
	{ "hasPrevious", (intptr_t) M_java_util_LinkedList$LinkIterator_hasPrevious_R_boolean, VTABLE_java_util_LinkedList$LinkIterator_hasPrevious_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_LinkedList$LinkIterator_next_R_java_lang_Object, VTABLE_java_util_LinkedList$LinkIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "nextIndex", (intptr_t) M_java_util_LinkedList$LinkIterator_nextIndex_R_int, VTABLE_java_util_LinkedList$LinkIterator_nextIndex_R_int, "()I", 1 },
	{ "previous", (intptr_t) M_java_util_LinkedList$LinkIterator_previous_R_java_lang_Object, VTABLE_java_util_LinkedList$LinkIterator_previous_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "previousIndex", (intptr_t) M_java_util_LinkedList$LinkIterator_previousIndex_R_int, VTABLE_java_util_LinkedList$LinkIterator_previousIndex_R_int, "()I", 1 },
	{ "remove", (intptr_t) M_java_util_LinkedList$LinkIterator_remove, VTABLE_java_util_LinkedList$LinkIterator_remove, "()V", 1 },
	{ "set", (intptr_t) M_java_util_LinkedList$LinkIterator_set_java_lang_Object, VTABLE_java_util_LinkedList$LinkIterator_set_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
};

Class class_java_util_LinkedList$LinkIterator{
		.nativeName = (intptr_t) "java/util/LinkedList$LinkIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_LinkedList$LinkIterator),
		.classVtable = (intptr_t) vtable_java_util_LinkedList$LinkIterator,
		.staticInitializer = (intptr_t) clinit_java_util_LinkedList$LinkIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_LinkedList$LinkIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_LinkedList,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_LinkedList$LinkIterator = registerClass(&class_java_util_LinkedList$LinkIterator);

}

