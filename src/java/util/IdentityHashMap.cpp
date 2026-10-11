#include "java/util/IdentityHashMap.h"
#include "java/util/IdentityHashMap_IdentityHashMapIterator.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/IdentityHashMap_IdentityHashMapEntrySet.h"
#include "java/util/Map.h"
#include "java/util/IdentityHashMap_2.h"
#include "java/util/IdentityHashMap.h"
#include "java/util/IdentityHashMap_1.h"
#include "java/util/IdentityHashMap_IdentityHashMapEntry.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/AbstractMap.h"
#include "java/lang/System.h"

extern "C" {

jint SF_java_util_IdentityHashMap_DEFAULT_MAX_SIZE;
jint SF_java_util_IdentityHashMap_loadFactor;
jobject SF_java_util_IdentityHashMap_NULL_OBJECT;

void mark_java_util_IdentityHashMap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_IdentityHashMap_NULL_OBJECT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_IdentityHashMap_NULL_OBJECT)->clazz)->markFunction)((jobject) SF_java_util_IdentityHashMap_NULL_OBJECT, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_IdentityHashMap *) object;
	if (self->F_elementData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elementData)->clazz)->markFunction)((jobject) self->F_elementData, mark, depth + 1);
}

void init_java_util_IdentityHashMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_IdentityHashMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(231);
	init_java_util_IdentityHashMap_int(ctx, (frame[0].o), (21));
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_IdentityHashMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_IdentityHashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(241);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(69);
	((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_modCount = (jint(0));
	LINE_NUMBER(242);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(243);
	((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_java_util_IdentityHashMap_getThreshold_int_R_int(ctx, (frame[0].o), (frame[1].i));
	((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_threshold = temp0;
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp1 = (jint)M_java_util_IdentityHashMap_computeElementArraySize_R_int(ctx, (frame[0].o));
	sp[1].o = (jobject)M_java_util_IdentityHashMap_newElementArray_int_R_Array1_java_lang_Object(ctx, sp[1].o, temp1);
	((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_elementData = (jref) sp[1].o;
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(247);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_IdentityHashMap_getThreshold_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:getThreshold", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(254);
	if ((frame[1].i) <= (jint(3))) goto label_1;
	}
	INST_ILOAD(1);
	goto label_2;
label_1:;
	INST_ICONST(3);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_IdentityHashMap_computeElementArraySize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:computeElementArraySize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	frame[1].i = ((jint((((jlong(((jint)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_threshold))) * (jlong(10000ll))) / (jlong(7500ll))))) * (jint(2)));
	LINE_NUMBER(261);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	jint temp0 = -(frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ILOAD(1);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap_newElementArray_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:newElementArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_IdentityHashMap_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_IdentityHashMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp += 1;
	if (temp0 >= (6)) goto label_1;
	}
	INST_BIPUSH(11);
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp1 = temp0 * (jint(2));
	sp[0].i = temp1;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	init_java_util_IdentityHashMap_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(283);
	M_java_util_IdentityHashMap_putAllImpl_java_util_Map(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap_massageValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:massageValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(288);
	sp[0].o = frame[1].o;
	clinit_java_util_IdentityHashMap(ctx);
	sp[1].o = (jobject)SF_java_util_IdentityHashMap_NULL_OBJECT;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_java_util_IdentityHashMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(299);
	((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(300);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(300);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_IdentityHashMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:containsKey", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(317);
	clinit_java_util_IdentityHashMap(ctx);
	sp[0].o = (jobject)SF_java_util_IdentityHashMap_NULL_OBJECT;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (jint)M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].i = temp0;
	LINE_NUMBER(321);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != (frame[1].o)) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_IdentityHashMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:containsValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(334);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(335);
	clinit_java_util_IdentityHashMap(ctx);
	sp[0].o = (jobject)SF_java_util_IdentityHashMap_NULL_OBJECT;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(338);
	frame[2].i = (jint(1));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != (frame[1].o)) goto label_6;
	}
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(338);
	frame[2].i = ((frame[2].i) + (jint(2)));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(355);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(356);
	clinit_java_util_IdentityHashMap(ctx);
	sp[0].o = (jobject)SF_java_util_IdentityHashMap_NULL_OBJECT;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (jint)M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].i = temp0;
	LINE_NUMBER(361);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(363);
	sp[0].o = (jobject)M_java_util_IdentityHashMap_massageValue_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap_getEntry_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:getEntry", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(370);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(371);
	clinit_java_util_IdentityHashMap(ctx);
	sp[0].o = (jobject)SF_java_util_IdentityHashMap_NULL_OBJECT;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(374);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (jint)M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].i = temp0;
	LINE_NUMBER(375);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)M_java_util_IdentityHashMap_getEntry_int_R_java_util_IdentityHashMap$IdentityHashMapEntry(ctx, (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap_getEntry_int_R_java_util_IdentityHashMap$IdentityHashMapEntry(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:getEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(389);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(391);
	sp[0].o = frame[2].o;
	clinit_java_util_IdentityHashMap(ctx);
	sp[1].o = (jobject)SF_java_util_IdentityHashMap_NULL_OBJECT;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(392);
	frame[2].o = (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[3].o;
	clinit_java_util_IdentityHashMap(ctx);
	sp[1].o = (jobject)SF_java_util_IdentityHashMap_NULL_OBJECT;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(395);
	frame[3].o = (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(398);
	clinit_java_util_IdentityHashMap$IdentityHashMapEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_IdentityHashMap$IdentityHashMapEntry);
	init_java_util_IdentityHashMap$IdentityHashMapEntry_java_lang_Object_java_lang_Object(ctx, sp[0].o, (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:findIndex", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(406);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(407);
	jint temp0 = (jint)M_java_util_IdentityHashMap_getModuloHash_java_lang_Object_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(408);
	frame[5].i = ((((frame[4].i) + (frame[3].i)) - (jint(2))) % (frame[3].i));
	}
label_3:;
	{
	LINE_NUMBER(409);
	if ((frame[4].i) == (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(410);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))) == (frame[1].o)) goto label_4;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))) != nullptr) goto label_6;
	}
	LINE_NUMBER(415);
	goto label_4;
label_6:;
	{
	LINE_NUMBER(417);
	frame[4].i = (((frame[4].i) + (jint(2))) % (frame[3].i));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_IdentityHashMap_getModuloHash_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:getModuloHash", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(423);
	jint temp0 = (jint)SM_java_lang_System_identityHashCode_java_lang_Object_R_int(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (((temp0 & (jint(2147483647))) % ((frame[2].i) / (jint(2)))) * (jint(2)));
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:put", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(438);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(439);
	frame[4].o = (frame[2].o);
	LINE_NUMBER(440);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(441);
	clinit_java_util_IdentityHashMap(ctx);
	sp[0].o = (jobject)SF_java_util_IdentityHashMap_NULL_OBJECT;
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(444);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(445);
	clinit_java_util_IdentityHashMap(ctx);
	sp[0].o = (jobject)SF_java_util_IdentityHashMap_NULL_OBJECT;
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (jint)M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].i = temp0;
	LINE_NUMBER(451);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))) == (frame[3].o)) goto label_8;
	}
	{
	LINE_NUMBER(452);
	sp[0].o = frame[0].o;
	((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 <= ((jint)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_11;
	}
	{
	LINE_NUMBER(454);
	M_java_util_IdentityHashMap_rehash(ctx, (frame[0].o));
	LINE_NUMBER(455);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (jint)M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].i = temp0;
	}
label_11:;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)) = (frame[3].o);
	LINE_NUMBER(460);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[5].i) + (jint(1)))) = (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[5].i) + (jint(1)))));
	LINE_NUMBER(465);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[5].i) + (jint(1)))) = (frame[4].o);
	LINE_NUMBER(467);
	sp[0].o = (jobject)M_java_util_IdentityHashMap_massageValue_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_IdentityHashMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:putAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(482);
	M_java_util_IdentityHashMap_putAllImpl_java_util_Map(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_IdentityHashMap_rehash(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:rehash", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[1].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) << (jint(1)));
	LINE_NUMBER(487);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(488);
	frame[1].i = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)M_java_util_IdentityHashMap_newElementArray_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(491);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(493);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(495);
	jint temp0 = (jint)M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(496);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)) = (frame[4].o);
	LINE_NUMBER(497);
	sp[0].o = frame[2].o;
	jint temp1 = (frame[5].i) + (jint(1));
	sp[1].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((frame[3].i) + (jint(1)))));
	}
