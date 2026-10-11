#include "java/util/TreeMap_BoundedMapIterator.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/Comparator.h"
#include "java/util/TreeMap_BoundedMapIterator.h"
#include "java/util/TreeMap_Entry.h"
#include "java/util/TreeMap_AbstractMapIterator.h"

extern "C" {


void mark_java_util_TreeMap$BoundedMapIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_TreeMap$AbstractMapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TreeMap$BoundedMapIterator *) object;
	if (self->F_finalNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_finalNode)->clazz)->markFunction)((jobject) self->F_finalNode, mark, depth + 1);
}

void clinit_java_util_TreeMap$BoundedMapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_TreeMap$AbstractMapIterator(ctx);
}

void init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$BoundedMapIterator:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$BoundedMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1049);
	init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap_java_util_TreeMap$Node_int(ctx, (frame[0].o), (frame[3].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(1050);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_2;
	{
	LINE_NUMBER(1052);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	LINE_NUMBER(1053);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(1055);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1056);
	((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalNode = (jref) (frame[4].o);
	LINE_NUMBER(1057);
	((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalOffset = (frame[5].i);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(1059);
	sp[0].o = (jobject)((func_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1060);
	if ((frame[6].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1061);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[6].o)))->F_node;
	((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK(sp[0].o))->F_finalNode = (jref) sp[1].o;
	LINE_NUMBER(1062);
	((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalOffset = ((jint)((java_util_TreeMap$Entry *) NULL_CHECK((frame[6].o)))->F_index);
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(1064);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	LINE_NUMBER(1065);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(1068);
	if ((frame[1].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalNode;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	if (((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_offset) < ((jint)((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalOffset)) goto label_16;
	}
	{
	LINE_NUMBER(1070);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(1071);
	jint temp0 = (jint)((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalOffset;
	sp[0].o = (jobject)((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalNode;
	if (temp0 >= ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) goto label_14;
	}
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	sp += 1;
	goto label_20;
	}
label_19:;
	LINE_NUMBER(1073);
	INST_ACONST_NULL();
label_20:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	sp[2].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[2].o))->F_keys;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_offset));
	sp[3].o = (jobject)((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalNode;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[3].o))->F_keys;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, ((jint)((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalOffset))));
	if (temp0 <= 0) goto label_14;
	}
	{
	LINE_NUMBER(1076);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	}
label_14:;
	LINE_NUMBER(1080);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$BoundedMapIterator:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$BoundedMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1084);
	init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int(ctx, (frame[0].o), (frame[1].o), ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(1085);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$BoundedMapIterator:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$BoundedMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1089);
	init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o), ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx));
	LINE_NUMBER(1090);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap$BoundedMapIterator_makeBoundedNext(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$BoundedMapIterator:makeBoundedNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1093);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1094);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[1].o = (jobject)((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalNode;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	if (((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset) != ((jint)((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalOffset)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(1095);
	if ((frame[1].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(1096);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	goto label_1;
	}
label_6:;
	{
	LINE_NUMBER(1098);
	((func_java_util_TreeMap$BoundedMapIterator_makeNext) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$BoundedMapIterator_makeNext])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(1101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$BoundedMapIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$BoundedMapIterator:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1104);
	sp[0].o = (jobject)((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalNode;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((java_util_TreeMap$BoundedMapIterator *) NULL_CHECK((frame[0].o)))->F_finalOffset) != ((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_offset)) goto label_1;
	}
	{
	LINE_NUMBER(1105);
	((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(1107);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$BoundedMapIterator[] {
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
	(void *) M_java_util_TreeMap$BoundedMapIterator_hasNext_R_boolean,
	(void *) M_java_util_TreeMap$AbstractMapIterator_makeNext,
	(void *) M_java_util_TreeMap$AbstractMapIterator_remove,
	(void *) M_java_util_TreeMap$BoundedMapIterator_makeBoundedNext,
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
	{ "makeBoundedNext", "()V" },
};

static FieldMetadata fields[] {
	{ "finalNode", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$BoundedMapIterator, F_finalNode), "Ljava/util/TreeMap$Node;", 0 },
	{ "finalOffset", &class_int, offsetof(java_util_TreeMap$BoundedMapIterator, F_finalOffset), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int, 0, "(Ljava/util/TreeMap$Node;ILjava/util/TreeMap;Ljava/util/TreeMap$Node;I)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_java_util_TreeMap_java_util_TreeMap$Node_int, 0, "(Ljava/util/TreeMap$Node;Ljava/util/TreeMap;Ljava/util/TreeMap$Node;I)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node, 0, "(Ljava/util/TreeMap$Node;ILjava/util/TreeMap;Ljava/util/TreeMap$Node;)V", 0 },
	{ "makeBoundedNext", (intptr_t) M_java_util_TreeMap$BoundedMapIterator_makeBoundedNext, VTABLE_java_util_TreeMap$BoundedMapIterator_makeBoundedNext, "()V", 0 },
	{ "hasNext", (intptr_t) M_java_util_TreeMap$BoundedMapIterator_hasNext_R_boolean, VTABLE_java_util_TreeMap$BoundedMapIterator_hasNext_R_boolean, "()Z", 1 },
};

Class class_java_util_TreeMap$BoundedMapIterator{
		.nativeName = (intptr_t) "java/util/TreeMap$BoundedMapIterator",
		.parentClass = (intptr_t) &class_java_util_TreeMap$AbstractMapIterator,
		.size = sizeof(java_util_TreeMap$BoundedMapIterator),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$BoundedMapIterator,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$BoundedMapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$BoundedMapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$BoundedMapIterator = registerClass(&class_java_util_TreeMap$BoundedMapIterator);

}

