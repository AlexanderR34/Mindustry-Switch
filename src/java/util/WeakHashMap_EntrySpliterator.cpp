#include "java/util/WeakHashMap_EntrySpliterator.h"
#include "java/util/WeakHashMap_WeakHashMapSpliterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/WeakHashMap_Entry.h"
#include "java/util/WeakHashMap.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/AbstractMap_SimpleImmutableEntry.h"
#include "java/lang/NullPointerException.h"
#include "java/util/function/Consumer.h"
#include "java/lang/ref/WeakReference.h"
#include "java/util/WeakHashMap_EntrySpliterator.h"

extern "C" {


void mark_java_util_WeakHashMap$EntrySpliterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_WeakHashMap$WeakHashMapSpliterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_WeakHashMap$EntrySpliterator *) object;
}

void clinit_java_util_WeakHashMap$EntrySpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_WeakHashMap$WeakHashMapSpliterator(ctx);
}

void init_java_util_WeakHashMap$EntrySpliterator_java_util_WeakHashMap_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySpliterator:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap$EntrySpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1218);
	init_java_util_WeakHashMap$WeakHashMapSpliterator_java_util_WeakHashMap_int_int_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(1219);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_WeakHashMap$EntrySpliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySpliterator:trySplit", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1222);
	jint temp0 = (jint)((func_java_util_WeakHashMap$EntrySpliterator_getFence_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$EntrySpliterator_getFence_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	frame[2].i = ((jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_index);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) + (frame[1].i))) >> (jint(1))));
	LINE_NUMBER(1223);
	if ((frame[2].i) < (frame[3].i)) goto label_4;
	}
	INST_ACONST_NULL();
	goto label_5;
label_4:;
	{
	LINE_NUMBER(1224);
	clinit_java_util_WeakHashMap$EntrySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_WeakHashMap$EntrySpliterator);
	sp[1].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = frame[2].i;
	sp[2].o = frame[0].o;
	jint temp1 = frame[3].i;
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[2].o))->F_index = temp1;
	sp[2].o = frame[0].o;
	jint temp4 = bit_cast<jint>(bit_cast<uint32_t>(((jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[2].o))->F_est)) >> (jint(1)));
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[2].o))->F_est = temp4;
	init_java_util_WeakHashMap$EntrySpliterator_java_util_WeakHashMap_int_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp4, ((jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount));
	sp += 1;
	}
label_5:;
	LINE_NUMBER(1223);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_java_util_WeakHashMap$EntrySpliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySpliterator:forEachRemaining", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1231);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1232);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1233);
	sp[0].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_map;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1234);
	sp[0].o = (jobject)((java_util_WeakHashMap *) NULL_CHECK((frame[5].o)))->F_table;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1235);
	jint temp0 = (jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_fence;
	frame[3].i = temp0;
	if (temp0 >= 0) goto label_6;
	}
	{
	LINE_NUMBER(1236);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_WeakHashMap *) NULL_CHECK((frame[5].o)))->F_modCount;
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = temp0;
	frame[4].i = temp0;
	LINE_NUMBER(1237);
	sp[0].o = frame[0].o;
	jint temp3 = ((jarray) nullCheck(ctx, (frame[6].o)))->length;
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[0].o))->F_fence = temp3;
	frame[3].i = temp3;
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(1240);
	frame[4].i = ((jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount);
	}
label_9:;
	{
	LINE_NUMBER(1241);
	if ((((jarray) nullCheck(ctx, (frame[6].o)))->length) < (frame[3].i)) goto label_10;
	}
	{
	jint temp0 = (jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_index;
	frame[2].i = temp0;
	if (temp0 < 0) goto label_10;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = frame[0].o;
	jint temp1 = frame[3].i;
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[0].o))->F_index = temp1;
	if (temp0 < temp1) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(1243);
	sp[0].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_current;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1244);
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	}
label_14:;
	{
	LINE_NUMBER(1246);
	if ((frame[7].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(1247);
	sp[0].o = frame[6].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(1249);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1250);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	frame[9].o = sp[0].o;
	LINE_NUMBER(1251);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[7].o)))->F_next;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1252);
	if ((frame[8].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(1253);
	sp[0].o = frame[8].o;
	LINE_NUMBER(1254);
	sp[0].o = (jobject)SM_java_util_WeakHashMap_unmaskNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(1255);
	sp[0].o = frame[1].o;
	clinit_java_util_AbstractMap$SimpleImmutableEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_AbstractMap$SimpleImmutableEntry);
	init_java_util_AbstractMap$SimpleImmutableEntry_java_lang_Object_java_lang_Object(ctx, sp[1].o, (frame[10].o), (frame[9].o));
	LINE_NUMBER(1256);
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(1259);
	if ((frame[7].o) != nullptr) goto label_14;
	}
	{
	if ((frame[2].i) < (frame[3].i)) goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(1261);
	if (((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[5].o)))->F_modCount) == (frame[4].i)) goto label_25;
	}
	{
	LINE_NUMBER(1262);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_25:;
	LINE_NUMBER(1263);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_WeakHashMap$EntrySpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySpliterator:tryAdvance", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1267);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1268);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1269);
	sp[0].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_table;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1270);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[3].o)))->length;
	jint temp1 = (jint)((func_java_util_WeakHashMap$EntrySpliterator_getFence_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$EntrySpliterator_getFence_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	if (temp0 < temp1) goto label_5;
	}
	{
	if (((jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_index) < 0) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1271);
	sp[0].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	if (((jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_index) >= (frame[2].i)) goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(1272);
	sp[0].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1273);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[2].o))->F_index;
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[2].o))->F_index = (temp0 + (jint(1)));
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[0].o))->F_current = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0));
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(1275);
	sp[0].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1276);
	sp[0].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK(sp[0].o))->F_value;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1277);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(1278);
	if ((frame[4].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(1279);
	sp[0].o = frame[4].o;
	LINE_NUMBER(1280);
	sp[0].o = (jobject)SM_java_util_WeakHashMap_unmaskNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1281);
	sp[0].o = frame[1].o;
	clinit_java_util_AbstractMap$SimpleImmutableEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_AbstractMap$SimpleImmutableEntry);
	init_java_util_AbstractMap$SimpleImmutableEntry_java_lang_Object_java_lang_Object(ctx, sp[1].o, (frame[6].o), (frame[5].o));
	LINE_NUMBER(1282);
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1283);
	sp[0].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount) == ((jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount)) goto label_19;
	}
	{
	LINE_NUMBER(1284);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(1285);
	popStackFrame(ctx);
	return (jint(1));
	}