label_9:;
	{
	LINE_NUMBER(491);
	frame[3].i = ((frame[3].i) + (jint(2)));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(500);
	((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData = (jref) (frame[2].o);
	LINE_NUMBER(501);
	M_java_util_IdentityHashMap_computeMaxSize(ctx, (frame[0].o));
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_IdentityHashMap_computeMaxSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:computeMaxSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(505);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_threshold = (jint((((jlong(((((jarray) nullCheck(ctx, sp[1].o))->length) / (jint(2))))) * (jlong(7500ll))) / (jlong(10000ll)))));
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:remove", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(518);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(519);
	clinit_java_util_IdentityHashMap(ctx);
	sp[0].o = (jobject)SF_java_util_IdentityHashMap_NULL_OBJECT;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(525);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (jint)M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].i = temp0;
	frame[3].i = temp0;
	LINE_NUMBER(527);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) == (frame[1].o)) goto label_5;
	}
	{
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[3].i) + (jint(1)))));
	LINE_NUMBER(536);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[8].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_8:;
	{
	LINE_NUMBER(538);
	frame[4].i = (((frame[4].i) + (jint(2))) % (frame[8].i));
	LINE_NUMBER(539);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(540);
	if ((frame[7].o) != nullptr) goto label_11;
	}
	LINE_NUMBER(541);
	goto label_13;
