#include "java/util/TreeMap_AbstractMapIterator.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/TreeMap_Node.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/TreeMap_Entry.h"
#include "java/util/TreeMap_AbstractMapIterator.h"

extern "C" {


void mark_java_util_TreeMap$AbstractMapIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$AbstractMapIterator *) object;
	if (self->F_backingMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backingMap)->clazz)->markFunction)((jobject) self->F_backingMap, mark, depth + 1);
	if (self->F_node)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_node)->clazz)->markFunction)((jobject) self->F_node, mark, depth + 1);
	if (self->F_lastNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastNode)->clazz)->markFunction)((jobject) self->F_lastNode, mark, depth + 1);
}

void clinit_java_util_TreeMap$AbstractMapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AbstractMapIterator:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AbstractMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(5644);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(5645);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_backingMap = (jref) (frame[1].o);
	LINE_NUMBER(5646);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount = ((jint)((java_util_TreeMap *) NULL_CHECK((frame[1].o)))->F_modCount);
	LINE_NUMBER(5647);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(5648);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (frame[2].o);
	LINE_NUMBER(5649);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_offset = (frame[3].i);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(5651);
	sp[0].o = (jobject)((func_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(5652);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(5653);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK(sp[1].o))->F_node;
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(5654);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_offset = ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_left_idx);
	}
label_7:;
	LINE_NUMBER(5657);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AbstractMapIterator:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AbstractMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(5660);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp += 3;
	if ((frame[2].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	INST_ALOAD(2);
	sp[-1].i = ((java_util_TreeMap$Node *) NULL_CHECK(sp[-1].o))->F_left_idx;
label_2:;
	{
	sp -= 4;
	init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap_java_util_TreeMap$Node_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i);
	LINE_NUMBER(5661);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AbstractMapIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AbstractMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5664);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[1].o)))->F_root;
	sp[2].o = (jobject)SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[2].o);
	init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap_java_util_TreeMap$Node(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(5665);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$AbstractMapIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AbstractMapIterator:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5668);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_1;
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

void M_java_util_TreeMap$AbstractMapIterator_makeNext(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AbstractMapIterator:makeNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5672);
	jint temp0 = (jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_backingMap;
	if (temp0 == ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(5673);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(5674);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(5675);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(5677);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_lastNode = (jref) sp[1].o;
	LINE_NUMBER(5678);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset = ((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(5679);
	jint temp0 = (jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_offset;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (temp0 == ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) goto label_7;
	}
	{
	LINE_NUMBER(5680);
	sp[0].o = frame[0].o;
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_offset = (((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_offset) + (jint(1)));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(5682);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(5683);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(5684);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_offset = ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_left_idx);
	}
label_9:;
	LINE_NUMBER(5687);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_TreeMap$AbstractMapIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AbstractMapIterator:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5690);
	jint temp0 = (jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_backingMap;
	if (temp0 != ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(5691);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(5692);
	frame[1].i = ((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset);
	LINE_NUMBER(5693);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(5694);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (temp0 != ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx)) goto label_7;
	}
	{
	LINE_NUMBER(5695);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((func_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(5696);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (temp0 != ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) goto label_10;
	}
	{
	LINE_NUMBER(5697);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((func_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(5699);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	frame[3].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx);
	LINE_NUMBER(5700);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	sp[0].o = (jobject)((func_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(5701);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_9;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (temp0 <= ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) goto label_9;
	}
	{
	LINE_NUMBER(5703);
	sp[0].o = frame[0].o;
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_offset = (((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_offset) - (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(5706);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_15;
	}
	{
	LINE_NUMBER(5708);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(5709);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_node;
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(5710);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_offset = ((jint)((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_index);
	}
label_15:;
	{
	LINE_NUMBER(5712);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode = (jref) (jobject(nullptr));
	LINE_NUMBER(5713);
	sp[0].o = frame[0].o;
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = (((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount) + (jint(1)));
	LINE_NUMBER(5714);
	goto label_21;
	}
label_3:;
	{
	LINE_NUMBER(5715);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(5718);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_21:;
	LINE_NUMBER(5720);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$AbstractMapIterator[] {
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
	(void *) M_java_util_TreeMap$AbstractMapIterator_hasNext_R_boolean,
	(void *) M_java_util_TreeMap$AbstractMapIterator_makeNext,
	(void *) M_java_util_TreeMap$AbstractMapIterator_remove,
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
	{ "makeNext", "()V" },
	{ "remove", "()V" },
};

static FieldMetadata fields[] {
	{ "backingMap", &class_java_util_TreeMap, offsetof(java_util_TreeMap$AbstractMapIterator, F_backingMap), "Ljava/util/TreeMap;", 0 },
	{ "expectedModCount", &class_int, offsetof(java_util_TreeMap$AbstractMapIterator, F_expectedModCount), "I", 0 },
	{ "node", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$AbstractMapIterator, F_node), "Ljava/util/TreeMap$Node;", 0 },
	{ "lastNode", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$AbstractMapIterator, F_lastNode), "Ljava/util/TreeMap$Node;", 0 },
	{ "offset", &class_int, offsetof(java_util_TreeMap$AbstractMapIterator, F_offset), "I", 0 },
	{ "lastOffset", &class_int, offsetof(java_util_TreeMap$AbstractMapIterator, F_lastOffset), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap_java_util_TreeMap$Node_int, 0, "(Ljava/util/TreeMap;Ljava/util/TreeMap$Node;I)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap_java_util_TreeMap$Node, 0, "(Ljava/util/TreeMap;Ljava/util/TreeMap$Node;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap, 0, "(Ljava/util/TreeMap;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_TreeMap$AbstractMapIterator_hasNext_R_boolean, VTABLE_java_util_TreeMap$AbstractMapIterator_hasNext_R_boolean, "()Z", 1 },
	{ "makeNext", (intptr_t) M_java_util_TreeMap$AbstractMapIterator_makeNext, VTABLE_java_util_TreeMap$AbstractMapIterator_makeNext, "()V", 16 },
	{ "remove", (intptr_t) M_java_util_TreeMap$AbstractMapIterator_remove, VTABLE_java_util_TreeMap$AbstractMapIterator_remove, "()V", 17 },
};

Class class_java_util_TreeMap$AbstractMapIterator{
		.nativeName = (intptr_t) "java/util/TreeMap$AbstractMapIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_TreeMap$AbstractMapIterator),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$AbstractMapIterator,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$AbstractMapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$AbstractMapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$AbstractMapIterator = registerClass(&class_java_util_TreeMap$AbstractMapIterator);

}