label_13:;
	LINE_NUMBER(1287);
	goto label_6;
label_5:;
	{
	LINE_NUMBER(1290);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_util_WeakHashMap$EntrySpliterator_characteristics_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySpliterator:characteristics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1294);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1213);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_WeakHashMap$EntrySpliterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_WeakHashMap$EntrySpliterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_WeakHashMap$EntrySpliterator[] {
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
	(void *) M_java_util_WeakHashMap$WeakHashMapSpliterator_getFence_R_int,
	(void *) M_java_util_WeakHashMap$WeakHashMapSpliterator_estimateSize_R_long,
	(void *) M_java_util_WeakHashMap$EntrySpliterator_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_WeakHashMap$EntrySpliterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_WeakHashMap$EntrySpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterator_getComparator_R_java_util_Comparator,
	(void *) M_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_WeakHashMap$EntrySpliterator,
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
	{ "getFence", "()I" },
	{ "estimateSize", "()J" },
	{ "tryAdvance", "(Ljava/util/function/Consumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "trySplit", "()Ljava/util/Spliterator;" },
	{ "getExactSizeIfKnown", "()J" },
	{ "characteristics", "()I" },
	{ "hasCharacteristics", "(I)Z" },
	{ "getComparator", "()Ljava/util/Comparator;" },
	{ "trySplit", "()Ljava/util/WeakHashMap$EntrySpliterator;" },
};

static jclass interfaces[] { &class_java_util_Spliterator, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_WeakHashMap$EntrySpliterator_java_util_WeakHashMap_int_int_int_int, 0, "(Ljava/util/WeakHashMap;IIII)V", 0 },
	{ "trySplit", (intptr_t) M_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_WeakHashMap$EntrySpliterator, VTABLE_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_WeakHashMap$EntrySpliterator, "()Ljava/util/WeakHashMap$EntrySpliterator;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_WeakHashMap$EntrySpliterator_forEachRemaining_java_util_function_Consumer, VTABLE_java_util_WeakHashMap$EntrySpliterator_forEachRemaining_java_util_function_Consumer, "(Ljava/util/function/Consumer;)V", 1 },
	{ "tryAdvance", (intptr_t) M_java_util_WeakHashMap$EntrySpliterator_tryAdvance_java_util_function_Consumer_R_boolean, VTABLE_java_util_WeakHashMap$EntrySpliterator_tryAdvance_java_util_function_Consumer_R_boolean, "(Ljava/util/function/Consumer;)Z", 1 },
	{ "characteristics", (intptr_t) M_java_util_WeakHashMap$EntrySpliterator_characteristics_R_int, VTABLE_java_util_WeakHashMap$EntrySpliterator_characteristics_R_int, "()I", 1 },
	{ "trySplit", (intptr_t) M_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_Spliterator, VTABLE_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 4161 },
};

Class class_java_util_WeakHashMap$EntrySpliterator{
		.nativeName = (intptr_t) "java/util/WeakHashMap$EntrySpliterator",
		.parentClass = (intptr_t) &class_java_util_WeakHashMap$WeakHashMapSpliterator,
		.size = sizeof(java_util_WeakHashMap$EntrySpliterator),
		.classVtable = (intptr_t) vtable_java_util_WeakHashMap$EntrySpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_WeakHashMap$EntrySpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_WeakHashMap$EntrySpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_WeakHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_WeakHashMap$EntrySpliterator = registerClass(&class_java_util_WeakHashMap$EntrySpliterator);

}