label_11:;
	{
	LINE_NUMBER(544);
	jint temp0 = (jint)M_java_util_IdentityHashMap_getModuloHash_java_lang_Object_int_R_int(ctx, (frame[0].o), (frame[7].o), (frame[8].i));
	frame[5].i = temp0;
	LINE_NUMBER(545);
	if ((frame[5].i) <= (frame[3].i)) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(546);
	if ((frame[4].i) >= (frame[3].i)) goto label_18;
	}
	{
	LINE_NUMBER(547);
	if ((frame[2].i) != 0) goto label_20;
	}
	{
	if ((frame[5].i) > (frame[4].i)) goto label_21;
	}
label_20:;
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	INST_ISTORE(2);
	goto label_23;
label_18:;
	{
	LINE_NUMBER(549);
	if ((frame[2].i) == 0) goto label_24;
	}
	{
	if ((frame[5].i) > (frame[4].i)) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	INST_ISTORE(2);
label_23:;
	{
	LINE_NUMBER(551);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[7].o);
	LINE_NUMBER(553);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (frame[3].i) + (jint(1));
	sp[1].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(554);
	frame[3].i = (frame[4].i);
	goto label_8;
	}
label_13:;
	{
	LINE_NUMBER(558);
	sp[0].o = frame[0].o;
	((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(559);
	sp[0].o = frame[0].o;
	((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(562);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(563);
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[3].i) + (jint(1)))) = (jobject(nullptr));
	LINE_NUMBER(565);
	sp[0].o = (jobject)M_java_util_IdentityHashMap_massageValue_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:entrySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(577);
	clinit_java_util_IdentityHashMap$IdentityHashMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_IdentityHashMap$IdentityHashMapEntrySet);
	init_java_util_IdentityHashMap$IdentityHashMapEntrySet_java_util_IdentityHashMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:keySet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(590);
	sp[0].o = frame[0].o;
	clinit_java_util_IdentityHashMap$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_IdentityHashMap$1);
	init_java_util_IdentityHashMap$1_java_util_IdentityHashMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_keySet = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(651);
	sp[0].o = frame[0].o;
	clinit_java_util_IdentityHashMap$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_IdentityHashMap$2);
	init_java_util_IdentityHashMap$2_java_util_IdentityHashMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_IdentityHashMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(716);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(717);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(719);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(720);
	frame[2].o = (checkCast(ctx, &class_java_util_Map, (frame[1].o)));
	LINE_NUMBER(721);
	jint temp0 = (jint)((func_java_util_IdentityHashMap_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_IdentityHashMap_size_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == temp1) goto label_6;
	}
	{
	LINE_NUMBER(722);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((func_java_util_IdentityHashMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_IdentityHashMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(727);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(729);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_IdentityHashMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(741);
	if (((jint)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jint M_java_util_IdentityHashMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return ((jint)((java_util_IdentityHashMap *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

void M_java_util_IdentityHashMap_putAllImpl_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:putAllImpl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(756);
	M_java_util_AbstractMap_putAll_java_util_Map(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(758);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_IdentityHashMap_access$000_java_util_IdentityHashMap_int_R_java_util_IdentityHashMap$IdentityHashMapEntry(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:access$000", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_IdentityHashMap(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)M_java_util_IdentityHashMap_getEntry_int_R_java_util_IdentityHashMap$IdentityHashMapEntry(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_IdentityHashMap_access$100_java_util_IdentityHashMap_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:access$100", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_IdentityHashMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)M_java_util_IdentityHashMap_getEntry_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_IdentityHashMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractMap(ctx);
	SF_java_util_IdentityHashMap_DEFAULT_MAX_SIZE = jint(21);
	SF_java_util_IdentityHashMap_loadFactor = jint(7500);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_IdentityHashMap(ctx);
	{
	LINE_NUMBER(76);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_java_util_IdentityHashMap(ctx);
	SF_java_util_IdentityHashMap_NULL_OBJECT = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_IdentityHashMap[] {
	(void *) M_java_util_AbstractMap_hashCode_R_int,
	(void *) M_java_util_IdentityHashMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_IdentityHashMap_clear,
	(void *) M_java_util_IdentityHashMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_IdentityHashMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_IdentityHashMap_entrySet_R_java_util_Set,
	(void *) M_java_util_IdentityHashMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_IdentityHashMap_isEmpty_R_boolean,
	(void *) M_java_util_IdentityHashMap_keySet_R_java_util_Set,
	(void *) M_java_util_IdentityHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_IdentityHashMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_IdentityHashMap_size_R_int,
	(void *) M_java_util_IdentityHashMap_values_R_java_util_Collection,
	(void *) M_java_util_IdentityHashMap_getThreshold_int_R_int,
	(void *) M_java_util_IdentityHashMap_computeElementArraySize_R_int,
	(void *) M_java_util_IdentityHashMap_newElementArray_int_R_Array1_java_lang_Object,
	(void *) M_java_util_IdentityHashMap_massageValue_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_IdentityHashMap_getEntry_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry,
	(void *) M_java_util_IdentityHashMap_getEntry_int_R_java_util_IdentityHashMap$IdentityHashMapEntry,
	(void *) M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int,
	(void *) M_java_util_IdentityHashMap_getModuloHash_java_lang_Object_int_R_int,
	(void *) M_java_util_IdentityHashMap_rehash,
	(void *) M_java_util_IdentityHashMap_computeMaxSize,
	(void *) M_java_util_IdentityHashMap_putAllImpl_java_util_Map,
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
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "forEach", "(Ljava/util/function/BiConsumer;)V" },
	{ "replaceAll", "(Ljava/util/function/BiFunction;)V" },
	{ "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" },
	{ "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "values", "()Ljava/util/Collection;" },
	{ "getThreshold", "(I)I" },
	{ "computeElementArraySize", "()I" },
	{ "newElementArray", "(I)[Ljava/lang/Object;" },
	{ "massageValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getEntry", "(Ljava/lang/Object;)Ljava/util/IdentityHashMap$IdentityHashMapEntry;" },
	{ "getEntry", "(I)Ljava/util/IdentityHashMap$IdentityHashMapEntry;" },
	{ "findIndex", "(Ljava/lang/Object;[Ljava/lang/Object;)I" },
	{ "getModuloHash", "(Ljava/lang/Object;I)I" },
	{ "rehash", "()V" },
	{ "computeMaxSize", "()V" },
	{ "putAllImpl", "(Ljava/util/Map;)V" },
};

static jclass interfaces[] { &class_java_util_Map, };

static jclass innerClasses[] {
	&class_java_util_IdentityHashMap$IdentityHashMapEntry,
	&class_java_util_IdentityHashMap$IdentityHashMapEntrySet,
	&class_java_util_IdentityHashMap$IdentityHashMapIterator,
};

static FieldMetadata fields[] {
	{ "elementData", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_IdentityHashMap, F_elementData), "[Ljava/lang/Object;", 128 },
	{ "size", &class_int, offsetof(java_util_IdentityHashMap, F_size), "I", 0 },
	{ "threshold", &class_int, offsetof(java_util_IdentityHashMap, F_threshold), "I", 128 },
	{ "DEFAULT_MAX_SIZE", &class_int, (intptr_t) &SF_java_util_IdentityHashMap_DEFAULT_MAX_SIZE, "I", 26 },
	{ "loadFactor", &class_int, (intptr_t) &SF_java_util_IdentityHashMap_loadFactor, "I", 26 },
	{ "modCount", &class_int, offsetof(java_util_IdentityHashMap, F_modCount), "I", 128 },
	{ "NULL_OBJECT", &class_java_lang_Object, (intptr_t) &SF_java_util_IdentityHashMap_NULL_OBJECT, "Ljava/lang/Object;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_IdentityHashMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_IdentityHashMap_int, 0, "(I)V", 1 },
	{ "getThreshold", (intptr_t) M_java_util_IdentityHashMap_getThreshold_int_R_int, VTABLE_java_util_IdentityHashMap_getThreshold_int_R_int, "(I)I", 2 },
	{ "computeElementArraySize", (intptr_t) M_java_util_IdentityHashMap_computeElementArraySize_R_int, VTABLE_java_util_IdentityHashMap_computeElementArraySize_R_int, "()I", 2 },
	{ "newElementArray", (intptr_t) M_java_util_IdentityHashMap_newElementArray_int_R_Array1_java_lang_Object, VTABLE_java_util_IdentityHashMap_newElementArray_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 2 },
	{ "<init>", (intptr_t) init_java_util_IdentityHashMap_java_util_Map, 0, "(Ljava/util/Map;)V", 1 },
	{ "massageValue", (intptr_t) M_java_util_IdentityHashMap_massageValue_java_lang_Object_R_java_lang_Object, VTABLE_java_util_IdentityHashMap_massageValue_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "clear", (intptr_t) M_java_util_IdentityHashMap_clear, VTABLE_java_util_IdentityHashMap_clear, "()V", 1 },
	{ "containsKey", (intptr_t) M_java_util_IdentityHashMap_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_IdentityHashMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsValue", (intptr_t) M_java_util_IdentityHashMap_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_IdentityHashMap_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "get", (intptr_t) M_java_util_IdentityHashMap_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_IdentityHashMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "getEntry", (intptr_t) M_java_util_IdentityHashMap_getEntry_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry, VTABLE_java_util_IdentityHashMap_getEntry_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry, "(Ljava/lang/Object;)Ljava/util/IdentityHashMap$IdentityHashMapEntry;", 2 },
	{ "getEntry", (intptr_t) M_java_util_IdentityHashMap_getEntry_int_R_java_util_IdentityHashMap$IdentityHashMapEntry, VTABLE_java_util_IdentityHashMap_getEntry_int_R_java_util_IdentityHashMap$IdentityHashMapEntry, "(I)Ljava/util/IdentityHashMap$IdentityHashMapEntry;", 2 },
	{ "findIndex", (intptr_t) M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int, VTABLE_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int, "(Ljava/lang/Object;[Ljava/lang/Object;)I", 2 },
	{ "getModuloHash", (intptr_t) M_java_util_IdentityHashMap_getModuloHash_java_lang_Object_int_R_int, VTABLE_java_util_IdentityHashMap_getModuloHash_java_lang_Object_int_R_int, "(Ljava/lang/Object;I)I", 2 },
	{ "put", (intptr_t) M_java_util_IdentityHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_IdentityHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putAll", (intptr_t) M_java_util_IdentityHashMap_putAll_java_util_Map, VTABLE_java_util_IdentityHashMap_putAll_java_util_Map, "(Ljava/util/Map;)V", 1 },
	{ "rehash", (intptr_t) M_java_util_IdentityHashMap_rehash, VTABLE_java_util_IdentityHashMap_rehash, "()V", 2 },
	{ "computeMaxSize", (intptr_t) M_java_util_IdentityHashMap_computeMaxSize, VTABLE_java_util_IdentityHashMap_computeMaxSize, "()V", 2 },
	{ "remove", (intptr_t) M_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "entrySet", (intptr_t) M_java_util_IdentityHashMap_entrySet_R_java_util_Set, VTABLE_java_util_IdentityHashMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "keySet", (intptr_t) M_java_util_IdentityHashMap_keySet_R_java_util_Set, VTABLE_java_util_IdentityHashMap_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "values", (intptr_t) M_java_util_IdentityHashMap_values_R_java_util_Collection, VTABLE_java_util_IdentityHashMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "equals", (intptr_t) M_java_util_IdentityHashMap_equals_java_lang_Object_R_boolean, VTABLE_java_util_IdentityHashMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "isEmpty", (intptr_t) M_java_util_IdentityHashMap_isEmpty_R_boolean, VTABLE_java_util_IdentityHashMap_isEmpty_R_boolean, "()Z", 1 },
	{ "size", (intptr_t) M_java_util_IdentityHashMap_size_R_int, VTABLE_java_util_IdentityHashMap_size_R_int, "()I", 1 },
	{ "putAllImpl", (intptr_t) M_java_util_IdentityHashMap_putAllImpl_java_util_Map, VTABLE_java_util_IdentityHashMap_putAllImpl_java_util_Map, "(Ljava/util/Map;)V", 2 },
	{ "access$000", (intptr_t) SM_java_util_IdentityHashMap_access$000_java_util_IdentityHashMap_int_R_java_util_IdentityHashMap$IdentityHashMapEntry, 0, "(Ljava/util/IdentityHashMap;I)Ljava/util/IdentityHashMap$IdentityHashMapEntry;", 4104 },
	{ "access$100", (intptr_t) SM_java_util_IdentityHashMap_access$100_java_util_IdentityHashMap_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry, 0, "(Ljava/util/IdentityHashMap;Ljava/lang/Object;)Ljava/util/IdentityHashMap$IdentityHashMapEntry;", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_util_IdentityHashMap, 0, "()V", 8 },
};

Class class_java_util_IdentityHashMap{
		.nativeName = (intptr_t) "java/util/IdentityHashMap",
		.parentClass = (intptr_t) &class_java_util_AbstractMap,
		.size = sizeof(java_util_IdentityHashMap),
		.classVtable = (intptr_t) vtable_java_util_IdentityHashMap,
		.staticInitializer = (intptr_t) clinit_java_util_IdentityHashMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_IdentityHashMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_IdentityHashMap = registerClass(&class_java_util_IdentityHashMap);

}
